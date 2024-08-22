#include "flash.h"
#include "aes.h"
#include "crc.h"


TDeviceSettings	g_DeviceSettings;


typedef struct
{
	uint8_t	Data[4096];
} TFlashPage;

typedef struct
{
	uint32_t	Data[2048 / 4];
} TRowPage;

typedef struct
{
	uint32_t	Data[1024 / 4];
} TNodePage;

typedef union
{
	TFlashPage		FlashPage[2]; // second page for backup!
	TDeviceSettings	DeviceSettings;
} UDeviceSettings;

typedef union
{
	TFlashPage		FlashPage[129]; // 128 * 4096 = 512KB for application hex file and 4KB for header!
	TRowPage		RowPage[129 * 2];
	TNodePage		NodePage[129 * 4]; // this is for communication
	TBootHeader		BootHeader;
} UBootloader;

typedef union
{
	uint8_t			EXTERNAL_FLASH_EMULATOR[8 * 1024 * 1024];	// 8MByte
	struct  
	{
		UDeviceSettings	DeviceSettings;
		UBootloader		Bootloader;
	};
} TMy_External_Flash;

#ifdef	_WIN32
	TMy_External_Flash	My_External_Flash;
	const TMy_External_Flash*	pExternalFlash = &My_External_Flash;
#else
	const TMy_External_Flash*	pExternalFlash = (const void*)0;
#endif

/////////////////////////////////////////////////////////////////////////////////
// FLASH ROUTINES FOR SST SST25VF064C
/////////////////////////////////////////////////////////////////////////////////

#define SST_READ_ARRAY            0x03

#define SST_SECTOR_ERASE          0x20

#define SST_BYTE_PROGRAM          0x02

#define SST_WRITE_ENABLE          0x06
#define SST_WRITE_DISABLE         0x04

#define SST_READ_STATUS           0x05
#define SST_WRITE_STATUS          0x01
#define SST_ENABLE_WRITE_STATUS   0x50

#define SST_READ_ID               0x9F

#define SST_ULBPR				  0x98
#define SST_WBPR				  0x42

#define ID_SST25VF032B			  0x004A25BF
#define ID_SST26VF032B			  0x004226BF

static inline uint8_t SST_WriteRead(uint8_t val)
{
	uint8_t recv;

	SPI3BUF = val;
	while (SPI3STATbits.SPIBUSY);

	recv = SPI3BUF;

	return(recv);
}

uint32_t FLASH_ReadID(void)
{
	uint32_t tmp = 0;
	uint8_t *ptr = (uint8_t*)&tmp;

	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_READ_ID);
	*ptr++ = SST_WriteRead(0); // MANUFACTURER ID    -> SST              -> 0xBF
	*ptr++ = SST_WriteRead(0); // DEVICE ID BYTE 1   -> Memory Type      -> 0x25
	*ptr++ = SST_WriteRead(0); // DEVICE ID BYTE 2   -> Memory Capacity  -> 0x4B
	*ptr = 0;
	FLASH_CS_OUT = 1;

	// 0x004B25BF for SST25VF064C
	// 0x004A25BF for SST25VF032B
	// 0x004226BF for SST26VF032B
	return(tmp);
}

static uint8_t FLASH_ReadStatus(void)
{
	uint8_t tmp;

	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_READ_STATUS);
	tmp = SST_WriteRead(0); // DEVICE STATUS
	FLASH_CS_OUT = 1;

	return(tmp);
}

static void FLASH_WriteEnable(void)
{
	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_WRITE_ENABLE);
	FLASH_CS_OUT = 1;
}

static void FLASH_WriteDisable(void)
{
	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_WRITE_DISABLE);
	FLASH_CS_OUT = 1;
}

// BIT
// 0    BUSY      1 = Internal Write operation is in progress
//                0 = No internal Write operation is in progress
// 1    WEL       1 = Device is memory Write enabled
//                0 = Device is not memory Write enabled
// 2    BP0 Indicate current level of block write protection (See Table 5) 1 R/W
// 3    BP1 Indicate current level of block write protection (See Table 5) 1 R/W
// 4    BP2 Indicate current level of block write protection (See Table 5) 1 R/W
// 5    BP3 Indicate current level of block write protection (See Table 5) 1 R/W
// 6    RES Reserved for future use 0 N/A
// 7    BPL       1 = BP3, BP2, BP1, BP0 are read-only bits
//                0 = BP3, BP2, BP1, BP0 are readable/writable
static void FLASH_WriteStatusByte(uint8_t val)
{
	FLASH_WriteEnable();    // activate writing -> this bit will be cleared automatically after Write Status operation

	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_ENABLE_WRITE_STATUS); // Enable write status first
	SST_WriteRead(val);
	FLASH_CS_OUT = 1;

	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_WRITE_STATUS); // write status byte
	SST_WriteRead(val);
	FLASH_CS_OUT = 1;
}

static void FLASH_WaitBusy(void)
{
	do
	{
		DelayUs(5);
	} while ((FLASH_ReadStatus() & 0x03) == 0x03);	// waste time until not busy
}

static void FLASH_ProtectAll(void)
{
	uint32_t id = FLASH_ReadID();

	if (id == ID_SST25VF032B)
	{
		FLASH_WriteStatusByte(0x3C);   // protect all, status register bits
	}
	else if (id == ID_SST26VF032B)
	{
		FLASH_WriteEnable();    // activate writhing -> this bit will be cleared automatically after Write Status operation

		FLASH_CS_OUT = 0;
		SST_WriteRead(SST_WBPR); // WBPR

		SST_WriteRead(0x55); // last sector protection first byte
		SST_WriteRead(0x55); // last sector protection second byte

		for (uint8_t i = 0; i < 8; i++)
		{
			SST_WriteRead(0xFF); // protect
		}

		FLASH_CS_OUT = 1;
	}
	else
	{
		;
	}
}

static void FLASH_UnProtectAll(void)
{
	uint32_t id = FLASH_ReadID();

	if (id == ID_SST25VF032B)
	{
		FLASH_WriteStatusByte(0x00);   // unprotect all
	}
	else if (id == ID_SST26VF032B)
	{
		// Global Block-Protection Unlock (ULBPR)
		FLASH_WriteEnable();    // activate writing -> this bit will be cleared automatically after Write Status operation

		FLASH_CS_OUT = 0;
		SST_WriteRead(SST_ULBPR); // ULBPR
		FLASH_CS_OUT = 1;
	}
	else
	{
		;
	}
}

static void FLASH_Erase4KSector(uint32_t addr)
{
	FLASH_WriteEnable();

	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_SECTOR_ERASE); // erase 4kbyte block
	SST_WriteRead((addr >> 16) & 0xFF);
	SST_WriteRead((addr >> 8) & 0xFF);
	SST_WriteRead(addr & 0xFF);
	FLASH_CS_OUT = 1;

	FLASH_WaitBusy(); // wait if busy
}

#ifdef _WIN32
static void FLASH_Erase(uint32_t adr, int32_t size, bool remove_protection)
{
	uint32_t addr = (adr & 0xFFFFF000);

	while (size >= 4 * 1024L)
	{
		memset(&My_External_Flash.EXTERNAL_FLASH_EMULATOR[addr], 0xFF, 4096U);

		addr += 4 * 1024L;
		size -= 4 * 1024L;
	}
}
#else
static void FLASH_Erase(uint32_t adr, int32_t size, bool remove_protection)
{
	uint32_t addr = (uint32_t)adr;

	if (remove_protection)
	{
		FLASH_UnProtectAll();
	}

	while (size >= 4 * 1024L)
	{
		FLASH_Erase4KSector(addr);
		addr += 4 * 1024L;
		size -= 4 * 1024L;
	}

	if (remove_protection)
	{
		FLASH_ProtectAll();
	}
}
#endif

#ifdef _WIN32
static bool FLASH_Read(uint32_t adr, void* data, uint16_t size)
{
	uint8_t* Data = (uint8_t*)data;

	if (size == 0)
	{
		return(false);
	}

	do
	{
		*Data++ = My_External_Flash.EXTERNAL_FLASH_EMULATOR[adr++];
	} while (--size);

	return(true);
}
#else
static bool FLASH_Read(uint32_t adr, void* data, uint16_t size)
{
	uint32_t addr = (uint32_t)adr;
	uint8_t* Data = (uint8_t*)data;

	if (size == 0)
	{
		return(false);
	}

	FLASH_CS_OUT = 0;

	SST_WriteRead(SST_READ_ARRAY); // read array command

	SST_WriteRead((addr >> 16) & 0xFF);
	SST_WriteRead((addr >> 8) & 0xFF);
	SST_WriteRead(addr & 0xFF);

	do
	{
		*Data++ = SST_WriteRead(0);
	} while (--size);

	FLASH_CS_OUT = 1;

	return(true);
}
#endif

#ifdef _WIN32
static bool FLASH_Verify(uint32_t adr, const void* data, uint16_t size)
{
	bool result = true;
	uint8_t* Data = (uint8_t*)data;

	if (size == 0)
	{
		return(false);
	}

	do
	{
		if (*Data++ != My_External_Flash.EXTERNAL_FLASH_EMULATOR[adr++])
		{
			result = false;
		}
	} while (--size && result);

	return(result);
}
#else
static bool FLASH_Verify(uint32_t adr, const void* data, uint16_t size)
{
	bool result = true;
	uint32_t addr = (uint32_t)adr;
	uint8_t* Data = (uint8_t*)data;

	if (size == 0)
	{
		return(false);
	}

	FLASH_CS_OUT = 0;

	SST_WriteRead(SST_READ_ARRAY); // read array command

	SST_WriteRead((addr >> 16) & 0xFF);
	SST_WriteRead((addr >> 8) & 0xFF);
	SST_WriteRead(addr & 0xFF);

	do
	{
		if (*Data++ != SST_WriteRead(0))
		{
			result = false;
		}
	} while (--size && result);

	FLASH_CS_OUT = 1;

	return(result);
}
#endif

#ifdef _WIN32
static bool FLASH_Write(uint32_t adr, const void* data, uint16_t size, uint32_t sector_adr, uint16_t sector_size)
{
	uint32_t addr = (uint32_t)adr;
	uint8_t* Data = (uint8_t*)data;
	uint16_t len = size;

	uint32_t _PAGE = 0xFFFFFFFF; // önceki page

	do
	{
		//uint32_t CURRENT_PAGE = addr & 0x003FFF00; // page size 256 byte
		uint32_t CURRENT_PAGE = addr & 0x003FFFFE; // page size 1 byte

		if (CURRENT_PAGE != _PAGE)
		{
			// önce yazma iþlemi varsa onu bitir
			if (_PAGE != 0xFFFFFFFF)
			{
			}

			// 4KB lýk blok baþý ise öncelikle silme iþlemi yapýlmalý.
			if (addr == sector_adr)
				FLASH_Erase(sector_adr, sector_size, false);

			// yeni page e yazma iþlemini baþlat
			_PAGE = CURRENT_PAGE;
		} //if(CURRENT_PAGE != _PAGE)

		My_External_Flash.EXTERNAL_FLASH_EMULATOR[addr] &= (*Data++);

		addr++;
	} while (--len);

	return(FLASH_Verify(adr, data, size));
}
#else
// Addr, eðer 4096 lýk sayfalarýn baþýna denk gelmiyor ise,
// bu rutin o sayfayý önceden silinmiþ kabul eder.
// kayýt iþlemi herzaman ileri yönlüdür, aralara kayýt yapýlamaz.
static bool FLASH_Write(uint32_t adr, const void* data, uint16_t size, uint32_t sector_adr, uint16_t sector_size)
{
	uint32_t addr = (uint32_t)adr;
	uint8_t* Data = (uint8_t*)data;
	uint16_t len = size;

	uint32_t _PAGE = 0xFFFFFFFF; // önceki page

	FLASH_UnProtectAll();

	do
	{
		//uint32_t CURRENT_PAGE = addr & 0x003FFF00; // page size 256 byte
		uint32_t CURRENT_PAGE = addr & 0x003FFFFF; // page size 1 byte

		if (CURRENT_PAGE != _PAGE)
		{
			// önce yazma iþlemi varsa onu bitir
			if (_PAGE != 0xFFFFFFFF)
			{
				FLASH_CS_OUT = 1; // yazma iþlemini tamamla!
				FLASH_WaitBusy(); // wait if busy
				//DelayMs(2);
			}

			// 4KB lýk blok baþý ise öncelikle silme iþlemi yapýlmalý.
			if (addr == sector_adr)
				FLASH_Erase(sector_adr, sector_size, false);

			// yeni page e yazma iþlemini baþlat

			FLASH_WriteEnable();

			FLASH_CS_OUT = 0;
			SST_WriteRead(SST_BYTE_PROGRAM); // write array command
			SST_WriteRead((addr >> 16) & 0xFF);
			SST_WriteRead((addr >> 8) & 0xFF);
			SST_WriteRead(addr & 0xFF);

			_PAGE = CURRENT_PAGE;
		} //if(CURRENT_PAGE != _PAGE)

		SST_WriteRead(*Data++);

		addr++;
	} while (--len);

	FLASH_CS_OUT = 1; // yazma iþlemini tamamla!
	FLASH_WaitBusy(); // wait if busy

	FLASH_ProtectAll();

	return(FLASH_Verify(adr, data, size));
}
#endif


////////////////////////////////////////////////////////////////
bool CheckFLASHIsOK(void)
{
	// 0x004B25BF for SST25VF064C
	// 0x004A25BF for SST25VF032B
	uint32_t id = FLASH_ReadID();
	return((id == ID_SST25VF032B) || (id == ID_SST26VF032B));
}

void FLASH_TEST(void)
{
	static volatile uint8_t reg[10];

	DelayMs(500);

	FLASH_CS_OUT = 0;
	SST_WriteRead(0x72); // RBPR
	for (uint8_t i = 0; i < 10; i++)
	{
		reg[i] = SST_WriteRead(0); // protect
	}
	FLASH_CS_OUT = 1;

	DelayMs(500);

	FLASH_WriteEnable();
	FLASH_CS_OUT = 0;
	SST_WriteRead(SST_ULBPR); // ULBPR
	FLASH_CS_OUT = 1;


	DelayMs(500);
	FLASH_CS_OUT = 0;
	SST_WriteRead(0x72); // RBPR
	for (uint8_t i = 0; i < 10; i++)
	{
		reg[i] = SST_WriteRead(0); // protect
	}
	FLASH_CS_OUT = 1;

	DelayMs(500);
}

void ReadDeviceSettings(void)
{
	uint8_t key[16];
	uint8_t page[4096];
	bool res = false;

	CalcMCUKey(&key[0]);

	if (FLASH_Read((uint32_t)&pExternalFlash->DeviceSettings.FlashPage[0], &page[0], sizeof(page)))
	{
		aes_dec_block(&page[0], &page[0], sizeof(page), &key[0]);

		if (CRC32_OK(&page[0], sizeof(page)))
		{
			memcpy(&g_DeviceSettings, &page[0], sizeof(TDeviceSettings));
			res = true;
		}
	}

	// try backup page
	if(!res)
	{
		if (FLASH_Read((uint32_t)&pExternalFlash->DeviceSettings.FlashPage[1], &page[0], sizeof(page)))
		{
			aes_dec_block(&page[0], &page[0], sizeof(page), &key[0]);

			if (CRC32_OK(&page[0], sizeof(page)))
			{
				memcpy(&g_DeviceSettings, &page[0], sizeof(TDeviceSettings));
				res = true;
			}
		}
	}

	// if we couldn't get the parameters from the flash memory, then use default
	if (!res)
	{
		memset(&g_DeviceSettings, 0, sizeof(TDeviceSettings));

		g_DeviceSettings.BuzzerEnabled = true;

		g_DeviceSettings.GMT_In_Sec = 60UL * 60UL * 3UL; // default: UTC+3
		g_DeviceSettings.UseNTP = true;

		g_DeviceSettings.USE_DHCP = true;
		g_DeviceSettings.STATIC_IP = 0xC0A801FA;		// 192, 168, 1, 250
		g_DeviceSettings.STATIC_MASK = 0xFFFFFF00;		// 255, 255, 255, 0
		g_DeviceSettings.STATIC_GATEWAY = 0xC0A80101;	// 192, 168, 1, 1
	}

	#ifndef __BOOTLOADER
	g_DeviceSettings.MCU_ResetCode = RCON;
	RCONCLR = 0xFFFFFFFF;
	#endif
}

bool WriteDeviceSettings(void)
{
	uint8_t key[16];
	uint8_t page[4096];
	bool res = false;

	CalcMCUKey(&key[0]);

	memset(&page[0], 0, sizeof(page));
	memcpy(&page[0], &g_DeviceSettings, sizeof(TDeviceSettings));
	CRC32_CALC(&page[0], sizeof(page));

	aes_enc_block(&page[0], &page[0], sizeof(page), &key[0]);

	uint32_t addr = (uint32_t)&pExternalFlash->DeviceSettings.FlashPage[0];

	// store it in primary page
	if (FLASH_Write(addr, &page[0], sizeof(page), (addr & 0xFFFFF000), 4096U))
	{
		// save also in backup page
		uint32_t addr = (uint32_t)&pExternalFlash->DeviceSettings.FlashPage[1];

		if (FLASH_Write(addr, &page[0], sizeof(page), (addr & 0xFFFFF000), 4096U))
		{
			res = true;
		}
	}

	return(res);
}

bool WriteFirmwareBlocks(const uint32_t node_num, const uint32_t* data, const uint32_t len)
{
	bool res = false;

	if (node_num < sizeof(pExternalFlash->Bootloader.NodePage) / sizeof(pExternalFlash->Bootloader.NodePage[0]))
	{	
		uint32_t addr = (uint32_t)&pExternalFlash->Bootloader.NodePage[node_num];

		if (FLASH_Write(addr, &data[0], len, (addr & 0xFFFFF000), 4096U))
		{
			res = true;
		}
	}

	return(res);
}

#ifdef __BOOTLOADER
const uint8_t m_key[] = { 120, 85, 213, 131, 90, 76, 211, 78, 163, 173, 76, 227, 116, 7, 108, 17 };
const uint8_t m_iv[] = { 137, 84, 4, 13, 202, 102, 168, 246, 53, 188, 90, 84, 26, 194, 191, 252 };

TRowPage  __attribute__((coherent)) g_row;
TBootHeader g_bh;

bool ValidateFirmwareBlocks(void)
{
	bool res = false;
	TFlashPage uboot;

	if (FLASH_Read((uint32_t)&pExternalFlash->Bootloader, &uboot, sizeof(uboot)))
	{
		TBootHeader bh;
		uint8_t iv[16];
		memcpy(iv, m_iv, sizeof(iv));

		aes_dec_block_iv((uint8_t*)&uboot, (uint8_t*)&uboot, sizeof(uboot), &m_key[0], &iv[0]);
		memcpy(&bh, &uboot, sizeof(bh));

		if (CRC32_OK(&bh, sizeof(bh)))
		{
			if ((bh.ApplicationLength == 512ul * 1024ul) && (bh.Header == 0xCEFAFA55) && (bh.ImageValidated == 0) && (bh.UpdateInitiated == 0) && (bh.UpdateCompleted == 0))
			{
				res = true;
				uint32_t r = 0;
				while(res && (r < 256))
				{
					TRowPage row;

					res = false;
					if (FLASH_Read((uint32_t)&pExternalFlash->Bootloader.RowPage[r + 2], &row, sizeof(row)))
					{
						iv[15] = r;
						aes_dec_block_iv((uint8_t*)&row, (uint8_t*)&row, sizeof(row), &m_key[0], &iv[0]);

						if (CalculateCRC32(&row, sizeof(row)) == bh.APP_ROW_CRC[r])
						{
							res = true;
						}
					}

					r++;
				}

				if (res)
				{
					g_bh = bh;
				}
			}
		}
	}

	return(res);
}

bool UpdateFirmwareHeader(void)
{
	bool res = false;

	TFlashPage uboot;
	memset(&uboot, 0, sizeof(uboot));

	g_bh.ImageValidated = 1;
	g_bh.UpdateInitiated = 1;
	g_bh.UpdateCompleted = 1;
	CRC32_CALC(&g_bh, sizeof(g_bh));

	memcpy(&uboot, &g_bh, sizeof(g_bh));
	aes_enc_block_iv((uint8_t*)&uboot, (uint8_t*)&uboot, sizeof(uboot), &m_key[0], &m_iv[0]);

	uint32_t addr = (uint32_t)&pExternalFlash->Bootloader.FlashPage[0];
	if (FLASH_Write(addr, &uboot, sizeof(uboot), (addr & 0xFFFFF000), 4096U))
	{
		res = true;
	}

	return(res);
}

static void NVMOperation(uint32_t nvmop)
{
	__builtin_disable_interrupts();

	NVMCONCLR = _NVMCON_NVMOP_MASK;
	NVMCONSET = nvmop;

	// Allow memory modifications
	NVMCONSET = _NVMCON_WREN_MASK;

	// Unlock the Flash
	NVMKEY = 0;
	NVMKEY = 0xAA996655;
	NVMKEY = 0x556699AA;

	// flash write start
	NVMCONSET = _NVMCON_WR_MASK;
	while (NVMCONbits.WR);

	// Disable flash write/erase operations
	NVMCONCLR = _NVMCON_WREN_MASK;

	// enable interrupt back
	__builtin_enable_interrupts();
}

#define NVM_PAGE_SIZE						0x4000
#define NVM_ROW_SIZE						0x800

#define NO_OPERATION						0x0
#define WORD_PROGRAM_OPERATION				0x1
#define QUAD_WORD_PROGRAM_OPERATION			0x2
#define ROW_PROGRAM_OPERATION				0x3
#define PAGE_ERASE_OPERATION				0x4
#define LOWER_FLASH_REGION_ERASE_OPERATION	0x5
#define UPPER_FLASH_REGION_ERASE_OPERATION	0x6
#define FLASH_ERASE_OPERATION				0x7

static void NVMClearError(void)
{
	NVMOperation(NO_OPERATION);
}

static bool IsPageBlank(uint32_t address)
{
	uint32_t *addr = (uint32_t *)(address & (~NVM_PAGE_SIZE + 1));
	uint32_t *endaddr = (uint32_t *)((uint32_t)addr + NVM_PAGE_SIZE);
	bool result = true;

	while (result && (addr < endaddr))
	{
		result = (0xFFFFFFFF == *addr);
		addr++;
	}

	return(result);
}

void FirmwareFlashErase(void)
{
	NVMOperation(FLASH_ERASE_OPERATION);
}

static void NVMRowWrite(void* address, void* data)
{
	NVMADDR = KVA_TO_PA((uint32_t)address);
	NVMSRCADDR = KVA_TO_PA((uint32_t)data);

	NVMOperation(ROW_PROGRAM_OPERATION);
}

bool FirmwareFlashWriteRow(const uint32_t row_num)
{
	bool res = false;

	if(row_num < 256)
	{
		TRowPage row;
		uint8_t iv[16];
		memcpy(iv, m_iv, sizeof(iv));

		if (FLASH_Read((uint32_t)&pExternalFlash->Bootloader.RowPage[row_num + 2], &row, sizeof(row)))
		{
			iv[15] = row_num;
			aes_dec_block_iv((uint8_t*)&row, (uint8_t*)&row, sizeof(row), &m_key[0], &iv[0]);

			if (CalculateCRC32(&row, sizeof(row)) == g_bh.APP_ROW_CRC[row_num])
			{
				uint32_t addr = APP_FLASH_BASE_ADDRESS + row_num*NVM_ROW_SIZE;
				memcpy(&g_row, &row, sizeof(row));

				NVMRowWrite((void*)addr, &g_row);

				res = true;
			}
		}
	}

	return(res);
}

#endif