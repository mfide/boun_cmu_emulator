/*! 
 *
 * @brief <b> Module Design Description </b>
 *
 * @section DEF DEFINITIONS
 * <i> This is the DEFINITIONS. </i>
 *
 * @section REF REFERENCES
 * - ENC424J600/624J600 Data sheet (DS39935) @n
 * - IEEE 802.3 @n
 * - Microchip TCPIP Stack @n
 *
 * @section BD_OD BRIEF DESCRIPTION & OVERALL DESIGN 
 * Medium Access Control (MAC) Layer for ENC424J600
 * Provides access to ENC424J600/624J600 Ethernet controller
 * @note on unit testing of this module
 * - all functions in this module are excluded from unit testing 
 * because it is all about mocking the chip. And it is acceptable as
 * there is no complex algorithm implemented in this functions
 * as they are directly interacting with ENC chip. 
 *****************************************************************************/


#include "enc424j600.h"

// Binary constant identifiers for ReadMemoryWindow() and WriteMemoryWindow() 
// functions
#define UDA_WINDOW		(0x1)
#define GP_WINDOW		(0x2)
#define RX_WINDOW		(0x4)

// Internal MAC level variables and flags.
static uint8_t m_vCurrentBank = 0;
static uint16_t m_wCurrentPacketPointer = 0;
static uint16_t m_wNextPacketPointer = 0;
static struct
{
	uint8_t bWasDiscarded:1;		// Status tracking bit indicating if the last received packet has been discarded via MACDiscardRx() or not.
	uint8_t PoweredDown:1;		// Local cached bit indicating CRYPTEN == ETHEN == 0 and PSLEEP == 1
	uint8_t CryptoEnabled:1;		// Local cached bit indicating CRYPTEN == 1
	uint8_t dummy:5;
} m_ENC100Flags = {0};


// Internal MAC level functions
static uint16_t ReadReg(uint16_t wAddress);
static void WriteReg(uint16_t wAddress, uint16_t wValue);
static void BFSReg(uint16_t wAddress, uint16_t wBitMask);
static void BFCReg(uint16_t wAddress, uint16_t wBitMask);
static void WritePHYReg(uint8_t Register, uint16_t Data);
static void ReadMemoryWindow(uint8_t vWindow, uint8_t *vData, uint16_t wLength);
static void WriteMemoryWindow(uint8_t vWindow, uint8_t *vData, uint16_t wLength);

static void Execute0(uint8_t vOpcode);
static uint16_t Execute2(uint8_t vOpcode, uint16_t wDataIn);
static uint32_t Execute3(uint8_t vOpcode, uint32_t dwDataIn);
static void ReadN(uint8_t vOpcode, uint8_t* vData, uint16_t wDataLen);
static void WriteN(uint8_t vOpcode, uint8_t* vData, uint16_t wDataLen);

static inline void AssertChipSelect(void)
{
	ENC_CS_OUT = 0;
}

static inline void DeassertChipSelect(void)
{
	ENC_CS_OUT = 1;
}

static inline void ENC_PWR_EN(void)
{
	//todo
}

static inline void ENC_PWR_DIS(void)
{
	//todo
}

static inline bool ENC_INT_REQ(void)
{	
	return(ENC_INT_IN);
}

static inline uint8_t SPI_ENC_SendByte(uint8_t data)
{
	volatile uint8_t recv;
    
    SPI1BUF = data;
    while(SPI1STATbits.SPIBUSY);
    
    recv = SPI1BUF;
    
	return(recv);
}

/*!
 * @brief	Checks whether any interrupt request from ENC
 *
 * @section L_A Limitations/Assumptions	None
 *****************************************************************************/
bool ENC_InterruptRequest(void)
{
	return(ENC_INT_REQ() == false);
}

/*!
 * @brief	Reads preprogrammed MAC address of ENC
 *	
 * @section L_A Limitations/Assumptions	None
 * pMACAddr should point to an array has minimum 6 byte size
 *****************************************************************************/
void ENC_GetMACAddr(uint8_t* pMACAddr)
{
	// Use ENC424J600 preprogrammed MAC address, if the network interface address is not already set
	uint16_t w = ReadReg(MAADR1);
	pMACAddr[0] = ((uint8_t*)&w)[0];
	pMACAddr[1] = ((uint8_t*)&w)[1];

	w = ReadReg(MAADR2);
	pMACAddr[2] = ((uint8_t*)&w)[0];
	pMACAddr[3] = ((uint8_t*)&w)[1];

	w = ReadReg(MAADR3);
	pMACAddr[4] = ((uint8_t*)&w)[0];
	pMACAddr[5] = ((uint8_t*)&w)[1];
}

/*!
 * @brief	MACInit sets up the STR7's SPI module and all the 
 *			registers in the ENC424J600 so that normal operation can 
 *			begin.
 *
 * @section L_A Limitations/Assumptions	None
 *****************************************************************************/
void ENC_MACInit(uint8_t* pMACAddr)
{
	// Initialize RX tracking variables and other control state flags
	m_wNextPacketPointer = RXSTART;
	m_wCurrentPacketPointer = 0x0000;
	m_ENC100Flags.bWasDiscarded = 1;
	m_ENC100Flags.PoweredDown = 0;
	m_ENC100Flags.CryptoEnabled = 0;

	// Set up TX/RX/UDA buffer addresses
	WriteReg(ETXST, TXSTART);
	WriteReg(ERXST, RXSTART);
	WriteReg(ERXTAIL, ENC100_RAM_SIZE-2);
	WriteReg(EUDAST, ENC100_RAM_SIZE);
	WriteReg(EUDAND, ENC100_RAM_SIZE+1);

	// Use ENC424J600 preprogrammed MAC address, if the network interface address is not already set
	ENC_GetMACAddr(pMACAddr);

	// Set PHY Auto-negotiation to support 10BaseT Half duplex, 
	// 10BaseT Full duplex, 100BaseTX Half Duplex, 100BaseTX Full Duplex,
	// and symmetric PAUSE capability
	WritePHYReg(PHANA, PHANA_ADPAUS0 | PHANA_AD10FD | PHANA_AD10 | PHANA_AD100FD | PHANA_AD100 | PHANA_ADIEEE0);
	
	// If statement below is not executed, 
	// auto-negotiation/parallel detection is used which will 
	// always select the proper mode.
	// 
	// FORCE_100MBPS_FULL_DUPLEX
	// WritePHYReg(PHCON1, PHCON1_SPD100 | PHCON1_PFULDPX);

	// enable multi cast packet reception if you need
    BFSReg (ERXFCON, ERXFCON_MCEN);

	// Enable RX packet reception
	BFSReg(ECON1, ECON1_RXEN);

	ENC_EnableGlobalInterrupts();
}//end MACInit


/*! 
 * @brief        Returns the PHSTAT1.LLSTAT bit.
 * Output:          true: If the PHY reports that a link partner is present
 *                        and the link has been up continuously since the last
 *                        call to MACCheckLink()
 *                  false: If the PHY reports no link partner, or the link went
 *                         down momentarily since the last call to MACCheckLink()
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
bool ENC_MACCheckLink(void)
{
	return (ReadReg(ESTAT) & ESTAT_PHYLNK) != 0u;
}


uint16_t ENC_GetInterruptStatus(void)
{
	return(ReadReg(EIR));
}


/*!
 * @brief Returns the ECON1<TXRTS> bit
 * Output:          true: If no Ethernet transmission is in progress
 *					false: If a previous transmission was started, and it has 
 *						   not completed yet.  While false, the data in the 
 *						   transmit buffer and the TXST/TXLEN pointers must not
 *						   be changed.
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
bool ENC_MACIsTxReady(void)
{
	return !(ReadReg(ECON1) & ECON1_TXRTS);
}


/*! 
 * @brief        Marks the last received packet (obtained using 
 *					ENC_MACGetHeader())as being processed and frees the 
 *					buffer memory associated with it
 *
 * @section L_A Limitations/Assumptions            Is is safe to call this function multiple times between 
 *					ENC_MACGetHeader() calls.  Extra packets won't be 
 *					thrown away until ENC_MACGetHeader() makes it available.
 *****************************************************************************/
void ENC_MACDiscardRx(void)
{
	uint16_t wNewRXTail;

	// Make sure the current packet was not already discarded
	if(m_ENC100Flags.bWasDiscarded)
		return;
	m_ENC100Flags.bWasDiscarded = 1;
	
	// Decrement the next packet pointer before writing it into 
	// the ERXRDPT registers. RX buffer wrapping must be taken into account if the 
	// NextPacketLocation is precisely RXSTART.
	wNewRXTail = m_wNextPacketPointer - 2;
	if(m_wNextPacketPointer == RXSTART)
		wNewRXTail = ENC100_RAM_SIZE - 2;

	// Decrement the RX packet counter register, EPKTCNT
	BFSReg(ECON1, ECON1_PKTDEC);

	// Move the receive read pointer to unwrite-protect the memory used by the 
	// last packet.  The writing order is important: set the low byte first, 
	// high byte last (handled automatically in WriteReg()).
	WriteReg(ERXTAIL, wNewRXTail);
}


/*! 
 * @brief          A uint16_t estimate of how much RX buffer space is free at 
 *					the present time.
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
uint16_t ENC_MACGetFreeRxSize(void)
{
	uint16_t wHeadPtr;

	wHeadPtr = ReadReg(ERXHEAD);
	
	// Calculate the difference between the pointers, taking care to account 
	// for buffer wrapping conditions
	if(wHeadPtr > m_wCurrentPacketPointer)
		return (RXSTOP - RXSTART) - (wHeadPtr - m_wCurrentPacketPointer);
		
	return m_wCurrentPacketPointer - wHeadPtr - 2;
}


/*! 
 * @brief 
 * Input:           *remote: Location to store the Source MAC address of the 
 *							 received frame.
 *                  *type: Location of a uint16_t to store the constant
 *                         ETHERTYPE_UNKNOWN, ETHERTYPE_IPVx, or ETHERTYPE_ARP, 
 *                         representing the contents of the Ethernet type
 *                         field.
 *
 * Output:          true: If a packet was waiting in the RX buffer.  The 
 *						  remote, and type values are updated.
 *					false: If a packet was not pending.  remote and type are 
 *						   not changed.
 *
 * Side Effects:    Last packet is discarded if ENC_MACDiscardRx() hasn't 
 *					already been called.
 *
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
bool ENC_MACGetHeader(uint16_t* len)
{
	TENC100Preamble header;

	// Test if at least one packet has been received and is waiting
	if(!(ReadReg(EIR) & EIR_PKTIF))
	{
		// No packets are waiting.  See if we are unlinked and need to process 
		// auto crossover timers.
		return false;
	}

	// Discard the last packet, if the user application hasn't done so already
	if(!m_ENC100Flags.bWasDiscarded)
	{
		ENC_MACDiscardRx();

		// Test again if at least one packet has been received and is waiting
		if(!(ReadReg(EIR) & EIR_PKTIF))
			return false;
	}

	// Set the RX Read Pointer to the beginning of the next unprocessed packet
	m_wCurrentPacketPointer = m_wNextPacketPointer;
	WriteReg(ERXRDPT, m_wCurrentPacketPointer);

	// Obtain the ENC100Preamble header from the Ethernet buffer
	ReadMemoryWindow(RX_WINDOW, (uint8_t*)&header, sizeof(header));

	// Validate the data returned from the ENC624J600 Family device.  Random 
	// data corruption, such as if a single SPI/PSP bit error occurs while 
	// communicating or a momentary power glitch could cause this to occur 
	// in rare circumstances.  Also, certain hardware bugs such as violations 
	// of the absolute maximum electrical specs can cause this.  For example,
	// if an MCU with a high slew rate were to access the interface, parasitic 
	// inductance in the traces could cause excessive voltage undershoot.  
	// If the voltage goes too far below ground, the ENC424J600's internal
	// ESD structure may activate and disrupt the communication.  To prevent 
	// this, ensure that you have a clean board layout and consider adding 
	// resistors in series with the MCU output pins to limit the slew rate 
	// of signals going to the ENC424J600. 100 Ohm resistors is a good value 
	// to start testing with.
	if(header.NextPacketPointer > RXSTOP || ((header.NextPacketPointer & 1) == 1) ||
	   header.StatusVector.bits.Zero || header.StatusVector.bits.ZeroH || 
	   header.StatusVector.bits.CRCError ||
	   header.StatusVector.bits.ByteCount > 1522u ||
	   header.StatusVector.bits.ByteCount < 20u )
	{
		//ENC100DumpState();
		
		ENC_MACDiscardRx();
        return false;
	}

	// Save the location where the hardware will write the next packet to
	m_wNextPacketPointer = header.NextPacketPointer;

    // Mark this packet as discardable
    m_ENC100Flags.bWasDiscarded = 0;

	// remove FCS
	*len = header.StatusVector.bits.ByteCount - 4;

	return true;
}


/*! 
 * @brief
 * PreCondition:    MACIsTxReady() must return true.
 *
 * Input:           *remote: Pointer to memory which contains the destination
 * 							 MAC address (6 bytes)
 *                  type - packet type: ETHERTYPE_IPV4/6, ETHERTYPE_ARP
 *					dataLen: Length of the Ethernet data payload
 *
 * @section L_A Limitations/Assumptions            
 *  Because of the dataLen parameter, it is probably 
 *	advantageous to call this function immediately before 
 *	transmitting a packet rather than initially when the 
 *	packet is first created.  The order in which the packet
 *	is constructed (header first or data first) is not 
 *	important.
 *****************************************************************************/
void ENC_MACPutHeader(uint8_t* p, uint16_t dataLen)
{
	// Set the Window Write Pointer to the beginning of the transmit buffer
	WriteReg(EGPWRPT, TXSTART);
	WriteReg(ETXLEN, dataLen); // dataLen includes mac header

	// Write the Ethernet destination MAC address, our source MAC address, 
	// and the Ethernet Type field.
	WriteMemoryWindow(GP_WINDOW, (uint8_t*)&p[0], 14);	// all at a time
}


/*! 
 * @brief        ENC_MACFlush causes the current TX packet to be sent out on 
 *					the Ethernet medium.  The hardware MAC will take control
 *					and handle CRC generation, collision retransmission and 
 *					other details.
 * PreCondition:    A packet has been created by calling ENC_MACPut() and 
 *					ENC_MACPutHeader().
 * @section L_A Limitations/Assumptions			After transmission completes (ENC_MACIsTxReady() 
 *					returns true), the packet can be modified and transmitted 
 *					again by calling ENC_MACFlush() again.  
 *					Until ENC_MACPutHeader() or ENC_MACPut() is 
 *					called (in the TX data area), the data in the TX buffer 
 *					will not be corrupted.
 *****************************************************************************/
void ENC_MACFlush(void)
{
	// Check to see if the duplex status has changed.  This can 
	// change if the user unplugs the cable and plugs it into a 
	// different node.  Auto-negotiation will automatically set 
	// the duplex in the PHY, but we must also update the MAC 
	// inter-packet gap timing and duplex state to match.
	if(ReadReg(EIR) & EIR_LINKIF)
	{
		BFCReg(EIR, EIR_LINKIF);

		// Update MAC duplex settings to match PHY duplex setting
		uint16_t w = ReadReg(MACON2);

		if(ReadReg(ESTAT) & ESTAT_PHYDPX)
		{
			// Switching to full duplex
			WriteReg(MABBIPG, 0x15);
			w |= MACON2_FULDPX;
		}
		else
		{
			// Switching to half duplex
			WriteReg(MABBIPG, 0x12);
			w &= ~MACON2_FULDPX;
		}
		WriteReg(MACON2, w);
	}


	// Start the transmission, but only if we are linked.  Suppressing 
	// transmissing when unlinked is necessary to avoid stalling the TX engine 
	// if we are in PHY energy detect power down mode and no link is present.  
	// A stalled TX engine won't do any harm in itself, but will cause the 
	// ENC_MACIsTXReady() function to continuously return false, which will 
	// ultimately stall the lwIP stack since there is blocking code 
	// elsewhere in other files that expect the TX engine to always self-free 
	// itself very quickly.
	if(ReadReg(ESTAT) & ESTAT_PHYLNK)
		BFSReg(ECON1, ECON1_TXRTS);
}


/*! 
 * PreCondition:    A packet has been obtained by calling ENC_MACGetHeader() 
 *					and getting a true result.
 *
 * Input:           offset: uint16_t specifying how many bytes beyond the Ethernet 
 *							header's type field to relocate the SPI read 
 *							pointer.
 * @brief        SPI read pointer are updated.  All calls to	ENC_MACGet() 
 *					and ENC_MACGetArray() will use these new values.
 * @section L_A Limitations/Assumptions			RXSTOP must be statically defined as being > RXSTART for 
 *					this function to work correctly.  In other words, do not 
 *					define an RX buffer which spans the 0x1FFF->0x0000 memory
 *					boundary.
 *****************************************************************************/
void ENC_MACSetReadPtrInRx(uint16_t offset)
{
	// Determine the address of the beginning of the entire packet
	// and adjust the address to the desired location
	uint16_t wReadPtr = m_wCurrentPacketPointer + sizeof(TENC100Preamble) + offset;
	
	// Since the receive buffer is circular, adjust if a wraparound is needed
	if(wReadPtr > RXSTOP)
		wReadPtr -= RXSIZE;
	
	// Set the RX Window Read pointer to the new calculated value
	WriteReg(ERXRDPT, wReadPtr);
}


/*! 
 * Input:           Address: Address to seek to
 * Output:          uint16_t: Old EWRPT location
 * @brief        SPI write pointer is updated.  All calls to ENC_MACPut() 
 *					and ENC_MACPutArray() will use this new value.
 * @section L_A Limitations/Assumptions			None
 *****************************************************************************/
uint16_t ENC_MACSetWritePtr(uint16_t address)
{
	uint16_t wOldWritePtr = ReadReg(EGPWRPT);

	// Set the TX Write Pointer to the new calculated value
	WriteReg(EGPWRPT, address);

	return wOldWritePtr;
}


/*! 
 * Input:           Address: Address to seek to
 * Output:          uint16_t: Old ERDPT value
 * @brief        SPI write pointer is updated.  All calls to 
 *					ENC_MACPut() and ENC_MACPutArray() will use this new value.
 * @section L_A Limitations/Assumptions			None
 *****************************************************************************/
uint16_t ENC_MACSetReadPtr(uint16_t address)
{
	uint16_t wOldReadPtr = ReadReg(ERXRDPT);

	// Set the RX Read Pointer to the new calculated value
	WriteReg(ERXRDPT, address);

	return wOldReadPtr;
}

uint16_t ENC_MACGetReadPtrInRx(void)
{
    return (uint16_t)ReadReg(ERXRDPT); // TBD
}

/*! 
 * PreCondition:    SPI bus must be initialized (done in ENC_MACInit()).
 * 					ERDPT must point to the place to read from.
 * Output:          Byte read from the ENC424J600's RAM
 * @brief        MACGet returns the byte pointed to by ERDPT and 
 *					increments ERDPT so ENC_MACGet() can be called again.  
 *					The increment will follow the receive buffer wrapping boundary.
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
uint8_t ENC_MACGet(void)
{
	uint8_t i = 0;
	
	ReadMemoryWindow(RX_WINDOW, &i, 1);
	return i;
}//end MACGet


/*! 
 * PreCondition:    SPI bus must be initialized (done in MACInit()).
 * 					ERDPT must point to the place to read from.
 * Input:           *val: Pointer to storage location
 *					len:  Number of bytes to read from the data buffer.
 * Output:          Byte(s) of data read from the data buffer.
 * @brief        Burst reads several sequential bytes from the data buffer 
 *					and places them into local memory.  With SPI burst support, 
 *					it performs much faster than multiple ENC_MACGet() calls.
 *					ERDPT is incremented after each byte, following the same 
 *					rules as ENC_MACGet().
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
uint16_t ENC_MACGetArray(uint8_t *val, uint16_t len)
{
	if(val)
	{
		ReadMemoryWindow(RX_WINDOW, val, len);
	}
	else
	{
		uint16_t wNewReadPtr = ReadReg(ERXRDPT) + len;

		if(wNewReadPtr > RXSTOP)
			wNewReadPtr -= RXSIZE;
		WriteReg(ERXRDPT, wNewReadPtr);
	}
		
	return len;
}//end MACGetArray


/*! 
 * PreCondition:    SPI bus must be initialized (done in ENC_MACInit()).
 * 					EWRPT must point to the location to begin writing.
 * Input:           Byte to write into the ENC424J600 buffer memory
 * @brief        ENC_MACPut outputs the Write Buffer Memory opcode/constant 
 *					(8 bits) and data to write (8 bits) over the SPI.  
 *					EWRPT is incremented after the write.
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
void ENC_MACPut(uint8_t val)
{
	WriteMemoryWindow(GP_WINDOW, &val, 1);
}//end MACPut


/*! 
 * PreCondition:    SPI bus must be initialized (done in MACInit()).
 * 					EWRPT must point to the location to begin writing.
 * Input:           *val: Pointer to source of bytes to copy.
 *					len:  Number of bytes to write to the data buffer.
 * @brief        MACPutArray writes several sequential bytes to the 
 *					ENC424J600 RAM.  It performs faster than multiple ENC_MACPut()
 *					calls.  EWRPT is incremented by len.
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
void ENC_MACPutArray(uint8_t *val, uint16_t len)
{
	WriteMemoryWindow(GP_WINDOW, val, len);
}//end MACPutArray

/*! 
 * PreCondition:    SPI or Parallel bus must be initialized (done in ENC_MACInit()).
 *
 * Input:           NewConfig - 0x00: CLKOUT disabled (pin driven low)
 *								0x01: 33.333 MHz
 *								0x02: 25.000 MHz
 *								0x03: 20.000 MHz
 *								0x04: 16.667 MHz
 *								0x05: 12.500 MHz
 *								0x06: 10.000 MHz
 *								0x07:  8.333 MHz
 *								0x08:  8.000 MHz (47.5% duty cycle)
 *								0x09:  6.250 MHz
 *								0x0A:  5.000 MHz
 *								0x0B:  4.000 MHz
 *								0x0C:  3.125 MHz
 *								0x0D: CLKOUT disabled (pin driven low)
 *								0x0E: 100.00 kHz
 *								0x0F:  50.00 kHz
 * @brief        Writes the value of NewConfig into the COCON bits of ECON2
 *					register.  The CLKOUT pin will beginning outputting the 
 *					new frequency immediately.
 *
 * @section L_A Limitations/Assumptions            
 *****************************************************************************/
void ENC424J600_SetCLKOUT(uint8_t NewConfig)
{	
	uint16_t w = ReadReg(ECON2) & 0xF0FF;

	((uint8_t*)&w)[1] |= (NewConfig & 0x0F);

	WriteReg(ECON2, w);
}//end SetCLKOUT


/*! 
 * PreCondition:    SPI or Parallel bus must be initialized (done in ENC_MACInit()).
 * Output:          uint8_t -	0x00: CLKOUT disabled (pin driven low)
 *							0x01: 33.333 MHz
 *							0x02: 25.000 MHz
 *							0x03: 20.000 MHz
 *							0x04: 16.667 MHz
 *							0x05: 12.500 MHz
 *							0x06: 10.000 MHz
 *							0x07:  8.333 MHz
 *							0x08:  8.000 MHz (47.5% duty cycle)
 *							0x09:  6.250 MHz
 *							0x0A:  5.000 MHz
 *							0x0B:  4.000 MHz
 *							0x0C:  3.125 MHz
 *							0x0D: CLKOUT disabled (pin driven low)
 *							0x0E: 100.00 kHz
 *							0x0F:  50.00 kHz
 * @brief        Returns the current value of the COCON bits of ECON2 
 *					register.
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
uint8_t ENC424J600_GetCLKOUT(void)
{	
	uint16_t w = ReadReg(ECON2);	

	return ((uint8_t*)&w)[1] & 0x0F;
}//end GetCLKOUT

void ENC424J600_PowerDown(void)
{
	// Power cycle the ENC424J600 device, if any sort of POR pin is defined
	ENC_PWR_DIS();
}

void ENC424J600_PowerUp(void)
{
	// Interrupt output from ENC424J600
	bool dmy = ENC_INT_REQ();

	// Turn on power and wait for interface latching to occur
	DeassertChipSelect();
	ENC_PWR_EN();

	// init spi
	// todo
	//BSPI_Config_SPI0();

	m_vCurrentBank = 0;
}

void ENC424J600_SetEUDAST(uint16_t val)
{
	WriteReg(EUDAST, val);
}

uint16_t ENC424J600_GetEUDAST(void)
{
	return(ReadReg(EUDAST));
}

void ENC424J600_ResetCmd(void)
{
	// Issue a reset
	BFSReg(ECON2, ECON2_ETHRST);
	m_vCurrentBank = 0;
	// todo - WaitWhileDuration(1000);
}

bool ENC424J600_ResetCompleted(void)
{
	bool result = (ReadReg(ESTAT) & (ESTAT_CLKRDY | ESTAT_RSTDONE | ESTAT_PHYRDY)) == (ESTAT_CLKRDY | ESTAT_RSTDONE | ESTAT_PHYRDY);

	if(result)
	{
		// Really ensure reset is done and give some time for power to be stable
		// todo - WaitWhileDuration(1000);
	}

	return(result);
}

/*! 
 * Input:           vWindow: UDA_WINDOW, GP_WINDOW, or RX_WINDOW corresponding 
 *							 to the window register to write to
 *					*vData: Pointer to local PIC RAM which contains the 
 *							source data
 *					wLength: Number of bytes to copy from vData to window
 * @brief        Copies 0 or more bytes from CPU RAM to the ENC424J600 
 *					Family RAM using one of the UDA, TX, or RX write window 
 *					pointers.  This pointer is incremented by the number of 
 *					bytes written.
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
 void WriteMemoryWindow(uint8_t vWindow, uint8_t *vData, uint16_t wLength)
{
	uint8_t vOpcode = WBMUDA;

	if(vWindow & GP_WINDOW)
		vOpcode = WBMGP;

	if(vWindow & RX_WINDOW)
		vOpcode = WBMRX;

	WriteN(vOpcode, vData, wLength);
}

/*! 
 * Input:           vWindow: UDA_WINDOW, GP_WINDOW, or RX_WINDOW corresponding 
 *							 to the window register to read from
 *					*vData: Pointer to local MCU RAM which will be written 
 *							with data from the ENC624J600 Family.
 *					wLength: Number of bytes to copy from window to vData
 * @brief        Copies 0 or more bytes from the ENC624J600 Family RAM using 
 *					one of the UDA, TX, or RX read window pointers.  This 
 *					pointer is incremented by the number of bytes read.  
 *					However, if using a 16-bit parallel interface, the pointer 
 *					will be incremented by 1 extra if the length parameter is 
 *					odd to ensure 16-bit alignment.
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
void ReadMemoryWindow(uint8_t vWindow, uint8_t *vData, uint16_t wLength)
{
	uint8_t vOpcode = RBMUDA;
	if(vWindow & GP_WINDOW)
		vOpcode = RBMGP;
	if(vWindow & RX_WINDOW)
		vOpcode = RBMRX;

	ReadN(vOpcode, vData, wLength);
}

/*! 
 * PreCondition:    SPI bus must be initialized (done in MACInit()).
 * @brief        Sends a single byte command with no parameters
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
static void Execute0(uint8_t vOpcode)
{
	AssertChipSelect();
	SPI_ENC_SendByte(vOpcode);
	DeassertChipSelect();
}//end Execute0

static uint16_t Execute2(uint8_t vOpcode, uint16_t wData)
{
	uint8_t rxBuf[3];

	AssertChipSelect();

	rxBuf[0] = SPI_ENC_SendByte(vOpcode);
	rxBuf[1] = SPI_ENC_SendByte((uint8_t)wData);
	rxBuf[2] = SPI_ENC_SendByte((uint8_t)(wData>>8));	

	DeassertChipSelect();

	return (((uint16_t)rxBuf[2]<<8) | (rxBuf[1]<<0));
}//end Execute2

static uint32_t Execute3(uint8_t vOpcode, uint32_t dwData)
{
	uint8_t rxBuf[4];

	AssertChipSelect();

	rxBuf[0] = SPI_ENC_SendByte(vOpcode);
	rxBuf[1] = SPI_ENC_SendByte((uint8_t)dwData);
	rxBuf[2] = SPI_ENC_SendByte((uint8_t)(dwData>>8));
	rxBuf[3] = SPI_ENC_SendByte((uint8_t)(dwData>>16));

	DeassertChipSelect();

	return (((uint32_t)rxBuf[3]<<16) | ((uint32_t)rxBuf[2]<<8) | rxBuf[1]);
}//end Execute3

static void ReadN(uint8_t vOpcode, uint8_t* vData, uint16_t wDataLen)
{
	AssertChipSelect();

	// Send OP code first
	SPI_ENC_SendByte(vOpcode);

	// Read data secondly
	while(wDataLen > 0)
	{
		*vData = SPI_ENC_SendByte(0);

		++vData;
		--wDataLen;
	}

	DeassertChipSelect();
}

static void WriteN(uint8_t vOpcode, uint8_t* vData, uint16_t wDataLen)
{
	AssertChipSelect();

	// Send OP code first
	SPI_ENC_SendByte(vOpcode);

	// Read data secondly
	while(wDataLen > 0)
	{
		(void)SPI_ENC_SendByte(*vData);

		++vData;
		--wDataLen;
	}

	DeassertChipSelect();
}


/*! 
 * PreCondition:    SPI/PSP bus must be initialized (done in MACInit()).
 *
 * Input:           wAddress: Address of SFR register to read from.  
 *							  The LSb is ignored and treated as '0' always.
 *
 * Output:          uint16_t value of register contents
 *
 * Side Effects:    None
 *
 * @brief        Selects the correct bank (if needed), and reads the 
 *					corresponding 16-bit register
 *
 * @section L_A Limitations/Assumptions            This routine cannot be used to read PHY registers.  
 *					Use the ReadPHYReg() function to read from PHY registers.
 *****************************************************************************/
static uint16_t ReadReg(uint16_t wAddress)
{
	uint16_t w = 0;
		
	// See if we need to change register banks
	uint8_t vBank = ((uint8_t)wAddress) & 0xE0;

	if(vBank <= (0x3u<<5))
	{
		if(vBank != m_vCurrentBank)
		{
			if(vBank == (0x0u<<5))
				Execute0(B0SEL);
			else if(vBank == (0x1u<<5))
				Execute0(B1SEL);
			else if(vBank == (0x2u<<5))
				Execute0(B2SEL);
			else if(vBank == (0x3u<<5))
				Execute0(B3SEL);
					
			m_vCurrentBank = vBank;
		}
		
		w = Execute2(RCR | (wAddress & 0x1F), 0x0000);
	}
	else
	{
		uint32_t dw = Execute3(RCRU, (uint32_t)wAddress);
		((uint8_t*)&w)[0] = ((uint8_t*)&dw)[1];
		((uint8_t*)&w)[1] = ((uint8_t*)&dw)[2];
	}

	return w;
}//end ReadReg


/*! 
 * PreCondition:    SPI/PSP bus must be initialized (done in MACInit()).
 *
 * Input:           wAddress: Address of the SFR register to write to.  
 *					16-bit uint16_t to be written into the register.
 * @brief        Selects the correct bank (if using the SPI and needed), and 
 *					writes the corresponding 16-bit register with wValue.
 * @section L_A Limitations/Assumptions            This routine cannot write to PHY registers.  Use the 
 *					WritePHYReg() function for writing to PHY registers.
 *****************************************************************************/
static void WriteReg(uint16_t wAddress, uint16_t wValue)
{
	// See if we need to change register banks
	uint8_t vBank = ((uint8_t)wAddress) & 0xE0;

	if(vBank <= (0x3u<<5))
	{
		if(vBank != m_vCurrentBank)
		{
			if(vBank == (0x0u<<5))
				Execute0(B0SEL);
			else if(vBank == (0x1u<<5))
				Execute0(B1SEL);
			else if(vBank == (0x2u<<5))
				Execute0(B2SEL);
			else if(vBank == (0x3u<<5))
				Execute0(B3SEL);
	
			m_vCurrentBank = vBank;
		}
		
		Execute2(WCR | (wAddress & 0x1F), wValue);
	}
	else
	{
		uint32_t dw;
		((uint8_t*)&dw)[0] = (uint8_t)wAddress;
		((uint8_t*)&dw)[1] = ((uint8_t*)&wValue)[0];
		((uint8_t*)&dw)[2] = ((uint8_t*)&wValue)[1];
		Execute3(WCRU, dw);
	}
}//end WriteReg


/*! 
 * Input:           7 bit address of the register to write to.  
 *					16-bit uint16_t bit mask to set/clear in the register.
 * @brief        Sets/clears bits in Ethernet SFR registers
 * @section L_A Limitations/Assumptions
 * These functions cannot be used to access ESFR registers.
 *****************************************************************************/
static void BFSReg(uint16_t wAddress, uint16_t wBitMask)
{
	// See if we need to change register banks
	uint8_t vBank = ((uint8_t)wAddress) & 0xE0;

	if(vBank != m_vCurrentBank)
	{
		if(vBank == (0x0u<<5))
			Execute0(B0SEL);
		else if(vBank == (0x1u<<5))
			Execute0(B1SEL);
		else if(vBank == (0x2u<<5))
			Execute0(B2SEL);
		else if(vBank == (0x3u<<5))
			Execute0(B3SEL);

		m_vCurrentBank = vBank;
	}
	
	Execute2(BFS | (wAddress & 0x1F), wBitMask);	
}//end BFSReg

static void BFCReg(uint16_t wAddress, uint16_t wBitMask)
{
	// See if we need to change register banks
	uint8_t vBank = ((uint8_t)wAddress) & 0xE0;

	if(vBank != m_vCurrentBank)
	{
		if(vBank == (0x0u<<5))
			Execute0(B0SEL);
		else if(vBank == (0x1u<<5))
			Execute0(B1SEL);
		else if(vBank == (0x2u<<5))
			Execute0(B2SEL);
		else if(vBank == (0x3u<<5))
			Execute0(B3SEL);

		m_vCurrentBank = vBank;
	}
	
	Execute2(BFC | (wAddress & 0x1F), wBitMask);
}//end BFCReg

/*! 
 * PreCondition:    SPI bus must be initialized (done in MACInit()).
 *
 * Input:           Address of the PHY register to write to.
 *					16 bits of data to write to PHY register.
 *
 * @brief        WritePHYReg performs an MII write operation.  While in 
 *					progress, it simply polls the MII BUSY bit wasting time.
 *
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/
static void WritePHYReg(uint8_t Register, uint16_t Data)
{
	// Write the register address
	WriteReg(MIREGADR,  0x0100 | Register);
	
	// Write the data
	WriteReg(MIWR, Data);

	// Wait until the PHY register has been written
	while(ReadReg(MISTAT) & MISTAT_BUSY);
}//end WritePHYReg

/*! 
 * @brief        Disables ENC Chip Global Interrupts
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/ 
void ENC_DisableGlobalInterrupts(void)
{
	BFCReg(EIE, EIE_INTIE);
}

/*! 
 * @brief        Enables ENC Chip Global Interrupts
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/ 
void ENC_EnableGlobalInterrupts(void)
{
	BFSReg(EIE, EIE_INTIE | EIE_RXABTIE | EIE_TXABTIE | EIE_PKTIE | EIE_LINKIE);
}

/*! 
 * @brief        Checks whether ENC chip is initialized
 * @section L_A Limitations/Assumptions            None
 *****************************************************************************/ 
bool ENC_Initialized(void)
{
	uint16_t ie = ReadReg(EIE);

	// at reset time LINKIE is 0
	// if ENC is initialized, it should be 1 here
	return((ie & EIE_LINKIE) != 0);
}

/*! 
 * @brief        Clears required interrupt flags
 * @section L_A Limitations/Assumptions            None
 ******************************************************************************/ 
void ENC_ClearInterruptFlags(uint16_t int_flags)
{
	// be sure we will not clear the other bits such as CRYPEN
	int_flags &= 0x786F;

	BFCReg(EIR, int_flags);
}

