#include "pic32_config.h"

#include "io.h"
#include "enc424j600if.h"
#include "lcd.h"
#include "rtc.h"
#include "flash.h"
#include "menu.h"
#include "cmu_emulator.h"

int main(void)
{
    __builtin_disable_interrupts();
	
	PRISS = 0x76543210; // assign shadow set #7-#1 to priority level #7-#1 ISRs
	INTCON = _INTCON_MVEC_MASK; // MVEC = 1
    
	InitializeSystem(); // all mcu related peripherals	

	ReadDeviceSettings(); // read device parameters

	lwIPEthernetRestart();
	InitializeLCD();
	
	InitializeExternalRTC();

	WriteWelcomeMsg();
	ProcessLCD();
		
	__builtin_enable_interrupts();
	
    while(true)
    {
        CheckMCU();

		ProcessEthernet();
		ProcessTCP_CMU();
		ProcessUDP_CMU();
    }
}

