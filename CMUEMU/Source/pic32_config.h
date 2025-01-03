#ifndef _PIC32_CONFIG_H    /* Guard against multiple inclusion */
#define _PIC32_CONFIG_H

#ifndef _MSC_VER
    #ifdef __DEBUG_HEX
        // DEVCP0
        #pragma config CP =         OFF // Code Protect (Protection Disabled)
    #else
        // DEVCP0
        #pragma config CP =         ON  // Code Protect (Protection Enabled)
    #endif

    // DEVCFG3
    #pragma config USERID = 0x2345          // Enter Hexadecimal value (Enter Hexadecimal value)
    #pragma config FMIIEN = OFF             // Ethernet RMII/MII Enable (RMII Enabled)
    #pragma config FETHIO = ON              // Ethernet I/O Pin Select (Default Ethernet I/O)
    #pragma config PGL1WAY = ON             // Permission Group Lock One Way Configuration (Allow only one reconfiguration)
    #pragma config PMDL1WAY = ON            // Peripheral Module Disable Configuration (Allow only one reconfiguration)
    #pragma config IOL1WAY = ON             // Peripheral Pin Select Configuration (Allow only one reconfiguration)
    #pragma config FUSBIDIO = ON            // USB USBID Selection (Controlled by the USB Module)

    // DEVCFG2
	// internal OSC didn't work, so we have used internal FRC
	//#pragma config FPLLIDIV = DIV_1         // System PLL Input Divider (3x Divider)
	//#pragma config FPLLICLK = PLL_FRC       // System PLL Input Clock Selection (POSC is input to the System PLL)

    #pragma config FPLLIDIV = DIV_3         // System PLL Input Divider (3x Divider)
    #pragma config FPLLRNG = RANGE_5_10_MHZ // System PLL Input Range (5-10 MHz Input)
    #pragma config FPLLICLK = PLL_POSC      // System PLL Input Clock Selection (POSC is input to the System PLL)
    #pragma config FPLLMULT = MUL_50        // System PLL Multiplier (PLL Multiply by 50)
    #pragma config FPLLODIV = DIV_2         // System PLL Output Clock Divider (2x Divider)
    #pragma config UPLLFSEL = FREQ_24MHZ    // USB PLL Input Frequency Selection (USB PLL input is 24 MHz)

    // DEVCFG1
    #pragma config FNOSC = SPLL             // Oscillator Selection Bits (System PLL)
    #pragma config DMTINTV = WIN_127_128    // DMT Count Window Interval (Window/Interval value is 127/128 counter value)
    #pragma config FSOSCEN = OFF            // Secondary Oscillator Enable (Disable SOSC)
    #pragma config IESO = OFF                // Internal/External Switch Over (Enabled)
    #pragma config POSCMOD = EC             // Primary Oscillator Configuration (HS osc mode)
    #pragma config OSCIOFNC = ON            // CLKO Output Signal Active on the OSCO Pin (Disabled)
    #pragma config FCKSM = CSDCMD           // Clock Switching and Monitor Selection (Clock Switch Enabled, FSCM Enabled)
    #pragma config WDTPS = PS4096			// Watchdog Timer Postscaler (1:4096) -> 4.096sec
    #pragma config WDTSPGM = STOP           // Watchdog Timer Stop During Flash Programming (WDT stops during Flash programming)
    #pragma config WINDIS = NORMAL          // Watchdog Timer Window Mode (Watchdog Timer is in non-Window mode)
    #pragma config FWDTEN = ON              // Watchdog Timer Enable (WDT Enabled)
    #pragma config FWDTWINSZ = WINSZ_25     // Watchdog Timer Window Size (Window size is 25%)
    #pragma config DMTCNT = DMT31           // Deadman Timer Count Selection (2^31 (2147483648))
    #pragma config FDMTEN = OFF             // Deadman Timer Enable (Deadman Timer is disabled)

    // DEVCFG0
    #pragma config DEBUG = OFF				// Background Debugger Enable (Debugger is disabled)
    #pragma config JTAGEN = OFF				// JTAG Enable
    #pragma config ICESEL = ICS_PGx1        // ICE/ICD Comm Channel Select (Communicate on PGEC1/PGED1)
    #pragma config TRCEN = ON				// Trace Enable
    #pragma config BOOTISA = MIPS32         // Boot ISA Selection (Boot code and Exception code is MIPS32)
    #pragma config FECCCON = ON             // Dynamic Flash ECC Configuration (Flash ECC is enabled (ECCCON bits are locked))
    #pragma config FSLEEP = OFF             // Flash Sleep Mode (Flash is powered down when the device is in Sleep mode)
    #pragma config DBGPER = PG_ALL          // Debug Mode CPU Access Permission (Allow CPU access to all permission regions)
    #pragma config SMCLR = MCLR_POR         // Soft Master Clear Enable bit (MCLR pin generates an emulated POR Reset)
    #pragma config SOSCGAIN = GAIN_2X       // Secondary Oscillator Gain Control bits (2x gain setting)
    #pragma config SOSCBOOST = OFF          // Secondary Oscillator Boost Kick Start Enable bit (Normal start of the oscillator)
    #pragma config POSCGAIN = GAIN_0_5X     // Primary Oscillator Gain Control bits (0.5x gain setting)
    #pragma config POSCBOOST = OFF          // Primary Oscillator Boost Kick Start Enable bit (Boost the kick start of the oscillator)
    #pragma config EJTAGBEN = NORMAL        // EJTAG Boot (Normal EJTAG functionality)

	#pragma config TSEQ =       0x0000
	#pragma config CSEQ =       0xFFFF

#endif // _CONFIG BITS

#endif /* _PIC32_CONFIG_H */
