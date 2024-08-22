#include "lcd.h"

// 0 is for shadow
// 1 is actual for physical LCD
// 64 bytes for screen, last byte for cursor position
static uint8_t m_LCD_BUFF[2][65];

static uint32_t m_LastUpdateStamp;
static uint32_t m_LastInitStamp;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
static void LCD_Send4(const uint8_t ch, const uint8_t send_data)
{
	if (send_data)
	{
		SET_LCD_RS_HIGH();
	}
	else
	{
		SET_LCD_RS_LOW();
	}

	DelayUs(1);

	SET_LCD_E_HIGH();
	DelayUs(1);

	if (ch & 1)
	{
		SET_LCD_DB4_HIGH();
	}
	else 
	{
		SET_LCD_DB4_LOW();
	}

	if (ch & 2)
	{
		SET_LCD_DB5_HIGH();
	}
	else
	{
		SET_LCD_DB5_LOW();
	}
	
	if (ch & 4)
	{
		SET_LCD_DB6_HIGH();
	}
	else
	{
		SET_LCD_DB6_LOW();
	}

	if (ch & 8)
	{
		SET_LCD_DB7_HIGH();
	}
	else
	{
		SET_LCD_DB7_LOW();
	}

	DelayUs(1);

	SET_LCD_E_LOW();
	DelayUs(1);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
static void LCD_Send8(const uint8_t ch, const uint8_t send_data)
{
	if (send_data)
	{
		SET_LCD_RS_HIGH();
	}
	else
	{
		SET_LCD_RS_LOW();
	}

	DelayUs(1);

	SET_LCD_E_HIGH();
	DelayUs(1);

	if (ch & 16)
	{
		SET_LCD_DB4_HIGH();
	}
	else
	{
		SET_LCD_DB4_LOW();
	}

	if (ch & 32)
	{
		SET_LCD_DB5_HIGH();
	}
	else
	{
		SET_LCD_DB5_LOW();
	}

	if (ch & 64)
	{
		SET_LCD_DB6_HIGH();
	}
	else
	{
		SET_LCD_DB6_LOW();
	}

	if (ch & 128)
	{
		SET_LCD_DB7_HIGH();
	}
	else
	{
		SET_LCD_DB7_LOW();
	}

	DelayUs(1);

	SET_LCD_E_LOW();
	DelayUs(1);

	////////////
	SET_LCD_E_HIGH();
	DelayUs(1);

	if (ch & 1)
	{
		SET_LCD_DB4_HIGH();
	}
	else
	{
		SET_LCD_DB4_LOW();
	}

	if (ch & 2)
	{
		SET_LCD_DB5_HIGH();
	}
	else
	{
		SET_LCD_DB5_LOW();
	}

	if (ch & 4)
	{
		SET_LCD_DB6_HIGH();
	}
	else
	{
		SET_LCD_DB6_LOW();
	}

	if (ch & 8)
	{
		SET_LCD_DB7_HIGH();
	}
	else
	{
		SET_LCD_DB7_LOW();
	}

	DelayUs(1);

	SET_LCD_E_LOW();

	DelayUs(40);
}

static void SetCursorPos(const uint8_t row, const uint8_t col)
{
	uint8_t adr = 0;
	switch (row)
	{
		case 0:
		{
			adr = 0x00;
			break;
		}

		case 1:
		{
			adr = 0x40;
			break;
		}

		case 2:
		{
			adr = 0x10;
			break;
		}

		case 3:
		{
			adr = 0x50;
			break;
		}

		default:
		{
			adr = 0;
			break;
		}
	}

	adr += col;
	adr |= 0x80; // Set DDRAM Address

	LCD_Send8(adr, 0);
}

static void LCD_WriteXYN(const uint8_t row, const uint8_t col, const uint8_t* text, uint8_t len)
{
	SetCursorPos(row, col);
	while (len > 0)
	{
		LCD_Send8(*text++, 1);
		--len;
	}
}

// this function initialize LCD and fill the screen accordingly
static void LCD_Show(const bool init, const uint8_t* text, uint8_t cur_pos)
{
	// Display On Command
	uint8_t disp = 0b00001100; // 0 0 0 0 1 D C B -> Display On, Cursor off, Blink off

	SET_LCD_E_LOW();
	SET_LCD_RS_LOW();
	SET_LCD_DB4_LOW();
	SET_LCD_DB5_LOW();
	SET_LCD_DB6_LOW();
	SET_LCD_DB7_LOW();

	if (init)
	{
		DelayUs(200);

		// Reset sequence
		LCD_Send4(3, 0);
		DelayMs(5);

		LCD_Send4(3, 0);
		DelayUs(200);

		LCD_Send4(3, 0);
		DelayUs(50);

		// Set to 4-bit interface
		LCD_Send4(2, 0);
		DelayUs(50);

		// Function Set Command
		LCD_Send8(0b00101000, 0); // 0 0 1 0 N F 0 0 -> 2 lines and 5x8 dots

		// Display Off Command
		//LCD_Send8(0b00001000, 0); // 0 0 0 0 1 D C B -> Display off, Cursor off, Blink off

		// Entry Mode Set Command
		LCD_Send8(0b00000110, 0); // 0 0 0 0 0 1 I/D S -> Increment and shift off

		// Clear Display Command
		//LCD_Send8(0b00000001, 0); // 0 0 0 0 0 0 0 1 -> Clears entire display and sets DDRAM address 0 in address counter.
	}

	LCD_WriteXYN(0, 0, &text[0], 16);
	LCD_WriteXYN(1, 0, &text[16], 16);
	LCD_WriteXYN(2, 0, &text[32], 16);
	LCD_WriteXYN(3, 0, &text[48], 16);

	// if we have a valid cursor position, then make cursor visible and blink
	bool cur_enabled = ((cur_pos & 0x80) != 0);
	uint8_t cur_loc = (cur_pos & 0x7F);
	if (cur_enabled && (cur_loc < 64))
	{
		uint8_t row = cur_loc / 16;
		uint8_t col = cur_loc % 16;

		SetCursorPos(row, col);

		disp |= 3; // Cursor on, Blink on
	}

	// Display On
	LCD_Send8(disp, 0);
}

void InitializeLCD(void)
{
	SET_LCD_E_LOW();
	SET_LCD_RS_LOW();
	SET_LCD_DB4_LOW();
	SET_LCD_DB5_LOW();
	SET_LCD_DB6_LOW();
	SET_LCD_DB7_LOW();

	DelayMs(40);

	// Reset sequence
	LCD_Send4(3, 0);
	DelayMs(5);

	LCD_Send4(3, 0);
	DelayUs(200);

	LCD_Send4(3, 0);
	DelayUs(50);

	// Set to 4-bit interface
	LCD_Send4(2, 0);
	DelayUs(50);

	// Function Set Command
	LCD_Send8(0b00101000, 0); // 0 0 1 0 N F 0 0 -> 2 lines and 5x8 dots

	// Display on Command
	LCD_Send8(0b00001100, 0); // 0 0 0 0 1 D C B -> Display on, Cursor off, Blink off

	// Entry Mode Set Command
	LCD_Send8(0b00000110, 0); // 0 0 0 0 0 1 I/D S -> Increment and shift off

	// Clear Display Command
	LCD_Send8(0b00000001, 0); // 0 0 0 0 0 0 0 1 -> Clears entire display and sets DDRAM address 0 in address counter.	

	// fill LCD memory with space character
	memset(&m_LCD_BUFF[0][0], ' ', sizeof(m_LCD_BUFF));
	m_LCD_BUFF[0][64] = 0; // don't show cursor

	DelayMs(40);

	m_LastInitStamp = 0;
	m_LastUpdateStamp = 0;
}

void ProcessLCD(void)
{
	memcpy(&m_LCD_BUFF[1][0], &m_LCD_BUFF[0][0], sizeof(m_LCD_BUFF[0]));
	LCD_Show(false, &m_LCD_BUFF[1][0], m_LCD_BUFF[1][64]);	
}

void LCDWriteTextRow(const uint8_t row, const char* text)
{
	if (row < 4)
	{
		bool eol = false;
		char* dest = (char*)&m_LCD_BUFF[0][row * 16];

		for (uint32_t i = 0; i < 16; i++)
		{
			char ch = ' ';

			if (*text == 0)
			{
				eol = true;
			}

			if (!eol)
			{
				ch = *text++;
			}

			*dest++ = ch;
		}		
	}
}

void LCDWriteTextRowCol(const uint8_t row, const uint8_t col, const char* text, const bool upper)
{
	if ((row < 4) && (col < 16))
	{
		char* dest = (char*)&m_LCD_BUFF[0][row * 16 + col];

		while(*text != 0)
		{
			char ch = *text++;

			if (upper)
			{
				ch = toupper(ch);
			}

			*dest++ = ch;
		}
	}
}

void LCDClear(void)
{
	memset(&m_LCD_BUFF[0][0], ' ', 4*16);
}

void LCDSetCursorPos(const uint8_t row, const uint8_t col)
{
	m_LCD_BUFF[0][64] &= 0x80;
	m_LCD_BUFF[0][64] |= row * 16 + col;
}

void LCDCursorOn(const bool val)
{
	if (val)
	{
		m_LCD_BUFF[0][64] |= 0x80;
	}
	else
	{
		m_LCD_BUFF[0][64] &= 0x7F;
	}
}

bool LCDIsCursorOn(void)
{
	return((m_LCD_BUFF[1][64] & 0x80) != 0);
}