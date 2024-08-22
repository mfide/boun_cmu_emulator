#ifndef _FLASH_H
#define _FLASH_H

#include "io.h"

typedef struct
{
	bool		UseNTP;

	int32_t		GMT_In_Sec;

	bool		BuzzerEnabled;

	bool		USE_DHCP;
	uint32_t	STATIC_IP;
	uint32_t	STATIC_MASK;
	uint32_t	STATIC_GATEWAY;

	uint32_t	DateTime;

	uint32_t	SoftResetCode;
	uint32_t	MCU_ResetCode;
} TDeviceSettings;

typedef struct
{
	uint32_t	Header;
	uint32_t	ApplicationLength;
	uint32_t	APP_ROW_CRC[512 * 1024 / 2048]; // Application Length can be up to 512KB, PIC32MZ flash row size is 2KB, we will have CRC32 for each ROW
	uint32_t	UpdateInitiated;
	uint32_t	ImageValidated;
	uint32_t	UpdateCompleted;
	uint32_t	CRC32;
} TBootHeader;


extern TDeviceSettings	g_DeviceSettings;

/////////////////////////////////////////////////////////////////////////////////////////////////
extern uint32_t FLASH_ReadID(void);
extern void FLASH_TEST(void);

extern bool CheckFLASHIsOK(void);

extern void ReadDeviceSettings(void);
extern bool WriteDeviceSettings(void);
extern bool WriteFirmwareBlocks(const uint32_t node_num, const uint32_t* data, const uint32_t len);



#define APP_FLASH_BASE_ADDRESS					(0x9D000000)
#define APP_FLASH_END_ADDRESS					(0x9D000000 + 0x80000 - 1)

#define APP_FLASH_BASE_ADDRESS_NON_CACHEABLE	(0xBD000000)
#define APP_FLASH_END_ADDRESS_NON_CACHEABLE		(0xBD000000 + 0x80000 - 1)

#define APP_RESET_ADDRESS						(APP_FLASH_BASE_ADDRESS)

#define APP_CRC_LOCATION						(APP_FLASH_END_ADDRESS - 3)
#define APP_CRC_LOCATION_NON_CACHEABLE			(APP_FLASH_END_ADDRESS_NON_CACHEABLE - 3)

#ifdef __BOOTLOADER
	extern bool ValidateFirmwareBlocks(void);
	extern bool UpdateFirmwareHeader(void);
	extern void FirmwareFlashErase(void);
	extern bool FirmwareFlashWriteRow(const uint32_t row_num);
#endif

#endif


