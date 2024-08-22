#include "io.h"
#include "flash.h"

volatile uint32_t g_counter_10us;
volatile uint32_t g_counter_1ms;
volatile uint32_t g_inter_char_timeout;
volatile uint32_t g_soft_reset_timeout;

static const volatile uint64_t m_AppCRC __attribute__((space(prog), address((APP_FLASH_END_ADDRESS - 7)))) = 0x1234567800000000;

uint32_t GetAppCRC32(void)
{
	return((uint32_t)(m_AppCRC >> 32));
}

void __ISR(_TIMER_9_VECTOR, ipl3SRS) TIMER9_ISR(void)
{
	++g_counter_1ms;

	++g_inter_char_timeout;	

	++g_soft_reset_timeout;

	// clear flag
	IFS1CLR = _IFS1_T9IF_MASK; // IFS1bits.T9IF = 0
}

void __ISR(_TIMER_5_VECTOR, ipl4SRS) TIMER5_ISR(void)
{
	++g_counter_10us;

	// clear flag
	IFS0CLR = _IFS0_T5IF_MASK; // IFS0bits.T5IF = 0
}

// used to generate 1ms tick
static void InitializeTimer89(void)
{
	T8CON = 0x0;		// Stop any 16/32-bit Timer8 operation
	T9CON = 0x0;		// Stop any 16-bit Timer9 operation
	T8CONSET = 0x0008;	// Enable 32-bit mode, pre-scaler 1:1 -> SYS_CLK_BUS_PERIPHERAL_3 = 100MHZ!

	g_counter_1ms = 0;
	g_inter_char_timeout = 0;
	g_soft_reset_timeout = 0;

	TMR8 = 0x0;			// Clear contents of the TMR8 and TMR9

	// Load PR8 and PR9 registers with 32-bit value for 1ms
	PR8 = SYS_CLK_BUS_PERIPHERAL_3 / 1000 - 1;

	// for 32 bit timer, configuration done through Timer8 but interrupt generated through Timer9!	
	IPC10bits.T9IP = 3;	// priority level 3 (higher level has higher priority)
	IPC10bits.T9IS = 1;	// sub priority level 1
	IFS1CLR = _IFS1_T9IF_MASK; // IFS1bits.T9IF = 0
	IEC1SET = _IEC1_T9IE_MASK; // IEC1bits.T9IE = 1

	T8CONSET = 0x8000;	// Start Timer8/9
}

// used to generate 10uS tick
static void InitializeTimer45(void)
{
	T4CON = 0x0;		// Stop any 16/32-bit Timer8 operation
	T5CON = 0x0;		// Stop any 16-bit Timer9 operation
	T4CONSET = 0x0008;	// Enable 32-bit mode, pre-scaler 1:1 -> SYS_CLK_BUS_PERIPHERAL_3 = 100MHZ!

	g_counter_10us = 0;	

	TMR4 = 0x0;			// Clear contents of the TMR4 and TMR5

	// Load PR4 and PR5 registers with 32-bit value for 10us
	PR4 = SYS_CLK_BUS_PERIPHERAL_3 / 100000 - 1;

	// for 32 bit timer, configuration done through Timer4 but interrupt generated through Timer5!	
	IPC6bits.T5IP = 4;	// priority level 3 (higher level has higher priority)
	IPC6bits.T5IS = 1;	// sub priority level 1
	IFS0CLR = _IFS0_T5IF_MASK; // IFS0bits.T5IF = 0
	IEC0SET = _IEC0_T5IE_MASK; // IEC0bits.T5IE = 1

	T4CONSET = 0x8000;	// Start Timer4/5	
}

// used to measure PULSE channels in input capture mode
static void InitializeTimer23(void)
{
	T2CON = 0x0;					// Stop any 16/32-bit Timer2 operation
	T3CON = 0x0;					// Stop any 16-bit Timer3 operation	
	IC1CON = 0x0;					// Turn off the IC1 for PULSE3_IN
	IC2CON = 0x0;					// Turn off the IC2 for UART_RX measurement
	IC3CON = 0x0;					// Turn off the IC3 for PULSE1_IN
	IC4CON = 0x0;					// Turn off the IC4 for PULSE2_IN
	IC5CON = 0x0;					// Turn off the IC5 for PULSE5_IN
	IC6CON = 0x0;					// Turn off the IC6 for PULSE4_IN
	IC7CON = 0x0;					// Turn off the IC7 for PULSE7_IN
	IC8CON = 0x0;					// Turn off the IC8 - empty
	IC9CON = 0x0;					// Turn off the IC9 for PULSE6_IN
	/////////////////////////////////////////////////////////////////////////////////

	T2CONSET = _T2CON_T32_MASK | _T2CON_TCS_MASK;		// Enable 32-bit Timer mode and T2CK external clock
	TMR2 = 0x0;											// Clear contents of the TMR2 and TMR3
	PR2 = 0xFFFFFFFF;
	IPC3bits.T3IP = 5;			// priority level 5 (higher level has higher priority)
	IPC3bits.T3IS = 1;			// sub priority level 1
	IFS0CLR = _IFS0_T3IF_MASK;	// IFS0bits.T3IF = 0
	IEC0SET = _IEC0_T3IE_MASK;	// IEC0bits.T3IE = 1

	IC1CONSET = _IC1CON_C32_MASK | _IC1CON_ICM0_MASK | _IC1CON_ICM1_MASK;	// every rising edge
	IC2CONSET = _IC2CON_C32_MASK | _IC2CON_ICM1_MASK;						// every falling edge - for UART
	IC3CONSET = _IC3CON_C32_MASK | _IC3CON_ICM0_MASK | _IC3CON_ICM1_MASK;	// every rising edge
	IC4CONSET = _IC4CON_C32_MASK | _IC4CON_ICM0_MASK | _IC4CON_ICM1_MASK;	// every rising edge
	IC5CONSET = _IC5CON_C32_MASK | _IC5CON_ICM0_MASK | _IC5CON_ICM1_MASK;	// every rising edge
	IC6CONSET = _IC6CON_C32_MASK | _IC6CON_ICM0_MASK | _IC6CON_ICM1_MASK;	// every rising edge
	IC7CONSET = _IC7CON_C32_MASK | _IC7CON_ICM0_MASK | _IC7CON_ICM1_MASK;	// every rising edge
	IC9CONSET = _IC9CON_C32_MASK | _IC9CON_ICM0_MASK | _IC9CON_ICM1_MASK;	// every rising edge

	// IC1 interrupt settings
	IPC1bits.IC1IP = 6;		// priority level 6 (higher level has higher priority)
	IPC1bits.IC1IS = 1;		// sub priority level 1
	IPC1bits.IC1EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC1bits.IC1EIS = 1;	// sub priority level 1
	IFS0bits.IC1IF = 0;		// Input Capture interrupt flag
	IFS0bits.IC1EIF = 0;	// Input Capture interrupt error status
	IEC0bits.IC1IE = 1;		// Enable Interrupt

	// IC2 interrupt settings
	IPC2bits.IC2IP = 6;		// priority level 6 (higher level has higher priority)
	IPC2bits.IC2IS = 1;		// sub priority level 1
	IPC2bits.IC2EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC2bits.IC2EIS = 1;	// sub priority level 1
	IFS0bits.IC2IF = 0;		// Input Capture interrupt flag
	IFS0bits.IC2EIF = 0;	// Input Capture interrupt error status
	IEC0bits.IC2IE = 1;		// Enable Interrupt

	// IC3 interrupt settings
	IPC4bits.IC3IP = 6;		// priority level 6 (higher level has higher priority)
	IPC4bits.IC3IS = 1;		// sub priority level 1
	IPC3bits.IC3EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC3bits.IC3EIS = 1;	// sub priority level 1
	IFS0bits.IC3IF = 0;		// Input Capture interrupt flag
	IFS0bits.IC3EIF = 0;	// Input Capture interrupt error status
	IEC0bits.IC3IE = 1;		// Enable Interrupt

	// IC4 interrupt settings
	IPC5bits.IC4IP = 6;		// priority level 6 (higher level has higher priority)
	IPC5bits.IC4IS = 1;		// sub priority level 1
	IPC5bits.IC4EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC5bits.IC4EIS = 1;	// sub priority level 1
	IFS0bits.IC4IF = 0;		// Input Capture interrupt flag
	IFS0bits.IC4EIF = 0;	// Input Capture interrupt error status
	IEC0bits.IC4IE = 1;		// Enable Interrupt

	// IC5 interrupt settings
	IPC6bits.IC5IP = 6;		// priority level 6 (higher level has higher priority)
	IPC6bits.IC5IS = 1;		// sub priority level 1
	IPC6bits.IC5EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC6bits.IC5EIS = 1;	// sub priority level 1
	IFS0bits.IC5IF = 0;		// Input Capture interrupt flag
	IFS0bits.IC5EIF = 0;	// Input Capture interrupt error status
	IEC0bits.IC5IE = 1;		// Enable Interrupt

	// IC6 interrupt settings
	IPC7bits.IC6IP = 6;		// priority level 6 (higher level has higher priority)
	IPC7bits.IC6IS = 1;		// sub priority level 1
	IPC7bits.IC6EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC7bits.IC6EIS = 1;	// sub priority level 1
	IFS0bits.IC6IF = 0;		// Input Capture interrupt flag
	IFS0bits.IC6EIF = 0;	// Input Capture interrupt error status
	IEC0bits.IC6IE = 1;		// Enable Interrupt

	// IC7 interrupt settings
	IPC8bits.IC7IP = 6;		// priority level 6 (higher level has higher priority)
	IPC8bits.IC7IS = 1;		// sub priority level 1
	IPC8bits.IC7EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC8bits.IC7EIS = 1;	// sub priority level 1
	IFS1bits.IC7IF = 0;		// Input Capture interrupt flag
	IFS1bits.IC7EIF = 0;	// Input Capture interrupt error status
	IEC1bits.IC7IE = 1;		// Enable Interrupt

	// IC8 interrupt settings - not used
	IPC9bits.IC8IP = 6;		// priority level 6 (higher level has higher priority)
	IPC9bits.IC8IS = 1;		// sub priority level 1
	IPC9bits.IC8EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC9bits.IC8EIS = 1;	// sub priority level 1
	IFS1bits.IC8IF = 0;		// Input Capture interrupt flag
	IFS1bits.IC8EIF = 0;	// Input Capture interrupt error status
	IEC1bits.IC8IE = 0;		// Disable Interrupt - not used

	// IC9 interrupt settings
	IPC10bits.IC9IP = 6;	// priority level 6 (higher level has higher priority)
	IPC10bits.IC9IS = 1;	// sub priority level 1
	IPC10bits.IC9EIP = 6;	// priority level 6 (higher level has higher priority)
	IPC10bits.IC9EIS = 1;	// sub priority level 1
	IFS1bits.IC9IF = 0;		// Input Capture interrupt flag
	IFS1bits.IC9EIF = 0;	// Input Capture interrupt error status
	IEC1bits.IC9IE = 1;		// Enable Interrupt

	// start timer 2/3 as a 32 bit timer
	T2CONSET = _T2CON_ON_MASK;

	// start capture channels
	IC1CONSET = _IC1CON_ON_MASK;
	IC2CONSET = _IC2CON_ON_MASK;
	IC3CONSET = _IC3CON_ON_MASK;
	IC4CONSET = _IC4CON_ON_MASK;
	IC5CONSET = _IC5CON_ON_MASK;
	IC6CONSET = _IC6CON_ON_MASK;
	IC7CONSET = _IC7CON_ON_MASK;
	//IC8CONSET = _IC8CON_ON_MASK;
	IC9CONSET = _IC9CON_ON_MASK;
}

// used by Ethernet Chip ENC
static void InitializeSPI1(void)
{
	volatile uint32_t dummy;

	SPI1CON = 0;        // Stops and resets the SPI1.

	dummy = SPI1BUF;    // clears the receive buffer
	SPI1BRG = 0x3;      // SYS_CLK_BUS_PERIPHERAL_2 / (2*(3+1)) = 12.5MHZ clock frequency, max allowed SCK is 14MHZ!

	SPI1STAT = 0;
	SPI1CON = 0b00000001100100000;  // SPI OFF, 8 bits transfer, SMP=CKE=1, Master mode

	SPI1CON2 = 0;
	SPI1CONSET = _SPI1CON_ON_MASK;
}

// used by External Flash Memory
static void InitializeSPI3(void)
{
	volatile uint32_t dummy;

	FLASH_CS_OUT = 1;

	SPI3CON = 0;        // Stops and resets the SPI1.

	dummy = SPI3BUF;    // clears the receive buffer
	SPI3BRG = 0x1;      // SYS_CLK_BUS_PERIPHERAL_2 / (2*(1+1)) = 25MHZ clock frequency, max allowed SCK is 25MHZ by PIC TABLE 37-30: SPIx MASTER MODE

	SPI3STAT = 0;
	SPI3CON = 0b00000001100100000;  // SPI OFF, 8 bits transfer, SMP=CKE=1, Master mode

	SPI3CON2 = 0;
	SPI3CONSET = _SPI3CON_ON_MASK;
}

static void __attribute__((noreturn)) SoftReset(void)
{
	volatile uint32_t* p = &RSWRST;

	__builtin_disable_interrupts();

	if (DMACONbits.SUSPEND == 0)
	{
		DMACONSET = _DMACON_SUSPEND_MASK;
		while (DMACONbits.DMABUSY == 1);
	}

	SYSKEY = 0;
	SYSKEY = 0xAA996655;
	SYSKEY = 0x556699AA;

	RSWRSTSET = _RSWRST_SWRST_MASK;
	*p;

	while(1);
}

static void InitializeClocks(void)
{
	OSCCONbits.FRCDIV = 0;
	OSCTUN = 10; // calibrate internal rc osc

	// Enable Peripheral Bus 1 for OSC2 -> SYSCLK/2 = 100MHZ
	PB1DIV = 0x8801;

	// Enable Peripheral Bus 2 for PMP, I2C, UART, SPI -> SYSCLK/2 = 100MHZ
	PB2DIV = 0x8801;

	// Enable Peripheral Bus 3 for ADC, CMP, TIMER, COMPARE, CAPTURE -> SYSCLK/2 = 100MHZ
	PB3DIV = 0x8801;

	// Enable Peripheral Bus 4 for PORTS -> SYSCLK/2 = 100MHZ
	PB4DIV = 0x8801;

	// Enable Peripheral Bus 5 for FLASH, CRYPTO, RNG, USB, CA, ETHERNET, SQI -> SYSCLK/2 = 100MHZ
	PB5DIV = 0x8801;

	// Enable Peripheral Bus 7 for CPU and Deadman Timer -> SYSCLK/1 = 200MHZ
	PB7DIV = 0x8800;

	// Enable Peripheral Bus 8 for EBI -> SYSCLK/2 = 100MHZ
	PB8DIV = 0x8801;

	// Reference Clock #1 at PBCLK1 / 10 = 10MHZ	and clocked out at REFCLKO1 pin
	REFO1CON = 0x59001;
}

static void InitializeCache(void)
{
	// Enable predictive prefetch for any address
	// Two Wait states
	PRECON = 0x32;
	
	// 010 -> Uncached
	//__builtin_bcsc0(_CP0_CONFIG, _CP0_STATUS_SELECT, 5, 2); 
		
	// 011 -> Cacheable, non-coherent, write-back, write allocate
	__builtin_bcsc0(_CP0_CONFIG, _CP0_STATUS_SELECT, 4, 3); 
}


static void InitializePorts(void)
{
	////////////////////////////////////////////////////////////////////////////
	// Default states of ports   

	// make all ports inputs
	TRISASET = 0xFFFF;
	TRISBSET = 0xFFFF;
	TRISCSET = 0xFFFF;
	TRISDSET = 0xFFFF;
	TRISESET = 0xFFFF;
	TRISFSET = 0xFFFF;
	TRISGSET = 0xFFFF;

	// disable all analogs
	ANSELACLR = 0xFFFF;
	ANSELBCLR = 0xFFFF;
	ANSELCCLR = 0xFFFF;
	ANSELDCLR = 0xFFFF;
	ANSELECLR = 0xFFFF;
	ANSELFCLR = 0xFFFF;
	ANSELGCLR = 0xFFFF;

	// all outputs appear as zero
	LATACLR = 0xFFFF;
	LATBCLR = 0xFFFF;
	LATCCLR = 0xFFFF;
	LATDCLR = 0xFFFF;
	LATECLR = 0xFFFF;
	LATFCLR = 0xFFFF;
	LATGCLR = 0xFFFF;

	// all outputs are push pull
	ODCACLR = 0xFFFF;
	ODCBCLR = 0xFFFF;
	ODCCCLR = 0xFFFF;
	ODCDCLR = 0xFFFF;
	ODCECLR = 0xFFFF;
	ODCFCLR = 0xFFFF;
	ODCGCLR = 0xFFFF;

	// Disable all Change Notice Control Register
	CNCONACLR = 0xFFFF;
	CNCONBCLR = 0xFFFF;
	CNCONCCLR = 0xFFFF;
	CNCONDCLR = 0xFFFF;
	CNCONECLR = 0xFFFF;
	CNCONFCLR = 0xFFFF;
	CNCONGCLR = 0xFFFF;

	// Disable all Pull-ups
	CNPUACLR = 0xFFFF;
	CNPUBCLR = 0xFFFF;
	CNPUCCLR = 0xFFFF;
	CNPUDCLR = 0xFFFF;
	CNPUECLR = 0xFFFF;
	CNPUFCLR = 0xFFFF;
	CNPUGCLR = 0xFFFF;

	// Disable all Pull-downs
	CNPDACLR = 0xFFFF;
	CNPDBCLR = 0xFFFF;
	CNPDCCLR = 0xFFFF;
	CNPDDCLR = 0xFFFF;
	CNPDECLR = 0xFFFF;
	CNPDFCLR = 0xFFFF;
	CNPDGCLR = 0xFFFF;


	////////////////////////////////////////////////////////////////////////////
	// PORTA Settings
	TRISACLR =	_TRISA_TRISA0_MASK |    // RLY13 is output
				_TRISA_TRISA1_MASK |    // Empty Pin
				_TRISA_TRISA5_MASK |    // LCD_EN is output
				_TRISA_TRISA6_MASK |    // RLY3 is output
				_TRISA_TRISA7_MASK |    // RLY4 is output
				_TRISA_TRISA9_MASK |    // Empty Pin
				_TRISA_TRISA10_MASK;    // Empty Pin

	// Enable Pull ups for KON1, 2 and 3
	CNPUASET =	_CNPUA_CNPUA2_MASK |    // KON1
				_CNPUA_CNPUA3_MASK |    // KON2
				_CNPUA_CNPUA4_MASK;     // KON3

	////////////////////////////////////////////////////////////////////////////
	// PORTB Settings
	TRISBCLR =	_TRISB_TRISB13_MASK |   // Empty Pin
				_TRISB_TRISB14_MASK |   // Flash SCK is output
				_TRISB_TRISB15_MASK;    // Flash CS is output

	// Enable Pull ups for INPUT1, BTN1, 2 and 3
	CNPUBSET =	_CNPUB_CNPUB4_MASK |	// INPUT1
				_CNPUB_CNPUB10_MASK |   // BTN1
				_CNPUB_CNPUB11_MASK |   // BTN2
				_CNPUB_CNPUB12_MASK;    // BTN3

	////////////////////////////////////////////////////////////////////////////
	// PORTC Settings
	TRISCCLR =	_TRISC_TRISC2_MASK |   // AFE_SC is output
				_TRISC_TRISC3_MASK |   // RLY11 is output
				_TRISC_TRISC4_MASK |   // AFE_RST is output				
				_TRISC_TRISC13_MASK;   // Empty Pin

	////////////////////////////////////////////////////////////////////////////
	// PORTD Settings
	LATDSET = _LATD_LATD4_MASK | _LATD_LATD11_MASK;	// BLE_TX and TX_COM are default 1
	TRISDCLR =	_TRISD_TRISD0_MASK |   // RS_CS is output
				_TRISD_TRISD1_MASK |   // ENC_SCK is output
				_TRISD_TRISD3_MASK |   // ENC_SI is output
				_TRISD_TRISD4_MASK |   // BLE_TX is output
				_TRISD_TRISD11_MASK |  // TX_COM is output
				_TRISD_TRISD15_MASK;   // FLASH_SI is output


	////////////////////////////////////////////////////////////////////////////
	// PORTE Settings
	TRISECLR =	_TRISE_TRISE0_MASK |   // RLY5 is output
				_TRISE_TRISE1_MASK |   // RLY6 is output
				_TRISE_TRISE2_MASK |   // RLY10 is output
				_TRISE_TRISE3_MASK |   // ENC_CS is output
				_TRISE_TRISE4_MASK |   // LCD_DB4 is output
				_TRISE_TRISE5_MASK |   // LCD_DB5 is output
				_TRISE_TRISE6_MASK |   // LCD_DB6 is output
				_TRISE_TRISE7_MASK |   // LCD_DB7 is output
				_TRISE_TRISE8_MASK |   // SPEAKER is output
				_TRISE_TRISE9_MASK;    // RLY14 is output

	////////////////////////////////////////////////////////////////////////////
	// PORTF Settings
	LATFSET = _LATF_LATF1_MASK | _LATF_LATF2_MASK;	// USB_TX and BRKD_TX are default 1
	TRISFCLR =	_TRISF_TRISF1_MASK |   // USB_TX is output
				_TRISF_TRISF2_MASK |   // BRKD_TX is output
				_TRISF_TRISF4_MASK |   // VBUSON is output
				_TRISF_TRISF5_MASK |   // CLK_GEN_JUMPER is output
				_TRISF_TRISF12_MASK |  // ACTIVE_PULSE is output
				_TRISF_TRISF13_MASK;   // REACTIVE_PULSE is output

	////////////////////////////////////////////////////////////////////////////
	// PORTG Settings
	TRISGCLR =	_TRISG_TRISG0_MASK |   // RLY2 is output
				_TRISG_TRISG1_MASK |   // RLY1 is output
				_TRISG_TRISG6_MASK |   // AFE_SCK is output
				_TRISG_TRISG8_MASK |   // AFE_SDI is output
				_TRISG_TRISG9_MASK |   // RLY12 is output
				_TRISG_TRISG12_MASK |  // RLY8 is output
				_TRISG_TRISG13_MASK |  // RLY9 is output
				_TRISG_TRISG14_MASK |  // RLY7 is output                
				_TRISG_TRISG15_MASK;   // LCD_RS is output


	// general timer clock source settings
	CFGCONbits.ICACLK = 0;	// All Input Capture modules use Timer2/3 as their timebase clock (TABLE 17-1: TIMER SOURCE CONFIGURATIONS)
	CFGCONbits.OCACLK = 1;	// Output Compare modules use an alternative Timer pair as their timebase clock (TABLE 18-1: TIMER SOURCE CONFIGURATIONS)
	CFGCONbits.JTAGEN = 0;	// disable JTAG pins so ACTIVE_PULSE and REACTIVE_PULSE pins can be used as IO

	// peripheral pin selection
	CFGCONbits.IOLOCK = 0;

	IC1Rbits.IC1R = 7;			// PULSE3 -> IC1 (RB2)
	IC4Rbits.IC4R = 8;			// PULSE2 -> IC4 (RB3)
	IC3Rbits.IC3R = 8;			// PULSE1 -> IC3 (RB5)
	IC6Rbits.IC6R = 5;			// PULSE4 -> IC6 (RB6)
	IC5Rbits.IC5R = 7;			// PULSE5 -> IC5 (RB7)
	IC9Rbits.IC9R = 2;			// PULSE6 -> IC9 (RB8)
	IC7Rbits.IC7R = 5;			// PULSE7 -> IC7 (RB9)

	RPB15Rbits.RPB15R = 7;		// FLASH_CS -> SS3(out) (RB15)
	INT3Rbits.INT3R = 10;       // AFE_DR -> INT3 (RC1)
	RPC2Rbits.RPC2R = 6;		// AFE_CS -> SS2(out) (RC2)
	T2CKRbits.T2CKR = 7;		// TXCO_10MHZ -> T2CK (RC14)

	RPD0Rbits.RPD0R = 1;		// RS485_DIR -> U1RTS (RD0)

	SDI1Rbits.SDI1R = 0;		// ENC_SO -> SDI1 (RD2)
	RPD3Rbits.RPD3R = 5;		// ENC_SI -> SDO1 (RD3)
	RPD4Rbits.RPD4R = 2;		// BLE_TX -> U4TX (RD4)
	U4RXRbits.U4RXR = 6;		// BLE_RX -> U4RX (RD5)
	IC2Rbits.IC2R = 0;			// RS485_RX -> IC2 (RD9)
	U1RXRbits.U1RXR = 3;		// RS485_RX -> U1RX (RD10)
	RPD11Rbits.RPD11R = 1;		// RS485_TX -> U1TX (RD11)
	INT2Rbits.INT2R = 10;       // ENC_INT -> INT2 (RD12)

	SDI3Rbits.SDI3R = 11;		// FLASH_SO -> SDI3 (RD14)
	RPD15Rbits.RPD15R = 7;		// FLASH_SI -> SDO3 (RD15)

	RPE3Rbits.RPE3R = 5;		// ENC_CS -> SS1(out) (RE3)
	RPE8Rbits.RPE8R = 12;		// SPEAKER -> OC1 (RE8)

	U3RXRbits.U3RXR = 4;		// USB_RX -> U3RX (RF0)
	RPF1Rbits.RPF1R = 1;		// USB_TX -> U3TX (RF1)
	RPF2Rbits.RPF2R = 2;		// BARCODE_TX -> U2TX (RF2)
	RPF5Rbits.RPF5R = 15;		// CLK_GEN -> REFCLKO1 (RF5)

	U2RXRbits.U2RXR = 11;		// BARCODE_RX -> U2RX (RF8)

	RPF12Rbits.RPF12R = 12;		// ACTIVE_PULSE -> OC8 (RF12)
	RPF13Rbits.RPF13R = 13;		// REACTIVE_PULSE -> OC9 (RF13)

	SDI2Rbits.SDI2R = 1;		// AFE_SO -> SDI2 (RG7)
	RPG8Rbits.RPG8R = 6;		// AFE_SI -> SDO2 (RG8)

#ifndef __BOOTLOADER
	CFGCONbits.IOLOCK = 1;
#endif // !__BOOTLOADER	
}

void InitializeDMA(void)
{
	// Used by INT3 - MCP3918 DR Interrupt
	DCH0CON = 0;
	DCH0ECON = 0;
	DCH0INT = 0;

	// Used by SPI2_TX - MCP3918 Transmit data
	DCH1CON = 0;
	DCH1ECON = 0;
	DCH1INT = 0;

	// Used by SPI2_RX - MCP3918 Receive data
	DCH2CON = 0;
	DCH2ECON = 0;
	DCH2INT = 0;

	// Used by Speaker timer 8Khz update
	DCH3CON = 0;
	DCH3ECON = 0;
	DCH3INT = 0;

	DCH4CON = 0;
	DCH4ECON = 0;
	DCH4INT = 0;

	DCH5CON = 0;
	DCH5ECON = 0;
	DCH5INT = 0;

	DCH6CON = 0;
	DCH6ECON = 0;
	DCH6INT = 0;

	DCH7CON = 0;
	DCH7ECON = 0;
	DCH7INT = 0;

	DMACON = _DMACON_ON_MASK;
}

void InitializeTrueRandomGenerator(void)
{
	RNGCON = 0x64;
	RNGCONbits.TRNGMODE = 1;
	RNGCONbits.TRNGEN = 1;
	while (RNGCNT < 64);
	RNGCONbits.LOAD = 1;
	while (RNGCONbits.LOAD == 1);

	// read RNGSEED1 and RNGSEED2
	// also read DEVSN0 and DEVSN1
}


void InitializeSystem(void)
{
	SYSKEY = 0x0;
	SYSKEY = 0xAA996655;
	SYSKEY = 0x556699AA;

	InitializeClocks();
	InitializeCache();
	InitializePorts();

	// used to tick every 1ms
	InitializeTimer89();

	// used by ENC424J600 Ethernet chip
	InitializeSPI1();

	// used by External Flash Memory
	InitializeSPI3();

	// used to measure PULSE channels in input capture mode
	InitializeTimer23();

	// generates seed
	InitializeTrueRandomGenerator();

	// Initialize DMA module
	InitializeDMA();

#ifndef __BOOTLOADER
	SYSKEY = 0x33333333;
#endif // !__BOOTLOADER	
}

//  CP0_COUNT counts at SYS_CLK_FREQ / 2 = 100MHZ !!
void DelayUs(const uint32_t us)
{
	_CP0_SET_COUNT(0);
	uint32_t t = us * 100UL;
	while (_CP0_GET_COUNT() < t);
}

void DelayMs(const uint32_t ms)
{
	_CP0_SET_COUNT(0);
	uint32_t t = ms * 100000UL;
	while (_CP0_GET_COUNT() < t);
}

void sys_init(void)
{
	// no need
}

uint32_t sys_now(void)
{
	uint32_t ms;

	do
	{
		ms = g_counter_1ms;
	} while (ms != g_counter_1ms);

	return(ms);
}

void CheckMCU(void)
{
	//

	// Watchdog Timer Post-scaler(1:2048) -> 2.048sec
	// clear watchdog timer
	WDTCONbits.WDTCLRKEY = 0x5743;

	// reset every 30 days
	if (g_soft_reset_timeout > MCU_SOFT_RESET_PERIOD)
	{
		SoftReset();
	}
}
