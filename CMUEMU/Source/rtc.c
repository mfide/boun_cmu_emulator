#include "rtc.h"
#include "flash.h"


static uint8_t m_RTC_Buff[26];

#define		RTC_CONTROL1	0
#define		RTC_CONTROL2	1
#define		RTC_CONTROL3	2
#define		RTC_SECONDS		3
#define		RTC_MINUTES		4
#define		RTC_HOURS		5
#define		RTC_DAYS		6
#define		RTC_WEEKDAYS	7
#define		RTC_MONTHS		8
#define		RTC_YEARS		9
#define		RTC_ALARM_SEC	10
#define		RTC_ALARM_MIN	11
#define		RTC_ALARM_HOUR	12
#define		RTC_ALARM_DAY	13
#define		RTC_ALARM_WEEK	14
#define		RTC_CLOCK_CTRL	15
#define		RTC_WDT_CTRL	16
#define		RTC_WDT_VAL		17
#define		RTC_TS_CONTROL	18
#define		RTC_TS_SEC		19
#define		RTC_TS_MIN		20
#define		RTC_TS_HOUR		21
#define		RTC_TS_DAY		22
#define		RTC_TS_MONTH	23
#define		RTC_TS_YEAR		24
#define		RTC_AGING		25


#define RTC_POR_OVRD_MASK	8

#ifdef HARDWARE_I2C
static inline void SendStart(void)
{
	// send start
	I2C1CONSET = _I2C1CON_SEN_MASK;
	while (I2C1CON & _I2C1CON_SEN_MASK);
}

static inline void SendStop(void)
{
	// send stop
	I2C1CONSET = _I2C1CON_PEN_MASK;
	while (I2C1CON & _I2C1CON_PEN_MASK);
}

static inline bool SendByte(const uint8_t data)
{
	bool result = true;

	I2C1TRN = data;
	while (I2C1STAT & (_I2C1STAT_TRSTAT_MASK | _I2C1STAT_TBF_MASK));

	if (I2C1STAT & _I2C1STAT_ACKSTAT_MASK)
	{
		result = false;
	}

	return(result);
}

static inline void SendACK(const bool more_data)
{
	if (more_data)
	{
		// send ack
		I2C1CONCLR = _I2C1CON_ACKDT_MASK;
	}
	else
	{
		// send nack
		I2C1CONSET = _I2C1CON_ACKDT_MASK;
	}

	// send ack or nack
	I2C1CONSET = _I2C1CON_ACKEN_MASK;
	while (I2C1CON & _I2C1CON_ACKEN_MASK);
}

static inline uint8_t RecvByte(const bool more_data)
{
	I2C1CONSET = _I2C1CON_RCEN_MASK;
	while (I2C1CON & _I2C1CON_RCEN_MASK);

	uint8_t result = I2C1RCV;

	SendACK(more_data);

	return(result);
}
#else
static inline void SDA_HIGH(void)
{
	//RTC_SDA_OUT = 1;
	TRISASET = _TRISA_TRISA15_MASK;
}

static inline void SDA_LOW(void)
{
	//RTC_SDA_OUT = 0; /////////////////
	TRISACLR = _TRISA_TRISA15_MASK;
}

static inline bool SDA(void)
{
	return(RTC_SDA_IN);
}

static inline void SCL_HIGH(void)
{
	RTC_SCL_OUT = 1;
}

static inline void SCL_LOW(void)
{
	RTC_SCL_OUT = 0;
}

//********* I2C Bus Timing - uS ************
static inline void Delay05(void) // 2uS
{
	DelayUs(2);
}

static inline void Delay(void)  // 3uS
{
	DelayUs(3);
}

static inline void i2cclock(void)
{
	Delay();
	SCL_HIGH();
	Delay();
	SCL_LOW();
	Delay();
}

static inline bool i2creadbit(void)
{
	bool Data = false;

	Delay();          //  Minimum Clock Low Time
	SCL_HIGH();       //  Release clock
	Delay05();        //  1/2 Minimum Clock High Time
	if (SDA() != false)
	{
		Data = true;   //  READ in the data bit
	}
	Delay05();        //  1/2 Minimum Clock High Time
	SCL_LOW();        //  Lower the clock
	Delay();          //  Minimum Clock Low Time

	return(Data);
}

static bool i2cgetack(void)
{
	SCL_LOW();        //  Ensure clock is low
	SDA_HIGH();       //  Release the Data pin so slave can ACK
	SCL_HIGH();       //  raise the clock pin
	Delay05();          //  wait for 1/2 the clock pulse
	if (SDA())           //  sample the ACK signal
	{
		return(false);      //  No ACK so return BAD
	}
	Delay05();          //  Else wait for rest of clock
	SCL_LOW();        //  Finish the clock pulse
	Delay();          //  Minimum Clock Low Time
	Delay();          //  Minimum Clock Low Time
	return(true);
}

static uint8_t i2cgetbyte(void)
{
	uint8_t Byte = 0;

	Delay();         //  Minimum Clock Low Time

	for (uint8_t count = 8; count > 0; count--)   //  Read 8 bits of data
	{
		Byte <<= 1;
		SDA_HIGH();            //  Release pin so data can be received
		if (i2creadbit())
		{
			Byte += 1;
		}
	}

	return(Byte);
}


static inline void SendStart(void)
{
	//  Ensure pins are in high impedance mode --
	SDA_HIGH();
	SCL_HIGH();
	Delay();

	//  Generate the start condition
	SDA_LOW();
	Delay();

	SCL_LOW();
	Delay();
}

static inline void SendStop(void)
{
	//  Generate Stop Condition --
	SDA_LOW();
	SCL_HIGH();
	Delay();
	SDA_HIGH();
}

static inline bool SendByte(uint8_t data)
{
	Delay();         //  Minimum Clock Low Time

	for (uint8_t count = 8; count > 0; count--)   //  Send 8 bits of data
	{
		if ((data & 0x80) == 0)        //  Get the Bit
		{
			SDA_LOW();             //  Lower pin if bit = 0
		}
		else
		{
			SDA_HIGH();            //  Release pin if bit = 1
		}

		data <<= 1;                 //  Shift next bit into position
		i2cclock();                   //  Pulse the clock
	}

	SDA_HIGH();              //  Release data pin for ACK

	return(i2cgetack());
}

static inline void SendACK(const bool more_data)
{
	if (more_data)
	{
		// - Send ACK to slave except for last time
		SDA_LOW();
	}
	else
	{
		// - Send NACK
		SDA_HIGH();	
	}

	Delay();      //  Give it time to settle
	i2cclock();   //  Pulse the clock
	SDA_HIGH();   //  Release ACK
	Delay();      //  Gap between next byte
}

static inline uint8_t RecvByte(const bool more_data)
{
	uint8_t result = i2cgetbyte();

	SendACK(more_data);

	return(result);
}

#endif // HARDWARE_I2C


static bool WriteRTC(uint8_t adr, uint8_t* data, uint8_t len)
{
	bool result;

	// send start
	SendStart();

	result = SendByte(0b10100010);	

	if (result) result = SendByte(adr);

	while (result && (len != 0))
	{
		result = SendByte(*data++);
		len--;
	}

	// send stop
	SendStop();

	return(result);
}

static bool ReadRTC(uint8_t adr, uint8_t* data, uint8_t len)
{
	bool result = true;

	// send start
	SendStart();

	result = SendByte(0b10100010);

	if (result) result = SendByte(adr);

	// send stop
	SendStop();

	if (result)
	{
		// send start
		SendStart();

		result = SendByte(0b10100011); // read

		while (result && (len-- != 0))
		{
			*data++ = RecvByte(len != 0);
		}
	}

	// send stop
	SendStop();

	return(result);
}

static void GetRTCBuffToDefault(void)
{
	m_RTC_Buff[RTC_CONTROL1] = 0;
	m_RTC_Buff[RTC_CONTROL2] = 0;
	m_RTC_Buff[RTC_CONTROL3] = 0;
	m_RTC_Buff[RTC_CLOCK_CTRL] = 0b11000111; // temperature measurement every 30 secs, and clock output high-z
	m_RTC_Buff[RTC_AGING] = 0b00001000; // default aging value

	m_RTC_Buff[RTC_WDT_CTRL] = 0;
	m_RTC_Buff[RTC_WDT_VAL] = 0;

	m_RTC_Buff[RTC_TS_CONTROL] = 0b01000000; // timestamp function disabled

	m_RTC_Buff[RTC_ALARM_SEC] = 0b10000000; // second alarm disabled
	m_RTC_Buff[RTC_ALARM_MIN] = 0b10000000; // minute alarm disabled
	m_RTC_Buff[RTC_ALARM_HOUR] = 0b10000000; // hour alarm disabled
	m_RTC_Buff[RTC_ALARM_DAY] = 0b10000000; // day alarm disabled
	m_RTC_Buff[RTC_ALARM_WEEK] = 0b10000000; // weekday alarm disabled

	
	m_RTC_Buff[RTC_SECONDS] = 0x00;	// 00
	m_RTC_Buff[RTC_MINUTES] = 0x00;	// 00
	m_RTC_Buff[RTC_HOURS] = 0x00;	// 00

	m_RTC_Buff[RTC_DAYS] = 0x01;	// 01
	m_RTC_Buff[RTC_MONTHS] = 0x01;	// 01
	m_RTC_Buff[RTC_YEARS] = 0x19;	// 2019
	m_RTC_Buff[RTC_WEEKDAYS] = 2;	// Tuesday
}

static bool WriteTmp275_Int8(uint8_t adr, const uint8_t data)
{
	bool result;

	// send start
	SendStart();

	result = SendByte(0b10011110);

	if (result) result = SendByte(adr);
	if (result)	result = SendByte(data);

	// send stop
	SendStop();

	return(result);
}

static bool ReadTmp275_Int8(uint8_t adr, uint8_t* data)
{
	bool result = true;

	// send start
	SendStart();

	result = SendByte(0b10011110);

	if (result) result = SendByte(adr);

	// send stop
	SendStop();

	if (result)
	{
		// send start
		SendStart();

		result = SendByte(0b10011111); // read
		*data = RecvByte(true);
	}

	// send stop
	SendStop();

	return(result);
}

///////////
static bool WriteTmp275_Int16(uint8_t adr, const int16_t data)
{
	bool result;

	// send start
	SendStart();

	result = SendByte(0b10011110);

	if (result) result = SendByte(adr);
	if (result)	result = SendByte((uint8_t)((uint16_t)data >> 8) & 0xFF);
	if (result)	result = SendByte((uint8_t)((uint16_t)data >> 0) & 0xFF);

	// send stop
	SendStop();

	return(result);
}

static bool ReadTmp275_Int16(uint8_t adr, int16_t* data)
{
	bool result = true;

	// send start
	SendStart();

	result = SendByte(0b10011110);

	if (result) result = SendByte(adr);

	// send stop
	SendStop();

	if (result)
	{
		// send start
		SendStart();

		result = SendByte(0b10011111); // read
		uint16_t h = RecvByte(true);
		uint16_t l = RecvByte(true);

		*data = (int16_t)((h << 8) | l);
	}

	// send stop
	SendStop();

	return(result);
}

double ReadTemperature(void)
{
	double res = 25.0;
	int16_t t;

	if (ReadTmp275_Int16(0, &t))
	{
		res = t;
		res *= 0.0625 / 16;
	}

	return(res);
}

bool InitializeTemperatureSensor(void)
{
	bool result;
	DelayMs(100);
	
	uint8_t config_reg = 0b01111000;
	result = WriteTmp275_Int8(1, config_reg);	

	int16_t temp_low = (int16_t)(-45.0 / 0.0625)*16;
	if (result) result = WriteTmp275_Int16(2, temp_low);

	int16_t temp_high = (int16_t)(90.0 / 0.0625)*16;
	if (result) result = WriteTmp275_Int16(3, temp_high);

	if (result) result = ReadTmp275_Int8(1, &config_reg);
	if (result) result = ReadTmp275_Int16(2, &temp_low);
	if (result) result = ReadTmp275_Int16(3, &temp_high);

	return(result && (temp_low == -720*16) && (temp_high == 1440*16) && (config_reg == 0x78));
}

void InitializeExternalRTC(void)
{
	// SYS_CLK_BUS_PERIPHERAL_2 -> 100 Mhz
	I2C1CON = 0;
	I2C1STAT = 0;
	I2C1ADD = 0;
	
#ifdef HARDWARE_I2C	
	// 50000 / 100 - 12.41 -> for 100kHz
	//I2C1BRG = 488; // I2C speed is 100kHz

	// 50000 / 400 - 12.41 -> for 400kHz
	I2C1BRG = 113; // I2C speed is 400kHz

	I2C1CONSET = _I2C1CON_SDAHT_MASK | _I2C1CON_ON_MASK;
#else
	SDA_HIGH();
	
	TRISACLR = _TRISA_TRISA14_MASK;
	SCL_HIGH();
#endif

	InitializeTemperatureSensor();

	memset(&m_RTC_Buff[0], 0, sizeof(m_RTC_Buff));
	if (ReadRTC(0, &m_RTC_Buff[0], sizeof(m_RTC_Buff)))
	{
		if (m_RTC_Buff[RTC_CONTROL1] & RTC_POR_OVRD_MASK)
		{
			uint8_t otp = 0b11000111;
			DelayMs(100); // wait internal osc to be stable
			WriteRTC(RTC_CLOCK_CTRL, &otp, 1);
			DelayMs(100);
			otp = 0b11100111;
			WriteRTC(RTC_CLOCK_CTRL, &otp, 1);
			DelayMs(100);

			GetRTCBuffToDefault();
			WriteRTC(0, &m_RTC_Buff[0], sizeof(m_RTC_Buff));
		}
	}
	else
	{
		;
	}
}

void GetDateTime(char* buf)
{
	strncpy((char*)&buf[0], "20YY-MM-DD HH:MM:SS", 19);
	if (ReadRTC(0, &m_RTC_Buff[0], sizeof(m_RTC_Buff)))
	{
		buf[2] = ((m_RTC_Buff[RTC_YEARS] >> 4) & 0x0F) + '0';
		buf[3] = ((m_RTC_Buff[RTC_YEARS] >> 0) & 0x0F) + '0';

		buf[5] = ((m_RTC_Buff[RTC_MONTHS] >> 4) & 0x0F) + '0';
		buf[6] = ((m_RTC_Buff[RTC_MONTHS] >> 0) & 0x0F) + '0';

		buf[8] = ((m_RTC_Buff[RTC_DAYS] >> 4) & 0x0F) + '0';
		buf[9] = ((m_RTC_Buff[RTC_DAYS] >> 0) & 0x0F) + '0';

		buf[11] = ((m_RTC_Buff[RTC_HOURS] >> 4) & 0x0F) + '0';
		buf[12] = ((m_RTC_Buff[RTC_HOURS] >> 0) & 0x0F) + '0';

		buf[14] = ((m_RTC_Buff[RTC_MINUTES] >> 4) & 0x0F) + '0';
		buf[15] = ((m_RTC_Buff[RTC_MINUTES] >> 0) & 0x0F) + '0';

		buf[17] = ((m_RTC_Buff[RTC_SECONDS] >> 4) & 0x0F) + '0';
		buf[18] = ((m_RTC_Buff[RTC_SECONDS] >> 0) & 0x0F) + '0';
	}
}

void SetDateTime(struct tm const* val)
{
	GetRTCBuffToDefault();

	m_RTC_Buff[RTC_SECONDS] = ((val->tm_sec / 10) % 10) * 16 + ((val->tm_sec / 1) % 10);
	m_RTC_Buff[RTC_MINUTES] = ((val->tm_min / 10) % 10) * 16 + ((val->tm_min / 1) % 10);
	m_RTC_Buff[RTC_HOURS] = ((val->tm_hour / 10) % 10) * 16 + ((val->tm_hour / 1) % 10);

	m_RTC_Buff[RTC_DAYS] = ((val->tm_mday / 10) % 10) * 16 + ((val->tm_mday / 1) % 10);
	m_RTC_Buff[RTC_MONTHS] = (((val->tm_mon + 1) / 10) % 10) * 16 + (((val->tm_mon + 1) / 1) % 10);
	m_RTC_Buff[RTC_YEARS] = ((val->tm_year / 10) % 10) * 16 + ((val->tm_year / 1) % 10);
	m_RTC_Buff[RTC_WEEKDAYS] = (((val->tm_wday + 1) / 10) % 10) * 16 + (((val->tm_wday + 1) / 1) % 10);

	WriteRTC(0, &m_RTC_Buff[0], sizeof(m_RTC_Buff));
}

void sntp_set_system_time(uint32_t sec)
{
	//char buf[32];
	struct tm current_time_val;
	time_t current_time = (time_t)(sec + g_DeviceSettings.GMT_In_Sec); // UTC+3 hours

#ifdef _MSC_VER
	localtime_s(&current_time_val, &current_time);
#else
	localtime_r(&current_time, &current_time_val);
#endif

	//strftime(buf, sizeof(buf), "%d.%m.%Y %H:%M:%S", &current_time_val);
	//printf("SNTP time: %s\n", buf);

	SetDateTime(&current_time_val);
}


//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
/* supports from 1999 to 2099
***************************************************************/
static uint32_t ToJulianDay(const uint16_t Year, const uint8_t Month, const uint8_t Day, const uint8_t Hour, const uint8_t Minute, const uint8_t Sec)
{
	int32_t m1 = ((int8_t)Month - 14) / 12;
	int32_t y1 = Year + 4800L;

	uint32_t jd = 1461L * (y1 + m1) / 4;

	jd += 367L * (Month - 2 - 12 * m1) / 12;
	jd -= (3L * ((y1 + m1 + 100) / 100)) / 4;
	jd += Day;
	jd -= 2451180;
	jd -= 32075;

	jd *= 86400;
	jd += (uint32_t)Hour * 3600;
	jd += (uint32_t)Minute * 60;
	jd += Sec;

	return(jd);
}

static void FromJulianDay(const uint32_t JDinSec, uint16_t* Year, uint8_t* Month, uint8_t* Day, uint8_t* Hour, uint8_t* Minute, uint8_t* Sec)
{
	uint32_t	JDquot = JDinSec / 86400;
	uint32_t	JDrem = JDinSec % 86400;
	uint32_t	j = JDquot + 32044 + 2451180;
	ldiv_t		g = ldiv(j, 146097);
	uint32_t	c = (g.rem / 36524 + 1) * 3 / 4;
	uint32_t    dc = g.rem - c * 36524;
	ldiv_t		b = ldiv(dc, 1461);

	uint32_t	a = (b.rem / 365 + 1) * 3 / 4;
	uint32_t	da = b.rem - a * 365;

	uint32_t	y = g.quot * 400 + c * 100 + b.quot * 4 + a;
	uint32_t	m = (da * 5 + 308) / 153 - 2;
	uint32_t	d = da - (m + 4) * 153 / 5 + 122;

	ldiv_t		t = ldiv(JDrem, 3600);
	ldiv_t		t1 = ldiv(t.rem, 60);

	*Hour = (uint8_t)t.quot;
	*Minute = (uint8_t)t1.quot;
	*Sec = (uint8_t)t1.rem;

	*Year = y - 4800 + (m + 2) / 12;
	*Month = (m + 2) % 12 + 1;
	*Day = d + 1;
}

bool GetDateTimeAsSec(uint32_t* jd)
{
	bool res = false;
	if (ReadRTC(0, &m_RTC_Buff[0], sizeof(m_RTC_Buff)))
	{
		uint16_t year;
		uint8_t month, day, hour, minute, second;

		year = 2000u + ((m_RTC_Buff[RTC_YEARS] >> 4) & 0x0F) * 10 + ((m_RTC_Buff[RTC_YEARS] >> 0) & 0x0F);
		month = ((m_RTC_Buff[RTC_MONTHS] >> 4) & 0x0F) * 10 + ((m_RTC_Buff[RTC_MONTHS] >> 0) & 0x0F);
		day = ((m_RTC_Buff[RTC_DAYS] >> 4) & 0x0F) * 10 + ((m_RTC_Buff[RTC_DAYS] >> 0) & 0x0F);
		hour = ((m_RTC_Buff[RTC_HOURS] >> 4) & 0x0F) * 10 + ((m_RTC_Buff[RTC_HOURS] >> 0) & 0x0F);
		minute = ((m_RTC_Buff[RTC_MINUTES] >> 4) & 0x0F) * 10 + ((m_RTC_Buff[RTC_MINUTES] >> 0) & 0x0F);
		second = ((m_RTC_Buff[RTC_SECONDS] >> 4) & 0x0F) * 10 + ((m_RTC_Buff[RTC_SECONDS] >> 0) & 0x0F);

		*jd = ToJulianDay(year, month, day, hour, minute, second);
		res = true;
	}

	return(res);
}

bool SetDateTimeAsSec(const uint32_t jd)
{
	uint16_t year;
	uint8_t month, day, hour, minute, second, dow;
	FromJulianDay(jd, &year, &month, &day, &hour, &minute, &second);
	dow = 0;

	GetRTCBuffToDefault();

	m_RTC_Buff[RTC_SECONDS] = ((second / 10) % 10) * 16 + ((second / 1) % 10);
	m_RTC_Buff[RTC_MINUTES] = ((minute / 10) % 10) * 16 + ((minute / 1) % 10);
	m_RTC_Buff[RTC_HOURS] = ((hour / 10) % 10) * 16 + ((hour / 1) % 10);

	m_RTC_Buff[RTC_DAYS] = ((day / 10) % 10) * 16 + ((day / 1) % 10);
	m_RTC_Buff[RTC_MONTHS] = ((month / 10) % 10) * 16 + ((month / 1) % 10);
	m_RTC_Buff[RTC_YEARS] = ((year / 10) % 10) * 16 + ((year / 1) % 10);
	m_RTC_Buff[RTC_WEEKDAYS] = ((dow / 10) % 10) * 16 + ((dow / 1) % 10);

	return(WriteRTC(0, &m_RTC_Buff[0], sizeof(m_RTC_Buff)));
}