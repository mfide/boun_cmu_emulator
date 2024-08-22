#include "lwip/opt.h"
#include "lwip/debug.h"
#include "lwip/stats.h"
#include "lwip/tcp.h"
#include "lwip/udp.h"

#include "cmu_emulator.h"
#include "crc.h"
#include "printf.h"
#include "rtc.h"
#include "flash.h"

#define		STATE_SOH			0
#define		STATE_LEN			1
#define		STATE_CHRLEN		2
#define		STATE_DATA			3
#define		STATE_CRC			4
#define		STATE_EOH			5
#define		STATE_RESPONSE		6


// .tie5Roanl+Return
typedef struct
{
	struct tcp_pcb* tpcb;
	uint32_t		RXState;
	uint32_t		TXState;
	uint32_t		Pos;
	uint32_t		ChrLen;
	uint32_t		DD_t;
	uint32_t		DD_i;
	uint32_t		DD_e;
	uint32_t		DD_5;
	uint32_t		DD_R;
	uint32_t		DD_o;
	uint32_t		DD_a;
	uint32_t		DD_n;
	uint32_t		DD_l;
	uint32_t		DD_Return;
	uint16_t		CRC16;
} TCMUEMUProtTCP;

typedef struct
{
	struct udp_pcb*	upcb;
	ip_addr_t		addr;
	u16_t			port;
	uint32_t		RXState;
	uint32_t		TXState;
	uint32_t		Pos;
	uint32_t		ChrLen;
	uint32_t		DD_t;
	uint32_t		DD_i;
	uint32_t		DD_e;
	uint32_t		DD_5;
	uint32_t		DD_R;
	uint32_t		DD_o;
	uint32_t		DD_a;
	uint32_t		DD_n;
	uint32_t		DD_l;
	uint32_t		DD_Return;
	uint16_t		CRC16;
} TCMUEMUProtUDP;

TCMUEMUProtTCP m_CMU_TCP;
TCMUEMUProtUDP m_CMU_UDP;

#define SOH	0x7E
#define EOH	0xE7



static void cmu_tcp_client_requests_parse(uint8_t ch, struct tcp_pcb* tpcb)
{
	switch (m_CMU_TCP.RXState)
	{
		case STATE_SOH:
		{
			if (ch == SOH)
			{
				m_CMU_TCP.RXState = STATE_LEN;
			}

			break;
		}

		case STATE_LEN:
		{
			if(ch == 43)
			{
				m_CMU_TCP.RXState = STATE_CHRLEN;				
			}
			else
			{
				m_CMU_TCP.RXState = STATE_SOH;
			}

			break;
		}

		case STATE_CHRLEN:
		{
			if ((ch > 0) && (ch <= 32))
			{
				m_CMU_TCP.ChrLen = ch;
				m_CMU_TCP.Pos = 0;
				m_CMU_TCP.RXState = STATE_DATA;
			}
			else
			{
				m_CMU_TCP.RXState = STATE_SOH;
			}

			break;
		}

		case STATE_DATA:
		{
			((uint8_t*)&m_CMU_TCP.DD_t)[m_CMU_TCP.Pos] = ch;

			if (++m_CMU_TCP.Pos >= 42)
			{
				m_CMU_TCP.RXState = STATE_EOH;
			}

			break;
		}

		case STATE_EOH:
		{
			if (ch == EOH)
			{
				m_CMU_TCP.TXState = STATE_SOH;
				m_CMU_TCP.RXState = STATE_RESPONSE;
				m_CMU_TCP.tpcb = tpcb;
			}
			else
			{
				m_CMU_TCP.RXState = STATE_SOH;
			}

			break;
		}

		case STATE_RESPONSE:
		{
			// discard incomming data in this state
			break;
		}

		default:
		{
			m_CMU_TCP.RXState = STATE_EOH;
			break;
		}
	}	
}

static void cmu_udp_client_requests_parse(uint8_t ch, struct udp_pcb* upcb, const ip_addr_t *addr, u16_t port)
{
	switch (m_CMU_UDP.RXState)
	{
		case STATE_SOH:
		{
			if (ch == SOH)
			{
				m_CMU_UDP.RXState = STATE_LEN;
			}

			break;
		}

		case STATE_LEN:
		{
			if (ch == 43)
			{
				m_CMU_UDP.RXState = STATE_CHRLEN;
			}
			else
			{
				m_CMU_UDP.RXState = STATE_SOH;
			}

			break;
		}

		case STATE_CHRLEN:
		{
			if ((ch > 0) && (ch <= 32))
			{
				m_CMU_UDP.ChrLen = ch;
				m_CMU_UDP.Pos = 0;
				m_CMU_UDP.RXState = STATE_DATA;
			}
			else
			{
				m_CMU_UDP.RXState = STATE_SOH;
			}

			break;
		}

		case STATE_DATA:
		{
			((uint8_t*)&m_CMU_UDP.DD_t)[m_CMU_UDP.Pos] = ch;

			if (++m_CMU_UDP.Pos >= 42)
			{
				m_CMU_UDP.RXState = STATE_EOH;
			}

			break;
		}

		case STATE_EOH:
		{
			if (ch == EOH)
			{
				m_CMU_UDP.TXState = STATE_SOH;
				m_CMU_UDP.RXState = STATE_RESPONSE;
				m_CMU_UDP.upcb = upcb;
				m_CMU_UDP.addr = *addr;
				m_CMU_UDP.port = port;
			}
			else
			{
				m_CMU_UDP.RXState = STATE_SOH;
			}

			break;
		}

		case STATE_RESPONSE:
		{
			// discard incomming data in this state
			break;
		}

		default:
		{
			m_CMU_UDP.RXState = STATE_EOH;
			break;
		}
	}
}

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
static struct tcp_pcb* m_pcb;

enum tcpcom_states
{
	ES_NONE = 0,
	ES_ACCEPTED,
	ES_RECEIVED,
	ES_CLOSING,
};

struct tcpcom_state
{
	uint8_t state;
	uint8_t retries;
	struct tcp_pcb* pcb;

	// pbuf (chain) to recycle
	struct pbuf* p;
};
//////////////////////////////////////////////////////////

static void tcpcom_free(struct tcpcom_state* es)
{
	if (es != NULL)
	{
		if (es->p)
		{
			/* free the buffer chain if present */
			pbuf_free(es->p);
		}

		mem_free(es);
	}
}

static void tcpcom_close(struct tcp_pcb* tpcb, struct tcpcom_state* es)
{
	tcp_arg(tpcb, NULL);
	tcp_sent(tpcb, NULL);
	tcp_recv(tpcb, NULL);
	tcp_err(tpcb, NULL);
	tcp_poll(tpcb, NULL, 0);

	tcpcom_free(es);

	tcp_close(tpcb);
}



// .tie5Roanl+Return
static void tcpcom_process(struct tcp_pcb* tpcb, struct tcpcom_state* es)
{
	struct pbuf *ptr;
	err_t wr_err = ERR_OK;

	while ((wr_err == ERR_OK) && (es->p != NULL) && (es->p->len <= tcp_sndbuf(tpcb)))
	{
		ptr = es->p;

		/* enqueue data for transmission */
		//wr_err = tcp_write(tpcb, ptr->payload, ptr->len, 1);
		for (uint16_t i = 0; i < ptr->len; i++)
		{
			cmu_tcp_client_requests_parse(((uint8_t*)ptr->payload)[i], tpcb);
		}

		if (wr_err == ERR_OK)
		{
			u16_t plen;

			plen = ptr->len;
			/* continue with next pbuf in chain (if any) */
			es->p = ptr->next;
			if (es->p != NULL)
			{
				/* new reference! */
				pbuf_ref(es->p);
			}
			/* chop first pbuf from chain */
			pbuf_free(ptr);
			/* we can read more data now */
			tcp_recved(tpcb, plen);
		}
		else if (wr_err == ERR_MEM)
		{
			/* we are low on memory, try later / harder, defer to poll */
			es->p = ptr;
		}
		else
		{
			/* other problem ?? */
		}
	}
}

static err_t tcpcom_recv(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err)
{
	struct tcpcom_state *es;
	err_t ret_err;

	LWIP_ASSERT("arg != NULL", arg != NULL);
	es = (struct tcpcom_state *)arg;
	if (p == NULL)
	{
		/* remote host closed connection */
		es->state = ES_CLOSING;
		if (es->p == NULL)
		{
			/* we're done sending, close it */
			tcpcom_close(tpcb, es);
		}
		else
		{
			/* we're not done yet */
			tcpcom_process(tpcb, es);
		}
		ret_err = ERR_OK;
	}
	else if (err != ERR_OK)
	{
		/* cleanup, for unknown reason */
		if (p != NULL)
		{
			pbuf_free(p);
		}
		ret_err = err;
	}
	else if (es->state == ES_ACCEPTED)
	{
		/* first data chunk in p->payload */
		es->state = ES_RECEIVED;
		/* store reference to incoming pbuf (chain) */
		es->p = p;
		tcpcom_process(tpcb, es);
		ret_err = ERR_OK;
	}
	else if (es->state == ES_RECEIVED)
	{
		/* read some more data */
		if (es->p == NULL)
		{
			es->p = p;
			tcpcom_process(tpcb, es);
		}
		else
		{
			struct pbuf *ptr;

			/* chain pbufs to the end of what we recv'ed previously  */
			ptr = es->p;
			pbuf_cat(ptr, p);
		}
		ret_err = ERR_OK;
	}
	else
	{
		/* unkown es->state, trash data  */
		tcp_recved(tpcb, p->tot_len);
		pbuf_free(p);
		ret_err = ERR_OK;
	}
	return ret_err;
}

static void tcpcom_error(void *arg, err_t err)
{
	struct tcpcom_state *es;

	LWIP_UNUSED_ARG(err);

	es = (struct tcpcom_state*)arg;

	tcpcom_free(es);
}

static err_t tcpcom_poll(void* arg, struct tcp_pcb* tpcb)
{
	err_t ret_err;
	struct tcpcom_state *es;

	es = (struct tcpcom_state *)arg;
	if (es != NULL)
	{
		if (es->p != NULL)
		{
			/* there is a remaining pbuf (chain)  */
			tcpcom_process(tpcb, es);
		}
		else
		{
			/* no remaining pbuf (chain)  */
			if (es->state == ES_CLOSING)
			{
				tcpcom_close(tpcb, es);
			}
		}
		ret_err = ERR_OK;
	}
	else
	{
		/* nothing to be done */
		tcp_abort(tpcb);
		ret_err = ERR_ABRT;
	}
	return ret_err;
}

static err_t tcpcom_sent(void* arg, struct tcp_pcb* tpcb, u16_t len)
{
	struct tcpcom_state *es;

	LWIP_UNUSED_ARG(len);

	es = (struct tcpcom_state*)arg;
	es->retries = 0;

	if (es->p != NULL)
	{
		/* still got pbufs to send */
		tcp_sent(tpcb, tcpcom_sent);
		tcpcom_process(tpcb, es);
	}
	else
	{
		/* no more pbufs to send */
		if (es->state == ES_CLOSING)
		{
			tcpcom_close(tpcb, es);
		}
	}
	return ERR_OK;
}

static err_t tcpcom_accept(void* arg, struct tcp_pcb* newpcb, err_t err)
{
	err_t ret_err;
	struct tcpcom_state *es;

	LWIP_UNUSED_ARG(arg);
	if ((err != ERR_OK) || (newpcb == NULL))
	{
		return ERR_VAL;
	}

	/* Unless this pcb should have NORMAL priority, set its priority now.
	   When running out of pcbs, low priority pcbs can be aborted to create
	   new pcbs of higher priority. */
	tcp_setprio(newpcb, TCP_PRIO_MIN);

	es = (struct tcpcom_state*)mem_malloc(sizeof(struct tcpcom_state));
	if (es != NULL)
	{
		es->state = ES_ACCEPTED;
		es->pcb = newpcb;
		es->retries = 0;
		es->p = NULL;

		// disable nagle
		tcp_nagle_disable(newpcb);

		// pass newly allocated es to our callbacks
		tcp_arg(newpcb, es);
		tcp_recv(newpcb, tcpcom_recv);
		tcp_err(newpcb, tcpcom_error);
		tcp_poll(newpcb, tcpcom_poll, 0);
		tcp_sent(newpcb, tcpcom_sent);

		ret_err = ERR_OK;
	}
	else
	{
		ret_err = ERR_MEM;
	}

	return ret_err;
}

static struct udp_pcb *udp_raw_pcb;

static void udp_raw_recv(void *arg, struct udp_pcb *upcb, struct pbuf *p, const ip_addr_t *addr, u16_t port)
{
	LWIP_UNUSED_ARG(arg);
	if (p != NULL) 
	{
		for (uint16_t i = 0; i < p->len; i++)
		{
			cmu_udp_client_requests_parse(((uint8_t*)p->payload)[i], upcb, addr, port);
		}

		/* send received packet back to sender */
		//udp_sendto(upcb, p, addr, port);

		/* free the pbuf */
		pbuf_free(p);
	}
}

void udp_raw_init(void)
{
	udp_raw_pcb = udp_new_ip_type(IPADDR_TYPE_ANY);
	if (udp_raw_pcb != NULL)
	{
		err_t err;

		err = udp_bind(udp_raw_pcb, IP_ANY_TYPE, 55551);
		if (err == ERR_OK) 
		{
			udp_recv(udp_raw_pcb, udp_raw_recv, NULL);
		}
		else 
		{
			/* abort? output diagnostic? */
		}
	}
	else 
	{
		/* abort? output diagnostic? */
	}
}


void Init_CMU_Server(void)
{
	m_pcb = tcp_new_ip_type(IPADDR_TYPE_ANY);

	if (m_pcb != NULL)
	{
		err_t err = tcp_bind(m_pcb, IP_ANY_TYPE, 55550);

		if (err == ERR_OK)
		{
			m_pcb = tcp_listen(m_pcb);
			tcp_nagle_disable(m_pcb);
			tcp_accept(m_pcb, tcpcom_accept);
		}
		else
		{
			// abort? output diagnostic?
		}
	}
	else
	{
		// abort? output diagnostic?
	}

	udp_raw_init();
}


static inline void ClearTimer(void)
{
	__builtin_disable_interrupts();
	g_counter_10us = 0;
	__builtin_enable_interrupts();
}

static inline uint32_t GetTimer(void)
{
	__builtin_disable_interrupts();
	uint32_t val = g_counter_10us;
	__builtin_enable_interrupts();

	return(val);
}

// .tie5Roanl+Return
const uint8_t m_tx_buffer[] = { SOH, 13, '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l', 13, 1, 2, EOH,
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l', 
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l',
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l',
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l',
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l',
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l',
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l',
								   '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l' };

void ProcessTCP_CMU(void)
{
	if (m_CMU_TCP.RXState == STATE_RESPONSE)
	{
		switch (m_CMU_TCP.TXState)
		{
			case STATE_SOH:
			{
				(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[0], 2, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);					// SOH 13
				tcp_output(m_CMU_TCP.tpcb);
				m_CMU_TCP.TXState++;

				break;
			}

			case STATE_SOH + 1:
			{
				ClearTimer();

				(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[2], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);		// .
				tcp_output(m_CMU_TCP.tpcb);

				m_CMU_TCP.TXState++;
				break;
			}

			case STATE_SOH + 2:
			{
				if (GetTimer() >= m_CMU_TCP.DD_t)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[3], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// t
					tcp_output(m_CMU_TCP.tpcb);					

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 3:
			{
				if (GetTimer() >= m_CMU_TCP.DD_i)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[4], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// i
					tcp_output(m_CMU_TCP.tpcb);					

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 4:
			{
				if (GetTimer() >= m_CMU_TCP.DD_e)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[5], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// e
					tcp_output(m_CMU_TCP.tpcb);					

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 5:
			{
				if (GetTimer() >= m_CMU_TCP.DD_5)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[6], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// 5
					tcp_output(m_CMU_TCP.tpcb);					

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 6:
			{
				if (GetTimer() >= m_CMU_TCP.DD_R)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[7], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// R
					tcp_output(m_CMU_TCP.tpcb);					

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 7:
			{
				if (GetTimer() >= m_CMU_TCP.DD_o)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[8], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// o
					tcp_output(m_CMU_TCP.tpcb);				

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 8:
			{
				if (GetTimer() >= m_CMU_TCP.DD_a)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[9], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// a
					tcp_output(m_CMU_TCP.tpcb);				

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 9:
			{
				if (GetTimer() >= m_CMU_TCP.DD_n)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[10], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// n
					tcp_output(m_CMU_TCP.tpcb);					

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 10:
			{
				if (GetTimer() >= m_CMU_TCP.DD_l)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[11], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// l
					tcp_output(m_CMU_TCP.tpcb);				

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 11:
			{
				if (GetTimer() >= m_CMU_TCP.DD_Return)
				{
					ClearTimer();

					(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[12], m_CMU_TCP.ChrLen, TCP_WRITE_FLAG_COPY | TCP_WRITE_FLAG_MORE);	// Return
					tcp_output(m_CMU_TCP.tpcb);

					m_CMU_TCP.TXState++;
				}

				break;
			}

			case STATE_SOH + 12:
			{
				m_CMU_TCP.TXState = STATE_SOH;
				m_CMU_TCP.RXState = STATE_SOH;

				(void)tcp_write(m_CMU_TCP.tpcb, &m_tx_buffer[13], 3, TCP_WRITE_FLAG_COPY);	// CRC0 CRC1 EOH
				tcp_output(m_CMU_TCP.tpcb);

				break;
			}

			default:
				m_CMU_TCP.TXState = STATE_SOH;
				m_CMU_TCP.RXState = STATE_SOH;
				break;
		}
	}
}

void ProcessUDP_CMU(void)
{
	if (m_CMU_UDP.RXState == STATE_RESPONSE)
	{
		switch (m_CMU_UDP.TXState)
		{
			case STATE_SOH:
			{
				struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, 2, PBUF_RAM);				
				memcpy(p->payload, &m_tx_buffer[0], 2);
				udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// SOH 13
				pbuf_free(p);
				m_CMU_UDP.TXState++;

				break;
			}

			case STATE_SOH + 1:
			{
				ClearTimer();

				struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
				memcpy(p->payload, &m_tx_buffer[2], m_CMU_UDP.ChrLen);
				udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// .
				pbuf_free(p);

				m_CMU_UDP.TXState++;
				break;
			}

			case STATE_SOH + 2:
			{
				if (GetTimer() >= m_CMU_UDP.DD_t)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[3], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// t
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 3:
			{
				if (GetTimer() >= m_CMU_UDP.DD_i)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[4], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// i
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 4:
			{
				if (GetTimer() >= m_CMU_UDP.DD_e)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[5], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// e
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 5:
			{
				if (GetTimer() >= m_CMU_UDP.DD_5)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[6], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// 5
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 6:
			{
				if (GetTimer() >= m_CMU_UDP.DD_R)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[7], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// R
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 7:
			{
				if (GetTimer() >= m_CMU_UDP.DD_o)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[8], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// o
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 8:
			{
				if (GetTimer() >= m_CMU_UDP.DD_a)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[9], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// a
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 9:
			{
				if (GetTimer() >= m_CMU_UDP.DD_n)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[10], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// n
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 10:
			{
				if (GetTimer() >= m_CMU_UDP.DD_l)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[11], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// l
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 11:
			{
				if (GetTimer() >= m_CMU_UDP.DD_Return)
				{
					ClearTimer();

					struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, m_CMU_UDP.ChrLen, PBUF_RAM);
					memcpy(p->payload, &m_tx_buffer[12], m_CMU_UDP.ChrLen);
					udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// Return
					pbuf_free(p);

					m_CMU_UDP.TXState++;
				}

				break;
			}

			case STATE_SOH + 12:
			{
				m_CMU_UDP.TXState = STATE_SOH;
				m_CMU_UDP.RXState = STATE_SOH;
				
				struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, 3, PBUF_RAM);
				memcpy(p->payload, &m_tx_buffer[13], 3);
				udp_sendto(m_CMU_UDP.upcb, p, &m_CMU_UDP.addr, m_CMU_UDP.port);	// CRC0 CRC1 EOH
				pbuf_free(p);

				break;
			}

			default:
				m_CMU_UDP.TXState = STATE_SOH;
				m_CMU_UDP.RXState = STATE_SOH;
				break;
		}
	}
}