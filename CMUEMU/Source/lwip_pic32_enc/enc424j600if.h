#ifndef __ENC424J600IF_H__
#define __ENC424J600IF_H__

#include "..\io.h"



//*****************************************************************************
//
// lwIP Abstraction Layer API
//
//*****************************************************************************
extern void lwIPEthernetRestart(void);
extern void ProcessEthernet(void);
extern uint32_t lwIPLocalIPAddrGet(void);
extern void lwIPLocalMACGet(uint8_t* pucMac);
extern bool lwIPEthernetLinked(void);
extern void lwIPShutdown(void);
extern void lwIPPowerUp(void);



#endif // __ENC424J600IF_H__
