#ifndef _IO_H    /* Guard against multiple inclusion */
#define _IO_H

#ifdef _MSC_VER
	// defines pi, log.. constants
	#define _USE_MATH_DEFINES
#endif

// -fno-short-double -fno-builtin-memcpy  -> removed!!
//#define MEASURE_INTERRUPT_ROUTINE

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#ifdef _MSC_VER
	#include "p32mz0512efe100_vs.h"
#else
	#include <xc.h>
	#include <sys/attribs.h>
	#include <sys/endian.h>
	#include <sys/kmem.h>
#endif

#ifdef _MSC_VER
	#define _NOP()
#else
	#define _NOP() asm volatile("nop"); asm volatile("nop"); asm volatile("nop"); asm volatile("nop")
#endif

#define SYS_CLK_FREQ                        (200000000ul)
#define SYS_CLK_BUS_PERIPHERAL_1            (100000000ul)
#define SYS_CLK_BUS_PERIPHERAL_2            (100000000ul)
#define SYS_CLK_BUS_PERIPHERAL_3            (100000000ul)
#define SYS_CLK_BUS_PERIPHERAL_4            (100000000ul)
#define SYS_CLK_BUS_PERIPHERAL_5            (100000000ul)
#define SYS_CLK_BUS_PERIPHERAL_7            (200000000ul)
#define SYS_CLK_BUS_PERIPHERAL_8            (100000000ul)
#define SYS_CLK_BUS_REFERENCE_1             (50000000ul)
#define SYS_CLK_CONFIG_PRIMARY_XTAL         (24000000ul)

// control inputs
#define KON1_IN			PORTAbits.RA2
#define KON2_IN			PORTAbits.RA3
#define KON3_IN			PORTAbits.RA4

// LCD control pins
#define LCD_E_OUT		LATAbits.LATA5
#define LCD_RS_OUT		LATGbits.LATG15
#define LCD_DB4_OUT		LATEbits.LATE4
#define LCD_DB5_OUT		LATEbits.LATE5
#define LCD_DB6_OUT		LATEbits.LATE6
#define LCD_DB7_OUT		LATEbits.LATE7
#define SET_LCD_E_LOW()		LATACLR |= _LATA_LATA5_MASK
#define SET_LCD_E_HIGH()	LATASET |= _LATA_LATA5_MASK
#define SET_LCD_RS_LOW()	LATGCLR |= _LATG_LATG15_MASK
#define SET_LCD_RS_HIGH()	LATGSET |= _LATG_LATG15_MASK

#define SET_LCD_DB4_LOW()	LATECLR |= _LATE_LATE4_MASK
#define SET_LCD_DB4_HIGH()	LATESET |= _LATE_LATE4_MASK
#define SET_LCD_DB5_LOW()	LATECLR |= _LATE_LATE5_MASK
#define SET_LCD_DB5_HIGH()	LATESET |= _LATE_LATE5_MASK
#define SET_LCD_DB6_LOW()	LATECLR |= _LATE_LATE6_MASK
#define SET_LCD_DB6_HIGH()	LATESET |= _LATE_LATE6_MASK
#define SET_LCD_DB7_LOW()	LATECLR |= _LATE_LATE7_MASK
#define SET_LCD_DB7_HIGH()	LATESET |= _LATE_LATE7_MASK

// RTC I2C pins
#define RTC_SCL_OUT		LATAbits.LATA14		// SCL1
#define RTC_SDA_OUT		LATAbits.LATA15		// SDA1
#define RTC_SDA_IN		PORTAbits.RA15

// External Ethernet PHY
#define ENC_CS_OUT      LATEbits.LATE3		// SS1 (out)
#define ENC_SO_IN       PORTDbits.RD2		// SDI1
#define ENC_SI_OUT      LATDbits.LATD3		// SDO1
#define ENC_SCK_OUT     LATDbits.LATD1		// SCK1
#define ENC_INT_IN      PORTDbits.RD12		// INT2

// Button Inputs
#define BUTTON1_IN		PORTBbits.RB10
#define BUTTON2_IN		PORTBbits.RB11
#define BUTTON3_IN		PORTBbits.RB12

// External Flash Memory
#define FLASH_CS_OUT	LATBbits.LATB15		// SS3 (out)
#define FLASH_SO_IN     PORTDbits.RD14		// SDI3
#define FLASH_SI_OUT    LATDbits.LATD15		// SDO3
#define FLASH_SCK_OUT   LATBbits.LATB14		// SCK3

// Meter UART
#define METER_UART_RX_IN        PORTDbits.RD10		// U1RX
#define METER_UART_TX_OUT       LATDbits.LATD11		// U1TX
#define METER_UART_DIR_OUT      LATDbits.LATD0		// U1RTS
#define METER_UART_RX_CAP_IN    PORTDbits.RD9		// IC2

// Bluetooth Low Energy Module UART
#define BLE_UART_RX_IN        PORTDbits.RD5			// U4RX
#define BLE_UART_TX_OUT       LATDbits.LATD4		// U4TX

// USB Converter UART for PC Communication
#define USB_UART_RX_IN        PORTFbits.RF0			// U3RX
#define USB_UART_TX_OUT       LATFbits.LATF1		// U3TX

// TXCO 10 MHZ Input
#define TXCO_10MHZ_IN		PORTCbits.RC14			// T2CK

// REFO_CLK_OUTPUT 50MHZ
#define REFO_50MHZ_OUT		LATFbits.LATF5			// REFCLKO1


#define MCU_SOFT_RESET_PERIOD	(30UL*24UL*60*60*1000) // 30 days


// firmware version	v00.00
#define REFCAL_MAJOR_VER	1
#define REFCAL_MINOR_VER	0
#define BUILD_DATE			(__DATE__)

#if __cplusplus
extern "C" {
#endif

extern void InitializeSystem(void);

extern void DelayUs(const uint32_t us);
extern void DelayMs(const uint32_t ms);
extern void sys_init(void);
extern uint32_t sys_now(void);

extern void CheckMCU(void);

extern volatile uint32_t g_counter_10us;
extern volatile uint32_t g_counter_1ms;
extern volatile uint32_t g_inter_char_timeout;
extern volatile uint32_t g_soft_reset_timeout;

extern uint32_t GetAppCRC32(void);

#if __cplusplus
}
#endif

#endif /* _IO_H */
