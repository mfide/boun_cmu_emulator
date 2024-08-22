#include "menu.h"
#include "printf.h"

static uint32_t m_LastMenuUpdateStamp;
static uint32_t m_LastButtonUpdateStamp;
static char	m_RTC[20];
static double m_Temp;


void WriteWelcomeMsg(void)
{
	char str0[24];
	char str1[24];
	char str2[24];
	char str3[24];
	
	snprintf(str0, sizeof(str0), "Bogazici Uni.", 0);
	snprintf(str1, sizeof(str1), "CMU Dataset", 0);
	snprintf(str2, sizeof(str2), "UDP-TCP Emulator", 0);
	snprintf(str3, sizeof(str3), "MSEE - 2023", 0);	

	LCDWriteTextRow(0, &str0[0]);
	LCDWriteTextRow(1, &str1[0]);	
	LCDWriteTextRow(2, &str2[0]);
	LCDWriteTextRow(3, &str3[0]);
}