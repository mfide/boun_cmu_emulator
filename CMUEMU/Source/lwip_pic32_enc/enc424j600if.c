/*! 
 * @file "enc424j600if.c"
 * @author Mehmet Fide
 * @version 2.0
 * @date Feb 2019
 *
 * @brief <b> Module Design Description </b>
 *
 * @section DEF DEFINITIONS
 * <i> This is the DEFINITIONS. </i>
 *
 * @section REF REFERENCES
 * - ENC424J600/624J600 Data sheet (DS39935) @n
 * - IEEE 802.3 @n
 * - lwIP Stack @n
 *
 * @section BD_OD BRIEF DESCRIPTION & OVERALL DESIGN 
 * Medium Access Control (MAC) Interface for ENC424J600
 * Provides interface to ENC424J600 Ethernet controller for lwIP Stack
 *****************************************************************************/
#include "lwipopts.h"
#include "lwiplib.h"
#include "lwip/sys.h"
#include "arch/cc.h"
#include "lwip/ip4_addr.h"

#include "lwip/def.h"
#include "lwip/mem.h"
#include "lwip/pbuf.h"
#include "lwip/stats.h"
#include "lwip/snmp.h"
#include "lwip/ethip6.h"
#include "lwip/etharp.h"
#include "netif/ppp/pppoe.h"
#include "netif/ethernet.h"
#include "lwip/init.h"
#include "lwip/dhcp.h"
#include "lwip/dns.h"
#include "lwip/timeouts.h"
#include "lwip/apps/netbiosns.h"
#include "lwip/apps/lwiperf.h"
#include "lwip/apps/sntp.h"

#include "enc424j600.h"
#include "enc424j600if.h"
#include "../flash.h"
#include "../printf.h"
#include "../cmu_emulator.h"

#define CHECK_ENC_WORKING		5000UL	// 5 seconds
#define WAIT_AFTER_POWR_DOWN	500UL	// 500 millisecond

static uint32_t m_wait_stamp = 0;
static uint32_t m_last_enc_check_stamp = 0;

/*
 * Ethernet Phy States
 */
typedef enum
{
	ENC_STATE_SHUTDOWN, 
	ENC_STATE_POWER_DOWN, 
	ENC_STATE_WAIT_AFTER_POWER_DOWN, 
	ENC_STATE_POWER_UP, 
	ENC_STATE_WAIT_AFTER_POWER_UP,
	ENC_STATE_RESET0, 
	ENC_STATE_RESET1, 
	ENC_STATE_INIT, 
	ENC_STATE_PROCESSING
} EENC_STATE;

EENC_STATE m_ENC_STATE = ENC_STATE_POWER_DOWN;

/**
 * Number of pbufs supported in low-level tx/rx pbuf queue.
 *
 */
#ifndef ENC424J600_NUM_PBUF_QUEUE
#define ENC424J600_NUM_PBUF_QUEUE    20
#endif

/* Define those to better describe your network interface. */
#define IFNAME0 'r'
#define IFNAME1 'e'

/* Helper struct to hold a queue of pbufs for transmit and receive. */
typedef struct 
{
	struct pbuf *pbuf[ENC424J600_NUM_PBUF_QUEUE];
	uint32_t qwrite;
	uint32_t qread;
	uint32_t overflow;
} pbufq;

/* Helper macros for accessing pbuf queues. */
#define PBUF_QUEUE_EMPTY(q) \
	(((q)->qwrite == (q)->qread) ? true : false)

#define PBUF_QUEUE_FULL(q) \
	((((((q)->qwrite + 1) % ENC424J600_NUM_PBUF_QUEUE)) == (q)->qread) ? \
	true : false )

/**
 * Helper struct to hold private data used to operate your ethernet interface.
 * Keeping the ethernet address of the MAC in this struct is not necessary
 * as it is already kept in the struct netif.
 * But this is only an example, anyway...
 */
typedef struct 
{
	struct eth_addr *ethaddr;
	/* Add whatever per-interface state that is needed here. */
	pbufq txq;
} enc424j600if;

/**
 * Global variable for this interface's private data.  Needed to allow
 * the interrupt handlers access to this information outside of the
 * context of the lwIP netif.
 *
 */
static enc424j600if enc424j600if_data;

/**
 * Pop a pbuf packet from a pbuf packet queue
 *
 * @param q is the packet queue from which to pop the pbuf.
 *
 * @return pointer to pbuf packet if available, NULL otherwise.
 */
static struct pbuf* dequeue_packet(pbufq *q)
{
	struct pbuf *pBuf;  

	/**
	* This entire function must run within a "critical section" to preserve
	* the integrity of the transmit pbuf queue.
	*
	*/  

	if(PBUF_QUEUE_EMPTY(q)) 
	{
		/* Return a NULL pointer if the queue is empty. */
		pBuf = (struct pbuf *)NULL;
	}
	else 
	{
		/**
		* The queue is not empty so return the next frame from it
		* and adjust the read pointer accordingly.
		*
		*/
		pBuf = q->pbuf[q->qread];
		q->qread = ((q->qread + 1) % ENC424J600_NUM_PBUF_QUEUE);
	}

	/* Return to prior interrupt state and return the pbuf pointer. */
	return(pBuf);
}

static bool packet_in_queue(pbufq *q)
{
	bool result = true;

	if(PBUF_QUEUE_EMPTY(q)) 
	{
		/* Return a NULL pointer if the queue is empty. */
		result = false;
	}

	return(result);
}

/**
* Push a pbuf packet onto a pbuf packet queue
*
* @param p is the pbuf to push onto the packet queue.
* @param q is the packet queue.
*
* @return 1 if successful, 0 if q is full.
*/
static int enqueue_packet(struct pbuf *p, pbufq *q)
{
	int ret; 

	/**
	* This entire function must run within a "critical section" to preserve
	* the integrity of the transmit pbuf queue.
	*
	*/

	if(!PBUF_QUEUE_FULL(q)) 
	{
		/**
		* The queue isn't full so we add the new frame at the current
		* write position and move the write pointer.
		*
		*/
		q->pbuf[q->qwrite] = p;
		q->qwrite = ((q->qwrite + 1) % ENC424J600_NUM_PBUF_QUEUE);
		ret = 1;
	}
	else 
	{
		/**
		* The stack is full so we are throwing away this value.  Keep track
		* of the number of times this happens.
		*
		*/
		q->overflow++;
		ret = 0;
	}

	/* Return to prior interrupt state and return the pbuf pointer. */
	return(ret);
}

/**
 * In this function, the hardware should be initialized.
 * Called from enc424j600if_init().
 *
 * @param netif the already initialized lwip network interface structure
 *        for this ethernetif
 */
static void enc424j600if_hwinit(struct netif *netif)
{
	/* set MAC hardware address length */
	netif->hwaddr_len = ETHARP_HWADDR_LEN;

	/* maximum transfer unit */
	netif->mtu = 1500;

	/* device capabilities */
	/* don't set NETIF_FLAG_ETHARP if this device is not an ethernet one */
	netif->flags = NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP | NETIF_FLAG_IGMP;
	
	// initialize sys_now() function
	sys_init();

	/* reads MAC hardware address */
	/*
	* Configure the Ethernet Controller for normal operation.
	* - Enable TX Duplex Mode
	* - Enable TX Padding
	* - Enable TX CRC Generation
	* - Enable RX Multicast Reception
	*/
	/* Enable the Ethernet Controller transmitter and receiver. */
	/* Enable the Ethernet Interrupt handler. */
	/* Enable Ethernet TX and RX Packet Interrupts. */
	ENC_MACInit(&netif->hwaddr[0]);
}

/**
 * This function should do the actual transmission of the packet. The packet is
 * contained in the pbuf that is passed to the function. This pbuf might be
 * chained.
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @param p the MAC packet to send (e.g. IP packet including MAC addresses and type)
 * @return ERR_OK if the packet could be sent
 *         an err_t value if the packet couldn't be sent
 * @note This function MUST be called with interrupts disabled or with the
 *       ENC424J600 Ethernet transmit fifo protected.
 */
static err_t enc424j600if_transmit(struct netif *netif, struct pbuf *p)
{
	struct pbuf *q;

	/**
	* Fill in the first two bytes of the payload data (configured as padding
	* with ETH_PAD_SIZE = 2) with the total length of the payload data
	* (minus the Ethernet MAC layer header).
	*
	*/
#if ETH_PAD_SIZE
	pbuf_header(p, -ETH_PAD_SIZE); /* drop the padding word */
#endif

	ENC_MACPutHeader((uint8_t*)p->payload, p->tot_len);
	
	pbuf_header(p, -14); /* drop the mac header */

	/* Copy data from the pbuf(s) into the TX Fifo. */
	for(q = p; q != NULL; q = q->next) 
	{
		ENC_MACPutArray((uint8_t*)q->payload, p->len);
	}

	ENC_MACFlush();

	pbuf_header(p, 14); /* reclaim the mac header */
	
#if ETH_PAD_SIZE
	pbuf_header(p, ETH_PAD_SIZE); /* reclaim the padding word */
#endif

	/* Dereference the pbuf from the queue. */
	pbuf_free(p);

	LINK_STATS_INC(link.xmit);

	return(ERR_OK);
}

/**
 * This function with either place the packet into the ENC424J600 transmit fifo,
 * or will place the packet in the interface PBUF Queue for subsequent
 * transmission when the transmitter becomes idle.
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @param p the MAC packet to send (e.g. IP packet including MAC addresses and type)
 * @return ERR_OK if the packet could be sent
 *         an err_t value if the packet couldn't be sent
 *
 */
static err_t enc424j600if_output(struct netif *netif, struct pbuf *p)
{
	enc424j600if* enc = (enc424j600if*)netif->state; 

	/**
	* Bump the reference count on the pbuf to prevent it from being
	* freed till we are done with it.
	*
	*/
	pbuf_ref(p);

	/**
	* If the transmitter is idle, and there is nothing on the queue,
	* send the pbuf now.
	*
	*/  
	if(PBUF_QUEUE_EMPTY(&enc->txq) && ENC_MACIsTxReady()) 
	{
		enc424j600if_transmit(netif, p);
	}
	else
	{
		/* Otherwise place the pbuf on the transmit queue. */
		/* Add to transmit packet queue */
		if(!enqueue_packet(p, &(enc->txq))) 
		{
			/* if no room on the queue, free the pbuf reference and return error. */
			pbuf_free(p);
			return (ERR_MEM);
		}
	}

	/* Return to prior interrupt state and return. */
	return ERR_OK;
}

/**
 * This function will read a single packet from the ENC424J600 ethernet
 * interface, if available, and return a pointer to a pbuf.  The timestamp
 * of the packet will be placed into the pbuf structure.
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @return pointer to pbuf packet if available, NULL otherswise.
 */
static struct pbuf* enc424j600if_receive(struct netif *netif)
{
	struct pbuf *p, *q;
	uint16_t len = 0;

	/* Check if a packet is available, if not, return NULL packet. */
	if(!ENC_MACGetHeader(&len)) 
	{
		return((struct pbuf*)NULL);
	}

	/**
	* Obtain the size of the packet and put it into the "len" variable.
	*
	*/
#if ETH_PAD_SIZE
	len += ETH_PAD_SIZE; /* allow room for Ethernet padding */
#endif

	/* We allocate a pbuf chain of pbufs from the pool. */
	p = pbuf_alloc(PBUF_RAW, len, PBUF_POOL);

	/* If a pbuf was allocated, read the packet into the pbuf. */
	if(p != NULL) 
	{
		#if ETH_PAD_SIZE
			pbuf_header(p, -ETH_PAD_SIZE); /* drop the padding word */
		#endif

		/* Process all but the last buffer in the pbuf chain. */
		for(q = p; q != NULL; q = q->next)
		{
			ENC_MACGetArray((uint8_t*)q->payload, q->len);
		}

		#if ETH_PAD_SIZE
			pbuf_header(p, ETH_PAD_SIZE); /* reclaim the padding word */
		#endif

		/* Adjust the link statistics */
		LINK_STATS_INC(link.recv);
	}
	/* If no pbuf available, just drain the RX fifo. */
	else 
	{
		/* Adjust the link statistics */
		LINK_STATS_INC(link.memerr);
		LINK_STATS_INC(link.drop);
	}

	// Marks the last received packet (obtained using ENC_MACGetHeader())
	// as being processed and frees the buffer memory associated with it
	ENC_MACDiscardRx();

	return(p);
}

/**
 * Should be called at the beginning of the program to set up the
 * network interface. It calls the function enc424j600if_hwinit() to do the
 * actual setup of the hardware.
 *
 * This function should be passed as a parameter to netif_add().
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @return ERR_OK if the loopif is initialized
 *         ERR_MEM if private data couldn't be allocated
 *         any other err_t on error
 */
err_t enc424j600if_init(struct netif *netif)
{
#if LWIP_NETIF_HOSTNAME
  /* Initialize interface hostname */
	netif->hostname = "referans";
#endif /* LWIP_NETIF_HOSTNAME */

  /*
   * Initialize the snmp variables and counters inside the struct netif.
   * The last argument should be replaced with your link speed, in units
   * of bits per second.
   */
  NETIF_INIT_SNMP(netif, snmp_ifType_ethernet_csmacd, 100000000);

  netif->state = &enc424j600if_data;
  netif->name[0] = IFNAME0;
  netif->name[1] = IFNAME1;
  /* We directly use etharp_output() here to save a function call.
   * You can instead declare your own function an call etharp_output()
   * from it if you have to do some checks before sending (e.g. if link
   * is available...) */
  netif->output = etharp_output;
  netif->linkoutput = enc424j600if_output;

  enc424j600if_data.ethaddr = (struct eth_addr *)&(netif->hwaddr[0]);
  enc424j600if_data.txq.qread = enc424j600if_data.txq.qwrite = 0;
  enc424j600if_data.txq.overflow = 0;

  /* initialize the hardware */
  enc424j600if_hwinit(netif);

  return ERR_OK;
}

static void check_queue_and_tx(struct netif *netif)
{
	/* setup pointer to the if state data */
	enc424j600if* enc = (enc424j600if*)netif->state;	

	/* Check if TX fifo is empty and ready to send */
	if(packet_in_queue(&enc->txq))
	{
		if(ENC_MACIsTxReady()) 
		{
			struct pbuf *p;
			p = dequeue_packet(&enc->txq);
			if(p != NULL) 
			{
				enc424j600if_transmit(netif, p);
			}
		}
	}
}

/**
 * Process tx and rx packets at the low-level interrupt.
 *
 * Should be called from the ENC424J600 Ethernet Interrupt Handler.  This
 * function will read packets from the ENC424J600 Ethernet fifo and place them
 * into a pbuf queue.  If the transmitter is idle and there is at least one packet
 * on the transmit queue, it will place it in the transmit fifo and start the
 * transmitter.
 *
 */
static void check_rx(struct netif *netif)
{
	struct pbuf *p;

	/**
	* Process the transmit and receive queues as long as there is receive
	* data available
	*
	*/
	p = enc424j600if_receive(netif);
				
	while(p != NULL) 
	{			
		/* process the packet */
		if(ethernet_input(p, netif) != ERR_OK) 
		{		
			/* drop the packet */
			LWIP_DEBUGF(NETIF_DEBUG, ("enc424j600if_input: input error\n"));
			pbuf_free(p);

			/* Adjust the link statistics */
			LINK_STATS_INC(link.memerr);
			LINK_STATS_INC(link.drop);
		}

		check_queue_and_tx(netif);

		/* Read another packet from the RX fifo */
		p = enc424j600if_receive(netif);
	}
}

//*****************************************************************************
//
// Driverlib headers needed for this library module.
//
//*****************************************************************************

//*****************************************************************************
//
// The lwIP network interface structure for the ENC424J600 Ethernet MAC.
//
//*****************************************************************************
static struct netif g_sNetIF = {0};

//*****************************************************************************
//
// The default IP address aquisition mode.
//
//*****************************************************************************
static uint32_t g_ulIPMode = IPADDR_USE_STATIC;

//*****************************************************************************
//
// The IP address to be used.  This is used during the initialization of the
// stack and when the interface configuration is changed.
//
//*****************************************************************************
static uint32_t g_ulIPAddr;

//*****************************************************************************
//
// The netmask to be used.  This is used during the initialization of the stack
// and when the interface configuration is changed.
//
//*****************************************************************************
static uint32_t g_ulNetMask;

//*****************************************************************************
//
// The gateway address to be used.  This is used during the initialization of
// the stack and when the interface configuration is changed.
//
//*****************************************************************************
static uint32_t g_ulGWAddr;

//*****************************************************************************
//
// Completes the initialization of lwIP.  This is directly called when not
// using a RTOS and provided as a callback to the TCP/IP thread when using a
// RTOS.
//
//*****************************************************************************
static void lwIPPrivateInit(void)
{
	ip_addr_t ip;
	ip_addr_t mask;
	ip_addr_t gw_addr;	
	
	//
	// If not using a RTOS, initialize the lwIP stack.
	//
	lwip_init();

	//
	// Setup the network address values.
	//    
	if(g_ulIPMode == IPADDR_USE_STATIC)
	{		
		ip.addr = htonl(g_ulIPAddr);
		mask.addr = htonl(g_ulNetMask);
		gw_addr.addr = htonl(g_ulGWAddr);					
	}
	else
	{
		ip.addr = 0;

		mask.addr = 0;
		gw_addr.addr = 0;
	}	
    			

	//
	// Create, configure and add the Ethernet controller interface with
	// default settings.  ip_input should be used to send packets directly to
	// the stack when not using a RTOS and tcpip_input should be used to send
	// packets to the TCP/IP thread's queue when using a RTOS.
	//
	netif_add(&g_sNetIF, &ip, &mask, &gw_addr, NULL, enc424j600if_init, ip_input);

	netif_set_default(&g_sNetIF);

	//
	// Bring the interface up.
	//
	netif_set_up(&g_sNetIF);	
    
#if LWIP_DHCP
	if(g_ulIPMode == IPADDR_USE_DHCP)
	{
		dhcp_start(&g_sNetIF);
	}
#endif  
	
	if(ENC_MACCheckLink())
	{
		netif_set_link_up(&g_sNetIF);
	}
	else
	{
		netif_set_link_down(&g_sNetIF);
	}	
}

//*****************************************************************************
//
//! Initializes the lwIP TCP/IP stack.
//!
//! \param pucMAC is a pointer to a six byte array containing the MAC
//! address to be used for the interface.
//! \param ulIPAddr is the IP address to be used (static).
//! \param ulNetMask is the network mask to be used (static).
//! \param ulGWAddr is the Gateway address to be used (static).
//! \param ulIPMode is the IP Address Mode.  \b IPADDR_USE_STATIC will force
//! static IP addressing to be used, \b IPADDR_USE_DHCP will force DHCP with
//! fallback to Link Local (Auto IP), while \b IPADDR_USE_AUTOIP will force
//! Link Local only.
//!
//! This function performs initialization of the lwIP TCP/IP stack for the
//! ENC424J600 Ethernet MAC, including DHCP and/or AutoIP, as configured.
//!
//! \return None.
//
//*****************************************************************************
static void lwIPInit(uint32_t ulIPAddr, uint32_t ulNetMask, uint32_t ulGWAddr, uint32_t ulIPMode)
{
	//
	// Program the MAC address into the Ethernet controller.
	//
	// MAC address is already preprogrammed into ENC424J600

	//
	// Save the network configuration for later use by the private
	// initialization.
	//
	
	g_ulIPMode = ulIPMode;
	g_ulIPAddr = ulIPAddr;
	g_ulNetMask = ulNetMask;
	g_ulGWAddr = ulGWAddr;
	
	lwIPPrivateInit();
}

static void check_enc_chip(void)
{
	uint32_t ts = sys_now();
	if(ts > (m_last_enc_check_stamp + CHECK_ENC_WORKING))
	{
		m_last_enc_check_stamp = ts;

		if(!ENC_Initialized())
		{
			lwIPEthernetRestart();
		}

	}
}

static const char* ntp_srv0 = "0.nettime.pool.ntp.org";
static const char* ntp_srv1 = "1.nettime.pool.ntp.org";
static const char* ntp_srv2 = "2.nettime.pool.ntp.org";
static const char* ntp_srv3 = "3.nettime.pool.ntp.org";

void lwIPEthernetRestart(void)
{
	m_ENC_STATE = ENC_STATE_POWER_DOWN;
}

//*****************************************************************************
//
//! Handles Ethernet interrupts for the lwIP TCP/IP stack.
//!
//! This function handles Ethernet interrupts for the lwIP TCP/IP stack.  At
//! the lowest level, all receive packets are placed into a packet queue for
//! processing at a higher level.  Also, the transmit packet queue is checked
//! and packets are drained and transmitted through the Ethernet MAC as needed.
//! If the system is configured without an RTOS, additional processing is
//! performed at the interrupt level.  The packet queues are processed by the
//! lwIP TCP/IP code, and lwIP periodic timers are serviced (as needed).
//!
//! \return None.
//
//*****************************************************************************
void ProcessEthernet(void)
{
	switch(m_ENC_STATE)
	{
		case ENC_STATE_SHUTDOWN:
		{
			//Nothing To Do
			break;
		}

		case ENC_STATE_POWER_DOWN:
		{
			ENC424J600_PowerDown();
			m_wait_stamp = sys_now();
			m_ENC_STATE = ENC_STATE_WAIT_AFTER_POWER_DOWN;
			break;
		}

		case ENC_STATE_WAIT_AFTER_POWER_DOWN:
		{
			uint32_t ts = sys_now();
			if(ts > (m_wait_stamp + WAIT_AFTER_POWR_DOWN))
			{
				m_ENC_STATE = ENC_STATE_POWER_UP;
			}
			break;
		}

		case ENC_STATE_POWER_UP:
		{
			ENC424J600_PowerUp();
			m_wait_stamp = sys_now();
			m_ENC_STATE = ENC_STATE_WAIT_AFTER_POWER_UP;
			break;
		}

		case ENC_STATE_WAIT_AFTER_POWER_UP:
		{
			uint32_t ts = sys_now();
			if(ts > (m_wait_stamp + WAIT_AFTER_POWR_DOWN))
			{
				ENC424J600_SetEUDAST(0x1234);
				m_ENC_STATE = ENC_STATE_RESET0;
			}
			break;
		}

		case ENC_STATE_RESET0:
		{
			if(ENC424J600_GetEUDAST() == 0x1234)
			{
				ENC424J600_ResetCmd();
				m_ENC_STATE = ENC_STATE_RESET1;
			} 
			else
			{
				// start again
				m_ENC_STATE = ENC_STATE_POWER_DOWN;
			}

			break;
		}

		case ENC_STATE_RESET1:
		{
			if(ENC424J600_ResetCompleted())
			{
				if(ENC424J600_GetEUDAST() == 0x0000)
				{
					m_ENC_STATE = ENC_STATE_INIT;
				}
				else
				{
					// start again
					m_ENC_STATE = ENC_STATE_POWER_DOWN;
				}
			}
			break;
		}

		case ENC_STATE_INIT:
		{
			char netname[16];

			// static ip: 192, 168, 1, 15
			// gateway  : 192, 168, 1, 1
			// lwIPInit(0xC0A8010F, 0xFFFFFF00, 0xC0A80101, IPADDR_USE_STATIC);

			if (g_DeviceSettings.USE_DHCP)
			{
				lwIPInit(0, 0, 0, IPADDR_USE_DHCP);
			}
			else
			{
				lwIPInit(g_DeviceSettings.STATIC_IP, g_DeviceSettings.STATIC_MASK, g_DeviceSettings.STATIC_GATEWAY, IPADDR_USE_STATIC);
			}

			snprintf(netname, sizeof(netname), "BOUNCMUEMU", (uint16_t)DEVSN0);
			netbiosns_set_name(netname);
			netbiosns_init();

			lwiperf_start_tcp_server_default(0, 0);			

			Init_CMU_Server();

			m_ENC_STATE = ENC_STATE_PROCESSING;			
			break;
		}

		case ENC_STATE_PROCESSING:
		{
			if(ENC_InterruptRequest())
			{
				// Read the interrupt status
				uint16_t uStatus = ENC_GetInterruptStatus();

				ENC_DisableGlobalInterrupts();

				// Receive Abort Interrupt Flag bit
				if(uStatus & EIR_RXABTIF)
				{
					// An RX packet was dropped because there is insufficient 
					// space in the RX buffer to store the complete packet or 
					// the PKTCNT field is saturated at FFh
					// 


				}

				// Transmit Abort Interrupt Flag bit
				if(uStatus & EIR_TXABTIF)
				{
					// Packet transmission has been aborted due to an error. 
					// Read the ETXSTAT register to determine the cause. 
					// TXRTS (ECON1<1>) has been cleared by hardware.


					// this will be cleared by hardware
					uStatus &= ~EIR_TXABTIF;
				}

				// RX Packet Pending Interrupt Flag bit
				if(uStatus & EIR_PKTIF)
				{
					// One or more RX packets have been saved and are ready for 
					// software processing. The PKTCNT<7:0> (ESTAT<7:0>) bits 
					// are non-zero. To clear this flag, decrement the PKTCNT bits to
					// zero by setting PKTDEC (ECON1<8>).

					// process rx and tx packets
					check_rx(&g_sNetIF);
				}

				// PHY Link Status Change Interrupt Flag bit
				if(uStatus & EIR_LINKIF)
				{
					// PHY Ethernet link status has changed. 
					// Read PHYLNK (ESTAT<8>) to determine the current state.		 

					if(ENC_MACCheckLink())
					{
						netif_set_link_up(&g_sNetIF);
					}
					else
					{
						netif_set_link_down(&g_sNetIF);
					}
				}

				// clear the flags processed above
				ENC_ClearInterruptFlags(uStatus);

				// enable GIE again
				ENC_EnableGlobalInterrupts();
			}

			// process tx packets
			check_queue_and_tx(&g_sNetIF);

			//
			// Service the lwIP timers.
			//
			sys_check_timeouts();

			check_enc_chip();
            
            stats_display();

			break;
		}

		default:
		{
			// start again
			m_ENC_STATE = ENC_STATE_POWER_DOWN;
			break;
		}
	}
}

//*****************************************************************************
//
//! Returns the IP address for this interface.
//!
//! This function will read and return the currently assigned IP address for
//! the ENC424J600 Ethernet interface.
//!
//! \return Returns the assigned IP address for this interface.
//
//*****************************************************************************
uint32_t lwIPLocalIPAddrGet(void)
{
	return((uint32_t)lwip_ntohl(g_sNetIF.ip_addr.addr));
}

bool lwIPEthernetLinked(void)
{
	return((g_sNetIF.flags & NETIF_FLAG_LINK_UP) != 0);
}

//*****************************************************************************
//
//! Returns the local MAC/HW address for this interface.
//!
//! \param pucMAC is a pointer to an array of bytes used to store the MAC
//! address.
//!
//! This function will read the currently assigned MAC address into the array
//! passed in \e pucMAC.
//!
//! \return None.
//
//*****************************************************************************
void lwIPLocalMACGet(uint8_t* pucMAC)
{
	memcpy((unsigned char*)pucMAC, &g_sNetIF.hwaddr[0], sizeof(g_sNetIF.hwaddr));
}

void lwIPShutdown()
{
	ENC424J600_PowerDown();
	m_ENC_STATE = ENC_STATE_SHUTDOWN;
}

void lwIPPowerUp()
{
	if (m_ENC_STATE == ENC_STATE_SHUTDOWN)
	{
		m_ENC_STATE = ENC_STATE_POWER_UP;
	}
	else
	{
		m_ENC_STATE = ENC_STATE_POWER_DOWN;
	}
}

#ifdef LWIP_DEBUG	
	static void UART3_PullString(const char* msg)
	{ 
		for (uint16_t i=0; msg[i]; i++) 
		{ 
			while(U3STAbits.UTXBF);
			U3TXREG = msg[i];
		}

		while(!U3STAbits.TRMT);
	}

	void sys_assert(const char *msg) 
	{ 
		char tmpbuf[512]; 
		snprintf(tmpbuf, sizeof(tmpbuf), msg);
		UART3_PullString(tmpbuf); 
	} 

	void sys_debug(const char *const fmt,...)
	{ 
		va_list args; 
		char tmpbuf[512]; 

		va_start(args, fmt); 
		vsnprintf(tmpbuf, sizeof(tmpbuf), fmt, args); 
		va_end(args); 

		UART3_PullString(tmpbuf); 
	} 
#endif
