//*****************************************************************************
//
// lwipopts.h - Configuration file for lwIP
//
//*****************************************************************************
//
// NOTE:  This file has been derived from the lwIP/src/include/lwip/opt.h
// header file.
//
// For additional details, refer to the original "opt.h" file, and lwIP
// documentation.
//
//*****************************************************************************

#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

// whatever we added here as definitions, that means it has to be here!
// by fide
#ifndef _MSC_VER
	#define LWIP_DONT_PROVIDE_BYTEORDER_FUNCTIONS	1
#endif

#define NO_SYS					1
#define SYS_LIGHTWEIGHT_PROT    0
#define MEM_ALIGNMENT			4
#define MEM_SIZE				(24 * 1024)
#define TCP_MSS					768
#define LWIP_IGMP				1
#define LWIP_DHCP				1
#define LWIP_DNS				1
#define LWIP_NETCONN			0
#define LWIP_SOCKET				0

#define SNTP_MAX_SERVERS		4
#define SNTP_SERVER_DNS			1

#define	 MEMP_NUM_SYS_TIMEOUT	(LWIP_NUM_SYS_TIMEOUT_INTERNAL + 4)    // +4 for applications

#include "../rtc.h"
#define SNTP_SET_SYSTEM_TIME(x) sntp_set_system_time(x)



//#define LWIP_STATS_DISPLAY		0
//#define LWIP_DEBUG				1
//#define LWIP_DBG_TYPES_ON				(LWIP_DBG_ON | LWIP_DBG_TRACE | LWIP_DBG_STATE | LWIP_DBG_FRESH | LWIP_DBG_LEVEL_WARNING | LWIP_DBG_LEVEL_SERIOUS)

//#define ETHARP_DEBUG                    LWIP_DBG_ON
//#define NETIF_DEBUG                     LWIP_DBG_ON
//#define PBUF_DEBUG                      LWIP_DBG_ON

//#define ICMP_DEBUG                      LWIP_DBG_ON
//#define IGMP_DEBUG                      LWIP_DBG_ON

//#define IP_DEBUG						LWIP_DBG_ON
//#define IP_REASS_DEBUG					LWIP_DBG_ON
//#define RAW_DEBUG                       LWIP_DBG_ON
//#define MEM_DEBUG                       LWIP_DBG_ON
//#define MEMP_DEBUG                      LWIP_DBG_ON
//#define SYS_DEBUG                       LWIP_DBG_ON
//#define TIMERS_DEBUG					LWIP_DBG_ON

//#define TCP_DEBUG                       LWIP_DBG_ON
//#define TCP_INPUT_DEBUG                 LWIP_DBG_ON
//#define TCP_FR_DEBUG                    LWIP_DBG_ON
//#define TCP_RTO_DEBUG                   LWIP_DBG_ON
//#define TCP_CWND_DEBUG                  LWIP_DBG_ON
//#define TCP_WND_DEBUG                   LWIP_DBG_ON
//#define TCP_OUTPUT_DEBUG                LWIP_DBG_ON
//#define TCP_RST_DEBUG                   LWIP_DBG_ON
//#define TCP_QLEN_DEBUG                  LWIP_DBG_ON
//#define UDP_DEBUG                       LWIP_DBG_ON
//#define TCPIP_DEBUG                     LWIP_DBG_ON
//#define DHCP_DEBUG                      LWIP_DBG_ON
//#define SNMP_MSG_DEBUG                  LWIP_DBG_ON
//#define SNMP_MIB_DEBUG                  LWIP_DBG_ON
//#define DNS_DEBUG                       LWIP_DBG_ON
//#define SMTP_DEBUG						LWIP_DBG_ON
//#define SNTP_DEBUG						LWIP_DBG_ON

//*****************************************************************************


#endif /* __LWIPOPTS_H__ */
