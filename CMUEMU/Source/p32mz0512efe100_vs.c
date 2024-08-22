#include <stdint.h>

#define __attribute__(x)
#define __asm__(x)

#ifdef __cplusplus
extern "C" {
#endif

#define CFGCON CFGCON
volatile uint32_t   CFGCON __attribute__((section("sfrs"), address(0xBF800000)));
typedef union {
  struct {
    uint32_t TDOEN:1;
    uint32_t :1;
    uint32_t TROEN:1;
    uint32_t JTAGEN:1;
    uint32_t ECCCON:2;
    uint32_t :1;
    uint32_t IOANCPN:1;
    uint32_t USBSSEN:1;
    uint32_t :2;
    uint32_t PGLOCK:1;
    uint32_t PMDLOCK:1;
    uint32_t IOLOCK:1;
    uint32_t :2;
    uint32_t OCACLK:1;
    uint32_t ICACLK:1;
    uint32_t :6;
    uint32_t CPUPRI:1;
    uint32_t DMAPRI:1;
  };
  struct {
    uint32_t :7;
    uint32_t IOANCPEN:1;
  };
} __CFGCONbits_t;
volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs"), address(0xBF800000)));
#define DEVID DEVID
volatile uint32_t   DEVID __attribute__((section("sfrs"), address(0xBF800020)));
typedef struct {
  uint32_t DEVID:28;
  uint32_t VER:4;
} __DEVIDbits_t;
volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs"), address(0xBF800020)));
#define SYSKEY SYSKEY
volatile uint32_t   SYSKEY __attribute__((section("sfrs"), address(0xBF800030)));
typedef struct {
  uint32_t SYSKEY:32;
} __SYSKEYbits_t;
volatile __SYSKEYbits_t SYSKEYbits __asm__ ("SYSKEY") __attribute__((section("sfrs"), address(0xBF800030)));
#define PMD1 PMD1
volatile uint32_t   PMD1 __attribute__((section("sfrs"), address(0xBF800040)));
typedef struct {
  uint32_t ADCMD:1;
  uint32_t :11;
  uint32_t CVRMD:1;
} __PMD1bits_t;
volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs"), address(0xBF800040)));
volatile uint32_t        PMD1CLR __attribute__((section("sfrs"),address(0xBF800044)));
volatile uint32_t        PMD1SET __attribute__((section("sfrs"),address(0xBF800048)));
volatile uint32_t        PMD1INV __attribute__((section("sfrs"),address(0xBF80004C)));
#define PMD2 PMD2
volatile uint32_t   PMD2 __attribute__((section("sfrs"), address(0xBF800050)));
typedef struct {
  uint32_t CMP1MD:1;
  uint32_t CMP2MD:1;
} __PMD2bits_t;
volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs"), address(0xBF800050)));
volatile uint32_t        PMD2CLR __attribute__((section("sfrs"),address(0xBF800054)));
volatile uint32_t        PMD2SET __attribute__((section("sfrs"),address(0xBF800058)));
volatile uint32_t        PMD2INV __attribute__((section("sfrs"),address(0xBF80005C)));
#define PMD3 PMD3
volatile uint32_t   PMD3 __attribute__((section("sfrs"), address(0xBF800060)));
typedef struct {
  uint32_t IC1MD:1;
  uint32_t IC2MD:1;
  uint32_t IC3MD:1;
  uint32_t IC4MD:1;
  uint32_t IC5MD:1;
  uint32_t IC6MD:1;
  uint32_t IC7MD:1;
  uint32_t IC8MD:1;
  uint32_t IC9MD:1;
  uint32_t :7;
  uint32_t OC1MD:1;
  uint32_t OC2MD:1;
  uint32_t OC3MD:1;
  uint32_t OC4MD:1;
  uint32_t OC5MD:1;
  uint32_t OC6MD:1;
  uint32_t OC7MD:1;
  uint32_t OC8MD:1;
  uint32_t OC9MD:1;
} __PMD3bits_t;
volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs"), address(0xBF800060)));
volatile uint32_t        PMD3CLR __attribute__((section("sfrs"),address(0xBF800064)));
volatile uint32_t        PMD3SET __attribute__((section("sfrs"),address(0xBF800068)));
volatile uint32_t        PMD3INV __attribute__((section("sfrs"),address(0xBF80006C)));
#define PMD4 PMD4
volatile uint32_t   PMD4 __attribute__((section("sfrs"), address(0xBF800070)));
typedef struct {
  uint32_t T1MD:1;
  uint32_t T2MD:1;
  uint32_t T3MD:1;
  uint32_t T4MD:1;
  uint32_t T5MD:1;
  uint32_t T6MD:1;
  uint32_t T7MD:1;
  uint32_t T8MD:1;
  uint32_t T9MD:1;
} __PMD4bits_t;
volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs"), address(0xBF800070)));
volatile uint32_t        PMD4CLR __attribute__((section("sfrs"),address(0xBF800074)));
volatile uint32_t        PMD4SET __attribute__((section("sfrs"),address(0xBF800078)));
volatile uint32_t        PMD4INV __attribute__((section("sfrs"),address(0xBF80007C)));
#define PMD5 PMD5
volatile uint32_t   PMD5 __attribute__((section("sfrs"), address(0xBF800080)));
typedef struct {
  uint32_t U1MD:1;
  uint32_t U2MD:1;
  uint32_t U3MD:1;
  uint32_t U4MD:1;
  uint32_t U5MD:1;
  uint32_t U6MD:1;
  uint32_t :2;
  uint32_t SPI1MD:1;
  uint32_t SPI2MD:1;
  uint32_t SPI3MD:1;
  uint32_t SPI4MD:1;
  uint32_t SPI5MD:1;
  uint32_t SPI6MD:1;
  uint32_t :2;
  uint32_t I2C1MD:1;
  uint32_t I2C2MD:1;
  uint32_t I2C3MD:1;
  uint32_t I2C4MD:1;
  uint32_t I2C5MD:1;
  uint32_t :3;
  uint32_t USBMD:1;
} __PMD5bits_t;
volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs"), address(0xBF800080)));
volatile uint32_t        PMD5CLR __attribute__((section("sfrs"),address(0xBF800084)));
volatile uint32_t        PMD5SET __attribute__((section("sfrs"),address(0xBF800088)));
volatile uint32_t        PMD5INV __attribute__((section("sfrs"),address(0xBF80008C)));
#define PMD6 PMD6
volatile uint32_t   PMD6 __attribute__((section("sfrs"), address(0xBF800090)));
typedef struct {
  uint32_t RTCCMD:1;
  uint32_t :7;
  uint32_t REFO1MD:1;
  uint32_t REFO2MD:1;
  uint32_t REFO3MD:1;
  uint32_t REFO4MD:1;
  uint32_t :4;
  uint32_t PMPMD:1;
  uint32_t EBIMD:1;
  uint32_t :5;
  uint32_t SQI1MD:1;
  uint32_t :4;
  uint32_t ETHMD:1;
} __PMD6bits_t;
volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs"), address(0xBF800090)));
volatile uint32_t        PMD6CLR __attribute__((section("sfrs"),address(0xBF800094)));
volatile uint32_t        PMD6SET __attribute__((section("sfrs"),address(0xBF800098)));
volatile uint32_t        PMD6INV __attribute__((section("sfrs"),address(0xBF80009C)));
#define PMD7 PMD7
volatile uint32_t   PMD7 __attribute__((section("sfrs"), address(0xBF8000A0)));
typedef struct {
  uint32_t :4;
  uint32_t DMAMD:1;
  uint32_t :15;
  uint32_t RNGMD:1;
} __PMD7bits_t;
volatile __PMD7bits_t PMD7bits __asm__ ("PMD7") __attribute__((section("sfrs"), address(0xBF8000A0)));
volatile uint32_t        PMD7CLR __attribute__((section("sfrs"),address(0xBF8000A4)));
volatile uint32_t        PMD7SET __attribute__((section("sfrs"),address(0xBF8000A8)));
volatile uint32_t        PMD7INV __attribute__((section("sfrs"),address(0xBF8000AC)));
#define CFGEBIA CFGEBIA
volatile uint32_t   CFGEBIA __attribute__((section("sfrs"), address(0xBF8000C0)));
typedef struct {
  uint32_t EBIA0EN:1;
  uint32_t EBIA1EN:1;
  uint32_t EBIA2EN:1;
  uint32_t EBIA3EN:1;
  uint32_t EBIA4EN:1;
  uint32_t EBIA5EN:1;
  uint32_t EBIA6EN:1;
  uint32_t EBIA7EN:1;
  uint32_t EBIA8EN:1;
  uint32_t EBIA9EN:1;
  uint32_t EBIA10EN:1;
  uint32_t EBIA11EN:1;
  uint32_t EBIA12EN:1;
  uint32_t EBIA13EN:1;
  uint32_t EBIA14EN:1;
  uint32_t EBIA15EN:1;
  uint32_t EBIA16EN:1;
  uint32_t EBIA17EN:1;
  uint32_t EBIA18EN:1;
  uint32_t EBIA19EN:1;
  uint32_t :11;
  uint32_t EBIPINEN:1;
} __CFGEBIAbits_t;
volatile __CFGEBIAbits_t CFGEBIAbits __asm__ ("CFGEBIA") __attribute__((section("sfrs"), address(0xBF8000C0)));
volatile uint32_t        CFGEBIACLR __attribute__((section("sfrs"),address(0xBF8000C4)));
volatile uint32_t        CFGEBIASET __attribute__((section("sfrs"),address(0xBF8000C8)));
volatile uint32_t        CFGEBIAINV __attribute__((section("sfrs"),address(0xBF8000CC)));
#define CFGEBIC CFGEBIC
volatile uint32_t   CFGEBIC __attribute__((section("sfrs"), address(0xBF8000D0)));
typedef struct {
  uint32_t EBIDEN0:1;
  uint32_t EBIDEN1:1;
  uint32_t :2;
  uint32_t EBICSEN0:1;
  uint32_t :7;
  uint32_t EBIOEEN:1;
  uint32_t EBIWEEN:1;
  uint32_t :3;
  uint32_t EBIRDYLVL:1;
  uint32_t :7;
  uint32_t EBIRDYEN1:1;
  uint32_t EBIRDYEN2:1;
  uint32_t EBIRDYEN3:1;
  uint32_t :1;
  uint32_t EBIRDYINV1:1;
  uint32_t EBIRDYINV2:1;
  uint32_t EBIRDYINV3:1;
} __CFGEBICbits_t;
volatile __CFGEBICbits_t CFGEBICbits __asm__ ("CFGEBIC") __attribute__((section("sfrs"), address(0xBF8000D0)));
volatile uint32_t        CFGEBICCLR __attribute__((section("sfrs"),address(0xBF8000D4)));
volatile uint32_t        CFGEBICSET __attribute__((section("sfrs"),address(0xBF8000D8)));
volatile uint32_t        CFGEBICINV __attribute__((section("sfrs"),address(0xBF8000DC)));
#define CFGPG CFGPG
volatile uint32_t   CFGPG __attribute__((section("sfrs"), address(0xBF8000E0)));
typedef struct {
  uint32_t CPUPG:2;
  uint32_t :2;
  uint32_t DMAPG:2;
  uint32_t :2;
  uint32_t USBPG:2;
  uint32_t :6;
  uint32_t ETHPG:2;
  uint32_t :2;
  uint32_t SQI1PG:2;
  uint32_t FCPG:2;
  uint32_t :6;
  uint32_t ICD1PG:2;
} __CFGPGbits_t;
volatile __CFGPGbits_t CFGPGbits __asm__ ("CFGPG") __attribute__((section("sfrs"), address(0xBF8000E0)));
#define NVMCON NVMCON
volatile uint32_t   NVMCON __attribute__((section("sfrs"), address(0xBF800600)));
typedef union {
  struct {
    uint32_t NVMOP:4;
    uint32_t :2;
    uint32_t BFSWAP:1;
    uint32_t PFSWAP:1;
    uint32_t :4;
    uint32_t LVDERR:1;
    uint32_t WRERR:1;
    uint32_t WREN:1;
    uint32_t WR:1;
  };
  struct {
    uint32_t NVMOP0:1;
    uint32_t NVMOP1:1;
    uint32_t NVMOP2:1;
    uint32_t NVMOP3:1;
    uint32_t :3;
    uint32_t SWAP:1;
  };
  struct {
    uint32_t PROGOP:4;
  };
  struct {
    uint32_t PROGOP0:1;
    uint32_t PROGOP1:1;
    uint32_t PROGOP2:1;
    uint32_t PROGOP3:1;
  };
  struct {
    uint32_t w:32;
  };
} __NVMCONbits_t;
volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs"), address(0xBF800600)));
volatile uint32_t        NVMCONCLR __attribute__((section("sfrs"),address(0xBF800604)));
volatile uint32_t        NVMCONSET __attribute__((section("sfrs"),address(0xBF800608)));
volatile uint32_t        NVMCONINV __attribute__((section("sfrs"),address(0xBF80060C)));
#define NVMKEY NVMKEY
volatile uint32_t   NVMKEY __attribute__((section("sfrs"), address(0xBF800610)));
#define NVMADDR NVMADDR
volatile uint32_t   NVMADDR __attribute__((section("sfrs"), address(0xBF800620)));
volatile uint32_t        NVMADDRCLR __attribute__((section("sfrs"),address(0xBF800624)));
volatile uint32_t        NVMADDRSET __attribute__((section("sfrs"),address(0xBF800628)));
volatile uint32_t        NVMADDRINV __attribute__((section("sfrs"),address(0xBF80062C)));
#define NVMDATA0 NVMDATA0
volatile uint32_t   NVMDATA0 __attribute__((section("sfrs"), address(0xBF800630)));
volatile uint32_t        NVMDATA0CLR __attribute__((section("sfrs"),address(0xBF800634)));
volatile uint32_t        NVMDATA0SET __attribute__((section("sfrs"),address(0xBF800638)));
volatile uint32_t        NVMDATA0INV __attribute__((section("sfrs"),address(0xBF80063C)));
#define NVMDATA1 NVMDATA1
volatile uint32_t   NVMDATA1 __attribute__((section("sfrs"), address(0xBF800640)));
volatile uint32_t        NVMDATA1CLR __attribute__((section("sfrs"),address(0xBF800644)));
volatile uint32_t        NVMDATA1SET __attribute__((section("sfrs"),address(0xBF800648)));
volatile uint32_t        NVMDATA1INV __attribute__((section("sfrs"),address(0xBF80064C)));
#define NVMDATA2 NVMDATA2
volatile uint32_t   NVMDATA2 __attribute__((section("sfrs"), address(0xBF800650)));
volatile uint32_t        NVMDATA2CLR __attribute__((section("sfrs"),address(0xBF800654)));
volatile uint32_t        NVMDATA2SET __attribute__((section("sfrs"),address(0xBF800658)));
volatile uint32_t        NVMDATA2INV __attribute__((section("sfrs"),address(0xBF80065C)));
#define NVMDATA3 NVMDATA3
volatile uint32_t   NVMDATA3 __attribute__((section("sfrs"), address(0xBF800660)));
volatile uint32_t        NVMDATA3CLR __attribute__((section("sfrs"),address(0xBF800664)));
volatile uint32_t        NVMDATA3SET __attribute__((section("sfrs"),address(0xBF800668)));
volatile uint32_t        NVMDATA3INV __attribute__((section("sfrs"),address(0xBF80066C)));
#define NVMSRCADDR NVMSRCADDR
volatile uint32_t   NVMSRCADDR __attribute__((section("sfrs"), address(0xBF800670)));
volatile uint32_t        NVMSRCADDRCLR __attribute__((section("sfrs"),address(0xBF800674)));
volatile uint32_t        NVMSRCADDRSET __attribute__((section("sfrs"),address(0xBF800678)));
volatile uint32_t        NVMSRCADDRINV __attribute__((section("sfrs"),address(0xBF80067C)));
#define NVMPWP NVMPWP
volatile uint32_t   NVMPWP __attribute__((section("sfrs"), address(0xBF800680)));
typedef struct {
  uint32_t PWP:24;
  uint32_t :7;
  uint32_t PWPULOCK:1;
} __NVMPWPbits_t;
volatile __NVMPWPbits_t NVMPWPbits __asm__ ("NVMPWP") __attribute__((section("sfrs"), address(0xBF800680)));
volatile uint32_t        NVMPWPCLR __attribute__((section("sfrs"),address(0xBF800684)));
volatile uint32_t        NVMPWPSET __attribute__((section("sfrs"),address(0xBF800688)));
volatile uint32_t        NVMPWPINV __attribute__((section("sfrs"),address(0xBF80068C)));
#define NVMBWP NVMBWP
volatile uint32_t   NVMBWP __attribute__((section("sfrs"), address(0xBF800690)));
typedef struct {
  uint32_t UBWP0:1;
  uint32_t UBWP1:1;
  uint32_t UBWP2:1;
  uint32_t UBWP3:1;
  uint32_t UBWP4:1;
  uint32_t :2;
  uint32_t UBWPULOCK:1;
  uint32_t LBWP0:1;
  uint32_t LBWP1:1;
  uint32_t LBWP2:1;
  uint32_t LBWP3:1;
  uint32_t LBWP4:1;
  uint32_t :2;
  uint32_t LBWPULOCK:1;
} __NVMBWPbits_t;
volatile __NVMBWPbits_t NVMBWPbits __asm__ ("NVMBWP") __attribute__((section("sfrs"), address(0xBF800690)));
volatile uint32_t        NVMBWPCLR __attribute__((section("sfrs"),address(0xBF800694)));
volatile uint32_t        NVMBWPSET __attribute__((section("sfrs"),address(0xBF800698)));
volatile uint32_t        NVMBWPINV __attribute__((section("sfrs"),address(0xBF80069C)));
#define NVMCON2 NVMCON2
volatile uint32_t   NVMCON2 __attribute__((section("sfrs"), address(0xBF8006A0)));
typedef struct {
  uint32_t :6;
  uint32_t SWAPLOCK:2;
} __NVMCON2bits_t;
volatile __NVMCON2bits_t NVMCON2bits __asm__ ("NVMCON2") __attribute__((section("sfrs"), address(0xBF8006A0)));
volatile uint32_t        NVMCON2CLR __attribute__((section("sfrs"),address(0xBF8006A4)));
volatile uint32_t        NVMCON2SET __attribute__((section("sfrs"),address(0xBF8006A8)));
volatile uint32_t        NVMCON2INV __attribute__((section("sfrs"),address(0xBF8006AC)));
#define WDTCON WDTCON
volatile uint32_t   WDTCON __attribute__((section("sfrs"), address(0xBF800800)));
typedef struct {
  uint32_t WDTWINEN:1;
  uint32_t :7;
  uint32_t RUNDIV:5;
  uint32_t :2;
  uint32_t ON:1;
  uint32_t WDTCLRKEY:16;
} __WDTCONbits_t;
volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON") __attribute__((section("sfrs"), address(0xBF800800)));
volatile uint32_t        WDTCONCLR __attribute__((section("sfrs"),address(0xBF800804)));
volatile uint32_t        WDTCONSET __attribute__((section("sfrs"),address(0xBF800808)));
volatile uint32_t        WDTCONINV __attribute__((section("sfrs"),address(0xBF80080C)));
#define DMTCON DMTCON
volatile uint32_t   DMTCON __attribute__((section("sfrs"), address(0xBF800A00)));
typedef struct {
  uint32_t :15;
  uint32_t ON:1;
} __DMTCONbits_t;
volatile __DMTCONbits_t DMTCONbits __asm__ ("DMTCON") __attribute__((section("sfrs"), address(0xBF800A00)));
#define DMTPRECLR DMTPRECLR
volatile uint32_t   DMTPRECLR __attribute__((section("sfrs"), address(0xBF800A10)));
typedef struct {
  uint32_t :8;
  uint32_t STEP1:8;
} __DMTPRECLRbits_t;
volatile __DMTPRECLRbits_t DMTPRECLRbits __asm__ ("DMTPRECLR") __attribute__((section("sfrs"), address(0xBF800A10)));
#define DMTCLR DMTCLR
volatile uint32_t   DMTCLR __attribute__((section("sfrs"), address(0xBF800A20)));
typedef struct {
  uint32_t STEP2:8;
} __DMTCLRbits_t;
volatile __DMTCLRbits_t DMTCLRbits __asm__ ("DMTCLR") __attribute__((section("sfrs"), address(0xBF800A20)));
#define DMTSTAT DMTSTAT
volatile uint32_t   DMTSTAT __attribute__((section("sfrs"), address(0xBF800A30)));
typedef union {
  struct {
    uint32_t WINOPN:1;
    uint32_t :4;
    uint32_t DMTEVENT:1;
    uint32_t BAD:2;
  };
  struct {
    uint32_t :6;
    uint32_t BAD2:1;
    uint32_t BAD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __DMTSTATbits_t;
volatile __DMTSTATbits_t DMTSTATbits __asm__ ("DMTSTAT") __attribute__((section("sfrs"), address(0xBF800A30)));
#define DMTCNT DMTCNT
volatile uint32_t   DMTCNT __attribute__((section("sfrs"), address(0xBF800A40)));
typedef struct {
  uint32_t COUNTER:32;
} __DMTCNTbits_t;
volatile __DMTCNTbits_t DMTCNTbits __asm__ ("DMTCNT") __attribute__((section("sfrs"), address(0xBF800A40)));
#define DMTPSCNT DMTPSCNT
volatile uint32_t   DMTPSCNT __attribute__((section("sfrs"), address(0xBF800A60)));
typedef struct {
  uint32_t PSCNT:32;
} __DMTPSCNTbits_t;
volatile __DMTPSCNTbits_t DMTPSCNTbits __asm__ ("DMTPSCNT") __attribute__((section("sfrs"), address(0xBF800A60)));
#define DMTPSINTV DMTPSINTV
volatile uint32_t   DMTPSINTV __attribute__((section("sfrs"), address(0xBF800A70)));
typedef struct {
  uint32_t PSINTV:32;
} __DMTPSINTVbits_t;
volatile __DMTPSINTVbits_t DMTPSINTVbits __asm__ ("DMTPSINTV") __attribute__((section("sfrs"), address(0xBF800A70)));
#define RTCCON RTCCON
volatile uint32_t   RTCCON __attribute__((section("sfrs"), address(0xBF800C00)));
typedef union {
  struct {
    uint32_t RTCOE:1;
    uint32_t HALFSEC:1;
    uint32_t RTCSYNC:1;
    uint32_t RTCWREN:1;
    uint32_t :2;
    uint32_t RTCCLKON:1;
    uint32_t RTCOUTSEL:2;
    uint32_t RTCCLKSEL:2;
    uint32_t :2;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t CAL:10;
  };
  struct {
    uint32_t w:32;
  };
} __RTCCONbits_t;
volatile __RTCCONbits_t RTCCONbits __asm__ ("RTCCON") __attribute__((section("sfrs"), address(0xBF800C00)));
volatile uint32_t        RTCCONCLR __attribute__((section("sfrs"),address(0xBF800C04)));
volatile uint32_t        RTCCONSET __attribute__((section("sfrs"),address(0xBF800C08)));
volatile uint32_t        RTCCONINV __attribute__((section("sfrs"),address(0xBF800C0C)));
#define RTCALRM RTCALRM
volatile uint32_t   RTCALRM __attribute__((section("sfrs"), address(0xBF800C10)));
typedef union {
  struct {
    uint32_t ARPT:8;
    uint32_t AMASK:4;
    uint32_t ALRMSYNC:1;
    uint32_t PIV:1;
    uint32_t CHIME:1;
    uint32_t ALRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __RTCALRMbits_t;
volatile __RTCALRMbits_t RTCALRMbits __asm__ ("RTCALRM") __attribute__((section("sfrs"), address(0xBF800C10)));
volatile uint32_t        RTCALRMCLR __attribute__((section("sfrs"),address(0xBF800C14)));
volatile uint32_t        RTCALRMSET __attribute__((section("sfrs"),address(0xBF800C18)));
volatile uint32_t        RTCALRMINV __attribute__((section("sfrs"),address(0xBF800C1C)));
#define RTCTIME RTCTIME
volatile uint32_t   RTCTIME __attribute__((section("sfrs"), address(0xBF800C20)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SEC01:4;
    uint32_t SEC10:4;
    uint32_t MIN01:4;
    uint32_t MIN10:4;
    uint32_t HR01:4;
    uint32_t HR10:4;
  };
  struct {
    uint32_t w:32;
  };
} __RTCTIMEbits_t;
volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME") __attribute__((section("sfrs"), address(0xBF800C20)));
volatile uint32_t        RTCTIMECLR __attribute__((section("sfrs"),address(0xBF800C24)));
volatile uint32_t        RTCTIMESET __attribute__((section("sfrs"),address(0xBF800C28)));
volatile uint32_t        RTCTIMEINV __attribute__((section("sfrs"),address(0xBF800C2C)));
#define RTCDATE RTCDATE
volatile uint32_t   RTCDATE __attribute__((section("sfrs"), address(0xBF800C30)));
typedef union {
  struct {
    uint32_t WDAY01:4;
    uint32_t :4;
    uint32_t DAY01:4;
    uint32_t DAY10:4;
    uint32_t MONTH01:4;
    uint32_t MONTH10:4;
    uint32_t YEAR01:4;
    uint32_t YEAR10:4;
  };
  struct {
    uint32_t w:32;
  };
} __RTCDATEbits_t;
volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE") __attribute__((section("sfrs"), address(0xBF800C30)));
volatile uint32_t        RTCDATECLR __attribute__((section("sfrs"),address(0xBF800C34)));
volatile uint32_t        RTCDATESET __attribute__((section("sfrs"),address(0xBF800C38)));
volatile uint32_t        RTCDATEINV __attribute__((section("sfrs"),address(0xBF800C3C)));
#define ALRMTIME ALRMTIME
volatile uint32_t   ALRMTIME __attribute__((section("sfrs"), address(0xBF800C40)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SEC01:4;
    uint32_t SEC10:4;
    uint32_t MIN01:4;
    uint32_t MIN10:4;
    uint32_t HR01:4;
    uint32_t HR10:4;
  };
  struct {
    uint32_t w:32;
  };
} __ALRMTIMEbits_t;
volatile __ALRMTIMEbits_t ALRMTIMEbits __asm__ ("ALRMTIME") __attribute__((section("sfrs"), address(0xBF800C40)));
volatile uint32_t        ALRMTIMECLR __attribute__((section("sfrs"),address(0xBF800C44)));
volatile uint32_t        ALRMTIMESET __attribute__((section("sfrs"),address(0xBF800C48)));
volatile uint32_t        ALRMTIMEINV __attribute__((section("sfrs"),address(0xBF800C4C)));
#define ALRMDATE ALRMDATE
volatile uint32_t   ALRMDATE __attribute__((section("sfrs"), address(0xBF800C50)));
typedef union {
  struct {
    uint32_t WDAY01:4;
    uint32_t :4;
    uint32_t DAY01:4;
    uint32_t DAY10:4;
    uint32_t MONTH01:4;
    uint32_t MONTH10:4;
  };
  struct {
    uint32_t w:32;
  };
} __ALRMDATEbits_t;
volatile __ALRMDATEbits_t ALRMDATEbits __asm__ ("ALRMDATE") __attribute__((section("sfrs"), address(0xBF800C50)));
volatile uint32_t        ALRMDATECLR __attribute__((section("sfrs"),address(0xBF800C54)));
volatile uint32_t        ALRMDATESET __attribute__((section("sfrs"),address(0xBF800C58)));
volatile uint32_t        ALRMDATEINV __attribute__((section("sfrs"),address(0xBF800C5C)));
#define CVRCON CVRCON
volatile uint32_t   CVRCON __attribute__((section("sfrs"), address(0xBF800E00)));
typedef union {
  struct {
    uint32_t CVR:4;
    uint32_t CVRSS:1;
    uint32_t CVRR:1;
    uint32_t CVROE:1;
    uint32_t :8;
    uint32_t ON:1;
  };
  struct {
    uint32_t CVR0:1;
    uint32_t CVR1:1;
    uint32_t CVR2:1;
    uint32_t CVR3:1;
  };
  struct {
    uint32_t w:32;
  };
} __CVRCONbits_t;
volatile __CVRCONbits_t CVRCONbits __asm__ ("CVRCON") __attribute__((section("sfrs"), address(0xBF800E00)));
volatile uint32_t        CVRCONCLR __attribute__((section("sfrs"),address(0xBF800E04)));
volatile uint32_t        CVRCONSET __attribute__((section("sfrs"),address(0xBF800E08)));
volatile uint32_t        CVRCONINV __attribute__((section("sfrs"),address(0xBF800E0C)));
#define _ICDCON _ICDCON
volatile uint32_t   _ICDCON __attribute__((section("sfrs"), address(0xBF801130)));
typedef struct {
  uint32_t CKSWBKEN:1;
  uint32_t SLPBKEN:1;
  uint32_t WDTBKEN:1;
  uint32_t WDTEN:1;
  uint32_t RSTBUG:1;
  uint32_t DMTBKEN:1;
  uint32_t DMTEN:1;
  uint32_t :7;
  uint32_t FRZ:1;
} ___ICDCONbits_t;
volatile ___ICDCONbits_t _ICDCONbits __asm__ ("_ICDCON") __attribute__((section("sfrs"), address(0xBF801130)));
#define _ICDSTAT _ICDSTAT
volatile uint32_t   _ICDSTAT __attribute__((section("sfrs"), address(0xBF801140)));
typedef struct {
  uint32_t CKSWBF:1;
  uint32_t SLPBF:1;
  uint32_t WDTBF:1;
  uint32_t DMTBF:1;
} ___ICDSTATbits_t;
volatile ___ICDSTATbits_t _ICDSTATbits __asm__ ("_ICDSTAT") __attribute__((section("sfrs"), address(0xBF801140)));
#define OSCCON OSCCON
volatile uint32_t   OSCCON __attribute__((section("sfrs"), address(0xBF801200)));
typedef struct {
  uint32_t OSWEN:1;
  uint32_t SOSCEN:1;
  uint32_t :1;
  uint32_t CF:1;
  uint32_t SLPEN:1;
  uint32_t :2;
  uint32_t CLKLOCK:1;
  uint32_t NOSC:3;
  uint32_t :1;
  uint32_t COSC:3;
  uint32_t :6;
  uint32_t SLP2SPD:1;
  uint32_t :1;
  uint32_t DRMEN:1;
  uint32_t FRCDIV:3;
} __OSCCONbits_t;
volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs"), address(0xBF801200)));
volatile uint32_t        OSCCONCLR __attribute__((section("sfrs"),address(0xBF801204)));
volatile uint32_t        OSCCONSET __attribute__((section("sfrs"),address(0xBF801208)));
volatile uint32_t        OSCCONINV __attribute__((section("sfrs"),address(0xBF80120C)));
#define OSCTUN OSCTUN
volatile uint32_t   OSCTUN __attribute__((section("sfrs"), address(0xBF801210)));
typedef struct {
  uint32_t TUN:6;
} __OSCTUNbits_t;
volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs"), address(0xBF801210)));
volatile uint32_t        OSCTUNCLR __attribute__((section("sfrs"),address(0xBF801214)));
volatile uint32_t        OSCTUNSET __attribute__((section("sfrs"),address(0xBF801218)));
volatile uint32_t        OSCTUNINV __attribute__((section("sfrs"),address(0xBF80121C)));
#define SPLLCON SPLLCON
volatile uint32_t   SPLLCON __attribute__((section("sfrs"), address(0xBF801220)));
typedef struct {
  uint32_t PLLRANGE:3;
  uint32_t :4;
  uint32_t PLLICLK:1;
  uint32_t PLLIDIV:3;
  uint32_t :5;
  uint32_t PLLMULT:7;
  uint32_t :1;
  uint32_t PLLODIV:3;
} __SPLLCONbits_t;
volatile __SPLLCONbits_t SPLLCONbits __asm__ ("SPLLCON") __attribute__((section("sfrs"), address(0xBF801220)));
volatile uint32_t        SPLLCONCLR __attribute__((section("sfrs"),address(0xBF801224)));
volatile uint32_t        SPLLCONSET __attribute__((section("sfrs"),address(0xBF801228)));
volatile uint32_t        SPLLCONINV __attribute__((section("sfrs"),address(0xBF80122C)));
#define RCON RCON
volatile uint32_t   RCON __attribute__((section("sfrs"), address(0xBF801240)));
typedef struct {
  uint32_t POR:1;
  uint32_t BOR:1;
  uint32_t IDLE:1;
  uint32_t SLEEP:1;
  uint32_t WDTO:1;
  uint32_t DMTO:1;
  uint32_t SWR:1;
  uint32_t EXTR:1;
  uint32_t :1;
  uint32_t CMR:1;
  uint32_t :16;
  uint32_t BCFGFAIL:1;
  uint32_t BCFGERR:1;
} __RCONbits_t;
volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs"), address(0xBF801240)));
volatile uint32_t        RCONCLR __attribute__((section("sfrs"),address(0xBF801244)));
volatile uint32_t        RCONSET __attribute__((section("sfrs"),address(0xBF801248)));
volatile uint32_t        RCONINV __attribute__((section("sfrs"),address(0xBF80124C)));
#define RSWRST RSWRST
volatile uint32_t   RSWRST __attribute__((section("sfrs"), address(0xBF801250)));
typedef struct {
  uint32_t SWRST:1;
} __RSWRSTbits_t;
volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs"), address(0xBF801250)));
volatile uint32_t        RSWRSTCLR __attribute__((section("sfrs"),address(0xBF801254)));
volatile uint32_t        RSWRSTSET __attribute__((section("sfrs"),address(0xBF801258)));
volatile uint32_t        RSWRSTINV __attribute__((section("sfrs"),address(0xBF80125C)));
#define RNMICON RNMICON
volatile uint32_t   RNMICON __attribute__((section("sfrs"), address(0xBF801260)));
typedef union {
  struct {
    uint32_t NMICNT:16;
    uint32_t WDTS:1;
    uint32_t CF:1;
    uint32_t :1;
    uint32_t GNMI:1;
    uint32_t :3;
    uint32_t SWNMI:1;
    uint32_t WDTO:1;
    uint32_t DMTO:1;
  };
  struct {
    uint32_t :24;
    uint32_t WDTR:1;
  };
} __RNMICONbits_t;
volatile __RNMICONbits_t RNMICONbits __asm__ ("RNMICON") __attribute__((section("sfrs"), address(0xBF801260)));
volatile uint32_t        RNMICONCLR __attribute__((section("sfrs"),address(0xBF801264)));
volatile uint32_t        RNMICONSET __attribute__((section("sfrs"),address(0xBF801268)));
volatile uint32_t        RNMICONINV __attribute__((section("sfrs"),address(0xBF80126C)));
#define PWRCON PWRCON
volatile uint32_t   PWRCON __attribute__((section("sfrs"), address(0xBF801270)));
typedef struct {
  uint32_t VREGS:1;
} __PWRCONbits_t;
volatile __PWRCONbits_t PWRCONbits __asm__ ("PWRCON") __attribute__((section("sfrs"), address(0xBF801270)));
volatile uint32_t        PWRCONCLR __attribute__((section("sfrs"),address(0xBF801274)));
volatile uint32_t        PWRCONSET __attribute__((section("sfrs"),address(0xBF801278)));
volatile uint32_t        PWRCONINV __attribute__((section("sfrs"),address(0xBF80127C)));
#define REFO1CON REFO1CON
volatile uint32_t   REFO1CON __attribute__((section("sfrs"), address(0xBF801280)));
typedef struct {
  uint32_t ROSEL:4;
  uint32_t :4;
  uint32_t ACTIVE:1;
  uint32_t DIVSWEN:1;
  uint32_t :1;
  uint32_t RSLP:1;
  uint32_t OE:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t RODIV:15;
} __REFO1CONbits_t;
volatile __REFO1CONbits_t REFO1CONbits __asm__ ("REFO1CON") __attribute__((section("sfrs"), address(0xBF801280)));
volatile uint32_t        REFO1CONCLR __attribute__((section("sfrs"),address(0xBF801284)));
volatile uint32_t        REFO1CONSET __attribute__((section("sfrs"),address(0xBF801288)));
volatile uint32_t        REFO1CONINV __attribute__((section("sfrs"),address(0xBF80128C)));
#define REFO1TRIM REFO1TRIM
volatile uint32_t   REFO1TRIM __attribute__((section("sfrs"), address(0xBF801290)));
typedef struct {
  uint32_t :23;
  uint32_t ROTRIM:9;
} __REFO1TRIMbits_t;
volatile __REFO1TRIMbits_t REFO1TRIMbits __asm__ ("REFO1TRIM") __attribute__((section("sfrs"), address(0xBF801290)));
volatile uint32_t        REFO1TRIMCLR __attribute__((section("sfrs"),address(0xBF801294)));
volatile uint32_t        REFO1TRIMSET __attribute__((section("sfrs"),address(0xBF801298)));
volatile uint32_t        REFO1TRIMINV __attribute__((section("sfrs"),address(0xBF80129C)));
#define REFO2CON REFO2CON
volatile uint32_t   REFO2CON __attribute__((section("sfrs"), address(0xBF8012A0)));
typedef struct {
  uint32_t ROSEL:4;
  uint32_t :4;
  uint32_t ACTIVE:1;
  uint32_t DIVSWEN:1;
  uint32_t :1;
  uint32_t RSLP:1;
  uint32_t OE:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t RODIV:15;
} __REFO2CONbits_t;
volatile __REFO2CONbits_t REFO2CONbits __asm__ ("REFO2CON") __attribute__((section("sfrs"), address(0xBF8012A0)));
volatile uint32_t        REFO2CONCLR __attribute__((section("sfrs"),address(0xBF8012A4)));
volatile uint32_t        REFO2CONSET __attribute__((section("sfrs"),address(0xBF8012A8)));
volatile uint32_t        REFO2CONINV __attribute__((section("sfrs"),address(0xBF8012AC)));
#define REFO2TRIM REFO2TRIM
volatile uint32_t   REFO2TRIM __attribute__((section("sfrs"), address(0xBF8012B0)));
typedef struct {
  uint32_t :23;
  uint32_t ROTRIM:9;
} __REFO2TRIMbits_t;
volatile __REFO2TRIMbits_t REFO2TRIMbits __asm__ ("REFO2TRIM") __attribute__((section("sfrs"), address(0xBF8012B0)));
volatile uint32_t        REFO2TRIMCLR __attribute__((section("sfrs"),address(0xBF8012B4)));
volatile uint32_t        REFO2TRIMSET __attribute__((section("sfrs"),address(0xBF8012B8)));
volatile uint32_t        REFO2TRIMINV __attribute__((section("sfrs"),address(0xBF8012BC)));
#define REFO3CON REFO3CON
volatile uint32_t   REFO3CON __attribute__((section("sfrs"), address(0xBF8012C0)));
typedef struct {
  uint32_t ROSEL:4;
  uint32_t :4;
  uint32_t ACTIVE:1;
  uint32_t DIVSWEN:1;
  uint32_t :1;
  uint32_t RSLP:1;
  uint32_t OE:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t RODIV:15;
} __REFO3CONbits_t;
volatile __REFO3CONbits_t REFO3CONbits __asm__ ("REFO3CON") __attribute__((section("sfrs"), address(0xBF8012C0)));
volatile uint32_t        REFO3CONCLR __attribute__((section("sfrs"),address(0xBF8012C4)));
volatile uint32_t        REFO3CONSET __attribute__((section("sfrs"),address(0xBF8012C8)));
volatile uint32_t        REFO3CONINV __attribute__((section("sfrs"),address(0xBF8012CC)));
#define REFO3TRIM REFO3TRIM
volatile uint32_t   REFO3TRIM __attribute__((section("sfrs"), address(0xBF8012D0)));
typedef struct {
  uint32_t :23;
  uint32_t ROTRIM:9;
} __REFO3TRIMbits_t;
volatile __REFO3TRIMbits_t REFO3TRIMbits __asm__ ("REFO3TRIM") __attribute__((section("sfrs"), address(0xBF8012D0)));
volatile uint32_t        REFO3TRIMCLR __attribute__((section("sfrs"),address(0xBF8012D4)));
volatile uint32_t        REFO3TRIMSET __attribute__((section("sfrs"),address(0xBF8012D8)));
volatile uint32_t        REFO3TRIMINV __attribute__((section("sfrs"),address(0xBF8012DC)));
#define REFO4CON REFO4CON
volatile uint32_t   REFO4CON __attribute__((section("sfrs"), address(0xBF8012E0)));
typedef struct {
  uint32_t ROSEL:4;
  uint32_t :4;
  uint32_t ACTIVE:1;
  uint32_t DIVSWEN:1;
  uint32_t :1;
  uint32_t RSLP:1;
  uint32_t OE:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t RODIV:15;
} __REFO4CONbits_t;
volatile __REFO4CONbits_t REFO4CONbits __asm__ ("REFO4CON") __attribute__((section("sfrs"), address(0xBF8012E0)));
volatile uint32_t        REFO4CONCLR __attribute__((section("sfrs"),address(0xBF8012E4)));
volatile uint32_t        REFO4CONSET __attribute__((section("sfrs"),address(0xBF8012E8)));
volatile uint32_t        REFO4CONINV __attribute__((section("sfrs"),address(0xBF8012EC)));
#define REFO4TRIM REFO4TRIM
volatile uint32_t   REFO4TRIM __attribute__((section("sfrs"), address(0xBF8012F0)));
typedef struct {
  uint32_t :23;
  uint32_t ROTRIM:9;
} __REFO4TRIMbits_t;
volatile __REFO4TRIMbits_t REFO4TRIMbits __asm__ ("REFO4TRIM") __attribute__((section("sfrs"), address(0xBF8012F0)));
volatile uint32_t        REFO4TRIMCLR __attribute__((section("sfrs"),address(0xBF8012F4)));
volatile uint32_t        REFO4TRIMSET __attribute__((section("sfrs"),address(0xBF8012F8)));
volatile uint32_t        REFO4TRIMINV __attribute__((section("sfrs"),address(0xBF8012FC)));
#define PB1DIV PB1DIV
volatile uint32_t   PB1DIV __attribute__((section("sfrs"), address(0xBF801300)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
} __PB1DIVbits_t;
volatile __PB1DIVbits_t PB1DIVbits __asm__ ("PB1DIV") __attribute__((section("sfrs"), address(0xBF801300)));
volatile uint32_t        PB1DIVCLR __attribute__((section("sfrs"),address(0xBF801304)));
volatile uint32_t        PB1DIVSET __attribute__((section("sfrs"),address(0xBF801308)));
volatile uint32_t        PB1DIVINV __attribute__((section("sfrs"),address(0xBF80130C)));
#define PB2DIV PB2DIV
volatile uint32_t   PB2DIV __attribute__((section("sfrs"), address(0xBF801310)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
  uint32_t :3;
  uint32_t ON:1;
} __PB2DIVbits_t;
volatile __PB2DIVbits_t PB2DIVbits __asm__ ("PB2DIV") __attribute__((section("sfrs"), address(0xBF801310)));
volatile uint32_t        PB2DIVCLR __attribute__((section("sfrs"),address(0xBF801314)));
volatile uint32_t        PB2DIVSET __attribute__((section("sfrs"),address(0xBF801318)));
volatile uint32_t        PB2DIVINV __attribute__((section("sfrs"),address(0xBF80131C)));
#define PB3DIV PB3DIV
volatile uint32_t   PB3DIV __attribute__((section("sfrs"), address(0xBF801320)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
  uint32_t :3;
  uint32_t ON:1;
} __PB3DIVbits_t;
volatile __PB3DIVbits_t PB3DIVbits __asm__ ("PB3DIV") __attribute__((section("sfrs"), address(0xBF801320)));
volatile uint32_t        PB3DIVCLR __attribute__((section("sfrs"),address(0xBF801324)));
volatile uint32_t        PB3DIVSET __attribute__((section("sfrs"),address(0xBF801328)));
volatile uint32_t        PB3DIVINV __attribute__((section("sfrs"),address(0xBF80132C)));
#define PB4DIV PB4DIV
volatile uint32_t   PB4DIV __attribute__((section("sfrs"), address(0xBF801330)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
  uint32_t :3;
  uint32_t ON:1;
} __PB4DIVbits_t;
volatile __PB4DIVbits_t PB4DIVbits __asm__ ("PB4DIV") __attribute__((section("sfrs"), address(0xBF801330)));
volatile uint32_t        PB4DIVCLR __attribute__((section("sfrs"),address(0xBF801334)));
volatile uint32_t        PB4DIVSET __attribute__((section("sfrs"),address(0xBF801338)));
volatile uint32_t        PB4DIVINV __attribute__((section("sfrs"),address(0xBF80133C)));
#define PB5DIV PB5DIV
volatile uint32_t   PB5DIV __attribute__((section("sfrs"), address(0xBF801340)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
  uint32_t :3;
  uint32_t ON:1;
} __PB5DIVbits_t;
volatile __PB5DIVbits_t PB5DIVbits __asm__ ("PB5DIV") __attribute__((section("sfrs"), address(0xBF801340)));
volatile uint32_t        PB5DIVCLR __attribute__((section("sfrs"),address(0xBF801344)));
volatile uint32_t        PB5DIVSET __attribute__((section("sfrs"),address(0xBF801348)));
volatile uint32_t        PB5DIVINV __attribute__((section("sfrs"),address(0xBF80134C)));
#define PB7DIV PB7DIV
volatile uint32_t   PB7DIV __attribute__((section("sfrs"), address(0xBF801360)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
  uint32_t :3;
  uint32_t ON:1;
} __PB7DIVbits_t;
volatile __PB7DIVbits_t PB7DIVbits __asm__ ("PB7DIV") __attribute__((section("sfrs"), address(0xBF801360)));
volatile uint32_t        PB7DIVCLR __attribute__((section("sfrs"),address(0xBF801364)));
volatile uint32_t        PB7DIVSET __attribute__((section("sfrs"),address(0xBF801368)));
volatile uint32_t        PB7DIVINV __attribute__((section("sfrs"),address(0xBF80136C)));
#define PB8DIV PB8DIV
volatile uint32_t   PB8DIV __attribute__((section("sfrs"), address(0xBF801370)));
typedef struct {
  uint32_t PBDIV:7;
  uint32_t :4;
  uint32_t PBDIVRDY:1;
  uint32_t :3;
  uint32_t ON:1;
} __PB8DIVbits_t;
volatile __PB8DIVbits_t PB8DIVbits __asm__ ("PB8DIV") __attribute__((section("sfrs"), address(0xBF801370)));
volatile uint32_t        PB8DIVCLR __attribute__((section("sfrs"),address(0xBF801374)));
volatile uint32_t        PB8DIVSET __attribute__((section("sfrs"),address(0xBF801378)));
volatile uint32_t        PB8DIVINV __attribute__((section("sfrs"),address(0xBF80137C)));
#define SLEWCON SLEWCON
volatile uint32_t   SLEWCON __attribute__((section("sfrs"), address(0xBF8013C0)));
typedef struct {
  uint32_t BUSY:1;
  uint32_t DNEN:1;
  uint32_t UPEN:1;
  uint32_t :5;
  uint32_t SLWDIV:3;
  uint32_t :5;
  uint32_t SYSDIV:4;
} __SLEWCONbits_t;
volatile __SLEWCONbits_t SLEWCONbits __asm__ ("SLEWCON") __attribute__((section("sfrs"), address(0xBF8013C0)));
volatile uint32_t        SLEWCONCLR __attribute__((section("sfrs"),address(0xBF8013C4)));
volatile uint32_t        SLEWCONSET __attribute__((section("sfrs"),address(0xBF8013C8)));
volatile uint32_t        SLEWCONINV __attribute__((section("sfrs"),address(0xBF8013CC)));
#define CLKSTAT CLKSTAT
volatile uint32_t   CLKSTAT __attribute__((section("sfrs"), address(0xBF8013D0)));
typedef union {
  struct {
    uint32_t FRCRDY:1;
    uint32_t SPDIVRDY:1;
    uint32_t POSCRDY:1;
    uint32_t :1;
    uint32_t SOSCRDY:1;
    uint32_t LPRCRDY:1;
  };
  struct {
    uint32_t :1;
    uint32_t DIVSPLLRDY:1;
  };
} __CLKSTATbits_t;
volatile __CLKSTATbits_t CLKSTATbits __asm__ ("CLKSTAT") __attribute__((section("sfrs"), address(0xBF8013D0)));
volatile uint32_t        CLKSTATCLR __attribute__((section("sfrs"),address(0xBF8013D4)));
volatile uint32_t        CLKSTATSET __attribute__((section("sfrs"),address(0xBF8013D8)));
volatile uint32_t        CLKSTATINV __attribute__((section("sfrs"),address(0xBF8013DC)));
#define INT1R INT1R
volatile uint32_t   INT1R __attribute__((section("sfrs"), address(0xBF801404)));
typedef struct {
  uint32_t INT1R:4;
} __INT1Rbits_t;
volatile __INT1Rbits_t INT1Rbits __asm__ ("INT1R") __attribute__((section("sfrs"), address(0xBF801404)));
#define INT2R INT2R
volatile uint32_t   INT2R __attribute__((section("sfrs"), address(0xBF801408)));
typedef struct {
  uint32_t INT2R:4;
} __INT2Rbits_t;
volatile __INT2Rbits_t INT2Rbits __asm__ ("INT2R") __attribute__((section("sfrs"), address(0xBF801408)));
#define INT3R INT3R
volatile uint32_t   INT3R __attribute__((section("sfrs"), address(0xBF80140C)));
typedef struct {
  uint32_t INT3R:4;
} __INT3Rbits_t;
volatile __INT3Rbits_t INT3Rbits __asm__ ("INT3R") __attribute__((section("sfrs"), address(0xBF80140C)));
#define INT4R INT4R
volatile uint32_t   INT4R __attribute__((section("sfrs"), address(0xBF801410)));
typedef struct {
  uint32_t INT4R:4;
} __INT4Rbits_t;
volatile __INT4Rbits_t INT4Rbits __asm__ ("INT4R") __attribute__((section("sfrs"), address(0xBF801410)));
#define T2CKR T2CKR
volatile uint32_t   T2CKR __attribute__((section("sfrs"), address(0xBF801418)));
typedef struct {
  uint32_t T2CKR:4;
} __T2CKRbits_t;
volatile __T2CKRbits_t T2CKRbits __asm__ ("T2CKR") __attribute__((section("sfrs"), address(0xBF801418)));
#define T3CKR T3CKR
volatile uint32_t   T3CKR __attribute__((section("sfrs"), address(0xBF80141C)));
typedef struct {
  uint32_t T3CKR:4;
} __T3CKRbits_t;
volatile __T3CKRbits_t T3CKRbits __asm__ ("T3CKR") __attribute__((section("sfrs"), address(0xBF80141C)));
#define T4CKR T4CKR
volatile uint32_t   T4CKR __attribute__((section("sfrs"), address(0xBF801420)));
typedef struct {
  uint32_t T4CKR:4;
} __T4CKRbits_t;
volatile __T4CKRbits_t T4CKRbits __asm__ ("T4CKR") __attribute__((section("sfrs"), address(0xBF801420)));
#define T5CKR T5CKR
volatile uint32_t   T5CKR __attribute__((section("sfrs"), address(0xBF801424)));
typedef struct {
  uint32_t T5CKR:4;
} __T5CKRbits_t;
volatile __T5CKRbits_t T5CKRbits __asm__ ("T5CKR") __attribute__((section("sfrs"), address(0xBF801424)));
#define T6CKR T6CKR
volatile uint32_t   T6CKR __attribute__((section("sfrs"), address(0xBF801428)));
typedef struct {
  uint32_t T6CKR:4;
} __T6CKRbits_t;
volatile __T6CKRbits_t T6CKRbits __asm__ ("T6CKR") __attribute__((section("sfrs"), address(0xBF801428)));
#define T7CKR T7CKR
volatile uint32_t   T7CKR __attribute__((section("sfrs"), address(0xBF80142C)));
typedef struct {
  uint32_t T7CKR:4;
} __T7CKRbits_t;
volatile __T7CKRbits_t T7CKRbits __asm__ ("T7CKR") __attribute__((section("sfrs"), address(0xBF80142C)));
#define T8CKR T8CKR
volatile uint32_t   T8CKR __attribute__((section("sfrs"), address(0xBF801430)));
typedef struct {
  uint32_t T8CKR:4;
} __T8CKRbits_t;
volatile __T8CKRbits_t T8CKRbits __asm__ ("T8CKR") __attribute__((section("sfrs"), address(0xBF801430)));
#define T9CKR T9CKR
volatile uint32_t   T9CKR __attribute__((section("sfrs"), address(0xBF801434)));
typedef struct {
  uint32_t T9CKR:4;
} __T9CKRbits_t;
volatile __T9CKRbits_t T9CKRbits __asm__ ("T9CKR") __attribute__((section("sfrs"), address(0xBF801434)));
#define IC1R IC1R
volatile uint32_t   IC1R __attribute__((section("sfrs"), address(0xBF801438)));
typedef struct {
  uint32_t IC1R:4;
} __IC1Rbits_t;
volatile __IC1Rbits_t IC1Rbits __asm__ ("IC1R") __attribute__((section("sfrs"), address(0xBF801438)));
#define IC2R IC2R
volatile uint32_t   IC2R __attribute__((section("sfrs"), address(0xBF80143C)));
typedef struct {
  uint32_t IC2R:4;
} __IC2Rbits_t;
volatile __IC2Rbits_t IC2Rbits __asm__ ("IC2R") __attribute__((section("sfrs"), address(0xBF80143C)));
#define IC3R IC3R
volatile uint32_t   IC3R __attribute__((section("sfrs"), address(0xBF801440)));
typedef struct {
  uint32_t IC3R:4;
} __IC3Rbits_t;
volatile __IC3Rbits_t IC3Rbits __asm__ ("IC3R") __attribute__((section("sfrs"), address(0xBF801440)));
#define IC4R IC4R
volatile uint32_t   IC4R __attribute__((section("sfrs"), address(0xBF801444)));
typedef struct {
  uint32_t IC4R:4;
} __IC4Rbits_t;
volatile __IC4Rbits_t IC4Rbits __asm__ ("IC4R") __attribute__((section("sfrs"), address(0xBF801444)));
#define IC5R IC5R
volatile uint32_t   IC5R __attribute__((section("sfrs"), address(0xBF801448)));
typedef struct {
  uint32_t IC5R:4;
} __IC5Rbits_t;
volatile __IC5Rbits_t IC5Rbits __asm__ ("IC5R") __attribute__((section("sfrs"), address(0xBF801448)));
#define IC6R IC6R
volatile uint32_t   IC6R __attribute__((section("sfrs"), address(0xBF80144C)));
typedef struct {
  uint32_t IC6R:4;
} __IC6Rbits_t;
volatile __IC6Rbits_t IC6Rbits __asm__ ("IC6R") __attribute__((section("sfrs"), address(0xBF80144C)));
#define IC7R IC7R
volatile uint32_t   IC7R __attribute__((section("sfrs"), address(0xBF801450)));
typedef struct {
  uint32_t IC7R:4;
} __IC7Rbits_t;
volatile __IC7Rbits_t IC7Rbits __asm__ ("IC7R") __attribute__((section("sfrs"), address(0xBF801450)));
#define IC8R IC8R
volatile uint32_t   IC8R __attribute__((section("sfrs"), address(0xBF801454)));
typedef struct {
  uint32_t IC8R:4;
} __IC8Rbits_t;
volatile __IC8Rbits_t IC8Rbits __asm__ ("IC8R") __attribute__((section("sfrs"), address(0xBF801454)));
#define IC9R IC9R
volatile uint32_t   IC9R __attribute__((section("sfrs"), address(0xBF801458)));
typedef struct {
  uint32_t IC9R:4;
} __IC9Rbits_t;
volatile __IC9Rbits_t IC9Rbits __asm__ ("IC9R") __attribute__((section("sfrs"), address(0xBF801458)));
#define OCFAR OCFAR
volatile uint32_t   OCFAR __attribute__((section("sfrs"), address(0xBF801460)));
typedef struct {
  uint32_t OCFAR:4;
} __OCFARbits_t;
volatile __OCFARbits_t OCFARbits __asm__ ("OCFAR") __attribute__((section("sfrs"), address(0xBF801460)));
#define U1RXR U1RXR
volatile uint32_t   U1RXR __attribute__((section("sfrs"), address(0xBF801468)));
typedef struct {
  uint32_t U1RXR:4;
} __U1RXRbits_t;
volatile __U1RXRbits_t U1RXRbits __asm__ ("U1RXR") __attribute__((section("sfrs"), address(0xBF801468)));
#define U1CTSR U1CTSR
volatile uint32_t   U1CTSR __attribute__((section("sfrs"), address(0xBF80146C)));
typedef struct {
  uint32_t U1CTSR:4;
} __U1CTSRbits_t;
volatile __U1CTSRbits_t U1CTSRbits __asm__ ("U1CTSR") __attribute__((section("sfrs"), address(0xBF80146C)));
#define U2RXR U2RXR
volatile uint32_t   U2RXR __attribute__((section("sfrs"), address(0xBF801470)));
typedef struct {
  uint32_t U2RXR:4;
} __U2RXRbits_t;
volatile __U2RXRbits_t U2RXRbits __asm__ ("U2RXR") __attribute__((section("sfrs"), address(0xBF801470)));
#define U2CTSR U2CTSR
volatile uint32_t   U2CTSR __attribute__((section("sfrs"), address(0xBF801474)));
typedef struct {
  uint32_t U2CTSR:4;
} __U2CTSRbits_t;
volatile __U2CTSRbits_t U2CTSRbits __asm__ ("U2CTSR") __attribute__((section("sfrs"), address(0xBF801474)));
#define U3RXR U3RXR
volatile uint32_t   U3RXR __attribute__((section("sfrs"), address(0xBF801478)));
typedef struct {
  uint32_t U3RXR:4;
} __U3RXRbits_t;
volatile __U3RXRbits_t U3RXRbits __asm__ ("U3RXR") __attribute__((section("sfrs"), address(0xBF801478)));
#define U3CTSR U3CTSR
volatile uint32_t   U3CTSR __attribute__((section("sfrs"), address(0xBF80147C)));
typedef struct {
  uint32_t U3CTSR:4;
} __U3CTSRbits_t;
volatile __U3CTSRbits_t U3CTSRbits __asm__ ("U3CTSR") __attribute__((section("sfrs"), address(0xBF80147C)));
#define U4RXR U4RXR
volatile uint32_t   U4RXR __attribute__((section("sfrs"), address(0xBF801480)));
typedef struct {
  uint32_t U4RXR:4;
} __U4RXRbits_t;
volatile __U4RXRbits_t U4RXRbits __asm__ ("U4RXR") __attribute__((section("sfrs"), address(0xBF801480)));
#define U4CTSR U4CTSR
volatile uint32_t   U4CTSR __attribute__((section("sfrs"), address(0xBF801484)));
typedef struct {
  uint32_t U4CTSR:4;
} __U4CTSRbits_t;
volatile __U4CTSRbits_t U4CTSRbits __asm__ ("U4CTSR") __attribute__((section("sfrs"), address(0xBF801484)));
#define U5RXR U5RXR
volatile uint32_t   U5RXR __attribute__((section("sfrs"), address(0xBF801488)));
typedef struct {
  uint32_t U5RXR:4;
} __U5RXRbits_t;
volatile __U5RXRbits_t U5RXRbits __asm__ ("U5RXR") __attribute__((section("sfrs"), address(0xBF801488)));
#define U5CTSR U5CTSR
volatile uint32_t   U5CTSR __attribute__((section("sfrs"), address(0xBF80148C)));
typedef struct {
  uint32_t U5CTSR:4;
} __U5CTSRbits_t;
volatile __U5CTSRbits_t U5CTSRbits __asm__ ("U5CTSR") __attribute__((section("sfrs"), address(0xBF80148C)));
#define U6RXR U6RXR
volatile uint32_t   U6RXR __attribute__((section("sfrs"), address(0xBF801490)));
typedef struct {
  uint32_t U6RXR:4;
} __U6RXRbits_t;
volatile __U6RXRbits_t U6RXRbits __asm__ ("U6RXR") __attribute__((section("sfrs"), address(0xBF801490)));
#define U6CTSR U6CTSR
volatile uint32_t   U6CTSR __attribute__((section("sfrs"), address(0xBF801494)));
typedef struct {
  uint32_t U6CTSR:4;
} __U6CTSRbits_t;
volatile __U6CTSRbits_t U6CTSRbits __asm__ ("U6CTSR") __attribute__((section("sfrs"), address(0xBF801494)));
#define SDI1R SDI1R
volatile uint32_t   SDI1R __attribute__((section("sfrs"), address(0xBF80149C)));
typedef struct {
  uint32_t SDI1R:4;
} __SDI1Rbits_t;
volatile __SDI1Rbits_t SDI1Rbits __asm__ ("SDI1R") __attribute__((section("sfrs"), address(0xBF80149C)));
#define SS1R SS1R
volatile uint32_t   SS1R __attribute__((section("sfrs"), address(0xBF8014A0)));
typedef struct {
  uint32_t SS1R:4;
} __SS1Rbits_t;
volatile __SS1Rbits_t SS1Rbits __asm__ ("SS1R") __attribute__((section("sfrs"), address(0xBF8014A0)));
#define SDI2R SDI2R
volatile uint32_t   SDI2R __attribute__((section("sfrs"), address(0xBF8014A8)));
typedef struct {
  uint32_t SDI2R:4;
} __SDI2Rbits_t;
volatile __SDI2Rbits_t SDI2Rbits __asm__ ("SDI2R") __attribute__((section("sfrs"), address(0xBF8014A8)));
#define SS2R SS2R
volatile uint32_t   SS2R __attribute__((section("sfrs"), address(0xBF8014AC)));
typedef struct {
  uint32_t SS2R:4;
} __SS2Rbits_t;
volatile __SS2Rbits_t SS2Rbits __asm__ ("SS2R") __attribute__((section("sfrs"), address(0xBF8014AC)));
#define SDI3R SDI3R
volatile uint32_t   SDI3R __attribute__((section("sfrs"), address(0xBF8014B4)));
typedef struct {
  uint32_t SDI3R:4;
} __SDI3Rbits_t;
volatile __SDI3Rbits_t SDI3Rbits __asm__ ("SDI3R") __attribute__((section("sfrs"), address(0xBF8014B4)));
#define SS3R SS3R
volatile uint32_t   SS3R __attribute__((section("sfrs"), address(0xBF8014B8)));
typedef struct {
  uint32_t SS3R:4;
} __SS3Rbits_t;
volatile __SS3Rbits_t SS3Rbits __asm__ ("SS3R") __attribute__((section("sfrs"), address(0xBF8014B8)));
#define SDI4R SDI4R
volatile uint32_t   SDI4R __attribute__((section("sfrs"), address(0xBF8014C0)));
typedef struct {
  uint32_t SDI4R:4;
} __SDI4Rbits_t;
volatile __SDI4Rbits_t SDI4Rbits __asm__ ("SDI4R") __attribute__((section("sfrs"), address(0xBF8014C0)));
#define SS4R SS4R
volatile uint32_t   SS4R __attribute__((section("sfrs"), address(0xBF8014C4)));
typedef struct {
  uint32_t SS4R:4;
} __SS4Rbits_t;
volatile __SS4Rbits_t SS4Rbits __asm__ ("SS4R") __attribute__((section("sfrs"), address(0xBF8014C4)));
#define SDI5R SDI5R
volatile uint32_t   SDI5R __attribute__((section("sfrs"), address(0xBF8014CC)));
typedef struct {
  uint32_t SDI5R:4;
} __SDI5Rbits_t;
volatile __SDI5Rbits_t SDI5Rbits __asm__ ("SDI5R") __attribute__((section("sfrs"), address(0xBF8014CC)));
#define SS5R SS5R
volatile uint32_t   SS5R __attribute__((section("sfrs"), address(0xBF8014D0)));
typedef struct {
  uint32_t SS5R:4;
} __SS5Rbits_t;
volatile __SS5Rbits_t SS5Rbits __asm__ ("SS5R") __attribute__((section("sfrs"), address(0xBF8014D0)));
#define SDI6R SDI6R
volatile uint32_t   SDI6R __attribute__((section("sfrs"), address(0xBF8014D8)));
typedef struct {
  uint32_t SDI6R:4;
} __SDI6Rbits_t;
volatile __SDI6Rbits_t SDI6Rbits __asm__ ("SDI6R") __attribute__((section("sfrs"), address(0xBF8014D8)));
#define SS6R SS6R
volatile uint32_t   SS6R __attribute__((section("sfrs"), address(0xBF8014DC)));
typedef struct {
  uint32_t SS6R:4;
} __SS6Rbits_t;
volatile __SS6Rbits_t SS6Rbits __asm__ ("SS6R") __attribute__((section("sfrs"), address(0xBF8014DC)));
#define REFCLKI1R REFCLKI1R
volatile uint32_t   REFCLKI1R __attribute__((section("sfrs"), address(0xBF8014E8)));
typedef struct {
  uint32_t REFCLKI1R:4;
} __REFCLKI1Rbits_t;
volatile __REFCLKI1Rbits_t REFCLKI1Rbits __asm__ ("REFCLKI1R") __attribute__((section("sfrs"), address(0xBF8014E8)));
#define REFCLKI3R REFCLKI3R
volatile uint32_t   REFCLKI3R __attribute__((section("sfrs"), address(0xBF8014F0)));
typedef struct {
  uint32_t REFCLKI3R:4;
} __REFCLKI3Rbits_t;
volatile __REFCLKI3Rbits_t REFCLKI3Rbits __asm__ ("REFCLKI3R") __attribute__((section("sfrs"), address(0xBF8014F0)));
#define REFCLKI4R REFCLKI4R
volatile uint32_t   REFCLKI4R __attribute__((section("sfrs"), address(0xBF8014F4)));
typedef struct {
  uint32_t REFCLKI4R:4;
} __REFCLKI4Rbits_t;
volatile __REFCLKI4Rbits_t REFCLKI4Rbits __asm__ ("REFCLKI4R") __attribute__((section("sfrs"), address(0xBF8014F4)));
#define RPA14R RPA14R
volatile uint32_t   RPA14R __attribute__((section("sfrs"), address(0xBF801538)));
typedef struct {
  uint32_t RPA14R:4;
} __RPA14Rbits_t;
volatile __RPA14Rbits_t RPA14Rbits __asm__ ("RPA14R") __attribute__((section("sfrs"), address(0xBF801538)));
#define RPA15R RPA15R
volatile uint32_t   RPA15R __attribute__((section("sfrs"), address(0xBF80153C)));
typedef struct {
  uint32_t RPA15R:4;
} __RPA15Rbits_t;
volatile __RPA15Rbits_t RPA15Rbits __asm__ ("RPA15R") __attribute__((section("sfrs"), address(0xBF80153C)));
#define RPB0R RPB0R
volatile uint32_t   RPB0R __attribute__((section("sfrs"), address(0xBF801540)));
typedef struct {
  uint32_t RPB0R:4;
} __RPB0Rbits_t;
volatile __RPB0Rbits_t RPB0Rbits __asm__ ("RPB0R") __attribute__((section("sfrs"), address(0xBF801540)));
#define RPB1R RPB1R
volatile uint32_t   RPB1R __attribute__((section("sfrs"), address(0xBF801544)));
typedef struct {
  uint32_t RPB1R:4;
} __RPB1Rbits_t;
volatile __RPB1Rbits_t RPB1Rbits __asm__ ("RPB1R") __attribute__((section("sfrs"), address(0xBF801544)));
#define RPB2R RPB2R
volatile uint32_t   RPB2R __attribute__((section("sfrs"), address(0xBF801548)));
typedef struct {
  uint32_t RPB2R:4;
} __RPB2Rbits_t;
volatile __RPB2Rbits_t RPB2Rbits __asm__ ("RPB2R") __attribute__((section("sfrs"), address(0xBF801548)));
#define RPB3R RPB3R
volatile uint32_t   RPB3R __attribute__((section("sfrs"), address(0xBF80154C)));
typedef struct {
  uint32_t RPB3R:4;
} __RPB3Rbits_t;
volatile __RPB3Rbits_t RPB3Rbits __asm__ ("RPB3R") __attribute__((section("sfrs"), address(0xBF80154C)));
#define RPB5R RPB5R
volatile uint32_t   RPB5R __attribute__((section("sfrs"), address(0xBF801554)));
typedef struct {
  uint32_t RPB5R:4;
} __RPB5Rbits_t;
volatile __RPB5Rbits_t RPB5Rbits __asm__ ("RPB5R") __attribute__((section("sfrs"), address(0xBF801554)));
#define RPB6R RPB6R
volatile uint32_t   RPB6R __attribute__((section("sfrs"), address(0xBF801558)));
typedef struct {
  uint32_t RPB6R:4;
} __RPB6Rbits_t;
volatile __RPB6Rbits_t RPB6Rbits __asm__ ("RPB6R") __attribute__((section("sfrs"), address(0xBF801558)));
#define RPB7R RPB7R
volatile uint32_t   RPB7R __attribute__((section("sfrs"), address(0xBF80155C)));
typedef struct {
  uint32_t RPB7R:4;
} __RPB7Rbits_t;
volatile __RPB7Rbits_t RPB7Rbits __asm__ ("RPB7R") __attribute__((section("sfrs"), address(0xBF80155C)));
#define RPB8R RPB8R
volatile uint32_t   RPB8R __attribute__((section("sfrs"), address(0xBF801560)));
typedef struct {
  uint32_t RPB8R:4;
} __RPB8Rbits_t;
volatile __RPB8Rbits_t RPB8Rbits __asm__ ("RPB8R") __attribute__((section("sfrs"), address(0xBF801560)));
#define RPB9R RPB9R
volatile uint32_t   RPB9R __attribute__((section("sfrs"), address(0xBF801564)));
typedef struct {
  uint32_t RPB9R:4;
} __RPB9Rbits_t;
volatile __RPB9Rbits_t RPB9Rbits __asm__ ("RPB9R") __attribute__((section("sfrs"), address(0xBF801564)));
#define RPB10R RPB10R
volatile uint32_t   RPB10R __attribute__((section("sfrs"), address(0xBF801568)));
typedef struct {
  uint32_t RPB10R:4;
} __RPB10Rbits_t;
volatile __RPB10Rbits_t RPB10Rbits __asm__ ("RPB10R") __attribute__((section("sfrs"), address(0xBF801568)));
#define RPB14R RPB14R
volatile uint32_t   RPB14R __attribute__((section("sfrs"), address(0xBF801578)));
typedef struct {
  uint32_t RPB14R:4;
} __RPB14Rbits_t;
volatile __RPB14Rbits_t RPB14Rbits __asm__ ("RPB14R") __attribute__((section("sfrs"), address(0xBF801578)));
#define RPB15R RPB15R
volatile uint32_t   RPB15R __attribute__((section("sfrs"), address(0xBF80157C)));
typedef struct {
  uint32_t RPB15R:4;
} __RPB15Rbits_t;
volatile __RPB15Rbits_t RPB15Rbits __asm__ ("RPB15R") __attribute__((section("sfrs"), address(0xBF80157C)));
#define RPC1R RPC1R
volatile uint32_t   RPC1R __attribute__((section("sfrs"), address(0xBF801584)));
typedef struct {
  uint32_t RPC1R:4;
} __RPC1Rbits_t;
volatile __RPC1Rbits_t RPC1Rbits __asm__ ("RPC1R") __attribute__((section("sfrs"), address(0xBF801584)));
#define RPC2R RPC2R
volatile uint32_t   RPC2R __attribute__((section("sfrs"), address(0xBF801588)));
typedef struct {
  uint32_t RPC2R:4;
} __RPC2Rbits_t;
volatile __RPC2Rbits_t RPC2Rbits __asm__ ("RPC2R") __attribute__((section("sfrs"), address(0xBF801588)));
#define RPC3R RPC3R
volatile uint32_t   RPC3R __attribute__((section("sfrs"), address(0xBF80158C)));
typedef struct {
  uint32_t RPC3R:4;
} __RPC3Rbits_t;
volatile __RPC3Rbits_t RPC3Rbits __asm__ ("RPC3R") __attribute__((section("sfrs"), address(0xBF80158C)));
#define RPC4R RPC4R
volatile uint32_t   RPC4R __attribute__((section("sfrs"), address(0xBF801590)));
typedef struct {
  uint32_t RPC4R:4;
} __RPC4Rbits_t;
volatile __RPC4Rbits_t RPC4Rbits __asm__ ("RPC4R") __attribute__((section("sfrs"), address(0xBF801590)));
#define RPC13R RPC13R
volatile uint32_t   RPC13R __attribute__((section("sfrs"), address(0xBF8015B4)));
typedef struct {
  uint32_t RPC13R:4;
} __RPC13Rbits_t;
volatile __RPC13Rbits_t RPC13Rbits __asm__ ("RPC13R") __attribute__((section("sfrs"), address(0xBF8015B4)));
#define RPC14R RPC14R
volatile uint32_t   RPC14R __attribute__((section("sfrs"), address(0xBF8015B8)));
typedef struct {
  uint32_t RPC14R:4;
} __RPC14Rbits_t;
volatile __RPC14Rbits_t RPC14Rbits __asm__ ("RPC14R") __attribute__((section("sfrs"), address(0xBF8015B8)));
#define RPD0R RPD0R
volatile uint32_t   RPD0R __attribute__((section("sfrs"), address(0xBF8015C0)));
typedef struct {
  uint32_t RPD0R:4;
} __RPD0Rbits_t;
volatile __RPD0Rbits_t RPD0Rbits __asm__ ("RPD0R") __attribute__((section("sfrs"), address(0xBF8015C0)));
#define RPD1R RPD1R
volatile uint32_t   RPD1R __attribute__((section("sfrs"), address(0xBF8015C4)));
typedef struct {
  uint32_t RPD1R:4;
} __RPD1Rbits_t;
volatile __RPD1Rbits_t RPD1Rbits __asm__ ("RPD1R") __attribute__((section("sfrs"), address(0xBF8015C4)));
#define RPD2R RPD2R
volatile uint32_t   RPD2R __attribute__((section("sfrs"), address(0xBF8015C8)));
typedef struct {
  uint32_t RPD2R:4;
} __RPD2Rbits_t;
volatile __RPD2Rbits_t RPD2Rbits __asm__ ("RPD2R") __attribute__((section("sfrs"), address(0xBF8015C8)));
#define RPD3R RPD3R
volatile uint32_t   RPD3R __attribute__((section("sfrs"), address(0xBF8015CC)));
typedef struct {
  uint32_t RPD3R:4;
} __RPD3Rbits_t;
volatile __RPD3Rbits_t RPD3Rbits __asm__ ("RPD3R") __attribute__((section("sfrs"), address(0xBF8015CC)));
#define RPD4R RPD4R
volatile uint32_t   RPD4R __attribute__((section("sfrs"), address(0xBF8015D0)));
typedef struct {
  uint32_t RPD4R:4;
} __RPD4Rbits_t;
volatile __RPD4Rbits_t RPD4Rbits __asm__ ("RPD4R") __attribute__((section("sfrs"), address(0xBF8015D0)));
#define RPD5R RPD5R
volatile uint32_t   RPD5R __attribute__((section("sfrs"), address(0xBF8015D4)));
typedef struct {
  uint32_t RPD5R:4;
} __RPD5Rbits_t;
volatile __RPD5Rbits_t RPD5Rbits __asm__ ("RPD5R") __attribute__((section("sfrs"), address(0xBF8015D4)));
#define RPD9R RPD9R
volatile uint32_t   RPD9R __attribute__((section("sfrs"), address(0xBF8015E4)));
typedef struct {
  uint32_t RPD9R:4;
} __RPD9Rbits_t;
volatile __RPD9Rbits_t RPD9Rbits __asm__ ("RPD9R") __attribute__((section("sfrs"), address(0xBF8015E4)));
#define RPD10R RPD10R
volatile uint32_t   RPD10R __attribute__((section("sfrs"), address(0xBF8015E8)));
typedef struct {
  uint32_t RPD10R:4;
} __RPD10Rbits_t;
volatile __RPD10Rbits_t RPD10Rbits __asm__ ("RPD10R") __attribute__((section("sfrs"), address(0xBF8015E8)));
#define RPD11R RPD11R
volatile uint32_t   RPD11R __attribute__((section("sfrs"), address(0xBF8015EC)));
typedef struct {
  uint32_t RPD11R:4;
} __RPD11Rbits_t;
volatile __RPD11Rbits_t RPD11Rbits __asm__ ("RPD11R") __attribute__((section("sfrs"), address(0xBF8015EC)));
#define RPD12R RPD12R
volatile uint32_t   RPD12R __attribute__((section("sfrs"), address(0xBF8015F0)));
typedef struct {
  uint32_t RPD12R:4;
} __RPD12Rbits_t;
volatile __RPD12Rbits_t RPD12Rbits __asm__ ("RPD12R") __attribute__((section("sfrs"), address(0xBF8015F0)));
#define RPD14R RPD14R
volatile uint32_t   RPD14R __attribute__((section("sfrs"), address(0xBF8015F8)));
typedef struct {
  uint32_t RPD14R:4;
} __RPD14Rbits_t;
volatile __RPD14Rbits_t RPD14Rbits __asm__ ("RPD14R") __attribute__((section("sfrs"), address(0xBF8015F8)));
#define RPD15R RPD15R
volatile uint32_t   RPD15R __attribute__((section("sfrs"), address(0xBF8015FC)));
typedef struct {
  uint32_t RPD15R:4;
} __RPD15Rbits_t;
volatile __RPD15Rbits_t RPD15Rbits __asm__ ("RPD15R") __attribute__((section("sfrs"), address(0xBF8015FC)));
#define RPE3R RPE3R
volatile uint32_t   RPE3R __attribute__((section("sfrs"), address(0xBF80160C)));
typedef struct {
  uint32_t RPE3R:4;
} __RPE3Rbits_t;
volatile __RPE3Rbits_t RPE3Rbits __asm__ ("RPE3R") __attribute__((section("sfrs"), address(0xBF80160C)));
#define RPE5R RPE5R
volatile uint32_t   RPE5R __attribute__((section("sfrs"), address(0xBF801614)));
typedef struct {
  uint32_t RPE5R:4;
} __RPE5Rbits_t;
volatile __RPE5Rbits_t RPE5Rbits __asm__ ("RPE5R") __attribute__((section("sfrs"), address(0xBF801614)));
#define RPE8R RPE8R
volatile uint32_t   RPE8R __attribute__((section("sfrs"), address(0xBF801620)));
typedef struct {
  uint32_t RPE8R:4;
} __RPE8Rbits_t;
volatile __RPE8Rbits_t RPE8Rbits __asm__ ("RPE8R") __attribute__((section("sfrs"), address(0xBF801620)));
#define RPE9R RPE9R
volatile uint32_t   RPE9R __attribute__((section("sfrs"), address(0xBF801624)));
typedef struct {
  uint32_t RPE9R:4;
} __RPE9Rbits_t;
volatile __RPE9Rbits_t RPE9Rbits __asm__ ("RPE9R") __attribute__((section("sfrs"), address(0xBF801624)));
#define RPF0R RPF0R
volatile uint32_t   RPF0R __attribute__((section("sfrs"), address(0xBF801640)));
typedef struct {
  uint32_t RPF0R:4;
} __RPF0Rbits_t;
volatile __RPF0Rbits_t RPF0Rbits __asm__ ("RPF0R") __attribute__((section("sfrs"), address(0xBF801640)));
#define RPF1R RPF1R
volatile uint32_t   RPF1R __attribute__((section("sfrs"), address(0xBF801644)));
typedef struct {
  uint32_t RPF1R:4;
} __RPF1Rbits_t;
volatile __RPF1Rbits_t RPF1Rbits __asm__ ("RPF1R") __attribute__((section("sfrs"), address(0xBF801644)));
#define RPF2R RPF2R
volatile uint32_t   RPF2R __attribute__((section("sfrs"), address(0xBF801648)));
typedef struct {
  uint32_t RPF2R:4;
} __RPF2Rbits_t;
volatile __RPF2Rbits_t RPF2Rbits __asm__ ("RPF2R") __attribute__((section("sfrs"), address(0xBF801648)));
#define RPF3R RPF3R
volatile uint32_t   RPF3R __attribute__((section("sfrs"), address(0xBF80164C)));
typedef struct {
  uint32_t RPF3R:4;
} __RPF3Rbits_t;
volatile __RPF3Rbits_t RPF3Rbits __asm__ ("RPF3R") __attribute__((section("sfrs"), address(0xBF80164C)));
#define RPF4R RPF4R
volatile uint32_t   RPF4R __attribute__((section("sfrs"), address(0xBF801650)));
typedef struct {
  uint32_t RPF4R:4;
} __RPF4Rbits_t;
volatile __RPF4Rbits_t RPF4Rbits __asm__ ("RPF4R") __attribute__((section("sfrs"), address(0xBF801650)));
#define RPF5R RPF5R
volatile uint32_t   RPF5R __attribute__((section("sfrs"), address(0xBF801654)));
typedef struct {
  uint32_t RPF5R:4;
} __RPF5Rbits_t;
volatile __RPF5Rbits_t RPF5Rbits __asm__ ("RPF5R") __attribute__((section("sfrs"), address(0xBF801654)));
#define RPF8R RPF8R
volatile uint32_t   RPF8R __attribute__((section("sfrs"), address(0xBF801660)));
typedef struct {
  uint32_t RPF8R:4;
} __RPF8Rbits_t;
volatile __RPF8Rbits_t RPF8Rbits __asm__ ("RPF8R") __attribute__((section("sfrs"), address(0xBF801660)));
#define RPF12R RPF12R
volatile uint32_t   RPF12R __attribute__((section("sfrs"), address(0xBF801670)));
typedef struct {
  uint32_t RPF12R:4;
} __RPF12Rbits_t;
volatile __RPF12Rbits_t RPF12Rbits __asm__ ("RPF12R") __attribute__((section("sfrs"), address(0xBF801670)));
#define RPF13R RPF13R
volatile uint32_t   RPF13R __attribute__((section("sfrs"), address(0xBF801674)));
typedef struct {
  uint32_t RPF13R:4;
} __RPF13Rbits_t;
volatile __RPF13Rbits_t RPF13Rbits __asm__ ("RPF13R") __attribute__((section("sfrs"), address(0xBF801674)));
#define RPG0R RPG0R
volatile uint32_t   RPG0R __attribute__((section("sfrs"), address(0xBF801680)));
typedef struct {
  uint32_t RPG0R:4;
} __RPG0Rbits_t;
volatile __RPG0Rbits_t RPG0Rbits __asm__ ("RPG0R") __attribute__((section("sfrs"), address(0xBF801680)));
#define RPG1R RPG1R
volatile uint32_t   RPG1R __attribute__((section("sfrs"), address(0xBF801684)));
typedef struct {
  uint32_t RPG1R:4;
} __RPG1Rbits_t;
volatile __RPG1Rbits_t RPG1Rbits __asm__ ("RPG1R") __attribute__((section("sfrs"), address(0xBF801684)));
#define RPG6R RPG6R
volatile uint32_t   RPG6R __attribute__((section("sfrs"), address(0xBF801698)));
typedef struct {
  uint32_t RPG6R:4;
} __RPG6Rbits_t;
volatile __RPG6Rbits_t RPG6Rbits __asm__ ("RPG6R") __attribute__((section("sfrs"), address(0xBF801698)));
#define RPG7R RPG7R
volatile uint32_t   RPG7R __attribute__((section("sfrs"), address(0xBF80169C)));
typedef struct {
  uint32_t RPG7R:4;
} __RPG7Rbits_t;
volatile __RPG7Rbits_t RPG7Rbits __asm__ ("RPG7R") __attribute__((section("sfrs"), address(0xBF80169C)));
#define RPG8R RPG8R
volatile uint32_t   RPG8R __attribute__((section("sfrs"), address(0xBF8016A0)));
typedef struct {
  uint32_t RPG8R:4;
} __RPG8Rbits_t;
volatile __RPG8Rbits_t RPG8Rbits __asm__ ("RPG8R") __attribute__((section("sfrs"), address(0xBF8016A0)));
#define RPG9R RPG9R
volatile uint32_t   RPG9R __attribute__((section("sfrs"), address(0xBF8016A4)));
typedef struct {
  uint32_t RPG9R:4;
} __RPG9Rbits_t;
volatile __RPG9Rbits_t RPG9Rbits __asm__ ("RPG9R") __attribute__((section("sfrs"), address(0xBF8016A4)));
#define INTCON INTCON
volatile uint32_t   INTCON __attribute__((section("sfrs"), address(0xBF810000)));
typedef struct {
  uint32_t INT0EP:1;
  uint32_t INT1EP:1;
  uint32_t INT2EP:1;
  uint32_t INT3EP:1;
  uint32_t INT4EP:1;
  uint32_t :3;
  uint32_t TPC:3;
  uint32_t :1;
  uint32_t MVEC:1;
  uint32_t :11;
  uint32_t NMIKEY:8;
} __INTCONbits_t;
volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs"), address(0xBF810000)));
volatile uint32_t        INTCONCLR __attribute__((section("sfrs"),address(0xBF810004)));
volatile uint32_t        INTCONSET __attribute__((section("sfrs"),address(0xBF810008)));
volatile uint32_t        INTCONINV __attribute__((section("sfrs"),address(0xBF81000C)));
#define PRISS PRISS
volatile uint32_t   PRISS __attribute__((section("sfrs"), address(0xBF810010)));
typedef struct {
  uint32_t SS0:1;
  uint32_t :3;
  uint32_t PRI1SS:4;
  uint32_t PRI2SS:4;
  uint32_t PRI3SS:4;
  uint32_t PRI4SS:4;
  uint32_t PRI5SS:4;
  uint32_t PRI6SS:4;
  uint32_t PRI7SS:4;
} __PRISSbits_t;
volatile __PRISSbits_t PRISSbits __asm__ ("PRISS") __attribute__((section("sfrs"), address(0xBF810010)));
volatile uint32_t        PRISSCLR __attribute__((section("sfrs"),address(0xBF810014)));
volatile uint32_t        PRISSSET __attribute__((section("sfrs"),address(0xBF810018)));
volatile uint32_t        PRISSINV __attribute__((section("sfrs"),address(0xBF81001C)));
#define INTSTAT INTSTAT
volatile uint32_t   INTSTAT __attribute__((section("sfrs"), address(0xBF810020)));
typedef struct {
  uint32_t SIRQ:8;
  uint32_t SRIPL:3;
} __INTSTATbits_t;
volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs"), address(0xBF810020)));
volatile uint32_t        INTSTATCLR __attribute__((section("sfrs"),address(0xBF810024)));
volatile uint32_t        INTSTATSET __attribute__((section("sfrs"),address(0xBF810028)));
volatile uint32_t        INTSTATINV __attribute__((section("sfrs"),address(0xBF81002C)));
#define IPTMR IPTMR
volatile uint32_t   IPTMR __attribute__((section("sfrs"), address(0xBF810030)));
typedef struct {
  uint32_t IPTMR:32;
} __IPTMRbits_t;
volatile __IPTMRbits_t IPTMRbits __asm__ ("IPTMR") __attribute__((section("sfrs"), address(0xBF810030)));
volatile uint32_t        IPTMRCLR __attribute__((section("sfrs"),address(0xBF810034)));
volatile uint32_t        IPTMRSET __attribute__((section("sfrs"),address(0xBF810038)));
volatile uint32_t        IPTMRINV __attribute__((section("sfrs"),address(0xBF81003C)));
#define IFS0 IFS0
volatile uint32_t   IFS0 __attribute__((section("sfrs"), address(0xBF810040)));
typedef union {
  struct {
    uint32_t CTIF:1;
    uint32_t CS0IF:1;
    uint32_t CS1IF:1;
    uint32_t INT0IF:1;
    uint32_t T1IF:1;
    uint32_t IC1EIF:1;
    uint32_t IC1IF:1;
    uint32_t OC1IF:1;
    uint32_t INT1IF:1;
    uint32_t T2IF:1;
    uint32_t IC2EIF:1;
    uint32_t IC2IF:1;
    uint32_t OC2IF:1;
    uint32_t INT2IF:1;
    uint32_t T3IF:1;
    uint32_t IC3EIF:1;
    uint32_t IC3IF:1;
    uint32_t OC3IF:1;
    uint32_t INT3IF:1;
    uint32_t T4IF:1;
    uint32_t IC4EIF:1;
    uint32_t IC4IF:1;
    uint32_t OC4IF:1;
    uint32_t INT4IF:1;
    uint32_t T5IF:1;
    uint32_t IC5EIF:1;
    uint32_t IC5IF:1;
    uint32_t OC5IF:1;
    uint32_t T6IF:1;
    uint32_t IC6EIF:1;
    uint32_t IC6IF:1;
    uint32_t OC6IF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS0bits_t;
volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs"), address(0xBF810040)));
volatile uint32_t        IFS0CLR __attribute__((section("sfrs"),address(0xBF810044)));
volatile uint32_t        IFS0SET __attribute__((section("sfrs"),address(0xBF810048)));
volatile uint32_t        IFS0INV __attribute__((section("sfrs"),address(0xBF81004C)));
#define IFS1 IFS1
volatile uint32_t   IFS1 __attribute__((section("sfrs"), address(0xBF810050)));
typedef union {
  struct {
    uint32_t T7IF:1;
    uint32_t IC7EIF:1;
    uint32_t IC7IF:1;
    uint32_t OC7IF:1;
    uint32_t T8IF:1;
    uint32_t IC8EIF:1;
    uint32_t IC8IF:1;
    uint32_t OC8IF:1;
    uint32_t T9IF:1;
    uint32_t IC9EIF:1;
    uint32_t IC9IF:1;
    uint32_t OC9IF:1;
    uint32_t ADCIF:1;
    uint32_t ADCFIFOIF:1;
    uint32_t ADCDC1IF:1;
    uint32_t ADCDC2IF:1;
    uint32_t ADCDC3IF:1;
    uint32_t ADCDC4IF:1;
    uint32_t ADCDC5IF:1;
    uint32_t ADCDC6IF:1;
    uint32_t ADCDF1IF:1;
    uint32_t ADCDF2IF:1;
    uint32_t ADCDF3IF:1;
    uint32_t ADCDF4IF:1;
    uint32_t ADCDF5IF:1;
    uint32_t ADCDF6IF:1;
    uint32_t ADCFLTIF:1;
    uint32_t ADCD0IF:1;
    uint32_t ADCD1IF:1;
    uint32_t ADCD2IF:1;
    uint32_t ADCD3IF:1;
    uint32_t ADCD4IF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS1bits_t;
volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs"), address(0xBF810050)));
volatile uint32_t        IFS1CLR __attribute__((section("sfrs"),address(0xBF810054)));
volatile uint32_t        IFS1SET __attribute__((section("sfrs"),address(0xBF810058)));
volatile uint32_t        IFS1INV __attribute__((section("sfrs"),address(0xBF81005C)));
#define IFS2 IFS2
volatile uint32_t   IFS2 __attribute__((section("sfrs"), address(0xBF810060)));
typedef union {
  struct {
    uint32_t ADCD5IF:1;
    uint32_t ADCD6IF:1;
    uint32_t ADCD7IF:1;
    uint32_t ADCD8IF:1;
    uint32_t ADCD9IF:1;
    uint32_t ADCD10IF:1;
    uint32_t ADCD11IF:1;
    uint32_t ADCD12IF:1;
    uint32_t ADCD13IF:1;
    uint32_t ADCD14IF:1;
    uint32_t ADCD15IF:1;
    uint32_t ADCD16IF:1;
    uint32_t ADCD17IF:1;
    uint32_t ADCD18IF:1;
    uint32_t ADCD19IF:1;
    uint32_t ADCD20IF:1;
    uint32_t ADCD21IF:1;
    uint32_t ADCD22IF:1;
    uint32_t ADCD23IF:1;
    uint32_t ADCD24IF:1;
    uint32_t ADCD25IF:1;
    uint32_t ADCD26IF:1;
    uint32_t ADCD27IF:1;
    uint32_t ADCD28IF:1;
    uint32_t ADCD29IF:1;
    uint32_t ADCD30IF:1;
    uint32_t ADCD31IF:1;
    uint32_t ADCD32IF:1;
    uint32_t ADCD33IF:1;
    uint32_t ADCD34IF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS2bits_t;
volatile __IFS2bits_t IFS2bits __asm__ ("IFS2") __attribute__((section("sfrs"), address(0xBF810060)));
volatile uint32_t        IFS2CLR __attribute__((section("sfrs"),address(0xBF810064)));
volatile uint32_t        IFS2SET __attribute__((section("sfrs"),address(0xBF810068)));
volatile uint32_t        IFS2INV __attribute__((section("sfrs"),address(0xBF81006C)));
#define IFS3 IFS3
volatile uint32_t   IFS3 __attribute__((section("sfrs"), address(0xBF810070)));
typedef union {
  struct {
    uint32_t :6;
    uint32_t ADCD43IF:1;
    uint32_t ADCD44IF:1;
    uint32_t CPCIF:1;
    uint32_t CFDCIF:1;
    uint32_t SBIF:1;
    uint32_t :2;
    uint32_t SPI1EIF:1;
    uint32_t SPI1RXIF:1;
    uint32_t SPI1TXIF:1;
    uint32_t U1EIF:1;
    uint32_t U1RXIF:1;
    uint32_t U1TXIF:1;
    uint32_t I2C1BIF:1;
    uint32_t I2C1SIF:1;
    uint32_t I2C1MIF:1;
    uint32_t CNAIF:1;
    uint32_t CNBIF:1;
    uint32_t CNCIF:1;
    uint32_t CNDIF:1;
    uint32_t CNEIF:1;
    uint32_t CNFIF:1;
    uint32_t CNGIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS3bits_t;
volatile __IFS3bits_t IFS3bits __asm__ ("IFS3") __attribute__((section("sfrs"), address(0xBF810070)));
volatile uint32_t        IFS3CLR __attribute__((section("sfrs"),address(0xBF810074)));
volatile uint32_t        IFS3SET __attribute__((section("sfrs"),address(0xBF810078)));
volatile uint32_t        IFS3INV __attribute__((section("sfrs"),address(0xBF81007C)));
#define IFS4 IFS4
volatile uint32_t   IFS4 __attribute__((section("sfrs"), address(0xBF810080)));
typedef union {
  struct {
    uint32_t PMPIF:1;
    uint32_t PMPEIF:1;
    uint32_t CMP1IF:1;
    uint32_t CMP2IF:1;
    uint32_t USBIF:1;
    uint32_t USBDMAIF:1;
    uint32_t DMA0IF:1;
    uint32_t DMA1IF:1;
    uint32_t DMA2IF:1;
    uint32_t DMA3IF:1;
    uint32_t DMA4IF:1;
    uint32_t DMA5IF:1;
    uint32_t DMA6IF:1;
    uint32_t DMA7IF:1;
    uint32_t SPI2EIF:1;
    uint32_t SPI2RXIF:1;
    uint32_t SPI2TXIF:1;
    uint32_t U2EIF:1;
    uint32_t U2RXIF:1;
    uint32_t U2TXIF:1;
    uint32_t I2C2BIF:1;
    uint32_t I2C2SIF:1;
    uint32_t I2C2MIF:1;
    uint32_t :2;
    uint32_t ETHIF:1;
    uint32_t SPI3EIF:1;
    uint32_t SPI3RXIF:1;
    uint32_t SPI3TXIF:1;
    uint32_t U3EIF:1;
    uint32_t U3RXIF:1;
    uint32_t U3TXIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS4bits_t;
volatile __IFS4bits_t IFS4bits __asm__ ("IFS4") __attribute__((section("sfrs"), address(0xBF810080)));
volatile uint32_t        IFS4CLR __attribute__((section("sfrs"),address(0xBF810084)));
volatile uint32_t        IFS4SET __attribute__((section("sfrs"),address(0xBF810088)));
volatile uint32_t        IFS4INV __attribute__((section("sfrs"),address(0xBF81008C)));
#define IFS5 IFS5
volatile uint32_t   IFS5 __attribute__((section("sfrs"), address(0xBF810090)));
typedef union {
  struct {
    uint32_t I2C3BIF:1;
    uint32_t I2C3SIF:1;
    uint32_t I2C3MIF:1;
    uint32_t SPI4EIF:1;
    uint32_t SPI4RXIF:1;
    uint32_t SPI4TXIF:1;
    uint32_t RTCCIF:1;
    uint32_t FCEIF:1;
    uint32_t PREIF:1;
    uint32_t SQI1IF:1;
    uint32_t U4EIF:1;
    uint32_t U4RXIF:1;
    uint32_t U4TXIF:1;
    uint32_t I2C4BIF:1;
    uint32_t I2C4SIF:1;
    uint32_t I2C4MIF:1;
    uint32_t SPI5EIF:1;
    uint32_t SPI5RXIF:1;
    uint32_t SPI5TXIF:1;
    uint32_t U5EIF:1;
    uint32_t U5RXIF:1;
    uint32_t U5TXIF:1;
    uint32_t I2C5BIF:1;
    uint32_t I2C5SIF:1;
    uint32_t I2C5MIF:1;
    uint32_t SPI6IF:1;
    uint32_t SPI6RXIF:1;
    uint32_t SPI6TX:1;
    uint32_t U6EIF:1;
    uint32_t U6RXIF:1;
    uint32_t U6TXIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS5bits_t;
volatile __IFS5bits_t IFS5bits __asm__ ("IFS5") __attribute__((section("sfrs"), address(0xBF810090)));
volatile uint32_t        IFS5CLR __attribute__((section("sfrs"),address(0xBF810094)));
volatile uint32_t        IFS5SET __attribute__((section("sfrs"),address(0xBF810098)));
volatile uint32_t        IFS5INV __attribute__((section("sfrs"),address(0xBF81009C)));
#define IFS6 IFS6
volatile uint32_t   IFS6 __attribute__((section("sfrs"), address(0xBF8100A0)));
typedef union {
  struct {
    uint32_t ADCEOSIF:1;
    uint32_t ADCARDYIF:1;
    uint32_t ADCURDYIF:1;
    uint32_t :1;
    uint32_t ADCGRPIF:1;
    uint32_t :1;
    uint32_t ADC0EIF:1;
    uint32_t ADC1EIF:1;
    uint32_t ADC2EIF:1;
    uint32_t ADC3EIF:1;
    uint32_t ADC4EIF:1;
    uint32_t :2;
    uint32_t ADC7EIF:1;
    uint32_t ADC0WIF:1;
    uint32_t ADC1WIF:1;
    uint32_t ADC2WIF:1;
    uint32_t ADC3WIF:1;
    uint32_t ADC4WIF:1;
    uint32_t :2;
    uint32_t ADC7WIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS6bits_t;
volatile __IFS6bits_t IFS6bits __asm__ ("IFS6") __attribute__((section("sfrs"), address(0xBF8100A0)));
volatile uint32_t        IFS6CLR __attribute__((section("sfrs"),address(0xBF8100A4)));
volatile uint32_t        IFS6SET __attribute__((section("sfrs"),address(0xBF8100A8)));
volatile uint32_t        IFS6INV __attribute__((section("sfrs"),address(0xBF8100AC)));
#define IEC0 IEC0
volatile uint32_t   IEC0 __attribute__((section("sfrs"), address(0xBF8100C0)));
typedef union {
  struct {
    uint32_t CTIE:1;
    uint32_t CS0IE:1;
    uint32_t CS1IE:1;
    uint32_t INT0IE:1;
    uint32_t T1IE:1;
    uint32_t IC1EIE:1;
    uint32_t IC1IE:1;
    uint32_t OC1IE:1;
    uint32_t INT1IE:1;
    uint32_t T2IE:1;
    uint32_t IC2EIE:1;
    uint32_t IC2IE:1;
    uint32_t OC2IE:1;
    uint32_t INT2IE:1;
    uint32_t T3IE:1;
    uint32_t IC3EIE:1;
    uint32_t IC3IE:1;
    uint32_t OC3IE:1;
    uint32_t INT3IE:1;
    uint32_t T4IE:1;
    uint32_t IC4EIE:1;
    uint32_t IC4IE:1;
    uint32_t OC4IE:1;
    uint32_t INT4IE:1;
    uint32_t T5IE:1;
    uint32_t IC5EIE:1;
    uint32_t IC5IE:1;
    uint32_t OC5IE:1;
    uint32_t T6IE:1;
    uint32_t IC6EIE:1;
    uint32_t IC6IE:1;
    uint32_t OC6IE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC0bits_t;
volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs"), address(0xBF8100C0)));
volatile uint32_t        IEC0CLR __attribute__((section("sfrs"),address(0xBF8100C4)));
volatile uint32_t        IEC0SET __attribute__((section("sfrs"),address(0xBF8100C8)));
volatile uint32_t        IEC0INV __attribute__((section("sfrs"),address(0xBF8100CC)));
#define IEC1 IEC1
volatile uint32_t   IEC1 __attribute__((section("sfrs"), address(0xBF8100D0)));
typedef union {
  struct {
    uint32_t T7IE:1;
    uint32_t IC7EIE:1;
    uint32_t IC7IE:1;
    uint32_t OC7IE:1;
    uint32_t T8IE:1;
    uint32_t IC8EIE:1;
    uint32_t IC8IE:1;
    uint32_t OC8IE:1;
    uint32_t T9IE:1;
    uint32_t IC9EIE:1;
    uint32_t IC9IE:1;
    uint32_t OC9IE:1;
    uint32_t ADCIE:1;
    uint32_t ADCFIFOIE:1;
    uint32_t ADCDC1IE:1;
    uint32_t ADCDC2IE:1;
    uint32_t ADCDC3IE:1;
    uint32_t ADCDC4IE:1;
    uint32_t ADCDC5IE:1;
    uint32_t ADCDC6IE:1;
    uint32_t ADCDF1IE:1;
    uint32_t ADCDF2IE:1;
    uint32_t ADCDF3IE:1;
    uint32_t ADCDF4IE:1;
    uint32_t ADCDF5IE:1;
    uint32_t ADCDF6IE:1;
    uint32_t ADCFLTIE:1;
    uint32_t ADCD0IE:1;
    uint32_t ADCD1IE:1;
    uint32_t ADCD2IE:1;
    uint32_t ADCD3IE:1;
    uint32_t ADCD4IE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC1bits_t;
volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs"), address(0xBF8100D0)));
volatile uint32_t        IEC1CLR __attribute__((section("sfrs"),address(0xBF8100D4)));
volatile uint32_t        IEC1SET __attribute__((section("sfrs"),address(0xBF8100D8)));
volatile uint32_t        IEC1INV __attribute__((section("sfrs"),address(0xBF8100DC)));
#define IEC2 IEC2
volatile uint32_t   IEC2 __attribute__((section("sfrs"), address(0xBF8100E0)));
typedef union {
  struct {
    uint32_t ADCD5IE:1;
    uint32_t ADCD6IE:1;
    uint32_t ADCD7IE:1;
    uint32_t ADCD8IE:1;
    uint32_t ADCD9IE:1;
    uint32_t ADCD10IE:1;
    uint32_t ADCD11IE:1;
    uint32_t ADCD12IE:1;
    uint32_t ADCD13IE:1;
    uint32_t ADCD14IE:1;
    uint32_t ADCD15IE:1;
    uint32_t ADCD16IE:1;
    uint32_t ADCD17IE:1;
    uint32_t ADCD18IE:1;
    uint32_t ADCD19IE:1;
    uint32_t ADCD20IE:1;
    uint32_t ADCD21IE:1;
    uint32_t ADCD22IE:1;
    uint32_t ADCD23IE:1;
    uint32_t ADCD24IE:1;
    uint32_t ADCD25IE:1;
    uint32_t ADCD26IE:1;
    uint32_t ADCD27IE:1;
    uint32_t ADCD28IE:1;
    uint32_t ADCD29IE:1;
    uint32_t ADCD30IE:1;
    uint32_t ADCD31IE:1;
    uint32_t ADCD32IE:1;
    uint32_t ADCD33IE:1;
    uint32_t ADCD34IE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC2bits_t;
volatile __IEC2bits_t IEC2bits __asm__ ("IEC2") __attribute__((section("sfrs"), address(0xBF8100E0)));
volatile uint32_t        IEC2CLR __attribute__((section("sfrs"),address(0xBF8100E4)));
volatile uint32_t        IEC2SET __attribute__((section("sfrs"),address(0xBF8100E8)));
volatile uint32_t        IEC2INV __attribute__((section("sfrs"),address(0xBF8100EC)));
#define IEC3 IEC3
volatile uint32_t   IEC3 __attribute__((section("sfrs"), address(0xBF8100F0)));
typedef union {
  struct {
    uint32_t :6;
    uint32_t ADCD43IE:1;
    uint32_t ADCD44IE:1;
    uint32_t CPCIE:1;
    uint32_t CFDCIE:1;
    uint32_t SBIE:1;
    uint32_t :2;
    uint32_t SPI1EIE:1;
    uint32_t SPI1RXIE:1;
    uint32_t SPI1TXIE:1;
    uint32_t U1EIE:1;
    uint32_t U1RXIE:1;
    uint32_t U1TXIE:1;
    uint32_t I2C1BIE:1;
    uint32_t I2C1SIE:1;
    uint32_t I2C1MIE:1;
    uint32_t CNAIE:1;
    uint32_t CNBIE:1;
    uint32_t CNCIE:1;
    uint32_t CNDIE:1;
    uint32_t CNEIE:1;
    uint32_t CNFIE:1;
    uint32_t CNGIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC3bits_t;
volatile __IEC3bits_t IEC3bits __asm__ ("IEC3") __attribute__((section("sfrs"), address(0xBF8100F0)));
volatile uint32_t        IEC3CLR __attribute__((section("sfrs"),address(0xBF8100F4)));
volatile uint32_t        IEC3SET __attribute__((section("sfrs"),address(0xBF8100F8)));
volatile uint32_t        IEC3INV __attribute__((section("sfrs"),address(0xBF8100FC)));
#define IEC4 IEC4
volatile uint32_t   IEC4 __attribute__((section("sfrs"), address(0xBF810100)));
typedef union {
  struct {
    uint32_t PMPIE:1;
    uint32_t PMPEIE:1;
    uint32_t CMP1IE:1;
    uint32_t CMP2IE:1;
    uint32_t USBIE:1;
    uint32_t USBDMAIE:1;
    uint32_t DMA0IE:1;
    uint32_t DMA1IE:1;
    uint32_t DMA2IE:1;
    uint32_t DMA3IE:1;
    uint32_t DMA4IE:1;
    uint32_t DMA5IE:1;
    uint32_t DMA6IE:1;
    uint32_t DMA7IE:1;
    uint32_t SPI2EIE:1;
    uint32_t SPI2RXIE:1;
    uint32_t SPI2TXIE:1;
    uint32_t U2EIE:1;
    uint32_t U2RXIE:1;
    uint32_t U2TXIE:1;
    uint32_t I2C2BIE:1;
    uint32_t I2C2SIE:1;
    uint32_t I2C2MIE:1;
    uint32_t :2;
    uint32_t ETHIE:1;
    uint32_t SPI3EIE:1;
    uint32_t SPI3RXIE:1;
    uint32_t SPI3TXIE:1;
    uint32_t U3EIE:1;
    uint32_t U3RXIE:1;
    uint32_t U3TXIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC4bits_t;
volatile __IEC4bits_t IEC4bits __asm__ ("IEC4") __attribute__((section("sfrs"), address(0xBF810100)));
volatile uint32_t        IEC4CLR __attribute__((section("sfrs"),address(0xBF810104)));
volatile uint32_t        IEC4SET __attribute__((section("sfrs"),address(0xBF810108)));
volatile uint32_t        IEC4INV __attribute__((section("sfrs"),address(0xBF81010C)));
#define IEC5 IEC5
volatile uint32_t   IEC5 __attribute__((section("sfrs"), address(0xBF810110)));
typedef union {
  struct {
    uint32_t I2C3BIE:1;
    uint32_t I2C3SIE:1;
    uint32_t I2C3MIE:1;
    uint32_t SPI4EIE:1;
    uint32_t SPI4RXIE:1;
    uint32_t SPI4TXIE:1;
    uint32_t RTCCIE:1;
    uint32_t FCEIE:1;
    uint32_t PREIE:1;
    uint32_t SQI1IE:1;
    uint32_t U4EIE:1;
    uint32_t U4RXIE:1;
    uint32_t U4TXIE:1;
    uint32_t I2C4BIE:1;
    uint32_t I2C4SIE:1;
    uint32_t I2C4MIE:1;
    uint32_t SPI5EIE:1;
    uint32_t SPI5RXIE:1;
    uint32_t SPI5TXIE:1;
    uint32_t U5EIE:1;
    uint32_t U5RXIE:1;
    uint32_t U5TXIE:1;
    uint32_t I2C5BIE:1;
    uint32_t I2C5SIE:1;
    uint32_t I2C5MIE:1;
    uint32_t SPI6IE:1;
    uint32_t SPI6RXIE:1;
    uint32_t SPI6TXIE:1;
    uint32_t U6EIE:1;
    uint32_t U6RXIE:1;
    uint32_t U6TXIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC5bits_t;
volatile __IEC5bits_t IEC5bits __asm__ ("IEC5") __attribute__((section("sfrs"), address(0xBF810110)));
volatile uint32_t        IEC5CLR __attribute__((section("sfrs"),address(0xBF810114)));
volatile uint32_t        IEC5SET __attribute__((section("sfrs"),address(0xBF810118)));
volatile uint32_t        IEC5INV __attribute__((section("sfrs"),address(0xBF81011C)));
#define IEC6 IEC6
volatile uint32_t   IEC6 __attribute__((section("sfrs"), address(0xBF810120)));
typedef union {
  struct {
    uint32_t ADCEOSIE:1;
    uint32_t ADCARDYIE:1;
    uint32_t ADCURDYIE:1;
    uint32_t :1;
    uint32_t ADCGRPIE:1;
    uint32_t :1;
    uint32_t ADC0EIE:1;
    uint32_t ADC1EIE:1;
    uint32_t ADC2EIE:1;
    uint32_t ADC3EIE:1;
    uint32_t ADC4EIE:1;
    uint32_t :2;
    uint32_t ADC7EIE:1;
    uint32_t ADC0WIE:1;
    uint32_t ADC1WIE:1;
    uint32_t ADC2WIE:1;
    uint32_t ADC3WIE:1;
    uint32_t ADC4WIE:1;
    uint32_t :2;
    uint32_t ADC7WIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC6bits_t;
volatile __IEC6bits_t IEC6bits __asm__ ("IEC6") __attribute__((section("sfrs"), address(0xBF810120)));
volatile uint32_t        IEC6CLR __attribute__((section("sfrs"),address(0xBF810124)));
volatile uint32_t        IEC6SET __attribute__((section("sfrs"),address(0xBF810128)));
volatile uint32_t        IEC6INV __attribute__((section("sfrs"),address(0xBF81012C)));
#define IPC0 IPC0
volatile uint32_t   IPC0 __attribute__((section("sfrs"), address(0xBF810140)));
typedef union {
  struct {
    uint32_t CTIS:2;
    uint32_t CTIP:3;
    uint32_t :3;
    uint32_t CS0IS:2;
    uint32_t CS0IP:3;
    uint32_t :3;
    uint32_t CS1IS:2;
    uint32_t CS1IP:3;
    uint32_t :3;
    uint32_t INT0IS:2;
    uint32_t INT0IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC0bits_t;
volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs"), address(0xBF810140)));
volatile uint32_t        IPC0CLR __attribute__((section("sfrs"),address(0xBF810144)));
volatile uint32_t        IPC0SET __attribute__((section("sfrs"),address(0xBF810148)));
volatile uint32_t        IPC0INV __attribute__((section("sfrs"),address(0xBF81014C)));
#define IPC1 IPC1
volatile uint32_t   IPC1 __attribute__((section("sfrs"), address(0xBF810150)));
typedef union {
  struct {
    uint32_t T1IS:2;
    uint32_t T1IP:3;
    uint32_t :3;
    uint32_t IC1EIS:2;
    uint32_t IC1EIP:3;
    uint32_t :3;
    uint32_t IC1IS:2;
    uint32_t IC1IP:3;
    uint32_t :3;
    uint32_t OC1IS:2;
    uint32_t OC1IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC1bits_t;
volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs"), address(0xBF810150)));
volatile uint32_t        IPC1CLR __attribute__((section("sfrs"),address(0xBF810154)));
volatile uint32_t        IPC1SET __attribute__((section("sfrs"),address(0xBF810158)));
volatile uint32_t        IPC1INV __attribute__((section("sfrs"),address(0xBF81015C)));
#define IPC2 IPC2
volatile uint32_t   IPC2 __attribute__((section("sfrs"), address(0xBF810160)));
typedef union {
  struct {
    uint32_t INT1IS:2;
    uint32_t INT1IP:3;
    uint32_t :3;
    uint32_t T2IS:2;
    uint32_t T2IP:3;
    uint32_t :3;
    uint32_t IC2EIS:2;
    uint32_t IC2EIP:3;
    uint32_t :3;
    uint32_t IC2IS:2;
    uint32_t IC2IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC2bits_t;
volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs"), address(0xBF810160)));
volatile uint32_t        IPC2CLR __attribute__((section("sfrs"),address(0xBF810164)));
volatile uint32_t        IPC2SET __attribute__((section("sfrs"),address(0xBF810168)));
volatile uint32_t        IPC2INV __attribute__((section("sfrs"),address(0xBF81016C)));
#define IPC3 IPC3
volatile uint32_t   IPC3 __attribute__((section("sfrs"), address(0xBF810170)));
typedef union {
  struct {
    uint32_t OC2IS:2;
    uint32_t OC2IP:3;
    uint32_t :3;
    uint32_t INT2IS:2;
    uint32_t INT2IP:3;
    uint32_t :3;
    uint32_t T3IS:2;
    uint32_t T3IP:3;
    uint32_t :3;
    uint32_t IC3EIS:2;
    uint32_t IC3EIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC3bits_t;
volatile __IPC3bits_t IPC3bits __asm__ ("IPC3") __attribute__((section("sfrs"), address(0xBF810170)));
volatile uint32_t        IPC3CLR __attribute__((section("sfrs"),address(0xBF810174)));
volatile uint32_t        IPC3SET __attribute__((section("sfrs"),address(0xBF810178)));
volatile uint32_t        IPC3INV __attribute__((section("sfrs"),address(0xBF81017C)));
#define IPC4 IPC4
volatile uint32_t   IPC4 __attribute__((section("sfrs"), address(0xBF810180)));
typedef union {
  struct {
    uint32_t IC3IS:2;
    uint32_t IC3IP:3;
    uint32_t :3;
    uint32_t OC3IS:2;
    uint32_t OC3IP:3;
    uint32_t :3;
    uint32_t INT3IS:2;
    uint32_t INT3IP:3;
    uint32_t :3;
    uint32_t T4IS:2;
    uint32_t T4IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC4bits_t;
volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs"), address(0xBF810180)));
volatile uint32_t        IPC4CLR __attribute__((section("sfrs"),address(0xBF810184)));
volatile uint32_t        IPC4SET __attribute__((section("sfrs"),address(0xBF810188)));
volatile uint32_t        IPC4INV __attribute__((section("sfrs"),address(0xBF81018C)));
#define IPC5 IPC5
volatile uint32_t   IPC5 __attribute__((section("sfrs"), address(0xBF810190)));
typedef union {
  struct {
    uint32_t IC4EIS:2;
    uint32_t IC4EIP:3;
    uint32_t :3;
    uint32_t IC4IS:2;
    uint32_t IC4IP:3;
    uint32_t :3;
    uint32_t OC4IS:2;
    uint32_t OC4IP:3;
    uint32_t :3;
    uint32_t INT4IS:2;
    uint32_t INT4IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC5bits_t;
volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs"), address(0xBF810190)));
volatile uint32_t        IPC5CLR __attribute__((section("sfrs"),address(0xBF810194)));
volatile uint32_t        IPC5SET __attribute__((section("sfrs"),address(0xBF810198)));
volatile uint32_t        IPC5INV __attribute__((section("sfrs"),address(0xBF81019C)));
#define IPC6 IPC6
volatile uint32_t   IPC6 __attribute__((section("sfrs"), address(0xBF8101A0)));
typedef union {
  struct {
    uint32_t T5IS:2;
    uint32_t T5IP:3;
    uint32_t :3;
    uint32_t IC5EIS:2;
    uint32_t IC5EIP:3;
    uint32_t :3;
    uint32_t IC5IS:2;
    uint32_t IC5IP:3;
    uint32_t :3;
    uint32_t OC5IS:2;
    uint32_t OC5IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC6bits_t;
volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs"), address(0xBF8101A0)));
volatile uint32_t        IPC6CLR __attribute__((section("sfrs"),address(0xBF8101A4)));
volatile uint32_t        IPC6SET __attribute__((section("sfrs"),address(0xBF8101A8)));
volatile uint32_t        IPC6INV __attribute__((section("sfrs"),address(0xBF8101AC)));
#define IPC7 IPC7
volatile uint32_t   IPC7 __attribute__((section("sfrs"), address(0xBF8101B0)));
typedef union {
  struct {
    uint32_t T6IS:2;
    uint32_t T6IP:3;
    uint32_t :3;
    uint32_t IC6EIS:2;
    uint32_t IC6EIP:3;
    uint32_t :3;
    uint32_t IC6IS:2;
    uint32_t IC6IP:3;
    uint32_t :3;
    uint32_t OC6IS:2;
    uint32_t OC6IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC7bits_t;
volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs"), address(0xBF8101B0)));
volatile uint32_t        IPC7CLR __attribute__((section("sfrs"),address(0xBF8101B4)));
volatile uint32_t        IPC7SET __attribute__((section("sfrs"),address(0xBF8101B8)));
volatile uint32_t        IPC7INV __attribute__((section("sfrs"),address(0xBF8101BC)));
#define IPC8 IPC8
volatile uint32_t   IPC8 __attribute__((section("sfrs"), address(0xBF8101C0)));
typedef union {
  struct {
    uint32_t T7IS:2;
    uint32_t T7IP:3;
    uint32_t :3;
    uint32_t IC7EIS:2;
    uint32_t IC7EIP:3;
    uint32_t :3;
    uint32_t IC7IS:2;
    uint32_t IC7IP:3;
    uint32_t :3;
    uint32_t OC7IS:2;
    uint32_t OC7IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC8bits_t;
volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs"), address(0xBF8101C0)));
volatile uint32_t        IPC8CLR __attribute__((section("sfrs"),address(0xBF8101C4)));
volatile uint32_t        IPC8SET __attribute__((section("sfrs"),address(0xBF8101C8)));
volatile uint32_t        IPC8INV __attribute__((section("sfrs"),address(0xBF8101CC)));
#define IPC9 IPC9
volatile uint32_t   IPC9 __attribute__((section("sfrs"), address(0xBF8101D0)));
typedef union {
  struct {
    uint32_t T8IS:2;
    uint32_t T8IP:3;
    uint32_t :3;
    uint32_t IC8EIS:2;
    uint32_t IC8EIP:3;
    uint32_t :3;
    uint32_t IC8IS:2;
    uint32_t IC8IP:3;
    uint32_t :3;
    uint32_t OC8IS:2;
    uint32_t OC8IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC9bits_t;
volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs"), address(0xBF8101D0)));
volatile uint32_t        IPC9CLR __attribute__((section("sfrs"),address(0xBF8101D4)));
volatile uint32_t        IPC9SET __attribute__((section("sfrs"),address(0xBF8101D8)));
volatile uint32_t        IPC9INV __attribute__((section("sfrs"),address(0xBF8101DC)));
#define IPC10 IPC10
volatile uint32_t   IPC10 __attribute__((section("sfrs"), address(0xBF8101E0)));
typedef union {
  struct {
    uint32_t T9IS:2;
    uint32_t T9IP:3;
    uint32_t :3;
    uint32_t IC9EIS:2;
    uint32_t IC9EIP:3;
    uint32_t :3;
    uint32_t IC9IS:2;
    uint32_t IC9IP:3;
    uint32_t :3;
    uint32_t OC9IS:2;
    uint32_t OC9IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC10bits_t;
volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs"), address(0xBF8101E0)));
volatile uint32_t        IPC10CLR __attribute__((section("sfrs"),address(0xBF8101E4)));
volatile uint32_t        IPC10SET __attribute__((section("sfrs"),address(0xBF8101E8)));
volatile uint32_t        IPC10INV __attribute__((section("sfrs"),address(0xBF8101EC)));
#define IPC11 IPC11
volatile uint32_t   IPC11 __attribute__((section("sfrs"), address(0xBF8101F0)));
typedef union {
  struct {
    uint32_t ADCIS:2;
    uint32_t ADCIP:3;
    uint32_t :3;
    uint32_t ADCFIFOIS:2;
    uint32_t ADCFIFOIP:3;
    uint32_t :3;
    uint32_t ADCDC1IS:2;
    uint32_t ADCDC1IP:3;
    uint32_t :3;
    uint32_t ADCDC2IS:2;
    uint32_t ADCDC2IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC11bits_t;
volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs"), address(0xBF8101F0)));
volatile uint32_t        IPC11CLR __attribute__((section("sfrs"),address(0xBF8101F4)));
volatile uint32_t        IPC11SET __attribute__((section("sfrs"),address(0xBF8101F8)));
volatile uint32_t        IPC11INV __attribute__((section("sfrs"),address(0xBF8101FC)));
#define IPC12 IPC12
volatile uint32_t   IPC12 __attribute__((section("sfrs"), address(0xBF810200)));
typedef union {
  struct {
    uint32_t ADCDC3IS:2;
    uint32_t ADCDC3IP:3;
    uint32_t :3;
    uint32_t ADCDC4IS:2;
    uint32_t ADCDC4IP:3;
    uint32_t :3;
    uint32_t ADCDC5IS:2;
    uint32_t ADCDC5IP:3;
    uint32_t :3;
    uint32_t ADCDC6IS:2;
    uint32_t ADCDC6IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC12bits_t;
volatile __IPC12bits_t IPC12bits __asm__ ("IPC12") __attribute__((section("sfrs"), address(0xBF810200)));
volatile uint32_t        IPC12CLR __attribute__((section("sfrs"),address(0xBF810204)));
volatile uint32_t        IPC12SET __attribute__((section("sfrs"),address(0xBF810208)));
volatile uint32_t        IPC12INV __attribute__((section("sfrs"),address(0xBF81020C)));
#define IPC13 IPC13
volatile uint32_t   IPC13 __attribute__((section("sfrs"), address(0xBF810210)));
typedef union {
  struct {
    uint32_t ADCDF1IS:2;
    uint32_t ADCDF1IP:3;
    uint32_t :3;
    uint32_t ADCDF2IS:2;
    uint32_t ADCDF2IP:3;
    uint32_t :3;
    uint32_t ADCDF3IS:2;
    uint32_t ADCDF3IP:3;
    uint32_t :3;
    uint32_t ADCDF4IS:2;
    uint32_t ADCDF4IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC13bits_t;
volatile __IPC13bits_t IPC13bits __asm__ ("IPC13") __attribute__((section("sfrs"), address(0xBF810210)));
volatile uint32_t        IPC13CLR __attribute__((section("sfrs"),address(0xBF810214)));
volatile uint32_t        IPC13SET __attribute__((section("sfrs"),address(0xBF810218)));
volatile uint32_t        IPC13INV __attribute__((section("sfrs"),address(0xBF81021C)));
#define IPC14 IPC14
volatile uint32_t   IPC14 __attribute__((section("sfrs"), address(0xBF810220)));
typedef union {
  struct {
    uint32_t ADCDF5IS:2;
    uint32_t ADCDF5IP:3;
    uint32_t :3;
    uint32_t ADCDF6IS:2;
    uint32_t ADCDF6IP:3;
    uint32_t :3;
    uint32_t ADCFLTIS:2;
    uint32_t ADCFLTIP:3;
    uint32_t :3;
    uint32_t ADCD0IS:2;
    uint32_t ADCD0IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC14bits_t;
volatile __IPC14bits_t IPC14bits __asm__ ("IPC14") __attribute__((section("sfrs"), address(0xBF810220)));
volatile uint32_t        IPC14CLR __attribute__((section("sfrs"),address(0xBF810224)));
volatile uint32_t        IPC14SET __attribute__((section("sfrs"),address(0xBF810228)));
volatile uint32_t        IPC14INV __attribute__((section("sfrs"),address(0xBF81022C)));
#define IPC15 IPC15
volatile uint32_t   IPC15 __attribute__((section("sfrs"), address(0xBF810230)));
typedef union {
  struct {
    uint32_t ADCD1IS:2;
    uint32_t ADCD1IP:3;
    uint32_t :3;
    uint32_t ADCD2IS:2;
    uint32_t ADCD2IP:3;
    uint32_t :3;
    uint32_t ADCD3IS:2;
    uint32_t ADCD3IP:3;
    uint32_t :3;
    uint32_t ADCD4IS:2;
    uint32_t ADCD4IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC15bits_t;
volatile __IPC15bits_t IPC15bits __asm__ ("IPC15") __attribute__((section("sfrs"), address(0xBF810230)));
volatile uint32_t        IPC15CLR __attribute__((section("sfrs"),address(0xBF810234)));
volatile uint32_t        IPC15SET __attribute__((section("sfrs"),address(0xBF810238)));
volatile uint32_t        IPC15INV __attribute__((section("sfrs"),address(0xBF81023C)));
#define IPC16 IPC16
volatile uint32_t   IPC16 __attribute__((section("sfrs"), address(0xBF810240)));
typedef union {
  struct {
    uint32_t ADCD5IS:2;
    uint32_t ADCD5IP:3;
    uint32_t :3;
    uint32_t ADCD6IS:2;
    uint32_t ADCD6IP:3;
    uint32_t :3;
    uint32_t ADCD7IS:2;
    uint32_t ADCD7IP:3;
    uint32_t :3;
    uint32_t ADCD8IS:2;
    uint32_t ADCD8IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC16bits_t;
volatile __IPC16bits_t IPC16bits __asm__ ("IPC16") __attribute__((section("sfrs"), address(0xBF810240)));
volatile uint32_t        IPC16CLR __attribute__((section("sfrs"),address(0xBF810244)));
volatile uint32_t        IPC16SET __attribute__((section("sfrs"),address(0xBF810248)));
volatile uint32_t        IPC16INV __attribute__((section("sfrs"),address(0xBF81024C)));
#define IPC17 IPC17
volatile uint32_t   IPC17 __attribute__((section("sfrs"), address(0xBF810250)));
typedef union {
  struct {
    uint32_t ADCD9IS:2;
    uint32_t ADCD9IP:3;
    uint32_t :3;
    uint32_t ADCD10IS:2;
    uint32_t ADCD10IP:3;
    uint32_t :3;
    uint32_t ADCD11IS:2;
    uint32_t ADCD11IP:3;
    uint32_t :3;
    uint32_t ADCD12IS:2;
    uint32_t ADCD12IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC17bits_t;
volatile __IPC17bits_t IPC17bits __asm__ ("IPC17") __attribute__((section("sfrs"), address(0xBF810250)));
volatile uint32_t        IPC17CLR __attribute__((section("sfrs"),address(0xBF810254)));
volatile uint32_t        IPC17SET __attribute__((section("sfrs"),address(0xBF810258)));
volatile uint32_t        IPC17INV __attribute__((section("sfrs"),address(0xBF81025C)));
#define IPC18 IPC18
volatile uint32_t   IPC18 __attribute__((section("sfrs"), address(0xBF810260)));
typedef union {
  struct {
    uint32_t ADCD13IS:2;
    uint32_t ADCD13IP:3;
    uint32_t :3;
    uint32_t ADCD14IS:2;
    uint32_t ADCD14IP:3;
    uint32_t :3;
    uint32_t ADCD15IS:2;
    uint32_t ADCD15IP:3;
    uint32_t :3;
    uint32_t ADCD16IS:2;
    uint32_t ADCD16IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC18bits_t;
volatile __IPC18bits_t IPC18bits __asm__ ("IPC18") __attribute__((section("sfrs"), address(0xBF810260)));
volatile uint32_t        IPC18CLR __attribute__((section("sfrs"),address(0xBF810264)));
volatile uint32_t        IPC18SET __attribute__((section("sfrs"),address(0xBF810268)));
volatile uint32_t        IPC18INV __attribute__((section("sfrs"),address(0xBF81026C)));
#define IPC19 IPC19
volatile uint32_t   IPC19 __attribute__((section("sfrs"), address(0xBF810270)));
typedef union {
  struct {
    uint32_t ADCD17IS:2;
    uint32_t ADCD17IP:3;
    uint32_t :3;
    uint32_t ADCD18IS:2;
    uint32_t ADCD18IP:3;
    uint32_t :3;
    uint32_t ADCD19IS:2;
    uint32_t ADCD19IP:3;
    uint32_t :3;
    uint32_t ADCD20IS:2;
    uint32_t ADCD20IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC19bits_t;
volatile __IPC19bits_t IPC19bits __asm__ ("IPC19") __attribute__((section("sfrs"), address(0xBF810270)));
volatile uint32_t        IPC19CLR __attribute__((section("sfrs"),address(0xBF810274)));
volatile uint32_t        IPC19SET __attribute__((section("sfrs"),address(0xBF810278)));
volatile uint32_t        IPC19INV __attribute__((section("sfrs"),address(0xBF81027C)));
#define IPC20 IPC20
volatile uint32_t   IPC20 __attribute__((section("sfrs"), address(0xBF810280)));
typedef union {
  struct {
    uint32_t ADCD21IS:2;
    uint32_t ADCD21IP:3;
    uint32_t :3;
    uint32_t ADCD22IS:2;
    uint32_t ADCD22IP:3;
    uint32_t :3;
    uint32_t ADCD23IS:2;
    uint32_t ADCD23IP:3;
    uint32_t :3;
    uint32_t ADCD24IS:2;
    uint32_t ADCD24IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC20bits_t;
volatile __IPC20bits_t IPC20bits __asm__ ("IPC20") __attribute__((section("sfrs"), address(0xBF810280)));
volatile uint32_t        IPC20CLR __attribute__((section("sfrs"),address(0xBF810284)));
volatile uint32_t        IPC20SET __attribute__((section("sfrs"),address(0xBF810288)));
volatile uint32_t        IPC20INV __attribute__((section("sfrs"),address(0xBF81028C)));
#define IPC21 IPC21
volatile uint32_t   IPC21 __attribute__((section("sfrs"), address(0xBF810290)));
typedef union {
  struct {
    uint32_t ADCD25IS:2;
    uint32_t ADCD25IP:3;
    uint32_t :3;
    uint32_t ADCD26IS:2;
    uint32_t ADCD26IP:3;
    uint32_t :3;
    uint32_t ADCD27IS:2;
    uint32_t ADCD27IP:3;
    uint32_t :3;
    uint32_t ADCD28IS:2;
    uint32_t ADCD28IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC21bits_t;
volatile __IPC21bits_t IPC21bits __asm__ ("IPC21") __attribute__((section("sfrs"), address(0xBF810290)));
volatile uint32_t        IPC21CLR __attribute__((section("sfrs"),address(0xBF810294)));
volatile uint32_t        IPC21SET __attribute__((section("sfrs"),address(0xBF810298)));
volatile uint32_t        IPC21INV __attribute__((section("sfrs"),address(0xBF81029C)));
#define IPC22 IPC22
volatile uint32_t   IPC22 __attribute__((section("sfrs"), address(0xBF8102A0)));
typedef union {
  struct {
    uint32_t ADCD29IS:2;
    uint32_t ADCD29IP:3;
    uint32_t :3;
    uint32_t ADCD30IS:2;
    uint32_t ADCD30IP:3;
    uint32_t :3;
    uint32_t ADCD31IS:2;
    uint32_t ADCD31IP:3;
    uint32_t :3;
    uint32_t ADCD32IS:2;
    uint32_t ADCD32IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC22bits_t;
volatile __IPC22bits_t IPC22bits __asm__ ("IPC22") __attribute__((section("sfrs"), address(0xBF8102A0)));
volatile uint32_t        IPC22CLR __attribute__((section("sfrs"),address(0xBF8102A4)));
volatile uint32_t        IPC22SET __attribute__((section("sfrs"),address(0xBF8102A8)));
volatile uint32_t        IPC22INV __attribute__((section("sfrs"),address(0xBF8102AC)));
#define IPC23 IPC23
volatile uint32_t   IPC23 __attribute__((section("sfrs"), address(0xBF8102B0)));
typedef union {
  struct {
    uint32_t ADCD33IS:2;
    uint32_t ADCD33IP:3;
    uint32_t :3;
    uint32_t ADCD34IS:2;
    uint32_t ADCD34IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC23bits_t;
volatile __IPC23bits_t IPC23bits __asm__ ("IPC23") __attribute__((section("sfrs"), address(0xBF8102B0)));
volatile uint32_t        IPC23CLR __attribute__((section("sfrs"),address(0xBF8102B4)));
volatile uint32_t        IPC23SET __attribute__((section("sfrs"),address(0xBF8102B8)));
volatile uint32_t        IPC23INV __attribute__((section("sfrs"),address(0xBF8102BC)));
#define IPC25 IPC25
volatile uint32_t   IPC25 __attribute__((section("sfrs"), address(0xBF8102D0)));
typedef union {
  struct {
    uint32_t :16;
    uint32_t ADCD43IS:2;
    uint32_t ADCD43IP:3;
    uint32_t :3;
    uint32_t ADCD44IS:2;
    uint32_t ADCD44IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC25bits_t;
volatile __IPC25bits_t IPC25bits __asm__ ("IPC25") __attribute__((section("sfrs"), address(0xBF8102D0)));
volatile uint32_t        IPC25CLR __attribute__((section("sfrs"),address(0xBF8102D4)));
volatile uint32_t        IPC25SET __attribute__((section("sfrs"),address(0xBF8102D8)));
volatile uint32_t        IPC25INV __attribute__((section("sfrs"),address(0xBF8102DC)));
#define IPC26 IPC26
volatile uint32_t   IPC26 __attribute__((section("sfrs"), address(0xBF8102E0)));
typedef union {
  struct {
    uint32_t CPCIS:2;
    uint32_t CPCIP:3;
    uint32_t :3;
    uint32_t CFDCIS:2;
    uint32_t CFDCIP:3;
    uint32_t :3;
    uint32_t SBIS:2;
    uint32_t SBIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC26bits_t;
volatile __IPC26bits_t IPC26bits __asm__ ("IPC26") __attribute__((section("sfrs"), address(0xBF8102E0)));
volatile uint32_t        IPC26CLR __attribute__((section("sfrs"),address(0xBF8102E4)));
volatile uint32_t        IPC26SET __attribute__((section("sfrs"),address(0xBF8102E8)));
volatile uint32_t        IPC26INV __attribute__((section("sfrs"),address(0xBF8102EC)));
#define IPC27 IPC27
volatile uint32_t   IPC27 __attribute__((section("sfrs"), address(0xBF8102F0)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SPI1EIS:2;
    uint32_t SPI1EIP:3;
    uint32_t :3;
    uint32_t SPI1RXIS:2;
    uint32_t SPI1RXIP:3;
    uint32_t :3;
    uint32_t SPI1TXIS:2;
    uint32_t SPI1TXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC27bits_t;
volatile __IPC27bits_t IPC27bits __asm__ ("IPC27") __attribute__((section("sfrs"), address(0xBF8102F0)));
volatile uint32_t        IPC27CLR __attribute__((section("sfrs"),address(0xBF8102F4)));
volatile uint32_t        IPC27SET __attribute__((section("sfrs"),address(0xBF8102F8)));
volatile uint32_t        IPC27INV __attribute__((section("sfrs"),address(0xBF8102FC)));
#define IPC28 IPC28
volatile uint32_t   IPC28 __attribute__((section("sfrs"), address(0xBF810300)));
typedef union {
  struct {
    uint32_t U1EIS:2;
    uint32_t U1EIP:3;
    uint32_t :3;
    uint32_t U1RXIS:2;
    uint32_t U1RXIP:3;
    uint32_t :3;
    uint32_t U1TXIS:2;
    uint32_t U1TXIP:3;
    uint32_t :3;
    uint32_t I2C1BIS:2;
    uint32_t I2C1BIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC28bits_t;
volatile __IPC28bits_t IPC28bits __asm__ ("IPC28") __attribute__((section("sfrs"), address(0xBF810300)));
volatile uint32_t        IPC28CLR __attribute__((section("sfrs"),address(0xBF810304)));
volatile uint32_t        IPC28SET __attribute__((section("sfrs"),address(0xBF810308)));
volatile uint32_t        IPC28INV __attribute__((section("sfrs"),address(0xBF81030C)));
#define IPC29 IPC29
volatile uint32_t   IPC29 __attribute__((section("sfrs"), address(0xBF810310)));
typedef union {
  struct {
    uint32_t I2C1SIS:2;
    uint32_t I2C1SIP:3;
    uint32_t :3;
    uint32_t I2C1MIS:2;
    uint32_t I2C1MIP:3;
    uint32_t :3;
    uint32_t CNAIS:2;
    uint32_t CNAIP:3;
    uint32_t :3;
    uint32_t CNBIS:2;
    uint32_t CNBIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC29bits_t;
volatile __IPC29bits_t IPC29bits __asm__ ("IPC29") __attribute__((section("sfrs"), address(0xBF810310)));
volatile uint32_t        IPC29CLR __attribute__((section("sfrs"),address(0xBF810314)));
volatile uint32_t        IPC29SET __attribute__((section("sfrs"),address(0xBF810318)));
volatile uint32_t        IPC29INV __attribute__((section("sfrs"),address(0xBF81031C)));
#define IPC30 IPC30
volatile uint32_t   IPC30 __attribute__((section("sfrs"), address(0xBF810320)));
typedef union {
  struct {
    uint32_t CNCIS:2;
    uint32_t CNCIP:3;
    uint32_t :3;
    uint32_t CNDIS:2;
    uint32_t CNDIP:3;
    uint32_t :3;
    uint32_t CNEIS:2;
    uint32_t CNEIP:3;
    uint32_t :3;
    uint32_t CNFIS:2;
    uint32_t CNFIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC30bits_t;
volatile __IPC30bits_t IPC30bits __asm__ ("IPC30") __attribute__((section("sfrs"), address(0xBF810320)));
volatile uint32_t        IPC30CLR __attribute__((section("sfrs"),address(0xBF810324)));
volatile uint32_t        IPC30SET __attribute__((section("sfrs"),address(0xBF810328)));
volatile uint32_t        IPC30INV __attribute__((section("sfrs"),address(0xBF81032C)));
#define IPC31 IPC31
volatile uint32_t   IPC31 __attribute__((section("sfrs"), address(0xBF810330)));
typedef union {
  struct {
    uint32_t CNGIS:2;
    uint32_t CNGIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC31bits_t;
volatile __IPC31bits_t IPC31bits __asm__ ("IPC31") __attribute__((section("sfrs"), address(0xBF810330)));
volatile uint32_t        IPC31CLR __attribute__((section("sfrs"),address(0xBF810334)));
volatile uint32_t        IPC31SET __attribute__((section("sfrs"),address(0xBF810338)));
volatile uint32_t        IPC31INV __attribute__((section("sfrs"),address(0xBF81033C)));
#define IPC32 IPC32
volatile uint32_t   IPC32 __attribute__((section("sfrs"), address(0xBF810340)));
typedef union {
  struct {
    uint32_t PMPIS:2;
    uint32_t PMPIP:3;
    uint32_t :3;
    uint32_t PMPEIS:2;
    uint32_t PMPEIP:3;
    uint32_t :3;
    uint32_t CMP1IS:2;
    uint32_t CMP1IP:3;
    uint32_t :3;
    uint32_t CMP2IS:2;
    uint32_t CMP2IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC32bits_t;
volatile __IPC32bits_t IPC32bits __asm__ ("IPC32") __attribute__((section("sfrs"), address(0xBF810340)));
volatile uint32_t        IPC32CLR __attribute__((section("sfrs"),address(0xBF810344)));
volatile uint32_t        IPC32SET __attribute__((section("sfrs"),address(0xBF810348)));
volatile uint32_t        IPC32INV __attribute__((section("sfrs"),address(0xBF81034C)));
#define IPC33 IPC33
volatile uint32_t   IPC33 __attribute__((section("sfrs"), address(0xBF810350)));
typedef union {
  struct {
    uint32_t USBIS:2;
    uint32_t USBIP:3;
    uint32_t :3;
    uint32_t USBDMAIS:2;
    uint32_t USBDMAIP:3;
    uint32_t :3;
    uint32_t DMA0IS:2;
    uint32_t DMA0IP:3;
    uint32_t :3;
    uint32_t DMA1IS:2;
    uint32_t DMA1IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC33bits_t;
volatile __IPC33bits_t IPC33bits __asm__ ("IPC33") __attribute__((section("sfrs"), address(0xBF810350)));
volatile uint32_t        IPC33CLR __attribute__((section("sfrs"),address(0xBF810354)));
volatile uint32_t        IPC33SET __attribute__((section("sfrs"),address(0xBF810358)));
volatile uint32_t        IPC33INV __attribute__((section("sfrs"),address(0xBF81035C)));
#define IPC34 IPC34
volatile uint32_t   IPC34 __attribute__((section("sfrs"), address(0xBF810360)));
typedef union {
  struct {
    uint32_t DMA2IS:2;
    uint32_t DMA2IP:3;
    uint32_t :3;
    uint32_t DMA3IS:2;
    uint32_t DMA3IP:3;
    uint32_t :3;
    uint32_t DMA4IS:2;
    uint32_t DMA4IP:3;
    uint32_t :3;
    uint32_t DMA5IS:2;
    uint32_t DMA5IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC34bits_t;
volatile __IPC34bits_t IPC34bits __asm__ ("IPC34") __attribute__((section("sfrs"), address(0xBF810360)));
volatile uint32_t        IPC34CLR __attribute__((section("sfrs"),address(0xBF810364)));
volatile uint32_t        IPC34SET __attribute__((section("sfrs"),address(0xBF810368)));
volatile uint32_t        IPC34INV __attribute__((section("sfrs"),address(0xBF81036C)));
#define IPC35 IPC35
volatile uint32_t   IPC35 __attribute__((section("sfrs"), address(0xBF810370)));
typedef union {
  struct {
    uint32_t DMA6IS:2;
    uint32_t DMA6IP:3;
    uint32_t :3;
    uint32_t DMA7IS:2;
    uint32_t DMA7IP:3;
    uint32_t :3;
    uint32_t SPI2EIS:2;
    uint32_t SPI2EIP:3;
    uint32_t :3;
    uint32_t SPI2RXIS:2;
    uint32_t SPI2RXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC35bits_t;
volatile __IPC35bits_t IPC35bits __asm__ ("IPC35") __attribute__((section("sfrs"), address(0xBF810370)));
volatile uint32_t        IPC35CLR __attribute__((section("sfrs"),address(0xBF810374)));
volatile uint32_t        IPC35SET __attribute__((section("sfrs"),address(0xBF810378)));
volatile uint32_t        IPC35INV __attribute__((section("sfrs"),address(0xBF81037C)));
#define IPC36 IPC36
volatile uint32_t   IPC36 __attribute__((section("sfrs"), address(0xBF810380)));
typedef union {
  struct {
    uint32_t SPI2TXIS:2;
    uint32_t SPI2TXIP:3;
    uint32_t :3;
    uint32_t U2EIS:2;
    uint32_t U2EIP:3;
    uint32_t :3;
    uint32_t U2RXIS:2;
    uint32_t U2RXIP:3;
    uint32_t :3;
    uint32_t U2TXIS:2;
    uint32_t U2TXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC36bits_t;
volatile __IPC36bits_t IPC36bits __asm__ ("IPC36") __attribute__((section("sfrs"), address(0xBF810380)));
volatile uint32_t        IPC36CLR __attribute__((section("sfrs"),address(0xBF810384)));
volatile uint32_t        IPC36SET __attribute__((section("sfrs"),address(0xBF810388)));
volatile uint32_t        IPC36INV __attribute__((section("sfrs"),address(0xBF81038C)));
#define IPC37 IPC37
volatile uint32_t   IPC37 __attribute__((section("sfrs"), address(0xBF810390)));
typedef union {
  struct {
    uint32_t I2C2BIS:2;
    uint32_t I2C2BIP:3;
    uint32_t :3;
    uint32_t I2C2SIS:2;
    uint32_t I2C2SIP:3;
    uint32_t :3;
    uint32_t I2C2MIS:2;
    uint32_t I2C2MIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC37bits_t;
volatile __IPC37bits_t IPC37bits __asm__ ("IPC37") __attribute__((section("sfrs"), address(0xBF810390)));
volatile uint32_t        IPC37CLR __attribute__((section("sfrs"),address(0xBF810394)));
volatile uint32_t        IPC37SET __attribute__((section("sfrs"),address(0xBF810398)));
volatile uint32_t        IPC37INV __attribute__((section("sfrs"),address(0xBF81039C)));
#define IPC38 IPC38
volatile uint32_t   IPC38 __attribute__((section("sfrs"), address(0xBF8103A0)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t ETHIS:2;
    uint32_t ETHIP:3;
    uint32_t :3;
    uint32_t SPI3EIS:2;
    uint32_t SPI3EIP:3;
    uint32_t :3;
    uint32_t SPI3RXIS:2;
    uint32_t SPI3RXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC38bits_t;
volatile __IPC38bits_t IPC38bits __asm__ ("IPC38") __attribute__((section("sfrs"), address(0xBF8103A0)));
volatile uint32_t        IPC38CLR __attribute__((section("sfrs"),address(0xBF8103A4)));
volatile uint32_t        IPC38SET __attribute__((section("sfrs"),address(0xBF8103A8)));
volatile uint32_t        IPC38INV __attribute__((section("sfrs"),address(0xBF8103AC)));
#define IPC39 IPC39
volatile uint32_t   IPC39 __attribute__((section("sfrs"), address(0xBF8103B0)));
typedef union {
  struct {
    uint32_t SPI3TXIS:2;
    uint32_t SPI3TXIP:3;
    uint32_t :3;
    uint32_t U3EIS:2;
    uint32_t U3EIP:3;
    uint32_t :3;
    uint32_t U3RXIS:2;
    uint32_t U3RXIP:3;
    uint32_t :3;
    uint32_t U3TXIS:2;
    uint32_t U3TXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC39bits_t;
volatile __IPC39bits_t IPC39bits __asm__ ("IPC39") __attribute__((section("sfrs"), address(0xBF8103B0)));
volatile uint32_t        IPC39CLR __attribute__((section("sfrs"),address(0xBF8103B4)));
volatile uint32_t        IPC39SET __attribute__((section("sfrs"),address(0xBF8103B8)));
volatile uint32_t        IPC39INV __attribute__((section("sfrs"),address(0xBF8103BC)));
#define IPC40 IPC40
volatile uint32_t   IPC40 __attribute__((section("sfrs"), address(0xBF8103C0)));
typedef union {
  struct {
    uint32_t I2C3BIS:2;
    uint32_t I2C3BIP:3;
    uint32_t :3;
    uint32_t I2C3SIS:2;
    uint32_t I2C3SIP:3;
    uint32_t :3;
    uint32_t I2C3MIS:2;
    uint32_t I2C3MIP:3;
    uint32_t :3;
    uint32_t SPI4EIS:2;
    uint32_t SPI4EIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC40bits_t;
volatile __IPC40bits_t IPC40bits __asm__ ("IPC40") __attribute__((section("sfrs"), address(0xBF8103C0)));
volatile uint32_t        IPC40CLR __attribute__((section("sfrs"),address(0xBF8103C4)));
volatile uint32_t        IPC40SET __attribute__((section("sfrs"),address(0xBF8103C8)));
volatile uint32_t        IPC40INV __attribute__((section("sfrs"),address(0xBF8103CC)));
#define IPC41 IPC41
volatile uint32_t   IPC41 __attribute__((section("sfrs"), address(0xBF8103D0)));
typedef union {
  struct {
    uint32_t SPI4RXIS:2;
    uint32_t SPI4RXIP:3;
    uint32_t :3;
    uint32_t SPI4TXIS:2;
    uint32_t SPI4TXIP:3;
    uint32_t :3;
    uint32_t RTCCIS:2;
    uint32_t RTCCIP:3;
    uint32_t :3;
    uint32_t FCEIS:2;
    uint32_t FCEIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC41bits_t;
volatile __IPC41bits_t IPC41bits __asm__ ("IPC41") __attribute__((section("sfrs"), address(0xBF8103D0)));
volatile uint32_t        IPC41CLR __attribute__((section("sfrs"),address(0xBF8103D4)));
volatile uint32_t        IPC41SET __attribute__((section("sfrs"),address(0xBF8103D8)));
volatile uint32_t        IPC41INV __attribute__((section("sfrs"),address(0xBF8103DC)));
#define IPC42 IPC42
volatile uint32_t   IPC42 __attribute__((section("sfrs"), address(0xBF8103E0)));
typedef union {
  struct {
    uint32_t PREIS:2;
    uint32_t PREIP:3;
    uint32_t :3;
    uint32_t SQI1IS:2;
    uint32_t SQI1IP:3;
    uint32_t :3;
    uint32_t U4EIS:2;
    uint32_t U4EIP:3;
    uint32_t :3;
    uint32_t U4RXIS:2;
    uint32_t U4RXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC42bits_t;
volatile __IPC42bits_t IPC42bits __asm__ ("IPC42") __attribute__((section("sfrs"), address(0xBF8103E0)));
volatile uint32_t        IPC42CLR __attribute__((section("sfrs"),address(0xBF8103E4)));
volatile uint32_t        IPC42SET __attribute__((section("sfrs"),address(0xBF8103E8)));
volatile uint32_t        IPC42INV __attribute__((section("sfrs"),address(0xBF8103EC)));
#define IPC43 IPC43
volatile uint32_t   IPC43 __attribute__((section("sfrs"), address(0xBF8103F0)));
typedef union {
  struct {
    uint32_t U4TXIS:2;
    uint32_t U4TXIP:3;
    uint32_t :3;
    uint32_t I2C4BIS:2;
    uint32_t I2C4BIP:3;
    uint32_t :3;
    uint32_t I2C4SIS:2;
    uint32_t I2C4SIP:3;
    uint32_t :3;
    uint32_t I2C4MIS:2;
    uint32_t I2C4MIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC43bits_t;
volatile __IPC43bits_t IPC43bits __asm__ ("IPC43") __attribute__((section("sfrs"), address(0xBF8103F0)));
volatile uint32_t        IPC43CLR __attribute__((section("sfrs"),address(0xBF8103F4)));
volatile uint32_t        IPC43SET __attribute__((section("sfrs"),address(0xBF8103F8)));
volatile uint32_t        IPC43INV __attribute__((section("sfrs"),address(0xBF8103FC)));
#define IPC44 IPC44
volatile uint32_t   IPC44 __attribute__((section("sfrs"), address(0xBF810400)));
typedef union {
  struct {
    uint32_t SPI5EIS:2;
    uint32_t SPI5EIP:3;
    uint32_t :3;
    uint32_t SPI5RXIS:2;
    uint32_t SPI5RXIP:3;
    uint32_t :3;
    uint32_t SPI5TXIS:2;
    uint32_t SPI5TXIP:3;
    uint32_t :3;
    uint32_t U5EIS:2;
    uint32_t U5EIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC44bits_t;
volatile __IPC44bits_t IPC44bits __asm__ ("IPC44") __attribute__((section("sfrs"), address(0xBF810400)));
volatile uint32_t        IPC44CLR __attribute__((section("sfrs"),address(0xBF810404)));
volatile uint32_t        IPC44SET __attribute__((section("sfrs"),address(0xBF810408)));
volatile uint32_t        IPC44INV __attribute__((section("sfrs"),address(0xBF81040C)));
#define IPC45 IPC45
volatile uint32_t   IPC45 __attribute__((section("sfrs"), address(0xBF810410)));
typedef union {
  struct {
    uint32_t U5RXIS:2;
    uint32_t U5RXIP:3;
    uint32_t :3;
    uint32_t U5TXIS:2;
    uint32_t U5TXIP:3;
    uint32_t :3;
    uint32_t I2C5BIS:2;
    uint32_t I2C5BIP:3;
    uint32_t :3;
    uint32_t I2C5SIS:2;
    uint32_t I2C5SIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC45bits_t;
volatile __IPC45bits_t IPC45bits __asm__ ("IPC45") __attribute__((section("sfrs"), address(0xBF810410)));
volatile uint32_t        IPC45CLR __attribute__((section("sfrs"),address(0xBF810414)));
volatile uint32_t        IPC45SET __attribute__((section("sfrs"),address(0xBF810418)));
volatile uint32_t        IPC45INV __attribute__((section("sfrs"),address(0xBF81041C)));
#define IPC46 IPC46
volatile uint32_t   IPC46 __attribute__((section("sfrs"), address(0xBF810420)));
typedef union {
  struct {
    uint32_t I2C5MIS:2;
    uint32_t I2C5MIP:3;
    uint32_t :3;
    uint32_t SPI6EIS:2;
    uint32_t SPI6EIP:3;
    uint32_t :3;
    uint32_t SPI6RXIS:2;
    uint32_t SPI6RXIP:3;
    uint32_t :3;
    uint32_t SPI6TXIS:2;
    uint32_t SPI6TXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC46bits_t;
volatile __IPC46bits_t IPC46bits __asm__ ("IPC46") __attribute__((section("sfrs"), address(0xBF810420)));
volatile uint32_t        IPC46CLR __attribute__((section("sfrs"),address(0xBF810424)));
volatile uint32_t        IPC46SET __attribute__((section("sfrs"),address(0xBF810428)));
volatile uint32_t        IPC46INV __attribute__((section("sfrs"),address(0xBF81042C)));
#define IPC47 IPC47
volatile uint32_t   IPC47 __attribute__((section("sfrs"), address(0xBF810430)));
typedef union {
  struct {
    uint32_t U6EIS:2;
    uint32_t U6EIP:3;
    uint32_t :3;
    uint32_t U6RXIS:2;
    uint32_t U6RXIP:3;
    uint32_t :3;
    uint32_t U6TXIS:2;
    uint32_t U6TXIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC47bits_t;
volatile __IPC47bits_t IPC47bits __asm__ ("IPC47") __attribute__((section("sfrs"), address(0xBF810430)));
volatile uint32_t        IPC47CLR __attribute__((section("sfrs"),address(0xBF810434)));
volatile uint32_t        IPC47SET __attribute__((section("sfrs"),address(0xBF810438)));
volatile uint32_t        IPC47INV __attribute__((section("sfrs"),address(0xBF81043C)));
#define IPC48 IPC48
volatile uint32_t   IPC48 __attribute__((section("sfrs"), address(0xBF810440)));
typedef union {
  struct {
    uint32_t ADCEOSIS:2;
    uint32_t ADCEOSIP:3;
    uint32_t :3;
    uint32_t ADCARDYIS:2;
    uint32_t ADCARDYIP:3;
    uint32_t :3;
    uint32_t ADCURDYIS:2;
    uint32_t ADCURDYIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC48bits_t;
volatile __IPC48bits_t IPC48bits __asm__ ("IPC48") __attribute__((section("sfrs"), address(0xBF810440)));
volatile uint32_t        IPC48CLR __attribute__((section("sfrs"),address(0xBF810444)));
volatile uint32_t        IPC48SET __attribute__((section("sfrs"),address(0xBF810448)));
volatile uint32_t        IPC48INV __attribute__((section("sfrs"),address(0xBF81044C)));
#define IPC49 IPC49
volatile uint32_t   IPC49 __attribute__((section("sfrs"), address(0xBF810450)));
typedef union {
  struct {
    uint32_t ADCGRPIS:2;
    uint32_t ADCGRPIP:3;
    uint32_t :11;
    uint32_t ADC0EIS:2;
    uint32_t ADC0EIP:3;
    uint32_t :3;
    uint32_t ADC1EIS:2;
    uint32_t ADC1EIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC49bits_t;
volatile __IPC49bits_t IPC49bits __asm__ ("IPC49") __attribute__((section("sfrs"), address(0xBF810450)));
volatile uint32_t        IPC49CLR __attribute__((section("sfrs"),address(0xBF810454)));
volatile uint32_t        IPC49SET __attribute__((section("sfrs"),address(0xBF810458)));
volatile uint32_t        IPC49INV __attribute__((section("sfrs"),address(0xBF81045C)));
#define IPC50 IPC50
volatile uint32_t   IPC50 __attribute__((section("sfrs"), address(0xBF810460)));
typedef union {
  struct {
    uint32_t ADC2EIS:2;
    uint32_t ADC2EIP:3;
    uint32_t :3;
    uint32_t ADC3EIS:2;
    uint32_t ADC3EIP:3;
    uint32_t :3;
    uint32_t ADC4EIS:2;
    uint32_t ADC4EIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC50bits_t;
volatile __IPC50bits_t IPC50bits __asm__ ("IPC50") __attribute__((section("sfrs"), address(0xBF810460)));
volatile uint32_t        IPC50CLR __attribute__((section("sfrs"),address(0xBF810464)));
volatile uint32_t        IPC50SET __attribute__((section("sfrs"),address(0xBF810468)));
volatile uint32_t        IPC50INV __attribute__((section("sfrs"),address(0xBF81046C)));
#define IPC51 IPC51
volatile uint32_t   IPC51 __attribute__((section("sfrs"), address(0xBF810470)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t ADC7EIS:2;
    uint32_t ADC7EIP:3;
    uint32_t :3;
    uint32_t ADC0WIS:2;
    uint32_t ADC0WIP:3;
    uint32_t :3;
    uint32_t ADC1WIS:2;
    uint32_t ADC1WIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC51bits_t;
volatile __IPC51bits_t IPC51bits __asm__ ("IPC51") __attribute__((section("sfrs"), address(0xBF810470)));
volatile uint32_t        IPC51CLR __attribute__((section("sfrs"),address(0xBF810474)));
volatile uint32_t        IPC51SET __attribute__((section("sfrs"),address(0xBF810478)));
volatile uint32_t        IPC51INV __attribute__((section("sfrs"),address(0xBF81047C)));
#define IPC52 IPC52
volatile uint32_t   IPC52 __attribute__((section("sfrs"), address(0xBF810480)));
typedef union {
  struct {
    uint32_t ADC2WIS:2;
    uint32_t ADC2WIP:3;
    uint32_t :3;
    uint32_t ADC3WIS:2;
    uint32_t ADC3WIP:3;
    uint32_t :3;
    uint32_t ADC4WIS:2;
    uint32_t ADC4WIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC52bits_t;
volatile __IPC52bits_t IPC52bits __asm__ ("IPC52") __attribute__((section("sfrs"), address(0xBF810480)));
volatile uint32_t        IPC52CLR __attribute__((section("sfrs"),address(0xBF810484)));
volatile uint32_t        IPC52SET __attribute__((section("sfrs"),address(0xBF810488)));
volatile uint32_t        IPC52INV __attribute__((section("sfrs"),address(0xBF81048C)));
#define IPC53 IPC53
volatile uint32_t   IPC53 __attribute__((section("sfrs"), address(0xBF810490)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t ADC7WIS:2;
    uint32_t ADC7WIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC53bits_t;
volatile __IPC53bits_t IPC53bits __asm__ ("IPC53") __attribute__((section("sfrs"), address(0xBF810490)));
volatile uint32_t        IPC53CLR __attribute__((section("sfrs"),address(0xBF810494)));
volatile uint32_t        IPC53SET __attribute__((section("sfrs"),address(0xBF810498)));
volatile uint32_t        IPC53INV __attribute__((section("sfrs"),address(0xBF81049C)));
#define OFF000 OFF000
volatile uint32_t   OFF000 __attribute__((section("sfrs"), address(0xBF810540)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF000bits_t;
volatile __OFF000bits_t OFF000bits __asm__ ("OFF000") __attribute__((section("sfrs"), address(0xBF810540)));
#define OFF001 OFF001
volatile uint32_t   OFF001 __attribute__((section("sfrs"), address(0xBF810544)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF001bits_t;
volatile __OFF001bits_t OFF001bits __asm__ ("OFF001") __attribute__((section("sfrs"), address(0xBF810544)));
#define OFF002 OFF002
volatile uint32_t   OFF002 __attribute__((section("sfrs"), address(0xBF810548)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF002bits_t;
volatile __OFF002bits_t OFF002bits __asm__ ("OFF002") __attribute__((section("sfrs"), address(0xBF810548)));
#define OFF003 OFF003
volatile uint32_t   OFF003 __attribute__((section("sfrs"), address(0xBF81054C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF003bits_t;
volatile __OFF003bits_t OFF003bits __asm__ ("OFF003") __attribute__((section("sfrs"), address(0xBF81054C)));
#define OFF004 OFF004
volatile uint32_t   OFF004 __attribute__((section("sfrs"), address(0xBF810550)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF004bits_t;
volatile __OFF004bits_t OFF004bits __asm__ ("OFF004") __attribute__((section("sfrs"), address(0xBF810550)));
#define OFF005 OFF005
volatile uint32_t   OFF005 __attribute__((section("sfrs"), address(0xBF810554)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF005bits_t;
volatile __OFF005bits_t OFF005bits __asm__ ("OFF005") __attribute__((section("sfrs"), address(0xBF810554)));
#define OFF006 OFF006
volatile uint32_t   OFF006 __attribute__((section("sfrs"), address(0xBF810558)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF006bits_t;
volatile __OFF006bits_t OFF006bits __asm__ ("OFF006") __attribute__((section("sfrs"), address(0xBF810558)));
#define OFF007 OFF007
volatile uint32_t   OFF007 __attribute__((section("sfrs"), address(0xBF81055C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF007bits_t;
volatile __OFF007bits_t OFF007bits __asm__ ("OFF007") __attribute__((section("sfrs"), address(0xBF81055C)));
#define OFF008 OFF008
volatile uint32_t   OFF008 __attribute__((section("sfrs"), address(0xBF810560)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF008bits_t;
volatile __OFF008bits_t OFF008bits __asm__ ("OFF008") __attribute__((section("sfrs"), address(0xBF810560)));
#define OFF009 OFF009
volatile uint32_t   OFF009 __attribute__((section("sfrs"), address(0xBF810564)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF009bits_t;
volatile __OFF009bits_t OFF009bits __asm__ ("OFF009") __attribute__((section("sfrs"), address(0xBF810564)));
#define OFF010 OFF010
volatile uint32_t   OFF010 __attribute__((section("sfrs"), address(0xBF810568)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF010bits_t;
volatile __OFF010bits_t OFF010bits __asm__ ("OFF010") __attribute__((section("sfrs"), address(0xBF810568)));
#define OFF011 OFF011
volatile uint32_t   OFF011 __attribute__((section("sfrs"), address(0xBF81056C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF011bits_t;
volatile __OFF011bits_t OFF011bits __asm__ ("OFF011") __attribute__((section("sfrs"), address(0xBF81056C)));
#define OFF012 OFF012
volatile uint32_t   OFF012 __attribute__((section("sfrs"), address(0xBF810570)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF012bits_t;
volatile __OFF012bits_t OFF012bits __asm__ ("OFF012") __attribute__((section("sfrs"), address(0xBF810570)));
#define OFF013 OFF013
volatile uint32_t   OFF013 __attribute__((section("sfrs"), address(0xBF810574)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF013bits_t;
volatile __OFF013bits_t OFF013bits __asm__ ("OFF013") __attribute__((section("sfrs"), address(0xBF810574)));
#define OFF014 OFF014
volatile uint32_t   OFF014 __attribute__((section("sfrs"), address(0xBF810578)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF014bits_t;
volatile __OFF014bits_t OFF014bits __asm__ ("OFF014") __attribute__((section("sfrs"), address(0xBF810578)));
#define OFF015 OFF015
volatile uint32_t   OFF015 __attribute__((section("sfrs"), address(0xBF81057C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF015bits_t;
volatile __OFF015bits_t OFF015bits __asm__ ("OFF015") __attribute__((section("sfrs"), address(0xBF81057C)));
#define OFF016 OFF016
volatile uint32_t   OFF016 __attribute__((section("sfrs"), address(0xBF810580)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF016bits_t;
volatile __OFF016bits_t OFF016bits __asm__ ("OFF016") __attribute__((section("sfrs"), address(0xBF810580)));
#define OFF017 OFF017
volatile uint32_t   OFF017 __attribute__((section("sfrs"), address(0xBF810584)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF017bits_t;
volatile __OFF017bits_t OFF017bits __asm__ ("OFF017") __attribute__((section("sfrs"), address(0xBF810584)));
#define OFF018 OFF018
volatile uint32_t   OFF018 __attribute__((section("sfrs"), address(0xBF810588)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF018bits_t;
volatile __OFF018bits_t OFF018bits __asm__ ("OFF018") __attribute__((section("sfrs"), address(0xBF810588)));
#define OFF019 OFF019
volatile uint32_t   OFF019 __attribute__((section("sfrs"), address(0xBF81058C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF019bits_t;
volatile __OFF019bits_t OFF019bits __asm__ ("OFF019") __attribute__((section("sfrs"), address(0xBF81058C)));
#define OFF020 OFF020
volatile uint32_t   OFF020 __attribute__((section("sfrs"), address(0xBF810590)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF020bits_t;
volatile __OFF020bits_t OFF020bits __asm__ ("OFF020") __attribute__((section("sfrs"), address(0xBF810590)));
#define OFF021 OFF021
volatile uint32_t   OFF021 __attribute__((section("sfrs"), address(0xBF810594)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF021bits_t;
volatile __OFF021bits_t OFF021bits __asm__ ("OFF021") __attribute__((section("sfrs"), address(0xBF810594)));
#define OFF022 OFF022
volatile uint32_t   OFF022 __attribute__((section("sfrs"), address(0xBF810598)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF022bits_t;
volatile __OFF022bits_t OFF022bits __asm__ ("OFF022") __attribute__((section("sfrs"), address(0xBF810598)));
#define OFF023 OFF023
volatile uint32_t   OFF023 __attribute__((section("sfrs"), address(0xBF81059C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF023bits_t;
volatile __OFF023bits_t OFF023bits __asm__ ("OFF023") __attribute__((section("sfrs"), address(0xBF81059C)));
#define OFF024 OFF024
volatile uint32_t   OFF024 __attribute__((section("sfrs"), address(0xBF8105A0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF024bits_t;
volatile __OFF024bits_t OFF024bits __asm__ ("OFF024") __attribute__((section("sfrs"), address(0xBF8105A0)));
#define OFF025 OFF025
volatile uint32_t   OFF025 __attribute__((section("sfrs"), address(0xBF8105A4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF025bits_t;
volatile __OFF025bits_t OFF025bits __asm__ ("OFF025") __attribute__((section("sfrs"), address(0xBF8105A4)));
#define OFF026 OFF026
volatile uint32_t   OFF026 __attribute__((section("sfrs"), address(0xBF8105A8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF026bits_t;
volatile __OFF026bits_t OFF026bits __asm__ ("OFF026") __attribute__((section("sfrs"), address(0xBF8105A8)));
#define OFF027 OFF027
volatile uint32_t   OFF027 __attribute__((section("sfrs"), address(0xBF8105AC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF027bits_t;
volatile __OFF027bits_t OFF027bits __asm__ ("OFF027") __attribute__((section("sfrs"), address(0xBF8105AC)));
#define OFF028 OFF028
volatile uint32_t   OFF028 __attribute__((section("sfrs"), address(0xBF8105B0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF028bits_t;
volatile __OFF028bits_t OFF028bits __asm__ ("OFF028") __attribute__((section("sfrs"), address(0xBF8105B0)));
#define OFF029 OFF029
volatile uint32_t   OFF029 __attribute__((section("sfrs"), address(0xBF8105B4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF029bits_t;
volatile __OFF029bits_t OFF029bits __asm__ ("OFF029") __attribute__((section("sfrs"), address(0xBF8105B4)));
#define OFF030 OFF030
volatile uint32_t   OFF030 __attribute__((section("sfrs"), address(0xBF8105B8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF030bits_t;
volatile __OFF030bits_t OFF030bits __asm__ ("OFF030") __attribute__((section("sfrs"), address(0xBF8105B8)));
#define OFF031 OFF031
volatile uint32_t   OFF031 __attribute__((section("sfrs"), address(0xBF8105BC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF031bits_t;
volatile __OFF031bits_t OFF031bits __asm__ ("OFF031") __attribute__((section("sfrs"), address(0xBF8105BC)));
#define OFF032 OFF032
volatile uint32_t   OFF032 __attribute__((section("sfrs"), address(0xBF8105C0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF032bits_t;
volatile __OFF032bits_t OFF032bits __asm__ ("OFF032") __attribute__((section("sfrs"), address(0xBF8105C0)));
#define OFF033 OFF033
volatile uint32_t   OFF033 __attribute__((section("sfrs"), address(0xBF8105C4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF033bits_t;
volatile __OFF033bits_t OFF033bits __asm__ ("OFF033") __attribute__((section("sfrs"), address(0xBF8105C4)));
#define OFF034 OFF034
volatile uint32_t   OFF034 __attribute__((section("sfrs"), address(0xBF8105C8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF034bits_t;
volatile __OFF034bits_t OFF034bits __asm__ ("OFF034") __attribute__((section("sfrs"), address(0xBF8105C8)));
#define OFF035 OFF035
volatile uint32_t   OFF035 __attribute__((section("sfrs"), address(0xBF8105CC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF035bits_t;
volatile __OFF035bits_t OFF035bits __asm__ ("OFF035") __attribute__((section("sfrs"), address(0xBF8105CC)));
#define OFF036 OFF036
volatile uint32_t   OFF036 __attribute__((section("sfrs"), address(0xBF8105D0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF036bits_t;
volatile __OFF036bits_t OFF036bits __asm__ ("OFF036") __attribute__((section("sfrs"), address(0xBF8105D0)));
#define OFF037 OFF037
volatile uint32_t   OFF037 __attribute__((section("sfrs"), address(0xBF8105D4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF037bits_t;
volatile __OFF037bits_t OFF037bits __asm__ ("OFF037") __attribute__((section("sfrs"), address(0xBF8105D4)));
#define OFF038 OFF038
volatile uint32_t   OFF038 __attribute__((section("sfrs"), address(0xBF8105D8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF038bits_t;
volatile __OFF038bits_t OFF038bits __asm__ ("OFF038") __attribute__((section("sfrs"), address(0xBF8105D8)));
#define OFF039 OFF039
volatile uint32_t   OFF039 __attribute__((section("sfrs"), address(0xBF8105DC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF039bits_t;
volatile __OFF039bits_t OFF039bits __asm__ ("OFF039") __attribute__((section("sfrs"), address(0xBF8105DC)));
#define OFF040 OFF040
volatile uint32_t   OFF040 __attribute__((section("sfrs"), address(0xBF8105E0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF040bits_t;
volatile __OFF040bits_t OFF040bits __asm__ ("OFF040") __attribute__((section("sfrs"), address(0xBF8105E0)));
#define OFF041 OFF041
volatile uint32_t   OFF041 __attribute__((section("sfrs"), address(0xBF8105E4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF041bits_t;
volatile __OFF041bits_t OFF041bits __asm__ ("OFF041") __attribute__((section("sfrs"), address(0xBF8105E4)));
#define OFF042 OFF042
volatile uint32_t   OFF042 __attribute__((section("sfrs"), address(0xBF8105E8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF042bits_t;
volatile __OFF042bits_t OFF042bits __asm__ ("OFF042") __attribute__((section("sfrs"), address(0xBF8105E8)));
#define OFF043 OFF043
volatile uint32_t   OFF043 __attribute__((section("sfrs"), address(0xBF8105EC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF043bits_t;
volatile __OFF043bits_t OFF043bits __asm__ ("OFF043") __attribute__((section("sfrs"), address(0xBF8105EC)));
#define OFF044 OFF044
volatile uint32_t   OFF044 __attribute__((section("sfrs"), address(0xBF8105F0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF044bits_t;
volatile __OFF044bits_t OFF044bits __asm__ ("OFF044") __attribute__((section("sfrs"), address(0xBF8105F0)));
#define OFF045 OFF045
volatile uint32_t   OFF045 __attribute__((section("sfrs"), address(0xBF8105F4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF045bits_t;
volatile __OFF045bits_t OFF045bits __asm__ ("OFF045") __attribute__((section("sfrs"), address(0xBF8105F4)));
#define OFF046 OFF046
volatile uint32_t   OFF046 __attribute__((section("sfrs"), address(0xBF8105F8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF046bits_t;
volatile __OFF046bits_t OFF046bits __asm__ ("OFF046") __attribute__((section("sfrs"), address(0xBF8105F8)));
#define OFF047 OFF047
volatile uint32_t   OFF047 __attribute__((section("sfrs"), address(0xBF8105FC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF047bits_t;
volatile __OFF047bits_t OFF047bits __asm__ ("OFF047") __attribute__((section("sfrs"), address(0xBF8105FC)));
#define OFF048 OFF048
volatile uint32_t   OFF048 __attribute__((section("sfrs"), address(0xBF810600)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF048bits_t;
volatile __OFF048bits_t OFF048bits __asm__ ("OFF048") __attribute__((section("sfrs"), address(0xBF810600)));
#define OFF049 OFF049
volatile uint32_t   OFF049 __attribute__((section("sfrs"), address(0xBF810604)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF049bits_t;
volatile __OFF049bits_t OFF049bits __asm__ ("OFF049") __attribute__((section("sfrs"), address(0xBF810604)));
#define OFF050 OFF050
volatile uint32_t   OFF050 __attribute__((section("sfrs"), address(0xBF810608)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF050bits_t;
volatile __OFF050bits_t OFF050bits __asm__ ("OFF050") __attribute__((section("sfrs"), address(0xBF810608)));
#define OFF051 OFF051
volatile uint32_t   OFF051 __attribute__((section("sfrs"), address(0xBF81060C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF051bits_t;
volatile __OFF051bits_t OFF051bits __asm__ ("OFF051") __attribute__((section("sfrs"), address(0xBF81060C)));
#define OFF052 OFF052
volatile uint32_t   OFF052 __attribute__((section("sfrs"), address(0xBF810610)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF052bits_t;
volatile __OFF052bits_t OFF052bits __asm__ ("OFF052") __attribute__((section("sfrs"), address(0xBF810610)));
#define OFF053 OFF053
volatile uint32_t   OFF053 __attribute__((section("sfrs"), address(0xBF810614)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF053bits_t;
volatile __OFF053bits_t OFF053bits __asm__ ("OFF053") __attribute__((section("sfrs"), address(0xBF810614)));
#define OFF054 OFF054
volatile uint32_t   OFF054 __attribute__((section("sfrs"), address(0xBF810618)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF054bits_t;
volatile __OFF054bits_t OFF054bits __asm__ ("OFF054") __attribute__((section("sfrs"), address(0xBF810618)));
#define OFF055 OFF055
volatile uint32_t   OFF055 __attribute__((section("sfrs"), address(0xBF81061C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF055bits_t;
volatile __OFF055bits_t OFF055bits __asm__ ("OFF055") __attribute__((section("sfrs"), address(0xBF81061C)));
#define OFF056 OFF056
volatile uint32_t   OFF056 __attribute__((section("sfrs"), address(0xBF810620)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF056bits_t;
volatile __OFF056bits_t OFF056bits __asm__ ("OFF056") __attribute__((section("sfrs"), address(0xBF810620)));
#define OFF057 OFF057
volatile uint32_t   OFF057 __attribute__((section("sfrs"), address(0xBF810624)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF057bits_t;
volatile __OFF057bits_t OFF057bits __asm__ ("OFF057") __attribute__((section("sfrs"), address(0xBF810624)));
#define OFF058 OFF058
volatile uint32_t   OFF058 __attribute__((section("sfrs"), address(0xBF810628)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF058bits_t;
volatile __OFF058bits_t OFF058bits __asm__ ("OFF058") __attribute__((section("sfrs"), address(0xBF810628)));
#define OFF059 OFF059
volatile uint32_t   OFF059 __attribute__((section("sfrs"), address(0xBF81062C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF059bits_t;
volatile __OFF059bits_t OFF059bits __asm__ ("OFF059") __attribute__((section("sfrs"), address(0xBF81062C)));
#define OFF060 OFF060
volatile uint32_t   OFF060 __attribute__((section("sfrs"), address(0xBF810630)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF060bits_t;
volatile __OFF060bits_t OFF060bits __asm__ ("OFF060") __attribute__((section("sfrs"), address(0xBF810630)));
#define OFF061 OFF061
volatile uint32_t   OFF061 __attribute__((section("sfrs"), address(0xBF810634)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF061bits_t;
volatile __OFF061bits_t OFF061bits __asm__ ("OFF061") __attribute__((section("sfrs"), address(0xBF810634)));
#define OFF062 OFF062
volatile uint32_t   OFF062 __attribute__((section("sfrs"), address(0xBF810638)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF062bits_t;
volatile __OFF062bits_t OFF062bits __asm__ ("OFF062") __attribute__((section("sfrs"), address(0xBF810638)));
#define OFF063 OFF063
volatile uint32_t   OFF063 __attribute__((section("sfrs"), address(0xBF81063C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF063bits_t;
volatile __OFF063bits_t OFF063bits __asm__ ("OFF063") __attribute__((section("sfrs"), address(0xBF81063C)));
#define OFF064 OFF064
volatile uint32_t   OFF064 __attribute__((section("sfrs"), address(0xBF810640)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF064bits_t;
volatile __OFF064bits_t OFF064bits __asm__ ("OFF064") __attribute__((section("sfrs"), address(0xBF810640)));
#define OFF065 OFF065
volatile uint32_t   OFF065 __attribute__((section("sfrs"), address(0xBF810644)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF065bits_t;
volatile __OFF065bits_t OFF065bits __asm__ ("OFF065") __attribute__((section("sfrs"), address(0xBF810644)));
#define OFF066 OFF066
volatile uint32_t   OFF066 __attribute__((section("sfrs"), address(0xBF810648)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF066bits_t;
volatile __OFF066bits_t OFF066bits __asm__ ("OFF066") __attribute__((section("sfrs"), address(0xBF810648)));
#define OFF067 OFF067
volatile uint32_t   OFF067 __attribute__((section("sfrs"), address(0xBF81064C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF067bits_t;
volatile __OFF067bits_t OFF067bits __asm__ ("OFF067") __attribute__((section("sfrs"), address(0xBF81064C)));
#define OFF068 OFF068
volatile uint32_t   OFF068 __attribute__((section("sfrs"), address(0xBF810650)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF068bits_t;
volatile __OFF068bits_t OFF068bits __asm__ ("OFF068") __attribute__((section("sfrs"), address(0xBF810650)));
#define OFF069 OFF069
volatile uint32_t   OFF069 __attribute__((section("sfrs"), address(0xBF810654)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF069bits_t;
volatile __OFF069bits_t OFF069bits __asm__ ("OFF069") __attribute__((section("sfrs"), address(0xBF810654)));
#define OFF070 OFF070
volatile uint32_t   OFF070 __attribute__((section("sfrs"), address(0xBF810658)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF070bits_t;
volatile __OFF070bits_t OFF070bits __asm__ ("OFF070") __attribute__((section("sfrs"), address(0xBF810658)));
#define OFF071 OFF071
volatile uint32_t   OFF071 __attribute__((section("sfrs"), address(0xBF81065C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF071bits_t;
volatile __OFF071bits_t OFF071bits __asm__ ("OFF071") __attribute__((section("sfrs"), address(0xBF81065C)));
#define OFF072 OFF072
volatile uint32_t   OFF072 __attribute__((section("sfrs"), address(0xBF810660)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF072bits_t;
volatile __OFF072bits_t OFF072bits __asm__ ("OFF072") __attribute__((section("sfrs"), address(0xBF810660)));
#define OFF073 OFF073
volatile uint32_t   OFF073 __attribute__((section("sfrs"), address(0xBF810664)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF073bits_t;
volatile __OFF073bits_t OFF073bits __asm__ ("OFF073") __attribute__((section("sfrs"), address(0xBF810664)));
#define OFF074 OFF074
volatile uint32_t   OFF074 __attribute__((section("sfrs"), address(0xBF810668)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF074bits_t;
volatile __OFF074bits_t OFF074bits __asm__ ("OFF074") __attribute__((section("sfrs"), address(0xBF810668)));
#define OFF075 OFF075
volatile uint32_t   OFF075 __attribute__((section("sfrs"), address(0xBF81066C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF075bits_t;
volatile __OFF075bits_t OFF075bits __asm__ ("OFF075") __attribute__((section("sfrs"), address(0xBF81066C)));
#define OFF076 OFF076
volatile uint32_t   OFF076 __attribute__((section("sfrs"), address(0xBF810670)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF076bits_t;
volatile __OFF076bits_t OFF076bits __asm__ ("OFF076") __attribute__((section("sfrs"), address(0xBF810670)));
#define OFF077 OFF077
volatile uint32_t   OFF077 __attribute__((section("sfrs"), address(0xBF810674)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF077bits_t;
volatile __OFF077bits_t OFF077bits __asm__ ("OFF077") __attribute__((section("sfrs"), address(0xBF810674)));
#define OFF078 OFF078
volatile uint32_t   OFF078 __attribute__((section("sfrs"), address(0xBF810678)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF078bits_t;
volatile __OFF078bits_t OFF078bits __asm__ ("OFF078") __attribute__((section("sfrs"), address(0xBF810678)));
#define OFF079 OFF079
volatile uint32_t   OFF079 __attribute__((section("sfrs"), address(0xBF81067C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF079bits_t;
volatile __OFF079bits_t OFF079bits __asm__ ("OFF079") __attribute__((section("sfrs"), address(0xBF81067C)));
#define OFF080 OFF080
volatile uint32_t   OFF080 __attribute__((section("sfrs"), address(0xBF810680)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF080bits_t;
volatile __OFF080bits_t OFF080bits __asm__ ("OFF080") __attribute__((section("sfrs"), address(0xBF810680)));
#define OFF081 OFF081
volatile uint32_t   OFF081 __attribute__((section("sfrs"), address(0xBF810684)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF081bits_t;
volatile __OFF081bits_t OFF081bits __asm__ ("OFF081") __attribute__((section("sfrs"), address(0xBF810684)));
#define OFF082 OFF082
volatile uint32_t   OFF082 __attribute__((section("sfrs"), address(0xBF810688)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF082bits_t;
volatile __OFF082bits_t OFF082bits __asm__ ("OFF082") __attribute__((section("sfrs"), address(0xBF810688)));
#define OFF083 OFF083
volatile uint32_t   OFF083 __attribute__((section("sfrs"), address(0xBF81068C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF083bits_t;
volatile __OFF083bits_t OFF083bits __asm__ ("OFF083") __attribute__((section("sfrs"), address(0xBF81068C)));
#define OFF084 OFF084
volatile uint32_t   OFF084 __attribute__((section("sfrs"), address(0xBF810690)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF084bits_t;
volatile __OFF084bits_t OFF084bits __asm__ ("OFF084") __attribute__((section("sfrs"), address(0xBF810690)));
#define OFF085 OFF085
volatile uint32_t   OFF085 __attribute__((section("sfrs"), address(0xBF810694)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF085bits_t;
volatile __OFF085bits_t OFF085bits __asm__ ("OFF085") __attribute__((section("sfrs"), address(0xBF810694)));
#define OFF086 OFF086
volatile uint32_t   OFF086 __attribute__((section("sfrs"), address(0xBF810698)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF086bits_t;
volatile __OFF086bits_t OFF086bits __asm__ ("OFF086") __attribute__((section("sfrs"), address(0xBF810698)));
#define OFF087 OFF087
volatile uint32_t   OFF087 __attribute__((section("sfrs"), address(0xBF81069C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF087bits_t;
volatile __OFF087bits_t OFF087bits __asm__ ("OFF087") __attribute__((section("sfrs"), address(0xBF81069C)));
#define OFF088 OFF088
volatile uint32_t   OFF088 __attribute__((section("sfrs"), address(0xBF8106A0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF088bits_t;
volatile __OFF088bits_t OFF088bits __asm__ ("OFF088") __attribute__((section("sfrs"), address(0xBF8106A0)));
#define OFF089 OFF089
volatile uint32_t   OFF089 __attribute__((section("sfrs"), address(0xBF8106A4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF089bits_t;
volatile __OFF089bits_t OFF089bits __asm__ ("OFF089") __attribute__((section("sfrs"), address(0xBF8106A4)));
#define OFF090 OFF090
volatile uint32_t   OFF090 __attribute__((section("sfrs"), address(0xBF8106A8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF090bits_t;
volatile __OFF090bits_t OFF090bits __asm__ ("OFF090") __attribute__((section("sfrs"), address(0xBF8106A8)));
#define OFF091 OFF091
volatile uint32_t   OFF091 __attribute__((section("sfrs"), address(0xBF8106AC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF091bits_t;
volatile __OFF091bits_t OFF091bits __asm__ ("OFF091") __attribute__((section("sfrs"), address(0xBF8106AC)));
#define OFF092 OFF092
volatile uint32_t   OFF092 __attribute__((section("sfrs"), address(0xBF8106B0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF092bits_t;
volatile __OFF092bits_t OFF092bits __asm__ ("OFF092") __attribute__((section("sfrs"), address(0xBF8106B0)));
#define OFF093 OFF093
volatile uint32_t   OFF093 __attribute__((section("sfrs"), address(0xBF8106B4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF093bits_t;
volatile __OFF093bits_t OFF093bits __asm__ ("OFF093") __attribute__((section("sfrs"), address(0xBF8106B4)));
#define OFF102 OFF102
volatile uint32_t   OFF102 __attribute__((section("sfrs"), address(0xBF8106D8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF102bits_t;
volatile __OFF102bits_t OFF102bits __asm__ ("OFF102") __attribute__((section("sfrs"), address(0xBF8106D8)));
#define OFF103 OFF103
volatile uint32_t   OFF103 __attribute__((section("sfrs"), address(0xBF8106DC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF103bits_t;
volatile __OFF103bits_t OFF103bits __asm__ ("OFF103") __attribute__((section("sfrs"), address(0xBF8106DC)));
#define OFF104 OFF104
volatile uint32_t   OFF104 __attribute__((section("sfrs"), address(0xBF8106E0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF104bits_t;
volatile __OFF104bits_t OFF104bits __asm__ ("OFF104") __attribute__((section("sfrs"), address(0xBF8106E0)));
#define OFF105 OFF105
volatile uint32_t   OFF105 __attribute__((section("sfrs"), address(0xBF8106E4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF105bits_t;
volatile __OFF105bits_t OFF105bits __asm__ ("OFF105") __attribute__((section("sfrs"), address(0xBF8106E4)));
#define OFF106 OFF106
volatile uint32_t   OFF106 __attribute__((section("sfrs"), address(0xBF8106E8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF106bits_t;
volatile __OFF106bits_t OFF106bits __asm__ ("OFF106") __attribute__((section("sfrs"), address(0xBF8106E8)));
#define OFF109 OFF109
volatile uint32_t   OFF109 __attribute__((section("sfrs"), address(0xBF8106F4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF109bits_t;
volatile __OFF109bits_t OFF109bits __asm__ ("OFF109") __attribute__((section("sfrs"), address(0xBF8106F4)));
#define OFF110 OFF110
volatile uint32_t   OFF110 __attribute__((section("sfrs"), address(0xBF8106F8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF110bits_t;
volatile __OFF110bits_t OFF110bits __asm__ ("OFF110") __attribute__((section("sfrs"), address(0xBF8106F8)));
#define OFF111 OFF111
volatile uint32_t   OFF111 __attribute__((section("sfrs"), address(0xBF8106FC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF111bits_t;
volatile __OFF111bits_t OFF111bits __asm__ ("OFF111") __attribute__((section("sfrs"), address(0xBF8106FC)));
#define OFF112 OFF112
volatile uint32_t   OFF112 __attribute__((section("sfrs"), address(0xBF810700)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF112bits_t;
volatile __OFF112bits_t OFF112bits __asm__ ("OFF112") __attribute__((section("sfrs"), address(0xBF810700)));
#define OFF113 OFF113
volatile uint32_t   OFF113 __attribute__((section("sfrs"), address(0xBF810704)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF113bits_t;
volatile __OFF113bits_t OFF113bits __asm__ ("OFF113") __attribute__((section("sfrs"), address(0xBF810704)));
#define OFF114 OFF114
volatile uint32_t   OFF114 __attribute__((section("sfrs"), address(0xBF810708)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF114bits_t;
volatile __OFF114bits_t OFF114bits __asm__ ("OFF114") __attribute__((section("sfrs"), address(0xBF810708)));
#define OFF115 OFF115
volatile uint32_t   OFF115 __attribute__((section("sfrs"), address(0xBF81070C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF115bits_t;
volatile __OFF115bits_t OFF115bits __asm__ ("OFF115") __attribute__((section("sfrs"), address(0xBF81070C)));
#define OFF116 OFF116
volatile uint32_t   OFF116 __attribute__((section("sfrs"), address(0xBF810710)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF116bits_t;
volatile __OFF116bits_t OFF116bits __asm__ ("OFF116") __attribute__((section("sfrs"), address(0xBF810710)));
#define OFF117 OFF117
volatile uint32_t   OFF117 __attribute__((section("sfrs"), address(0xBF810714)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF117bits_t;
volatile __OFF117bits_t OFF117bits __asm__ ("OFF117") __attribute__((section("sfrs"), address(0xBF810714)));
#define OFF118 OFF118
volatile uint32_t   OFF118 __attribute__((section("sfrs"), address(0xBF810718)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF118bits_t;
volatile __OFF118bits_t OFF118bits __asm__ ("OFF118") __attribute__((section("sfrs"), address(0xBF810718)));
#define OFF119 OFF119
volatile uint32_t   OFF119 __attribute__((section("sfrs"), address(0xBF81071C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF119bits_t;
volatile __OFF119bits_t OFF119bits __asm__ ("OFF119") __attribute__((section("sfrs"), address(0xBF81071C)));
#define OFF120 OFF120
volatile uint32_t   OFF120 __attribute__((section("sfrs"), address(0xBF810720)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF120bits_t;
volatile __OFF120bits_t OFF120bits __asm__ ("OFF120") __attribute__((section("sfrs"), address(0xBF810720)));
#define OFF121 OFF121
volatile uint32_t   OFF121 __attribute__((section("sfrs"), address(0xBF810724)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF121bits_t;
volatile __OFF121bits_t OFF121bits __asm__ ("OFF121") __attribute__((section("sfrs"), address(0xBF810724)));
#define OFF122 OFF122
volatile uint32_t   OFF122 __attribute__((section("sfrs"), address(0xBF810728)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF122bits_t;
volatile __OFF122bits_t OFF122bits __asm__ ("OFF122") __attribute__((section("sfrs"), address(0xBF810728)));
#define OFF123 OFF123
volatile uint32_t   OFF123 __attribute__((section("sfrs"), address(0xBF81072C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF123bits_t;
volatile __OFF123bits_t OFF123bits __asm__ ("OFF123") __attribute__((section("sfrs"), address(0xBF81072C)));
#define OFF124 OFF124
volatile uint32_t   OFF124 __attribute__((section("sfrs"), address(0xBF810730)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF124bits_t;
volatile __OFF124bits_t OFF124bits __asm__ ("OFF124") __attribute__((section("sfrs"), address(0xBF810730)));
#define OFF128 OFF128
volatile uint32_t   OFF128 __attribute__((section("sfrs"), address(0xBF810740)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF128bits_t;
volatile __OFF128bits_t OFF128bits __asm__ ("OFF128") __attribute__((section("sfrs"), address(0xBF810740)));
#define OFF129 OFF129
volatile uint32_t   OFF129 __attribute__((section("sfrs"), address(0xBF810744)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF129bits_t;
volatile __OFF129bits_t OFF129bits __asm__ ("OFF129") __attribute__((section("sfrs"), address(0xBF810744)));
#define OFF130 OFF130
volatile uint32_t   OFF130 __attribute__((section("sfrs"), address(0xBF810748)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF130bits_t;
volatile __OFF130bits_t OFF130bits __asm__ ("OFF130") __attribute__((section("sfrs"), address(0xBF810748)));
#define OFF131 OFF131
volatile uint32_t   OFF131 __attribute__((section("sfrs"), address(0xBF81074C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF131bits_t;
volatile __OFF131bits_t OFF131bits __asm__ ("OFF131") __attribute__((section("sfrs"), address(0xBF81074C)));
#define OFF132 OFF132
volatile uint32_t   OFF132 __attribute__((section("sfrs"), address(0xBF810750)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF132bits_t;
volatile __OFF132bits_t OFF132bits __asm__ ("OFF132") __attribute__((section("sfrs"), address(0xBF810750)));
#define OFF133 OFF133
volatile uint32_t   OFF133 __attribute__((section("sfrs"), address(0xBF810754)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF133bits_t;
volatile __OFF133bits_t OFF133bits __asm__ ("OFF133") __attribute__((section("sfrs"), address(0xBF810754)));
#define OFF134 OFF134
volatile uint32_t   OFF134 __attribute__((section("sfrs"), address(0xBF810758)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF134bits_t;
volatile __OFF134bits_t OFF134bits __asm__ ("OFF134") __attribute__((section("sfrs"), address(0xBF810758)));
#define OFF135 OFF135
volatile uint32_t   OFF135 __attribute__((section("sfrs"), address(0xBF81075C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF135bits_t;
volatile __OFF135bits_t OFF135bits __asm__ ("OFF135") __attribute__((section("sfrs"), address(0xBF81075C)));
#define OFF136 OFF136
volatile uint32_t   OFF136 __attribute__((section("sfrs"), address(0xBF810760)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF136bits_t;
volatile __OFF136bits_t OFF136bits __asm__ ("OFF136") __attribute__((section("sfrs"), address(0xBF810760)));
#define OFF137 OFF137
volatile uint32_t   OFF137 __attribute__((section("sfrs"), address(0xBF810764)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF137bits_t;
volatile __OFF137bits_t OFF137bits __asm__ ("OFF137") __attribute__((section("sfrs"), address(0xBF810764)));
#define OFF138 OFF138
volatile uint32_t   OFF138 __attribute__((section("sfrs"), address(0xBF810768)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF138bits_t;
volatile __OFF138bits_t OFF138bits __asm__ ("OFF138") __attribute__((section("sfrs"), address(0xBF810768)));
#define OFF139 OFF139
volatile uint32_t   OFF139 __attribute__((section("sfrs"), address(0xBF81076C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF139bits_t;
volatile __OFF139bits_t OFF139bits __asm__ ("OFF139") __attribute__((section("sfrs"), address(0xBF81076C)));
#define OFF140 OFF140
volatile uint32_t   OFF140 __attribute__((section("sfrs"), address(0xBF810770)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF140bits_t;
volatile __OFF140bits_t OFF140bits __asm__ ("OFF140") __attribute__((section("sfrs"), address(0xBF810770)));
#define OFF141 OFF141
volatile uint32_t   OFF141 __attribute__((section("sfrs"), address(0xBF810774)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF141bits_t;
volatile __OFF141bits_t OFF141bits __asm__ ("OFF141") __attribute__((section("sfrs"), address(0xBF810774)));
#define OFF142 OFF142
volatile uint32_t   OFF142 __attribute__((section("sfrs"), address(0xBF810778)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF142bits_t;
volatile __OFF142bits_t OFF142bits __asm__ ("OFF142") __attribute__((section("sfrs"), address(0xBF810778)));
#define OFF143 OFF143
volatile uint32_t   OFF143 __attribute__((section("sfrs"), address(0xBF81077C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF143bits_t;
volatile __OFF143bits_t OFF143bits __asm__ ("OFF143") __attribute__((section("sfrs"), address(0xBF81077C)));
#define OFF144 OFF144
volatile uint32_t   OFF144 __attribute__((section("sfrs"), address(0xBF810780)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF144bits_t;
volatile __OFF144bits_t OFF144bits __asm__ ("OFF144") __attribute__((section("sfrs"), address(0xBF810780)));
#define OFF145 OFF145
volatile uint32_t   OFF145 __attribute__((section("sfrs"), address(0xBF810784)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF145bits_t;
volatile __OFF145bits_t OFF145bits __asm__ ("OFF145") __attribute__((section("sfrs"), address(0xBF810784)));
#define OFF146 OFF146
volatile uint32_t   OFF146 __attribute__((section("sfrs"), address(0xBF810788)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF146bits_t;
volatile __OFF146bits_t OFF146bits __asm__ ("OFF146") __attribute__((section("sfrs"), address(0xBF810788)));
#define OFF147 OFF147
volatile uint32_t   OFF147 __attribute__((section("sfrs"), address(0xBF81078C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF147bits_t;
volatile __OFF147bits_t OFF147bits __asm__ ("OFF147") __attribute__((section("sfrs"), address(0xBF81078C)));
#define OFF148 OFF148
volatile uint32_t   OFF148 __attribute__((section("sfrs"), address(0xBF810790)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF148bits_t;
volatile __OFF148bits_t OFF148bits __asm__ ("OFF148") __attribute__((section("sfrs"), address(0xBF810790)));
#define OFF149 OFF149
volatile uint32_t   OFF149 __attribute__((section("sfrs"), address(0xBF810794)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF149bits_t;
volatile __OFF149bits_t OFF149bits __asm__ ("OFF149") __attribute__((section("sfrs"), address(0xBF810794)));
#define OFF150 OFF150
volatile uint32_t   OFF150 __attribute__((section("sfrs"), address(0xBF810798)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF150bits_t;
volatile __OFF150bits_t OFF150bits __asm__ ("OFF150") __attribute__((section("sfrs"), address(0xBF810798)));
#define OFF153 OFF153
volatile uint32_t   OFF153 __attribute__((section("sfrs"), address(0xBF8107A4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF153bits_t;
volatile __OFF153bits_t OFF153bits __asm__ ("OFF153") __attribute__((section("sfrs"), address(0xBF8107A4)));
#define OFF154 OFF154
volatile uint32_t   OFF154 __attribute__((section("sfrs"), address(0xBF8107A8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF154bits_t;
volatile __OFF154bits_t OFF154bits __asm__ ("OFF154") __attribute__((section("sfrs"), address(0xBF8107A8)));
#define OFF155 OFF155
volatile uint32_t   OFF155 __attribute__((section("sfrs"), address(0xBF8107AC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF155bits_t;
volatile __OFF155bits_t OFF155bits __asm__ ("OFF155") __attribute__((section("sfrs"), address(0xBF8107AC)));
#define OFF156 OFF156
volatile uint32_t   OFF156 __attribute__((section("sfrs"), address(0xBF8107B0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF156bits_t;
volatile __OFF156bits_t OFF156bits __asm__ ("OFF156") __attribute__((section("sfrs"), address(0xBF8107B0)));
#define OFF157 OFF157
volatile uint32_t   OFF157 __attribute__((section("sfrs"), address(0xBF8107B4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF157bits_t;
volatile __OFF157bits_t OFF157bits __asm__ ("OFF157") __attribute__((section("sfrs"), address(0xBF8107B4)));
#define OFF158 OFF158
volatile uint32_t   OFF158 __attribute__((section("sfrs"), address(0xBF8107B8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF158bits_t;
volatile __OFF158bits_t OFF158bits __asm__ ("OFF158") __attribute__((section("sfrs"), address(0xBF8107B8)));
#define OFF159 OFF159
volatile uint32_t   OFF159 __attribute__((section("sfrs"), address(0xBF8107BC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF159bits_t;
volatile __OFF159bits_t OFF159bits __asm__ ("OFF159") __attribute__((section("sfrs"), address(0xBF8107BC)));
#define OFF160 OFF160
volatile uint32_t   OFF160 __attribute__((section("sfrs"), address(0xBF8107C0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF160bits_t;
volatile __OFF160bits_t OFF160bits __asm__ ("OFF160") __attribute__((section("sfrs"), address(0xBF8107C0)));
#define OFF161 OFF161
volatile uint32_t   OFF161 __attribute__((section("sfrs"), address(0xBF8107C4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF161bits_t;
volatile __OFF161bits_t OFF161bits __asm__ ("OFF161") __attribute__((section("sfrs"), address(0xBF8107C4)));
#define OFF162 OFF162
volatile uint32_t   OFF162 __attribute__((section("sfrs"), address(0xBF8107C8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF162bits_t;
volatile __OFF162bits_t OFF162bits __asm__ ("OFF162") __attribute__((section("sfrs"), address(0xBF8107C8)));
#define OFF163 OFF163
volatile uint32_t   OFF163 __attribute__((section("sfrs"), address(0xBF8107CC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF163bits_t;
volatile __OFF163bits_t OFF163bits __asm__ ("OFF163") __attribute__((section("sfrs"), address(0xBF8107CC)));
#define OFF164 OFF164
volatile uint32_t   OFF164 __attribute__((section("sfrs"), address(0xBF8107D0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF164bits_t;
volatile __OFF164bits_t OFF164bits __asm__ ("OFF164") __attribute__((section("sfrs"), address(0xBF8107D0)));
#define OFF165 OFF165
volatile uint32_t   OFF165 __attribute__((section("sfrs"), address(0xBF8107D4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF165bits_t;
volatile __OFF165bits_t OFF165bits __asm__ ("OFF165") __attribute__((section("sfrs"), address(0xBF8107D4)));
#define OFF166 OFF166
volatile uint32_t   OFF166 __attribute__((section("sfrs"), address(0xBF8107D8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF166bits_t;
volatile __OFF166bits_t OFF166bits __asm__ ("OFF166") __attribute__((section("sfrs"), address(0xBF8107D8)));
#define OFF167 OFF167
volatile uint32_t   OFF167 __attribute__((section("sfrs"), address(0xBF8107DC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF167bits_t;
volatile __OFF167bits_t OFF167bits __asm__ ("OFF167") __attribute__((section("sfrs"), address(0xBF8107DC)));
#define OFF168 OFF168
volatile uint32_t   OFF168 __attribute__((section("sfrs"), address(0xBF8107E0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF168bits_t;
volatile __OFF168bits_t OFF168bits __asm__ ("OFF168") __attribute__((section("sfrs"), address(0xBF8107E0)));
#define OFF169 OFF169
volatile uint32_t   OFF169 __attribute__((section("sfrs"), address(0xBF8107E4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF169bits_t;
volatile __OFF169bits_t OFF169bits __asm__ ("OFF169") __attribute__((section("sfrs"), address(0xBF8107E4)));
#define OFF170 OFF170
volatile uint32_t   OFF170 __attribute__((section("sfrs"), address(0xBF8107E8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF170bits_t;
volatile __OFF170bits_t OFF170bits __asm__ ("OFF170") __attribute__((section("sfrs"), address(0xBF8107E8)));
#define OFF171 OFF171
volatile uint32_t   OFF171 __attribute__((section("sfrs"), address(0xBF8107EC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF171bits_t;
volatile __OFF171bits_t OFF171bits __asm__ ("OFF171") __attribute__((section("sfrs"), address(0xBF8107EC)));
#define OFF172 OFF172
volatile uint32_t   OFF172 __attribute__((section("sfrs"), address(0xBF8107F0)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF172bits_t;
volatile __OFF172bits_t OFF172bits __asm__ ("OFF172") __attribute__((section("sfrs"), address(0xBF8107F0)));
#define OFF173 OFF173
volatile uint32_t   OFF173 __attribute__((section("sfrs"), address(0xBF8107F4)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF173bits_t;
volatile __OFF173bits_t OFF173bits __asm__ ("OFF173") __attribute__((section("sfrs"), address(0xBF8107F4)));
#define OFF174 OFF174
volatile uint32_t   OFF174 __attribute__((section("sfrs"), address(0xBF8107F8)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF174bits_t;
volatile __OFF174bits_t OFF174bits __asm__ ("OFF174") __attribute__((section("sfrs"), address(0xBF8107F8)));
#define OFF175 OFF175
volatile uint32_t   OFF175 __attribute__((section("sfrs"), address(0xBF8107FC)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF175bits_t;
volatile __OFF175bits_t OFF175bits __asm__ ("OFF175") __attribute__((section("sfrs"), address(0xBF8107FC)));
#define OFF176 OFF176
volatile uint32_t   OFF176 __attribute__((section("sfrs"), address(0xBF810800)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF176bits_t;
volatile __OFF176bits_t OFF176bits __asm__ ("OFF176") __attribute__((section("sfrs"), address(0xBF810800)));
#define OFF177 OFF177
volatile uint32_t   OFF177 __attribute__((section("sfrs"), address(0xBF810804)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF177bits_t;
volatile __OFF177bits_t OFF177bits __asm__ ("OFF177") __attribute__((section("sfrs"), address(0xBF810804)));
#define OFF178 OFF178
volatile uint32_t   OFF178 __attribute__((section("sfrs"), address(0xBF810808)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF178bits_t;
volatile __OFF178bits_t OFF178bits __asm__ ("OFF178") __attribute__((section("sfrs"), address(0xBF810808)));
#define OFF179 OFF179
volatile uint32_t   OFF179 __attribute__((section("sfrs"), address(0xBF81080C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF179bits_t;
volatile __OFF179bits_t OFF179bits __asm__ ("OFF179") __attribute__((section("sfrs"), address(0xBF81080C)));
#define OFF180 OFF180
volatile uint32_t   OFF180 __attribute__((section("sfrs"), address(0xBF810810)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF180bits_t;
volatile __OFF180bits_t OFF180bits __asm__ ("OFF180") __attribute__((section("sfrs"), address(0xBF810810)));
#define OFF181 OFF181
volatile uint32_t   OFF181 __attribute__((section("sfrs"), address(0xBF810814)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF181bits_t;
volatile __OFF181bits_t OFF181bits __asm__ ("OFF181") __attribute__((section("sfrs"), address(0xBF810814)));
#define OFF182 OFF182
volatile uint32_t   OFF182 __attribute__((section("sfrs"), address(0xBF810818)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF182bits_t;
volatile __OFF182bits_t OFF182bits __asm__ ("OFF182") __attribute__((section("sfrs"), address(0xBF810818)));
#define OFF183 OFF183
volatile uint32_t   OFF183 __attribute__((section("sfrs"), address(0xBF81081C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF183bits_t;
volatile __OFF183bits_t OFF183bits __asm__ ("OFF183") __attribute__((section("sfrs"), address(0xBF81081C)));
#define OFF184 OFF184
volatile uint32_t   OFF184 __attribute__((section("sfrs"), address(0xBF810820)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF184bits_t;
volatile __OFF184bits_t OFF184bits __asm__ ("OFF184") __attribute__((section("sfrs"), address(0xBF810820)));
#define OFF185 OFF185
volatile uint32_t   OFF185 __attribute__((section("sfrs"), address(0xBF810824)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF185bits_t;
volatile __OFF185bits_t OFF185bits __asm__ ("OFF185") __attribute__((section("sfrs"), address(0xBF810824)));
#define OFF186 OFF186
volatile uint32_t   OFF186 __attribute__((section("sfrs"), address(0xBF810828)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF186bits_t;
volatile __OFF186bits_t OFF186bits __asm__ ("OFF186") __attribute__((section("sfrs"), address(0xBF810828)));
#define OFF187 OFF187
volatile uint32_t   OFF187 __attribute__((section("sfrs"), address(0xBF81082C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF187bits_t;
volatile __OFF187bits_t OFF187bits __asm__ ("OFF187") __attribute__((section("sfrs"), address(0xBF81082C)));
#define OFF188 OFF188
volatile uint32_t   OFF188 __attribute__((section("sfrs"), address(0xBF810830)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF188bits_t;
volatile __OFF188bits_t OFF188bits __asm__ ("OFF188") __attribute__((section("sfrs"), address(0xBF810830)));
#define OFF189 OFF189
volatile uint32_t   OFF189 __attribute__((section("sfrs"), address(0xBF810834)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF189bits_t;
volatile __OFF189bits_t OFF189bits __asm__ ("OFF189") __attribute__((section("sfrs"), address(0xBF810834)));
#define OFF190 OFF190
volatile uint32_t   OFF190 __attribute__((section("sfrs"), address(0xBF810838)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF190bits_t;
volatile __OFF190bits_t OFF190bits __asm__ ("OFF190") __attribute__((section("sfrs"), address(0xBF810838)));
#define OFF192 OFF192
volatile uint32_t   OFF192 __attribute__((section("sfrs"), address(0xBF810840)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF192bits_t;
volatile __OFF192bits_t OFF192bits __asm__ ("OFF192") __attribute__((section("sfrs"), address(0xBF810840)));
#define OFF193 OFF193
volatile uint32_t   OFF193 __attribute__((section("sfrs"), address(0xBF810844)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF193bits_t;
volatile __OFF193bits_t OFF193bits __asm__ ("OFF193") __attribute__((section("sfrs"), address(0xBF810844)));
#define OFF194 OFF194
volatile uint32_t   OFF194 __attribute__((section("sfrs"), address(0xBF810848)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF194bits_t;
volatile __OFF194bits_t OFF194bits __asm__ ("OFF194") __attribute__((section("sfrs"), address(0xBF810848)));
#define OFF196 OFF196
volatile uint32_t   OFF196 __attribute__((section("sfrs"), address(0xBF810850)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF196bits_t;
volatile __OFF196bits_t OFF196bits __asm__ ("OFF196") __attribute__((section("sfrs"), address(0xBF810850)));
#define OFF198 OFF198
volatile uint32_t   OFF198 __attribute__((section("sfrs"), address(0xBF810858)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF198bits_t;
volatile __OFF198bits_t OFF198bits __asm__ ("OFF198") __attribute__((section("sfrs"), address(0xBF810858)));
#define OFF199 OFF199
volatile uint32_t   OFF199 __attribute__((section("sfrs"), address(0xBF81085C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF199bits_t;
volatile __OFF199bits_t OFF199bits __asm__ ("OFF199") __attribute__((section("sfrs"), address(0xBF81085C)));
#define OFF200 OFF200
volatile uint32_t   OFF200 __attribute__((section("sfrs"), address(0xBF810860)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF200bits_t;
volatile __OFF200bits_t OFF200bits __asm__ ("OFF200") __attribute__((section("sfrs"), address(0xBF810860)));
#define OFF201 OFF201
volatile uint32_t   OFF201 __attribute__((section("sfrs"), address(0xBF810864)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF201bits_t;
volatile __OFF201bits_t OFF201bits __asm__ ("OFF201") __attribute__((section("sfrs"), address(0xBF810864)));
#define OFF202 OFF202
volatile uint32_t   OFF202 __attribute__((section("sfrs"), address(0xBF810868)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF202bits_t;
volatile __OFF202bits_t OFF202bits __asm__ ("OFF202") __attribute__((section("sfrs"), address(0xBF810868)));
#define OFF205 OFF205
volatile uint32_t   OFF205 __attribute__((section("sfrs"), address(0xBF810874)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF205bits_t;
volatile __OFF205bits_t OFF205bits __asm__ ("OFF205") __attribute__((section("sfrs"), address(0xBF810874)));
#define OFF206 OFF206
volatile uint32_t   OFF206 __attribute__((section("sfrs"), address(0xBF810878)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF206bits_t;
volatile __OFF206bits_t OFF206bits __asm__ ("OFF206") __attribute__((section("sfrs"), address(0xBF810878)));
#define OFF207 OFF207
volatile uint32_t   OFF207 __attribute__((section("sfrs"), address(0xBF81087C)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF207bits_t;
volatile __OFF207bits_t OFF207bits __asm__ ("OFF207") __attribute__((section("sfrs"), address(0xBF81087C)));
#define OFF208 OFF208
volatile uint32_t   OFF208 __attribute__((section("sfrs"), address(0xBF810880)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF208bits_t;
volatile __OFF208bits_t OFF208bits __asm__ ("OFF208") __attribute__((section("sfrs"), address(0xBF810880)));
#define OFF209 OFF209
volatile uint32_t   OFF209 __attribute__((section("sfrs"), address(0xBF810884)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF209bits_t;
volatile __OFF209bits_t OFF209bits __asm__ ("OFF209") __attribute__((section("sfrs"), address(0xBF810884)));
#define OFF210 OFF210
volatile uint32_t   OFF210 __attribute__((section("sfrs"), address(0xBF810888)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF210bits_t;
volatile __OFF210bits_t OFF210bits __asm__ ("OFF210") __attribute__((section("sfrs"), address(0xBF810888)));
#define OFF213 OFF213
volatile uint32_t   OFF213 __attribute__((section("sfrs"), address(0xBF810894)));
typedef struct {
  uint32_t :1;
  uint32_t VOFF:17;
} __OFF213bits_t;
volatile __OFF213bits_t OFF213bits __asm__ ("OFF213") __attribute__((section("sfrs"), address(0xBF810894)));
#define DMACON DMACON
volatile uint32_t   DMACON __attribute__((section("sfrs"), address(0xBF811000)));
typedef struct {
  uint32_t :11;
  uint32_t DMABUSY:1;
  uint32_t SUSPEND:1;
  uint32_t :2;
  uint32_t ON:1;
} __DMACONbits_t;
volatile __DMACONbits_t DMACONbits __asm__ ("DMACON") __attribute__((section("sfrs"), address(0xBF811000)));
volatile uint32_t        DMACONCLR __attribute__((section("sfrs"),address(0xBF811004)));
volatile uint32_t        DMACONSET __attribute__((section("sfrs"),address(0xBF811008)));
volatile uint32_t        DMACONINV __attribute__((section("sfrs"),address(0xBF81100C)));
#define DMASTAT DMASTAT
volatile uint32_t   DMASTAT __attribute__((section("sfrs"), address(0xBF811010)));
typedef struct {
  uint32_t DMACH:3;
  uint32_t :28;
  uint32_t RDWR:1;
} __DMASTATbits_t;
volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT") __attribute__((section("sfrs"), address(0xBF811010)));
volatile uint32_t        DMASTATCLR __attribute__((section("sfrs"),address(0xBF811014)));
volatile uint32_t        DMASTATSET __attribute__((section("sfrs"),address(0xBF811018)));
volatile uint32_t        DMASTATINV __attribute__((section("sfrs"),address(0xBF81101C)));
#define DMAADDR DMAADDR
volatile uint32_t   DMAADDR __attribute__((section("sfrs"), address(0xBF811020)));
typedef struct {
  uint32_t DMAADDR:32;
} __DMAADDRbits_t;
volatile __DMAADDRbits_t DMAADDRbits __asm__ ("DMAADDR") __attribute__((section("sfrs"), address(0xBF811020)));
volatile uint32_t        DMAADDRCLR __attribute__((section("sfrs"),address(0xBF811024)));
volatile uint32_t        DMAADDRSET __attribute__((section("sfrs"),address(0xBF811028)));
volatile uint32_t        DMAADDRINV __attribute__((section("sfrs"),address(0xBF81102C)));
#define DCRCCON DCRCCON
volatile uint32_t   DCRCCON __attribute__((section("sfrs"), address(0xBF811030)));
typedef struct {
  uint32_t CRCCH:3;
  uint32_t :2;
  uint32_t CRCTYP:1;
  uint32_t CRCAPP:1;
  uint32_t CRCEN:1;
  uint32_t PLEN:5;
  uint32_t :11;
  uint32_t BITO:1;
  uint32_t :2;
  uint32_t WBO:1;
  uint32_t BYTO:2;
} __DCRCCONbits_t;
volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON") __attribute__((section("sfrs"), address(0xBF811030)));
volatile uint32_t        DCRCCONCLR __attribute__((section("sfrs"),address(0xBF811034)));
volatile uint32_t        DCRCCONSET __attribute__((section("sfrs"),address(0xBF811038)));
volatile uint32_t        DCRCCONINV __attribute__((section("sfrs"),address(0xBF81103C)));
#define DCRCDATA DCRCDATA
volatile uint32_t   DCRCDATA __attribute__((section("sfrs"), address(0xBF811040)));
typedef struct {
  uint32_t DCRCDATA:32;
} __DCRCDATAbits_t;
volatile __DCRCDATAbits_t DCRCDATAbits __asm__ ("DCRCDATA") __attribute__((section("sfrs"), address(0xBF811040)));
volatile uint32_t        DCRCDATACLR __attribute__((section("sfrs"),address(0xBF811044)));
volatile uint32_t        DCRCDATASET __attribute__((section("sfrs"),address(0xBF811048)));
volatile uint32_t        DCRCDATAINV __attribute__((section("sfrs"),address(0xBF81104C)));
#define DCRCXOR DCRCXOR
volatile uint32_t   DCRCXOR __attribute__((section("sfrs"), address(0xBF811050)));
typedef struct {
  uint32_t DCRCXOR:32;
} __DCRCXORbits_t;
volatile __DCRCXORbits_t DCRCXORbits __asm__ ("DCRCXOR") __attribute__((section("sfrs"), address(0xBF811050)));
volatile uint32_t        DCRCXORCLR __attribute__((section("sfrs"),address(0xBF811054)));
volatile uint32_t        DCRCXORSET __attribute__((section("sfrs"),address(0xBF811058)));
volatile uint32_t        DCRCXORINV __attribute__((section("sfrs"),address(0xBF81105C)));
#define DCH0CON DCH0CON
volatile uint32_t   DCH0CON __attribute__((section("sfrs"), address(0xBF811060)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH0CONbits_t;
volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON") __attribute__((section("sfrs"), address(0xBF811060)));
volatile uint32_t        DCH0CONCLR __attribute__((section("sfrs"),address(0xBF811064)));
volatile uint32_t        DCH0CONSET __attribute__((section("sfrs"),address(0xBF811068)));
volatile uint32_t        DCH0CONINV __attribute__((section("sfrs"),address(0xBF81106C)));
#define DCH0ECON DCH0ECON
volatile uint32_t   DCH0ECON __attribute__((section("sfrs"), address(0xBF811070)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH0ECONbits_t;
volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON") __attribute__((section("sfrs"), address(0xBF811070)));
volatile uint32_t        DCH0ECONCLR __attribute__((section("sfrs"),address(0xBF811074)));
volatile uint32_t        DCH0ECONSET __attribute__((section("sfrs"),address(0xBF811078)));
volatile uint32_t        DCH0ECONINV __attribute__((section("sfrs"),address(0xBF81107C)));
#define DCH0INT DCH0INT
volatile uint32_t   DCH0INT __attribute__((section("sfrs"), address(0xBF811080)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH0INTbits_t;
volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT") __attribute__((section("sfrs"), address(0xBF811080)));
volatile uint32_t        DCH0INTCLR __attribute__((section("sfrs"),address(0xBF811084)));
volatile uint32_t        DCH0INTSET __attribute__((section("sfrs"),address(0xBF811088)));
volatile uint32_t        DCH0INTINV __attribute__((section("sfrs"),address(0xBF81108C)));
#define DCH0SSA DCH0SSA
volatile uint32_t   DCH0SSA __attribute__((section("sfrs"), address(0xBF811090)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH0SSAbits_t;
volatile __DCH0SSAbits_t DCH0SSAbits __asm__ ("DCH0SSA") __attribute__((section("sfrs"), address(0xBF811090)));
volatile uint32_t        DCH0SSACLR __attribute__((section("sfrs"),address(0xBF811094)));
volatile uint32_t        DCH0SSASET __attribute__((section("sfrs"),address(0xBF811098)));
volatile uint32_t        DCH0SSAINV __attribute__((section("sfrs"),address(0xBF81109C)));
#define DCH0DSA DCH0DSA
volatile uint32_t   DCH0DSA __attribute__((section("sfrs"), address(0xBF8110A0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH0DSAbits_t;
volatile __DCH0DSAbits_t DCH0DSAbits __asm__ ("DCH0DSA") __attribute__((section("sfrs"), address(0xBF8110A0)));
volatile uint32_t        DCH0DSACLR __attribute__((section("sfrs"),address(0xBF8110A4)));
volatile uint32_t        DCH0DSASET __attribute__((section("sfrs"),address(0xBF8110A8)));
volatile uint32_t        DCH0DSAINV __attribute__((section("sfrs"),address(0xBF8110AC)));
#define DCH0SSIZ DCH0SSIZ
volatile uint32_t   DCH0SSIZ __attribute__((section("sfrs"), address(0xBF8110B0)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH0SSIZbits_t;
volatile __DCH0SSIZbits_t DCH0SSIZbits __asm__ ("DCH0SSIZ") __attribute__((section("sfrs"), address(0xBF8110B0)));
volatile uint32_t        DCH0SSIZCLR __attribute__((section("sfrs"),address(0xBF8110B4)));
volatile uint32_t        DCH0SSIZSET __attribute__((section("sfrs"),address(0xBF8110B8)));
volatile uint32_t        DCH0SSIZINV __attribute__((section("sfrs"),address(0xBF8110BC)));
#define DCH0DSIZ DCH0DSIZ
volatile uint32_t   DCH0DSIZ __attribute__((section("sfrs"), address(0xBF8110C0)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH0DSIZbits_t;
volatile __DCH0DSIZbits_t DCH0DSIZbits __asm__ ("DCH0DSIZ") __attribute__((section("sfrs"), address(0xBF8110C0)));
volatile uint32_t        DCH0DSIZCLR __attribute__((section("sfrs"),address(0xBF8110C4)));
volatile uint32_t        DCH0DSIZSET __attribute__((section("sfrs"),address(0xBF8110C8)));
volatile uint32_t        DCH0DSIZINV __attribute__((section("sfrs"),address(0xBF8110CC)));
#define DCH0SPTR DCH0SPTR
volatile uint32_t   DCH0SPTR __attribute__((section("sfrs"), address(0xBF8110D0)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH0SPTRbits_t;
volatile __DCH0SPTRbits_t DCH0SPTRbits __asm__ ("DCH0SPTR") __attribute__((section("sfrs"), address(0xBF8110D0)));
volatile uint32_t        DCH0SPTRCLR __attribute__((section("sfrs"),address(0xBF8110D4)));
volatile uint32_t        DCH0SPTRSET __attribute__((section("sfrs"),address(0xBF8110D8)));
volatile uint32_t        DCH0SPTRINV __attribute__((section("sfrs"),address(0xBF8110DC)));
#define DCH0DPTR DCH0DPTR
volatile uint32_t   DCH0DPTR __attribute__((section("sfrs"), address(0xBF8110E0)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH0DPTRbits_t;
volatile __DCH0DPTRbits_t DCH0DPTRbits __asm__ ("DCH0DPTR") __attribute__((section("sfrs"), address(0xBF8110E0)));
volatile uint32_t        DCH0DPTRCLR __attribute__((section("sfrs"),address(0xBF8110E4)));
volatile uint32_t        DCH0DPTRSET __attribute__((section("sfrs"),address(0xBF8110E8)));
volatile uint32_t        DCH0DPTRINV __attribute__((section("sfrs"),address(0xBF8110EC)));
#define DCH0CSIZ DCH0CSIZ
volatile uint32_t   DCH0CSIZ __attribute__((section("sfrs"), address(0xBF8110F0)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH0CSIZbits_t;
volatile __DCH0CSIZbits_t DCH0CSIZbits __asm__ ("DCH0CSIZ") __attribute__((section("sfrs"), address(0xBF8110F0)));
volatile uint32_t        DCH0CSIZCLR __attribute__((section("sfrs"),address(0xBF8110F4)));
volatile uint32_t        DCH0CSIZSET __attribute__((section("sfrs"),address(0xBF8110F8)));
volatile uint32_t        DCH0CSIZINV __attribute__((section("sfrs"),address(0xBF8110FC)));
#define DCH0CPTR DCH0CPTR
volatile uint32_t   DCH0CPTR __attribute__((section("sfrs"), address(0xBF811100)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH0CPTRbits_t;
volatile __DCH0CPTRbits_t DCH0CPTRbits __asm__ ("DCH0CPTR") __attribute__((section("sfrs"), address(0xBF811100)));
#define DCS0CPTR DCS0CPTR
volatile uint32_t   DCS0CPTR __attribute__((section("sfrs"), address(0xBF811100)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS0CPTRbits_t;
volatile __DCS0CPTRbits_t DCS0CPTRbits __asm__ ("DCS0CPTR") __attribute__((section("sfrs"), address(0xBF811100)));
volatile uint32_t        DCH0CPTRCLR __attribute__((section("sfrs"),address(0xBF811104)));
volatile uint32_t        DCS0CPTRCLR __attribute__((section("sfrs"),address(0xBF811104)));
volatile uint32_t        DCH0CPTRSET __attribute__((section("sfrs"),address(0xBF811108)));
volatile uint32_t        DCS0CPTRSET __attribute__((section("sfrs"),address(0xBF811108)));
volatile uint32_t        DCH0CPTRINV __attribute__((section("sfrs"),address(0xBF81110C)));
volatile uint32_t        DCS0CPTRINV __attribute__((section("sfrs"),address(0xBF81110C)));
#define DCH0DAT DCH0DAT
volatile uint32_t   DCH0DAT __attribute__((section("sfrs"), address(0xBF811110)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH0DATbits_t;
volatile __DCH0DATbits_t DCH0DATbits __asm__ ("DCH0DAT") __attribute__((section("sfrs"), address(0xBF811110)));
volatile uint32_t        DCH0DATCLR __attribute__((section("sfrs"),address(0xBF811114)));
volatile uint32_t        DCH0DATSET __attribute__((section("sfrs"),address(0xBF811118)));
volatile uint32_t        DCH0DATINV __attribute__((section("sfrs"),address(0xBF81111C)));
#define DCH1CON DCH1CON
volatile uint32_t   DCH1CON __attribute__((section("sfrs"), address(0xBF811120)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH1CONbits_t;
volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON") __attribute__((section("sfrs"), address(0xBF811120)));
volatile uint32_t        DCH1CONCLR __attribute__((section("sfrs"),address(0xBF811124)));
volatile uint32_t        DCH1CONSET __attribute__((section("sfrs"),address(0xBF811128)));
volatile uint32_t        DCH1CONINV __attribute__((section("sfrs"),address(0xBF81112C)));
#define DCH1ECON DCH1ECON
volatile uint32_t   DCH1ECON __attribute__((section("sfrs"), address(0xBF811130)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH1ECONbits_t;
volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON") __attribute__((section("sfrs"), address(0xBF811130)));
volatile uint32_t        DCH1ECONCLR __attribute__((section("sfrs"),address(0xBF811134)));
volatile uint32_t        DCH1ECONSET __attribute__((section("sfrs"),address(0xBF811138)));
volatile uint32_t        DCH1ECONINV __attribute__((section("sfrs"),address(0xBF81113C)));
#define DCH1INT DCH1INT
volatile uint32_t   DCH1INT __attribute__((section("sfrs"), address(0xBF811140)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH1INTbits_t;
volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT") __attribute__((section("sfrs"), address(0xBF811140)));
volatile uint32_t        DCH1INTCLR __attribute__((section("sfrs"),address(0xBF811144)));
volatile uint32_t        DCH1INTSET __attribute__((section("sfrs"),address(0xBF811148)));
volatile uint32_t        DCH1INTINV __attribute__((section("sfrs"),address(0xBF81114C)));
#define DCH1SSA DCH1SSA
volatile uint32_t   DCH1SSA __attribute__((section("sfrs"), address(0xBF811150)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH1SSAbits_t;
volatile __DCH1SSAbits_t DCH1SSAbits __asm__ ("DCH1SSA") __attribute__((section("sfrs"), address(0xBF811150)));
volatile uint32_t        DCH1SSACLR __attribute__((section("sfrs"),address(0xBF811154)));
volatile uint32_t        DCH1SSASET __attribute__((section("sfrs"),address(0xBF811158)));
volatile uint32_t        DCH1SSAINV __attribute__((section("sfrs"),address(0xBF81115C)));
#define DCH1DSA DCH1DSA
volatile uint32_t   DCH1DSA __attribute__((section("sfrs"), address(0xBF811160)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH1DSAbits_t;
volatile __DCH1DSAbits_t DCH1DSAbits __asm__ ("DCH1DSA") __attribute__((section("sfrs"), address(0xBF811160)));
volatile uint32_t        DCH1DSACLR __attribute__((section("sfrs"),address(0xBF811164)));
volatile uint32_t        DCH1DSASET __attribute__((section("sfrs"),address(0xBF811168)));
volatile uint32_t        DCH1DSAINV __attribute__((section("sfrs"),address(0xBF81116C)));
#define DCH1SSIZ DCH1SSIZ
volatile uint32_t   DCH1SSIZ __attribute__((section("sfrs"), address(0xBF811170)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH1SSIZbits_t;
volatile __DCH1SSIZbits_t DCH1SSIZbits __asm__ ("DCH1SSIZ") __attribute__((section("sfrs"), address(0xBF811170)));
volatile uint32_t        DCH1SSIZCLR __attribute__((section("sfrs"),address(0xBF811174)));
volatile uint32_t        DCH1SSIZSET __attribute__((section("sfrs"),address(0xBF811178)));
volatile uint32_t        DCH1SSIZINV __attribute__((section("sfrs"),address(0xBF81117C)));
#define DCH1DSIZ DCH1DSIZ
volatile uint32_t   DCH1DSIZ __attribute__((section("sfrs"), address(0xBF811180)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH1DSIZbits_t;
volatile __DCH1DSIZbits_t DCH1DSIZbits __asm__ ("DCH1DSIZ") __attribute__((section("sfrs"), address(0xBF811180)));
volatile uint32_t        DCH1DSIZCLR __attribute__((section("sfrs"),address(0xBF811184)));
volatile uint32_t        DCH1DSIZSET __attribute__((section("sfrs"),address(0xBF811188)));
volatile uint32_t        DCH1DSIZINV __attribute__((section("sfrs"),address(0xBF81118C)));
#define DCH1SPTR DCH1SPTR
volatile uint32_t   DCH1SPTR __attribute__((section("sfrs"), address(0xBF811190)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH1SPTRbits_t;
volatile __DCH1SPTRbits_t DCH1SPTRbits __asm__ ("DCH1SPTR") __attribute__((section("sfrs"), address(0xBF811190)));
volatile uint32_t        DCH1SPTRCLR __attribute__((section("sfrs"),address(0xBF811194)));
volatile uint32_t        DCH1SPTRSET __attribute__((section("sfrs"),address(0xBF811198)));
volatile uint32_t        DCH1SPTRINV __attribute__((section("sfrs"),address(0xBF81119C)));
#define DCH1DPTR DCH1DPTR
volatile uint32_t   DCH1DPTR __attribute__((section("sfrs"), address(0xBF8111A0)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH1DPTRbits_t;
volatile __DCH1DPTRbits_t DCH1DPTRbits __asm__ ("DCH1DPTR") __attribute__((section("sfrs"), address(0xBF8111A0)));
volatile uint32_t        DCH1DPTRCLR __attribute__((section("sfrs"),address(0xBF8111A4)));
volatile uint32_t        DCH1DPTRSET __attribute__((section("sfrs"),address(0xBF8111A8)));
volatile uint32_t        DCH1DPTRINV __attribute__((section("sfrs"),address(0xBF8111AC)));
#define DCH1CSIZ DCH1CSIZ
volatile uint32_t   DCH1CSIZ __attribute__((section("sfrs"), address(0xBF8111B0)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH1CSIZbits_t;
volatile __DCH1CSIZbits_t DCH1CSIZbits __asm__ ("DCH1CSIZ") __attribute__((section("sfrs"), address(0xBF8111B0)));
volatile uint32_t        DCH1CSIZCLR __attribute__((section("sfrs"),address(0xBF8111B4)));
volatile uint32_t        DCH1CSIZSET __attribute__((section("sfrs"),address(0xBF8111B8)));
volatile uint32_t        DCH1CSIZINV __attribute__((section("sfrs"),address(0xBF8111BC)));
#define DCH1CPTR DCH1CPTR
volatile uint32_t   DCH1CPTR __attribute__((section("sfrs"), address(0xBF8111C0)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH1CPTRbits_t;
volatile __DCH1CPTRbits_t DCH1CPTRbits __asm__ ("DCH1CPTR") __attribute__((section("sfrs"), address(0xBF8111C0)));
#define DCS1CPTR DCS1CPTR
volatile uint32_t   DCS1CPTR __attribute__((section("sfrs"), address(0xBF8111C0)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS1CPTRbits_t;
volatile __DCS1CPTRbits_t DCS1CPTRbits __asm__ ("DCS1CPTR") __attribute__((section("sfrs"), address(0xBF8111C0)));
volatile uint32_t        DCH1CPTRCLR __attribute__((section("sfrs"),address(0xBF8111C4)));
volatile uint32_t        DCS1CPTRCLR __attribute__((section("sfrs"),address(0xBF8111C4)));
volatile uint32_t        DCH1CPTRSET __attribute__((section("sfrs"),address(0xBF8111C8)));
volatile uint32_t        DCS1CPTRSET __attribute__((section("sfrs"),address(0xBF8111C8)));
volatile uint32_t        DCH1CPTRINV __attribute__((section("sfrs"),address(0xBF8111CC)));
volatile uint32_t        DCS1CPTRINV __attribute__((section("sfrs"),address(0xBF8111CC)));
#define DCH1DAT DCH1DAT
volatile uint32_t   DCH1DAT __attribute__((section("sfrs"), address(0xBF8111D0)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH1DATbits_t;
volatile __DCH1DATbits_t DCH1DATbits __asm__ ("DCH1DAT") __attribute__((section("sfrs"), address(0xBF8111D0)));
volatile uint32_t        DCH1DATCLR __attribute__((section("sfrs"),address(0xBF8111D4)));
volatile uint32_t        DCH1DATSET __attribute__((section("sfrs"),address(0xBF8111D8)));
volatile uint32_t        DCH1DATINV __attribute__((section("sfrs"),address(0xBF8111DC)));
#define DCH2CON DCH2CON
volatile uint32_t   DCH2CON __attribute__((section("sfrs"), address(0xBF8111E0)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH2CONbits_t;
volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON") __attribute__((section("sfrs"), address(0xBF8111E0)));
volatile uint32_t        DCH2CONCLR __attribute__((section("sfrs"),address(0xBF8111E4)));
volatile uint32_t        DCH2CONSET __attribute__((section("sfrs"),address(0xBF8111E8)));
volatile uint32_t        DCH2CONINV __attribute__((section("sfrs"),address(0xBF8111EC)));
#define DCH2ECON DCH2ECON
volatile uint32_t   DCH2ECON __attribute__((section("sfrs"), address(0xBF8111F0)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH2ECONbits_t;
volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON") __attribute__((section("sfrs"), address(0xBF8111F0)));
volatile uint32_t        DCH2ECONCLR __attribute__((section("sfrs"),address(0xBF8111F4)));
volatile uint32_t        DCH2ECONSET __attribute__((section("sfrs"),address(0xBF8111F8)));
volatile uint32_t        DCH2ECONINV __attribute__((section("sfrs"),address(0xBF8111FC)));
#define DCH2INT DCH2INT
volatile uint32_t   DCH2INT __attribute__((section("sfrs"), address(0xBF811200)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH2INTbits_t;
volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT") __attribute__((section("sfrs"), address(0xBF811200)));
volatile uint32_t        DCH2INTCLR __attribute__((section("sfrs"),address(0xBF811204)));
volatile uint32_t        DCH2INTSET __attribute__((section("sfrs"),address(0xBF811208)));
volatile uint32_t        DCH2INTINV __attribute__((section("sfrs"),address(0xBF81120C)));
#define DCH2SSA DCH2SSA
volatile uint32_t   DCH2SSA __attribute__((section("sfrs"), address(0xBF811210)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH2SSAbits_t;
volatile __DCH2SSAbits_t DCH2SSAbits __asm__ ("DCH2SSA") __attribute__((section("sfrs"), address(0xBF811210)));
volatile uint32_t        DCH2SSACLR __attribute__((section("sfrs"),address(0xBF811214)));
volatile uint32_t        DCH2SSASET __attribute__((section("sfrs"),address(0xBF811218)));
volatile uint32_t        DCH2SSAINV __attribute__((section("sfrs"),address(0xBF81121C)));
#define DCH2DSA DCH2DSA
volatile uint32_t   DCH2DSA __attribute__((section("sfrs"), address(0xBF811220)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH2DSAbits_t;
volatile __DCH2DSAbits_t DCH2DSAbits __asm__ ("DCH2DSA") __attribute__((section("sfrs"), address(0xBF811220)));
volatile uint32_t        DCH2DSACLR __attribute__((section("sfrs"),address(0xBF811224)));
volatile uint32_t        DCH2DSASET __attribute__((section("sfrs"),address(0xBF811228)));
volatile uint32_t        DCH2DSAINV __attribute__((section("sfrs"),address(0xBF81122C)));
#define DCH2SSIZ DCH2SSIZ
volatile uint32_t   DCH2SSIZ __attribute__((section("sfrs"), address(0xBF811230)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH2SSIZbits_t;
volatile __DCH2SSIZbits_t DCH2SSIZbits __asm__ ("DCH2SSIZ") __attribute__((section("sfrs"), address(0xBF811230)));
volatile uint32_t        DCH2SSIZCLR __attribute__((section("sfrs"),address(0xBF811234)));
volatile uint32_t        DCH2SSIZSET __attribute__((section("sfrs"),address(0xBF811238)));
volatile uint32_t        DCH2SSIZINV __attribute__((section("sfrs"),address(0xBF81123C)));
#define DCH2DSIZ DCH2DSIZ
volatile uint32_t   DCH2DSIZ __attribute__((section("sfrs"), address(0xBF811240)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH2DSIZbits_t;
volatile __DCH2DSIZbits_t DCH2DSIZbits __asm__ ("DCH2DSIZ") __attribute__((section("sfrs"), address(0xBF811240)));
volatile uint32_t        DCH2DSIZCLR __attribute__((section("sfrs"),address(0xBF811244)));
volatile uint32_t        DCH2DSIZSET __attribute__((section("sfrs"),address(0xBF811248)));
volatile uint32_t        DCH2DSIZINV __attribute__((section("sfrs"),address(0xBF81124C)));
#define DCH2SPTR DCH2SPTR
volatile uint32_t   DCH2SPTR __attribute__((section("sfrs"), address(0xBF811250)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH2SPTRbits_t;
volatile __DCH2SPTRbits_t DCH2SPTRbits __asm__ ("DCH2SPTR") __attribute__((section("sfrs"), address(0xBF811250)));
volatile uint32_t        DCH2SPTRCLR __attribute__((section("sfrs"),address(0xBF811254)));
volatile uint32_t        DCH2SPTRSET __attribute__((section("sfrs"),address(0xBF811258)));
volatile uint32_t        DCH2SPTRINV __attribute__((section("sfrs"),address(0xBF81125C)));
#define DCH2DPTR DCH2DPTR
volatile uint32_t   DCH2DPTR __attribute__((section("sfrs"), address(0xBF811260)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH2DPTRbits_t;
volatile __DCH2DPTRbits_t DCH2DPTRbits __asm__ ("DCH2DPTR") __attribute__((section("sfrs"), address(0xBF811260)));
volatile uint32_t        DCH2DPTRCLR __attribute__((section("sfrs"),address(0xBF811264)));
volatile uint32_t        DCH2DPTRSET __attribute__((section("sfrs"),address(0xBF811268)));
volatile uint32_t        DCH2DPTRINV __attribute__((section("sfrs"),address(0xBF81126C)));
#define DCH2CSIZ DCH2CSIZ
volatile uint32_t   DCH2CSIZ __attribute__((section("sfrs"), address(0xBF811270)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH2CSIZbits_t;
volatile __DCH2CSIZbits_t DCH2CSIZbits __asm__ ("DCH2CSIZ") __attribute__((section("sfrs"), address(0xBF811270)));
volatile uint32_t        DCH2CSIZCLR __attribute__((section("sfrs"),address(0xBF811274)));
volatile uint32_t        DCH2CSIZSET __attribute__((section("sfrs"),address(0xBF811278)));
volatile uint32_t        DCH2CSIZINV __attribute__((section("sfrs"),address(0xBF81127C)));
#define DCH2CPTR DCH2CPTR
volatile uint32_t   DCH2CPTR __attribute__((section("sfrs"), address(0xBF811280)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH2CPTRbits_t;
volatile __DCH2CPTRbits_t DCH2CPTRbits __asm__ ("DCH2CPTR") __attribute__((section("sfrs"), address(0xBF811280)));
#define DCS2CPTR DCS2CPTR
volatile uint32_t   DCS2CPTR __attribute__((section("sfrs"), address(0xBF811280)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS2CPTRbits_t;
volatile __DCS2CPTRbits_t DCS2CPTRbits __asm__ ("DCS2CPTR") __attribute__((section("sfrs"), address(0xBF811280)));
volatile uint32_t        DCH2CPTRCLR __attribute__((section("sfrs"),address(0xBF811284)));
volatile uint32_t        DCS2CPTRCLR __attribute__((section("sfrs"),address(0xBF811284)));
volatile uint32_t        DCH2CPTRSET __attribute__((section("sfrs"),address(0xBF811288)));
volatile uint32_t        DCS2CPTRSET __attribute__((section("sfrs"),address(0xBF811288)));
volatile uint32_t        DCH2CPTRINV __attribute__((section("sfrs"),address(0xBF81128C)));
volatile uint32_t        DCS2CPTRINV __attribute__((section("sfrs"),address(0xBF81128C)));
#define DCH2DAT DCH2DAT
volatile uint32_t   DCH2DAT __attribute__((section("sfrs"), address(0xBF811290)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH2DATbits_t;
volatile __DCH2DATbits_t DCH2DATbits __asm__ ("DCH2DAT") __attribute__((section("sfrs"), address(0xBF811290)));
volatile uint32_t        DCH2DATCLR __attribute__((section("sfrs"),address(0xBF811294)));
volatile uint32_t        DCH2DATSET __attribute__((section("sfrs"),address(0xBF811298)));
volatile uint32_t        DCH2DATINV __attribute__((section("sfrs"),address(0xBF81129C)));
#define DCH3CON DCH3CON
volatile uint32_t   DCH3CON __attribute__((section("sfrs"), address(0xBF8112A0)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH3CONbits_t;
volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON") __attribute__((section("sfrs"), address(0xBF8112A0)));
volatile uint32_t        DCH3CONCLR __attribute__((section("sfrs"),address(0xBF8112A4)));
volatile uint32_t        DCH3CONSET __attribute__((section("sfrs"),address(0xBF8112A8)));
volatile uint32_t        DCH3CONINV __attribute__((section("sfrs"),address(0xBF8112AC)));
#define DCH3ECON DCH3ECON
volatile uint32_t   DCH3ECON __attribute__((section("sfrs"), address(0xBF8112B0)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH3ECONbits_t;
volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON") __attribute__((section("sfrs"), address(0xBF8112B0)));
volatile uint32_t        DCH3ECONCLR __attribute__((section("sfrs"),address(0xBF8112B4)));
volatile uint32_t        DCH3ECONSET __attribute__((section("sfrs"),address(0xBF8112B8)));
volatile uint32_t        DCH3ECONINV __attribute__((section("sfrs"),address(0xBF8112BC)));
#define DCH3INT DCH3INT
volatile uint32_t   DCH3INT __attribute__((section("sfrs"), address(0xBF8112C0)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH3INTbits_t;
volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT") __attribute__((section("sfrs"), address(0xBF8112C0)));
volatile uint32_t        DCH3INTCLR __attribute__((section("sfrs"),address(0xBF8112C4)));
volatile uint32_t        DCH3INTSET __attribute__((section("sfrs"),address(0xBF8112C8)));
volatile uint32_t        DCH3INTINV __attribute__((section("sfrs"),address(0xBF8112CC)));
#define DCH3SSA DCH3SSA
volatile uint32_t   DCH3SSA __attribute__((section("sfrs"), address(0xBF8112D0)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH3SSAbits_t;
volatile __DCH3SSAbits_t DCH3SSAbits __asm__ ("DCH3SSA") __attribute__((section("sfrs"), address(0xBF8112D0)));
volatile uint32_t        DCH3SSACLR __attribute__((section("sfrs"),address(0xBF8112D4)));
volatile uint32_t        DCH3SSASET __attribute__((section("sfrs"),address(0xBF8112D8)));
volatile uint32_t        DCH3SSAINV __attribute__((section("sfrs"),address(0xBF8112DC)));
#define DCH3DSA DCH3DSA
volatile uint32_t   DCH3DSA __attribute__((section("sfrs"), address(0xBF8112E0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH3DSAbits_t;
volatile __DCH3DSAbits_t DCH3DSAbits __asm__ ("DCH3DSA") __attribute__((section("sfrs"), address(0xBF8112E0)));
volatile uint32_t        DCH3DSACLR __attribute__((section("sfrs"),address(0xBF8112E4)));
volatile uint32_t        DCH3DSASET __attribute__((section("sfrs"),address(0xBF8112E8)));
volatile uint32_t        DCH3DSAINV __attribute__((section("sfrs"),address(0xBF8112EC)));
#define DCH3SSIZ DCH3SSIZ
volatile uint32_t   DCH3SSIZ __attribute__((section("sfrs"), address(0xBF8112F0)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH3SSIZbits_t;
volatile __DCH3SSIZbits_t DCH3SSIZbits __asm__ ("DCH3SSIZ") __attribute__((section("sfrs"), address(0xBF8112F0)));
volatile uint32_t        DCH3SSIZCLR __attribute__((section("sfrs"),address(0xBF8112F4)));
volatile uint32_t        DCH3SSIZSET __attribute__((section("sfrs"),address(0xBF8112F8)));
volatile uint32_t        DCH3SSIZINV __attribute__((section("sfrs"),address(0xBF8112FC)));
#define DCH3DSIZ DCH3DSIZ
volatile uint32_t   DCH3DSIZ __attribute__((section("sfrs"), address(0xBF811300)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH3DSIZbits_t;
volatile __DCH3DSIZbits_t DCH3DSIZbits __asm__ ("DCH3DSIZ") __attribute__((section("sfrs"), address(0xBF811300)));
volatile uint32_t        DCH3DSIZCLR __attribute__((section("sfrs"),address(0xBF811304)));
volatile uint32_t        DCH3DSIZSET __attribute__((section("sfrs"),address(0xBF811308)));
volatile uint32_t        DCH3DSIZINV __attribute__((section("sfrs"),address(0xBF81130C)));
#define DCH3SPTR DCH3SPTR
volatile uint32_t   DCH3SPTR __attribute__((section("sfrs"), address(0xBF811310)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH3SPTRbits_t;
volatile __DCH3SPTRbits_t DCH3SPTRbits __asm__ ("DCH3SPTR") __attribute__((section("sfrs"), address(0xBF811310)));
volatile uint32_t        DCH3SPTRCLR __attribute__((section("sfrs"),address(0xBF811314)));
volatile uint32_t        DCH3SPTRSET __attribute__((section("sfrs"),address(0xBF811318)));
volatile uint32_t        DCH3SPTRINV __attribute__((section("sfrs"),address(0xBF81131C)));
#define DCH3DPTR DCH3DPTR
volatile uint32_t   DCH3DPTR __attribute__((section("sfrs"), address(0xBF811320)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH3DPTRbits_t;
volatile __DCH3DPTRbits_t DCH3DPTRbits __asm__ ("DCH3DPTR") __attribute__((section("sfrs"), address(0xBF811320)));
volatile uint32_t        DCH3DPTRCLR __attribute__((section("sfrs"),address(0xBF811324)));
volatile uint32_t        DCH3DPTRSET __attribute__((section("sfrs"),address(0xBF811328)));
volatile uint32_t        DCH3DPTRINV __attribute__((section("sfrs"),address(0xBF81132C)));
#define DCH3CSIZ DCH3CSIZ
volatile uint32_t   DCH3CSIZ __attribute__((section("sfrs"), address(0xBF811330)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH3CSIZbits_t;
volatile __DCH3CSIZbits_t DCH3CSIZbits __asm__ ("DCH3CSIZ") __attribute__((section("sfrs"), address(0xBF811330)));
volatile uint32_t        DCH3CSIZCLR __attribute__((section("sfrs"),address(0xBF811334)));
volatile uint32_t        DCH3CSIZSET __attribute__((section("sfrs"),address(0xBF811338)));
volatile uint32_t        DCH3CSIZINV __attribute__((section("sfrs"),address(0xBF81133C)));
#define DCH3CPTR DCH3CPTR
volatile uint32_t   DCH3CPTR __attribute__((section("sfrs"), address(0xBF811340)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH3CPTRbits_t;
volatile __DCH3CPTRbits_t DCH3CPTRbits __asm__ ("DCH3CPTR") __attribute__((section("sfrs"), address(0xBF811340)));
#define DCS3CPTR DCS3CPTR
volatile uint32_t   DCS3CPTR __attribute__((section("sfrs"), address(0xBF811340)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS3CPTRbits_t;
volatile __DCS3CPTRbits_t DCS3CPTRbits __asm__ ("DCS3CPTR") __attribute__((section("sfrs"), address(0xBF811340)));
volatile uint32_t        DCH3CPTRCLR __attribute__((section("sfrs"),address(0xBF811344)));
volatile uint32_t        DCS3CPTRCLR __attribute__((section("sfrs"),address(0xBF811344)));
volatile uint32_t        DCH3CPTRSET __attribute__((section("sfrs"),address(0xBF811348)));
volatile uint32_t        DCS3CPTRSET __attribute__((section("sfrs"),address(0xBF811348)));
volatile uint32_t        DCH3CPTRINV __attribute__((section("sfrs"),address(0xBF81134C)));
volatile uint32_t        DCS3CPTRINV __attribute__((section("sfrs"),address(0xBF81134C)));
#define DCH3DAT DCH3DAT
volatile uint32_t   DCH3DAT __attribute__((section("sfrs"), address(0xBF811350)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH3DATbits_t;
volatile __DCH3DATbits_t DCH3DATbits __asm__ ("DCH3DAT") __attribute__((section("sfrs"), address(0xBF811350)));
volatile uint32_t        DCH3DATCLR __attribute__((section("sfrs"),address(0xBF811354)));
volatile uint32_t        DCH3DATSET __attribute__((section("sfrs"),address(0xBF811358)));
volatile uint32_t        DCH3DATINV __attribute__((section("sfrs"),address(0xBF81135C)));
#define DCH4CON DCH4CON
volatile uint32_t   DCH4CON __attribute__((section("sfrs"), address(0xBF811360)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH4CONbits_t;
volatile __DCH4CONbits_t DCH4CONbits __asm__ ("DCH4CON") __attribute__((section("sfrs"), address(0xBF811360)));
volatile uint32_t        DCH4CONCLR __attribute__((section("sfrs"),address(0xBF811364)));
volatile uint32_t        DCH4CONSET __attribute__((section("sfrs"),address(0xBF811368)));
volatile uint32_t        DCH4CONINV __attribute__((section("sfrs"),address(0xBF81136C)));
#define DCH4ECON DCH4ECON
volatile uint32_t   DCH4ECON __attribute__((section("sfrs"), address(0xBF811370)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH4ECONbits_t;
volatile __DCH4ECONbits_t DCH4ECONbits __asm__ ("DCH4ECON") __attribute__((section("sfrs"), address(0xBF811370)));
volatile uint32_t        DCH4ECONCLR __attribute__((section("sfrs"),address(0xBF811374)));
volatile uint32_t        DCH4ECONSET __attribute__((section("sfrs"),address(0xBF811378)));
volatile uint32_t        DCH4ECONINV __attribute__((section("sfrs"),address(0xBF81137C)));
#define DCH4INT DCH4INT
volatile uint32_t   DCH4INT __attribute__((section("sfrs"), address(0xBF811380)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH4INTbits_t;
volatile __DCH4INTbits_t DCH4INTbits __asm__ ("DCH4INT") __attribute__((section("sfrs"), address(0xBF811380)));
volatile uint32_t        DCH4INTCLR __attribute__((section("sfrs"),address(0xBF811384)));
volatile uint32_t        DCH4INTSET __attribute__((section("sfrs"),address(0xBF811388)));
volatile uint32_t        DCH4INTINV __attribute__((section("sfrs"),address(0xBF81138C)));
#define DCH4SSA DCH4SSA
volatile uint32_t   DCH4SSA __attribute__((section("sfrs"), address(0xBF811390)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH4SSAbits_t;
volatile __DCH4SSAbits_t DCH4SSAbits __asm__ ("DCH4SSA") __attribute__((section("sfrs"), address(0xBF811390)));
volatile uint32_t        DCH4SSACLR __attribute__((section("sfrs"),address(0xBF811394)));
volatile uint32_t        DCH4SSASET __attribute__((section("sfrs"),address(0xBF811398)));
volatile uint32_t        DCH4SSAINV __attribute__((section("sfrs"),address(0xBF81139C)));
#define DCH4DSA DCH4DSA
volatile uint32_t   DCH4DSA __attribute__((section("sfrs"), address(0xBF8113A0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH4DSAbits_t;
volatile __DCH4DSAbits_t DCH4DSAbits __asm__ ("DCH4DSA") __attribute__((section("sfrs"), address(0xBF8113A0)));
volatile uint32_t        DCH4DSACLR __attribute__((section("sfrs"),address(0xBF8113A4)));
volatile uint32_t        DCH4DSASET __attribute__((section("sfrs"),address(0xBF8113A8)));
volatile uint32_t        DCH4DSAINV __attribute__((section("sfrs"),address(0xBF8113AC)));
#define DCH4SSIZ DCH4SSIZ
volatile uint32_t   DCH4SSIZ __attribute__((section("sfrs"), address(0xBF8113B0)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH4SSIZbits_t;
volatile __DCH4SSIZbits_t DCH4SSIZbits __asm__ ("DCH4SSIZ") __attribute__((section("sfrs"), address(0xBF8113B0)));
volatile uint32_t        DCH4SSIZCLR __attribute__((section("sfrs"),address(0xBF8113B4)));
volatile uint32_t        DCH4SSIZSET __attribute__((section("sfrs"),address(0xBF8113B8)));
volatile uint32_t        DCH4SSIZINV __attribute__((section("sfrs"),address(0xBF8113BC)));
#define DCH4DSIZ DCH4DSIZ
volatile uint32_t   DCH4DSIZ __attribute__((section("sfrs"), address(0xBF8113C0)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH4DSIZbits_t;
volatile __DCH4DSIZbits_t DCH4DSIZbits __asm__ ("DCH4DSIZ") __attribute__((section("sfrs"), address(0xBF8113C0)));
volatile uint32_t        DCH4DSIZCLR __attribute__((section("sfrs"),address(0xBF8113C4)));
volatile uint32_t        DCH4DSIZSET __attribute__((section("sfrs"),address(0xBF8113C8)));
volatile uint32_t        DCH4DSIZINV __attribute__((section("sfrs"),address(0xBF8113CC)));
#define DCH4SPTR DCH4SPTR
volatile uint32_t   DCH4SPTR __attribute__((section("sfrs"), address(0xBF8113D0)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH4SPTRbits_t;
volatile __DCH4SPTRbits_t DCH4SPTRbits __asm__ ("DCH4SPTR") __attribute__((section("sfrs"), address(0xBF8113D0)));
volatile uint32_t        DCH4SPTRCLR __attribute__((section("sfrs"),address(0xBF8113D4)));
volatile uint32_t        DCH4SPTRSET __attribute__((section("sfrs"),address(0xBF8113D8)));
volatile uint32_t        DCH4SPTRINV __attribute__((section("sfrs"),address(0xBF8113DC)));
#define DCH4DPTR DCH4DPTR
volatile uint32_t   DCH4DPTR __attribute__((section("sfrs"), address(0xBF8113E0)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH4DPTRbits_t;
volatile __DCH4DPTRbits_t DCH4DPTRbits __asm__ ("DCH4DPTR") __attribute__((section("sfrs"), address(0xBF8113E0)));
volatile uint32_t        DCH4DPTRCLR __attribute__((section("sfrs"),address(0xBF8113E4)));
volatile uint32_t        DCH4DPTRSET __attribute__((section("sfrs"),address(0xBF8113E8)));
volatile uint32_t        DCH4DPTRINV __attribute__((section("sfrs"),address(0xBF8113EC)));
#define DCH4CSIZ DCH4CSIZ
volatile uint32_t   DCH4CSIZ __attribute__((section("sfrs"), address(0xBF8113F0)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH4CSIZbits_t;
volatile __DCH4CSIZbits_t DCH4CSIZbits __asm__ ("DCH4CSIZ") __attribute__((section("sfrs"), address(0xBF8113F0)));
volatile uint32_t        DCH4CSIZCLR __attribute__((section("sfrs"),address(0xBF8113F4)));
volatile uint32_t        DCH4CSIZSET __attribute__((section("sfrs"),address(0xBF8113F8)));
volatile uint32_t        DCH4CSIZINV __attribute__((section("sfrs"),address(0xBF8113FC)));
#define DCH4CPTR DCH4CPTR
volatile uint32_t   DCH4CPTR __attribute__((section("sfrs"), address(0xBF811400)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH4CPTRbits_t;
volatile __DCH4CPTRbits_t DCH4CPTRbits __asm__ ("DCH4CPTR") __attribute__((section("sfrs"), address(0xBF811400)));
#define DCS4CPTR DCS4CPTR
volatile uint32_t   DCS4CPTR __attribute__((section("sfrs"), address(0xBF811400)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS4CPTRbits_t;
volatile __DCS4CPTRbits_t DCS4CPTRbits __asm__ ("DCS4CPTR") __attribute__((section("sfrs"), address(0xBF811400)));
volatile uint32_t        DCH4CPTRCLR __attribute__((section("sfrs"),address(0xBF811404)));
volatile uint32_t        DCS4CPTRCLR __attribute__((section("sfrs"),address(0xBF811404)));
volatile uint32_t        DCH4CPTRSET __attribute__((section("sfrs"),address(0xBF811408)));
volatile uint32_t        DCS4CPTRSET __attribute__((section("sfrs"),address(0xBF811408)));
volatile uint32_t        DCH4CPTRINV __attribute__((section("sfrs"),address(0xBF81140C)));
volatile uint32_t        DCS4CPTRINV __attribute__((section("sfrs"),address(0xBF81140C)));
#define DCH4DAT DCH4DAT
volatile uint32_t   DCH4DAT __attribute__((section("sfrs"), address(0xBF811410)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH4DATbits_t;
volatile __DCH4DATbits_t DCH4DATbits __asm__ ("DCH4DAT") __attribute__((section("sfrs"), address(0xBF811410)));
volatile uint32_t        DCH4DATCLR __attribute__((section("sfrs"),address(0xBF811414)));
volatile uint32_t        DCH4DATSET __attribute__((section("sfrs"),address(0xBF811418)));
volatile uint32_t        DCH4DATINV __attribute__((section("sfrs"),address(0xBF81141C)));
#define DCH5CON DCH5CON
volatile uint32_t   DCH5CON __attribute__((section("sfrs"), address(0xBF811420)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH5CONbits_t;
volatile __DCH5CONbits_t DCH5CONbits __asm__ ("DCH5CON") __attribute__((section("sfrs"), address(0xBF811420)));
volatile uint32_t        DCH5CONCLR __attribute__((section("sfrs"),address(0xBF811424)));
volatile uint32_t        DCH5CONSET __attribute__((section("sfrs"),address(0xBF811428)));
volatile uint32_t        DCH5CONINV __attribute__((section("sfrs"),address(0xBF81142C)));
#define DCH5ECON DCH5ECON
volatile uint32_t   DCH5ECON __attribute__((section("sfrs"), address(0xBF811430)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH5ECONbits_t;
volatile __DCH5ECONbits_t DCH5ECONbits __asm__ ("DCH5ECON") __attribute__((section("sfrs"), address(0xBF811430)));
volatile uint32_t        DCH5ECONCLR __attribute__((section("sfrs"),address(0xBF811434)));
volatile uint32_t        DCH5ECONSET __attribute__((section("sfrs"),address(0xBF811438)));
volatile uint32_t        DCH5ECONINV __attribute__((section("sfrs"),address(0xBF81143C)));
#define DCH5INT DCH5INT
volatile uint32_t   DCH5INT __attribute__((section("sfrs"), address(0xBF811440)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH5INTbits_t;
volatile __DCH5INTbits_t DCH5INTbits __asm__ ("DCH5INT") __attribute__((section("sfrs"), address(0xBF811440)));
volatile uint32_t        DCH5INTCLR __attribute__((section("sfrs"),address(0xBF811444)));
volatile uint32_t        DCH5INTSET __attribute__((section("sfrs"),address(0xBF811448)));
volatile uint32_t        DCH5INTINV __attribute__((section("sfrs"),address(0xBF81144C)));
#define DCH5SSA DCH5SSA
volatile uint32_t   DCH5SSA __attribute__((section("sfrs"), address(0xBF811450)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH5SSAbits_t;
volatile __DCH5SSAbits_t DCH5SSAbits __asm__ ("DCH5SSA") __attribute__((section("sfrs"), address(0xBF811450)));
volatile uint32_t        DCH5SSACLR __attribute__((section("sfrs"),address(0xBF811454)));
volatile uint32_t        DCH5SSASET __attribute__((section("sfrs"),address(0xBF811458)));
volatile uint32_t        DCH5SSAINV __attribute__((section("sfrs"),address(0xBF81145C)));
#define DCH5DSA DCH5DSA
volatile uint32_t   DCH5DSA __attribute__((section("sfrs"), address(0xBF811460)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH5DSAbits_t;
volatile __DCH5DSAbits_t DCH5DSAbits __asm__ ("DCH5DSA") __attribute__((section("sfrs"), address(0xBF811460)));
volatile uint32_t        DCH5DSACLR __attribute__((section("sfrs"),address(0xBF811464)));
volatile uint32_t        DCH5DSASET __attribute__((section("sfrs"),address(0xBF811468)));
volatile uint32_t        DCH5DSAINV __attribute__((section("sfrs"),address(0xBF81146C)));
#define DCH5SSIZ DCH5SSIZ
volatile uint32_t   DCH5SSIZ __attribute__((section("sfrs"), address(0xBF811470)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH5SSIZbits_t;
volatile __DCH5SSIZbits_t DCH5SSIZbits __asm__ ("DCH5SSIZ") __attribute__((section("sfrs"), address(0xBF811470)));
volatile uint32_t        DCH5SSIZCLR __attribute__((section("sfrs"),address(0xBF811474)));
volatile uint32_t        DCH5SSIZSET __attribute__((section("sfrs"),address(0xBF811478)));
volatile uint32_t        DCH5SSIZINV __attribute__((section("sfrs"),address(0xBF81147C)));
#define DCH5DSIZ DCH5DSIZ
volatile uint32_t   DCH5DSIZ __attribute__((section("sfrs"), address(0xBF811480)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH5DSIZbits_t;
volatile __DCH5DSIZbits_t DCH5DSIZbits __asm__ ("DCH5DSIZ") __attribute__((section("sfrs"), address(0xBF811480)));
volatile uint32_t        DCH5DSIZCLR __attribute__((section("sfrs"),address(0xBF811484)));
volatile uint32_t        DCH5DSIZSET __attribute__((section("sfrs"),address(0xBF811488)));
volatile uint32_t        DCH5DSIZINV __attribute__((section("sfrs"),address(0xBF81148C)));
#define DCH5SPTR DCH5SPTR
volatile uint32_t   DCH5SPTR __attribute__((section("sfrs"), address(0xBF811490)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH5SPTRbits_t;
volatile __DCH5SPTRbits_t DCH5SPTRbits __asm__ ("DCH5SPTR") __attribute__((section("sfrs"), address(0xBF811490)));
volatile uint32_t        DCH5SPTRCLR __attribute__((section("sfrs"),address(0xBF811494)));
volatile uint32_t        DCH5SPTRSET __attribute__((section("sfrs"),address(0xBF811498)));
volatile uint32_t        DCH5SPTRINV __attribute__((section("sfrs"),address(0xBF81149C)));
#define DCH5DPTR DCH5DPTR
volatile uint32_t   DCH5DPTR __attribute__((section("sfrs"), address(0xBF8114A0)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH5DPTRbits_t;
volatile __DCH5DPTRbits_t DCH5DPTRbits __asm__ ("DCH5DPTR") __attribute__((section("sfrs"), address(0xBF8114A0)));
volatile uint32_t        DCH5DPTRCLR __attribute__((section("sfrs"),address(0xBF8114A4)));
volatile uint32_t        DCH5DPTRSET __attribute__((section("sfrs"),address(0xBF8114A8)));
volatile uint32_t        DCH5DPTRINV __attribute__((section("sfrs"),address(0xBF8114AC)));
#define DCH5CSIZ DCH5CSIZ
volatile uint32_t   DCH5CSIZ __attribute__((section("sfrs"), address(0xBF8114B0)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH5CSIZbits_t;
volatile __DCH5CSIZbits_t DCH5CSIZbits __asm__ ("DCH5CSIZ") __attribute__((section("sfrs"), address(0xBF8114B0)));
volatile uint32_t        DCH5CSIZCLR __attribute__((section("sfrs"),address(0xBF8114B4)));
volatile uint32_t        DCH5CSIZSET __attribute__((section("sfrs"),address(0xBF8114B8)));
volatile uint32_t        DCH5CSIZINV __attribute__((section("sfrs"),address(0xBF8114BC)));
#define DCH5CPTR DCH5CPTR
volatile uint32_t   DCH5CPTR __attribute__((section("sfrs"), address(0xBF8114C0)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH5CPTRbits_t;
volatile __DCH5CPTRbits_t DCH5CPTRbits __asm__ ("DCH5CPTR") __attribute__((section("sfrs"), address(0xBF8114C0)));
#define DCS5CPTR DCS5CPTR
volatile uint32_t   DCS5CPTR __attribute__((section("sfrs"), address(0xBF8114C0)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS5CPTRbits_t;
volatile __DCS5CPTRbits_t DCS5CPTRbits __asm__ ("DCS5CPTR") __attribute__((section("sfrs"), address(0xBF8114C0)));
volatile uint32_t        DCH5CPTRCLR __attribute__((section("sfrs"),address(0xBF8114C4)));
volatile uint32_t        DCS5CPTRCLR __attribute__((section("sfrs"),address(0xBF8114C4)));
volatile uint32_t        DCH5CPTRSET __attribute__((section("sfrs"),address(0xBF8114C8)));
volatile uint32_t        DCS5CPTRSET __attribute__((section("sfrs"),address(0xBF8114C8)));
volatile uint32_t        DCH5CPTRINV __attribute__((section("sfrs"),address(0xBF8114CC)));
volatile uint32_t        DCS5CPTRINV __attribute__((section("sfrs"),address(0xBF8114CC)));
#define DCH5DAT DCH5DAT
volatile uint32_t   DCH5DAT __attribute__((section("sfrs"), address(0xBF8114D0)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH5DATbits_t;
volatile __DCH5DATbits_t DCH5DATbits __asm__ ("DCH5DAT") __attribute__((section("sfrs"), address(0xBF8114D0)));
volatile uint32_t        DCH5DATCLR __attribute__((section("sfrs"),address(0xBF8114D4)));
volatile uint32_t        DCH5DATSET __attribute__((section("sfrs"),address(0xBF8114D8)));
volatile uint32_t        DCH5DATINV __attribute__((section("sfrs"),address(0xBF8114DC)));
#define DCH6CON DCH6CON
volatile uint32_t   DCH6CON __attribute__((section("sfrs"), address(0xBF8114E0)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH6CONbits_t;
volatile __DCH6CONbits_t DCH6CONbits __asm__ ("DCH6CON") __attribute__((section("sfrs"), address(0xBF8114E0)));
volatile uint32_t        DCH6CONCLR __attribute__((section("sfrs"),address(0xBF8114E4)));
volatile uint32_t        DCH6CONSET __attribute__((section("sfrs"),address(0xBF8114E8)));
volatile uint32_t        DCH6CONINV __attribute__((section("sfrs"),address(0xBF8114EC)));
#define DCH6ECON DCH6ECON
volatile uint32_t   DCH6ECON __attribute__((section("sfrs"), address(0xBF8114F0)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH6ECONbits_t;
volatile __DCH6ECONbits_t DCH6ECONbits __asm__ ("DCH6ECON") __attribute__((section("sfrs"), address(0xBF8114F0)));
volatile uint32_t        DCH6ECONCLR __attribute__((section("sfrs"),address(0xBF8114F4)));
volatile uint32_t        DCH6ECONSET __attribute__((section("sfrs"),address(0xBF8114F8)));
volatile uint32_t        DCH6ECONINV __attribute__((section("sfrs"),address(0xBF8114FC)));
#define DCH6INT DCH6INT
volatile uint32_t   DCH6INT __attribute__((section("sfrs"), address(0xBF811500)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH6INTbits_t;
volatile __DCH6INTbits_t DCH6INTbits __asm__ ("DCH6INT") __attribute__((section("sfrs"), address(0xBF811500)));
volatile uint32_t        DCH6INTCLR __attribute__((section("sfrs"),address(0xBF811504)));
volatile uint32_t        DCH6INTSET __attribute__((section("sfrs"),address(0xBF811508)));
volatile uint32_t        DCH6INTINV __attribute__((section("sfrs"),address(0xBF81150C)));
#define DCH6SSA DCH6SSA
volatile uint32_t   DCH6SSA __attribute__((section("sfrs"), address(0xBF811510)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH6SSAbits_t;
volatile __DCH6SSAbits_t DCH6SSAbits __asm__ ("DCH6SSA") __attribute__((section("sfrs"), address(0xBF811510)));
volatile uint32_t        DCH6SSACLR __attribute__((section("sfrs"),address(0xBF811514)));
volatile uint32_t        DCH6SSASET __attribute__((section("sfrs"),address(0xBF811518)));
volatile uint32_t        DCH6SSAINV __attribute__((section("sfrs"),address(0xBF81151C)));
#define DCH6DSA DCH6DSA
volatile uint32_t   DCH6DSA __attribute__((section("sfrs"), address(0xBF811520)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH6DSAbits_t;
volatile __DCH6DSAbits_t DCH6DSAbits __asm__ ("DCH6DSA") __attribute__((section("sfrs"), address(0xBF811520)));
volatile uint32_t        DCH6DSACLR __attribute__((section("sfrs"),address(0xBF811524)));
volatile uint32_t        DCH6DSASET __attribute__((section("sfrs"),address(0xBF811528)));
volatile uint32_t        DCH6DSAINV __attribute__((section("sfrs"),address(0xBF81152C)));
#define DCH6SSIZ DCH6SSIZ
volatile uint32_t   DCH6SSIZ __attribute__((section("sfrs"), address(0xBF811530)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH6SSIZbits_t;
volatile __DCH6SSIZbits_t DCH6SSIZbits __asm__ ("DCH6SSIZ") __attribute__((section("sfrs"), address(0xBF811530)));
volatile uint32_t        DCH6SSIZCLR __attribute__((section("sfrs"),address(0xBF811534)));
volatile uint32_t        DCH6SSIZSET __attribute__((section("sfrs"),address(0xBF811538)));
volatile uint32_t        DCH6SSIZINV __attribute__((section("sfrs"),address(0xBF81153C)));
#define DCH6DSIZ DCH6DSIZ
volatile uint32_t   DCH6DSIZ __attribute__((section("sfrs"), address(0xBF811540)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH6DSIZbits_t;
volatile __DCH6DSIZbits_t DCH6DSIZbits __asm__ ("DCH6DSIZ") __attribute__((section("sfrs"), address(0xBF811540)));
volatile uint32_t        DCH6DSIZCLR __attribute__((section("sfrs"),address(0xBF811544)));
volatile uint32_t        DCH6DSIZSET __attribute__((section("sfrs"),address(0xBF811548)));
volatile uint32_t        DCH6DSIZINV __attribute__((section("sfrs"),address(0xBF81154C)));
#define DCH6SPTR DCH6SPTR
volatile uint32_t   DCH6SPTR __attribute__((section("sfrs"), address(0xBF811550)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH6SPTRbits_t;
volatile __DCH6SPTRbits_t DCH6SPTRbits __asm__ ("DCH6SPTR") __attribute__((section("sfrs"), address(0xBF811550)));
volatile uint32_t        DCH6SPTRCLR __attribute__((section("sfrs"),address(0xBF811554)));
volatile uint32_t        DCH6SPTRSET __attribute__((section("sfrs"),address(0xBF811558)));
volatile uint32_t        DCH6SPTRINV __attribute__((section("sfrs"),address(0xBF81155C)));
#define DCH6DPTR DCH6DPTR
volatile uint32_t   DCH6DPTR __attribute__((section("sfrs"), address(0xBF811560)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH6DPTRbits_t;
volatile __DCH6DPTRbits_t DCH6DPTRbits __asm__ ("DCH6DPTR") __attribute__((section("sfrs"), address(0xBF811560)));
volatile uint32_t        DCH6DPTRCLR __attribute__((section("sfrs"),address(0xBF811564)));
volatile uint32_t        DCH6DPTRSET __attribute__((section("sfrs"),address(0xBF811568)));
volatile uint32_t        DCH6DPTRINV __attribute__((section("sfrs"),address(0xBF81156C)));
#define DCH6CSIZ DCH6CSIZ
volatile uint32_t   DCH6CSIZ __attribute__((section("sfrs"), address(0xBF811570)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH6CSIZbits_t;
volatile __DCH6CSIZbits_t DCH6CSIZbits __asm__ ("DCH6CSIZ") __attribute__((section("sfrs"), address(0xBF811570)));
volatile uint32_t        DCH6CSIZCLR __attribute__((section("sfrs"),address(0xBF811574)));
volatile uint32_t        DCH6CSIZSET __attribute__((section("sfrs"),address(0xBF811578)));
volatile uint32_t        DCH6CSIZINV __attribute__((section("sfrs"),address(0xBF81157C)));
#define DCH6CPTR DCH6CPTR
volatile uint32_t   DCH6CPTR __attribute__((section("sfrs"), address(0xBF811580)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH6CPTRbits_t;
volatile __DCH6CPTRbits_t DCH6CPTRbits __asm__ ("DCH6CPTR") __attribute__((section("sfrs"), address(0xBF811580)));
#define DCS6CPTR DCS6CPTR
volatile uint32_t   DCS6CPTR __attribute__((section("sfrs"), address(0xBF811580)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS6CPTRbits_t;
volatile __DCS6CPTRbits_t DCS6CPTRbits __asm__ ("DCS6CPTR") __attribute__((section("sfrs"), address(0xBF811580)));
volatile uint32_t        DCH6CPTRCLR __attribute__((section("sfrs"),address(0xBF811584)));
volatile uint32_t        DCS6CPTRCLR __attribute__((section("sfrs"),address(0xBF811584)));
volatile uint32_t        DCH6CPTRSET __attribute__((section("sfrs"),address(0xBF811588)));
volatile uint32_t        DCS6CPTRSET __attribute__((section("sfrs"),address(0xBF811588)));
volatile uint32_t        DCH6CPTRINV __attribute__((section("sfrs"),address(0xBF81158C)));
volatile uint32_t        DCS6CPTRINV __attribute__((section("sfrs"),address(0xBF81158C)));
#define DCH6DAT DCH6DAT
volatile uint32_t   DCH6DAT __attribute__((section("sfrs"), address(0xBF811590)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH6DATbits_t;
volatile __DCH6DATbits_t DCH6DATbits __asm__ ("DCH6DAT") __attribute__((section("sfrs"), address(0xBF811590)));
volatile uint32_t        DCH6DATCLR __attribute__((section("sfrs"),address(0xBF811594)));
volatile uint32_t        DCH6DATSET __attribute__((section("sfrs"),address(0xBF811598)));
volatile uint32_t        DCH6DATINV __attribute__((section("sfrs"),address(0xBF81159C)));
#define DCH7CON DCH7CON
volatile uint32_t   DCH7CON __attribute__((section("sfrs"), address(0xBF8115A0)));
typedef struct {
  uint32_t CHPRI:2;
  uint32_t CHEDET:1;
  uint32_t :1;
  uint32_t CHAEN:1;
  uint32_t CHCHN:1;
  uint32_t CHAED:1;
  uint32_t CHEN:1;
  uint32_t CHCHNS:1;
  uint32_t :2;
  uint32_t CHPATLEN:1;
  uint32_t :1;
  uint32_t CHPIGNEN:1;
  uint32_t :1;
  uint32_t CHBUSY:1;
  uint32_t :8;
  uint32_t CHPIGN:8;
} __DCH7CONbits_t;
volatile __DCH7CONbits_t DCH7CONbits __asm__ ("DCH7CON") __attribute__((section("sfrs"), address(0xBF8115A0)));
volatile uint32_t        DCH7CONCLR __attribute__((section("sfrs"),address(0xBF8115A4)));
volatile uint32_t        DCH7CONSET __attribute__((section("sfrs"),address(0xBF8115A8)));
volatile uint32_t        DCH7CONINV __attribute__((section("sfrs"),address(0xBF8115AC)));
#define DCH7ECON DCH7ECON
volatile uint32_t   DCH7ECON __attribute__((section("sfrs"), address(0xBF8115B0)));
typedef struct {
  uint32_t :3;
  uint32_t AIRQEN:1;
  uint32_t SIRQEN:1;
  uint32_t PATEN:1;
  uint32_t CABORT:1;
  uint32_t CFORCE:1;
  uint32_t CHSIRQ:8;
  uint32_t CHAIRQ:8;
} __DCH7ECONbits_t;
volatile __DCH7ECONbits_t DCH7ECONbits __asm__ ("DCH7ECON") __attribute__((section("sfrs"), address(0xBF8115B0)));
volatile uint32_t        DCH7ECONCLR __attribute__((section("sfrs"),address(0xBF8115B4)));
volatile uint32_t        DCH7ECONSET __attribute__((section("sfrs"),address(0xBF8115B8)));
volatile uint32_t        DCH7ECONINV __attribute__((section("sfrs"),address(0xBF8115BC)));
#define DCH7INT DCH7INT
volatile uint32_t   DCH7INT __attribute__((section("sfrs"), address(0xBF8115C0)));
typedef struct {
  uint32_t CHERIF:1;
  uint32_t CHTAIF:1;
  uint32_t CHCCIF:1;
  uint32_t CHBCIF:1;
  uint32_t CHDHIF:1;
  uint32_t CHDDIF:1;
  uint32_t CHSHIF:1;
  uint32_t CHSDIF:1;
  uint32_t :8;
  uint32_t CHERIE:1;
  uint32_t CHTAIE:1;
  uint32_t CHCCIE:1;
  uint32_t CHBCIE:1;
  uint32_t CHDHIE:1;
  uint32_t CHDDIE:1;
  uint32_t CHSHIE:1;
  uint32_t CHSDIE:1;
} __DCH7INTbits_t;
volatile __DCH7INTbits_t DCH7INTbits __asm__ ("DCH7INT") __attribute__((section("sfrs"), address(0xBF8115C0)));
volatile uint32_t        DCH7INTCLR __attribute__((section("sfrs"),address(0xBF8115C4)));
volatile uint32_t        DCH7INTSET __attribute__((section("sfrs"),address(0xBF8115C8)));
volatile uint32_t        DCH7INTINV __attribute__((section("sfrs"),address(0xBF8115CC)));
#define DCH7SSA DCH7SSA
volatile uint32_t   DCH7SSA __attribute__((section("sfrs"), address(0xBF8115D0)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH7SSAbits_t;
volatile __DCH7SSAbits_t DCH7SSAbits __asm__ ("DCH7SSA") __attribute__((section("sfrs"), address(0xBF8115D0)));
volatile uint32_t        DCH7SSACLR __attribute__((section("sfrs"),address(0xBF8115D4)));
volatile uint32_t        DCH7SSASET __attribute__((section("sfrs"),address(0xBF8115D8)));
volatile uint32_t        DCH7SSAINV __attribute__((section("sfrs"),address(0xBF8115DC)));
#define DCH7DSA DCH7DSA
volatile uint32_t   DCH7DSA __attribute__((section("sfrs"), address(0xBF8115E0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH7DSAbits_t;
volatile __DCH7DSAbits_t DCH7DSAbits __asm__ ("DCH7DSA") __attribute__((section("sfrs"), address(0xBF8115E0)));
volatile uint32_t        DCH7DSACLR __attribute__((section("sfrs"),address(0xBF8115E4)));
volatile uint32_t        DCH7DSASET __attribute__((section("sfrs"),address(0xBF8115E8)));
volatile uint32_t        DCH7DSAINV __attribute__((section("sfrs"),address(0xBF8115EC)));
#define DCH7SSIZ DCH7SSIZ
volatile uint32_t   DCH7SSIZ __attribute__((section("sfrs"), address(0xBF8115F0)));
typedef struct {
  uint32_t CHSSIZ:16;
} __DCH7SSIZbits_t;
volatile __DCH7SSIZbits_t DCH7SSIZbits __asm__ ("DCH7SSIZ") __attribute__((section("sfrs"), address(0xBF8115F0)));
volatile uint32_t        DCH7SSIZCLR __attribute__((section("sfrs"),address(0xBF8115F4)));
volatile uint32_t        DCH7SSIZSET __attribute__((section("sfrs"),address(0xBF8115F8)));
volatile uint32_t        DCH7SSIZINV __attribute__((section("sfrs"),address(0xBF8115FC)));
#define DCH7DSIZ DCH7DSIZ
volatile uint32_t   DCH7DSIZ __attribute__((section("sfrs"), address(0xBF811600)));
typedef struct {
  uint32_t CHDSIZ:16;
} __DCH7DSIZbits_t;
volatile __DCH7DSIZbits_t DCH7DSIZbits __asm__ ("DCH7DSIZ") __attribute__((section("sfrs"), address(0xBF811600)));
volatile uint32_t        DCH7DSIZCLR __attribute__((section("sfrs"),address(0xBF811604)));
volatile uint32_t        DCH7DSIZSET __attribute__((section("sfrs"),address(0xBF811608)));
volatile uint32_t        DCH7DSIZINV __attribute__((section("sfrs"),address(0xBF81160C)));
#define DCH7SPTR DCH7SPTR
volatile uint32_t   DCH7SPTR __attribute__((section("sfrs"), address(0xBF811610)));
typedef struct {
  uint32_t CHSPTR:16;
} __DCH7SPTRbits_t;
volatile __DCH7SPTRbits_t DCH7SPTRbits __asm__ ("DCH7SPTR") __attribute__((section("sfrs"), address(0xBF811610)));
volatile uint32_t        DCH7SPTRCLR __attribute__((section("sfrs"),address(0xBF811614)));
volatile uint32_t        DCH7SPTRSET __attribute__((section("sfrs"),address(0xBF811618)));
volatile uint32_t        DCH7SPTRINV __attribute__((section("sfrs"),address(0xBF81161C)));
#define DCH7DPTR DCH7DPTR
volatile uint32_t   DCH7DPTR __attribute__((section("sfrs"), address(0xBF811620)));
typedef struct {
  uint32_t CHDPTR:16;
} __DCH7DPTRbits_t;
volatile __DCH7DPTRbits_t DCH7DPTRbits __asm__ ("DCH7DPTR") __attribute__((section("sfrs"), address(0xBF811620)));
volatile uint32_t        DCH7DPTRCLR __attribute__((section("sfrs"),address(0xBF811624)));
volatile uint32_t        DCH7DPTRSET __attribute__((section("sfrs"),address(0xBF811628)));
volatile uint32_t        DCH7DPTRINV __attribute__((section("sfrs"),address(0xBF81162C)));
#define DCH7CSIZ DCH7CSIZ
volatile uint32_t   DCH7CSIZ __attribute__((section("sfrs"), address(0xBF811630)));
typedef struct {
  uint32_t CHCSIZ:16;
} __DCH7CSIZbits_t;
volatile __DCH7CSIZbits_t DCH7CSIZbits __asm__ ("DCH7CSIZ") __attribute__((section("sfrs"), address(0xBF811630)));
volatile uint32_t        DCH7CSIZCLR __attribute__((section("sfrs"),address(0xBF811634)));
volatile uint32_t        DCH7CSIZSET __attribute__((section("sfrs"),address(0xBF811638)));
volatile uint32_t        DCH7CSIZINV __attribute__((section("sfrs"),address(0xBF81163C)));
#define DCH7CPTR DCH7CPTR
volatile uint32_t   DCH7CPTR __attribute__((section("sfrs"), address(0xBF811640)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCH7CPTRbits_t;
volatile __DCH7CPTRbits_t DCH7CPTRbits __asm__ ("DCH7CPTR") __attribute__((section("sfrs"), address(0xBF811640)));
#define DCS7CPTR DCS7CPTR
volatile uint32_t   DCS7CPTR __attribute__((section("sfrs"), address(0xBF811640)));
typedef struct {
  uint32_t CHCPTR:16;
} __DCS7CPTRbits_t;
volatile __DCS7CPTRbits_t DCS7CPTRbits __asm__ ("DCS7CPTR") __attribute__((section("sfrs"), address(0xBF811640)));
volatile uint32_t        DCH7CPTRCLR __attribute__((section("sfrs"),address(0xBF811644)));
volatile uint32_t        DCS7CPTRCLR __attribute__((section("sfrs"),address(0xBF811644)));
volatile uint32_t        DCH7CPTRSET __attribute__((section("sfrs"),address(0xBF811648)));
volatile uint32_t        DCS7CPTRSET __attribute__((section("sfrs"),address(0xBF811648)));
volatile uint32_t        DCH7CPTRINV __attribute__((section("sfrs"),address(0xBF81164C)));
volatile uint32_t        DCS7CPTRINV __attribute__((section("sfrs"),address(0xBF81164C)));
#define DCH7DAT DCH7DAT
volatile uint32_t   DCH7DAT __attribute__((section("sfrs"), address(0xBF811650)));
typedef struct {
  uint32_t CHPDAT:16;
} __DCH7DATbits_t;
volatile __DCH7DATbits_t DCH7DATbits __asm__ ("DCH7DAT") __attribute__((section("sfrs"), address(0xBF811650)));
volatile uint32_t        DCH7DATCLR __attribute__((section("sfrs"),address(0xBF811654)));
volatile uint32_t        DCH7DATSET __attribute__((section("sfrs"),address(0xBF811658)));
volatile uint32_t        DCH7DATINV __attribute__((section("sfrs"),address(0xBF81165C)));
#define I2C1CON I2C1CON
volatile uint32_t   I2C1CON __attribute__((section("sfrs"), address(0xBF820000)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t DHEN:1;
    uint32_t AHEN:1;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C1CONbits_t;
volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs"), address(0xBF820000)));
volatile uint32_t        I2C1CONCLR __attribute__((section("sfrs"),address(0xBF820004)));
volatile uint32_t        I2C1CONSET __attribute__((section("sfrs"),address(0xBF820008)));
volatile uint32_t        I2C1CONINV __attribute__((section("sfrs"),address(0xBF82000C)));
#define I2C1STAT I2C1STAT
volatile uint32_t   I2C1STAT __attribute__((section("sfrs"), address(0xBF820010)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C1STATbits_t;
volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs"), address(0xBF820010)));
volatile uint32_t        I2C1STATCLR __attribute__((section("sfrs"),address(0xBF820014)));
volatile uint32_t        I2C1STATSET __attribute__((section("sfrs"),address(0xBF820018)));
volatile uint32_t        I2C1STATINV __attribute__((section("sfrs"),address(0xBF82001C)));
#define I2C1ADD I2C1ADD
volatile uint32_t   I2C1ADD __attribute__((section("sfrs"), address(0xBF820020)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C1ADDbits_t;
volatile __I2C1ADDbits_t I2C1ADDbits __asm__ ("I2C1ADD") __attribute__((section("sfrs"), address(0xBF820020)));
volatile uint32_t        I2C1ADDCLR __attribute__((section("sfrs"),address(0xBF820024)));
volatile uint32_t        I2C1ADDSET __attribute__((section("sfrs"),address(0xBF820028)));
volatile uint32_t        I2C1ADDINV __attribute__((section("sfrs"),address(0xBF82002C)));
#define I2C1MSK I2C1MSK
volatile uint32_t   I2C1MSK __attribute__((section("sfrs"), address(0xBF820030)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C1MSKbits_t;
volatile __I2C1MSKbits_t I2C1MSKbits __asm__ ("I2C1MSK") __attribute__((section("sfrs"), address(0xBF820030)));
volatile uint32_t        I2C1MSKCLR __attribute__((section("sfrs"),address(0xBF820034)));
volatile uint32_t        I2C1MSKSET __attribute__((section("sfrs"),address(0xBF820038)));
volatile uint32_t        I2C1MSKINV __attribute__((section("sfrs"),address(0xBF82003C)));
#define I2C1BRG I2C1BRG
volatile uint32_t   I2C1BRG __attribute__((section("sfrs"), address(0xBF820040)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C1BRGbits_t;
volatile __I2C1BRGbits_t I2C1BRGbits __asm__ ("I2C1BRG") __attribute__((section("sfrs"), address(0xBF820040)));
volatile uint32_t        I2C1BRGCLR __attribute__((section("sfrs"),address(0xBF820044)));
volatile uint32_t        I2C1BRGSET __attribute__((section("sfrs"),address(0xBF820048)));
volatile uint32_t        I2C1BRGINV __attribute__((section("sfrs"),address(0xBF82004C)));
#define I2C1TRN I2C1TRN
volatile uint32_t   I2C1TRN __attribute__((section("sfrs"), address(0xBF820050)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C1TRNbits_t;
volatile __I2C1TRNbits_t I2C1TRNbits __asm__ ("I2C1TRN") __attribute__((section("sfrs"), address(0xBF820050)));
volatile uint32_t        I2C1TRNCLR __attribute__((section("sfrs"),address(0xBF820054)));
volatile uint32_t        I2C1TRNSET __attribute__((section("sfrs"),address(0xBF820058)));
volatile uint32_t        I2C1TRNINV __attribute__((section("sfrs"),address(0xBF82005C)));
#define I2C1RCV I2C1RCV
volatile uint32_t   I2C1RCV __attribute__((section("sfrs"), address(0xBF820060)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C1RCVbits_t;
volatile __I2C1RCVbits_t I2C1RCVbits __asm__ ("I2C1RCV") __attribute__((section("sfrs"), address(0xBF820060)));
volatile uint32_t        I2C1RCVCLR __attribute__((section("sfrs"),address(0xBF820064)));
volatile uint32_t        I2C1RCVSET __attribute__((section("sfrs"),address(0xBF820068)));
volatile uint32_t        I2C1RCVINV __attribute__((section("sfrs"),address(0xBF82006C)));
#define I2C2CON I2C2CON
volatile uint32_t   I2C2CON __attribute__((section("sfrs"), address(0xBF820200)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t DHEN:1;
    uint32_t AHEN:1;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C2CONbits_t;
volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs"), address(0xBF820200)));
volatile uint32_t        I2C2CONCLR __attribute__((section("sfrs"),address(0xBF820204)));
volatile uint32_t        I2C2CONSET __attribute__((section("sfrs"),address(0xBF820208)));
volatile uint32_t        I2C2CONINV __attribute__((section("sfrs"),address(0xBF82020C)));
#define I2C2STAT I2C2STAT
volatile uint32_t   I2C2STAT __attribute__((section("sfrs"), address(0xBF820210)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C2STATbits_t;
volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs"), address(0xBF820210)));
volatile uint32_t        I2C2STATCLR __attribute__((section("sfrs"),address(0xBF820214)));
volatile uint32_t        I2C2STATSET __attribute__((section("sfrs"),address(0xBF820218)));
volatile uint32_t        I2C2STATINV __attribute__((section("sfrs"),address(0xBF82021C)));
#define I2C2ADD I2C2ADD
volatile uint32_t   I2C2ADD __attribute__((section("sfrs"), address(0xBF820220)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C2ADDbits_t;
volatile __I2C2ADDbits_t I2C2ADDbits __asm__ ("I2C2ADD") __attribute__((section("sfrs"), address(0xBF820220)));
volatile uint32_t        I2C2ADDCLR __attribute__((section("sfrs"),address(0xBF820224)));
volatile uint32_t        I2C2ADDSET __attribute__((section("sfrs"),address(0xBF820228)));
volatile uint32_t        I2C2ADDINV __attribute__((section("sfrs"),address(0xBF82022C)));
#define I2C2MSK I2C2MSK
volatile uint32_t   I2C2MSK __attribute__((section("sfrs"), address(0xBF820230)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C2MSKbits_t;
volatile __I2C2MSKbits_t I2C2MSKbits __asm__ ("I2C2MSK") __attribute__((section("sfrs"), address(0xBF820230)));
volatile uint32_t        I2C2MSKCLR __attribute__((section("sfrs"),address(0xBF820234)));
volatile uint32_t        I2C2MSKSET __attribute__((section("sfrs"),address(0xBF820238)));
volatile uint32_t        I2C2MSKINV __attribute__((section("sfrs"),address(0xBF82023C)));
#define I2C2BRG I2C2BRG
volatile uint32_t   I2C2BRG __attribute__((section("sfrs"), address(0xBF820240)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C2BRGbits_t;
volatile __I2C2BRGbits_t I2C2BRGbits __asm__ ("I2C2BRG") __attribute__((section("sfrs"), address(0xBF820240)));
volatile uint32_t        I2C2BRGCLR __attribute__((section("sfrs"),address(0xBF820244)));
volatile uint32_t        I2C2BRGSET __attribute__((section("sfrs"),address(0xBF820248)));
volatile uint32_t        I2C2BRGINV __attribute__((section("sfrs"),address(0xBF82024C)));
#define I2C2TRN I2C2TRN
volatile uint32_t   I2C2TRN __attribute__((section("sfrs"), address(0xBF820250)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C2TRNbits_t;
volatile __I2C2TRNbits_t I2C2TRNbits __asm__ ("I2C2TRN") __attribute__((section("sfrs"), address(0xBF820250)));
volatile uint32_t        I2C2TRNCLR __attribute__((section("sfrs"),address(0xBF820254)));
volatile uint32_t        I2C2TRNSET __attribute__((section("sfrs"),address(0xBF820258)));
volatile uint32_t        I2C2TRNINV __attribute__((section("sfrs"),address(0xBF82025C)));
#define I2C2RCV I2C2RCV
volatile uint32_t   I2C2RCV __attribute__((section("sfrs"), address(0xBF820260)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C2RCVbits_t;
volatile __I2C2RCVbits_t I2C2RCVbits __asm__ ("I2C2RCV") __attribute__((section("sfrs"), address(0xBF820260)));
volatile uint32_t        I2C2RCVCLR __attribute__((section("sfrs"),address(0xBF820264)));
volatile uint32_t        I2C2RCVSET __attribute__((section("sfrs"),address(0xBF820268)));
volatile uint32_t        I2C2RCVINV __attribute__((section("sfrs"),address(0xBF82026C)));
#define I2C3CON I2C3CON
volatile uint32_t   I2C3CON __attribute__((section("sfrs"), address(0xBF820400)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t DHEN:1;
    uint32_t AHEN:1;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C3CONbits_t;
volatile __I2C3CONbits_t I2C3CONbits __asm__ ("I2C3CON") __attribute__((section("sfrs"), address(0xBF820400)));
volatile uint32_t        I2C3CONCLR __attribute__((section("sfrs"),address(0xBF820404)));
volatile uint32_t        I2C3CONSET __attribute__((section("sfrs"),address(0xBF820408)));
volatile uint32_t        I2C3CONINV __attribute__((section("sfrs"),address(0xBF82040C)));
#define I2C3STAT I2C3STAT
volatile uint32_t   I2C3STAT __attribute__((section("sfrs"), address(0xBF820410)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C3STATbits_t;
volatile __I2C3STATbits_t I2C3STATbits __asm__ ("I2C3STAT") __attribute__((section("sfrs"), address(0xBF820410)));
volatile uint32_t        I2C3STATCLR __attribute__((section("sfrs"),address(0xBF820414)));
volatile uint32_t        I2C3STATSET __attribute__((section("sfrs"),address(0xBF820418)));
volatile uint32_t        I2C3STATINV __attribute__((section("sfrs"),address(0xBF82041C)));
#define I2C3ADD I2C3ADD
volatile uint32_t   I2C3ADD __attribute__((section("sfrs"), address(0xBF820420)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C3ADDbits_t;
volatile __I2C3ADDbits_t I2C3ADDbits __asm__ ("I2C3ADD") __attribute__((section("sfrs"), address(0xBF820420)));
volatile uint32_t        I2C3ADDCLR __attribute__((section("sfrs"),address(0xBF820424)));
volatile uint32_t        I2C3ADDSET __attribute__((section("sfrs"),address(0xBF820428)));
volatile uint32_t        I2C3ADDINV __attribute__((section("sfrs"),address(0xBF82042C)));
#define I2C3MSK I2C3MSK
volatile uint32_t   I2C3MSK __attribute__((section("sfrs"), address(0xBF820430)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C3MSKbits_t;
volatile __I2C3MSKbits_t I2C3MSKbits __asm__ ("I2C3MSK") __attribute__((section("sfrs"), address(0xBF820430)));
volatile uint32_t        I2C3MSKCLR __attribute__((section("sfrs"),address(0xBF820434)));
volatile uint32_t        I2C3MSKSET __attribute__((section("sfrs"),address(0xBF820438)));
volatile uint32_t        I2C3MSKINV __attribute__((section("sfrs"),address(0xBF82043C)));
#define I2C3BRG I2C3BRG
volatile uint32_t   I2C3BRG __attribute__((section("sfrs"), address(0xBF820440)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C3BRGbits_t;
volatile __I2C3BRGbits_t I2C3BRGbits __asm__ ("I2C3BRG") __attribute__((section("sfrs"), address(0xBF820440)));
volatile uint32_t        I2C3BRGCLR __attribute__((section("sfrs"),address(0xBF820444)));
volatile uint32_t        I2C3BRGSET __attribute__((section("sfrs"),address(0xBF820448)));
volatile uint32_t        I2C3BRGINV __attribute__((section("sfrs"),address(0xBF82044C)));
#define I2C3TRN I2C3TRN
volatile uint32_t   I2C3TRN __attribute__((section("sfrs"), address(0xBF820450)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C3TRNbits_t;
volatile __I2C3TRNbits_t I2C3TRNbits __asm__ ("I2C3TRN") __attribute__((section("sfrs"), address(0xBF820450)));
volatile uint32_t        I2C3TRNCLR __attribute__((section("sfrs"),address(0xBF820454)));
volatile uint32_t        I2C3TRNSET __attribute__((section("sfrs"),address(0xBF820458)));
volatile uint32_t        I2C3TRNINV __attribute__((section("sfrs"),address(0xBF82045C)));
#define I2C3RCV I2C3RCV
volatile uint32_t   I2C3RCV __attribute__((section("sfrs"), address(0xBF820460)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C3RCVbits_t;
volatile __I2C3RCVbits_t I2C3RCVbits __asm__ ("I2C3RCV") __attribute__((section("sfrs"), address(0xBF820460)));
volatile uint32_t        I2C3RCVCLR __attribute__((section("sfrs"),address(0xBF820464)));
volatile uint32_t        I2C3RCVSET __attribute__((section("sfrs"),address(0xBF820468)));
volatile uint32_t        I2C3RCVINV __attribute__((section("sfrs"),address(0xBF82046C)));
#define I2C4CON I2C4CON
volatile uint32_t   I2C4CON __attribute__((section("sfrs"), address(0xBF820600)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t DHEN:1;
    uint32_t AHEN:1;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C4CONbits_t;
volatile __I2C4CONbits_t I2C4CONbits __asm__ ("I2C4CON") __attribute__((section("sfrs"), address(0xBF820600)));
volatile uint32_t        I2C4CONCLR __attribute__((section("sfrs"),address(0xBF820604)));
volatile uint32_t        I2C4CONSET __attribute__((section("sfrs"),address(0xBF820608)));
volatile uint32_t        I2C4CONINV __attribute__((section("sfrs"),address(0xBF82060C)));
#define I2C4STAT I2C4STAT
volatile uint32_t   I2C4STAT __attribute__((section("sfrs"), address(0xBF820610)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C4STATbits_t;
volatile __I2C4STATbits_t I2C4STATbits __asm__ ("I2C4STAT") __attribute__((section("sfrs"), address(0xBF820610)));
volatile uint32_t        I2C4STATCLR __attribute__((section("sfrs"),address(0xBF820614)));
volatile uint32_t        I2C4STATSET __attribute__((section("sfrs"),address(0xBF820618)));
volatile uint32_t        I2C4STATINV __attribute__((section("sfrs"),address(0xBF82061C)));
#define I2C4ADD I2C4ADD
volatile uint32_t   I2C4ADD __attribute__((section("sfrs"), address(0xBF820620)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C4ADDbits_t;
volatile __I2C4ADDbits_t I2C4ADDbits __asm__ ("I2C4ADD") __attribute__((section("sfrs"), address(0xBF820620)));
volatile uint32_t        I2C4ADDCLR __attribute__((section("sfrs"),address(0xBF820624)));
volatile uint32_t        I2C4ADDSET __attribute__((section("sfrs"),address(0xBF820628)));
volatile uint32_t        I2C4ADDINV __attribute__((section("sfrs"),address(0xBF82062C)));
#define I2C4MSK I2C4MSK
volatile uint32_t   I2C4MSK __attribute__((section("sfrs"), address(0xBF820630)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C4MSKbits_t;
volatile __I2C4MSKbits_t I2C4MSKbits __asm__ ("I2C4MSK") __attribute__((section("sfrs"), address(0xBF820630)));
volatile uint32_t        I2C4MSKCLR __attribute__((section("sfrs"),address(0xBF820634)));
volatile uint32_t        I2C4MSKSET __attribute__((section("sfrs"),address(0xBF820638)));
volatile uint32_t        I2C4MSKINV __attribute__((section("sfrs"),address(0xBF82063C)));
#define I2C4BRG I2C4BRG
volatile uint32_t   I2C4BRG __attribute__((section("sfrs"), address(0xBF820640)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C4BRGbits_t;
volatile __I2C4BRGbits_t I2C4BRGbits __asm__ ("I2C4BRG") __attribute__((section("sfrs"), address(0xBF820640)));
volatile uint32_t        I2C4BRGCLR __attribute__((section("sfrs"),address(0xBF820644)));
volatile uint32_t        I2C4BRGSET __attribute__((section("sfrs"),address(0xBF820648)));
volatile uint32_t        I2C4BRGINV __attribute__((section("sfrs"),address(0xBF82064C)));
#define I2C4TRN I2C4TRN
volatile uint32_t   I2C4TRN __attribute__((section("sfrs"), address(0xBF820650)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C4TRNbits_t;
volatile __I2C4TRNbits_t I2C4TRNbits __asm__ ("I2C4TRN") __attribute__((section("sfrs"), address(0xBF820650)));
volatile uint32_t        I2C4TRNCLR __attribute__((section("sfrs"),address(0xBF820654)));
volatile uint32_t        I2C4TRNSET __attribute__((section("sfrs"),address(0xBF820658)));
volatile uint32_t        I2C4TRNINV __attribute__((section("sfrs"),address(0xBF82065C)));
#define I2C4RCV I2C4RCV
volatile uint32_t   I2C4RCV __attribute__((section("sfrs"), address(0xBF820660)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C4RCVbits_t;
volatile __I2C4RCVbits_t I2C4RCVbits __asm__ ("I2C4RCV") __attribute__((section("sfrs"), address(0xBF820660)));
volatile uint32_t        I2C4RCVCLR __attribute__((section("sfrs"),address(0xBF820664)));
volatile uint32_t        I2C4RCVSET __attribute__((section("sfrs"),address(0xBF820668)));
volatile uint32_t        I2C4RCVINV __attribute__((section("sfrs"),address(0xBF82066C)));
#define I2C5CON I2C5CON
volatile uint32_t   I2C5CON __attribute__((section("sfrs"), address(0xBF820800)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t DHEN:1;
    uint32_t AHEN:1;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C5CONbits_t;
volatile __I2C5CONbits_t I2C5CONbits __asm__ ("I2C5CON") __attribute__((section("sfrs"), address(0xBF820800)));
volatile uint32_t        I2C5CONCLR __attribute__((section("sfrs"),address(0xBF820804)));
volatile uint32_t        I2C5CONSET __attribute__((section("sfrs"),address(0xBF820808)));
volatile uint32_t        I2C5CONINV __attribute__((section("sfrs"),address(0xBF82080C)));
#define I2C5STAT I2C5STAT
volatile uint32_t   I2C5STAT __attribute__((section("sfrs"), address(0xBF820810)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C5STATbits_t;
volatile __I2C5STATbits_t I2C5STATbits __asm__ ("I2C5STAT") __attribute__((section("sfrs"), address(0xBF820810)));
volatile uint32_t        I2C5STATCLR __attribute__((section("sfrs"),address(0xBF820814)));
volatile uint32_t        I2C5STATSET __attribute__((section("sfrs"),address(0xBF820818)));
volatile uint32_t        I2C5STATINV __attribute__((section("sfrs"),address(0xBF82081C)));
#define I2C5ADD I2C5ADD
volatile uint32_t   I2C5ADD __attribute__((section("sfrs"), address(0xBF820820)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C5ADDbits_t;
volatile __I2C5ADDbits_t I2C5ADDbits __asm__ ("I2C5ADD") __attribute__((section("sfrs"), address(0xBF820820)));
volatile uint32_t        I2C5ADDCLR __attribute__((section("sfrs"),address(0xBF820824)));
volatile uint32_t        I2C5ADDSET __attribute__((section("sfrs"),address(0xBF820828)));
volatile uint32_t        I2C5ADDINV __attribute__((section("sfrs"),address(0xBF82082C)));
#define I2C5MSK I2C5MSK
volatile uint32_t   I2C5MSK __attribute__((section("sfrs"), address(0xBF820830)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C5MSKbits_t;
volatile __I2C5MSKbits_t I2C5MSKbits __asm__ ("I2C5MSK") __attribute__((section("sfrs"), address(0xBF820830)));
volatile uint32_t        I2C5MSKCLR __attribute__((section("sfrs"),address(0xBF820834)));
volatile uint32_t        I2C5MSKSET __attribute__((section("sfrs"),address(0xBF820838)));
volatile uint32_t        I2C5MSKINV __attribute__((section("sfrs"),address(0xBF82083C)));
#define I2C5BRG I2C5BRG
volatile uint32_t   I2C5BRG __attribute__((section("sfrs"), address(0xBF820840)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C5BRGbits_t;
volatile __I2C5BRGbits_t I2C5BRGbits __asm__ ("I2C5BRG") __attribute__((section("sfrs"), address(0xBF820840)));
volatile uint32_t        I2C5BRGCLR __attribute__((section("sfrs"),address(0xBF820844)));
volatile uint32_t        I2C5BRGSET __attribute__((section("sfrs"),address(0xBF820848)));
volatile uint32_t        I2C5BRGINV __attribute__((section("sfrs"),address(0xBF82084C)));
#define I2C5TRN I2C5TRN
volatile uint32_t   I2C5TRN __attribute__((section("sfrs"), address(0xBF820850)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C5TRNbits_t;
volatile __I2C5TRNbits_t I2C5TRNbits __asm__ ("I2C5TRN") __attribute__((section("sfrs"), address(0xBF820850)));
volatile uint32_t        I2C5TRNCLR __attribute__((section("sfrs"),address(0xBF820854)));
volatile uint32_t        I2C5TRNSET __attribute__((section("sfrs"),address(0xBF820858)));
volatile uint32_t        I2C5TRNINV __attribute__((section("sfrs"),address(0xBF82085C)));
#define I2C5RCV I2C5RCV
volatile uint32_t   I2C5RCV __attribute__((section("sfrs"), address(0xBF820860)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C5RCVbits_t;
volatile __I2C5RCVbits_t I2C5RCVbits __asm__ ("I2C5RCV") __attribute__((section("sfrs"), address(0xBF820860)));
volatile uint32_t        I2C5RCVCLR __attribute__((section("sfrs"),address(0xBF820864)));
volatile uint32_t        I2C5RCVSET __attribute__((section("sfrs"),address(0xBF820868)));
volatile uint32_t        I2C5RCVINV __attribute__((section("sfrs"),address(0xBF82086C)));
#define SPI1CON SPI1CON
volatile uint32_t   SPI1CON __attribute__((section("sfrs"), address(0xBF821000)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CONbits_t;
volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs"), address(0xBF821000)));
volatile uint32_t        SPI1CONCLR __attribute__((section("sfrs"),address(0xBF821004)));
volatile uint32_t        SPI1CONSET __attribute__((section("sfrs"),address(0xBF821008)));
volatile uint32_t        SPI1CONINV __attribute__((section("sfrs"),address(0xBF82100C)));
#define SPI1STAT SPI1STAT
volatile uint32_t   SPI1STAT __attribute__((section("sfrs"), address(0xBF821010)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1STATbits_t;
volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs"), address(0xBF821010)));
volatile uint32_t        SPI1STATCLR __attribute__((section("sfrs"),address(0xBF821014)));
volatile uint32_t        SPI1STATSET __attribute__((section("sfrs"),address(0xBF821018)));
volatile uint32_t        SPI1STATINV __attribute__((section("sfrs"),address(0xBF82101C)));
#define SPI1BUF SPI1BUF
volatile uint32_t   SPI1BUF __attribute__((section("sfrs"), address(0xBF821020)));
#define SPI1BRG SPI1BRG
volatile uint32_t   SPI1BRG __attribute__((section("sfrs"), address(0xBF821030)));
volatile uint32_t        SPI1BRGCLR __attribute__((section("sfrs"),address(0xBF821034)));
volatile uint32_t        SPI1BRGSET __attribute__((section("sfrs"),address(0xBF821038)));
volatile uint32_t        SPI1BRGINV __attribute__((section("sfrs"),address(0xBF82103C)));
#define SPI1CON2 SPI1CON2
volatile uint32_t   SPI1CON2 __attribute__((section("sfrs"), address(0xBF821040)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CON2bits_t;
volatile __SPI1CON2bits_t SPI1CON2bits __asm__ ("SPI1CON2") __attribute__((section("sfrs"), address(0xBF821040)));
volatile uint32_t        SPI1CON2CLR __attribute__((section("sfrs"),address(0xBF821044)));
volatile uint32_t        SPI1CON2SET __attribute__((section("sfrs"),address(0xBF821048)));
volatile uint32_t        SPI1CON2INV __attribute__((section("sfrs"),address(0xBF82104C)));
#define SPI2CON SPI2CON
volatile uint32_t   SPI2CON __attribute__((section("sfrs"), address(0xBF821200)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CONbits_t;
volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON") __attribute__((section("sfrs"), address(0xBF821200)));
volatile uint32_t        SPI2CONCLR __attribute__((section("sfrs"),address(0xBF821204)));
volatile uint32_t        SPI2CONSET __attribute__((section("sfrs"),address(0xBF821208)));
volatile uint32_t        SPI2CONINV __attribute__((section("sfrs"),address(0xBF82120C)));
#define SPI2STAT SPI2STAT
volatile uint32_t   SPI2STAT __attribute__((section("sfrs"), address(0xBF821210)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2STATbits_t;
volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs"), address(0xBF821210)));
volatile uint32_t        SPI2STATCLR __attribute__((section("sfrs"),address(0xBF821214)));
volatile uint32_t        SPI2STATSET __attribute__((section("sfrs"),address(0xBF821218)));
volatile uint32_t        SPI2STATINV __attribute__((section("sfrs"),address(0xBF82121C)));
#define SPI2BUF SPI2BUF
volatile uint32_t   SPI2BUF __attribute__((section("sfrs"), address(0xBF821220)));
#define SPI2BRG SPI2BRG
volatile uint32_t   SPI2BRG __attribute__((section("sfrs"), address(0xBF821230)));
volatile uint32_t        SPI2BRGCLR __attribute__((section("sfrs"),address(0xBF821234)));
volatile uint32_t        SPI2BRGSET __attribute__((section("sfrs"),address(0xBF821238)));
volatile uint32_t        SPI2BRGINV __attribute__((section("sfrs"),address(0xBF82123C)));
#define SPI2CON2 SPI2CON2
volatile uint32_t   SPI2CON2 __attribute__((section("sfrs"), address(0xBF821240)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CON2bits_t;
volatile __SPI2CON2bits_t SPI2CON2bits __asm__ ("SPI2CON2") __attribute__((section("sfrs"), address(0xBF821240)));
volatile uint32_t        SPI2CON2CLR __attribute__((section("sfrs"),address(0xBF821244)));
volatile uint32_t        SPI2CON2SET __attribute__((section("sfrs"),address(0xBF821248)));
volatile uint32_t        SPI2CON2INV __attribute__((section("sfrs"),address(0xBF82124C)));
#define SPI3CON SPI3CON
volatile uint32_t   SPI3CON __attribute__((section("sfrs"), address(0xBF821400)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3CONbits_t;
volatile __SPI3CONbits_t SPI3CONbits __asm__ ("SPI3CON") __attribute__((section("sfrs"), address(0xBF821400)));
volatile uint32_t        SPI3CONCLR __attribute__((section("sfrs"),address(0xBF821404)));
volatile uint32_t        SPI3CONSET __attribute__((section("sfrs"),address(0xBF821408)));
volatile uint32_t        SPI3CONINV __attribute__((section("sfrs"),address(0xBF82140C)));
#define SPI3STAT SPI3STAT
volatile uint32_t   SPI3STAT __attribute__((section("sfrs"), address(0xBF821410)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3STATbits_t;
volatile __SPI3STATbits_t SPI3STATbits __asm__ ("SPI3STAT") __attribute__((section("sfrs"), address(0xBF821410)));
volatile uint32_t        SPI3STATCLR __attribute__((section("sfrs"),address(0xBF821414)));
volatile uint32_t        SPI3STATSET __attribute__((section("sfrs"),address(0xBF821418)));
volatile uint32_t        SPI3STATINV __attribute__((section("sfrs"),address(0xBF82141C)));
#define SPI3BUF SPI3BUF
volatile uint32_t   SPI3BUF __attribute__((section("sfrs"), address(0xBF821420)));
#define SPI3BRG SPI3BRG
volatile uint32_t   SPI3BRG __attribute__((section("sfrs"), address(0xBF821430)));
volatile uint32_t        SPI3BRGCLR __attribute__((section("sfrs"),address(0xBF821434)));
volatile uint32_t        SPI3BRGSET __attribute__((section("sfrs"),address(0xBF821438)));
volatile uint32_t        SPI3BRGINV __attribute__((section("sfrs"),address(0xBF82143C)));
#define SPI3CON2 SPI3CON2
volatile uint32_t   SPI3CON2 __attribute__((section("sfrs"), address(0xBF821440)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3CON2bits_t;
volatile __SPI3CON2bits_t SPI3CON2bits __asm__ ("SPI3CON2") __attribute__((section("sfrs"), address(0xBF821440)));
volatile uint32_t        SPI3CON2CLR __attribute__((section("sfrs"),address(0xBF821444)));
volatile uint32_t        SPI3CON2SET __attribute__((section("sfrs"),address(0xBF821448)));
volatile uint32_t        SPI3CON2INV __attribute__((section("sfrs"),address(0xBF82144C)));
#define SPI4CON SPI4CON
volatile uint32_t   SPI4CON __attribute__((section("sfrs"), address(0xBF821600)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI4CONbits_t;
volatile __SPI4CONbits_t SPI4CONbits __asm__ ("SPI4CON") __attribute__((section("sfrs"), address(0xBF821600)));
volatile uint32_t        SPI4CONCLR __attribute__((section("sfrs"),address(0xBF821604)));
volatile uint32_t        SPI4CONSET __attribute__((section("sfrs"),address(0xBF821608)));
volatile uint32_t        SPI4CONINV __attribute__((section("sfrs"),address(0xBF82160C)));
#define SPI4STAT SPI4STAT
volatile uint32_t   SPI4STAT __attribute__((section("sfrs"), address(0xBF821610)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI4STATbits_t;
volatile __SPI4STATbits_t SPI4STATbits __asm__ ("SPI4STAT") __attribute__((section("sfrs"), address(0xBF821610)));
volatile uint32_t        SPI4STATCLR __attribute__((section("sfrs"),address(0xBF821614)));
volatile uint32_t        SPI4STATSET __attribute__((section("sfrs"),address(0xBF821618)));
volatile uint32_t        SPI4STATINV __attribute__((section("sfrs"),address(0xBF82161C)));
#define SPI4BUF SPI4BUF
volatile uint32_t   SPI4BUF __attribute__((section("sfrs"), address(0xBF821620)));
#define SPI4BRG SPI4BRG
volatile uint32_t   SPI4BRG __attribute__((section("sfrs"), address(0xBF821630)));
volatile uint32_t        SPI4BRGCLR __attribute__((section("sfrs"),address(0xBF821634)));
volatile uint32_t        SPI4BRGSET __attribute__((section("sfrs"),address(0xBF821638)));
volatile uint32_t        SPI4BRGINV __attribute__((section("sfrs"),address(0xBF82163C)));
#define SPI4CON2 SPI4CON2
volatile uint32_t   SPI4CON2 __attribute__((section("sfrs"), address(0xBF821640)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI4CON2bits_t;
volatile __SPI4CON2bits_t SPI4CON2bits __asm__ ("SPI4CON2") __attribute__((section("sfrs"), address(0xBF821640)));
volatile uint32_t        SPI4CON2CLR __attribute__((section("sfrs"),address(0xBF821644)));
volatile uint32_t        SPI4CON2SET __attribute__((section("sfrs"),address(0xBF821648)));
volatile uint32_t        SPI4CON2INV __attribute__((section("sfrs"),address(0xBF82164C)));
#define SPI5CON SPI5CON
volatile uint32_t   SPI5CON __attribute__((section("sfrs"), address(0xBF821800)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI5CONbits_t;
volatile __SPI5CONbits_t SPI5CONbits __asm__ ("SPI5CON") __attribute__((section("sfrs"), address(0xBF821800)));
volatile uint32_t        SPI5CONCLR __attribute__((section("sfrs"),address(0xBF821804)));
volatile uint32_t        SPI5CONSET __attribute__((section("sfrs"),address(0xBF821808)));
volatile uint32_t        SPI5CONINV __attribute__((section("sfrs"),address(0xBF82180C)));
#define SPI5STAT SPI5STAT
volatile uint32_t   SPI5STAT __attribute__((section("sfrs"), address(0xBF821810)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI5STATbits_t;
volatile __SPI5STATbits_t SPI5STATbits __asm__ ("SPI5STAT") __attribute__((section("sfrs"), address(0xBF821810)));
volatile uint32_t        SPI5STATCLR __attribute__((section("sfrs"),address(0xBF821814)));
volatile uint32_t        SPI5STATSET __attribute__((section("sfrs"),address(0xBF821818)));
volatile uint32_t        SPI5STATINV __attribute__((section("sfrs"),address(0xBF82181C)));
#define SPI5BUF SPI5BUF
volatile uint32_t   SPI5BUF __attribute__((section("sfrs"), address(0xBF821820)));
#define SPI5BRG SPI5BRG
volatile uint32_t   SPI5BRG __attribute__((section("sfrs"), address(0xBF821830)));
volatile uint32_t        SPI5BRGCLR __attribute__((section("sfrs"),address(0xBF821834)));
volatile uint32_t        SPI5BRGSET __attribute__((section("sfrs"),address(0xBF821838)));
volatile uint32_t        SPI5BRGINV __attribute__((section("sfrs"),address(0xBF82183C)));
#define SPI5CON2 SPI5CON2
volatile uint32_t   SPI5CON2 __attribute__((section("sfrs"), address(0xBF821840)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI5CON2bits_t;
volatile __SPI5CON2bits_t SPI5CON2bits __asm__ ("SPI5CON2") __attribute__((section("sfrs"), address(0xBF821840)));
volatile uint32_t        SPI5CON2CLR __attribute__((section("sfrs"),address(0xBF821844)));
volatile uint32_t        SPI5CON2SET __attribute__((section("sfrs"),address(0xBF821848)));
volatile uint32_t        SPI5CON2INV __attribute__((section("sfrs"),address(0xBF82184C)));
#define SPI6CON SPI6CON
volatile uint32_t   SPI6CON __attribute__((section("sfrs"), address(0xBF821A00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI6CONbits_t;
volatile __SPI6CONbits_t SPI6CONbits __asm__ ("SPI6CON") __attribute__((section("sfrs"), address(0xBF821A00)));
volatile uint32_t        SPI6CONCLR __attribute__((section("sfrs"),address(0xBF821A04)));
volatile uint32_t        SPI6CONSET __attribute__((section("sfrs"),address(0xBF821A08)));
volatile uint32_t        SPI6CONINV __attribute__((section("sfrs"),address(0xBF821A0C)));
#define SPI6STAT SPI6STAT
volatile uint32_t   SPI6STAT __attribute__((section("sfrs"), address(0xBF821A10)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI6STATbits_t;
volatile __SPI6STATbits_t SPI6STATbits __asm__ ("SPI6STAT") __attribute__((section("sfrs"), address(0xBF821A10)));
volatile uint32_t        SPI6STATCLR __attribute__((section("sfrs"),address(0xBF821A14)));
volatile uint32_t        SPI6STATSET __attribute__((section("sfrs"),address(0xBF821A18)));
volatile uint32_t        SPI6STATINV __attribute__((section("sfrs"),address(0xBF821A1C)));
#define SPI6BUF SPI6BUF
volatile uint32_t   SPI6BUF __attribute__((section("sfrs"), address(0xBF821A20)));
#define SPI6BRG SPI6BRG
volatile uint32_t   SPI6BRG __attribute__((section("sfrs"), address(0xBF821A30)));
volatile uint32_t        SPI6BRGCLR __attribute__((section("sfrs"),address(0xBF821A34)));
volatile uint32_t        SPI6BRGSET __attribute__((section("sfrs"),address(0xBF821A38)));
volatile uint32_t        SPI6BRGINV __attribute__((section("sfrs"),address(0xBF821A3C)));
#define SPI6CON2 SPI6CON2
volatile uint32_t   SPI6CON2 __attribute__((section("sfrs"), address(0xBF821A40)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI6CON2bits_t;
volatile __SPI6CON2bits_t SPI6CON2bits __asm__ ("SPI6CON2") __attribute__((section("sfrs"), address(0xBF821A40)));
volatile uint32_t        SPI6CON2CLR __attribute__((section("sfrs"),address(0xBF821A44)));
volatile uint32_t        SPI6CON2SET __attribute__((section("sfrs"),address(0xBF821A48)));
volatile uint32_t        SPI6CON2INV __attribute__((section("sfrs"),address(0xBF821A4C)));
#define U1MODE U1MODE
volatile uint32_t   U1MODE __attribute__((section("sfrs"), address(0xBF822000)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U1MODEbits_t;
volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE") __attribute__((section("sfrs"), address(0xBF822000)));
#define UABMODE UABMODE
volatile uint32_t   UABMODE __attribute__((section("sfrs"), address(0xBF822000)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __UABMODEbits_t;
volatile __UABMODEbits_t UABMODEbits __asm__ ("UABMODE") __attribute__((section("sfrs"), address(0xBF822000)));
volatile uint32_t        U1MODECLR __attribute__((section("sfrs"),address(0xBF822004)));
volatile uint32_t        UABMODECLR __attribute__((section("sfrs"),address(0xBF822004)));
volatile uint32_t        U1MODESET __attribute__((section("sfrs"),address(0xBF822008)));
volatile uint32_t        UABMODESET __attribute__((section("sfrs"),address(0xBF822008)));
volatile uint32_t        U1MODEINV __attribute__((section("sfrs"),address(0xBF82200C)));
volatile uint32_t        UABMODEINV __attribute__((section("sfrs"),address(0xBF82200C)));
#define U1STA U1STA
volatile uint32_t   U1STA __attribute__((section("sfrs"), address(0xBF822010)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U1STAbits_t;
volatile __U1STAbits_t U1STAbits __asm__ ("U1STA") __attribute__((section("sfrs"), address(0xBF822010)));
#define UABSTA UABSTA
volatile uint32_t   UABSTA __attribute__((section("sfrs"), address(0xBF822010)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __UABSTAbits_t;
volatile __UABSTAbits_t UABSTAbits __asm__ ("UABSTA") __attribute__((section("sfrs"), address(0xBF822010)));
volatile uint32_t        U1STACLR __attribute__((section("sfrs"),address(0xBF822014)));
volatile uint32_t        UABSTACLR __attribute__((section("sfrs"),address(0xBF822014)));
volatile uint32_t        U1STASET __attribute__((section("sfrs"),address(0xBF822018)));
volatile uint32_t        UABSTASET __attribute__((section("sfrs"),address(0xBF822018)));
volatile uint32_t        U1STAINV __attribute__((section("sfrs"),address(0xBF82201C)));
volatile uint32_t        UABSTAINV __attribute__((section("sfrs"),address(0xBF82201C)));
#define U1TXREG U1TXREG
volatile uint32_t   U1TXREG __attribute__((section("sfrs"), address(0xBF822020)));
#define UABTXREG UABTXREG
volatile uint32_t   UABTXREG __attribute__((section("sfrs"), address(0xBF822020)));
#define U1RXREG U1RXREG
volatile uint32_t   U1RXREG __attribute__((section("sfrs"), address(0xBF822030)));
#define UABRXREG UABRXREG
volatile uint32_t   UABRXREG __attribute__((section("sfrs"), address(0xBF822030)));
#define U1BRG U1BRG
volatile uint32_t   U1BRG __attribute__((section("sfrs"), address(0xBF822040)));
#define UABBRG UABBRG
volatile uint32_t   UABBRG __attribute__((section("sfrs"), address(0xBF822040)));
volatile uint32_t        U1BRGCLR __attribute__((section("sfrs"),address(0xBF822044)));
volatile uint32_t        UABBRGCLR __attribute__((section("sfrs"),address(0xBF822044)));
volatile uint32_t        U1BRGSET __attribute__((section("sfrs"),address(0xBF822048)));
volatile uint32_t        UABBRGSET __attribute__((section("sfrs"),address(0xBF822048)));
volatile uint32_t        U1BRGINV __attribute__((section("sfrs"),address(0xBF82204C)));
volatile uint32_t        UABBRGINV __attribute__((section("sfrs"),address(0xBF82204C)));
#define U2MODE U2MODE
volatile uint32_t   U2MODE __attribute__((section("sfrs"), address(0xBF822200)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U2MODEbits_t;
volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs"), address(0xBF822200)));
#define UCDMODE UCDMODE
volatile uint32_t   UCDMODE __attribute__((section("sfrs"), address(0xBF822200)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __UCDMODEbits_t;
volatile __UCDMODEbits_t UCDMODEbits __asm__ ("UCDMODE") __attribute__((section("sfrs"), address(0xBF822200)));
volatile uint32_t        U2MODECLR __attribute__((section("sfrs"),address(0xBF822204)));
volatile uint32_t        UCDMODECLR __attribute__((section("sfrs"),address(0xBF822204)));
volatile uint32_t        U2MODESET __attribute__((section("sfrs"),address(0xBF822208)));
volatile uint32_t        UCDMODESET __attribute__((section("sfrs"),address(0xBF822208)));
volatile uint32_t        U2MODEINV __attribute__((section("sfrs"),address(0xBF82220C)));
volatile uint32_t        UCDMODEINV __attribute__((section("sfrs"),address(0xBF82220C)));
#define U2STA U2STA
volatile uint32_t   U2STA __attribute__((section("sfrs"), address(0xBF822210)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U2STAbits_t;
volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs"), address(0xBF822210)));
#define UCDSTA UCDSTA
volatile uint32_t   UCDSTA __attribute__((section("sfrs"), address(0xBF822210)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __UCDSTAbits_t;
volatile __UCDSTAbits_t UCDSTAbits __asm__ ("UCDSTA") __attribute__((section("sfrs"), address(0xBF822210)));
volatile uint32_t        U2STACLR __attribute__((section("sfrs"),address(0xBF822214)));
volatile uint32_t        UCDSTACLR __attribute__((section("sfrs"),address(0xBF822214)));
volatile uint32_t        U2STASET __attribute__((section("sfrs"),address(0xBF822218)));
volatile uint32_t        UCDSTASET __attribute__((section("sfrs"),address(0xBF822218)));
volatile uint32_t        U2STAINV __attribute__((section("sfrs"),address(0xBF82221C)));
volatile uint32_t        UCDSTAINV __attribute__((section("sfrs"),address(0xBF82221C)));
#define U2TXREG U2TXREG
volatile uint32_t   U2TXREG __attribute__((section("sfrs"), address(0xBF822220)));
#define UCDTXREG UCDTXREG
volatile uint32_t   UCDTXREG __attribute__((section("sfrs"), address(0xBF822220)));
#define U2RXREG U2RXREG
volatile uint32_t   U2RXREG __attribute__((section("sfrs"), address(0xBF822230)));
#define UCDRXREG UCDRXREG
volatile uint32_t   UCDRXREG __attribute__((section("sfrs"), address(0xBF822230)));
#define U2BRG U2BRG
volatile uint32_t   U2BRG __attribute__((section("sfrs"), address(0xBF822240)));
#define UCDBRG UCDBRG
volatile uint32_t   UCDBRG __attribute__((section("sfrs"), address(0xBF822240)));
volatile uint32_t        U2BRGCLR __attribute__((section("sfrs"),address(0xBF822244)));
volatile uint32_t        UCDBRGCLR __attribute__((section("sfrs"),address(0xBF822244)));
volatile uint32_t        U2BRGSET __attribute__((section("sfrs"),address(0xBF822248)));
volatile uint32_t        UCDBRGSET __attribute__((section("sfrs"),address(0xBF822248)));
volatile uint32_t        U2BRGINV __attribute__((section("sfrs"),address(0xBF82224C)));
volatile uint32_t        UCDBRGINV __attribute__((section("sfrs"),address(0xBF82224C)));
#define U3MODE U3MODE
volatile uint32_t   U3MODE __attribute__((section("sfrs"), address(0xBF822400)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U3MODEbits_t;
volatile __U3MODEbits_t U3MODEbits __asm__ ("U3MODE") __attribute__((section("sfrs"), address(0xBF822400)));
#define UEFMODE UEFMODE
volatile uint32_t   UEFMODE __attribute__((section("sfrs"), address(0xBF822400)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __UEFMODEbits_t;
volatile __UEFMODEbits_t UEFMODEbits __asm__ ("UEFMODE") __attribute__((section("sfrs"), address(0xBF822400)));
volatile uint32_t        U3MODECLR __attribute__((section("sfrs"),address(0xBF822404)));
volatile uint32_t        UEFMODECLR __attribute__((section("sfrs"),address(0xBF822404)));
volatile uint32_t        U3MODESET __attribute__((section("sfrs"),address(0xBF822408)));
volatile uint32_t        UEFMODESET __attribute__((section("sfrs"),address(0xBF822408)));
volatile uint32_t        U3MODEINV __attribute__((section("sfrs"),address(0xBF82240C)));
volatile uint32_t        UEFMODEINV __attribute__((section("sfrs"),address(0xBF82240C)));
#define U3STA U3STA
volatile uint32_t   U3STA __attribute__((section("sfrs"), address(0xBF822410)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U3STAbits_t;
volatile __U3STAbits_t U3STAbits __asm__ ("U3STA") __attribute__((section("sfrs"), address(0xBF822410)));
#define UEFSTA UEFSTA
volatile uint32_t   UEFSTA __attribute__((section("sfrs"), address(0xBF822410)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __UEFSTAbits_t;
volatile __UEFSTAbits_t UEFSTAbits __asm__ ("UEFSTA") __attribute__((section("sfrs"), address(0xBF822410)));
volatile uint32_t        U3STACLR __attribute__((section("sfrs"),address(0xBF822414)));
volatile uint32_t        UEFSTACLR __attribute__((section("sfrs"),address(0xBF822414)));
volatile uint32_t        U3STASET __attribute__((section("sfrs"),address(0xBF822418)));
volatile uint32_t        UEFSTASET __attribute__((section("sfrs"),address(0xBF822418)));
volatile uint32_t        U3STAINV __attribute__((section("sfrs"),address(0xBF82241C)));
volatile uint32_t        UEFSTAINV __attribute__((section("sfrs"),address(0xBF82241C)));
#define U3TXREG U3TXREG
volatile uint32_t   U3TXREG __attribute__((section("sfrs"), address(0xBF822420)));
#define UEFTXREG UEFTXREG
volatile uint32_t   UEFTXREG __attribute__((section("sfrs"), address(0xBF822420)));
#define U3RXREG U3RXREG
volatile uint32_t   U3RXREG __attribute__((section("sfrs"), address(0xBF822430)));
#define UEFRXREG UEFRXREG
volatile uint32_t   UEFRXREG __attribute__((section("sfrs"), address(0xBF822430)));
#define U3BRG U3BRG
volatile uint32_t   U3BRG __attribute__((section("sfrs"), address(0xBF822440)));
#define UEFBRG UEFBRG
volatile uint32_t   UEFBRG __attribute__((section("sfrs"), address(0xBF822440)));
volatile uint32_t        U3BRGCLR __attribute__((section("sfrs"),address(0xBF822444)));
volatile uint32_t        UEFBRGCLR __attribute__((section("sfrs"),address(0xBF822444)));
volatile uint32_t        U3BRGSET __attribute__((section("sfrs"),address(0xBF822448)));
volatile uint32_t        UEFBRGSET __attribute__((section("sfrs"),address(0xBF822448)));
volatile uint32_t        U3BRGINV __attribute__((section("sfrs"),address(0xBF82244C)));
volatile uint32_t        UEFBRGINV __attribute__((section("sfrs"),address(0xBF82244C)));
#define U4MODE U4MODE
volatile uint32_t   U4MODE __attribute__((section("sfrs"), address(0xBF822600)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U4MODEbits_t;
volatile __U4MODEbits_t U4MODEbits __asm__ ("U4MODE") __attribute__((section("sfrs"), address(0xBF822600)));
#define UGHMODE UGHMODE
volatile uint32_t   UGHMODE __attribute__((section("sfrs"), address(0xBF822600)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __UGHMODEbits_t;
volatile __UGHMODEbits_t UGHMODEbits __asm__ ("UGHMODE") __attribute__((section("sfrs"), address(0xBF822600)));
volatile uint32_t        U4MODECLR __attribute__((section("sfrs"),address(0xBF822604)));
volatile uint32_t        UGHMODECLR __attribute__((section("sfrs"),address(0xBF822604)));
volatile uint32_t        U4MODESET __attribute__((section("sfrs"),address(0xBF822608)));
volatile uint32_t        UGHMODESET __attribute__((section("sfrs"),address(0xBF822608)));
volatile uint32_t        U4MODEINV __attribute__((section("sfrs"),address(0xBF82260C)));
volatile uint32_t        UGHMODEINV __attribute__((section("sfrs"),address(0xBF82260C)));
#define U4STA U4STA
volatile uint32_t   U4STA __attribute__((section("sfrs"), address(0xBF822610)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U4STAbits_t;
volatile __U4STAbits_t U4STAbits __asm__ ("U4STA") __attribute__((section("sfrs"), address(0xBF822610)));
#define UGHSTA UGHSTA
volatile uint32_t   UGHSTA __attribute__((section("sfrs"), address(0xBF822610)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __UGHSTAbits_t;
volatile __UGHSTAbits_t UGHSTAbits __asm__ ("UGHSTA") __attribute__((section("sfrs"), address(0xBF822610)));
volatile uint32_t        U4STACLR __attribute__((section("sfrs"),address(0xBF822614)));
volatile uint32_t        UGHSTACLR __attribute__((section("sfrs"),address(0xBF822614)));
volatile uint32_t        U4STASET __attribute__((section("sfrs"),address(0xBF822618)));
volatile uint32_t        UGHSTASET __attribute__((section("sfrs"),address(0xBF822618)));
volatile uint32_t        U4STAINV __attribute__((section("sfrs"),address(0xBF82261C)));
volatile uint32_t        UGHSTAINV __attribute__((section("sfrs"),address(0xBF82261C)));
#define U4TXREG U4TXREG
volatile uint32_t   U4TXREG __attribute__((section("sfrs"), address(0xBF822620)));
#define UGHTXREG UGHTXREG
volatile uint32_t   UGHTXREG __attribute__((section("sfrs"), address(0xBF822620)));
#define U4RXREG U4RXREG
volatile uint32_t   U4RXREG __attribute__((section("sfrs"), address(0xBF822630)));
#define UGHRXREG UGHRXREG
volatile uint32_t   UGHRXREG __attribute__((section("sfrs"), address(0xBF822630)));
#define U4BRG U4BRG
volatile uint32_t   U4BRG __attribute__((section("sfrs"), address(0xBF822640)));
#define UGHBRG UGHBRG
volatile uint32_t   UGHBRG __attribute__((section("sfrs"), address(0xBF822640)));
volatile uint32_t        U4BRGCLR __attribute__((section("sfrs"),address(0xBF822644)));
volatile uint32_t        UGHBRGCLR __attribute__((section("sfrs"),address(0xBF822644)));
volatile uint32_t        U4BRGSET __attribute__((section("sfrs"),address(0xBF822648)));
volatile uint32_t        UGHBRGSET __attribute__((section("sfrs"),address(0xBF822648)));
volatile uint32_t        U4BRGINV __attribute__((section("sfrs"),address(0xBF82264C)));
volatile uint32_t        UGHBRGINV __attribute__((section("sfrs"),address(0xBF82264C)));
#define U5MODE U5MODE
volatile uint32_t   U5MODE __attribute__((section("sfrs"), address(0xBF822800)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U5MODEbits_t;
volatile __U5MODEbits_t U5MODEbits __asm__ ("U5MODE") __attribute__((section("sfrs"), address(0xBF822800)));
#define UJKMODE UJKMODE
volatile uint32_t   UJKMODE __attribute__((section("sfrs"), address(0xBF822800)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __UJKMODEbits_t;
volatile __UJKMODEbits_t UJKMODEbits __asm__ ("UJKMODE") __attribute__((section("sfrs"), address(0xBF822800)));
volatile uint32_t        U5MODECLR __attribute__((section("sfrs"),address(0xBF822804)));
volatile uint32_t        UJKMODECLR __attribute__((section("sfrs"),address(0xBF822804)));
volatile uint32_t        U5MODESET __attribute__((section("sfrs"),address(0xBF822808)));
volatile uint32_t        UJKMODESET __attribute__((section("sfrs"),address(0xBF822808)));
volatile uint32_t        U5MODEINV __attribute__((section("sfrs"),address(0xBF82280C)));
volatile uint32_t        UJKMODEINV __attribute__((section("sfrs"),address(0xBF82280C)));
#define U5STA U5STA
volatile uint32_t   U5STA __attribute__((section("sfrs"), address(0xBF822810)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U5STAbits_t;
volatile __U5STAbits_t U5STAbits __asm__ ("U5STA") __attribute__((section("sfrs"), address(0xBF822810)));
#define UJKSTA UJKSTA
volatile uint32_t   UJKSTA __attribute__((section("sfrs"), address(0xBF822810)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __UJKSTAbits_t;
volatile __UJKSTAbits_t UJKSTAbits __asm__ ("UJKSTA") __attribute__((section("sfrs"), address(0xBF822810)));
volatile uint32_t        U5STACLR __attribute__((section("sfrs"),address(0xBF822814)));
volatile uint32_t        UJKSTACLR __attribute__((section("sfrs"),address(0xBF822814)));
volatile uint32_t        U5STASET __attribute__((section("sfrs"),address(0xBF822818)));
volatile uint32_t        UJKSTASET __attribute__((section("sfrs"),address(0xBF822818)));
volatile uint32_t        U5STAINV __attribute__((section("sfrs"),address(0xBF82281C)));
volatile uint32_t        UJKSTAINV __attribute__((section("sfrs"),address(0xBF82281C)));
#define U5TXREG U5TXREG
volatile uint32_t   U5TXREG __attribute__((section("sfrs"), address(0xBF822820)));
#define UJKTXREG UJKTXREG
volatile uint32_t   UJKTXREG __attribute__((section("sfrs"), address(0xBF822820)));
#define U5RXREG U5RXREG
volatile uint32_t   U5RXREG __attribute__((section("sfrs"), address(0xBF822830)));
#define UJKRXREG UJKRXREG
volatile uint32_t   UJKRXREG __attribute__((section("sfrs"), address(0xBF822830)));
#define U5BRG U5BRG
volatile uint32_t   U5BRG __attribute__((section("sfrs"), address(0xBF822840)));
#define UJKBRG UJKBRG
volatile uint32_t   UJKBRG __attribute__((section("sfrs"), address(0xBF822840)));
volatile uint32_t        U5BRGCLR __attribute__((section("sfrs"),address(0xBF822844)));
volatile uint32_t        UJKBRGCLR __attribute__((section("sfrs"),address(0xBF822844)));
volatile uint32_t        U5BRGSET __attribute__((section("sfrs"),address(0xBF822848)));
volatile uint32_t        UJKBRGSET __attribute__((section("sfrs"),address(0xBF822848)));
volatile uint32_t        U5BRGINV __attribute__((section("sfrs"),address(0xBF82284C)));
volatile uint32_t        UJKBRGINV __attribute__((section("sfrs"),address(0xBF82284C)));
#define U6MODE U6MODE
volatile uint32_t   U6MODE __attribute__((section("sfrs"), address(0xBF822A00)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U6MODEbits_t;
volatile __U6MODEbits_t U6MODEbits __asm__ ("U6MODE") __attribute__((section("sfrs"), address(0xBF822A00)));
#define ULMMODE ULMMODE
volatile uint32_t   ULMMODE __attribute__((section("sfrs"), address(0xBF822A00)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __ULMMODEbits_t;
volatile __ULMMODEbits_t ULMMODEbits __asm__ ("ULMMODE") __attribute__((section("sfrs"), address(0xBF822A00)));
volatile uint32_t        U6MODECLR __attribute__((section("sfrs"),address(0xBF822A04)));
volatile uint32_t        ULMMODECLR __attribute__((section("sfrs"),address(0xBF822A04)));
volatile uint32_t        U6MODESET __attribute__((section("sfrs"),address(0xBF822A08)));
volatile uint32_t        ULMMODESET __attribute__((section("sfrs"),address(0xBF822A08)));
volatile uint32_t        U6MODEINV __attribute__((section("sfrs"),address(0xBF822A0C)));
volatile uint32_t        ULMMODEINV __attribute__((section("sfrs"),address(0xBF822A0C)));
#define U6STA U6STA
volatile uint32_t   U6STA __attribute__((section("sfrs"), address(0xBF822A10)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U6STAbits_t;
volatile __U6STAbits_t U6STAbits __asm__ ("U6STA") __attribute__((section("sfrs"), address(0xBF822A10)));
#define ULMSTA ULMSTA
volatile uint32_t   ULMSTA __attribute__((section("sfrs"), address(0xBF822A10)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __ULMSTAbits_t;
volatile __ULMSTAbits_t ULMSTAbits __asm__ ("ULMSTA") __attribute__((section("sfrs"), address(0xBF822A10)));
volatile uint32_t        U6STACLR __attribute__((section("sfrs"),address(0xBF822A14)));
volatile uint32_t        ULMSTACLR __attribute__((section("sfrs"),address(0xBF822A14)));
volatile uint32_t        U6STASET __attribute__((section("sfrs"),address(0xBF822A18)));
volatile uint32_t        ULMSTASET __attribute__((section("sfrs"),address(0xBF822A18)));
volatile uint32_t        U6STAINV __attribute__((section("sfrs"),address(0xBF822A1C)));
volatile uint32_t        ULMSTAINV __attribute__((section("sfrs"),address(0xBF822A1C)));
#define U6TXREG U6TXREG
volatile uint32_t   U6TXREG __attribute__((section("sfrs"), address(0xBF822A20)));
#define ULMTXREG ULMTXREG
volatile uint32_t   ULMTXREG __attribute__((section("sfrs"), address(0xBF822A20)));
#define U6RXREG U6RXREG
volatile uint32_t   U6RXREG __attribute__((section("sfrs"), address(0xBF822A30)));
#define ULMRXREG ULMRXREG
volatile uint32_t   ULMRXREG __attribute__((section("sfrs"), address(0xBF822A30)));
#define U6BRG U6BRG
volatile uint32_t   U6BRG __attribute__((section("sfrs"), address(0xBF822A40)));
#define ULMBRG ULMBRG
volatile uint32_t   ULMBRG __attribute__((section("sfrs"), address(0xBF822A40)));
volatile uint32_t        U6BRGCLR __attribute__((section("sfrs"),address(0xBF822A44)));
volatile uint32_t        ULMBRGCLR __attribute__((section("sfrs"),address(0xBF822A44)));
volatile uint32_t        U6BRGSET __attribute__((section("sfrs"),address(0xBF822A48)));
volatile uint32_t        ULMBRGSET __attribute__((section("sfrs"),address(0xBF822A48)));
volatile uint32_t        U6BRGINV __attribute__((section("sfrs"),address(0xBF822A4C)));
volatile uint32_t        ULMBRGINV __attribute__((section("sfrs"),address(0xBF822A4C)));
#define PMCON PMCON
volatile uint32_t   PMCON __attribute__((section("sfrs"), address(0xBF82E000)));
typedef union {
  struct {
    uint32_t RDSP:1;
    uint32_t WRSP:1;
    uint32_t :1;
    uint32_t CS1P:1;
    uint32_t CS2P:1;
    uint32_t ALP:1;
    uint32_t CSF:2;
    uint32_t PTRDEN:1;
    uint32_t PTWREN:1;
    uint32_t PMPTTL:1;
    uint32_t ADRMUX:2;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t :1;
    uint32_t DUALBUF:1;
    uint32_t :5;
    uint32_t RDSTART:1;
  };
  struct {
    uint32_t :6;
    uint32_t CSF0:1;
    uint32_t CSF1:1;
    uint32_t :3;
    uint32_t ADRMUX0:1;
    uint32_t ADRMUX1:1;
  };
  struct {
    uint32_t :13;
    uint32_t PSIDL:1;
    uint32_t :1;
    uint32_t PMPEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMCONbits_t;
volatile __PMCONbits_t PMCONbits __asm__ ("PMCON") __attribute__((section("sfrs"), address(0xBF82E000)));
volatile uint32_t        PMCONCLR __attribute__((section("sfrs"),address(0xBF82E004)));
volatile uint32_t        PMCONSET __attribute__((section("sfrs"),address(0xBF82E008)));
volatile uint32_t        PMCONINV __attribute__((section("sfrs"),address(0xBF82E00C)));
#define PMMODE PMMODE
volatile uint32_t   PMMODE __attribute__((section("sfrs"), address(0xBF82E010)));
typedef union {
  struct {
    uint32_t WAITE:2;
    uint32_t WAITM:4;
    uint32_t WAITB:2;
    uint32_t MODE:2;
    uint32_t MODE16:1;
    uint32_t INCM:2;
    uint32_t IRQM:2;
    uint32_t BUSY:1;
  };
  struct {
    uint32_t WAITE0:1;
    uint32_t WAITE1:1;
    uint32_t WAITM0:1;
    uint32_t WAITM1:1;
    uint32_t WAITM2:1;
    uint32_t WAITM3:1;
    uint32_t WAITB0:1;
    uint32_t WAITB1:1;
    uint32_t MODE0:1;
    uint32_t MODE1:1;
    uint32_t :1;
    uint32_t INCM0:1;
    uint32_t INCM1:1;
    uint32_t IRQM0:1;
    uint32_t IRQM1:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMMODEbits_t;
volatile __PMMODEbits_t PMMODEbits __asm__ ("PMMODE") __attribute__((section("sfrs"), address(0xBF82E010)));
volatile uint32_t        PMMODECLR __attribute__((section("sfrs"),address(0xBF82E014)));
volatile uint32_t        PMMODESET __attribute__((section("sfrs"),address(0xBF82E018)));
volatile uint32_t        PMMODEINV __attribute__((section("sfrs"),address(0xBF82E01C)));
#define PMADDR PMADDR
volatile uint32_t   PMADDR __attribute__((section("sfrs"), address(0xBF82E020)));
typedef union {
  struct {
    uint32_t ADDR:14;
    uint32_t ADDR14:1;
    uint32_t ADDR15:1;
  };
  struct {
    uint32_t :14;
    uint32_t CS:2;
  };
  struct {
    uint32_t :14;
    uint32_t CS1:1;
    uint32_t CS2:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMADDRbits_t;
volatile __PMADDRbits_t PMADDRbits __asm__ ("PMADDR") __attribute__((section("sfrs"), address(0xBF82E020)));
volatile uint32_t        PMADDRCLR __attribute__((section("sfrs"),address(0xBF82E024)));
volatile uint32_t        PMADDRSET __attribute__((section("sfrs"),address(0xBF82E028)));
volatile uint32_t        PMADDRINV __attribute__((section("sfrs"),address(0xBF82E02C)));
#define PMDOUT PMDOUT
volatile uint32_t   PMDOUT __attribute__((section("sfrs"), address(0xBF82E030)));
typedef union {
  struct {
    uint32_t DATAOUT:32;
  };
  struct {
    uint32_t w:32;
  };
} __PMDOUTbits_t;
volatile __PMDOUTbits_t PMDOUTbits __asm__ ("PMDOUT") __attribute__((section("sfrs"), address(0xBF82E030)));
volatile uint32_t        PMDOUTCLR __attribute__((section("sfrs"),address(0xBF82E034)));
volatile uint32_t        PMDOUTSET __attribute__((section("sfrs"),address(0xBF82E038)));
volatile uint32_t        PMDOUTINV __attribute__((section("sfrs"),address(0xBF82E03C)));
#define PMDIN PMDIN
volatile uint32_t   PMDIN __attribute__((section("sfrs"), address(0xBF82E040)));
typedef union {
  struct {
    uint32_t DATAIN:32;
  };
  struct {
    uint32_t w:32;
  };
} __PMDINbits_t;
volatile __PMDINbits_t PMDINbits __asm__ ("PMDIN") __attribute__((section("sfrs"), address(0xBF82E040)));
volatile uint32_t        PMDINCLR __attribute__((section("sfrs"),address(0xBF82E044)));
volatile uint32_t        PMDINSET __attribute__((section("sfrs"),address(0xBF82E048)));
volatile uint32_t        PMDININV __attribute__((section("sfrs"),address(0xBF82E04C)));
#define PMAEN PMAEN
volatile uint32_t   PMAEN __attribute__((section("sfrs"), address(0xBF82E050)));
typedef union {
  struct {
    uint32_t PTEN:24;
  };
  struct {
    uint32_t w:32;
  };
} __PMAENbits_t;
volatile __PMAENbits_t PMAENbits __asm__ ("PMAEN") __attribute__((section("sfrs"), address(0xBF82E050)));
volatile uint32_t        PMAENCLR __attribute__((section("sfrs"),address(0xBF82E054)));
volatile uint32_t        PMAENSET __attribute__((section("sfrs"),address(0xBF82E058)));
volatile uint32_t        PMAENINV __attribute__((section("sfrs"),address(0xBF82E05C)));
#define PMSTAT PMSTAT
volatile uint32_t   PMSTAT __attribute__((section("sfrs"), address(0xBF82E060)));
typedef union {
  struct {
    uint32_t OB0E:1;
    uint32_t OB1E:1;
    uint32_t OB2E:1;
    uint32_t OB3E:1;
    uint32_t :2;
    uint32_t OBUF:1;
    uint32_t OBE:1;
    uint32_t IB0F:1;
    uint32_t IB1F:1;
    uint32_t IB2F:1;
    uint32_t IB3F:1;
    uint32_t :2;
    uint32_t IBOV:1;
    uint32_t IBF:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMSTATbits_t;
volatile __PMSTATbits_t PMSTATbits __asm__ ("PMSTAT") __attribute__((section("sfrs"), address(0xBF82E060)));
volatile uint32_t        PMSTATCLR __attribute__((section("sfrs"),address(0xBF82E064)));
volatile uint32_t        PMSTATSET __attribute__((section("sfrs"),address(0xBF82E068)));
volatile uint32_t        PMSTATINV __attribute__((section("sfrs"),address(0xBF82E06C)));
#define PMWADDR PMWADDR
volatile uint32_t   PMWADDR __attribute__((section("sfrs"), address(0xBF82E070)));
typedef union {
  struct {
    uint32_t WADDR:24;
  };
  struct {
    uint32_t :14;
    uint32_t WCS:2;
    uint32_t :6;
    uint32_t WCSA:2;
  };
  struct {
    uint32_t :14;
    uint32_t WCS1:1;
    uint32_t WCS2:1;
    uint32_t :6;
    uint32_t WCS1A:1;
    uint32_t WCS2A:1;
  };
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t :14;
    uint32_t WADDR14:1;
    uint32_t WADDR15:1;
    uint32_t :6;
    uint32_t WADDR22:1;
    uint32_t WADDR23:1;
  };
} __PMWADDRbits_t;
volatile __PMWADDRbits_t PMWADDRbits __asm__ ("PMWADDR") __attribute__((section("sfrs"), address(0xBF82E070)));
volatile uint32_t        PMWADDRCLR __attribute__((section("sfrs"),address(0xBF82E074)));
volatile uint32_t        PMWADDRSET __attribute__((section("sfrs"),address(0xBF82E078)));
volatile uint32_t        PMWADDRINV __attribute__((section("sfrs"),address(0xBF82E07C)));
#define PMRADDR PMRADDR
volatile uint32_t   PMRADDR __attribute__((section("sfrs"), address(0xBF82E080)));
typedef union {
  struct {
    uint32_t RADDR:14;
    uint32_t RADDR14:1;
    uint32_t RADDR15:1;
  };
  struct {
    uint32_t :14;
    uint32_t RCS:2;
  };
  struct {
    uint32_t :14;
    uint32_t RCS1:1;
    uint32_t RCS2:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMRADDRbits_t;
volatile __PMRADDRbits_t PMRADDRbits __asm__ ("PMRADDR") __attribute__((section("sfrs"), address(0xBF82E080)));
volatile uint32_t        PMRADDRCLR __attribute__((section("sfrs"),address(0xBF82E084)));
volatile uint32_t        PMRADDRSET __attribute__((section("sfrs"),address(0xBF82E088)));
volatile uint32_t        PMRADDRINV __attribute__((section("sfrs"),address(0xBF82E08C)));
#define PMRDIN PMRDIN
volatile uint32_t   PMRDIN __attribute__((section("sfrs"), address(0xBF82E090)));
typedef union {
  struct {
    uint32_t RDATAIN:32;
  };
  struct {
    uint32_t w:32;
  };
} __PMRDINbits_t;
volatile __PMRDINbits_t PMRDINbits __asm__ ("PMRDIN") __attribute__((section("sfrs"), address(0xBF82E090)));
volatile uint32_t        PMRDINCLR __attribute__((section("sfrs"),address(0xBF82E094)));
volatile uint32_t        PMRDINSET __attribute__((section("sfrs"),address(0xBF82E098)));
volatile uint32_t        PMRDININV __attribute__((section("sfrs"),address(0xBF82E09C)));
#define T1CON T1CON
volatile uint32_t   T1CON __attribute__((section("sfrs"), address(0xBF840000)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t TSYNC:1;
    uint32_t :1;
    uint32_t TCKPS:2;
    uint32_t :1;
    uint32_t TGATE:1;
    uint32_t :3;
    uint32_t TWIP:1;
    uint32_t TWDIS:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T1CONbits_t;
volatile __T1CONbits_t T1CONbits __asm__ ("T1CON") __attribute__((section("sfrs"), address(0xBF840000)));
volatile uint32_t        T1CONCLR __attribute__((section("sfrs"),address(0xBF840004)));
volatile uint32_t        T1CONSET __attribute__((section("sfrs"),address(0xBF840008)));
volatile uint32_t        T1CONINV __attribute__((section("sfrs"),address(0xBF84000C)));
#define TMR1 TMR1
volatile uint32_t   TMR1 __attribute__((section("sfrs"), address(0xBF840010)));
volatile uint32_t        TMR1CLR __attribute__((section("sfrs"),address(0xBF840014)));
volatile uint32_t        TMR1SET __attribute__((section("sfrs"),address(0xBF840018)));
volatile uint32_t        TMR1INV __attribute__((section("sfrs"),address(0xBF84001C)));
#define PR1 PR1
volatile uint32_t   PR1 __attribute__((section("sfrs"), address(0xBF840020)));
volatile uint32_t        PR1CLR __attribute__((section("sfrs"),address(0xBF840024)));
volatile uint32_t        PR1SET __attribute__((section("sfrs"),address(0xBF840028)));
volatile uint32_t        PR1INV __attribute__((section("sfrs"),address(0xBF84002C)));
#define T2CON T2CON
volatile uint32_t   T2CON __attribute__((section("sfrs"), address(0xBF840200)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T2CONbits_t;
volatile __T2CONbits_t T2CONbits __asm__ ("T2CON") __attribute__((section("sfrs"), address(0xBF840200)));
volatile uint32_t        T2CONCLR __attribute__((section("sfrs"),address(0xBF840204)));
volatile uint32_t        T2CONSET __attribute__((section("sfrs"),address(0xBF840208)));
volatile uint32_t        T2CONINV __attribute__((section("sfrs"),address(0xBF84020C)));
#define TMR2 TMR2
volatile uint32_t   TMR2 __attribute__((section("sfrs"), address(0xBF840210)));
volatile uint32_t        TMR2CLR __attribute__((section("sfrs"),address(0xBF840214)));
volatile uint32_t        TMR2SET __attribute__((section("sfrs"),address(0xBF840218)));
volatile uint32_t        TMR2INV __attribute__((section("sfrs"),address(0xBF84021C)));
#define PR2 PR2
volatile uint32_t   PR2 __attribute__((section("sfrs"), address(0xBF840220)));
volatile uint32_t        PR2CLR __attribute__((section("sfrs"),address(0xBF840224)));
volatile uint32_t        PR2SET __attribute__((section("sfrs"),address(0xBF840228)));
volatile uint32_t        PR2INV __attribute__((section("sfrs"),address(0xBF84022C)));
#define T3CON T3CON
volatile uint32_t   T3CON __attribute__((section("sfrs"), address(0xBF840400)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :2;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T3CONbits_t;
volatile __T3CONbits_t T3CONbits __asm__ ("T3CON") __attribute__((section("sfrs"), address(0xBF840400)));
volatile uint32_t        T3CONCLR __attribute__((section("sfrs"),address(0xBF840404)));
volatile uint32_t        T3CONSET __attribute__((section("sfrs"),address(0xBF840408)));
volatile uint32_t        T3CONINV __attribute__((section("sfrs"),address(0xBF84040C)));
#define TMR3 TMR3
volatile uint32_t   TMR3 __attribute__((section("sfrs"), address(0xBF840410)));
volatile uint32_t        TMR3CLR __attribute__((section("sfrs"),address(0xBF840414)));
volatile uint32_t        TMR3SET __attribute__((section("sfrs"),address(0xBF840418)));
volatile uint32_t        TMR3INV __attribute__((section("sfrs"),address(0xBF84041C)));
#define PR3 PR3
volatile uint32_t   PR3 __attribute__((section("sfrs"), address(0xBF840420)));
volatile uint32_t        PR3CLR __attribute__((section("sfrs"),address(0xBF840424)));
volatile uint32_t        PR3SET __attribute__((section("sfrs"),address(0xBF840428)));
volatile uint32_t        PR3INV __attribute__((section("sfrs"),address(0xBF84042C)));
#define T4CON T4CON
volatile uint32_t   T4CON __attribute__((section("sfrs"), address(0xBF840600)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T4CONbits_t;
volatile __T4CONbits_t T4CONbits __asm__ ("T4CON") __attribute__((section("sfrs"), address(0xBF840600)));
volatile uint32_t        T4CONCLR __attribute__((section("sfrs"),address(0xBF840604)));
volatile uint32_t        T4CONSET __attribute__((section("sfrs"),address(0xBF840608)));
volatile uint32_t        T4CONINV __attribute__((section("sfrs"),address(0xBF84060C)));
#define TMR4 TMR4
volatile uint32_t   TMR4 __attribute__((section("sfrs"), address(0xBF840610)));
volatile uint32_t        TMR4CLR __attribute__((section("sfrs"),address(0xBF840614)));
volatile uint32_t        TMR4SET __attribute__((section("sfrs"),address(0xBF840618)));
volatile uint32_t        TMR4INV __attribute__((section("sfrs"),address(0xBF84061C)));
#define PR4 PR4
volatile uint32_t   PR4 __attribute__((section("sfrs"), address(0xBF840620)));
volatile uint32_t        PR4CLR __attribute__((section("sfrs"),address(0xBF840624)));
volatile uint32_t        PR4SET __attribute__((section("sfrs"),address(0xBF840628)));
volatile uint32_t        PR4INV __attribute__((section("sfrs"),address(0xBF84062C)));
#define T5CON T5CON
volatile uint32_t   T5CON __attribute__((section("sfrs"), address(0xBF840800)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :2;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T5CONbits_t;
volatile __T5CONbits_t T5CONbits __asm__ ("T5CON") __attribute__((section("sfrs"), address(0xBF840800)));
volatile uint32_t        T5CONCLR __attribute__((section("sfrs"),address(0xBF840804)));
volatile uint32_t        T5CONSET __attribute__((section("sfrs"),address(0xBF840808)));
volatile uint32_t        T5CONINV __attribute__((section("sfrs"),address(0xBF84080C)));
#define TMR5 TMR5
volatile uint32_t   TMR5 __attribute__((section("sfrs"), address(0xBF840810)));
volatile uint32_t        TMR5CLR __attribute__((section("sfrs"),address(0xBF840814)));
volatile uint32_t        TMR5SET __attribute__((section("sfrs"),address(0xBF840818)));
volatile uint32_t        TMR5INV __attribute__((section("sfrs"),address(0xBF84081C)));
#define PR5 PR5
volatile uint32_t   PR5 __attribute__((section("sfrs"), address(0xBF840820)));
volatile uint32_t        PR5CLR __attribute__((section("sfrs"),address(0xBF840824)));
volatile uint32_t        PR5SET __attribute__((section("sfrs"),address(0xBF840828)));
volatile uint32_t        PR5INV __attribute__((section("sfrs"),address(0xBF84082C)));
#define T6CON T6CON
volatile uint32_t   T6CON __attribute__((section("sfrs"), address(0xBF840A00)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T6CONbits_t;
volatile __T6CONbits_t T6CONbits __asm__ ("T6CON") __attribute__((section("sfrs"), address(0xBF840A00)));
volatile uint32_t        T6CONCLR __attribute__((section("sfrs"),address(0xBF840A04)));
volatile uint32_t        T6CONSET __attribute__((section("sfrs"),address(0xBF840A08)));
volatile uint32_t        T6CONINV __attribute__((section("sfrs"),address(0xBF840A0C)));
#define TMR6 TMR6
volatile uint32_t   TMR6 __attribute__((section("sfrs"), address(0xBF840A10)));
volatile uint32_t        TMR6CLR __attribute__((section("sfrs"),address(0xBF840A14)));
volatile uint32_t        TMR6SET __attribute__((section("sfrs"),address(0xBF840A18)));
volatile uint32_t        TMR6INV __attribute__((section("sfrs"),address(0xBF840A1C)));
#define PR6 PR6
volatile uint32_t   PR6 __attribute__((section("sfrs"), address(0xBF840A20)));
volatile uint32_t        PR6CLR __attribute__((section("sfrs"),address(0xBF840A24)));
volatile uint32_t        PR6SET __attribute__((section("sfrs"),address(0xBF840A28)));
volatile uint32_t        PR6INV __attribute__((section("sfrs"),address(0xBF840A2C)));
#define T7CON T7CON
volatile uint32_t   T7CON __attribute__((section("sfrs"), address(0xBF840C00)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :2;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T7CONbits_t;
volatile __T7CONbits_t T7CONbits __asm__ ("T7CON") __attribute__((section("sfrs"), address(0xBF840C00)));
volatile uint32_t        T7CONCLR __attribute__((section("sfrs"),address(0xBF840C04)));
volatile uint32_t        T7CONSET __attribute__((section("sfrs"),address(0xBF840C08)));
volatile uint32_t        T7CONINV __attribute__((section("sfrs"),address(0xBF840C0C)));
#define TMR7 TMR7
volatile uint32_t   TMR7 __attribute__((section("sfrs"), address(0xBF840C10)));
volatile uint32_t        TMR7CLR __attribute__((section("sfrs"),address(0xBF840C14)));
volatile uint32_t        TMR7SET __attribute__((section("sfrs"),address(0xBF840C18)));
volatile uint32_t        TMR7INV __attribute__((section("sfrs"),address(0xBF840C1C)));
#define PR7 PR7
volatile uint32_t   PR7 __attribute__((section("sfrs"), address(0xBF840C20)));
volatile uint32_t        PR7CLR __attribute__((section("sfrs"),address(0xBF840C24)));
volatile uint32_t        PR7SET __attribute__((section("sfrs"),address(0xBF840C28)));
volatile uint32_t        PR7INV __attribute__((section("sfrs"),address(0xBF840C2C)));
#define T8CON T8CON
volatile uint32_t   T8CON __attribute__((section("sfrs"), address(0xBF840E00)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T8CONbits_t;
volatile __T8CONbits_t T8CONbits __asm__ ("T8CON") __attribute__((section("sfrs"), address(0xBF840E00)));
volatile uint32_t        T8CONCLR __attribute__((section("sfrs"),address(0xBF840E04)));
volatile uint32_t        T8CONSET __attribute__((section("sfrs"),address(0xBF840E08)));
volatile uint32_t        T8CONINV __attribute__((section("sfrs"),address(0xBF840E0C)));
#define TMR8 TMR8
volatile uint32_t   TMR8 __attribute__((section("sfrs"), address(0xBF840E10)));
volatile uint32_t        TMR8CLR __attribute__((section("sfrs"),address(0xBF840E14)));
volatile uint32_t        TMR8SET __attribute__((section("sfrs"),address(0xBF840E18)));
volatile uint32_t        TMR8INV __attribute__((section("sfrs"),address(0xBF840E1C)));
#define PR8 PR8
volatile uint32_t   PR8 __attribute__((section("sfrs"), address(0xBF840E20)));
volatile uint32_t        PR8CLR __attribute__((section("sfrs"),address(0xBF840E24)));
volatile uint32_t        PR8SET __attribute__((section("sfrs"),address(0xBF840E28)));
volatile uint32_t        PR8INV __attribute__((section("sfrs"),address(0xBF840E2C)));
#define T9CON T9CON
volatile uint32_t   T9CON __attribute__((section("sfrs"), address(0xBF841000)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :2;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T9CONbits_t;
volatile __T9CONbits_t T9CONbits __asm__ ("T9CON") __attribute__((section("sfrs"), address(0xBF841000)));
volatile uint32_t        T9CONCLR __attribute__((section("sfrs"),address(0xBF841004)));
volatile uint32_t        T9CONSET __attribute__((section("sfrs"),address(0xBF841008)));
volatile uint32_t        T9CONINV __attribute__((section("sfrs"),address(0xBF84100C)));
#define TMR9 TMR9
volatile uint32_t   TMR9 __attribute__((section("sfrs"), address(0xBF841010)));
volatile uint32_t        TMR9CLR __attribute__((section("sfrs"),address(0xBF841014)));
volatile uint32_t        TMR9SET __attribute__((section("sfrs"),address(0xBF841018)));
volatile uint32_t        TMR9INV __attribute__((section("sfrs"),address(0xBF84101C)));
#define PR9 PR9
volatile uint32_t   PR9 __attribute__((section("sfrs"), address(0xBF841020)));
volatile uint32_t        PR9CLR __attribute__((section("sfrs"),address(0xBF841024)));
volatile uint32_t        PR9SET __attribute__((section("sfrs"),address(0xBF841028)));
volatile uint32_t        PR9INV __attribute__((section("sfrs"),address(0xBF84102C)));
#define IC1CON IC1CON
volatile uint32_t   IC1CON __attribute__((section("sfrs"), address(0xBF842000)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC1CONbits_t;
volatile __IC1CONbits_t IC1CONbits __asm__ ("IC1CON") __attribute__((section("sfrs"), address(0xBF842000)));
volatile uint32_t        IC1CONCLR __attribute__((section("sfrs"),address(0xBF842004)));
volatile uint32_t        IC1CONSET __attribute__((section("sfrs"),address(0xBF842008)));
volatile uint32_t        IC1CONINV __attribute__((section("sfrs"),address(0xBF84200C)));
#define IC1BUF IC1BUF
volatile uint32_t   IC1BUF __attribute__((section("sfrs"), address(0xBF842010)));
#define IC2CON IC2CON
volatile uint32_t   IC2CON __attribute__((section("sfrs"), address(0xBF842200)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC2CONbits_t;
volatile __IC2CONbits_t IC2CONbits __asm__ ("IC2CON") __attribute__((section("sfrs"), address(0xBF842200)));
volatile uint32_t        IC2CONCLR __attribute__((section("sfrs"),address(0xBF842204)));
volatile uint32_t        IC2CONSET __attribute__((section("sfrs"),address(0xBF842208)));
volatile uint32_t        IC2CONINV __attribute__((section("sfrs"),address(0xBF84220C)));
#define IC2BUF IC2BUF
volatile uint32_t   IC2BUF __attribute__((section("sfrs"), address(0xBF842210)));
#define IC3CON IC3CON
volatile uint32_t   IC3CON __attribute__((section("sfrs"), address(0xBF842400)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC3CONbits_t;
volatile __IC3CONbits_t IC3CONbits __asm__ ("IC3CON") __attribute__((section("sfrs"), address(0xBF842400)));
volatile uint32_t        IC3CONCLR __attribute__((section("sfrs"),address(0xBF842404)));
volatile uint32_t        IC3CONSET __attribute__((section("sfrs"),address(0xBF842408)));
volatile uint32_t        IC3CONINV __attribute__((section("sfrs"),address(0xBF84240C)));
#define IC3BUF IC3BUF
volatile uint32_t   IC3BUF __attribute__((section("sfrs"), address(0xBF842410)));
#define IC4CON IC4CON
volatile uint32_t   IC4CON __attribute__((section("sfrs"), address(0xBF842600)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC4CONbits_t;
volatile __IC4CONbits_t IC4CONbits __asm__ ("IC4CON") __attribute__((section("sfrs"), address(0xBF842600)));
volatile uint32_t        IC4CONCLR __attribute__((section("sfrs"),address(0xBF842604)));
volatile uint32_t        IC4CONSET __attribute__((section("sfrs"),address(0xBF842608)));
volatile uint32_t        IC4CONINV __attribute__((section("sfrs"),address(0xBF84260C)));
#define IC4BUF IC4BUF
volatile uint32_t   IC4BUF __attribute__((section("sfrs"), address(0xBF842610)));
#define IC5CON IC5CON
volatile uint32_t   IC5CON __attribute__((section("sfrs"), address(0xBF842800)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC5CONbits_t;
volatile __IC5CONbits_t IC5CONbits __asm__ ("IC5CON") __attribute__((section("sfrs"), address(0xBF842800)));
volatile uint32_t        IC5CONCLR __attribute__((section("sfrs"),address(0xBF842804)));
volatile uint32_t        IC5CONSET __attribute__((section("sfrs"),address(0xBF842808)));
volatile uint32_t        IC5CONINV __attribute__((section("sfrs"),address(0xBF84280C)));
#define IC5BUF IC5BUF
volatile uint32_t   IC5BUF __attribute__((section("sfrs"), address(0xBF842810)));
#define IC6CON IC6CON
volatile uint32_t   IC6CON __attribute__((section("sfrs"), address(0xBF842A00)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC6CONbits_t;
volatile __IC6CONbits_t IC6CONbits __asm__ ("IC6CON") __attribute__((section("sfrs"), address(0xBF842A00)));
volatile uint32_t        IC6CONCLR __attribute__((section("sfrs"),address(0xBF842A04)));
volatile uint32_t        IC6CONSET __attribute__((section("sfrs"),address(0xBF842A08)));
volatile uint32_t        IC6CONINV __attribute__((section("sfrs"),address(0xBF842A0C)));
#define IC6BUF IC6BUF
volatile uint32_t   IC6BUF __attribute__((section("sfrs"), address(0xBF842A10)));
#define IC7CON IC7CON
volatile uint32_t   IC7CON __attribute__((section("sfrs"), address(0xBF842C00)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC7CONbits_t;
volatile __IC7CONbits_t IC7CONbits __asm__ ("IC7CON") __attribute__((section("sfrs"), address(0xBF842C00)));
volatile uint32_t        IC7CONCLR __attribute__((section("sfrs"),address(0xBF842C04)));
volatile uint32_t        IC7CONSET __attribute__((section("sfrs"),address(0xBF842C08)));
volatile uint32_t        IC7CONINV __attribute__((section("sfrs"),address(0xBF842C0C)));
#define IC7BUF IC7BUF
volatile uint32_t   IC7BUF __attribute__((section("sfrs"), address(0xBF842C10)));
#define IC8CON IC8CON
volatile uint32_t   IC8CON __attribute__((section("sfrs"), address(0xBF842E00)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC8CONbits_t;
volatile __IC8CONbits_t IC8CONbits __asm__ ("IC8CON") __attribute__((section("sfrs"), address(0xBF842E00)));
volatile uint32_t        IC8CONCLR __attribute__((section("sfrs"),address(0xBF842E04)));
volatile uint32_t        IC8CONSET __attribute__((section("sfrs"),address(0xBF842E08)));
volatile uint32_t        IC8CONINV __attribute__((section("sfrs"),address(0xBF842E0C)));
#define IC8BUF IC8BUF
volatile uint32_t   IC8BUF __attribute__((section("sfrs"), address(0xBF842E10)));
#define IC9CON IC9CON
volatile uint32_t   IC9CON __attribute__((section("sfrs"), address(0xBF843000)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC9CONbits_t;
volatile __IC9CONbits_t IC9CONbits __asm__ ("IC9CON") __attribute__((section("sfrs"), address(0xBF843000)));
volatile uint32_t        IC9CONCLR __attribute__((section("sfrs"),address(0xBF843004)));
volatile uint32_t        IC9CONSET __attribute__((section("sfrs"),address(0xBF843008)));
volatile uint32_t        IC9CONINV __attribute__((section("sfrs"),address(0xBF84300C)));
#define IC9BUF IC9BUF
volatile uint32_t   IC9BUF __attribute__((section("sfrs"), address(0xBF843010)));
#define OC1CON OC1CON
volatile uint32_t   OC1CON __attribute__((section("sfrs"), address(0xBF844000)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC1CONbits_t;
volatile __OC1CONbits_t OC1CONbits __asm__ ("OC1CON") __attribute__((section("sfrs"), address(0xBF844000)));
volatile uint32_t        OC1CONCLR __attribute__((section("sfrs"),address(0xBF844004)));
volatile uint32_t        OC1CONSET __attribute__((section("sfrs"),address(0xBF844008)));
volatile uint32_t        OC1CONINV __attribute__((section("sfrs"),address(0xBF84400C)));
#define OC1R OC1R
volatile uint32_t   OC1R __attribute__((section("sfrs"), address(0xBF844010)));
volatile uint32_t        OC1RCLR __attribute__((section("sfrs"),address(0xBF844014)));
volatile uint32_t        OC1RSET __attribute__((section("sfrs"),address(0xBF844018)));
volatile uint32_t        OC1RINV __attribute__((section("sfrs"),address(0xBF84401C)));
#define OC1RS OC1RS
volatile uint32_t   OC1RS __attribute__((section("sfrs"), address(0xBF844020)));
volatile uint32_t        OC1RSCLR __attribute__((section("sfrs"),address(0xBF844024)));
volatile uint32_t        OC1RSSET __attribute__((section("sfrs"),address(0xBF844028)));
volatile uint32_t        OC1RSINV __attribute__((section("sfrs"),address(0xBF84402C)));
#define OC2CON OC2CON
volatile uint32_t   OC2CON __attribute__((section("sfrs"), address(0xBF844200)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC2CONbits_t;
volatile __OC2CONbits_t OC2CONbits __asm__ ("OC2CON") __attribute__((section("sfrs"), address(0xBF844200)));
volatile uint32_t        OC2CONCLR __attribute__((section("sfrs"),address(0xBF844204)));
volatile uint32_t        OC2CONSET __attribute__((section("sfrs"),address(0xBF844208)));
volatile uint32_t        OC2CONINV __attribute__((section("sfrs"),address(0xBF84420C)));
#define OC2R OC2R
volatile uint32_t   OC2R __attribute__((section("sfrs"), address(0xBF844210)));
volatile uint32_t        OC2RCLR __attribute__((section("sfrs"),address(0xBF844214)));
volatile uint32_t        OC2RSET __attribute__((section("sfrs"),address(0xBF844218)));
volatile uint32_t        OC2RINV __attribute__((section("sfrs"),address(0xBF84421C)));
#define OC2RS OC2RS
volatile uint32_t   OC2RS __attribute__((section("sfrs"), address(0xBF844220)));
volatile uint32_t        OC2RSCLR __attribute__((section("sfrs"),address(0xBF844224)));
volatile uint32_t        OC2RSSET __attribute__((section("sfrs"),address(0xBF844228)));
volatile uint32_t        OC2RSINV __attribute__((section("sfrs"),address(0xBF84422C)));
#define OC3CON OC3CON
volatile uint32_t   OC3CON __attribute__((section("sfrs"), address(0xBF844400)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC3CONbits_t;
volatile __OC3CONbits_t OC3CONbits __asm__ ("OC3CON") __attribute__((section("sfrs"), address(0xBF844400)));
volatile uint32_t        OC3CONCLR __attribute__((section("sfrs"),address(0xBF844404)));
volatile uint32_t        OC3CONSET __attribute__((section("sfrs"),address(0xBF844408)));
volatile uint32_t        OC3CONINV __attribute__((section("sfrs"),address(0xBF84440C)));
#define OC3R OC3R
volatile uint32_t   OC3R __attribute__((section("sfrs"), address(0xBF844410)));
volatile uint32_t        OC3RCLR __attribute__((section("sfrs"),address(0xBF844414)));
volatile uint32_t        OC3RSET __attribute__((section("sfrs"),address(0xBF844418)));
volatile uint32_t        OC3RINV __attribute__((section("sfrs"),address(0xBF84441C)));
#define OC3RS OC3RS
volatile uint32_t   OC3RS __attribute__((section("sfrs"), address(0xBF844420)));
volatile uint32_t        OC3RSCLR __attribute__((section("sfrs"),address(0xBF844424)));
volatile uint32_t        OC3RSSET __attribute__((section("sfrs"),address(0xBF844428)));
volatile uint32_t        OC3RSINV __attribute__((section("sfrs"),address(0xBF84442C)));
#define OC4CON OC4CON
volatile uint32_t   OC4CON __attribute__((section("sfrs"), address(0xBF844600)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC4CONbits_t;
volatile __OC4CONbits_t OC4CONbits __asm__ ("OC4CON") __attribute__((section("sfrs"), address(0xBF844600)));
volatile uint32_t        OC4CONCLR __attribute__((section("sfrs"),address(0xBF844604)));
volatile uint32_t        OC4CONSET __attribute__((section("sfrs"),address(0xBF844608)));
volatile uint32_t        OC4CONINV __attribute__((section("sfrs"),address(0xBF84460C)));
#define OC4R OC4R
volatile uint32_t   OC4R __attribute__((section("sfrs"), address(0xBF844610)));
volatile uint32_t        OC4RCLR __attribute__((section("sfrs"),address(0xBF844614)));
volatile uint32_t        OC4RSET __attribute__((section("sfrs"),address(0xBF844618)));
volatile uint32_t        OC4RINV __attribute__((section("sfrs"),address(0xBF84461C)));
#define OC4RS OC4RS
volatile uint32_t   OC4RS __attribute__((section("sfrs"), address(0xBF844620)));
volatile uint32_t        OC4RSCLR __attribute__((section("sfrs"),address(0xBF844624)));
volatile uint32_t        OC4RSSET __attribute__((section("sfrs"),address(0xBF844628)));
volatile uint32_t        OC4RSINV __attribute__((section("sfrs"),address(0xBF84462C)));
#define OC5CON OC5CON
volatile uint32_t   OC5CON __attribute__((section("sfrs"), address(0xBF844800)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC5CONbits_t;
volatile __OC5CONbits_t OC5CONbits __asm__ ("OC5CON") __attribute__((section("sfrs"), address(0xBF844800)));
volatile uint32_t        OC5CONCLR __attribute__((section("sfrs"),address(0xBF844804)));
volatile uint32_t        OC5CONSET __attribute__((section("sfrs"),address(0xBF844808)));
volatile uint32_t        OC5CONINV __attribute__((section("sfrs"),address(0xBF84480C)));
#define OC5R OC5R
volatile uint32_t   OC5R __attribute__((section("sfrs"), address(0xBF844810)));
volatile uint32_t        OC5RCLR __attribute__((section("sfrs"),address(0xBF844814)));
volatile uint32_t        OC5RSET __attribute__((section("sfrs"),address(0xBF844818)));
volatile uint32_t        OC5RINV __attribute__((section("sfrs"),address(0xBF84481C)));
#define OC5RS OC5RS
volatile uint32_t   OC5RS __attribute__((section("sfrs"), address(0xBF844820)));
volatile uint32_t        OC5RSCLR __attribute__((section("sfrs"),address(0xBF844824)));
volatile uint32_t        OC5RSSET __attribute__((section("sfrs"),address(0xBF844828)));
volatile uint32_t        OC5RSINV __attribute__((section("sfrs"),address(0xBF84482C)));
#define OC6CON OC6CON
volatile uint32_t   OC6CON __attribute__((section("sfrs"), address(0xBF844A00)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC6CONbits_t;
volatile __OC6CONbits_t OC6CONbits __asm__ ("OC6CON") __attribute__((section("sfrs"), address(0xBF844A00)));
volatile uint32_t        OC6CONCLR __attribute__((section("sfrs"),address(0xBF844A04)));
volatile uint32_t        OC6CONSET __attribute__((section("sfrs"),address(0xBF844A08)));
volatile uint32_t        OC6CONINV __attribute__((section("sfrs"),address(0xBF844A0C)));
#define OC6R OC6R
volatile uint32_t   OC6R __attribute__((section("sfrs"), address(0xBF844A10)));
volatile uint32_t        OC6RCLR __attribute__((section("sfrs"),address(0xBF844A14)));
volatile uint32_t        OC6RSET __attribute__((section("sfrs"),address(0xBF844A18)));
volatile uint32_t        OC6RINV __attribute__((section("sfrs"),address(0xBF844A1C)));
#define OC6RS OC6RS
volatile uint32_t   OC6RS __attribute__((section("sfrs"), address(0xBF844A20)));
volatile uint32_t        OC6RSCLR __attribute__((section("sfrs"),address(0xBF844A24)));
volatile uint32_t        OC6RSSET __attribute__((section("sfrs"),address(0xBF844A28)));
volatile uint32_t        OC6RSINV __attribute__((section("sfrs"),address(0xBF844A2C)));
#define OC7CON OC7CON
volatile uint32_t   OC7CON __attribute__((section("sfrs"), address(0xBF844C00)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC7CONbits_t;
volatile __OC7CONbits_t OC7CONbits __asm__ ("OC7CON") __attribute__((section("sfrs"), address(0xBF844C00)));
volatile uint32_t        OC7CONCLR __attribute__((section("sfrs"),address(0xBF844C04)));
volatile uint32_t        OC7CONSET __attribute__((section("sfrs"),address(0xBF844C08)));
volatile uint32_t        OC7CONINV __attribute__((section("sfrs"),address(0xBF844C0C)));
#define OC7R OC7R
volatile uint32_t   OC7R __attribute__((section("sfrs"), address(0xBF844C10)));
volatile uint32_t        OC7RCLR __attribute__((section("sfrs"),address(0xBF844C14)));
volatile uint32_t        OC7RSET __attribute__((section("sfrs"),address(0xBF844C18)));
volatile uint32_t        OC7RINV __attribute__((section("sfrs"),address(0xBF844C1C)));
#define OC7RS OC7RS
volatile uint32_t   OC7RS __attribute__((section("sfrs"), address(0xBF844C20)));
volatile uint32_t        OC7RSCLR __attribute__((section("sfrs"),address(0xBF844C24)));
volatile uint32_t        OC7RSSET __attribute__((section("sfrs"),address(0xBF844C28)));
volatile uint32_t        OC7RSINV __attribute__((section("sfrs"),address(0xBF844C2C)));
#define OC8CON OC8CON
volatile uint32_t   OC8CON __attribute__((section("sfrs"), address(0xBF844E00)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC8CONbits_t;
volatile __OC8CONbits_t OC8CONbits __asm__ ("OC8CON") __attribute__((section("sfrs"), address(0xBF844E00)));
volatile uint32_t        OC8CONCLR __attribute__((section("sfrs"),address(0xBF844E04)));
volatile uint32_t        OC8CONSET __attribute__((section("sfrs"),address(0xBF844E08)));
volatile uint32_t        OC8CONINV __attribute__((section("sfrs"),address(0xBF844E0C)));
#define OC8R OC8R
volatile uint32_t   OC8R __attribute__((section("sfrs"), address(0xBF844E10)));
volatile uint32_t        OC8RCLR __attribute__((section("sfrs"),address(0xBF844E14)));
volatile uint32_t        OC8RSET __attribute__((section("sfrs"),address(0xBF844E18)));
volatile uint32_t        OC8RINV __attribute__((section("sfrs"),address(0xBF844E1C)));
#define OC8RS OC8RS
volatile uint32_t   OC8RS __attribute__((section("sfrs"), address(0xBF844E20)));
volatile uint32_t        OC8RSCLR __attribute__((section("sfrs"),address(0xBF844E24)));
volatile uint32_t        OC8RSSET __attribute__((section("sfrs"),address(0xBF844E28)));
volatile uint32_t        OC8RSINV __attribute__((section("sfrs"),address(0xBF844E2C)));
#define OC9CON OC9CON
volatile uint32_t   OC9CON __attribute__((section("sfrs"), address(0xBF845000)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC9CONbits_t;
volatile __OC9CONbits_t OC9CONbits __asm__ ("OC9CON") __attribute__((section("sfrs"), address(0xBF845000)));
volatile uint32_t        OC9CONCLR __attribute__((section("sfrs"),address(0xBF845004)));
volatile uint32_t        OC9CONSET __attribute__((section("sfrs"),address(0xBF845008)));
volatile uint32_t        OC9CONINV __attribute__((section("sfrs"),address(0xBF84500C)));
#define OC9R OC9R
volatile uint32_t   OC9R __attribute__((section("sfrs"), address(0xBF845010)));
volatile uint32_t        OC9RCLR __attribute__((section("sfrs"),address(0xBF845014)));
volatile uint32_t        OC9RSET __attribute__((section("sfrs"),address(0xBF845018)));
volatile uint32_t        OC9RINV __attribute__((section("sfrs"),address(0xBF84501C)));
#define OC9RS OC9RS
volatile uint32_t   OC9RS __attribute__((section("sfrs"), address(0xBF845020)));
volatile uint32_t        OC9RSCLR __attribute__((section("sfrs"),address(0xBF845024)));
volatile uint32_t        OC9RSSET __attribute__((section("sfrs"),address(0xBF845028)));
volatile uint32_t        OC9RSINV __attribute__((section("sfrs"),address(0xBF84502C)));
#define ADCCON1 ADCCON1
volatile uint32_t   ADCCON1 __attribute__((section("sfrs"), address(0xBF84B000)));
typedef struct {
  uint32_t :3;
  uint32_t STRGLVL:1;
  uint32_t IRQVS:3;
  uint32_t :2;
  uint32_t FSPBCLKEN:1;
  uint32_t FSSCLKEN:1;
  uint32_t CVDEN:1;
  uint32_t AICPMPEN:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t STRGSRC:5;
  uint32_t SELRES:2;
  uint32_t FRACT:1;
  uint32_t TRBSLV:3;
  uint32_t TRBMST:3;
  uint32_t TRBERR:1;
  uint32_t TRBEN:1;
} __ADCCON1bits_t;
volatile __ADCCON1bits_t ADCCON1bits __asm__ ("ADCCON1") __attribute__((section("sfrs"), address(0xBF84B000)));
#define ADCCON2 ADCCON2
volatile uint32_t   ADCCON2 __attribute__((section("sfrs"), address(0xBF84B004)));
typedef struct {
  uint32_t ADCDIV:7;
  uint32_t :1;
  uint32_t ADCEIS:3;
  uint32_t :1;
  uint32_t ADCEIOVR:1;
  uint32_t EOSIEN:1;
  uint32_t REFFLTIEN:1;
  uint32_t BGVRIEN:1;
  uint32_t SAMC:10;
  uint32_t CVDCPL:3;
  uint32_t EOSRDY:1;
  uint32_t REFFLT:1;
  uint32_t BGVRRDY:1;
} __ADCCON2bits_t;
volatile __ADCCON2bits_t ADCCON2bits __asm__ ("ADCCON2") __attribute__((section("sfrs"), address(0xBF84B004)));
#define ADCCON3 ADCCON3
volatile uint32_t   ADCCON3 __attribute__((section("sfrs"), address(0xBF84B008)));
typedef struct {
  uint32_t ADINSEL:6;
  uint32_t GSWTRG:1;
  uint32_t GLSWTRG:1;
  uint32_t RQCNVRT:1;
  uint32_t SAMP:1;
  uint32_t UPDRDY:1;
  uint32_t UPDIEN:1;
  uint32_t TRGSUSP:1;
  uint32_t VREFSEL:3;
  uint32_t DIGEN0:1;
  uint32_t DIGEN1:1;
  uint32_t DIGEN2:1;
  uint32_t DIGEN3:1;
  uint32_t DIGEN4:1;
  uint32_t :2;
  uint32_t DIGEN7:1;
  uint32_t CONCLKDIV:6;
  uint32_t ADCSEL:2;
} __ADCCON3bits_t;
volatile __ADCCON3bits_t ADCCON3bits __asm__ ("ADCCON3") __attribute__((section("sfrs"), address(0xBF84B008)));
#define ADCTRGMODE ADCTRGMODE
volatile uint32_t   ADCTRGMODE __attribute__((section("sfrs"), address(0xBF84B00C)));
typedef struct {
  uint32_t SSAMPEN0:1;
  uint32_t SSAMPEN1:1;
  uint32_t SSAMPEN2:1;
  uint32_t SSAMPEN3:1;
  uint32_t SSAMPEN4:1;
  uint32_t :3;
  uint32_t STRGEN0:1;
  uint32_t STRGEN1:1;
  uint32_t STRGEN2:1;
  uint32_t STRGEN3:1;
  uint32_t STRGEN4:1;
  uint32_t :3;
  uint32_t SH0ALT:2;
  uint32_t SH1ALT:2;
  uint32_t SH2ALT:2;
  uint32_t SH3ALT:2;
  uint32_t SH4ALT:2;
} __ADCTRGMODEbits_t;
volatile __ADCTRGMODEbits_t ADCTRGMODEbits __asm__ ("ADCTRGMODE") __attribute__((section("sfrs"), address(0xBF84B00C)));
#define ADCIMCON1 ADCIMCON1
volatile uint32_t   ADCIMCON1 __attribute__((section("sfrs"), address(0xBF84B010)));
typedef struct {
  uint32_t SIGN0:1;
  uint32_t DIFF0:1;
  uint32_t SIGN1:1;
  uint32_t DIFF1:1;
  uint32_t SIGN2:1;
  uint32_t DIFF2:1;
  uint32_t SIGN3:1;
  uint32_t DIFF3:1;
  uint32_t SIGN4:1;
  uint32_t DIFF4:1;
  uint32_t SIGN5:1;
  uint32_t DIFF5:1;
  uint32_t SIGN6:1;
  uint32_t DIFF6:1;
  uint32_t SIGN7:1;
  uint32_t DIFF7:1;
  uint32_t SIGN8:1;
  uint32_t DIFF8:1;
  uint32_t SIGN9:1;
  uint32_t DIFF9:1;
  uint32_t SIGN10:1;
  uint32_t DIFF10:1;
  uint32_t SIGN11:1;
  uint32_t DIFF11:1;
  uint32_t SIGN12:1;
  uint32_t DIFF12:1;
  uint32_t SIGN13:1;
  uint32_t DIFF13:1;
  uint32_t SIGN14:1;
  uint32_t DIFF14:1;
  uint32_t SIGN15:1;
  uint32_t DIFF15:1;
} __ADCIMCON1bits_t;
volatile __ADCIMCON1bits_t ADCIMCON1bits __asm__ ("ADCIMCON1") __attribute__((section("sfrs"), address(0xBF84B010)));
#define ADCIMCON2 ADCIMCON2
volatile uint32_t   ADCIMCON2 __attribute__((section("sfrs"), address(0xBF84B014)));
typedef struct {
  uint32_t SIGN16:1;
  uint32_t DIFF16:1;
  uint32_t SIGN17:1;
  uint32_t DIFF17:1;
  uint32_t SIGN18:1;
  uint32_t DIFF18:1;
  uint32_t SIGN19:1;
  uint32_t DIFF19:1;
  uint32_t SIGN20:1;
  uint32_t DIFF20:1;
  uint32_t SIGN21:1;
  uint32_t DIFF21:1;
  uint32_t SIGN22:1;
  uint32_t DIFF22:1;
  uint32_t SIGN23:1;
  uint32_t DIFF23:1;
  uint32_t SIGN24:1;
  uint32_t DIFF24:1;
  uint32_t SIGN25:1;
  uint32_t DIFF25:1;
  uint32_t SIGN26:1;
  uint32_t DIFF26:1;
  uint32_t SIGN27:1;
  uint32_t DIFF27:1;
  uint32_t SIGN28:1;
  uint32_t DIFF28:1;
  uint32_t SIGN29:1;
  uint32_t DIFF29:1;
  uint32_t SIGN30:1;
  uint32_t DIFF30:1;
  uint32_t SIGN31:1;
  uint32_t DIFF31:1;
} __ADCIMCON2bits_t;
volatile __ADCIMCON2bits_t ADCIMCON2bits __asm__ ("ADCIMCON2") __attribute__((section("sfrs"), address(0xBF84B014)));
#define ADCIMCON3 ADCIMCON3
volatile uint32_t   ADCIMCON3 __attribute__((section("sfrs"), address(0xBF84B018)));
typedef struct {
  uint32_t SIGN32:1;
  uint32_t DIFF32:1;
  uint32_t SIGN33:1;
  uint32_t DIFF33:1;
  uint32_t SIGN34:1;
  uint32_t DIFF34:1;
  uint32_t SIGN35:1;
  uint32_t DIFF35:1;
  uint32_t SIGN36:1;
  uint32_t DIFF36:1;
  uint32_t SIGN37:1;
  uint32_t DIFF37:1;
  uint32_t SIGN38:1;
  uint32_t DIFF38:1;
  uint32_t SIGN39:1;
  uint32_t DIFF39:1;
  uint32_t SIGN40:1;
  uint32_t DIFF40:1;
  uint32_t SIGN41:1;
  uint32_t DIFF41:1;
  uint32_t SIGN42:1;
  uint32_t DIFF42:1;
  uint32_t SIGN43:1;
  uint32_t DIFF43:1;
  uint32_t SIGN44:1;
  uint32_t DIFF44:1;
} __ADCIMCON3bits_t;
volatile __ADCIMCON3bits_t ADCIMCON3bits __asm__ ("ADCIMCON3") __attribute__((section("sfrs"), address(0xBF84B018)));
#define ADCGIRQEN1 ADCGIRQEN1
volatile uint32_t   ADCGIRQEN1 __attribute__((section("sfrs"), address(0xBF84B020)));
typedef struct {
  uint32_t AGIEN0:1;
  uint32_t AGIEN1:1;
  uint32_t AGIEN2:1;
  uint32_t AGIEN3:1;
  uint32_t AGIEN4:1;
  uint32_t AGIEN5:1;
  uint32_t AGIEN6:1;
  uint32_t AGIEN7:1;
  uint32_t AGIEN8:1;
  uint32_t AGIEN9:1;
  uint32_t AGIEN10:1;
  uint32_t AGIEN11:1;
  uint32_t AGIEN12:1;
  uint32_t AGIEN13:1;
  uint32_t AGIEN14:1;
  uint32_t AGIEN15:1;
  uint32_t AGIEN16:1;
  uint32_t AGIEN17:1;
  uint32_t AGIEN18:1;
  uint32_t AGIEN19:1;
  uint32_t AGIEN20:1;
  uint32_t AGIEN21:1;
  uint32_t AGIEN22:1;
  uint32_t AGIEN23:1;
  uint32_t AGIEN24:1;
  uint32_t AGIEN25:1;
  uint32_t AGIEN26:1;
  uint32_t AGIEN27:1;
  uint32_t AGIEN28:1;
  uint32_t AGIEN29:1;
  uint32_t AGIEN30:1;
  uint32_t AGIEN31:1;
} __ADCGIRQEN1bits_t;
volatile __ADCGIRQEN1bits_t ADCGIRQEN1bits __asm__ ("ADCGIRQEN1") __attribute__((section("sfrs"), address(0xBF84B020)));
#define ADCGIRQEN2 ADCGIRQEN2
volatile uint32_t   ADCGIRQEN2 __attribute__((section("sfrs"), address(0xBF84B024)));
typedef struct {
  uint32_t AGIEN32:1;
  uint32_t AGIEN33:1;
  uint32_t AGIEN34:1;
  uint32_t AGIEN35:1;
  uint32_t AGIEN36:1;
  uint32_t AGIEN37:1;
  uint32_t AGIEN38:1;
  uint32_t AGIEN39:1;
  uint32_t AGIEN40:1;
  uint32_t AGIEN41:1;
  uint32_t AGIEN42:1;
  uint32_t AGIEN43:1;
  uint32_t AGIEN44:1;
} __ADCGIRQEN2bits_t;
volatile __ADCGIRQEN2bits_t ADCGIRQEN2bits __asm__ ("ADCGIRQEN2") __attribute__((section("sfrs"), address(0xBF84B024)));
#define ADCCSS1 ADCCSS1
volatile uint32_t   ADCCSS1 __attribute__((section("sfrs"), address(0xBF84B028)));
typedef struct {
  uint32_t CSS0:1;
  uint32_t CSS1:1;
  uint32_t CSS2:1;
  uint32_t CSS3:1;
  uint32_t CSS4:1;
  uint32_t CSS5:1;
  uint32_t CSS6:1;
  uint32_t CSS7:1;
  uint32_t CSS8:1;
  uint32_t CSS9:1;
  uint32_t CSS10:1;
  uint32_t CSS11:1;
  uint32_t CSS12:1;
  uint32_t CSS13:1;
  uint32_t CSS14:1;
  uint32_t CSS15:1;
  uint32_t CSS16:1;
  uint32_t CSS17:1;
  uint32_t CSS18:1;
  uint32_t CSS19:1;
  uint32_t CSS20:1;
  uint32_t CSS21:1;
  uint32_t CSS22:1;
  uint32_t CSS23:1;
  uint32_t CSS24:1;
  uint32_t CSS25:1;
  uint32_t CSS26:1;
  uint32_t CSS27:1;
  uint32_t CSS28:1;
  uint32_t CSS29:1;
  uint32_t CSS30:1;
  uint32_t CSS31:1;
} __ADCCSS1bits_t;
volatile __ADCCSS1bits_t ADCCSS1bits __asm__ ("ADCCSS1") __attribute__((section("sfrs"), address(0xBF84B028)));
#define ADCCSS2 ADCCSS2
volatile uint32_t   ADCCSS2 __attribute__((section("sfrs"), address(0xBF84B02C)));
typedef struct {
  uint32_t CSS32:1;
  uint32_t CSS33:1;
  uint32_t CSS34:1;
  uint32_t CSS35:1;
  uint32_t CSS36:1;
  uint32_t CSS37:1;
  uint32_t CSS38:1;
  uint32_t CSS39:1;
  uint32_t CSS40:1;
  uint32_t CSS41:1;
  uint32_t CSS42:1;
  uint32_t CSS43:1;
  uint32_t CSS44:1;
} __ADCCSS2bits_t;
volatile __ADCCSS2bits_t ADCCSS2bits __asm__ ("ADCCSS2") __attribute__((section("sfrs"), address(0xBF84B02C)));
#define ADCDSTAT1 ADCDSTAT1
volatile uint32_t   ADCDSTAT1 __attribute__((section("sfrs"), address(0xBF84B030)));
typedef struct {
  uint32_t ARDY0:1;
  uint32_t ARDY1:1;
  uint32_t ARDY2:1;
  uint32_t ARDY3:1;
  uint32_t ARDY4:1;
  uint32_t ARDY5:1;
  uint32_t ARDY6:1;
  uint32_t ARDY7:1;
  uint32_t ARDY8:1;
  uint32_t ARDY9:1;
  uint32_t ARDY10:1;
  uint32_t ARDY11:1;
  uint32_t ARDY12:1;
  uint32_t ARDY13:1;
  uint32_t ARDY14:1;
  uint32_t ARDY15:1;
  uint32_t ARDY16:1;
  uint32_t ARDY17:1;
  uint32_t ARDY18:1;
  uint32_t ARDY19:1;
  uint32_t ARDY20:1;
  uint32_t ARDY21:1;
  uint32_t ARDY22:1;
  uint32_t ARDY23:1;
  uint32_t ARDY24:1;
  uint32_t ARDY25:1;
  uint32_t ARDY26:1;
  uint32_t ARDY27:1;
  uint32_t ARDY28:1;
  uint32_t ARDY29:1;
  uint32_t ARDY30:1;
  uint32_t ARDY31:1;
} __ADCDSTAT1bits_t;
volatile __ADCDSTAT1bits_t ADCDSTAT1bits __asm__ ("ADCDSTAT1") __attribute__((section("sfrs"), address(0xBF84B030)));
#define ADCDSTAT2 ADCDSTAT2
volatile uint32_t   ADCDSTAT2 __attribute__((section("sfrs"), address(0xBF84B034)));
typedef struct {
  uint32_t ARDY32:1;
  uint32_t ARDY33:1;
  uint32_t ARDY34:1;
  uint32_t ARDY35:1;
  uint32_t ARDY36:1;
  uint32_t ARDY37:1;
  uint32_t ARDY38:1;
  uint32_t ARDY39:1;
  uint32_t ARDY40:1;
  uint32_t ARDY41:1;
  uint32_t ARDY42:1;
  uint32_t ARDY43:1;
  uint32_t ARDY44:1;
} __ADCDSTAT2bits_t;
volatile __ADCDSTAT2bits_t ADCDSTAT2bits __asm__ ("ADCDSTAT2") __attribute__((section("sfrs"), address(0xBF84B034)));
#define ADCCMPEN1 ADCCMPEN1
volatile uint32_t   ADCCMPEN1 __attribute__((section("sfrs"), address(0xBF84B038)));
typedef struct {
  uint32_t CMPE0:1;
  uint32_t CMPE1:1;
  uint32_t CMPE2:1;
  uint32_t CMPE3:1;
  uint32_t CMPE4:1;
  uint32_t CMPE5:1;
  uint32_t CMPE6:1;
  uint32_t CMPE7:1;
  uint32_t CMPE8:1;
  uint32_t CMPE9:1;
  uint32_t CMPE10:1;
  uint32_t CMPE11:1;
  uint32_t CMPE12:1;
  uint32_t CMPE13:1;
  uint32_t CMPE14:1;
  uint32_t CMPE15:1;
  uint32_t CMPE16:1;
  uint32_t CMPE17:1;
  uint32_t CMPE18:1;
  uint32_t CMPE19:1;
  uint32_t CMPE20:1;
  uint32_t CMPE21:1;
  uint32_t CMPE22:1;
  uint32_t CMPE23:1;
  uint32_t CMPE24:1;
  uint32_t CMPE25:1;
  uint32_t CMPE26:1;
  uint32_t CMPE27:1;
  uint32_t CMPE28:1;
  uint32_t CMPE29:1;
  uint32_t CMPE30:1;
  uint32_t CMPE31:1;
} __ADCCMPEN1bits_t;
volatile __ADCCMPEN1bits_t ADCCMPEN1bits __asm__ ("ADCCMPEN1") __attribute__((section("sfrs"), address(0xBF84B038)));
#define ADCCMP1 ADCCMP1
volatile uint32_t   ADCCMP1 __attribute__((section("sfrs"), address(0xBF84B03C)));
typedef struct {
  uint32_t DCMPLO:16;
  uint32_t DCMPHI:16;
} __ADCCMP1bits_t;
volatile __ADCCMP1bits_t ADCCMP1bits __asm__ ("ADCCMP1") __attribute__((section("sfrs"), address(0xBF84B03C)));
#define ADCCMPEN2 ADCCMPEN2
volatile uint32_t   ADCCMPEN2 __attribute__((section("sfrs"), address(0xBF84B040)));
typedef struct {
  uint32_t CMPE0:1;
  uint32_t CMPE1:1;
  uint32_t CMPE2:1;
  uint32_t CMPE3:1;
  uint32_t CMPE4:1;
  uint32_t CMPE5:1;
  uint32_t CMPE6:1;
  uint32_t CMPE7:1;
  uint32_t CMPE8:1;
  uint32_t CMPE9:1;
  uint32_t CMPE10:1;
  uint32_t CMPE11:1;
  uint32_t CMPE12:1;
  uint32_t CMPE13:1;
  uint32_t CMPE14:1;
  uint32_t CMPE15:1;
  uint32_t CMPE16:1;
  uint32_t CMPE17:1;
  uint32_t CMPE18:1;
  uint32_t CMPE19:1;
  uint32_t CMPE20:1;
  uint32_t CMPE21:1;
  uint32_t CMPE22:1;
  uint32_t CMPE23:1;
  uint32_t CMPE24:1;
  uint32_t CMPE25:1;
  uint32_t CMPE26:1;
  uint32_t CMPE27:1;
  uint32_t CMPE28:1;
  uint32_t CMPE29:1;
  uint32_t CMPE30:1;
  uint32_t CMPE31:1;
} __ADCCMPEN2bits_t;
volatile __ADCCMPEN2bits_t ADCCMPEN2bits __asm__ ("ADCCMPEN2") __attribute__((section("sfrs"), address(0xBF84B040)));
#define ADCCMP2 ADCCMP2
volatile uint32_t   ADCCMP2 __attribute__((section("sfrs"), address(0xBF84B044)));
typedef struct {
  uint32_t DCMPLO:16;
  uint32_t DCMPHI:16;
} __ADCCMP2bits_t;
volatile __ADCCMP2bits_t ADCCMP2bits __asm__ ("ADCCMP2") __attribute__((section("sfrs"), address(0xBF84B044)));
#define ADCCMPEN3 ADCCMPEN3
volatile uint32_t   ADCCMPEN3 __attribute__((section("sfrs"), address(0xBF84B048)));
typedef struct {
  uint32_t CMPE0:1;
  uint32_t CMPE1:1;
  uint32_t CMPE2:1;
  uint32_t CMPE3:1;
  uint32_t CMPE4:1;
  uint32_t CMPE5:1;
  uint32_t CMPE6:1;
  uint32_t CMPE7:1;
  uint32_t CMPE8:1;
  uint32_t CMPE9:1;
  uint32_t CMPE10:1;
  uint32_t CMPE11:1;
  uint32_t CMPE12:1;
  uint32_t CMPE13:1;
  uint32_t CMPE14:1;
  uint32_t CMPE15:1;
  uint32_t CMPE16:1;
  uint32_t CMPE17:1;
  uint32_t CMPE18:1;
  uint32_t CMPE19:1;
  uint32_t CMPE20:1;
  uint32_t CMPE21:1;
  uint32_t CMPE22:1;
  uint32_t CMPE23:1;
  uint32_t CMPE24:1;
  uint32_t CMPE25:1;
  uint32_t CMPE26:1;
  uint32_t CMPE27:1;
  uint32_t CMPE28:1;
  uint32_t CMPE29:1;
  uint32_t CMPE30:1;
  uint32_t CMPE31:1;
} __ADCCMPEN3bits_t;
volatile __ADCCMPEN3bits_t ADCCMPEN3bits __asm__ ("ADCCMPEN3") __attribute__((section("sfrs"), address(0xBF84B048)));
#define ADCCMP3 ADCCMP3
volatile uint32_t   ADCCMP3 __attribute__((section("sfrs"), address(0xBF84B04C)));
typedef struct {
  uint32_t DCMPLO:16;
  uint32_t DCMPHI:16;
} __ADCCMP3bits_t;
volatile __ADCCMP3bits_t ADCCMP3bits __asm__ ("ADCCMP3") __attribute__((section("sfrs"), address(0xBF84B04C)));
#define ADCCMPEN4 ADCCMPEN4
volatile uint32_t   ADCCMPEN4 __attribute__((section("sfrs"), address(0xBF84B050)));
typedef struct {
  uint32_t CMPE0:1;
  uint32_t CMPE1:1;
  uint32_t CMPE2:1;
  uint32_t CMPE3:1;
  uint32_t CMPE4:1;
  uint32_t CMPE5:1;
  uint32_t CMPE6:1;
  uint32_t CMPE7:1;
  uint32_t CMPE8:1;
  uint32_t CMPE9:1;
  uint32_t CMPE10:1;
  uint32_t CMPE11:1;
  uint32_t CMPE12:1;
  uint32_t CMPE13:1;
  uint32_t CMPE14:1;
  uint32_t CMPE15:1;
  uint32_t CMPE16:1;
  uint32_t CMPE17:1;
  uint32_t CMPE18:1;
  uint32_t CMPE19:1;
  uint32_t CMPE20:1;
  uint32_t CMPE21:1;
  uint32_t CMPE22:1;
  uint32_t CMPE23:1;
  uint32_t CMPE24:1;
  uint32_t CMPE25:1;
  uint32_t CMPE26:1;
  uint32_t CMPE27:1;
  uint32_t CMPE28:1;
  uint32_t CMPE29:1;
  uint32_t CMPE30:1;
  uint32_t CMPE31:1;
} __ADCCMPEN4bits_t;
volatile __ADCCMPEN4bits_t ADCCMPEN4bits __asm__ ("ADCCMPEN4") __attribute__((section("sfrs"), address(0xBF84B050)));
#define ADCCMP4 ADCCMP4
volatile uint32_t   ADCCMP4 __attribute__((section("sfrs"), address(0xBF84B054)));
typedef struct {
  uint32_t DCMPLO:16;
  uint32_t DCMPHI:16;
} __ADCCMP4bits_t;
volatile __ADCCMP4bits_t ADCCMP4bits __asm__ ("ADCCMP4") __attribute__((section("sfrs"), address(0xBF84B054)));
#define ADCCMPEN5 ADCCMPEN5
volatile uint32_t   ADCCMPEN5 __attribute__((section("sfrs"), address(0xBF84B058)));
typedef struct {
  uint32_t CMPE0:1;
  uint32_t CMPE1:1;
  uint32_t CMPE2:1;
  uint32_t CMPE3:1;
  uint32_t CMPE4:1;
  uint32_t CMPE5:1;
  uint32_t CMPE6:1;
  uint32_t CMPE7:1;
  uint32_t CMPE8:1;
  uint32_t CMPE9:1;
  uint32_t CMPE10:1;
  uint32_t CMPE11:1;
  uint32_t CMPE12:1;
  uint32_t CMPE13:1;
  uint32_t CMPE14:1;
  uint32_t CMPE15:1;
  uint32_t CMPE16:1;
  uint32_t CMPE17:1;
  uint32_t CMPE18:1;
  uint32_t CMPE19:1;
  uint32_t CMPE20:1;
  uint32_t CMPE21:1;
  uint32_t CMPE22:1;
  uint32_t CMPE23:1;
  uint32_t CMPE24:1;
  uint32_t CMPE25:1;
  uint32_t CMPE26:1;
  uint32_t CMPE27:1;
  uint32_t CMPE28:1;
  uint32_t CMPE29:1;
  uint32_t CMPE30:1;
  uint32_t CMPE31:1;
} __ADCCMPEN5bits_t;
volatile __ADCCMPEN5bits_t ADCCMPEN5bits __asm__ ("ADCCMPEN5") __attribute__((section("sfrs"), address(0xBF84B058)));
#define ADCCMP5 ADCCMP5
volatile uint32_t   ADCCMP5 __attribute__((section("sfrs"), address(0xBF84B05C)));
typedef struct {
  uint32_t DCMPLO:16;
  uint32_t DCMPHI:16;
} __ADCCMP5bits_t;
volatile __ADCCMP5bits_t ADCCMP5bits __asm__ ("ADCCMP5") __attribute__((section("sfrs"), address(0xBF84B05C)));
#define ADCCMPEN6 ADCCMPEN6
volatile uint32_t   ADCCMPEN6 __attribute__((section("sfrs"), address(0xBF84B060)));
typedef struct {
  uint32_t CMPE0:1;
  uint32_t CMPE1:1;
  uint32_t CMPE2:1;
  uint32_t CMPE3:1;
  uint32_t CMPE4:1;
  uint32_t CMPE5:1;
  uint32_t CMPE6:1;
  uint32_t CMPE7:1;
  uint32_t CMPE8:1;
  uint32_t CMPE9:1;
  uint32_t CMPE10:1;
  uint32_t CMPE11:1;
  uint32_t CMPE12:1;
  uint32_t CMPE13:1;
  uint32_t CMPE14:1;
  uint32_t CMPE15:1;
  uint32_t CMPE16:1;
  uint32_t CMPE17:1;
  uint32_t CMPE18:1;
  uint32_t CMPE19:1;
  uint32_t CMPE20:1;
  uint32_t CMPE21:1;
  uint32_t CMPE22:1;
  uint32_t CMPE23:1;
  uint32_t CMPE24:1;
  uint32_t CMPE25:1;
  uint32_t CMPE26:1;
  uint32_t CMPE27:1;
  uint32_t CMPE28:1;
  uint32_t CMPE29:1;
  uint32_t CMPE30:1;
  uint32_t CMPE31:1;
} __ADCCMPEN6bits_t;
volatile __ADCCMPEN6bits_t ADCCMPEN6bits __asm__ ("ADCCMPEN6") __attribute__((section("sfrs"), address(0xBF84B060)));
#define ADCCMP6 ADCCMP6
volatile uint32_t   ADCCMP6 __attribute__((section("sfrs"), address(0xBF84B064)));
typedef struct {
  uint32_t DCMPLO:16;
  uint32_t DCMPHI:16;
} __ADCCMP6bits_t;
volatile __ADCCMP6bits_t ADCCMP6bits __asm__ ("ADCCMP6") __attribute__((section("sfrs"), address(0xBF84B064)));
#define ADCFLTR1 ADCFLTR1
volatile uint32_t   ADCFLTR1 __attribute__((section("sfrs"), address(0xBF84B068)));
typedef struct {
  uint32_t FLTRDATA:16;
  uint32_t CHNLID:5;
  uint32_t :3;
  uint32_t AFRDY:1;
  uint32_t AFGIEN:1;
  uint32_t OVRSAM:3;
  uint32_t DFMODE:1;
  uint32_t DATA16EN:1;
  uint32_t AFEN:1;
} __ADCFLTR1bits_t;
volatile __ADCFLTR1bits_t ADCFLTR1bits __asm__ ("ADCFLTR1") __attribute__((section("sfrs"), address(0xBF84B068)));
#define ADCFLTR2 ADCFLTR2
volatile uint32_t   ADCFLTR2 __attribute__((section("sfrs"), address(0xBF84B06C)));
typedef struct {
  uint32_t FLTRDATA:16;
  uint32_t CHNLID:5;
  uint32_t :3;
  uint32_t AFRDY:1;
  uint32_t AFGIEN:1;
  uint32_t OVRSAM:3;
  uint32_t DFMODE:1;
  uint32_t DATA16EN:1;
  uint32_t AFEN:1;
} __ADCFLTR2bits_t;
volatile __ADCFLTR2bits_t ADCFLTR2bits __asm__ ("ADCFLTR2") __attribute__((section("sfrs"), address(0xBF84B06C)));
#define ADCFLTR3 ADCFLTR3
volatile uint32_t   ADCFLTR3 __attribute__((section("sfrs"), address(0xBF84B070)));
typedef struct {
  uint32_t FLTRDATA:16;
  uint32_t CHNLID:5;
  uint32_t :3;
  uint32_t AFRDY:1;
  uint32_t AFGIEN:1;
  uint32_t OVRSAM:3;
  uint32_t DFMODE:1;
  uint32_t DATA16EN:1;
  uint32_t AFEN:1;
} __ADCFLTR3bits_t;
volatile __ADCFLTR3bits_t ADCFLTR3bits __asm__ ("ADCFLTR3") __attribute__((section("sfrs"), address(0xBF84B070)));
#define ADCFLTR4 ADCFLTR4
volatile uint32_t   ADCFLTR4 __attribute__((section("sfrs"), address(0xBF84B074)));
typedef struct {
  uint32_t FLTRDATA:16;
  uint32_t CHNLID:5;
  uint32_t :3;
  uint32_t AFRDY:1;
  uint32_t AFGIEN:1;
  uint32_t OVRSAM:3;
  uint32_t DFMODE:1;
  uint32_t DATA16EN:1;
  uint32_t AFEN:1;
} __ADCFLTR4bits_t;
volatile __ADCFLTR4bits_t ADCFLTR4bits __asm__ ("ADCFLTR4") __attribute__((section("sfrs"), address(0xBF84B074)));
#define ADCFLTR5 ADCFLTR5
volatile uint32_t   ADCFLTR5 __attribute__((section("sfrs"), address(0xBF84B078)));
typedef struct {
  uint32_t FLTRDATA:16;
  uint32_t CHNLID:5;
  uint32_t :3;
  uint32_t AFRDY:1;
  uint32_t AFGIEN:1;
  uint32_t OVRSAM:3;
  uint32_t DFMODE:1;
  uint32_t DATA16EN:1;
  uint32_t AFEN:1;
} __ADCFLTR5bits_t;
volatile __ADCFLTR5bits_t ADCFLTR5bits __asm__ ("ADCFLTR5") __attribute__((section("sfrs"), address(0xBF84B078)));
#define ADCFLTR6 ADCFLTR6
volatile uint32_t   ADCFLTR6 __attribute__((section("sfrs"), address(0xBF84B07C)));
typedef struct {
  uint32_t FLTRDATA:16;
  uint32_t CHNLID:5;
  uint32_t :3;
  uint32_t AFRDY:1;
  uint32_t AFGIEN:1;
  uint32_t OVRSAM:3;
  uint32_t DFMODE:1;
  uint32_t DATA16EN:1;
  uint32_t AFEN:1;
} __ADCFLTR6bits_t;
volatile __ADCFLTR6bits_t ADCFLTR6bits __asm__ ("ADCFLTR6") __attribute__((section("sfrs"), address(0xBF84B07C)));
#define ADCTRG1 ADCTRG1
volatile uint32_t   ADCTRG1 __attribute__((section("sfrs"), address(0xBF84B080)));
typedef struct {
  uint32_t TRGSRC0:5;
  uint32_t :3;
  uint32_t TRGSRC1:5;
  uint32_t :3;
  uint32_t TRGSRC2:5;
  uint32_t :3;
  uint32_t TRGSRC3:5;
} __ADCTRG1bits_t;
volatile __ADCTRG1bits_t ADCTRG1bits __asm__ ("ADCTRG1") __attribute__((section("sfrs"), address(0xBF84B080)));
#define ADCTRG2 ADCTRG2
volatile uint32_t   ADCTRG2 __attribute__((section("sfrs"), address(0xBF84B084)));
typedef struct {
  uint32_t TRGSRC4:5;
  uint32_t :3;
  uint32_t TRGSRC5:5;
  uint32_t :3;
  uint32_t TRGSRC6:5;
  uint32_t :3;
  uint32_t TRGSRC7:5;
} __ADCTRG2bits_t;
volatile __ADCTRG2bits_t ADCTRG2bits __asm__ ("ADCTRG2") __attribute__((section("sfrs"), address(0xBF84B084)));
#define ADCTRG3 ADCTRG3
volatile uint32_t   ADCTRG3 __attribute__((section("sfrs"), address(0xBF84B088)));
typedef struct {
  uint32_t TRGSRC8:5;
  uint32_t :3;
  uint32_t TRGSRC9:5;
  uint32_t :3;
  uint32_t TRGSRC10:5;
  uint32_t :3;
  uint32_t TRGSRC11:5;
} __ADCTRG3bits_t;
volatile __ADCTRG3bits_t ADCTRG3bits __asm__ ("ADCTRG3") __attribute__((section("sfrs"), address(0xBF84B088)));
#define ADCCMPCON1 ADCCMPCON1
volatile uint32_t   ADCCMPCON1 __attribute__((section("sfrs"), address(0xBF84B0A0)));
typedef struct {
  uint32_t IELOLO:1;
  uint32_t IELOHI:1;
  uint32_t IEHILO:1;
  uint32_t IEHIHI:1;
  uint32_t IEBTWN:1;
  uint32_t DCMPED:1;
  uint32_t DCMPGIEN:1;
  uint32_t ENDCMP:1;
  uint32_t AINID:6;
  uint32_t :2;
  uint32_t CVDDATA:16;
} __ADCCMPCON1bits_t;
volatile __ADCCMPCON1bits_t ADCCMPCON1bits __asm__ ("ADCCMPCON1") __attribute__((section("sfrs"), address(0xBF84B0A0)));
#define ADCCMPCON2 ADCCMPCON2
volatile uint32_t   ADCCMPCON2 __attribute__((section("sfrs"), address(0xBF84B0A4)));
typedef struct {
  uint32_t IELOLO:1;
  uint32_t IELOHI:1;
  uint32_t IEHILO:1;
  uint32_t IEHIHI:1;
  uint32_t IEBTWN:1;
  uint32_t DCMPED:1;
  uint32_t DCMPGIEN:1;
  uint32_t ENDCMP:1;
  uint32_t AINID:5;
} __ADCCMPCON2bits_t;
volatile __ADCCMPCON2bits_t ADCCMPCON2bits __asm__ ("ADCCMPCON2") __attribute__((section("sfrs"), address(0xBF84B0A4)));
#define ADCCMPCON3 ADCCMPCON3
volatile uint32_t   ADCCMPCON3 __attribute__((section("sfrs"), address(0xBF84B0A8)));
typedef struct {
  uint32_t IELOLO:1;
  uint32_t IELOHI:1;
  uint32_t IEHILO:1;
  uint32_t IEHIHI:1;
  uint32_t IEBTWN:1;
  uint32_t DCMPED:1;
  uint32_t DCMPGIEN:1;
  uint32_t ENDCMP:1;
  uint32_t AINID:5;
} __ADCCMPCON3bits_t;
volatile __ADCCMPCON3bits_t ADCCMPCON3bits __asm__ ("ADCCMPCON3") __attribute__((section("sfrs"), address(0xBF84B0A8)));
#define ADCCMPCON4 ADCCMPCON4
volatile uint32_t   ADCCMPCON4 __attribute__((section("sfrs"), address(0xBF84B0AC)));
typedef struct {
  uint32_t IELOLO:1;
  uint32_t IELOHI:1;
  uint32_t IEHILO:1;
  uint32_t IEHIHI:1;
  uint32_t IEBTWN:1;
  uint32_t DCMPED:1;
  uint32_t DCMPGIEN:1;
  uint32_t ENDCMP:1;
  uint32_t AINID:5;
} __ADCCMPCON4bits_t;
volatile __ADCCMPCON4bits_t ADCCMPCON4bits __asm__ ("ADCCMPCON4") __attribute__((section("sfrs"), address(0xBF84B0AC)));
#define ADCCMPCON5 ADCCMPCON5
volatile uint32_t   ADCCMPCON5 __attribute__((section("sfrs"), address(0xBF84B0B0)));
typedef struct {
  uint32_t IELOLO:1;
  uint32_t IELOHI:1;
  uint32_t IEHILO:1;
  uint32_t IEHIHI:1;
  uint32_t IEBTWN:1;
  uint32_t DCMPED:1;
  uint32_t DCMPGIEN:1;
  uint32_t ENDCMP:1;
  uint32_t AINID:5;
} __ADCCMPCON5bits_t;
volatile __ADCCMPCON5bits_t ADCCMPCON5bits __asm__ ("ADCCMPCON5") __attribute__((section("sfrs"), address(0xBF84B0B0)));
#define ADCCMPCON6 ADCCMPCON6
volatile uint32_t   ADCCMPCON6 __attribute__((section("sfrs"), address(0xBF84B0B4)));
typedef struct {
  uint32_t IELOLO:1;
  uint32_t IELOHI:1;
  uint32_t IEHILO:1;
  uint32_t IEHIHI:1;
  uint32_t IEBTWN:1;
  uint32_t DCMPED:1;
  uint32_t DCMPGIEN:1;
  uint32_t ENDCMP:1;
  uint32_t AINID:5;
} __ADCCMPCON6bits_t;
volatile __ADCCMPCON6bits_t ADCCMPCON6bits __asm__ ("ADCCMPCON6") __attribute__((section("sfrs"), address(0xBF84B0B4)));
#define ADCFSTAT ADCFSTAT
volatile uint32_t   ADCFSTAT __attribute__((section("sfrs"), address(0xBF84B0B8)));
typedef struct {
  uint32_t ADCID:3;
  uint32_t :4;
  uint32_t FSIGN:1;
  uint32_t FCNT:8;
  uint32_t :5;
  uint32_t FWROVERR:1;
  uint32_t FRDY:1;
  uint32_t FIEN:1;
  uint32_t ADC0EN:1;
  uint32_t ADC1EN:1;
  uint32_t ADC2EN:1;
  uint32_t ADC3EN:1;
  uint32_t ADC4EN:1;
  uint32_t :2;
  uint32_t FEN:1;
} __ADCFSTATbits_t;
volatile __ADCFSTATbits_t ADCFSTATbits __asm__ ("ADCFSTAT") __attribute__((section("sfrs"), address(0xBF84B0B8)));
#define ADCFIFO ADCFIFO
volatile uint32_t   ADCFIFO __attribute__((section("sfrs"), address(0xBF84B0BC)));
typedef struct {
  uint32_t DATA:32;
} __ADCFIFObits_t;
volatile __ADCFIFObits_t ADCFIFObits __asm__ ("ADCFIFO") __attribute__((section("sfrs"), address(0xBF84B0BC)));
#define ADCBASE ADCBASE
volatile uint32_t   ADCBASE __attribute__((section("sfrs"), address(0xBF84B0C0)));
typedef struct {
  uint32_t ADCBASE:16;
} __ADCBASEbits_t;
volatile __ADCBASEbits_t ADCBASEbits __asm__ ("ADCBASE") __attribute__((section("sfrs"), address(0xBF84B0C0)));
#define ADCTRGSNS ADCTRGSNS
volatile uint32_t   ADCTRGSNS __attribute__((section("sfrs"), address(0xBF84B0D0)));
typedef struct {
  uint32_t LVL0:1;
  uint32_t LVL1:1;
  uint32_t LVL2:1;
  uint32_t LVL3:1;
  uint32_t LVL4:1;
  uint32_t LVL5:1;
  uint32_t LVL6:1;
  uint32_t LVL7:1;
  uint32_t LVL8:1;
  uint32_t LVL9:1;
  uint32_t LVL10:1;
  uint32_t LVL11:1;
} __ADCTRGSNSbits_t;
volatile __ADCTRGSNSbits_t ADCTRGSNSbits __asm__ ("ADCTRGSNS") __attribute__((section("sfrs"), address(0xBF84B0D0)));
#define ADC0TIME ADC0TIME
volatile uint32_t   ADC0TIME __attribute__((section("sfrs"), address(0xBF84B0D4)));
typedef struct {
  uint32_t SAMC:10;
  uint32_t :6;
  uint32_t ADCDIV:7;
  uint32_t :1;
  uint32_t SELRES:2;
  uint32_t ADCEIS:3;
} __ADC0TIMEbits_t;
volatile __ADC0TIMEbits_t ADC0TIMEbits __asm__ ("ADC0TIME") __attribute__((section("sfrs"), address(0xBF84B0D4)));
#define ADC1TIME ADC1TIME
volatile uint32_t   ADC1TIME __attribute__((section("sfrs"), address(0xBF84B0D8)));
typedef struct {
  uint32_t SAMC:10;
  uint32_t :6;
  uint32_t ADCDIV:7;
  uint32_t :1;
  uint32_t SELRES:2;
  uint32_t ADCEIS:3;
} __ADC1TIMEbits_t;
volatile __ADC1TIMEbits_t ADC1TIMEbits __asm__ ("ADC1TIME") __attribute__((section("sfrs"), address(0xBF84B0D8)));
#define ADC2TIME ADC2TIME
volatile uint32_t   ADC2TIME __attribute__((section("sfrs"), address(0xBF84B0DC)));
typedef struct {
  uint32_t SAMC:10;
  uint32_t :6;
  uint32_t ADCDIV:7;
  uint32_t :1;
  uint32_t SELRES:2;
  uint32_t ADCEIS:3;
} __ADC2TIMEbits_t;
volatile __ADC2TIMEbits_t ADC2TIMEbits __asm__ ("ADC2TIME") __attribute__((section("sfrs"), address(0xBF84B0DC)));
#define ADC3TIME ADC3TIME
volatile uint32_t   ADC3TIME __attribute__((section("sfrs"), address(0xBF84B0E0)));
typedef struct {
  uint32_t SAMC:10;
  uint32_t :6;
  uint32_t ADCDIV:7;
  uint32_t :1;
  uint32_t SELRES:2;
  uint32_t ADCEIS:3;
} __ADC3TIMEbits_t;
volatile __ADC3TIMEbits_t ADC3TIMEbits __asm__ ("ADC3TIME") __attribute__((section("sfrs"), address(0xBF84B0E0)));
#define ADC4TIME ADC4TIME
volatile uint32_t   ADC4TIME __attribute__((section("sfrs"), address(0xBF84B0E4)));
typedef struct {
  uint32_t SAMC:10;
  uint32_t :6;
  uint32_t ADCDIV:7;
  uint32_t :1;
  uint32_t SELRES:2;
  uint32_t ADCEIS:3;
} __ADC4TIMEbits_t;
volatile __ADC4TIMEbits_t ADC4TIMEbits __asm__ ("ADC4TIME") __attribute__((section("sfrs"), address(0xBF84B0E4)));
#define ADCEIEN1 ADCEIEN1
volatile uint32_t   ADCEIEN1 __attribute__((section("sfrs"), address(0xBF84B0F0)));
typedef struct {
  uint32_t EIEN0:1;
  uint32_t EIEN1:1;
  uint32_t EIEN2:1;
  uint32_t EIEN3:1;
  uint32_t EIEN4:1;
  uint32_t EIEN5:1;
  uint32_t EIEN6:1;
  uint32_t EIEN7:1;
  uint32_t EIEN8:1;
  uint32_t EIEN9:1;
  uint32_t EIEN10:1;
  uint32_t EIEN11:1;
  uint32_t EIEN12:1;
  uint32_t EIEN13:1;
  uint32_t EIEN14:1;
  uint32_t EIEN15:1;
  uint32_t EIEN16:1;
  uint32_t EIEN17:1;
  uint32_t EIEN18:1;
  uint32_t EIEN19:1;
  uint32_t EIEN20:1;
  uint32_t EIEN21:1;
  uint32_t EIEN22:1;
  uint32_t EIEN23:1;
  uint32_t EIEN24:1;
  uint32_t EIEN25:1;
  uint32_t EIEN26:1;
  uint32_t EIEN27:1;
  uint32_t EIEN28:1;
  uint32_t EIEN29:1;
  uint32_t EIEN30:1;
  uint32_t EIEN31:1;
} __ADCEIEN1bits_t;
volatile __ADCEIEN1bits_t ADCEIEN1bits __asm__ ("ADCEIEN1") __attribute__((section("sfrs"), address(0xBF84B0F0)));
#define ADCEIEN2 ADCEIEN2
volatile uint32_t   ADCEIEN2 __attribute__((section("sfrs"), address(0xBF84B0F4)));
typedef struct {
  uint32_t EIEN32:1;
  uint32_t EIEN33:1;
  uint32_t EIEN34:1;
  uint32_t EIEN35:1;
  uint32_t EIEN36:1;
  uint32_t EIEN37:1;
  uint32_t EIEN38:1;
  uint32_t EIEN39:1;
  uint32_t EIEN40:1;
  uint32_t EIEN41:1;
  uint32_t EIEN42:1;
  uint32_t EIEN43:1;
  uint32_t EIEN44:1;
} __ADCEIEN2bits_t;
volatile __ADCEIEN2bits_t ADCEIEN2bits __asm__ ("ADCEIEN2") __attribute__((section("sfrs"), address(0xBF84B0F4)));
#define ADCEISTAT1 ADCEISTAT1
volatile uint32_t   ADCEISTAT1 __attribute__((section("sfrs"), address(0xBF84B0F8)));
typedef struct {
  uint32_t EIRDY0:1;
  uint32_t EIRDY1:1;
  uint32_t EIRDY2:1;
  uint32_t EIRDY3:1;
  uint32_t EIRDY4:1;
  uint32_t EIRDY5:1;
  uint32_t EIRDY6:1;
  uint32_t EIRDY7:1;
  uint32_t EIRDY8:1;
  uint32_t EIRDY9:1;
  uint32_t EIRDY10:1;
  uint32_t EIRDY11:1;
  uint32_t EIRDY12:1;
  uint32_t EIRDY13:1;
  uint32_t EIRDY14:1;
  uint32_t EIRDY15:1;
  uint32_t EIRDY16:1;
  uint32_t EIRDY17:1;
  uint32_t EIRDY18:1;
  uint32_t EIRDY19:1;
  uint32_t EIRDY20:1;
  uint32_t EIRDY21:1;
  uint32_t EIRDY22:1;
  uint32_t EIRDY23:1;
  uint32_t EIRDY24:1;
  uint32_t EIRDY25:1;
  uint32_t EIRDY26:1;
  uint32_t EIRDY27:1;
  uint32_t EIRDY28:1;
  uint32_t EIRDY29:1;
  uint32_t EIRDY30:1;
  uint32_t EIRDY31:1;
} __ADCEISTAT1bits_t;
volatile __ADCEISTAT1bits_t ADCEISTAT1bits __asm__ ("ADCEISTAT1") __attribute__((section("sfrs"), address(0xBF84B0F8)));
#define ADCEISTAT2 ADCEISTAT2
volatile uint32_t   ADCEISTAT2 __attribute__((section("sfrs"), address(0xBF84B0FC)));
typedef struct {
  uint32_t EIRDY32:1;
  uint32_t EIRDY33:1;
  uint32_t EIRDY34:1;
  uint32_t EIRDY35:1;
  uint32_t EIRDY36:1;
  uint32_t EIRDY37:1;
  uint32_t EIRDY38:1;
  uint32_t EIRDY39:1;
  uint32_t EIRDY40:1;
  uint32_t EIRDY41:1;
  uint32_t EIRDY42:1;
  uint32_t EIRDY43:1;
  uint32_t EIRDY44:1;
} __ADCEISTAT2bits_t;
volatile __ADCEISTAT2bits_t ADCEISTAT2bits __asm__ ("ADCEISTAT2") __attribute__((section("sfrs"), address(0xBF84B0FC)));
#define ADCANCON ADCANCON
volatile uint32_t   ADCANCON __attribute__((section("sfrs"), address(0xBF84B100)));
typedef struct {
  uint32_t ANEN0:1;
  uint32_t ANEN1:1;
  uint32_t ANEN2:1;
  uint32_t ANEN3:1;
  uint32_t ANEN4:1;
  uint32_t :2;
  uint32_t ANEN7:1;
  uint32_t WKRDY0:1;
  uint32_t WKRDY1:1;
  uint32_t WKRDY2:1;
  uint32_t WKRDY3:1;
  uint32_t WKRDY4:1;
  uint32_t :2;
  uint32_t WKRDY7:1;
  uint32_t WKIEN0:1;
  uint32_t WKIEN1:1;
  uint32_t WKIEN2:1;
  uint32_t WKIEN3:1;
  uint32_t WKIEN4:1;
  uint32_t :2;
  uint32_t WKIEN7:1;
  uint32_t WKUPCLKCNT:4;
} __ADCANCONbits_t;
volatile __ADCANCONbits_t ADCANCONbits __asm__ ("ADCANCON") __attribute__((section("sfrs"), address(0xBF84B100)));
#define ADC0CFG ADC0CFG
volatile uint32_t   ADC0CFG __attribute__((section("sfrs"), address(0xBF84B180)));
typedef struct {
  uint32_t ADCCFG:32;
} __ADC0CFGbits_t;
volatile __ADC0CFGbits_t ADC0CFGbits __asm__ ("ADC0CFG") __attribute__((section("sfrs"), address(0xBF84B180)));
#define ADC1CFG ADC1CFG
volatile uint32_t   ADC1CFG __attribute__((section("sfrs"), address(0xBF84B184)));
typedef struct {
  uint32_t ADCCFG:32;
} __ADC1CFGbits_t;
volatile __ADC1CFGbits_t ADC1CFGbits __asm__ ("ADC1CFG") __attribute__((section("sfrs"), address(0xBF84B184)));
#define ADC2CFG ADC2CFG
volatile uint32_t   ADC2CFG __attribute__((section("sfrs"), address(0xBF84B188)));
typedef struct {
  uint32_t ADCCFG:32;
} __ADC2CFGbits_t;
volatile __ADC2CFGbits_t ADC2CFGbits __asm__ ("ADC2CFG") __attribute__((section("sfrs"), address(0xBF84B188)));
#define ADC3CFG ADC3CFG
volatile uint32_t   ADC3CFG __attribute__((section("sfrs"), address(0xBF84B18C)));
typedef struct {
  uint32_t ADCCFG:32;
} __ADC3CFGbits_t;
volatile __ADC3CFGbits_t ADC3CFGbits __asm__ ("ADC3CFG") __attribute__((section("sfrs"), address(0xBF84B18C)));
#define ADC4CFG ADC4CFG
volatile uint32_t   ADC4CFG __attribute__((section("sfrs"), address(0xBF84B190)));
typedef struct {
  uint32_t ADCCFG:32;
} __ADC4CFGbits_t;
volatile __ADC4CFGbits_t ADC4CFGbits __asm__ ("ADC4CFG") __attribute__((section("sfrs"), address(0xBF84B190)));
#define ADC7CFG ADC7CFG
volatile uint32_t   ADC7CFG __attribute__((section("sfrs"), address(0xBF84B19C)));
typedef struct {
  uint32_t ADCCFG:32;
} __ADC7CFGbits_t;
volatile __ADC7CFGbits_t ADC7CFGbits __asm__ ("ADC7CFG") __attribute__((section("sfrs"), address(0xBF84B19C)));
#define ADCSYSCFG0 ADCSYSCFG0
volatile uint32_t   ADCSYSCFG0 __attribute__((section("sfrs"), address(0xBF84B1C0)));
typedef struct {
  uint32_t AN0:1;
  uint32_t AN1:1;
  uint32_t AN2:1;
  uint32_t AN3:1;
  uint32_t AN4:1;
  uint32_t AN5:1;
  uint32_t AN6:1;
  uint32_t AN7:1;
  uint32_t AN8:1;
  uint32_t AN9:1;
  uint32_t AN10:1;
  uint32_t AN11:1;
  uint32_t AN12:1;
  uint32_t AN13:1;
  uint32_t AN14:1;
  uint32_t AN15:1;
  uint32_t AN16:1;
  uint32_t AN17:1;
  uint32_t AN18:1;
  uint32_t AN19:1;
  uint32_t AN20:1;
  uint32_t AN21:1;
  uint32_t AN22:1;
  uint32_t AN23:1;
  uint32_t AN24:1;
  uint32_t AN25:1;
  uint32_t AN26:1;
  uint32_t AN27:1;
  uint32_t AN28:1;
  uint32_t AN29:1;
  uint32_t AN30:1;
  uint32_t AN31:1;
} __ADCSYSCFG0bits_t;
volatile __ADCSYSCFG0bits_t ADCSYSCFG0bits __asm__ ("ADCSYSCFG0") __attribute__((section("sfrs"), address(0xBF84B1C0)));
#define ADCSYSCFG1 ADCSYSCFG1
volatile uint32_t   ADCSYSCFG1 __attribute__((section("sfrs"), address(0xBF84B1C4)));
typedef struct {
  uint32_t AN32:1;
  uint32_t AN33:1;
  uint32_t AN34:1;
  uint32_t AN35:1;
  uint32_t AN36:1;
  uint32_t AN37:1;
  uint32_t AN38:1;
  uint32_t AN39:1;
  uint32_t AN40:1;
  uint32_t AN41:1;
  uint32_t AN42:1;
  uint32_t AN43:1;
  uint32_t AN44:1;
  uint32_t AN45:1;
  uint32_t AN46:1;
  uint32_t AN47:1;
  uint32_t AN48:1;
  uint32_t AN49:1;
  uint32_t AN50:1;
  uint32_t AN51:1;
  uint32_t AN52:1;
  uint32_t AN53:1;
  uint32_t AN54:1;
  uint32_t AN55:1;
  uint32_t AN56:1;
  uint32_t AN57:1;
  uint32_t AN58:1;
  uint32_t AN59:1;
  uint32_t AN60:1;
  uint32_t AN61:1;
  uint32_t AN62:1;
  uint32_t AN63:1;
} __ADCSYSCFG1bits_t;
volatile __ADCSYSCFG1bits_t ADCSYSCFG1bits __asm__ ("ADCSYSCFG1") __attribute__((section("sfrs"), address(0xBF84B1C4)));
#define ADCDATA0 ADCDATA0
volatile uint32_t   ADCDATA0 __attribute__((section("sfrs"), address(0xBF84B200)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA0bits_t;
volatile __ADCDATA0bits_t ADCDATA0bits __asm__ ("ADCDATA0") __attribute__((section("sfrs"), address(0xBF84B200)));
#define ADCDATA1 ADCDATA1
volatile uint32_t   ADCDATA1 __attribute__((section("sfrs"), address(0xBF84B204)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA1bits_t;
volatile __ADCDATA1bits_t ADCDATA1bits __asm__ ("ADCDATA1") __attribute__((section("sfrs"), address(0xBF84B204)));
#define ADCDATA2 ADCDATA2
volatile uint32_t   ADCDATA2 __attribute__((section("sfrs"), address(0xBF84B208)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA2bits_t;
volatile __ADCDATA2bits_t ADCDATA2bits __asm__ ("ADCDATA2") __attribute__((section("sfrs"), address(0xBF84B208)));
#define ADCDATA3 ADCDATA3
volatile uint32_t   ADCDATA3 __attribute__((section("sfrs"), address(0xBF84B20C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA3bits_t;
volatile __ADCDATA3bits_t ADCDATA3bits __asm__ ("ADCDATA3") __attribute__((section("sfrs"), address(0xBF84B20C)));
#define ADCDATA4 ADCDATA4
volatile uint32_t   ADCDATA4 __attribute__((section("sfrs"), address(0xBF84B210)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA4bits_t;
volatile __ADCDATA4bits_t ADCDATA4bits __asm__ ("ADCDATA4") __attribute__((section("sfrs"), address(0xBF84B210)));
#define ADCDATA5 ADCDATA5
volatile uint32_t   ADCDATA5 __attribute__((section("sfrs"), address(0xBF84B214)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA5bits_t;
volatile __ADCDATA5bits_t ADCDATA5bits __asm__ ("ADCDATA5") __attribute__((section("sfrs"), address(0xBF84B214)));
#define ADCDATA6 ADCDATA6
volatile uint32_t   ADCDATA6 __attribute__((section("sfrs"), address(0xBF84B218)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA6bits_t;
volatile __ADCDATA6bits_t ADCDATA6bits __asm__ ("ADCDATA6") __attribute__((section("sfrs"), address(0xBF84B218)));
#define ADCDATA7 ADCDATA7
volatile uint32_t   ADCDATA7 __attribute__((section("sfrs"), address(0xBF84B21C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA7bits_t;
volatile __ADCDATA7bits_t ADCDATA7bits __asm__ ("ADCDATA7") __attribute__((section("sfrs"), address(0xBF84B21C)));
#define ADCDATA8 ADCDATA8
volatile uint32_t   ADCDATA8 __attribute__((section("sfrs"), address(0xBF84B220)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA8bits_t;
volatile __ADCDATA8bits_t ADCDATA8bits __asm__ ("ADCDATA8") __attribute__((section("sfrs"), address(0xBF84B220)));
#define ADCDATA9 ADCDATA9
volatile uint32_t   ADCDATA9 __attribute__((section("sfrs"), address(0xBF84B224)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA9bits_t;
volatile __ADCDATA9bits_t ADCDATA9bits __asm__ ("ADCDATA9") __attribute__((section("sfrs"), address(0xBF84B224)));
#define ADCDATA10 ADCDATA10
volatile uint32_t   ADCDATA10 __attribute__((section("sfrs"), address(0xBF84B228)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA10bits_t;
volatile __ADCDATA10bits_t ADCDATA10bits __asm__ ("ADCDATA10") __attribute__((section("sfrs"), address(0xBF84B228)));
#define ADCDATA11 ADCDATA11
volatile uint32_t   ADCDATA11 __attribute__((section("sfrs"), address(0xBF84B22C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA11bits_t;
volatile __ADCDATA11bits_t ADCDATA11bits __asm__ ("ADCDATA11") __attribute__((section("sfrs"), address(0xBF84B22C)));
#define ADCDATA12 ADCDATA12
volatile uint32_t   ADCDATA12 __attribute__((section("sfrs"), address(0xBF84B230)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA12bits_t;
volatile __ADCDATA12bits_t ADCDATA12bits __asm__ ("ADCDATA12") __attribute__((section("sfrs"), address(0xBF84B230)));
#define ADCDATA13 ADCDATA13
volatile uint32_t   ADCDATA13 __attribute__((section("sfrs"), address(0xBF84B234)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA13bits_t;
volatile __ADCDATA13bits_t ADCDATA13bits __asm__ ("ADCDATA13") __attribute__((section("sfrs"), address(0xBF84B234)));
#define ADCDATA14 ADCDATA14
volatile uint32_t   ADCDATA14 __attribute__((section("sfrs"), address(0xBF84B238)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA14bits_t;
volatile __ADCDATA14bits_t ADCDATA14bits __asm__ ("ADCDATA14") __attribute__((section("sfrs"), address(0xBF84B238)));
#define ADCDATA15 ADCDATA15
volatile uint32_t   ADCDATA15 __attribute__((section("sfrs"), address(0xBF84B23C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA15bits_t;
volatile __ADCDATA15bits_t ADCDATA15bits __asm__ ("ADCDATA15") __attribute__((section("sfrs"), address(0xBF84B23C)));
#define ADCDATA16 ADCDATA16
volatile uint32_t   ADCDATA16 __attribute__((section("sfrs"), address(0xBF84B240)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA16bits_t;
volatile __ADCDATA16bits_t ADCDATA16bits __asm__ ("ADCDATA16") __attribute__((section("sfrs"), address(0xBF84B240)));
#define ADCDATA17 ADCDATA17
volatile uint32_t   ADCDATA17 __attribute__((section("sfrs"), address(0xBF84B244)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA17bits_t;
volatile __ADCDATA17bits_t ADCDATA17bits __asm__ ("ADCDATA17") __attribute__((section("sfrs"), address(0xBF84B244)));
#define ADCDATA18 ADCDATA18
volatile uint32_t   ADCDATA18 __attribute__((section("sfrs"), address(0xBF84B248)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA18bits_t;
volatile __ADCDATA18bits_t ADCDATA18bits __asm__ ("ADCDATA18") __attribute__((section("sfrs"), address(0xBF84B248)));
#define ADCDATA19 ADCDATA19
volatile uint32_t   ADCDATA19 __attribute__((section("sfrs"), address(0xBF84B24C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA19bits_t;
volatile __ADCDATA19bits_t ADCDATA19bits __asm__ ("ADCDATA19") __attribute__((section("sfrs"), address(0xBF84B24C)));
#define ADCDATA20 ADCDATA20
volatile uint32_t   ADCDATA20 __attribute__((section("sfrs"), address(0xBF84B250)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA20bits_t;
volatile __ADCDATA20bits_t ADCDATA20bits __asm__ ("ADCDATA20") __attribute__((section("sfrs"), address(0xBF84B250)));
#define ADCDATA21 ADCDATA21
volatile uint32_t   ADCDATA21 __attribute__((section("sfrs"), address(0xBF84B254)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA21bits_t;
volatile __ADCDATA21bits_t ADCDATA21bits __asm__ ("ADCDATA21") __attribute__((section("sfrs"), address(0xBF84B254)));
#define ADCDATA22 ADCDATA22
volatile uint32_t   ADCDATA22 __attribute__((section("sfrs"), address(0xBF84B258)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA22bits_t;
volatile __ADCDATA22bits_t ADCDATA22bits __asm__ ("ADCDATA22") __attribute__((section("sfrs"), address(0xBF84B258)));
#define ADCDATA23 ADCDATA23
volatile uint32_t   ADCDATA23 __attribute__((section("sfrs"), address(0xBF84B25C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA23bits_t;
volatile __ADCDATA23bits_t ADCDATA23bits __asm__ ("ADCDATA23") __attribute__((section("sfrs"), address(0xBF84B25C)));
#define ADCDATA24 ADCDATA24
volatile uint32_t   ADCDATA24 __attribute__((section("sfrs"), address(0xBF84B260)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA24bits_t;
volatile __ADCDATA24bits_t ADCDATA24bits __asm__ ("ADCDATA24") __attribute__((section("sfrs"), address(0xBF84B260)));
#define ADCDATA25 ADCDATA25
volatile uint32_t   ADCDATA25 __attribute__((section("sfrs"), address(0xBF84B264)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA25bits_t;
volatile __ADCDATA25bits_t ADCDATA25bits __asm__ ("ADCDATA25") __attribute__((section("sfrs"), address(0xBF84B264)));
#define ADCDATA26 ADCDATA26
volatile uint32_t   ADCDATA26 __attribute__((section("sfrs"), address(0xBF84B268)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA26bits_t;
volatile __ADCDATA26bits_t ADCDATA26bits __asm__ ("ADCDATA26") __attribute__((section("sfrs"), address(0xBF84B268)));
#define ADCDATA27 ADCDATA27
volatile uint32_t   ADCDATA27 __attribute__((section("sfrs"), address(0xBF84B26C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA27bits_t;
volatile __ADCDATA27bits_t ADCDATA27bits __asm__ ("ADCDATA27") __attribute__((section("sfrs"), address(0xBF84B26C)));
#define ADCDATA28 ADCDATA28
volatile uint32_t   ADCDATA28 __attribute__((section("sfrs"), address(0xBF84B270)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA28bits_t;
volatile __ADCDATA28bits_t ADCDATA28bits __asm__ ("ADCDATA28") __attribute__((section("sfrs"), address(0xBF84B270)));
#define ADCDATA29 ADCDATA29
volatile uint32_t   ADCDATA29 __attribute__((section("sfrs"), address(0xBF84B274)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA29bits_t;
volatile __ADCDATA29bits_t ADCDATA29bits __asm__ ("ADCDATA29") __attribute__((section("sfrs"), address(0xBF84B274)));
#define ADCDATA30 ADCDATA30
volatile uint32_t   ADCDATA30 __attribute__((section("sfrs"), address(0xBF84B278)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA30bits_t;
volatile __ADCDATA30bits_t ADCDATA30bits __asm__ ("ADCDATA30") __attribute__((section("sfrs"), address(0xBF84B278)));
#define ADCDATA31 ADCDATA31
volatile uint32_t   ADCDATA31 __attribute__((section("sfrs"), address(0xBF84B27C)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA31bits_t;
volatile __ADCDATA31bits_t ADCDATA31bits __asm__ ("ADCDATA31") __attribute__((section("sfrs"), address(0xBF84B27C)));
#define ADCDATA32 ADCDATA32
volatile uint32_t   ADCDATA32 __attribute__((section("sfrs"), address(0xBF84B280)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA32bits_t;
volatile __ADCDATA32bits_t ADCDATA32bits __asm__ ("ADCDATA32") __attribute__((section("sfrs"), address(0xBF84B280)));
#define ADCDATA33 ADCDATA33
volatile uint32_t   ADCDATA33 __attribute__((section("sfrs"), address(0xBF84B284)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA33bits_t;
volatile __ADCDATA33bits_t ADCDATA33bits __asm__ ("ADCDATA33") __attribute__((section("sfrs"), address(0xBF84B284)));
#define ADCDATA34 ADCDATA34
volatile uint32_t   ADCDATA34 __attribute__((section("sfrs"), address(0xBF84B288)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA34bits_t;
volatile __ADCDATA34bits_t ADCDATA34bits __asm__ ("ADCDATA34") __attribute__((section("sfrs"), address(0xBF84B288)));
#define ADCDATA43 ADCDATA43
volatile uint32_t   ADCDATA43 __attribute__((section("sfrs"), address(0xBF84B2AC)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA43bits_t;
volatile __ADCDATA43bits_t ADCDATA43bits __asm__ ("ADCDATA43") __attribute__((section("sfrs"), address(0xBF84B2AC)));
#define ADCDATA44 ADCDATA44
volatile uint32_t   ADCDATA44 __attribute__((section("sfrs"), address(0xBF84B2B0)));
typedef struct {
  uint32_t DATA:32;
} __ADCDATA44bits_t;
volatile __ADCDATA44bits_t ADCDATA44bits __asm__ ("ADCDATA44") __attribute__((section("sfrs"), address(0xBF84B2B0)));
#define CM1CON CM1CON
volatile uint32_t   CM1CON __attribute__((section("sfrs"), address(0xBF84C000)));
typedef union {
  struct {
    uint32_t CCH:2;
    uint32_t :2;
    uint32_t CREF:1;
    uint32_t :1;
    uint32_t EVPOL:2;
    uint32_t COUT:1;
    uint32_t :4;
    uint32_t CPOL:1;
    uint32_t COE:1;
    uint32_t ON:1;
  };
  struct {
    uint32_t CCH0:1;
    uint32_t CCH1:1;
    uint32_t :4;
    uint32_t EVPOL0:1;
    uint32_t EVPOL1:1;
  };
  struct {
    uint32_t w:32;
  };
} __CM1CONbits_t;
volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON") __attribute__((section("sfrs"), address(0xBF84C000)));
volatile uint32_t        CM1CONCLR __attribute__((section("sfrs"),address(0xBF84C004)));
volatile uint32_t        CM1CONSET __attribute__((section("sfrs"),address(0xBF84C008)));
volatile uint32_t        CM1CONINV __attribute__((section("sfrs"),address(0xBF84C00C)));
#define CM2CON CM2CON
volatile uint32_t   CM2CON __attribute__((section("sfrs"), address(0xBF84C010)));
typedef union {
  struct {
    uint32_t CCH:2;
    uint32_t :2;
    uint32_t CREF:1;
    uint32_t :1;
    uint32_t EVPOL:2;
    uint32_t COUT:1;
    uint32_t :4;
    uint32_t CPOL:1;
    uint32_t COE:1;
    uint32_t ON:1;
  };
  struct {
    uint32_t CCH0:1;
    uint32_t CCH1:1;
    uint32_t :4;
    uint32_t EVPOL0:1;
    uint32_t EVPOL1:1;
  };
  struct {
    uint32_t w:32;
  };
} __CM2CONbits_t;
volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON") __attribute__((section("sfrs"), address(0xBF84C010)));
volatile uint32_t        CM2CONCLR __attribute__((section("sfrs"),address(0xBF84C014)));
volatile uint32_t        CM2CONSET __attribute__((section("sfrs"),address(0xBF84C018)));
volatile uint32_t        CM2CONINV __attribute__((section("sfrs"),address(0xBF84C01C)));
#define CMSTAT CMSTAT
volatile uint32_t   CMSTAT __attribute__((section("sfrs"), address(0xBF84C060)));
typedef union {
  struct {
    uint32_t C1OUT:1;
    uint32_t C2OUT:1;
    uint32_t :11;
    uint32_t SIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __CMSTATbits_t;
volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT") __attribute__((section("sfrs"), address(0xBF84C060)));
volatile uint32_t        CMSTATCLR __attribute__((section("sfrs"),address(0xBF84C064)));
volatile uint32_t        CMSTATSET __attribute__((section("sfrs"),address(0xBF84C068)));
volatile uint32_t        CMSTATINV __attribute__((section("sfrs"),address(0xBF84C06C)));
#define ANSELA ANSELA
volatile uint32_t   ANSELA __attribute__((section("sfrs"), address(0xBF860000)));
typedef union {
  struct {
    uint32_t ANSA0:1;
    uint32_t ANSA1:1;
    uint32_t :3;
    uint32_t ANSA5:1;
    uint32_t :3;
    uint32_t ANSA9:1;
    uint32_t ANSA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELAbits_t;
volatile __ANSELAbits_t ANSELAbits __asm__ ("ANSELA") __attribute__((section("sfrs"), address(0xBF860000)));
volatile uint32_t        ANSELACLR __attribute__((section("sfrs"),address(0xBF860004)));
volatile uint32_t        ANSELASET __attribute__((section("sfrs"),address(0xBF860008)));
volatile uint32_t        ANSELAINV __attribute__((section("sfrs"),address(0xBF86000C)));
#define TRISA TRISA
volatile uint32_t   TRISA __attribute__((section("sfrs"), address(0xBF860010)));
typedef union {
  struct {
    uint32_t TRISA0:1;
    uint32_t TRISA1:1;
    uint32_t TRISA2:1;
    uint32_t TRISA3:1;
    uint32_t TRISA4:1;
    uint32_t TRISA5:1;
    uint32_t TRISA6:1;
    uint32_t TRISA7:1;
    uint32_t :1;
    uint32_t TRISA9:1;
    uint32_t TRISA10:1;
    uint32_t :3;
    uint32_t TRISA14:1;
    uint32_t TRISA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISAbits_t;
volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs"), address(0xBF860010)));
volatile uint32_t        TRISACLR __attribute__((section("sfrs"),address(0xBF860014)));
volatile uint32_t        TRISASET __attribute__((section("sfrs"),address(0xBF860018)));
volatile uint32_t        TRISAINV __attribute__((section("sfrs"),address(0xBF86001C)));
#define PORTA PORTA
volatile uint32_t   PORTA __attribute__((section("sfrs"), address(0xBF860020)));
typedef union {
  struct {
    uint32_t RA0:1;
    uint32_t RA1:1;
    uint32_t RA2:1;
    uint32_t RA3:1;
    uint32_t RA4:1;
    uint32_t RA5:1;
    uint32_t RA6:1;
    uint32_t RA7:1;
    uint32_t :1;
    uint32_t RA9:1;
    uint32_t RA10:1;
    uint32_t :3;
    uint32_t RA14:1;
    uint32_t RA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTAbits_t;
volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs"), address(0xBF860020)));
volatile uint32_t        PORTACLR __attribute__((section("sfrs"),address(0xBF860024)));
volatile uint32_t        PORTASET __attribute__((section("sfrs"),address(0xBF860028)));
volatile uint32_t        PORTAINV __attribute__((section("sfrs"),address(0xBF86002C)));
#define LATA LATA
volatile uint32_t   LATA __attribute__((section("sfrs"), address(0xBF860030)));
typedef union {
  struct {
    uint32_t LATA0:1;
    uint32_t LATA1:1;
    uint32_t LATA2:1;
    uint32_t LATA3:1;
    uint32_t LATA4:1;
    uint32_t LATA5:1;
    uint32_t LATA6:1;
    uint32_t LATA7:1;
    uint32_t :1;
    uint32_t LATA9:1;
    uint32_t LATA10:1;
    uint32_t :3;
    uint32_t LATA14:1;
    uint32_t LATA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATAbits_t;
volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs"), address(0xBF860030)));
volatile uint32_t        LATACLR __attribute__((section("sfrs"),address(0xBF860034)));
volatile uint32_t        LATASET __attribute__((section("sfrs"),address(0xBF860038)));
volatile uint32_t        LATAINV __attribute__((section("sfrs"),address(0xBF86003C)));
#define ODCA ODCA
volatile uint32_t   ODCA __attribute__((section("sfrs"), address(0xBF860040)));
typedef union {
  struct {
    uint32_t ODCA0:1;
    uint32_t ODCA1:1;
    uint32_t ODCA2:1;
    uint32_t ODCA3:1;
    uint32_t ODCA4:1;
    uint32_t ODCA5:1;
    uint32_t ODCA6:1;
    uint32_t ODCA7:1;
    uint32_t :1;
    uint32_t ODCA9:1;
    uint32_t ODCA10:1;
    uint32_t :3;
    uint32_t ODCA14:1;
    uint32_t ODCA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCAbits_t;
volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs"), address(0xBF860040)));
volatile uint32_t        ODCACLR __attribute__((section("sfrs"),address(0xBF860044)));
volatile uint32_t        ODCASET __attribute__((section("sfrs"),address(0xBF860048)));
volatile uint32_t        ODCAINV __attribute__((section("sfrs"),address(0xBF86004C)));
#define CNPUA CNPUA
volatile uint32_t   CNPUA __attribute__((section("sfrs"), address(0xBF860050)));
typedef union {
  struct {
    uint32_t CNPUA0:1;
    uint32_t CNPUA1:1;
    uint32_t CNPUA2:1;
    uint32_t CNPUA3:1;
    uint32_t CNPUA4:1;
    uint32_t CNPUA5:1;
    uint32_t CNPUA6:1;
    uint32_t CNPUA7:1;
    uint32_t :1;
    uint32_t CNPUA9:1;
    uint32_t CNPUA10:1;
    uint32_t :3;
    uint32_t CNPUA14:1;
    uint32_t CNPUA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUAbits_t;
volatile __CNPUAbits_t CNPUAbits __asm__ ("CNPUA") __attribute__((section("sfrs"), address(0xBF860050)));
volatile uint32_t        CNPUACLR __attribute__((section("sfrs"),address(0xBF860054)));
volatile uint32_t        CNPUASET __attribute__((section("sfrs"),address(0xBF860058)));
volatile uint32_t        CNPUAINV __attribute__((section("sfrs"),address(0xBF86005C)));
#define CNPDA CNPDA
volatile uint32_t   CNPDA __attribute__((section("sfrs"), address(0xBF860060)));
typedef union {
  struct {
    uint32_t CNPDA0:1;
    uint32_t CNPDA1:1;
    uint32_t CNPDA2:1;
    uint32_t CNPDA3:1;
    uint32_t CNPDA4:1;
    uint32_t CNPDA5:1;
    uint32_t CNPDA6:1;
    uint32_t CNPDA7:1;
    uint32_t :1;
    uint32_t CNPDA9:1;
    uint32_t CNPDA10:1;
    uint32_t :3;
    uint32_t CNPDA14:1;
    uint32_t CNPDA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDAbits_t;
volatile __CNPDAbits_t CNPDAbits __asm__ ("CNPDA") __attribute__((section("sfrs"), address(0xBF860060)));
volatile uint32_t        CNPDACLR __attribute__((section("sfrs"),address(0xBF860064)));
volatile uint32_t        CNPDASET __attribute__((section("sfrs"),address(0xBF860068)));
volatile uint32_t        CNPDAINV __attribute__((section("sfrs"),address(0xBF86006C)));
#define CNCONA CNCONA
volatile uint32_t   CNCONA __attribute__((section("sfrs"), address(0xBF860070)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONAbits_t;
volatile __CNCONAbits_t CNCONAbits __asm__ ("CNCONA") __attribute__((section("sfrs"), address(0xBF860070)));
volatile uint32_t        CNCONACLR __attribute__((section("sfrs"),address(0xBF860074)));
volatile uint32_t        CNCONASET __attribute__((section("sfrs"),address(0xBF860078)));
volatile uint32_t        CNCONAINV __attribute__((section("sfrs"),address(0xBF86007C)));
#define CNENA CNENA
volatile uint32_t   CNENA __attribute__((section("sfrs"), address(0xBF860080)));
typedef union {
  struct {
    uint32_t CNIEA0:1;
    uint32_t CNIEA1:1;
    uint32_t CNIEA2:1;
    uint32_t CNIEA3:1;
    uint32_t CNIEA4:1;
    uint32_t CNIEA5:1;
    uint32_t CNIEA6:1;
    uint32_t CNIEA7:1;
    uint32_t :1;
    uint32_t CNIEA9:1;
    uint32_t CNIEA10:1;
    uint32_t :3;
    uint32_t CNIEA14:1;
    uint32_t CNIEA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENAbits_t;
volatile __CNENAbits_t CNENAbits __asm__ ("CNENA") __attribute__((section("sfrs"), address(0xBF860080)));
volatile uint32_t        CNENACLR __attribute__((section("sfrs"),address(0xBF860084)));
volatile uint32_t        CNENASET __attribute__((section("sfrs"),address(0xBF860088)));
volatile uint32_t        CNENAINV __attribute__((section("sfrs"),address(0xBF86008C)));
#define CNSTATA CNSTATA
volatile uint32_t   CNSTATA __attribute__((section("sfrs"), address(0xBF860090)));
typedef union {
  struct {
    uint32_t CNSTATA0:1;
    uint32_t CNSTATA1:1;
    uint32_t CNSTATA2:1;
    uint32_t CNSTATA3:1;
    uint32_t CNSTATA4:1;
    uint32_t CNSTATA5:1;
    uint32_t CNSTATA6:1;
    uint32_t CNSTATA7:1;
    uint32_t :1;
    uint32_t CNSTATA9:1;
    uint32_t CNSTATA10:1;
    uint32_t :3;
    uint32_t CNSTATA14:1;
    uint32_t CNSTATA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATAbits_t;
volatile __CNSTATAbits_t CNSTATAbits __asm__ ("CNSTATA") __attribute__((section("sfrs"), address(0xBF860090)));
volatile uint32_t        CNSTATACLR __attribute__((section("sfrs"),address(0xBF860094)));
volatile uint32_t        CNSTATASET __attribute__((section("sfrs"),address(0xBF860098)));
volatile uint32_t        CNSTATAINV __attribute__((section("sfrs"),address(0xBF86009C)));
#define CNNEA CNNEA
volatile uint32_t   CNNEA __attribute__((section("sfrs"), address(0xBF8600A0)));
typedef struct {
  uint32_t CNNEA0:1;
  uint32_t CNNEA1:1;
  uint32_t CNNEA2:1;
  uint32_t CNNEA3:1;
  uint32_t CNNEA4:1;
  uint32_t CNNEA5:1;
  uint32_t CNNEA6:1;
  uint32_t CNNEA7:1;
  uint32_t :1;
  uint32_t CNNEA9:1;
  uint32_t CNNEA10:1;
  uint32_t :3;
  uint32_t CNNEA14:1;
  uint32_t CNNEA15:1;
} __CNNEAbits_t;
volatile __CNNEAbits_t CNNEAbits __asm__ ("CNNEA") __attribute__((section("sfrs"), address(0xBF8600A0)));
volatile uint32_t        CNNEACLR __attribute__((section("sfrs"),address(0xBF8600A4)));
volatile uint32_t        CNNEASET __attribute__((section("sfrs"),address(0xBF8600A8)));
volatile uint32_t        CNNEAINV __attribute__((section("sfrs"),address(0xBF8600AC)));
#define CNFA CNFA
volatile uint32_t   CNFA __attribute__((section("sfrs"), address(0xBF8600B0)));
typedef struct {
  uint32_t CNFA0:1;
  uint32_t CNFA1:1;
  uint32_t CNFA2:1;
  uint32_t CNFA3:1;
  uint32_t CNFA4:1;
  uint32_t CNFA5:1;
  uint32_t CNFA6:1;
  uint32_t CNFA7:1;
  uint32_t :1;
  uint32_t CNFA9:1;
  uint32_t CNFA10:1;
  uint32_t :3;
  uint32_t CNFA14:1;
  uint32_t CNFA15:1;
} __CNFAbits_t;
volatile __CNFAbits_t CNFAbits __asm__ ("CNFA") __attribute__((section("sfrs"), address(0xBF8600B0)));
volatile uint32_t        CNFACLR __attribute__((section("sfrs"),address(0xBF8600B4)));
volatile uint32_t        CNFASET __attribute__((section("sfrs"),address(0xBF8600B8)));
volatile uint32_t        CNFAINV __attribute__((section("sfrs"),address(0xBF8600BC)));
#define SRCON0A SRCON0A
volatile uint32_t   SRCON0A __attribute__((section("sfrs"), address(0xBF8600C0)));
typedef struct {
  uint32_t :6;
  uint32_t SR0A6:1;
  uint32_t SR0A7:1;
} __SRCON0Abits_t;
volatile __SRCON0Abits_t SRCON0Abits __asm__ ("SRCON0A") __attribute__((section("sfrs"), address(0xBF8600C0)));
volatile uint32_t        SRCON0ACLR __attribute__((section("sfrs"),address(0xBF8600C4)));
volatile uint32_t        SRCON0ASET __attribute__((section("sfrs"),address(0xBF8600C8)));
volatile uint32_t        SRCON0AINV __attribute__((section("sfrs"),address(0xBF8600CC)));
#define SRCON1A SRCON1A
volatile uint32_t   SRCON1A __attribute__((section("sfrs"), address(0xBF8600D0)));
typedef struct {
  uint32_t :6;
  uint32_t SR1A6:1;
  uint32_t SR1A7:1;
} __SRCON1Abits_t;
volatile __SRCON1Abits_t SRCON1Abits __asm__ ("SRCON1A") __attribute__((section("sfrs"), address(0xBF8600D0)));
volatile uint32_t        SRCON1ACLR __attribute__((section("sfrs"),address(0xBF8600D4)));
volatile uint32_t        SRCON1ASET __attribute__((section("sfrs"),address(0xBF8600D8)));
volatile uint32_t        SRCON1AINV __attribute__((section("sfrs"),address(0xBF8600DC)));
#define ANSELB ANSELB
volatile uint32_t   ANSELB __attribute__((section("sfrs"), address(0xBF860100)));
typedef union {
  struct {
    uint32_t ANSB0:1;
    uint32_t ANSB1:1;
    uint32_t ANSB2:1;
    uint32_t ANSB3:1;
    uint32_t ANSB4:1;
    uint32_t ANSB5:1;
    uint32_t ANSB6:1;
    uint32_t ANSB7:1;
    uint32_t ANSB8:1;
    uint32_t ANSB9:1;
    uint32_t ANSB10:1;
    uint32_t ANSB11:1;
    uint32_t ANSB12:1;
    uint32_t ANSB13:1;
    uint32_t ANSB14:1;
    uint32_t ANSB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELBbits_t;
volatile __ANSELBbits_t ANSELBbits __asm__ ("ANSELB") __attribute__((section("sfrs"), address(0xBF860100)));
volatile uint32_t        ANSELBCLR __attribute__((section("sfrs"),address(0xBF860104)));
volatile uint32_t        ANSELBSET __attribute__((section("sfrs"),address(0xBF860108)));
volatile uint32_t        ANSELBINV __attribute__((section("sfrs"),address(0xBF86010C)));
#define TRISB TRISB
volatile uint32_t   TRISB __attribute__((section("sfrs"), address(0xBF860110)));
typedef union {
  struct {
    uint32_t TRISB0:1;
    uint32_t TRISB1:1;
    uint32_t TRISB2:1;
    uint32_t TRISB3:1;
    uint32_t TRISB4:1;
    uint32_t TRISB5:1;
    uint32_t TRISB6:1;
    uint32_t TRISB7:1;
    uint32_t TRISB8:1;
    uint32_t TRISB9:1;
    uint32_t TRISB10:1;
    uint32_t TRISB11:1;
    uint32_t TRISB12:1;
    uint32_t TRISB13:1;
    uint32_t TRISB14:1;
    uint32_t TRISB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISBbits_t;
volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs"), address(0xBF860110)));
volatile uint32_t        TRISBCLR __attribute__((section("sfrs"),address(0xBF860114)));
volatile uint32_t        TRISBSET __attribute__((section("sfrs"),address(0xBF860118)));
volatile uint32_t        TRISBINV __attribute__((section("sfrs"),address(0xBF86011C)));
#define PORTB PORTB
volatile uint32_t   PORTB __attribute__((section("sfrs"), address(0xBF860120)));
typedef union {
  struct {
    uint32_t RB0:1;
    uint32_t RB1:1;
    uint32_t RB2:1;
    uint32_t RB3:1;
    uint32_t RB4:1;
    uint32_t RB5:1;
    uint32_t RB6:1;
    uint32_t RB7:1;
    uint32_t RB8:1;
    uint32_t RB9:1;
    uint32_t RB10:1;
    uint32_t RB11:1;
    uint32_t RB12:1;
    uint32_t RB13:1;
    uint32_t RB14:1;
    uint32_t RB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTBbits_t;
volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs"), address(0xBF860120)));
volatile uint32_t        PORTBCLR __attribute__((section("sfrs"),address(0xBF860124)));
volatile uint32_t        PORTBSET __attribute__((section("sfrs"),address(0xBF860128)));
volatile uint32_t        PORTBINV __attribute__((section("sfrs"),address(0xBF86012C)));
#define LATB LATB
volatile uint32_t   LATB __attribute__((section("sfrs"), address(0xBF860130)));
typedef union {
  struct {
    uint32_t LATB0:1;
    uint32_t LATB1:1;
    uint32_t LATB2:1;
    uint32_t LATB3:1;
    uint32_t LATB4:1;
    uint32_t LATB5:1;
    uint32_t LATB6:1;
    uint32_t LATB7:1;
    uint32_t LATB8:1;
    uint32_t LATB9:1;
    uint32_t LATB10:1;
    uint32_t LATB11:1;
    uint32_t LATB12:1;
    uint32_t LATB13:1;
    uint32_t LATB14:1;
    uint32_t LATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATBbits_t;
volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs"), address(0xBF860130)));
volatile uint32_t        LATBCLR __attribute__((section("sfrs"),address(0xBF860134)));
volatile uint32_t        LATBSET __attribute__((section("sfrs"),address(0xBF860138)));
volatile uint32_t        LATBINV __attribute__((section("sfrs"),address(0xBF86013C)));
#define ODCB ODCB
volatile uint32_t   ODCB __attribute__((section("sfrs"), address(0xBF860140)));
typedef union {
  struct {
    uint32_t ODCB0:1;
    uint32_t ODCB1:1;
    uint32_t ODCB2:1;
    uint32_t ODCB3:1;
    uint32_t ODCB4:1;
    uint32_t ODCB5:1;
    uint32_t ODCB6:1;
    uint32_t ODCB7:1;
    uint32_t ODCB8:1;
    uint32_t ODCB9:1;
    uint32_t ODCB10:1;
    uint32_t ODCB11:1;
    uint32_t ODCB12:1;
    uint32_t ODCB13:1;
    uint32_t ODCB14:1;
    uint32_t ODCB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCBbits_t;
volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs"), address(0xBF860140)));
volatile uint32_t        ODCBCLR __attribute__((section("sfrs"),address(0xBF860144)));
volatile uint32_t        ODCBSET __attribute__((section("sfrs"),address(0xBF860148)));
volatile uint32_t        ODCBINV __attribute__((section("sfrs"),address(0xBF86014C)));
#define CNPUB CNPUB
volatile uint32_t   CNPUB __attribute__((section("sfrs"), address(0xBF860150)));
typedef union {
  struct {
    uint32_t CNPUB0:1;
    uint32_t CNPUB1:1;
    uint32_t CNPUB2:1;
    uint32_t CNPUB3:1;
    uint32_t CNPUB4:1;
    uint32_t CNPUB5:1;
    uint32_t CNPUB6:1;
    uint32_t CNPUB7:1;
    uint32_t CNPUB8:1;
    uint32_t CNPUB9:1;
    uint32_t CNPUB10:1;
    uint32_t CNPUB11:1;
    uint32_t CNPUB12:1;
    uint32_t CNPUB13:1;
    uint32_t CNPUB14:1;
    uint32_t CNPUB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUBbits_t;
volatile __CNPUBbits_t CNPUBbits __asm__ ("CNPUB") __attribute__((section("sfrs"), address(0xBF860150)));
volatile uint32_t        CNPUBCLR __attribute__((section("sfrs"),address(0xBF860154)));
volatile uint32_t        CNPUBSET __attribute__((section("sfrs"),address(0xBF860158)));
volatile uint32_t        CNPUBINV __attribute__((section("sfrs"),address(0xBF86015C)));
#define CNPDB CNPDB
volatile uint32_t   CNPDB __attribute__((section("sfrs"), address(0xBF860160)));
typedef union {
  struct {
    uint32_t CNPDB0:1;
    uint32_t CNPDB1:1;
    uint32_t CNPDB2:1;
    uint32_t CNPDB3:1;
    uint32_t CNPDB4:1;
    uint32_t CNPDB5:1;
    uint32_t CNPDB6:1;
    uint32_t CNPDB7:1;
    uint32_t CNPDB8:1;
    uint32_t CNPDB9:1;
    uint32_t CNPDB10:1;
    uint32_t CNPDB11:1;
    uint32_t CNPDB12:1;
    uint32_t CNPDB13:1;
    uint32_t CNPDB14:1;
    uint32_t CNPDB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDBbits_t;
volatile __CNPDBbits_t CNPDBbits __asm__ ("CNPDB") __attribute__((section("sfrs"), address(0xBF860160)));
volatile uint32_t        CNPDBCLR __attribute__((section("sfrs"),address(0xBF860164)));
volatile uint32_t        CNPDBSET __attribute__((section("sfrs"),address(0xBF860168)));
volatile uint32_t        CNPDBINV __attribute__((section("sfrs"),address(0xBF86016C)));
#define CNCONB CNCONB
volatile uint32_t   CNCONB __attribute__((section("sfrs"), address(0xBF860170)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONBbits_t;
volatile __CNCONBbits_t CNCONBbits __asm__ ("CNCONB") __attribute__((section("sfrs"), address(0xBF860170)));
volatile uint32_t        CNCONBCLR __attribute__((section("sfrs"),address(0xBF860174)));
volatile uint32_t        CNCONBSET __attribute__((section("sfrs"),address(0xBF860178)));
volatile uint32_t        CNCONBINV __attribute__((section("sfrs"),address(0xBF86017C)));
#define CNENB CNENB
volatile uint32_t   CNENB __attribute__((section("sfrs"), address(0xBF860180)));
typedef union {
  struct {
    uint32_t CNIEB0:1;
    uint32_t CNIEB1:1;
    uint32_t CNIEB2:1;
    uint32_t CNIEB3:1;
    uint32_t CNIEB4:1;
    uint32_t CNIEB5:1;
    uint32_t CNIEB6:1;
    uint32_t CNIEB7:1;
    uint32_t CNIEB8:1;
    uint32_t CNIEB9:1;
    uint32_t CNIEB10:1;
    uint32_t CNIEB11:1;
    uint32_t CNIEB12:1;
    uint32_t CNIEB13:1;
    uint32_t CNIEB14:1;
    uint32_t CNIEB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENBbits_t;
volatile __CNENBbits_t CNENBbits __asm__ ("CNENB") __attribute__((section("sfrs"), address(0xBF860180)));
volatile uint32_t        CNENBCLR __attribute__((section("sfrs"),address(0xBF860184)));
volatile uint32_t        CNENBSET __attribute__((section("sfrs"),address(0xBF860188)));
volatile uint32_t        CNENBINV __attribute__((section("sfrs"),address(0xBF86018C)));
#define CNSTATB CNSTATB
volatile uint32_t   CNSTATB __attribute__((section("sfrs"), address(0xBF860190)));
typedef union {
  struct {
    uint32_t CNSTATB0:1;
    uint32_t CNSTATB1:1;
    uint32_t CNSTATB2:1;
    uint32_t CNSTATB3:1;
    uint32_t CNSTATB4:1;
    uint32_t CNSTATB5:1;
    uint32_t CNSTATB6:1;
    uint32_t CNSTATB7:1;
    uint32_t CNSTATB8:1;
    uint32_t CNSTATB9:1;
    uint32_t CNSTATB10:1;
    uint32_t CNSTATB11:1;
    uint32_t CNSTATB12:1;
    uint32_t CNSTATB13:1;
    uint32_t CNSTATB14:1;
    uint32_t CNSTATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATBbits_t;
volatile __CNSTATBbits_t CNSTATBbits __asm__ ("CNSTATB") __attribute__((section("sfrs"), address(0xBF860190)));
volatile uint32_t        CNSTATBCLR __attribute__((section("sfrs"),address(0xBF860194)));
volatile uint32_t        CNSTATBSET __attribute__((section("sfrs"),address(0xBF860198)));
volatile uint32_t        CNSTATBINV __attribute__((section("sfrs"),address(0xBF86019C)));
#define CNNEB CNNEB
volatile uint32_t   CNNEB __attribute__((section("sfrs"), address(0xBF8601A0)));
typedef struct {
  uint32_t CNNEB0:1;
  uint32_t CNNEB1:1;
  uint32_t CNNEB2:1;
  uint32_t CNNEB3:1;
  uint32_t CNNEB4:1;
  uint32_t CNNEB5:1;
  uint32_t CNNEB6:1;
  uint32_t CNNEB7:1;
  uint32_t CNNEB8:1;
  uint32_t CNNEB9:1;
  uint32_t CNNEB10:1;
  uint32_t CNNEB11:1;
  uint32_t CNNEB12:1;
  uint32_t CNNEB13:1;
  uint32_t CNNEB14:1;
  uint32_t CNNEB15:1;
} __CNNEBbits_t;
volatile __CNNEBbits_t CNNEBbits __asm__ ("CNNEB") __attribute__((section("sfrs"), address(0xBF8601A0)));
volatile uint32_t        CNNEBCLR __attribute__((section("sfrs"),address(0xBF8601A4)));
volatile uint32_t        CNNEBSET __attribute__((section("sfrs"),address(0xBF8601A8)));
volatile uint32_t        CNNEBINV __attribute__((section("sfrs"),address(0xBF8601AC)));
#define CNFB CNFB
volatile uint32_t   CNFB __attribute__((section("sfrs"), address(0xBF8601B0)));
typedef struct {
  uint32_t CNFB0:1;
  uint32_t CNFB1:1;
  uint32_t CNFB2:1;
  uint32_t CNFB3:1;
  uint32_t CNFB4:1;
  uint32_t CNFB5:1;
  uint32_t CNFB6:1;
  uint32_t CNFB7:1;
  uint32_t CNFB8:1;
  uint32_t CNFB9:1;
  uint32_t CNFB10:1;
  uint32_t CNFB11:1;
  uint32_t CNFB12:1;
  uint32_t CNFB13:1;
  uint32_t CNFB14:1;
  uint32_t CNFB15:1;
} __CNFBbits_t;
volatile __CNFBbits_t CNFBbits __asm__ ("CNFB") __attribute__((section("sfrs"), address(0xBF8601B0)));
volatile uint32_t        CNFBCLR __attribute__((section("sfrs"),address(0xBF8601B4)));
volatile uint32_t        CNFBSET __attribute__((section("sfrs"),address(0xBF8601B8)));
volatile uint32_t        CNFBINV __attribute__((section("sfrs"),address(0xBF8601BC)));
#define SRCON0B SRCON0B
volatile uint32_t   SRCON0B __attribute__((section("sfrs"), address(0xBF8601C0)));
typedef struct {
  uint32_t :3;
  uint32_t SR0B3:1;
  uint32_t :1;
  uint32_t SR0B5:1;
  uint32_t :2;
  uint32_t SR0B8:1;
  uint32_t SR0B9:1;
  uint32_t SR0B10:1;
  uint32_t :3;
  uint32_t SR0B14:1;
} __SRCON0Bbits_t;
volatile __SRCON0Bbits_t SRCON0Bbits __asm__ ("SRCON0B") __attribute__((section("sfrs"), address(0xBF8601C0)));
volatile uint32_t        SRCON0BCLR __attribute__((section("sfrs"),address(0xBF8601C4)));
volatile uint32_t        SRCON0BSET __attribute__((section("sfrs"),address(0xBF8601C8)));
volatile uint32_t        SRCON0BINV __attribute__((section("sfrs"),address(0xBF8601CC)));
#define SRCON1B SRCON1B
volatile uint32_t   SRCON1B __attribute__((section("sfrs"), address(0xBF8601D0)));
typedef struct {
  uint32_t :3;
  uint32_t SR1B3:1;
  uint32_t :1;
  uint32_t SR1B5:1;
  uint32_t :2;
  uint32_t SR1B8:1;
  uint32_t SR1B9:1;
  uint32_t SR1B10:1;
  uint32_t :3;
  uint32_t SR1B14:1;
} __SRCON1Bbits_t;
volatile __SRCON1Bbits_t SRCON1Bbits __asm__ ("SRCON1B") __attribute__((section("sfrs"), address(0xBF8601D0)));
volatile uint32_t        SRCON1BCLR __attribute__((section("sfrs"),address(0xBF8601D4)));
volatile uint32_t        SRCON1BSET __attribute__((section("sfrs"),address(0xBF8601D8)));
volatile uint32_t        SRCON1BINV __attribute__((section("sfrs"),address(0xBF8601DC)));
#define ANSELC ANSELC
volatile uint32_t   ANSELC __attribute__((section("sfrs"), address(0xBF860200)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t ANSC1:1;
    uint32_t ANSC2:1;
    uint32_t ANSC3:1;
    uint32_t ANSC4:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELCbits_t;
volatile __ANSELCbits_t ANSELCbits __asm__ ("ANSELC") __attribute__((section("sfrs"), address(0xBF860200)));
volatile uint32_t        ANSELCCLR __attribute__((section("sfrs"),address(0xBF860204)));
volatile uint32_t        ANSELCSET __attribute__((section("sfrs"),address(0xBF860208)));
volatile uint32_t        ANSELCINV __attribute__((section("sfrs"),address(0xBF86020C)));
#define TRISC TRISC
volatile uint32_t   TRISC __attribute__((section("sfrs"), address(0xBF860210)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TRISC1:1;
    uint32_t TRISC2:1;
    uint32_t TRISC3:1;
    uint32_t TRISC4:1;
    uint32_t :7;
    uint32_t TRISC12:1;
    uint32_t TRISC13:1;
    uint32_t TRISC14:1;
    uint32_t TRISC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISCbits_t;
volatile __TRISCbits_t TRISCbits __asm__ ("TRISC") __attribute__((section("sfrs"), address(0xBF860210)));
volatile uint32_t        TRISCCLR __attribute__((section("sfrs"),address(0xBF860214)));
volatile uint32_t        TRISCSET __attribute__((section("sfrs"),address(0xBF860218)));
volatile uint32_t        TRISCINV __attribute__((section("sfrs"),address(0xBF86021C)));
#define PORTC PORTC
volatile uint32_t   PORTC __attribute__((section("sfrs"), address(0xBF860220)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t RC1:1;
    uint32_t RC2:1;
    uint32_t RC3:1;
    uint32_t RC4:1;
    uint32_t :7;
    uint32_t RC12:1;
    uint32_t RC13:1;
    uint32_t RC14:1;
    uint32_t RC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTCbits_t;
volatile __PORTCbits_t PORTCbits __asm__ ("PORTC") __attribute__((section("sfrs"), address(0xBF860220)));
volatile uint32_t        PORTCCLR __attribute__((section("sfrs"),address(0xBF860224)));
volatile uint32_t        PORTCSET __attribute__((section("sfrs"),address(0xBF860228)));
volatile uint32_t        PORTCINV __attribute__((section("sfrs"),address(0xBF86022C)));
#define LATC LATC
volatile uint32_t   LATC __attribute__((section("sfrs"), address(0xBF860230)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t LATC1:1;
    uint32_t LATC2:1;
    uint32_t LATC3:1;
    uint32_t LATC4:1;
    uint32_t :7;
    uint32_t LATC12:1;
    uint32_t LATC13:1;
    uint32_t LATC14:1;
    uint32_t LATC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATCbits_t;
volatile __LATCbits_t LATCbits __asm__ ("LATC") __attribute__((section("sfrs"), address(0xBF860230)));
volatile uint32_t        LATCCLR __attribute__((section("sfrs"),address(0xBF860234)));
volatile uint32_t        LATCSET __attribute__((section("sfrs"),address(0xBF860238)));
volatile uint32_t        LATCINV __attribute__((section("sfrs"),address(0xBF86023C)));
#define ODCC ODCC
volatile uint32_t   ODCC __attribute__((section("sfrs"), address(0xBF860240)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t ODCC1:1;
    uint32_t ODCC2:1;
    uint32_t ODCC3:1;
    uint32_t ODCC4:1;
    uint32_t :7;
    uint32_t ODCC12:1;
    uint32_t ODCC13:1;
    uint32_t ODCC14:1;
    uint32_t ODCC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCCbits_t;
volatile __ODCCbits_t ODCCbits __asm__ ("ODCC") __attribute__((section("sfrs"), address(0xBF860240)));
volatile uint32_t        ODCCCLR __attribute__((section("sfrs"),address(0xBF860244)));
volatile uint32_t        ODCCSET __attribute__((section("sfrs"),address(0xBF860248)));
volatile uint32_t        ODCCINV __attribute__((section("sfrs"),address(0xBF86024C)));
#define CNPUC CNPUC
volatile uint32_t   CNPUC __attribute__((section("sfrs"), address(0xBF860250)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t CNPUC1:1;
    uint32_t CNPUC2:1;
    uint32_t CNPUC3:1;
    uint32_t CNPUC4:1;
    uint32_t :7;
    uint32_t CNPUC12:1;
    uint32_t CNPUC13:1;
    uint32_t CNPUC14:1;
    uint32_t CNPUC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUCbits_t;
volatile __CNPUCbits_t CNPUCbits __asm__ ("CNPUC") __attribute__((section("sfrs"), address(0xBF860250)));
volatile uint32_t        CNPUCCLR __attribute__((section("sfrs"),address(0xBF860254)));
volatile uint32_t        CNPUCSET __attribute__((section("sfrs"),address(0xBF860258)));
volatile uint32_t        CNPUCINV __attribute__((section("sfrs"),address(0xBF86025C)));
#define CNPDC CNPDC
volatile uint32_t   CNPDC __attribute__((section("sfrs"), address(0xBF860260)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t CNPDC1:1;
    uint32_t CNPDC2:1;
    uint32_t CNPDC3:1;
    uint32_t CNPDC4:1;
    uint32_t :7;
    uint32_t CNPDC12:1;
    uint32_t CNPDC13:1;
    uint32_t CNPDC14:1;
    uint32_t CNPDC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDCbits_t;
volatile __CNPDCbits_t CNPDCbits __asm__ ("CNPDC") __attribute__((section("sfrs"), address(0xBF860260)));
volatile uint32_t        CNPDCCLR __attribute__((section("sfrs"),address(0xBF860264)));
volatile uint32_t        CNPDCSET __attribute__((section("sfrs"),address(0xBF860268)));
volatile uint32_t        CNPDCINV __attribute__((section("sfrs"),address(0xBF86026C)));
#define CNCONC CNCONC
volatile uint32_t   CNCONC __attribute__((section("sfrs"), address(0xBF860270)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONCbits_t;
volatile __CNCONCbits_t CNCONCbits __asm__ ("CNCONC") __attribute__((section("sfrs"), address(0xBF860270)));
volatile uint32_t        CNCONCCLR __attribute__((section("sfrs"),address(0xBF860274)));
volatile uint32_t        CNCONCSET __attribute__((section("sfrs"),address(0xBF860278)));
volatile uint32_t        CNCONCINV __attribute__((section("sfrs"),address(0xBF86027C)));
#define CNENC CNENC
volatile uint32_t   CNENC __attribute__((section("sfrs"), address(0xBF860280)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t CNIEC1:1;
    uint32_t CNIEC2:1;
    uint32_t CNIEC3:1;
    uint32_t CNIEC4:1;
    uint32_t :7;
    uint32_t CNIEC12:1;
    uint32_t CNIEC13:1;
    uint32_t CNIEC14:1;
    uint32_t CNIEC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENCbits_t;
volatile __CNENCbits_t CNENCbits __asm__ ("CNENC") __attribute__((section("sfrs"), address(0xBF860280)));
volatile uint32_t        CNENCCLR __attribute__((section("sfrs"),address(0xBF860284)));
volatile uint32_t        CNENCSET __attribute__((section("sfrs"),address(0xBF860288)));
volatile uint32_t        CNENCINV __attribute__((section("sfrs"),address(0xBF86028C)));
#define CNSTATC CNSTATC
volatile uint32_t   CNSTATC __attribute__((section("sfrs"), address(0xBF860290)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t CNSTATC1:1;
    uint32_t CNSTATC2:1;
    uint32_t CNSTATC3:1;
    uint32_t CNSTATC4:1;
    uint32_t :7;
    uint32_t CNSTATC12:1;
    uint32_t CNSTATC13:1;
    uint32_t CNSTATC14:1;
    uint32_t CNSTATC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATCbits_t;
volatile __CNSTATCbits_t CNSTATCbits __asm__ ("CNSTATC") __attribute__((section("sfrs"), address(0xBF860290)));
volatile uint32_t        CNSTATCCLR __attribute__((section("sfrs"),address(0xBF860294)));
volatile uint32_t        CNSTATCSET __attribute__((section("sfrs"),address(0xBF860298)));
volatile uint32_t        CNSTATCINV __attribute__((section("sfrs"),address(0xBF86029C)));
#define CNNEC CNNEC
volatile uint32_t   CNNEC __attribute__((section("sfrs"), address(0xBF8602A0)));
typedef struct {
  uint32_t :1;
  uint32_t CNNEC1:1;
  uint32_t CNNEC2:1;
  uint32_t CNNEC3:1;
  uint32_t CNNEC4:1;
  uint32_t :7;
  uint32_t CNNEC12:1;
  uint32_t CNNEC13:1;
  uint32_t CNNEC14:1;
  uint32_t CNNEC15:1;
} __CNNECbits_t;
volatile __CNNECbits_t CNNECbits __asm__ ("CNNEC") __attribute__((section("sfrs"), address(0xBF8602A0)));
volatile uint32_t        CNNECCLR __attribute__((section("sfrs"),address(0xBF8602A4)));
volatile uint32_t        CNNECSET __attribute__((section("sfrs"),address(0xBF8602A8)));
volatile uint32_t        CNNECINV __attribute__((section("sfrs"),address(0xBF8602AC)));
#define CNFC CNFC
volatile uint32_t   CNFC __attribute__((section("sfrs"), address(0xBF8602B0)));
typedef struct {
  uint32_t :1;
  uint32_t CNFC1:1;
  uint32_t CNFC2:1;
  uint32_t CNFC3:1;
  uint32_t CNFC4:1;
  uint32_t :7;
  uint32_t CNFC12:1;
  uint32_t CNFC13:1;
  uint32_t CNFC14:1;
  uint32_t CNFC15:1;
} __CNFCbits_t;
volatile __CNFCbits_t CNFCbits __asm__ ("CNFC") __attribute__((section("sfrs"), address(0xBF8602B0)));
volatile uint32_t        CNFCCLR __attribute__((section("sfrs"),address(0xBF8602B4)));
volatile uint32_t        CNFCSET __attribute__((section("sfrs"),address(0xBF8602B8)));
volatile uint32_t        CNFCINV __attribute__((section("sfrs"),address(0xBF8602BC)));
#define ANSELD ANSELD
volatile uint32_t   ANSELD __attribute__((section("sfrs"), address(0xBF860300)));
typedef union {
  struct {
    uint32_t :14;
    uint32_t ANSD14:1;
    uint32_t ANSD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELDbits_t;
volatile __ANSELDbits_t ANSELDbits __asm__ ("ANSELD") __attribute__((section("sfrs"), address(0xBF860300)));
volatile uint32_t        ANSELDCLR __attribute__((section("sfrs"),address(0xBF860304)));
volatile uint32_t        ANSELDSET __attribute__((section("sfrs"),address(0xBF860308)));
volatile uint32_t        ANSELDINV __attribute__((section("sfrs"),address(0xBF86030C)));
#define TRISD TRISD
volatile uint32_t   TRISD __attribute__((section("sfrs"), address(0xBF860310)));
typedef union {
  struct {
    uint32_t TRISD0:1;
    uint32_t TRISD1:1;
    uint32_t TRISD2:1;
    uint32_t TRISD3:1;
    uint32_t TRISD4:1;
    uint32_t TRISD5:1;
    uint32_t :3;
    uint32_t TRISD9:1;
    uint32_t TRISD10:1;
    uint32_t TRISD11:1;
    uint32_t TRISD12:1;
    uint32_t TRISD13:1;
    uint32_t TRISD14:1;
    uint32_t TRISD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISDbits_t;
volatile __TRISDbits_t TRISDbits __asm__ ("TRISD") __attribute__((section("sfrs"), address(0xBF860310)));
volatile uint32_t        TRISDCLR __attribute__((section("sfrs"),address(0xBF860314)));
volatile uint32_t        TRISDSET __attribute__((section("sfrs"),address(0xBF860318)));
volatile uint32_t        TRISDINV __attribute__((section("sfrs"),address(0xBF86031C)));
#define PORTD PORTD
volatile uint32_t   PORTD __attribute__((section("sfrs"), address(0xBF860320)));
typedef union {
  struct {
    uint32_t RD0:1;
    uint32_t RD1:1;
    uint32_t RD2:1;
    uint32_t RD3:1;
    uint32_t RD4:1;
    uint32_t RD5:1;
    uint32_t :3;
    uint32_t RD9:1;
    uint32_t RD10:1;
    uint32_t RD11:1;
    uint32_t RD12:1;
    uint32_t RD13:1;
    uint32_t RD14:1;
    uint32_t RD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTDbits_t;
volatile __PORTDbits_t PORTDbits __asm__ ("PORTD") __attribute__((section("sfrs"), address(0xBF860320)));
volatile uint32_t        PORTDCLR __attribute__((section("sfrs"),address(0xBF860324)));
volatile uint32_t        PORTDSET __attribute__((section("sfrs"),address(0xBF860328)));
volatile uint32_t        PORTDINV __attribute__((section("sfrs"),address(0xBF86032C)));
#define LATD LATD
volatile uint32_t   LATD __attribute__((section("sfrs"), address(0xBF860330)));
typedef union {
  struct {
    uint32_t LATD0:1;
    uint32_t LATD1:1;
    uint32_t LATD2:1;
    uint32_t LATD3:1;
    uint32_t LATD4:1;
    uint32_t LATD5:1;
    uint32_t :3;
    uint32_t LATD9:1;
    uint32_t LATD10:1;
    uint32_t LATD11:1;
    uint32_t LATD12:1;
    uint32_t LATD13:1;
    uint32_t LATD14:1;
    uint32_t LATD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATDbits_t;
volatile __LATDbits_t LATDbits __asm__ ("LATD") __attribute__((section("sfrs"), address(0xBF860330)));
volatile uint32_t        LATDCLR __attribute__((section("sfrs"),address(0xBF860334)));
volatile uint32_t        LATDSET __attribute__((section("sfrs"),address(0xBF860338)));
volatile uint32_t        LATDINV __attribute__((section("sfrs"),address(0xBF86033C)));
#define ODCD ODCD
volatile uint32_t   ODCD __attribute__((section("sfrs"), address(0xBF860340)));
typedef union {
  struct {
    uint32_t ODCD0:1;
    uint32_t ODCD1:1;
    uint32_t ODCD2:1;
    uint32_t ODCD3:1;
    uint32_t ODCD4:1;
    uint32_t ODCD5:1;
    uint32_t :3;
    uint32_t ODCD9:1;
    uint32_t ODCD10:1;
    uint32_t ODCD11:1;
    uint32_t ODCD12:1;
    uint32_t ODCD13:1;
    uint32_t ODCD14:1;
    uint32_t ODCD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCDbits_t;
volatile __ODCDbits_t ODCDbits __asm__ ("ODCD") __attribute__((section("sfrs"), address(0xBF860340)));
volatile uint32_t        ODCDCLR __attribute__((section("sfrs"),address(0xBF860344)));
volatile uint32_t        ODCDSET __attribute__((section("sfrs"),address(0xBF860348)));
volatile uint32_t        ODCDINV __attribute__((section("sfrs"),address(0xBF86034C)));
#define CNPUD CNPUD
volatile uint32_t   CNPUD __attribute__((section("sfrs"), address(0xBF860350)));
typedef union {
  struct {
    uint32_t CNPUD0:1;
    uint32_t CNPUD1:1;
    uint32_t CNPUD2:1;
    uint32_t CNPUD3:1;
    uint32_t CNPUD4:1;
    uint32_t CNPUD5:1;
    uint32_t :3;
    uint32_t CNPUD9:1;
    uint32_t CNPUD10:1;
    uint32_t CNPUD11:1;
    uint32_t CNPUD12:1;
    uint32_t CNPUD13:1;
    uint32_t CNPUD14:1;
    uint32_t CNPUD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUDbits_t;
volatile __CNPUDbits_t CNPUDbits __asm__ ("CNPUD") __attribute__((section("sfrs"), address(0xBF860350)));
volatile uint32_t        CNPUDCLR __attribute__((section("sfrs"),address(0xBF860354)));
volatile uint32_t        CNPUDSET __attribute__((section("sfrs"),address(0xBF860358)));
volatile uint32_t        CNPUDINV __attribute__((section("sfrs"),address(0xBF86035C)));
#define CNPDD CNPDD
volatile uint32_t   CNPDD __attribute__((section("sfrs"), address(0xBF860360)));
typedef union {
  struct {
    uint32_t CNPDD0:1;
    uint32_t CNPDD1:1;
    uint32_t CNPDD2:1;
    uint32_t CNPDD3:1;
    uint32_t CNPDD4:1;
    uint32_t CNPDD5:1;
    uint32_t :3;
    uint32_t CNPDD9:1;
    uint32_t CNPDD10:1;
    uint32_t CNPDD11:1;
    uint32_t CNPDD12:1;
    uint32_t CNPDD13:1;
    uint32_t CNPDD14:1;
    uint32_t CNPDD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDDbits_t;
volatile __CNPDDbits_t CNPDDbits __asm__ ("CNPDD") __attribute__((section("sfrs"), address(0xBF860360)));
volatile uint32_t        CNPDDCLR __attribute__((section("sfrs"),address(0xBF860364)));
volatile uint32_t        CNPDDSET __attribute__((section("sfrs"),address(0xBF860368)));
volatile uint32_t        CNPDDINV __attribute__((section("sfrs"),address(0xBF86036C)));
#define CNCOND CNCOND
volatile uint32_t   CNCOND __attribute__((section("sfrs"), address(0xBF860370)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONDbits_t;
volatile __CNCONDbits_t CNCONDbits __asm__ ("CNCOND") __attribute__((section("sfrs"), address(0xBF860370)));
volatile uint32_t        CNCONDCLR __attribute__((section("sfrs"),address(0xBF860374)));
volatile uint32_t        CNCONDSET __attribute__((section("sfrs"),address(0xBF860378)));
volatile uint32_t        CNCONDINV __attribute__((section("sfrs"),address(0xBF86037C)));
#define CNEND CNEND
volatile uint32_t   CNEND __attribute__((section("sfrs"), address(0xBF860380)));
typedef union {
  struct {
    uint32_t CNIED0:1;
    uint32_t CNIED1:1;
    uint32_t CNIED2:1;
    uint32_t CNIED3:1;
    uint32_t CNIED4:1;
    uint32_t CNIED5:1;
    uint32_t :3;
    uint32_t CNIED9:1;
    uint32_t CNIED10:1;
    uint32_t CNIED11:1;
    uint32_t CNIED12:1;
    uint32_t CNIED13:1;
    uint32_t CNIED14:1;
    uint32_t CNIED15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENDbits_t;
volatile __CNENDbits_t CNENDbits __asm__ ("CNEND") __attribute__((section("sfrs"), address(0xBF860380)));
volatile uint32_t        CNENDCLR __attribute__((section("sfrs"),address(0xBF860384)));
volatile uint32_t        CNENDSET __attribute__((section("sfrs"),address(0xBF860388)));
volatile uint32_t        CNENDINV __attribute__((section("sfrs"),address(0xBF86038C)));
#define CNSTATD CNSTATD
volatile uint32_t   CNSTATD __attribute__((section("sfrs"), address(0xBF860390)));
typedef union {
  struct {
    uint32_t CNSTATD0:1;
    uint32_t CNSTATD1:1;
    uint32_t CNSTATD2:1;
    uint32_t CNSTATD3:1;
    uint32_t CNSTATD4:1;
    uint32_t CNSTATD5:1;
    uint32_t :3;
    uint32_t CNSTATD9:1;
    uint32_t CNSTATD10:1;
    uint32_t CNSTATD11:1;
    uint32_t CNSTATD12:1;
    uint32_t CNSTATD13:1;
    uint32_t CNSTATD14:1;
    uint32_t CNSTATD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATDbits_t;
volatile __CNSTATDbits_t CNSTATDbits __asm__ ("CNSTATD") __attribute__((section("sfrs"), address(0xBF860390)));
volatile uint32_t        CNSTATDCLR __attribute__((section("sfrs"),address(0xBF860394)));
volatile uint32_t        CNSTATDSET __attribute__((section("sfrs"),address(0xBF860398)));
volatile uint32_t        CNSTATDINV __attribute__((section("sfrs"),address(0xBF86039C)));
#define CNNED CNNED
volatile uint32_t   CNNED __attribute__((section("sfrs"), address(0xBF8603A0)));
typedef struct {
  uint32_t CNNED0:1;
  uint32_t CNNED1:1;
  uint32_t CNNED2:1;
  uint32_t CNNED3:1;
  uint32_t CNNED4:1;
  uint32_t CNNED5:1;
  uint32_t :3;
  uint32_t CNNED9:1;
  uint32_t CNNED10:1;
  uint32_t CNNED11:1;
  uint32_t CNNED12:1;
  uint32_t CNNED13:1;
  uint32_t CNNED14:1;
  uint32_t CNNED15:1;
} __CNNEDbits_t;
volatile __CNNEDbits_t CNNEDbits __asm__ ("CNNED") __attribute__((section("sfrs"), address(0xBF8603A0)));
volatile uint32_t        CNNEDCLR __attribute__((section("sfrs"),address(0xBF8603A4)));
volatile uint32_t        CNNEDSET __attribute__((section("sfrs"),address(0xBF8603A8)));
volatile uint32_t        CNNEDINV __attribute__((section("sfrs"),address(0xBF8603AC)));
#define CNFD CNFD
volatile uint32_t   CNFD __attribute__((section("sfrs"), address(0xBF8603B0)));
typedef struct {
  uint32_t CNFD0:1;
  uint32_t CNFD1:1;
  uint32_t CNFD2:1;
  uint32_t CNFD3:1;
  uint32_t CNFD4:1;
  uint32_t CNFD5:1;
  uint32_t :3;
  uint32_t CNFD9:1;
  uint32_t CNFD10:1;
  uint32_t CNFD11:1;
  uint32_t CNFD12:1;
  uint32_t CNFD13:1;
  uint32_t CNFD14:1;
  uint32_t CNFD15:1;
} __CNFDbits_t;
volatile __CNFDbits_t CNFDbits __asm__ ("CNFD") __attribute__((section("sfrs"), address(0xBF8603B0)));
volatile uint32_t        CNFDCLR __attribute__((section("sfrs"),address(0xBF8603B4)));
volatile uint32_t        CNFDSET __attribute__((section("sfrs"),address(0xBF8603B8)));
volatile uint32_t        CNFDINV __attribute__((section("sfrs"),address(0xBF8603BC)));
#define ANSELE ANSELE
volatile uint32_t   ANSELE __attribute__((section("sfrs"), address(0xBF860400)));
typedef union {
  struct {
    uint32_t :4;
    uint32_t ANSE4:1;
    uint32_t ANSE5:1;
    uint32_t ANSE6:1;
    uint32_t ANSE7:1;
    uint32_t ANSE8:1;
    uint32_t ANSE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELEbits_t;
volatile __ANSELEbits_t ANSELEbits __asm__ ("ANSELE") __attribute__((section("sfrs"), address(0xBF860400)));
volatile uint32_t        ANSELECLR __attribute__((section("sfrs"),address(0xBF860404)));
volatile uint32_t        ANSELESET __attribute__((section("sfrs"),address(0xBF860408)));
volatile uint32_t        ANSELEINV __attribute__((section("sfrs"),address(0xBF86040C)));
#define TRISE TRISE
volatile uint32_t   TRISE __attribute__((section("sfrs"), address(0xBF860410)));
typedef union {
  struct {
    uint32_t TRISE0:1;
    uint32_t TRISE1:1;
    uint32_t TRISE2:1;
    uint32_t TRISE3:1;
    uint32_t TRISE4:1;
    uint32_t TRISE5:1;
    uint32_t TRISE6:1;
    uint32_t TRISE7:1;
    uint32_t TRISE8:1;
    uint32_t TRISE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISEbits_t;
volatile __TRISEbits_t TRISEbits __asm__ ("TRISE") __attribute__((section("sfrs"), address(0xBF860410)));
volatile uint32_t        TRISECLR __attribute__((section("sfrs"),address(0xBF860414)));
volatile uint32_t        TRISESET __attribute__((section("sfrs"),address(0xBF860418)));
volatile uint32_t        TRISEINV __attribute__((section("sfrs"),address(0xBF86041C)));
#define PORTE PORTE
volatile uint32_t   PORTE __attribute__((section("sfrs"), address(0xBF860420)));
typedef union {
  struct {
    uint32_t RE0:1;
    uint32_t RE1:1;
    uint32_t RE2:1;
    uint32_t RE3:1;
    uint32_t RE4:1;
    uint32_t RE5:1;
    uint32_t RE6:1;
    uint32_t RE7:1;
    uint32_t RE8:1;
    uint32_t RE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTEbits_t;
volatile __PORTEbits_t PORTEbits __asm__ ("PORTE") __attribute__((section("sfrs"), address(0xBF860420)));
volatile uint32_t        PORTECLR __attribute__((section("sfrs"),address(0xBF860424)));
volatile uint32_t        PORTESET __attribute__((section("sfrs"),address(0xBF860428)));
volatile uint32_t        PORTEINV __attribute__((section("sfrs"),address(0xBF86042C)));
#define LATE LATE
volatile uint32_t   LATE __attribute__((section("sfrs"), address(0xBF860430)));
typedef union {
  struct {
    uint32_t LATE0:1;
    uint32_t LATE1:1;
    uint32_t LATE2:1;
    uint32_t LATE3:1;
    uint32_t LATE4:1;
    uint32_t LATE5:1;
    uint32_t LATE6:1;
    uint32_t LATE7:1;
    uint32_t LATE8:1;
    uint32_t LATE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATEbits_t;
volatile __LATEbits_t LATEbits __asm__ ("LATE") __attribute__((section("sfrs"), address(0xBF860430)));
volatile uint32_t        LATECLR __attribute__((section("sfrs"),address(0xBF860434)));
volatile uint32_t        LATESET __attribute__((section("sfrs"),address(0xBF860438)));
volatile uint32_t        LATEINV __attribute__((section("sfrs"),address(0xBF86043C)));
#define ODCE ODCE
volatile uint32_t   ODCE __attribute__((section("sfrs"), address(0xBF860440)));
typedef union {
  struct {
    uint32_t ODCE0:1;
    uint32_t ODCE1:1;
    uint32_t ODCE2:1;
    uint32_t ODCE3:1;
    uint32_t ODCE4:1;
    uint32_t ODCE5:1;
    uint32_t ODCE6:1;
    uint32_t ODCE7:1;
    uint32_t ODCE8:1;
    uint32_t ODCE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCEbits_t;
volatile __ODCEbits_t ODCEbits __asm__ ("ODCE") __attribute__((section("sfrs"), address(0xBF860440)));
volatile uint32_t        ODCECLR __attribute__((section("sfrs"),address(0xBF860444)));
volatile uint32_t        ODCESET __attribute__((section("sfrs"),address(0xBF860448)));
volatile uint32_t        ODCEINV __attribute__((section("sfrs"),address(0xBF86044C)));
#define CNPUE CNPUE
volatile uint32_t   CNPUE __attribute__((section("sfrs"), address(0xBF860450)));
typedef union {
  struct {
    uint32_t CNPUE0:1;
    uint32_t CNPUE1:1;
    uint32_t CNPUE2:1;
    uint32_t CNPUE3:1;
    uint32_t CNPUE4:1;
    uint32_t CNPUE5:1;
    uint32_t CNPUE6:1;
    uint32_t CNPUE7:1;
    uint32_t CNPUE8:1;
    uint32_t CNPUE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUEbits_t;
volatile __CNPUEbits_t CNPUEbits __asm__ ("CNPUE") __attribute__((section("sfrs"), address(0xBF860450)));
volatile uint32_t        CNPUECLR __attribute__((section("sfrs"),address(0xBF860454)));
volatile uint32_t        CNPUESET __attribute__((section("sfrs"),address(0xBF860458)));
volatile uint32_t        CNPUEINV __attribute__((section("sfrs"),address(0xBF86045C)));
#define CNPDE CNPDE
volatile uint32_t   CNPDE __attribute__((section("sfrs"), address(0xBF860460)));
typedef union {
  struct {
    uint32_t CNPDE0:1;
    uint32_t CNPDE1:1;
    uint32_t CNPDE2:1;
    uint32_t CNPDE3:1;
    uint32_t CNPDE4:1;
    uint32_t CNPDE5:1;
    uint32_t CNPDE6:1;
    uint32_t CNPDE7:1;
    uint32_t CNPDE8:1;
    uint32_t CNPDE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDEbits_t;
volatile __CNPDEbits_t CNPDEbits __asm__ ("CNPDE") __attribute__((section("sfrs"), address(0xBF860460)));
volatile uint32_t        CNPDECLR __attribute__((section("sfrs"),address(0xBF860464)));
volatile uint32_t        CNPDESET __attribute__((section("sfrs"),address(0xBF860468)));
volatile uint32_t        CNPDEINV __attribute__((section("sfrs"),address(0xBF86046C)));
#define CNCONE CNCONE
volatile uint32_t   CNCONE __attribute__((section("sfrs"), address(0xBF860470)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONEbits_t;
volatile __CNCONEbits_t CNCONEbits __asm__ ("CNCONE") __attribute__((section("sfrs"), address(0xBF860470)));
volatile uint32_t        CNCONECLR __attribute__((section("sfrs"),address(0xBF860474)));
volatile uint32_t        CNCONESET __attribute__((section("sfrs"),address(0xBF860478)));
volatile uint32_t        CNCONEINV __attribute__((section("sfrs"),address(0xBF86047C)));
#define CNENE CNENE
volatile uint32_t   CNENE __attribute__((section("sfrs"), address(0xBF860480)));
typedef union {
  struct {
    uint32_t CNIEE0:1;
    uint32_t CNIEE1:1;
    uint32_t CNIEE2:1;
    uint32_t CNIEE3:1;
    uint32_t CNIEE4:1;
    uint32_t CNIEE5:1;
    uint32_t CNIEE6:1;
    uint32_t CNIEE7:1;
    uint32_t CNIEE8:1;
    uint32_t CNIEE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENEbits_t;
volatile __CNENEbits_t CNENEbits __asm__ ("CNENE") __attribute__((section("sfrs"), address(0xBF860480)));
volatile uint32_t        CNENECLR __attribute__((section("sfrs"),address(0xBF860484)));
volatile uint32_t        CNENESET __attribute__((section("sfrs"),address(0xBF860488)));
volatile uint32_t        CNENEINV __attribute__((section("sfrs"),address(0xBF86048C)));
#define CNSTATE CNSTATE
volatile uint32_t   CNSTATE __attribute__((section("sfrs"), address(0xBF860490)));
typedef union {
  struct {
    uint32_t CNSTATE0:1;
    uint32_t CNSTATE1:1;
    uint32_t CNSTATE2:1;
    uint32_t CNSTATE3:1;
    uint32_t CNSTATE4:1;
    uint32_t CNSTATE5:1;
    uint32_t CNSTATE6:1;
    uint32_t CNSTATE7:1;
    uint32_t CNSTATE8:1;
    uint32_t CNSTATE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATEbits_t;
volatile __CNSTATEbits_t CNSTATEbits __asm__ ("CNSTATE") __attribute__((section("sfrs"), address(0xBF860490)));
volatile uint32_t        CNSTATECLR __attribute__((section("sfrs"),address(0xBF860494)));
volatile uint32_t        CNSTATESET __attribute__((section("sfrs"),address(0xBF860498)));
volatile uint32_t        CNSTATEINV __attribute__((section("sfrs"),address(0xBF86049C)));
#define CNNEE CNNEE
volatile uint32_t   CNNEE __attribute__((section("sfrs"), address(0xBF8604A0)));
typedef struct {
  uint32_t CNNEE0:1;
  uint32_t CNNEE1:1;
  uint32_t CNNEE2:1;
  uint32_t CNNEE3:1;
  uint32_t CNNEE4:1;
  uint32_t CNNEE5:1;
  uint32_t CNNEE6:1;
  uint32_t CNNEE7:1;
  uint32_t CNNEE8:1;
  uint32_t CNNEE9:1;
} __CNNEEbits_t;
volatile __CNNEEbits_t CNNEEbits __asm__ ("CNNEE") __attribute__((section("sfrs"), address(0xBF8604A0)));
volatile uint32_t        CNNEECLR __attribute__((section("sfrs"),address(0xBF8604A4)));
volatile uint32_t        CNNEESET __attribute__((section("sfrs"),address(0xBF8604A8)));
volatile uint32_t        CNNEEINV __attribute__((section("sfrs"),address(0xBF8604AC)));
#define CNFE CNFE
volatile uint32_t   CNFE __attribute__((section("sfrs"), address(0xBF8604B0)));
typedef struct {
  uint32_t CNFE0:1;
  uint32_t CNFE1:1;
  uint32_t CNFE2:1;
  uint32_t CNFE3:1;
  uint32_t CNFE4:1;
  uint32_t CNFE5:1;
  uint32_t CNFE6:1;
  uint32_t CNFE7:1;
  uint32_t CNFE8:1;
  uint32_t CNFE9:1;
} __CNFEbits_t;
volatile __CNFEbits_t CNFEbits __asm__ ("CNFE") __attribute__((section("sfrs"), address(0xBF8604B0)));
volatile uint32_t        CNFECLR __attribute__((section("sfrs"),address(0xBF8604B4)));
volatile uint32_t        CNFESET __attribute__((section("sfrs"),address(0xBF8604B8)));
volatile uint32_t        CNFEINV __attribute__((section("sfrs"),address(0xBF8604BC)));
#define SRCON0E SRCON0E
volatile uint32_t   SRCON0E __attribute__((section("sfrs"), address(0xBF8604C0)));
typedef struct {
  uint32_t SR0E0:1;
  uint32_t SR0E1:1;
  uint32_t SR0E2:1;
  uint32_t SR0E3:1;
} __SRCON0Ebits_t;
volatile __SRCON0Ebits_t SRCON0Ebits __asm__ ("SRCON0E") __attribute__((section("sfrs"), address(0xBF8604C0)));
volatile uint32_t        SRCON0ECLR __attribute__((section("sfrs"),address(0xBF8604C4)));
volatile uint32_t        SRCON0ESET __attribute__((section("sfrs"),address(0xBF8604C8)));
volatile uint32_t        SRCON0EINV __attribute__((section("sfrs"),address(0xBF8604CC)));
#define SRCON1E SRCON1E
volatile uint32_t   SRCON1E __attribute__((section("sfrs"), address(0xBF8604D0)));
typedef struct {
  uint32_t SR1E0:1;
  uint32_t SR1E1:1;
  uint32_t SR1E2:1;
  uint32_t SR1E3:1;
} __SRCON1Ebits_t;
volatile __SRCON1Ebits_t SRCON1Ebits __asm__ ("SRCON1E") __attribute__((section("sfrs"), address(0xBF8604D0)));
volatile uint32_t        SRCON1ECLR __attribute__((section("sfrs"),address(0xBF8604D4)));
volatile uint32_t        SRCON1ESET __attribute__((section("sfrs"),address(0xBF8604D8)));
volatile uint32_t        SRCON1EINV __attribute__((section("sfrs"),address(0xBF8604DC)));
#define ANSELF ANSELF
volatile uint32_t   ANSELF __attribute__((section("sfrs"), address(0xBF860500)));
typedef union {
  struct {
    uint32_t :12;
    uint32_t ANSF12:1;
    uint32_t ANSF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELFbits_t;
volatile __ANSELFbits_t ANSELFbits __asm__ ("ANSELF") __attribute__((section("sfrs"), address(0xBF860500)));
volatile uint32_t        ANSELFCLR __attribute__((section("sfrs"),address(0xBF860504)));
volatile uint32_t        ANSELFSET __attribute__((section("sfrs"),address(0xBF860508)));
volatile uint32_t        ANSELFINV __attribute__((section("sfrs"),address(0xBF86050C)));
#define TRISF TRISF
volatile uint32_t   TRISF __attribute__((section("sfrs"), address(0xBF860510)));
typedef union {
  struct {
    uint32_t TRISF0:1;
    uint32_t TRISF1:1;
    uint32_t TRISF2:1;
    uint32_t TRISF3:1;
    uint32_t TRISF4:1;
    uint32_t TRISF5:1;
    uint32_t :2;
    uint32_t TRISF8:1;
    uint32_t :3;
    uint32_t TRISF12:1;
    uint32_t TRISF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISFbits_t;
volatile __TRISFbits_t TRISFbits __asm__ ("TRISF") __attribute__((section("sfrs"), address(0xBF860510)));
volatile uint32_t        TRISFCLR __attribute__((section("sfrs"),address(0xBF860514)));
volatile uint32_t        TRISFSET __attribute__((section("sfrs"),address(0xBF860518)));
volatile uint32_t        TRISFINV __attribute__((section("sfrs"),address(0xBF86051C)));
#define PORTF PORTF
volatile uint32_t   PORTF __attribute__((section("sfrs"), address(0xBF860520)));
typedef union {
  struct {
    uint32_t RF0:1;
    uint32_t RF1:1;
    uint32_t RF2:1;
    uint32_t RF3:1;
    uint32_t RF4:1;
    uint32_t RF5:1;
    uint32_t :2;
    uint32_t RF8:1;
    uint32_t :3;
    uint32_t RF12:1;
    uint32_t RF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTFbits_t;
volatile __PORTFbits_t PORTFbits __asm__ ("PORTF") __attribute__((section("sfrs"), address(0xBF860520)));
volatile uint32_t        PORTFCLR __attribute__((section("sfrs"),address(0xBF860524)));
volatile uint32_t        PORTFSET __attribute__((section("sfrs"),address(0xBF860528)));
volatile uint32_t        PORTFINV __attribute__((section("sfrs"),address(0xBF86052C)));
#define LATF LATF
volatile uint32_t   LATF __attribute__((section("sfrs"), address(0xBF860530)));
typedef union {
  struct {
    uint32_t LATF0:1;
    uint32_t LATF1:1;
    uint32_t LATF2:1;
    uint32_t LATF3:1;
    uint32_t LATF4:1;
    uint32_t LATF5:1;
    uint32_t :2;
    uint32_t LATF8:1;
    uint32_t :3;
    uint32_t LATF12:1;
    uint32_t LATF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATFbits_t;
volatile __LATFbits_t LATFbits __asm__ ("LATF") __attribute__((section("sfrs"), address(0xBF860530)));
volatile uint32_t        LATFCLR __attribute__((section("sfrs"),address(0xBF860534)));
volatile uint32_t        LATFSET __attribute__((section("sfrs"),address(0xBF860538)));
volatile uint32_t        LATFINV __attribute__((section("sfrs"),address(0xBF86053C)));
#define ODCF ODCF
volatile uint32_t   ODCF __attribute__((section("sfrs"), address(0xBF860540)));
typedef union {
  struct {
    uint32_t ODCF0:1;
    uint32_t ODCF1:1;
    uint32_t ODCF2:1;
    uint32_t ODCF3:1;
    uint32_t ODCF4:1;
    uint32_t ODCF5:1;
    uint32_t :2;
    uint32_t ODCF8:1;
    uint32_t :3;
    uint32_t ODCF12:1;
    uint32_t ODCF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCFbits_t;
volatile __ODCFbits_t ODCFbits __asm__ ("ODCF") __attribute__((section("sfrs"), address(0xBF860540)));
volatile uint32_t        ODCFCLR __attribute__((section("sfrs"),address(0xBF860544)));
volatile uint32_t        ODCFSET __attribute__((section("sfrs"),address(0xBF860548)));
volatile uint32_t        ODCFINV __attribute__((section("sfrs"),address(0xBF86054C)));
#define CNPUF CNPUF
volatile uint32_t   CNPUF __attribute__((section("sfrs"), address(0xBF860550)));
typedef union {
  struct {
    uint32_t CNPUF0:1;
    uint32_t CNPUF1:1;
    uint32_t CNPUF2:1;
    uint32_t CNPUF3:1;
    uint32_t CNPUF4:1;
    uint32_t CNPUF5:1;
    uint32_t :2;
    uint32_t CNPUF8:1;
    uint32_t :3;
    uint32_t CNPUF12:1;
    uint32_t CNPUF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUFbits_t;
volatile __CNPUFbits_t CNPUFbits __asm__ ("CNPUF") __attribute__((section("sfrs"), address(0xBF860550)));
volatile uint32_t        CNPUFCLR __attribute__((section("sfrs"),address(0xBF860554)));
volatile uint32_t        CNPUFSET __attribute__((section("sfrs"),address(0xBF860558)));
volatile uint32_t        CNPUFINV __attribute__((section("sfrs"),address(0xBF86055C)));
#define CNPDF CNPDF
volatile uint32_t   CNPDF __attribute__((section("sfrs"), address(0xBF860560)));
typedef union {
  struct {
    uint32_t CNPDF0:1;
    uint32_t CNPDF1:1;
    uint32_t CNPDF2:1;
    uint32_t CNPDF3:1;
    uint32_t CNPDF4:1;
    uint32_t CNPDF5:1;
    uint32_t :2;
    uint32_t CNPDF8:1;
    uint32_t :3;
    uint32_t CNPDF12:1;
    uint32_t CNPDF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDFbits_t;
volatile __CNPDFbits_t CNPDFbits __asm__ ("CNPDF") __attribute__((section("sfrs"), address(0xBF860560)));
volatile uint32_t        CNPDFCLR __attribute__((section("sfrs"),address(0xBF860564)));
volatile uint32_t        CNPDFSET __attribute__((section("sfrs"),address(0xBF860568)));
volatile uint32_t        CNPDFINV __attribute__((section("sfrs"),address(0xBF86056C)));
#define CNCONF CNCONF
volatile uint32_t   CNCONF __attribute__((section("sfrs"), address(0xBF860570)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONFbits_t;
volatile __CNCONFbits_t CNCONFbits __asm__ ("CNCONF") __attribute__((section("sfrs"), address(0xBF860570)));
volatile uint32_t        CNCONFCLR __attribute__((section("sfrs"),address(0xBF860574)));
volatile uint32_t        CNCONFSET __attribute__((section("sfrs"),address(0xBF860578)));
volatile uint32_t        CNCONFINV __attribute__((section("sfrs"),address(0xBF86057C)));
#define CNENF CNENF
volatile uint32_t   CNENF __attribute__((section("sfrs"), address(0xBF860580)));
typedef union {
  struct {
    uint32_t CNIEF0:1;
    uint32_t CNIEF1:1;
    uint32_t CNIEF2:1;
    uint32_t CNIEF3:1;
    uint32_t CNIEF4:1;
    uint32_t CNIEF5:1;
    uint32_t :2;
    uint32_t CNIEF8:1;
    uint32_t :3;
    uint32_t CNIEF12:1;
    uint32_t CNIEF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENFbits_t;
volatile __CNENFbits_t CNENFbits __asm__ ("CNENF") __attribute__((section("sfrs"), address(0xBF860580)));
volatile uint32_t        CNENFCLR __attribute__((section("sfrs"),address(0xBF860584)));
volatile uint32_t        CNENFSET __attribute__((section("sfrs"),address(0xBF860588)));
volatile uint32_t        CNENFINV __attribute__((section("sfrs"),address(0xBF86058C)));
#define CNSTATF CNSTATF
volatile uint32_t   CNSTATF __attribute__((section("sfrs"), address(0xBF860590)));
typedef union {
  struct {
    uint32_t CNSTATF0:1;
    uint32_t CNSTATF1:1;
    uint32_t CNSTATF2:1;
    uint32_t CNSTATF3:1;
    uint32_t CNSTATF4:1;
    uint32_t CNSTATF5:1;
    uint32_t :2;
    uint32_t CNSTATF8:1;
    uint32_t :3;
    uint32_t CNSTATF12:1;
    uint32_t CNSTATF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATFbits_t;
volatile __CNSTATFbits_t CNSTATFbits __asm__ ("CNSTATF") __attribute__((section("sfrs"), address(0xBF860590)));
volatile uint32_t        CNSTATFCLR __attribute__((section("sfrs"),address(0xBF860594)));
volatile uint32_t        CNSTATFSET __attribute__((section("sfrs"),address(0xBF860598)));
volatile uint32_t        CNSTATFINV __attribute__((section("sfrs"),address(0xBF86059C)));
#define CNNEF CNNEF
volatile uint32_t   CNNEF __attribute__((section("sfrs"), address(0xBF8605A0)));
typedef struct {
  uint32_t CNNEF0:1;
  uint32_t CNNEF1:1;
  uint32_t CNNEF2:1;
  uint32_t CNNEF3:1;
  uint32_t CNNEF4:1;
  uint32_t CNNEF5:1;
  uint32_t :2;
  uint32_t CNNEF8:1;
  uint32_t :3;
  uint32_t CNNEF12:1;
  uint32_t CNNEF13:1;
} __CNNEFbits_t;
volatile __CNNEFbits_t CNNEFbits __asm__ ("CNNEF") __attribute__((section("sfrs"), address(0xBF8605A0)));
volatile uint32_t        CNNEFCLR __attribute__((section("sfrs"),address(0xBF8605A4)));
volatile uint32_t        CNNEFSET __attribute__((section("sfrs"),address(0xBF8605A8)));
volatile uint32_t        CNNEFINV __attribute__((section("sfrs"),address(0xBF8605AC)));
#define CNFF CNFF
volatile uint32_t   CNFF __attribute__((section("sfrs"), address(0xBF8605B0)));
typedef struct {
  uint32_t CNFF0:1;
  uint32_t CNFF1:1;
  uint32_t CNFF2:1;
  uint32_t CNFF3:1;
  uint32_t CNFF4:1;
  uint32_t CNFF5:1;
  uint32_t :2;
  uint32_t CNFF8:1;
  uint32_t :3;
  uint32_t CNFF12:1;
  uint32_t CNFF13:1;
} __CNFFbits_t;
volatile __CNFFbits_t CNFFbits __asm__ ("CNFF") __attribute__((section("sfrs"), address(0xBF8605B0)));
volatile uint32_t        CNFFCLR __attribute__((section("sfrs"),address(0xBF8605B4)));
volatile uint32_t        CNFFSET __attribute__((section("sfrs"),address(0xBF8605B8)));
volatile uint32_t        CNFFINV __attribute__((section("sfrs"),address(0xBF8605BC)));
#define SRCON0F SRCON0F
volatile uint32_t   SRCON0F __attribute__((section("sfrs"), address(0xBF8605C0)));
typedef struct {
  uint32_t SR0F0:1;
  uint32_t SR0F1:1;
} __SRCON0Fbits_t;
volatile __SRCON0Fbits_t SRCON0Fbits __asm__ ("SRCON0F") __attribute__((section("sfrs"), address(0xBF8605C0)));
volatile uint32_t        SRCON0FCLR __attribute__((section("sfrs"),address(0xBF8605C4)));
volatile uint32_t        SRCON0FSET __attribute__((section("sfrs"),address(0xBF8605C8)));
volatile uint32_t        SRCON0FINV __attribute__((section("sfrs"),address(0xBF8605CC)));
#define SRCON1F SRCON1F
volatile uint32_t   SRCON1F __attribute__((section("sfrs"), address(0xBF8605D0)));
typedef struct {
  uint32_t SR1F0:1;
  uint32_t SR1F1:1;
} __SRCON1Fbits_t;
volatile __SRCON1Fbits_t SRCON1Fbits __asm__ ("SRCON1F") __attribute__((section("sfrs"), address(0xBF8605D0)));
volatile uint32_t        SRCON1FCLR __attribute__((section("sfrs"),address(0xBF8605D4)));
volatile uint32_t        SRCON1FSET __attribute__((section("sfrs"),address(0xBF8605D8)));
volatile uint32_t        SRCON1FINV __attribute__((section("sfrs"),address(0xBF8605DC)));
#define ANSELG ANSELG
volatile uint32_t   ANSELG __attribute__((section("sfrs"), address(0xBF860600)));
typedef union {
  struct {
    uint32_t :6;
    uint32_t ANSG6:1;
    uint32_t ANSG7:1;
    uint32_t ANSG8:1;
    uint32_t ANSG9:1;
    uint32_t :5;
    uint32_t ANSG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELGbits_t;
volatile __ANSELGbits_t ANSELGbits __asm__ ("ANSELG") __attribute__((section("sfrs"), address(0xBF860600)));
volatile uint32_t        ANSELGCLR __attribute__((section("sfrs"),address(0xBF860604)));
volatile uint32_t        ANSELGSET __attribute__((section("sfrs"),address(0xBF860608)));
volatile uint32_t        ANSELGINV __attribute__((section("sfrs"),address(0xBF86060C)));
#define TRISG TRISG
volatile uint32_t   TRISG __attribute__((section("sfrs"), address(0xBF860610)));
typedef union {
  struct {
    uint32_t TRISG0:1;
    uint32_t TRISG1:1;
    uint32_t :4;
    uint32_t TRISG6:1;
    uint32_t TRISG7:1;
    uint32_t TRISG8:1;
    uint32_t TRISG9:1;
    uint32_t :2;
    uint32_t TRISG12:1;
    uint32_t TRISG13:1;
    uint32_t TRISG14:1;
    uint32_t TRISG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISGbits_t;
volatile __TRISGbits_t TRISGbits __asm__ ("TRISG") __attribute__((section("sfrs"), address(0xBF860610)));
volatile uint32_t        TRISGCLR __attribute__((section("sfrs"),address(0xBF860614)));
volatile uint32_t        TRISGSET __attribute__((section("sfrs"),address(0xBF860618)));
volatile uint32_t        TRISGINV __attribute__((section("sfrs"),address(0xBF86061C)));
#define PORTG PORTG
volatile uint32_t   PORTG __attribute__((section("sfrs"), address(0xBF860620)));
typedef union {
  struct {
    uint32_t RG0:1;
    uint32_t RG1:1;
    uint32_t :4;
    uint32_t RG6:1;
    uint32_t RG7:1;
    uint32_t RG8:1;
    uint32_t RG9:1;
    uint32_t :2;
    uint32_t RG12:1;
    uint32_t RG13:1;
    uint32_t RG14:1;
    uint32_t RG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTGbits_t;
volatile __PORTGbits_t PORTGbits __asm__ ("PORTG") __attribute__((section("sfrs"), address(0xBF860620)));
volatile uint32_t        PORTGCLR __attribute__((section("sfrs"),address(0xBF860624)));
volatile uint32_t        PORTGSET __attribute__((section("sfrs"),address(0xBF860628)));
volatile uint32_t        PORTGINV __attribute__((section("sfrs"),address(0xBF86062C)));
#define LATG LATG
volatile uint32_t   LATG __attribute__((section("sfrs"), address(0xBF860630)));
typedef union {
  struct {
    uint32_t LATG0:1;
    uint32_t LATG1:1;
    uint32_t :4;
    uint32_t LATG6:1;
    uint32_t LATG7:1;
    uint32_t LATG8:1;
    uint32_t LATG9:1;
    uint32_t :2;
    uint32_t LATG12:1;
    uint32_t LATG13:1;
    uint32_t LATG14:1;
    uint32_t LATG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATGbits_t;
volatile __LATGbits_t LATGbits __asm__ ("LATG") __attribute__((section("sfrs"), address(0xBF860630)));
volatile uint32_t        LATGCLR __attribute__((section("sfrs"),address(0xBF860634)));
volatile uint32_t        LATGSET __attribute__((section("sfrs"),address(0xBF860638)));
volatile uint32_t        LATGINV __attribute__((section("sfrs"),address(0xBF86063C)));
#define ODCG ODCG
volatile uint32_t   ODCG __attribute__((section("sfrs"), address(0xBF860640)));
typedef union {
  struct {
    uint32_t ODCG0:1;
    uint32_t ODCG1:1;
    uint32_t :4;
    uint32_t ODCG6:1;
    uint32_t ODCG7:1;
    uint32_t ODCG8:1;
    uint32_t ODCG9:1;
    uint32_t :2;
    uint32_t ODCG12:1;
    uint32_t ODCG13:1;
    uint32_t ODCG14:1;
    uint32_t ODCG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCGbits_t;
volatile __ODCGbits_t ODCGbits __asm__ ("ODCG") __attribute__((section("sfrs"), address(0xBF860640)));
volatile uint32_t        ODCGCLR __attribute__((section("sfrs"),address(0xBF860644)));
volatile uint32_t        ODCGSET __attribute__((section("sfrs"),address(0xBF860648)));
volatile uint32_t        ODCGINV __attribute__((section("sfrs"),address(0xBF86064C)));
#define CNPUG CNPUG
volatile uint32_t   CNPUG __attribute__((section("sfrs"), address(0xBF860650)));
typedef union {
  struct {
    uint32_t CNPUG0:1;
    uint32_t CNPUG1:1;
    uint32_t :4;
    uint32_t CNPUG6:1;
    uint32_t CNPUG7:1;
    uint32_t CNPUG8:1;
    uint32_t CNPUG9:1;
    uint32_t :2;
    uint32_t CNPUG12:1;
    uint32_t CNPUG13:1;
    uint32_t CNPUG14:1;
    uint32_t CNPUG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUGbits_t;
volatile __CNPUGbits_t CNPUGbits __asm__ ("CNPUG") __attribute__((section("sfrs"), address(0xBF860650)));
volatile uint32_t        CNPUGCLR __attribute__((section("sfrs"),address(0xBF860654)));
volatile uint32_t        CNPUGSET __attribute__((section("sfrs"),address(0xBF860658)));
volatile uint32_t        CNPUGINV __attribute__((section("sfrs"),address(0xBF86065C)));
#define CNPDG CNPDG
volatile uint32_t   CNPDG __attribute__((section("sfrs"), address(0xBF860660)));
typedef union {
  struct {
    uint32_t CNPDG0:1;
    uint32_t CNPDG1:1;
    uint32_t :4;
    uint32_t CNPDG6:1;
    uint32_t CNPDG7:1;
    uint32_t CNPDG8:1;
    uint32_t CNPDG9:1;
    uint32_t :2;
    uint32_t CNPDG12:1;
    uint32_t CNPDG13:1;
    uint32_t CNPDG14:1;
    uint32_t CNPDG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDGbits_t;
volatile __CNPDGbits_t CNPDGbits __asm__ ("CNPDG") __attribute__((section("sfrs"), address(0xBF860660)));
volatile uint32_t        CNPDGCLR __attribute__((section("sfrs"),address(0xBF860664)));
volatile uint32_t        CNPDGSET __attribute__((section("sfrs"),address(0xBF860668)));
volatile uint32_t        CNPDGINV __attribute__((section("sfrs"),address(0xBF86066C)));
#define CNCONG CNCONG
volatile uint32_t   CNCONG __attribute__((section("sfrs"), address(0xBF860670)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t EDGEDETECT:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONGbits_t;
volatile __CNCONGbits_t CNCONGbits __asm__ ("CNCONG") __attribute__((section("sfrs"), address(0xBF860670)));
volatile uint32_t        CNCONGCLR __attribute__((section("sfrs"),address(0xBF860674)));
volatile uint32_t        CNCONGSET __attribute__((section("sfrs"),address(0xBF860678)));
volatile uint32_t        CNCONGINV __attribute__((section("sfrs"),address(0xBF86067C)));
#define CNENG CNENG
volatile uint32_t   CNENG __attribute__((section("sfrs"), address(0xBF860680)));
typedef union {
  struct {
    uint32_t CNIEG0:1;
    uint32_t CNIEG1:1;
    uint32_t :4;
    uint32_t CNIEG6:1;
    uint32_t CNIEG7:1;
    uint32_t CNIEG8:1;
    uint32_t CNIEG9:1;
    uint32_t :2;
    uint32_t CNIEG12:1;
    uint32_t CNIEG13:1;
    uint32_t CNIEG14:1;
    uint32_t CNIEG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENGbits_t;
volatile __CNENGbits_t CNENGbits __asm__ ("CNENG") __attribute__((section("sfrs"), address(0xBF860680)));
volatile uint32_t        CNENGCLR __attribute__((section("sfrs"),address(0xBF860684)));
volatile uint32_t        CNENGSET __attribute__((section("sfrs"),address(0xBF860688)));
volatile uint32_t        CNENGINV __attribute__((section("sfrs"),address(0xBF86068C)));
#define CNSTATG CNSTATG
volatile uint32_t   CNSTATG __attribute__((section("sfrs"), address(0xBF860690)));
typedef union {
  struct {
    uint32_t CNSTATG0:1;
    uint32_t CNSTATG1:1;
    uint32_t :4;
    uint32_t CNSTATG6:1;
    uint32_t CNSTATG7:1;
    uint32_t CNSTATG8:1;
    uint32_t CNSTATG9:1;
    uint32_t :2;
    uint32_t CNSTATG12:1;
    uint32_t CNSTATG13:1;
    uint32_t CNSTATG14:1;
    uint32_t CNSTATG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATGbits_t;
volatile __CNSTATGbits_t CNSTATGbits __asm__ ("CNSTATG") __attribute__((section("sfrs"), address(0xBF860690)));
volatile uint32_t        CNSTATGCLR __attribute__((section("sfrs"),address(0xBF860694)));
volatile uint32_t        CNSTATGSET __attribute__((section("sfrs"),address(0xBF860698)));
volatile uint32_t        CNSTATGINV __attribute__((section("sfrs"),address(0xBF86069C)));
#define CNNEG CNNEG
volatile uint32_t   CNNEG __attribute__((section("sfrs"), address(0xBF8606A0)));
typedef struct {
  uint32_t CNNEG0:1;
  uint32_t CNNEG1:1;
  uint32_t :4;
  uint32_t CNNEG6:1;
  uint32_t CNNEG7:1;
  uint32_t CNNEG8:1;
  uint32_t CNNEG9:1;
  uint32_t :2;
  uint32_t CNNEG12:1;
  uint32_t CNNEG13:1;
  uint32_t CNNEG14:1;
  uint32_t CNNEG15:1;
} __CNNEGbits_t;
volatile __CNNEGbits_t CNNEGbits __asm__ ("CNNEG") __attribute__((section("sfrs"), address(0xBF8606A0)));
volatile uint32_t        CNNEGCLR __attribute__((section("sfrs"),address(0xBF8606A4)));
volatile uint32_t        CNNEGSET __attribute__((section("sfrs"),address(0xBF8606A8)));
volatile uint32_t        CNNEGINV __attribute__((section("sfrs"),address(0xBF8606AC)));
#define CNFG CNFG
volatile uint32_t   CNFG __attribute__((section("sfrs"), address(0xBF8606B0)));
typedef struct {
  uint32_t CNFG0:1;
  uint32_t CNFG1:1;
  uint32_t :4;
  uint32_t CNFG6:1;
  uint32_t CNFG7:1;
  uint32_t CNFG8:1;
  uint32_t CNFG9:1;
  uint32_t :2;
  uint32_t CNFG12:1;
  uint32_t CNFG13:1;
  uint32_t CNFG14:1;
  uint32_t CNFG15:1;
} __CNFGbits_t;
volatile __CNFGbits_t CNFGbits __asm__ ("CNFG") __attribute__((section("sfrs"), address(0xBF8606B0)));
volatile uint32_t        CNFGCLR __attribute__((section("sfrs"),address(0xBF8606B4)));
volatile uint32_t        CNFGSET __attribute__((section("sfrs"),address(0xBF8606B8)));
volatile uint32_t        CNFGINV __attribute__((section("sfrs"),address(0xBF8606BC)));
#define SRCON0G SRCON0G
volatile uint32_t   SRCON0G __attribute__((section("sfrs"), address(0xBF8606C0)));
typedef struct {
  uint32_t :6;
  uint32_t SR0G6:1;
  uint32_t :2;
  uint32_t SR0G9:1;
  uint32_t :2;
  uint32_t SR0G12:1;
  uint32_t SR0G13:1;
  uint32_t SR0G14:1;
} __SRCON0Gbits_t;
volatile __SRCON0Gbits_t SRCON0Gbits __asm__ ("SRCON0G") __attribute__((section("sfrs"), address(0xBF8606C0)));
volatile uint32_t        SRCON0GCLR __attribute__((section("sfrs"),address(0xBF8606C4)));
volatile uint32_t        SRCON0GSET __attribute__((section("sfrs"),address(0xBF8606C8)));
volatile uint32_t        SRCON0GINV __attribute__((section("sfrs"),address(0xBF8606CC)));
#define SRCON1G SRCON1G
volatile uint32_t   SRCON1G __attribute__((section("sfrs"), address(0xBF8606D0)));
typedef struct {
  uint32_t :6;
  uint32_t SR1G6:1;
  uint32_t :2;
  uint32_t SR1G9:1;
  uint32_t :2;
  uint32_t SR1G12:1;
  uint32_t SR1G13:1;
  uint32_t SR1G14:1;
} __SRCON1Gbits_t;
volatile __SRCON1Gbits_t SRCON1Gbits __asm__ ("SRCON1G") __attribute__((section("sfrs"), address(0xBF8606D0)));
volatile uint32_t        SRCON1GCLR __attribute__((section("sfrs"),address(0xBF8606D4)));
volatile uint32_t        SRCON1GSET __attribute__((section("sfrs"),address(0xBF8606D8)));
volatile uint32_t        SRCON1GINV __attribute__((section("sfrs"),address(0xBF8606DC)));
#define ETHCON1 ETHCON1
volatile uint32_t   ETHCON1 __attribute__((section("sfrs"), address(0xBF882000)));
typedef union {
  struct {
    uint32_t BUFCDEC:1;
    uint32_t :3;
    uint32_t MANFC:1;
    uint32_t :2;
    uint32_t AUTOFC:1;
    uint32_t RXEN:1;
    uint32_t TXRTS:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t PTV:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHCON1bits_t;
volatile __ETHCON1bits_t ETHCON1bits __asm__ ("ETHCON1") __attribute__((section("sfrs"), address(0xBF882000)));
volatile uint32_t        ETHCON1CLR __attribute__((section("sfrs"),address(0xBF882004)));
volatile uint32_t        ETHCON1SET __attribute__((section("sfrs"),address(0xBF882008)));
volatile uint32_t        ETHCON1INV __attribute__((section("sfrs"),address(0xBF88200C)));
#define ETHCON2 ETHCON2
volatile uint32_t   ETHCON2 __attribute__((section("sfrs"), address(0xBF882010)));
typedef union {
  struct {
    uint32_t :4;
    uint32_t RXBUF_SZ:7;
  };
  struct {
    uint32_t w:32;
  };
} __ETHCON2bits_t;
volatile __ETHCON2bits_t ETHCON2bits __asm__ ("ETHCON2") __attribute__((section("sfrs"), address(0xBF882010)));
volatile uint32_t        ETHCON2CLR __attribute__((section("sfrs"),address(0xBF882014)));
volatile uint32_t        ETHCON2SET __attribute__((section("sfrs"),address(0xBF882018)));
volatile uint32_t        ETHCON2INV __attribute__((section("sfrs"),address(0xBF88201C)));
#define ETHTXST ETHTXST
volatile uint32_t   ETHTXST __attribute__((section("sfrs"), address(0xBF882020)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t TXSTADDR:30;
  };
  struct {
    uint32_t w:32;
  };
} __ETHTXSTbits_t;
volatile __ETHTXSTbits_t ETHTXSTbits __asm__ ("ETHTXST") __attribute__((section("sfrs"), address(0xBF882020)));
volatile uint32_t        ETHTXSTCLR __attribute__((section("sfrs"),address(0xBF882024)));
volatile uint32_t        ETHTXSTSET __attribute__((section("sfrs"),address(0xBF882028)));
volatile uint32_t        ETHTXSTINV __attribute__((section("sfrs"),address(0xBF88202C)));
#define ETHRXST ETHRXST
volatile uint32_t   ETHRXST __attribute__((section("sfrs"), address(0xBF882030)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t RXSTADDR:30;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXSTbits_t;
volatile __ETHRXSTbits_t ETHRXSTbits __asm__ ("ETHRXST") __attribute__((section("sfrs"), address(0xBF882030)));
volatile uint32_t        ETHRXSTCLR __attribute__((section("sfrs"),address(0xBF882034)));
volatile uint32_t        ETHRXSTSET __attribute__((section("sfrs"),address(0xBF882038)));
volatile uint32_t        ETHRXSTINV __attribute__((section("sfrs"),address(0xBF88203C)));
#define ETHHT0 ETHHT0
volatile uint32_t   ETHHT0 __attribute__((section("sfrs"), address(0xBF882040)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t HTLOWER:32;
  };
} __ETHHT0bits_t;
volatile __ETHHT0bits_t ETHHT0bits __asm__ ("ETHHT0") __attribute__((section("sfrs"), address(0xBF882040)));
volatile uint32_t        ETHHT0CLR __attribute__((section("sfrs"),address(0xBF882044)));
volatile uint32_t        ETHHT0SET __attribute__((section("sfrs"),address(0xBF882048)));
volatile uint32_t        ETHHT0INV __attribute__((section("sfrs"),address(0xBF88204C)));
#define ETHHT1 ETHHT1
volatile uint32_t   ETHHT1 __attribute__((section("sfrs"), address(0xBF882050)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t HTUPPER:32;
  };
} __ETHHT1bits_t;
volatile __ETHHT1bits_t ETHHT1bits __asm__ ("ETHHT1") __attribute__((section("sfrs"), address(0xBF882050)));
volatile uint32_t        ETHHT1CLR __attribute__((section("sfrs"),address(0xBF882054)));
volatile uint32_t        ETHHT1SET __attribute__((section("sfrs"),address(0xBF882058)));
volatile uint32_t        ETHHT1INV __attribute__((section("sfrs"),address(0xBF88205C)));
#define ETHPMM0 ETHPMM0
volatile uint32_t   ETHPMM0 __attribute__((section("sfrs"), address(0xBF882060)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t PMMLOWER:32;
  };
} __ETHPMM0bits_t;
volatile __ETHPMM0bits_t ETHPMM0bits __asm__ ("ETHPMM0") __attribute__((section("sfrs"), address(0xBF882060)));
volatile uint32_t        ETHPMM0CLR __attribute__((section("sfrs"),address(0xBF882064)));
volatile uint32_t        ETHPMM0SET __attribute__((section("sfrs"),address(0xBF882068)));
volatile uint32_t        ETHPMM0INV __attribute__((section("sfrs"),address(0xBF88206C)));
#define ETHPMM1 ETHPMM1
volatile uint32_t   ETHPMM1 __attribute__((section("sfrs"), address(0xBF882070)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t PMMUPPER:32;
  };
} __ETHPMM1bits_t;
volatile __ETHPMM1bits_t ETHPMM1bits __asm__ ("ETHPMM1") __attribute__((section("sfrs"), address(0xBF882070)));
volatile uint32_t        ETHPMM1CLR __attribute__((section("sfrs"),address(0xBF882074)));
volatile uint32_t        ETHPMM1SET __attribute__((section("sfrs"),address(0xBF882078)));
volatile uint32_t        ETHPMM1INV __attribute__((section("sfrs"),address(0xBF88207C)));
#define ETHPMCS ETHPMCS
volatile uint32_t   ETHPMCS __attribute__((section("sfrs"), address(0xBF882080)));
typedef union {
  struct {
    uint32_t PMCS:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHPMCSbits_t;
volatile __ETHPMCSbits_t ETHPMCSbits __asm__ ("ETHPMCS") __attribute__((section("sfrs"), address(0xBF882080)));
volatile uint32_t        ETHPMCSCLR __attribute__((section("sfrs"),address(0xBF882084)));
volatile uint32_t        ETHPMCSSET __attribute__((section("sfrs"),address(0xBF882088)));
volatile uint32_t        ETHPMCSINV __attribute__((section("sfrs"),address(0xBF88208C)));
#define ETHPMO ETHPMO
volatile uint32_t   ETHPMO __attribute__((section("sfrs"), address(0xBF882090)));
typedef union {
  struct {
    uint32_t PMO:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHPMObits_t;
volatile __ETHPMObits_t ETHPMObits __asm__ ("ETHPMO") __attribute__((section("sfrs"), address(0xBF882090)));
volatile uint32_t        ETHPMOCLR __attribute__((section("sfrs"),address(0xBF882094)));
volatile uint32_t        ETHPMOSET __attribute__((section("sfrs"),address(0xBF882098)));
volatile uint32_t        ETHPMOINV __attribute__((section("sfrs"),address(0xBF88209C)));
#define ETHRXFC ETHRXFC
volatile uint32_t   ETHRXFC __attribute__((section("sfrs"), address(0xBF8820A0)));
typedef union {
  struct {
    uint32_t BCEN:1;
    uint32_t MCEN:1;
    uint32_t NOTMEEN:1;
    uint32_t UCEN:1;
    uint32_t RUNTEN:1;
    uint32_t RUNTERREN:1;
    uint32_t CRCOKEN:1;
    uint32_t CRCERREN:1;
    uint32_t PMMODE:4;
    uint32_t NOTPM:1;
    uint32_t :1;
    uint32_t MPEN:1;
    uint32_t HTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXFCbits_t;
volatile __ETHRXFCbits_t ETHRXFCbits __asm__ ("ETHRXFC") __attribute__((section("sfrs"), address(0xBF8820A0)));
volatile uint32_t        ETHRXFCCLR __attribute__((section("sfrs"),address(0xBF8820A4)));
volatile uint32_t        ETHRXFCSET __attribute__((section("sfrs"),address(0xBF8820A8)));
volatile uint32_t        ETHRXFCINV __attribute__((section("sfrs"),address(0xBF8820AC)));
#define ETHRXWM ETHRXWM
volatile uint32_t   ETHRXWM __attribute__((section("sfrs"), address(0xBF8820B0)));
typedef union {
  struct {
    uint32_t RXEWM:8;
    uint32_t :8;
    uint32_t RXFWM:8;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXWMbits_t;
volatile __ETHRXWMbits_t ETHRXWMbits __asm__ ("ETHRXWM") __attribute__((section("sfrs"), address(0xBF8820B0)));
volatile uint32_t        ETHRXWMCLR __attribute__((section("sfrs"),address(0xBF8820B4)));
volatile uint32_t        ETHRXWMSET __attribute__((section("sfrs"),address(0xBF8820B8)));
volatile uint32_t        ETHRXWMINV __attribute__((section("sfrs"),address(0xBF8820BC)));
#define ETHIEN ETHIEN
volatile uint32_t   ETHIEN __attribute__((section("sfrs"), address(0xBF8820C0)));
typedef union {
  struct {
    uint32_t RXOVFLWIE:1;
    uint32_t RXBUFNAIE:1;
    uint32_t TXABORTIE:1;
    uint32_t TXDONEIE:1;
    uint32_t :1;
    uint32_t RXACTIE:1;
    uint32_t PKTPENDIE:1;
    uint32_t RXDONEIE:1;
    uint32_t FWMARKIE:1;
    uint32_t EWMARKIE:1;
    uint32_t :3;
    uint32_t RXBUSEIE:1;
    uint32_t TXBUSEIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHIENbits_t;
volatile __ETHIENbits_t ETHIENbits __asm__ ("ETHIEN") __attribute__((section("sfrs"), address(0xBF8820C0)));
volatile uint32_t        ETHIENCLR __attribute__((section("sfrs"),address(0xBF8820C4)));
volatile uint32_t        ETHIENSET __attribute__((section("sfrs"),address(0xBF8820C8)));
volatile uint32_t        ETHIENINV __attribute__((section("sfrs"),address(0xBF8820CC)));
#define ETHIRQ ETHIRQ
volatile uint32_t   ETHIRQ __attribute__((section("sfrs"), address(0xBF8820D0)));
typedef union {
  struct {
    uint32_t RXOVFLW:1;
    uint32_t RXBUFNA:1;
    uint32_t TXABORT:1;
    uint32_t TXDONE:1;
    uint32_t :1;
    uint32_t RXACT:1;
    uint32_t PKTPEND:1;
    uint32_t RXDONE:1;
    uint32_t FWMARK:1;
    uint32_t EWMARK:1;
    uint32_t :3;
    uint32_t RXBUSE:1;
    uint32_t TXBUSE:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHIRQbits_t;
volatile __ETHIRQbits_t ETHIRQbits __asm__ ("ETHIRQ") __attribute__((section("sfrs"), address(0xBF8820D0)));
volatile uint32_t        ETHIRQCLR __attribute__((section("sfrs"),address(0xBF8820D4)));
volatile uint32_t        ETHIRQSET __attribute__((section("sfrs"),address(0xBF8820D8)));
volatile uint32_t        ETHIRQINV __attribute__((section("sfrs"),address(0xBF8820DC)));
#define ETHSTAT ETHSTAT
volatile uint32_t   ETHSTAT __attribute__((section("sfrs"), address(0xBF8820E0)));
typedef union {
  struct {
    uint32_t :5;
    uint32_t RXBUSY:1;
    uint32_t TXBUSY:1;
    uint32_t BUSY:1;
    uint32_t :8;
    uint32_t BUFCNT:8;
  };
  struct {
    uint32_t :7;
    uint32_t ETHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHSTATbits_t;
volatile __ETHSTATbits_t ETHSTATbits __asm__ ("ETHSTAT") __attribute__((section("sfrs"), address(0xBF8820E0)));
volatile uint32_t        ETHSTATCLR __attribute__((section("sfrs"),address(0xBF8820E4)));
volatile uint32_t        ETHSTATSET __attribute__((section("sfrs"),address(0xBF8820E8)));
volatile uint32_t        ETHSTATINV __attribute__((section("sfrs"),address(0xBF8820EC)));
#define ETHRXOVFLOW ETHRXOVFLOW
volatile uint32_t   ETHRXOVFLOW __attribute__((section("sfrs"), address(0xBF882100)));
typedef union {
  struct {
    uint32_t RXOVFLWCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXOVFLOWbits_t;
volatile __ETHRXOVFLOWbits_t ETHRXOVFLOWbits __asm__ ("ETHRXOVFLOW") __attribute__((section("sfrs"), address(0xBF882100)));
volatile uint32_t        ETHRXOVFLOWCLR __attribute__((section("sfrs"),address(0xBF882104)));
volatile uint32_t        ETHRXOVFLOWSET __attribute__((section("sfrs"),address(0xBF882108)));
volatile uint32_t        ETHRXOVFLOWINV __attribute__((section("sfrs"),address(0xBF88210C)));
#define ETHFRMTXOK ETHFRMTXOK
volatile uint32_t   ETHFRMTXOK __attribute__((section("sfrs"), address(0xBF882110)));
typedef union {
  struct {
    uint32_t FRMTXOKCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHFRMTXOKbits_t;
volatile __ETHFRMTXOKbits_t ETHFRMTXOKbits __asm__ ("ETHFRMTXOK") __attribute__((section("sfrs"), address(0xBF882110)));
volatile uint32_t        ETHFRMTXOKCLR __attribute__((section("sfrs"),address(0xBF882114)));
volatile uint32_t        ETHFRMTXOKSET __attribute__((section("sfrs"),address(0xBF882118)));
volatile uint32_t        ETHFRMTXOKINV __attribute__((section("sfrs"),address(0xBF88211C)));
#define ETHSCOLFRM ETHSCOLFRM
volatile uint32_t   ETHSCOLFRM __attribute__((section("sfrs"), address(0xBF882120)));
typedef union {
  struct {
    uint32_t SCOLFRMCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHSCOLFRMbits_t;
volatile __ETHSCOLFRMbits_t ETHSCOLFRMbits __asm__ ("ETHSCOLFRM") __attribute__((section("sfrs"), address(0xBF882120)));
volatile uint32_t        ETHSCOLFRMCLR __attribute__((section("sfrs"),address(0xBF882124)));
volatile uint32_t        ETHSCOLFRMSET __attribute__((section("sfrs"),address(0xBF882128)));
volatile uint32_t        ETHSCOLFRMINV __attribute__((section("sfrs"),address(0xBF88212C)));
#define ETHMCOLFRM ETHMCOLFRM
volatile uint32_t   ETHMCOLFRM __attribute__((section("sfrs"), address(0xBF882130)));
typedef union {
  struct {
    uint32_t MCOLFRMCNT:16;
  };
  struct {
    uint32_t MCOLFRM_CNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHMCOLFRMbits_t;
volatile __ETHMCOLFRMbits_t ETHMCOLFRMbits __asm__ ("ETHMCOLFRM") __attribute__((section("sfrs"), address(0xBF882130)));
volatile uint32_t        ETHMCOLFRMCLR __attribute__((section("sfrs"),address(0xBF882134)));
volatile uint32_t        ETHMCOLFRMSET __attribute__((section("sfrs"),address(0xBF882138)));
volatile uint32_t        ETHMCOLFRMINV __attribute__((section("sfrs"),address(0xBF88213C)));
#define ETHFRMRXOK ETHFRMRXOK
volatile uint32_t   ETHFRMRXOK __attribute__((section("sfrs"), address(0xBF882140)));
typedef union {
  struct {
    uint32_t FRMRXOKCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHFRMRXOKbits_t;
volatile __ETHFRMRXOKbits_t ETHFRMRXOKbits __asm__ ("ETHFRMRXOK") __attribute__((section("sfrs"), address(0xBF882140)));
volatile uint32_t        ETHFRMRXOKCLR __attribute__((section("sfrs"),address(0xBF882144)));
volatile uint32_t        ETHFRMRXOKSET __attribute__((section("sfrs"),address(0xBF882148)));
volatile uint32_t        ETHFRMRXOKINV __attribute__((section("sfrs"),address(0xBF88214C)));
#define ETHFCSERR ETHFCSERR
volatile uint32_t   ETHFCSERR __attribute__((section("sfrs"), address(0xBF882150)));
typedef union {
  struct {
    uint32_t FCSERRCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHFCSERRbits_t;
volatile __ETHFCSERRbits_t ETHFCSERRbits __asm__ ("ETHFCSERR") __attribute__((section("sfrs"), address(0xBF882150)));
volatile uint32_t        ETHFCSERRCLR __attribute__((section("sfrs"),address(0xBF882154)));
volatile uint32_t        ETHFCSERRSET __attribute__((section("sfrs"),address(0xBF882158)));
volatile uint32_t        ETHFCSERRINV __attribute__((section("sfrs"),address(0xBF88215C)));
#define ETHALGNERR ETHALGNERR
volatile uint32_t   ETHALGNERR __attribute__((section("sfrs"), address(0xBF882160)));
typedef union {
  struct {
    uint32_t ALGNERRCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHALGNERRbits_t;
volatile __ETHALGNERRbits_t ETHALGNERRbits __asm__ ("ETHALGNERR") __attribute__((section("sfrs"), address(0xBF882160)));
volatile uint32_t        ETHALGNERRCLR __attribute__((section("sfrs"),address(0xBF882164)));
volatile uint32_t        ETHALGNERRSET __attribute__((section("sfrs"),address(0xBF882168)));
volatile uint32_t        ETHALGNERRINV __attribute__((section("sfrs"),address(0xBF88216C)));
#define EMAC1CFG1 EMAC1CFG1
volatile uint32_t   EMAC1CFG1 __attribute__((section("sfrs"), address(0xBF882200)));
typedef union {
  struct {
    uint32_t RXENABLE:1;
    uint32_t PASSALL:1;
    uint32_t RXPAUSE:1;
    uint32_t TXPAUSE:1;
    uint32_t LOOPBACK:1;
    uint32_t :3;
    uint32_t RESETTFUN:1;
    uint32_t RESETTMCS:1;
    uint32_t RESETRFUN:1;
    uint32_t RESETRMCS:1;
    uint32_t :2;
    uint32_t SIMRESET:1;
    uint32_t SOFTRESET:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1CFG1bits_t;
volatile __EMAC1CFG1bits_t EMAC1CFG1bits __asm__ ("EMAC1CFG1") __attribute__((section("sfrs"), address(0xBF882200)));
#define EMACxCFG1 EMACxCFG1
volatile uint32_t   EMACxCFG1 __attribute__((section("sfrs"), address(0xBF882200)));
typedef union {
  struct {
    uint32_t RXENABLE:1;
    uint32_t PASSALL:1;
    uint32_t RXPAUSE:1;
    uint32_t TXPAUSE:1;
    uint32_t LOOPBACK:1;
    uint32_t :3;
    uint32_t RESETTFUN:1;
    uint32_t RESETTMCS:1;
    uint32_t RESETRFUN:1;
    uint32_t RESETRMCS:1;
    uint32_t :2;
    uint32_t SIMRESET:1;
    uint32_t SOFTRESET:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxCFG1bits_t;
volatile __EMACxCFG1bits_t EMACxCFG1bits __asm__ ("EMACxCFG1") __attribute__((section("sfrs"), address(0xBF882200)));
volatile uint32_t        EMAC1CFG1CLR __attribute__((section("sfrs"),address(0xBF882204)));
volatile uint32_t        EMACxCFG1CLR __attribute__((section("sfrs"),address(0xBF882204)));
volatile uint32_t        EMAC1CFG1SET __attribute__((section("sfrs"),address(0xBF882208)));
volatile uint32_t        EMACxCFG1SET __attribute__((section("sfrs"),address(0xBF882208)));
volatile uint32_t        EMAC1CFG1INV __attribute__((section("sfrs"),address(0xBF88220C)));
volatile uint32_t        EMACxCFG1INV __attribute__((section("sfrs"),address(0xBF88220C)));
#define EMAC1CFG2 EMAC1CFG2
volatile uint32_t   EMAC1CFG2 __attribute__((section("sfrs"), address(0xBF882210)));
typedef union {
  struct {
    uint32_t FULLDPLX:1;
    uint32_t LENGTHCK:1;
    uint32_t HUGEFRM:1;
    uint32_t DELAYCRC:1;
    uint32_t CRCENABLE:1;
    uint32_t PADENABLE:1;
    uint32_t VLANPAD:1;
    uint32_t AUTOPAD:1;
    uint32_t PUREPRE:1;
    uint32_t LONGPRE:1;
    uint32_t :2;
    uint32_t NOBKOFF:1;
    uint32_t BPNOBKOFF:1;
    uint32_t EXCESSDFR:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1CFG2bits_t;
volatile __EMAC1CFG2bits_t EMAC1CFG2bits __asm__ ("EMAC1CFG2") __attribute__((section("sfrs"), address(0xBF882210)));
#define EMACxCFG2 EMACxCFG2
volatile uint32_t   EMACxCFG2 __attribute__((section("sfrs"), address(0xBF882210)));
typedef union {
  struct {
    uint32_t FULLDPLX:1;
    uint32_t LENGTHCK:1;
    uint32_t HUGEFRM:1;
    uint32_t DELAYCRC:1;
    uint32_t CRCENABLE:1;
    uint32_t PADENABLE:1;
    uint32_t VLANPAD:1;
    uint32_t AUTOPAD:1;
    uint32_t PUREPRE:1;
    uint32_t LONGPRE:1;
    uint32_t :2;
    uint32_t NOBKOFF:1;
    uint32_t BPNOBKOFF:1;
    uint32_t EXCESSDFR:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxCFG2bits_t;
volatile __EMACxCFG2bits_t EMACxCFG2bits __asm__ ("EMACxCFG2") __attribute__((section("sfrs"), address(0xBF882210)));
volatile uint32_t        EMAC1CFG2CLR __attribute__((section("sfrs"),address(0xBF882214)));
volatile uint32_t        EMACxCFG2CLR __attribute__((section("sfrs"),address(0xBF882214)));
volatile uint32_t        EMAC1CFG2SET __attribute__((section("sfrs"),address(0xBF882218)));
volatile uint32_t        EMACxCFG2SET __attribute__((section("sfrs"),address(0xBF882218)));
volatile uint32_t        EMAC1CFG2INV __attribute__((section("sfrs"),address(0xBF88221C)));
volatile uint32_t        EMACxCFG2INV __attribute__((section("sfrs"),address(0xBF88221C)));
#define EMAC1IPGT EMAC1IPGT
volatile uint32_t   EMAC1IPGT __attribute__((section("sfrs"), address(0xBF882220)));
typedef union {
  struct {
    uint32_t B2BIPKTGP:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1IPGTbits_t;
volatile __EMAC1IPGTbits_t EMAC1IPGTbits __asm__ ("EMAC1IPGT") __attribute__((section("sfrs"), address(0xBF882220)));
#define EMACxIPGT EMACxIPGT
volatile uint32_t   EMACxIPGT __attribute__((section("sfrs"), address(0xBF882220)));
typedef union {
  struct {
    uint32_t B2BIPKTGP:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxIPGTbits_t;
volatile __EMACxIPGTbits_t EMACxIPGTbits __asm__ ("EMACxIPGT") __attribute__((section("sfrs"), address(0xBF882220)));
volatile uint32_t        EMAC1IPGTCLR __attribute__((section("sfrs"),address(0xBF882224)));
volatile uint32_t        EMACxIPGTCLR __attribute__((section("sfrs"),address(0xBF882224)));
volatile uint32_t        EMAC1IPGTSET __attribute__((section("sfrs"),address(0xBF882228)));
volatile uint32_t        EMACxIPGTSET __attribute__((section("sfrs"),address(0xBF882228)));
volatile uint32_t        EMAC1IPGTINV __attribute__((section("sfrs"),address(0xBF88222C)));
volatile uint32_t        EMACxIPGTINV __attribute__((section("sfrs"),address(0xBF88222C)));
#define EMAC1IPGR EMAC1IPGR
volatile uint32_t   EMAC1IPGR __attribute__((section("sfrs"), address(0xBF882230)));
typedef union {
  struct {
    uint32_t NB2BIPKTGP2:7;
    uint32_t :1;
    uint32_t NB2BIPKTGP1:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1IPGRbits_t;
volatile __EMAC1IPGRbits_t EMAC1IPGRbits __asm__ ("EMAC1IPGR") __attribute__((section("sfrs"), address(0xBF882230)));
#define EMACxIPGR EMACxIPGR
volatile uint32_t   EMACxIPGR __attribute__((section("sfrs"), address(0xBF882230)));
typedef union {
  struct {
    uint32_t NB2BIPKTGP2:7;
    uint32_t :1;
    uint32_t NB2BIPKTGP1:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxIPGRbits_t;
volatile __EMACxIPGRbits_t EMACxIPGRbits __asm__ ("EMACxIPGR") __attribute__((section("sfrs"), address(0xBF882230)));
volatile uint32_t        EMAC1IPGRCLR __attribute__((section("sfrs"),address(0xBF882234)));
volatile uint32_t        EMACxIPGRCLR __attribute__((section("sfrs"),address(0xBF882234)));
volatile uint32_t        EMAC1IPGRSET __attribute__((section("sfrs"),address(0xBF882238)));
volatile uint32_t        EMACxIPGRSET __attribute__((section("sfrs"),address(0xBF882238)));
volatile uint32_t        EMAC1IPGRINV __attribute__((section("sfrs"),address(0xBF88223C)));
volatile uint32_t        EMACxIPGRINV __attribute__((section("sfrs"),address(0xBF88223C)));
#define EMAC1CLRT EMAC1CLRT
volatile uint32_t   EMAC1CLRT __attribute__((section("sfrs"), address(0xBF882240)));
typedef union {
  struct {
    uint32_t RETX:4;
    uint32_t :4;
    uint32_t CWINDOW:6;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1CLRTbits_t;
volatile __EMAC1CLRTbits_t EMAC1CLRTbits __asm__ ("EMAC1CLRT") __attribute__((section("sfrs"), address(0xBF882240)));
#define EMACxCLRT EMACxCLRT
volatile uint32_t   EMACxCLRT __attribute__((section("sfrs"), address(0xBF882240)));
typedef union {
  struct {
    uint32_t RETX:4;
    uint32_t :4;
    uint32_t CWINDOW:6;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxCLRTbits_t;
volatile __EMACxCLRTbits_t EMACxCLRTbits __asm__ ("EMACxCLRT") __attribute__((section("sfrs"), address(0xBF882240)));
volatile uint32_t        EMAC1CLRTCLR __attribute__((section("sfrs"),address(0xBF882244)));
volatile uint32_t        EMACxCLRTCLR __attribute__((section("sfrs"),address(0xBF882244)));
volatile uint32_t        EMAC1CLRTSET __attribute__((section("sfrs"),address(0xBF882248)));
volatile uint32_t        EMACxCLRTSET __attribute__((section("sfrs"),address(0xBF882248)));
volatile uint32_t        EMAC1CLRTINV __attribute__((section("sfrs"),address(0xBF88224C)));
volatile uint32_t        EMACxCLRTINV __attribute__((section("sfrs"),address(0xBF88224C)));
#define EMAC1MAXF EMAC1MAXF
volatile uint32_t   EMAC1MAXF __attribute__((section("sfrs"), address(0xBF882250)));
typedef union {
  struct {
    uint32_t MACMAXF:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MAXFbits_t;
volatile __EMAC1MAXFbits_t EMAC1MAXFbits __asm__ ("EMAC1MAXF") __attribute__((section("sfrs"), address(0xBF882250)));
#define EMACxMAXF EMACxMAXF
volatile uint32_t   EMACxMAXF __attribute__((section("sfrs"), address(0xBF882250)));
typedef union {
  struct {
    uint32_t MACMAXF:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMAXFbits_t;
volatile __EMACxMAXFbits_t EMACxMAXFbits __asm__ ("EMACxMAXF") __attribute__((section("sfrs"), address(0xBF882250)));
volatile uint32_t        EMAC1MAXFCLR __attribute__((section("sfrs"),address(0xBF882254)));
volatile uint32_t        EMACxMAXFCLR __attribute__((section("sfrs"),address(0xBF882254)));
volatile uint32_t        EMAC1MAXFSET __attribute__((section("sfrs"),address(0xBF882258)));
volatile uint32_t        EMACxMAXFSET __attribute__((section("sfrs"),address(0xBF882258)));
volatile uint32_t        EMAC1MAXFINV __attribute__((section("sfrs"),address(0xBF88225C)));
volatile uint32_t        EMACxMAXFINV __attribute__((section("sfrs"),address(0xBF88225C)));
#define EMAC1SUPP EMAC1SUPP
volatile uint32_t   EMAC1SUPP __attribute__((section("sfrs"), address(0xBF882260)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SPEEDRMII:1;
    uint32_t :2;
    uint32_t RESETRMII:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SUPPbits_t;
volatile __EMAC1SUPPbits_t EMAC1SUPPbits __asm__ ("EMAC1SUPP") __attribute__((section("sfrs"), address(0xBF882260)));
#define EMACxSUPP EMACxSUPP
volatile uint32_t   EMACxSUPP __attribute__((section("sfrs"), address(0xBF882260)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SPEEDRMII:1;
    uint32_t :2;
    uint32_t RESETRMII:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSUPPbits_t;
volatile __EMACxSUPPbits_t EMACxSUPPbits __asm__ ("EMACxSUPP") __attribute__((section("sfrs"), address(0xBF882260)));
volatile uint32_t        EMAC1SUPPCLR __attribute__((section("sfrs"),address(0xBF882264)));
volatile uint32_t        EMACxSUPPCLR __attribute__((section("sfrs"),address(0xBF882264)));
volatile uint32_t        EMAC1SUPPSET __attribute__((section("sfrs"),address(0xBF882268)));
volatile uint32_t        EMACxSUPPSET __attribute__((section("sfrs"),address(0xBF882268)));
volatile uint32_t        EMAC1SUPPINV __attribute__((section("sfrs"),address(0xBF88226C)));
volatile uint32_t        EMACxSUPPINV __attribute__((section("sfrs"),address(0xBF88226C)));
#define EMAC1TEST EMAC1TEST
volatile uint32_t   EMAC1TEST __attribute__((section("sfrs"), address(0xBF882270)));
typedef union {
  struct {
    uint32_t SHRTQNTA:1;
    uint32_t TESTPAUSE:1;
    uint32_t TESTBP:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1TESTbits_t;
volatile __EMAC1TESTbits_t EMAC1TESTbits __asm__ ("EMAC1TEST") __attribute__((section("sfrs"), address(0xBF882270)));
#define EMACxTEST EMACxTEST
volatile uint32_t   EMACxTEST __attribute__((section("sfrs"), address(0xBF882270)));
typedef union {
  struct {
    uint32_t SHRTQNTA:1;
    uint32_t TESTPAUSE:1;
    uint32_t TESTBP:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxTESTbits_t;
volatile __EMACxTESTbits_t EMACxTESTbits __asm__ ("EMACxTEST") __attribute__((section("sfrs"), address(0xBF882270)));
volatile uint32_t        EMAC1TESTCLR __attribute__((section("sfrs"),address(0xBF882274)));
volatile uint32_t        EMACxTESTCLR __attribute__((section("sfrs"),address(0xBF882274)));
volatile uint32_t        EMAC1TESTSET __attribute__((section("sfrs"),address(0xBF882278)));
volatile uint32_t        EMACxTESTSET __attribute__((section("sfrs"),address(0xBF882278)));
volatile uint32_t        EMAC1TESTINV __attribute__((section("sfrs"),address(0xBF88227C)));
volatile uint32_t        EMACxTESTINV __attribute__((section("sfrs"),address(0xBF88227C)));
#define EMAC1MCFG EMAC1MCFG
volatile uint32_t   EMAC1MCFG __attribute__((section("sfrs"), address(0xBF882280)));
typedef union {
  struct {
    uint32_t SCANINC:1;
    uint32_t NOPRE:1;
    uint32_t CLKSEL:4;
    uint32_t :9;
    uint32_t RESETMGMT:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MCFGbits_t;
volatile __EMAC1MCFGbits_t EMAC1MCFGbits __asm__ ("EMAC1MCFG") __attribute__((section("sfrs"), address(0xBF882280)));
#define EMACxMCFG EMACxMCFG
volatile uint32_t   EMACxMCFG __attribute__((section("sfrs"), address(0xBF882280)));
typedef union {
  struct {
    uint32_t SCANINC:1;
    uint32_t NOPRE:1;
    uint32_t CLKSEL:4;
    uint32_t :9;
    uint32_t RESETMGMT:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMCFGbits_t;
volatile __EMACxMCFGbits_t EMACxMCFGbits __asm__ ("EMACxMCFG") __attribute__((section("sfrs"), address(0xBF882280)));
volatile uint32_t        EMAC1MCFGCLR __attribute__((section("sfrs"),address(0xBF882284)));
volatile uint32_t        EMACxMCFGCLR __attribute__((section("sfrs"),address(0xBF882284)));
volatile uint32_t        EMAC1MCFGSET __attribute__((section("sfrs"),address(0xBF882288)));
volatile uint32_t        EMACxMCFGSET __attribute__((section("sfrs"),address(0xBF882288)));
volatile uint32_t        EMAC1MCFGINV __attribute__((section("sfrs"),address(0xBF88228C)));
volatile uint32_t        EMACxMCFGINV __attribute__((section("sfrs"),address(0xBF88228C)));
#define EMAC1MCMD EMAC1MCMD
volatile uint32_t   EMAC1MCMD __attribute__((section("sfrs"), address(0xBF882290)));
typedef union {
  struct {
    uint32_t READ:1;
    uint32_t SCAN:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MCMDbits_t;
volatile __EMAC1MCMDbits_t EMAC1MCMDbits __asm__ ("EMAC1MCMD") __attribute__((section("sfrs"), address(0xBF882290)));
#define EMACxMCMD EMACxMCMD
volatile uint32_t   EMACxMCMD __attribute__((section("sfrs"), address(0xBF882290)));
typedef union {
  struct {
    uint32_t READ:1;
    uint32_t SCAN:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMCMDbits_t;
volatile __EMACxMCMDbits_t EMACxMCMDbits __asm__ ("EMACxMCMD") __attribute__((section("sfrs"), address(0xBF882290)));
volatile uint32_t        EMAC1MCMDCLR __attribute__((section("sfrs"),address(0xBF882294)));
volatile uint32_t        EMACxMCMDCLR __attribute__((section("sfrs"),address(0xBF882294)));
volatile uint32_t        EMAC1MCMDSET __attribute__((section("sfrs"),address(0xBF882298)));
volatile uint32_t        EMACxMCMDSET __attribute__((section("sfrs"),address(0xBF882298)));
volatile uint32_t        EMAC1MCMDINV __attribute__((section("sfrs"),address(0xBF88229C)));
volatile uint32_t        EMACxMCMDINV __attribute__((section("sfrs"),address(0xBF88229C)));
#define EMAC1MADR EMAC1MADR
volatile uint32_t   EMAC1MADR __attribute__((section("sfrs"), address(0xBF8822A0)));
typedef union {
  struct {
    uint32_t REGADDR:5;
    uint32_t :3;
    uint32_t PHYADDR:5;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MADRbits_t;
volatile __EMAC1MADRbits_t EMAC1MADRbits __asm__ ("EMAC1MADR") __attribute__((section("sfrs"), address(0xBF8822A0)));
#define EMACxMADR EMACxMADR
volatile uint32_t   EMACxMADR __attribute__((section("sfrs"), address(0xBF8822A0)));
typedef union {
  struct {
    uint32_t REGADDR:5;
    uint32_t :3;
    uint32_t PHYADDR:5;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMADRbits_t;
volatile __EMACxMADRbits_t EMACxMADRbits __asm__ ("EMACxMADR") __attribute__((section("sfrs"), address(0xBF8822A0)));
volatile uint32_t        EMAC1MADRCLR __attribute__((section("sfrs"),address(0xBF8822A4)));
volatile uint32_t        EMACxMADRCLR __attribute__((section("sfrs"),address(0xBF8822A4)));
volatile uint32_t        EMAC1MADRSET __attribute__((section("sfrs"),address(0xBF8822A8)));
volatile uint32_t        EMACxMADRSET __attribute__((section("sfrs"),address(0xBF8822A8)));
volatile uint32_t        EMAC1MADRINV __attribute__((section("sfrs"),address(0xBF8822AC)));
volatile uint32_t        EMACxMADRINV __attribute__((section("sfrs"),address(0xBF8822AC)));
#define EMAC1MWTD EMAC1MWTD
volatile uint32_t   EMAC1MWTD __attribute__((section("sfrs"), address(0xBF8822B0)));
typedef union {
  struct {
    uint32_t MWTD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MWTDbits_t;
volatile __EMAC1MWTDbits_t EMAC1MWTDbits __asm__ ("EMAC1MWTD") __attribute__((section("sfrs"), address(0xBF8822B0)));
#define EMACxMWTD EMACxMWTD
volatile uint32_t   EMACxMWTD __attribute__((section("sfrs"), address(0xBF8822B0)));
typedef union {
  struct {
    uint32_t MWTD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMWTDbits_t;
volatile __EMACxMWTDbits_t EMACxMWTDbits __asm__ ("EMACxMWTD") __attribute__((section("sfrs"), address(0xBF8822B0)));
volatile uint32_t        EMAC1MWTDCLR __attribute__((section("sfrs"),address(0xBF8822B4)));
volatile uint32_t        EMACxMWTDCLR __attribute__((section("sfrs"),address(0xBF8822B4)));
volatile uint32_t        EMAC1MWTDSET __attribute__((section("sfrs"),address(0xBF8822B8)));
volatile uint32_t        EMACxMWTDSET __attribute__((section("sfrs"),address(0xBF8822B8)));
volatile uint32_t        EMAC1MWTDINV __attribute__((section("sfrs"),address(0xBF8822BC)));
volatile uint32_t        EMACxMWTDINV __attribute__((section("sfrs"),address(0xBF8822BC)));
#define EMAC1MRDD EMAC1MRDD
volatile uint32_t   EMAC1MRDD __attribute__((section("sfrs"), address(0xBF8822C0)));
typedef union {
  struct {
    uint32_t MRDD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MRDDbits_t;
volatile __EMAC1MRDDbits_t EMAC1MRDDbits __asm__ ("EMAC1MRDD") __attribute__((section("sfrs"), address(0xBF8822C0)));
#define EMACxMRDD EMACxMRDD
volatile uint32_t   EMACxMRDD __attribute__((section("sfrs"), address(0xBF8822C0)));
typedef union {
  struct {
    uint32_t MRDD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMRDDbits_t;
volatile __EMACxMRDDbits_t EMACxMRDDbits __asm__ ("EMACxMRDD") __attribute__((section("sfrs"), address(0xBF8822C0)));
volatile uint32_t        EMAC1MRDDCLR __attribute__((section("sfrs"),address(0xBF8822C4)));
volatile uint32_t        EMACxMRDDCLR __attribute__((section("sfrs"),address(0xBF8822C4)));
volatile uint32_t        EMAC1MRDDSET __attribute__((section("sfrs"),address(0xBF8822C8)));
volatile uint32_t        EMACxMRDDSET __attribute__((section("sfrs"),address(0xBF8822C8)));
volatile uint32_t        EMAC1MRDDINV __attribute__((section("sfrs"),address(0xBF8822CC)));
volatile uint32_t        EMACxMRDDINV __attribute__((section("sfrs"),address(0xBF8822CC)));
#define EMAC1MIND EMAC1MIND
volatile uint32_t   EMAC1MIND __attribute__((section("sfrs"), address(0xBF8822D0)));
typedef union {
  struct {
    uint32_t MIIMBUSY:1;
    uint32_t SCAN:1;
    uint32_t NOTVALID:1;
    uint32_t LINKFAIL:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MINDbits_t;
volatile __EMAC1MINDbits_t EMAC1MINDbits __asm__ ("EMAC1MIND") __attribute__((section("sfrs"), address(0xBF8822D0)));
#define EMACxMIND EMACxMIND
volatile uint32_t   EMACxMIND __attribute__((section("sfrs"), address(0xBF8822D0)));
typedef union {
  struct {
    uint32_t MIIMBUSY:1;
    uint32_t SCAN:1;
    uint32_t NOTVALID:1;
    uint32_t LINKFAIL:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMINDbits_t;
volatile __EMACxMINDbits_t EMACxMINDbits __asm__ ("EMACxMIND") __attribute__((section("sfrs"), address(0xBF8822D0)));
volatile uint32_t        EMAC1MINDCLR __attribute__((section("sfrs"),address(0xBF8822D4)));
volatile uint32_t        EMACxMINDCLR __attribute__((section("sfrs"),address(0xBF8822D4)));
volatile uint32_t        EMAC1MINDSET __attribute__((section("sfrs"),address(0xBF8822D8)));
volatile uint32_t        EMACxMINDSET __attribute__((section("sfrs"),address(0xBF8822D8)));
volatile uint32_t        EMAC1MINDINV __attribute__((section("sfrs"),address(0xBF8822DC)));
volatile uint32_t        EMACxMINDINV __attribute__((section("sfrs"),address(0xBF8822DC)));
#define EMAC1SA0 EMAC1SA0
volatile uint32_t   EMAC1SA0 __attribute__((section("sfrs"), address(0xBF882300)));
typedef union {
  struct {
    uint32_t STNADDR5:8;
    uint32_t STNADDR6:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SA0bits_t;
volatile __EMAC1SA0bits_t EMAC1SA0bits __asm__ ("EMAC1SA0") __attribute__((section("sfrs"), address(0xBF882300)));
#define EMACxSA0 EMACxSA0
volatile uint32_t   EMACxSA0 __attribute__((section("sfrs"), address(0xBF882300)));
typedef union {
  struct {
    uint32_t STNADDR5:8;
    uint32_t STNADDR6:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSA0bits_t;
volatile __EMACxSA0bits_t EMACxSA0bits __asm__ ("EMACxSA0") __attribute__((section("sfrs"), address(0xBF882300)));
volatile uint32_t        EMAC1SA0CLR __attribute__((section("sfrs"),address(0xBF882304)));
volatile uint32_t        EMACxSA0CLR __attribute__((section("sfrs"),address(0xBF882304)));
volatile uint32_t        EMAC1SA0SET __attribute__((section("sfrs"),address(0xBF882308)));
volatile uint32_t        EMACxSA0SET __attribute__((section("sfrs"),address(0xBF882308)));
volatile uint32_t        EMAC1SA0INV __attribute__((section("sfrs"),address(0xBF88230C)));
volatile uint32_t        EMACxSA0INV __attribute__((section("sfrs"),address(0xBF88230C)));
#define EMAC1SA1 EMAC1SA1
volatile uint32_t   EMAC1SA1 __attribute__((section("sfrs"), address(0xBF882310)));
typedef union {
  struct {
    uint32_t STNADDR3:8;
    uint32_t STNADDR4:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SA1bits_t;
volatile __EMAC1SA1bits_t EMAC1SA1bits __asm__ ("EMAC1SA1") __attribute__((section("sfrs"), address(0xBF882310)));
#define EMACxSA1 EMACxSA1
volatile uint32_t   EMACxSA1 __attribute__((section("sfrs"), address(0xBF882310)));
typedef union {
  struct {
    uint32_t STNADDR3:8;
    uint32_t STNADDR4:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSA1bits_t;
volatile __EMACxSA1bits_t EMACxSA1bits __asm__ ("EMACxSA1") __attribute__((section("sfrs"), address(0xBF882310)));
volatile uint32_t        EMAC1SA1CLR __attribute__((section("sfrs"),address(0xBF882314)));
volatile uint32_t        EMACxSA1CLR __attribute__((section("sfrs"),address(0xBF882314)));
volatile uint32_t        EMAC1SA1SET __attribute__((section("sfrs"),address(0xBF882318)));
volatile uint32_t        EMACxSA1SET __attribute__((section("sfrs"),address(0xBF882318)));
volatile uint32_t        EMAC1SA1INV __attribute__((section("sfrs"),address(0xBF88231C)));
volatile uint32_t        EMACxSA1INV __attribute__((section("sfrs"),address(0xBF88231C)));
#define EMAC1SA2 EMAC1SA2
volatile uint32_t   EMAC1SA2 __attribute__((section("sfrs"), address(0xBF882320)));
typedef union {
  struct {
    uint32_t STNADDR1:8;
    uint32_t STNADDR2:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SA2bits_t;
volatile __EMAC1SA2bits_t EMAC1SA2bits __asm__ ("EMAC1SA2") __attribute__((section("sfrs"), address(0xBF882320)));
#define EMACxSA2 EMACxSA2
volatile uint32_t   EMACxSA2 __attribute__((section("sfrs"), address(0xBF882320)));
typedef union {
  struct {
    uint32_t STNADDR1:8;
    uint32_t STNADDR2:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSA2bits_t;
volatile __EMACxSA2bits_t EMACxSA2bits __asm__ ("EMACxSA2") __attribute__((section("sfrs"), address(0xBF882320)));
volatile uint32_t        EMAC1SA2CLR __attribute__((section("sfrs"),address(0xBF882324)));
volatile uint32_t        EMACxSA2CLR __attribute__((section("sfrs"),address(0xBF882324)));
volatile uint32_t        EMAC1SA2SET __attribute__((section("sfrs"),address(0xBF882328)));
volatile uint32_t        EMACxSA2SET __attribute__((section("sfrs"),address(0xBF882328)));
volatile uint32_t        EMAC1SA2INV __attribute__((section("sfrs"),address(0xBF88232C)));
volatile uint32_t        EMACxSA2INV __attribute__((section("sfrs"),address(0xBF88232C)));
#define USBCRCON USBCRCON
volatile uint32_t   USBCRCON __attribute__((section("sfrs"), address(0xBF884000)));
typedef struct {
  uint32_t USBWKUPEN:1;
  uint32_t USBRIE:1;
  uint32_t USBIE:1;
  uint32_t SENDMONEN:1;
  uint32_t BSVALMONEN:1;
  uint32_t ASVALMONEN:1;
  uint32_t VBUSMONEN:1;
  uint32_t PHYIDEN:1;
  uint32_t USBIDVAL:1;
  uint32_t USBIDOVEN:1;
  uint32_t :14;
  uint32_t USBWKUP:1;
  uint32_t USBRF:1;
  uint32_t USBIF:1;
} __USBCRCONbits_t;
volatile __USBCRCONbits_t USBCRCONbits __asm__ ("USBCRCON") __attribute__((section("sfrs"), address(0xBF884000)));
#define PRECON PRECON
volatile uint32_t   PRECON __attribute__((section("sfrs"), address(0xBF8E0000)));
typedef struct {
  uint32_t PFMWS:3;
  uint32_t :1;
  uint32_t PREFEN:2;
  uint32_t :20;
  uint32_t PFMSECEN:1;
} __PRECONbits_t;
volatile __PRECONbits_t PRECONbits __asm__ ("PRECON") __attribute__((section("sfrs"), address(0xBF8E0000)));
volatile uint32_t        PRECONCLR __attribute__((section("sfrs"),address(0xBF8E0004)));
volatile uint32_t        PRECONSET __attribute__((section("sfrs"),address(0xBF8E0008)));
volatile uint32_t        PRECONINV __attribute__((section("sfrs"),address(0xBF8E000C)));
#define PRESTAT PRESTAT
volatile uint32_t   PRESTAT __attribute__((section("sfrs"), address(0xBF8E0010)));
typedef struct {
  uint32_t PFMSECCNT:8;
  uint32_t :18;
  uint32_t PFMSEC:1;
  uint32_t PFMDED:1;
} __PRESTATbits_t;
volatile __PRESTATbits_t PRESTATbits __asm__ ("PRESTAT") __attribute__((section("sfrs"), address(0xBF8E0010)));
volatile uint32_t        PRESTATCLR __attribute__((section("sfrs"),address(0xBF8E0014)));
volatile uint32_t        PRESTATSET __attribute__((section("sfrs"),address(0xBF8E0018)));
volatile uint32_t        PRESTATINV __attribute__((section("sfrs"),address(0xBF8E001C)));
#define EBICS0 EBICS0
volatile uint32_t   EBICS0 __attribute__((section("sfrs"), address(0xBF8E1014)));
typedef struct {
  uint32_t :16;
  uint32_t CSADDR:16;
} __EBICS0bits_t;
volatile __EBICS0bits_t EBICS0bits __asm__ ("EBICS0") __attribute__((section("sfrs"), address(0xBF8E1014)));
#define EBIMSK0 EBIMSK0
volatile uint32_t   EBIMSK0 __attribute__((section("sfrs"), address(0xBF8E1054)));
typedef struct {
  uint32_t MEMSIZE:5;
  uint32_t MEMTYPE:3;
  uint32_t REGSEL:3;
} __EBIMSK0bits_t;
volatile __EBIMSK0bits_t EBIMSK0bits __asm__ ("EBIMSK0") __attribute__((section("sfrs"), address(0xBF8E1054)));
#define EBISMT0 EBISMT0
volatile uint32_t   EBISMT0 __attribute__((section("sfrs"), address(0xBF8E1094)));
typedef struct {
  uint32_t TRC:6;
  uint32_t TAS:2;
  uint32_t TWR:2;
  uint32_t TWP:6;
  uint32_t TBTA:3;
  uint32_t TPRC:4;
  uint32_t PAGEMODE:1;
  uint32_t PAGESIZE:2;
  uint32_t RDYMODE:1;
} __EBISMT0bits_t;
volatile __EBISMT0bits_t EBISMT0bits __asm__ ("EBISMT0") __attribute__((section("sfrs"), address(0xBF8E1094)));
#define EBISMT1 EBISMT1
volatile uint32_t   EBISMT1 __attribute__((section("sfrs"), address(0xBF8E1098)));
typedef struct {
  uint32_t TRC:6;
  uint32_t TAS:2;
  uint32_t TWR:2;
  uint32_t TWP:6;
  uint32_t TBTA:3;
  uint32_t TPRC:4;
  uint32_t PAGEMODE:1;
  uint32_t PAGESIZE:2;
  uint32_t RDYMODE:1;
} __EBISMT1bits_t;
volatile __EBISMT1bits_t EBISMT1bits __asm__ ("EBISMT1") __attribute__((section("sfrs"), address(0xBF8E1098)));
#define EBISMT2 EBISMT2
volatile uint32_t   EBISMT2 __attribute__((section("sfrs"), address(0xBF8E109C)));
typedef struct {
  uint32_t TRC:6;
  uint32_t TAS:2;
  uint32_t TWR:2;
  uint32_t TWP:6;
  uint32_t TBTA:3;
  uint32_t TPRC:4;
  uint32_t PAGEMODE:1;
  uint32_t PAGESIZE:2;
  uint32_t RDYMODE:1;
} __EBISMT2bits_t;
volatile __EBISMT2bits_t EBISMT2bits __asm__ ("EBISMT2") __attribute__((section("sfrs"), address(0xBF8E109C)));
#define EBIFTRPD EBIFTRPD
volatile uint32_t   EBIFTRPD __attribute__((section("sfrs"), address(0xBF8E10A0)));
typedef struct {
  uint32_t TRPD:32;
} __EBIFTRPDbits_t;
volatile __EBIFTRPDbits_t EBIFTRPDbits __asm__ ("EBIFTRPD") __attribute__((section("sfrs"), address(0xBF8E10A0)));
#define EBISMCON EBISMCON
volatile uint32_t   EBISMCON __attribute__((section("sfrs"), address(0xBF8E10A4)));
typedef struct {
  uint32_t SMRP:1;
  uint32_t :6;
  uint32_t SMDWIDTH0:3;
  uint32_t SMDWIDTH1:3;
  uint32_t SMDWIDTH2:3;
} __EBISMCONbits_t;
volatile __EBISMCONbits_t EBISMCONbits __asm__ ("EBISMCON") __attribute__((section("sfrs"), address(0xBF8E10A4)));
#define SQI1XCON1 SQI1XCON1
volatile uint32_t   SQI1XCON1 __attribute__((section("sfrs"), address(0xBF8E2000)));
typedef struct {
  uint32_t TYPECMD:2;
  uint32_t TYPEADDR:2;
  uint32_t TYPEMODE:2;
  uint32_t TYPEDUMMY:2;
  uint32_t TYPEDATA:2;
  uint32_t READOPCODE:8;
  uint32_t ADDRBYTES:3;
  uint32_t DUMMYBYTES:3;
  uint32_t DDRCMD:1;
  uint32_t DDRADDR:1;
  uint32_t DDRMODE:1;
  uint32_t DDRDUMMY:1;
  uint32_t DDRDATA:1;
  uint32_t SDRCMD:1;
} __SQI1XCON1bits_t;
volatile __SQI1XCON1bits_t SQI1XCON1bits __asm__ ("SQI1XCON1") __attribute__((section("sfrs"), address(0xBF8E2000)));
#define SQI1XCON2 SQI1XCON2
volatile uint32_t   SQI1XCON2 __attribute__((section("sfrs"), address(0xBF8E2004)));
typedef struct {
  uint32_t MODECODE:8;
  uint32_t MODEBYTES:2;
  uint32_t DEVSEL:2;
} __SQI1XCON2bits_t;
volatile __SQI1XCON2bits_t SQI1XCON2bits __asm__ ("SQI1XCON2") __attribute__((section("sfrs"), address(0xBF8E2004)));
#define SQI1CFG SQI1CFG
volatile uint32_t   SQI1CFG __attribute__((section("sfrs"), address(0xBF8E2008)));
typedef struct {
  uint32_t MODE:3;
  uint32_t CPHA:1;
  uint32_t CPOL:1;
  uint32_t LSBF:1;
  uint32_t :3;
  uint32_t WP:1;
  uint32_t HOLD:1;
  uint32_t :1;
  uint32_t BURSTEN:1;
  uint32_t :3;
  uint32_t RESET:1;
  uint32_t TXBUFRST:1;
  uint32_t RXBUFRST:1;
  uint32_t CONBUFRST:1;
  uint32_t DATAEN:2;
  uint32_t :1;
  uint32_t SQIEN:1;
  uint32_t CSEN:2;
} __SQI1CFGbits_t;
volatile __SQI1CFGbits_t SQI1CFGbits __asm__ ("SQI1CFG") __attribute__((section("sfrs"), address(0xBF8E2008)));
#define SQI1CON SQI1CON
volatile uint32_t   SQI1CON __attribute__((section("sfrs"), address(0xBF8E200C)));
typedef struct {
  uint32_t TXRXCOUNT:16;
  uint32_t CMDINIT:2;
  uint32_t LANEMODE:2;
  uint32_t DEVSEL:2;
  uint32_t DASSERT:1;
  uint32_t DDRMODE:1;
  uint32_t SCHECK:1;
} __SQI1CONbits_t;
volatile __SQI1CONbits_t SQI1CONbits __asm__ ("SQI1CON") __attribute__((section("sfrs"), address(0xBF8E200C)));
#define SQI1CLKCON SQI1CLKCON
volatile uint32_t   SQI1CLKCON __attribute__((section("sfrs"), address(0xBF8E2010)));
typedef struct {
  uint32_t EN:1;
  uint32_t STABLE:1;
  uint32_t :6;
  uint32_t CLKDIV:11;
} __SQI1CLKCONbits_t;
volatile __SQI1CLKCONbits_t SQI1CLKCONbits __asm__ ("SQI1CLKCON") __attribute__((section("sfrs"), address(0xBF8E2010)));
#define SQI1CMDTHR SQI1CMDTHR
volatile uint32_t   SQI1CMDTHR __attribute__((section("sfrs"), address(0xBF8E2014)));
typedef struct {
  uint32_t RXCMDTHR:6;
  uint32_t :2;
  uint32_t TXCMDTHR:6;
} __SQI1CMDTHRbits_t;
volatile __SQI1CMDTHRbits_t SQI1CMDTHRbits __asm__ ("SQI1CMDTHR") __attribute__((section("sfrs"), address(0xBF8E2014)));
#define SQI1INTTHR SQI1INTTHR
volatile uint32_t   SQI1INTTHR __attribute__((section("sfrs"), address(0xBF8E2018)));
typedef struct {
  uint32_t RXINTTHR:6;
  uint32_t :2;
  uint32_t TXINTTHR:6;
} __SQI1INTTHRbits_t;
volatile __SQI1INTTHRbits_t SQI1INTTHRbits __asm__ ("SQI1INTTHR") __attribute__((section("sfrs"), address(0xBF8E2018)));
#define SQI1INTEN SQI1INTEN
volatile uint32_t   SQI1INTEN __attribute__((section("sfrs"), address(0xBF8E201C)));
typedef struct {
  uint32_t TXEMPTYIE:1;
  uint32_t TXFULLIE:1;
  uint32_t TXTHRIE:1;
  uint32_t RXEMPTYIE:1;
  uint32_t RXFULLIE:1;
  uint32_t RXTHRIE:1;
  uint32_t CONFULLIE:1;
  uint32_t CONEMPTYIE:1;
  uint32_t CONTHRIE:1;
  uint32_t BDDONEIE:1;
  uint32_t PKTCOMPIE:1;
  uint32_t DMAEIE:1;
} __SQI1INTENbits_t;
volatile __SQI1INTENbits_t SQI1INTENbits __asm__ ("SQI1INTEN") __attribute__((section("sfrs"), address(0xBF8E201C)));
#define SQI1INTSTAT SQI1INTSTAT
volatile uint32_t   SQI1INTSTAT __attribute__((section("sfrs"), address(0xBF8E2020)));
typedef struct {
  uint32_t TXEMPTYIF:1;
  uint32_t TXFULLIF:1;
  uint32_t TXTHRIF:1;
  uint32_t RXEMPTYIF:1;
  uint32_t RXFULLIF:1;
  uint32_t RXTHRIF:1;
  uint32_t CONFULLIF:1;
  uint32_t CONEMPTYIF:1;
  uint32_t CONTHRIF:1;
  uint32_t BDDONEIF:1;
  uint32_t PKTCOMPIF:1;
  uint32_t DMAEIF:1;
} __SQI1INTSTATbits_t;
volatile __SQI1INTSTATbits_t SQI1INTSTATbits __asm__ ("SQI1INTSTAT") __attribute__((section("sfrs"), address(0xBF8E2020)));
#define SQI1TXDATA SQI1TXDATA
volatile uint32_t   SQI1TXDATA __attribute__((section("sfrs"), address(0xBF8E2024)));
typedef struct {
  uint32_t TXDATA:32;
} __SQI1TXDATAbits_t;
volatile __SQI1TXDATAbits_t SQI1TXDATAbits __asm__ ("SQI1TXDATA") __attribute__((section("sfrs"), address(0xBF8E2024)));
#define SQI1RXDATA SQI1RXDATA
volatile uint32_t   SQI1RXDATA __attribute__((section("sfrs"), address(0xBF8E2028)));
typedef struct {
  uint32_t RXDATA:32;
} __SQI1RXDATAbits_t;
volatile __SQI1RXDATAbits_t SQI1RXDATAbits __asm__ ("SQI1RXDATA") __attribute__((section("sfrs"), address(0xBF8E2028)));
#define SQI1STAT1 SQI1STAT1
volatile uint32_t   SQI1STAT1 __attribute__((section("sfrs"), address(0xBF8E202C)));
typedef struct {
  uint32_t RXBUFCNT:6;
  uint32_t :10;
  uint32_t TXBUFFREE:6;
} __SQI1STAT1bits_t;
volatile __SQI1STAT1bits_t SQI1STAT1bits __asm__ ("SQI1STAT1") __attribute__((section("sfrs"), address(0xBF8E202C)));
#define SQI1STAT2 SQI1STAT2
volatile uint32_t   SQI1STAT2 __attribute__((section("sfrs"), address(0xBF8E2030)));
typedef struct {
  uint32_t TXOV:1;
  uint32_t RXUN:1;
  uint32_t :1;
  uint32_t SQID0:1;
  uint32_t SQID1:1;
  uint32_t SQID2:1;
  uint32_t SQID3:1;
  uint32_t CONAVAIL:4;
  uint32_t :5;
  uint32_t CMDSTAT:2;
} __SQI1STAT2bits_t;
volatile __SQI1STAT2bits_t SQI1STAT2bits __asm__ ("SQI1STAT2") __attribute__((section("sfrs"), address(0xBF8E2030)));
#define SQI1BDCON SQI1BDCON
volatile uint32_t   SQI1BDCON __attribute__((section("sfrs"), address(0xBF8E2034)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t POLLEN:1;
  uint32_t START:1;
} __SQI1BDCONbits_t;
volatile __SQI1BDCONbits_t SQI1BDCONbits __asm__ ("SQI1BDCON") __attribute__((section("sfrs"), address(0xBF8E2034)));
#define SQI1BDCURADD SQI1BDCURADD
volatile uint32_t   SQI1BDCURADD __attribute__((section("sfrs"), address(0xBF8E2038)));
typedef struct {
  uint32_t BDCURRADDR:32;
} __SQI1BDCURADDbits_t;
volatile __SQI1BDCURADDbits_t SQI1BDCURADDbits __asm__ ("SQI1BDCURADD") __attribute__((section("sfrs"), address(0xBF8E2038)));
#define SQI1BDBASEADD SQI1BDBASEADD
volatile uint32_t   SQI1BDBASEADD __attribute__((section("sfrs"), address(0xBF8E2040)));
typedef struct {
  uint32_t BDADDR:32;
} __SQI1BDBASEADDbits_t;
volatile __SQI1BDBASEADDbits_t SQI1BDBASEADDbits __asm__ ("SQI1BDBASEADD") __attribute__((section("sfrs"), address(0xBF8E2040)));
#define SQI1BDSTAT SQI1BDSTAT
volatile uint32_t   SQI1BDSTAT __attribute__((section("sfrs"), address(0xBF8E2044)));
typedef struct {
  uint32_t BDCON:16;
  uint32_t DMAACTV:1;
  uint32_t DMASTART:1;
  uint32_t BDSTATE:4;
} __SQI1BDSTATbits_t;
volatile __SQI1BDSTATbits_t SQI1BDSTATbits __asm__ ("SQI1BDSTAT") __attribute__((section("sfrs"), address(0xBF8E2044)));
#define SQI1BDPOLLCON SQI1BDPOLLCON
volatile uint32_t   SQI1BDPOLLCON __attribute__((section("sfrs"), address(0xBF8E2048)));
typedef struct {
  uint32_t POLLCON:16;
} __SQI1BDPOLLCONbits_t;
volatile __SQI1BDPOLLCONbits_t SQI1BDPOLLCONbits __asm__ ("SQI1BDPOLLCON") __attribute__((section("sfrs"), address(0xBF8E2048)));
#define SQI1BDTXDSTAT SQI1BDTXDSTAT
volatile uint32_t   SQI1BDTXDSTAT __attribute__((section("sfrs"), address(0xBF8E204C)));
typedef struct {
  uint32_t TXCURBUFLEN:9;
  uint32_t :7;
  uint32_t TXBUFCNT:5;
  uint32_t :4;
  uint32_t TXSTATE:4;
} __SQI1BDTXDSTATbits_t;
volatile __SQI1BDTXDSTATbits_t SQI1BDTXDSTATbits __asm__ ("SQI1BDTXDSTAT") __attribute__((section("sfrs"), address(0xBF8E204C)));
#define SQI1BDRXDSTAT SQI1BDRXDSTAT
volatile uint32_t   SQI1BDRXDSTAT __attribute__((section("sfrs"), address(0xBF8E2050)));
typedef struct {
  uint32_t RXCURBUFLEN:9;
  uint32_t :7;
  uint32_t RXBUFCNT:5;
  uint32_t :4;
  uint32_t RXSTATE:4;
} __SQI1BDRXDSTATbits_t;
volatile __SQI1BDRXDSTATbits_t SQI1BDRXDSTATbits __asm__ ("SQI1BDRXDSTAT") __attribute__((section("sfrs"), address(0xBF8E2050)));
#define SQI1THR SQI1THR
volatile uint32_t   SQI1THR __attribute__((section("sfrs"), address(0xBF8E2054)));
typedef struct {
  uint32_t THRES:4;
} __SQI1THRbits_t;
volatile __SQI1THRbits_t SQI1THRbits __asm__ ("SQI1THR") __attribute__((section("sfrs"), address(0xBF8E2054)));
#define SQI1INTSIGEN SQI1INTSIGEN
volatile uint32_t   SQI1INTSIGEN __attribute__((section("sfrs"), address(0xBF8E2058)));
typedef struct {
  uint32_t TXEMPTYISE:1;
  uint32_t TXFULLISE:1;
  uint32_t TXTHRISE:1;
  uint32_t RXEMPTYISE:1;
  uint32_t RXFULLISE:1;
  uint32_t RXTHRISE:1;
  uint32_t CONFULLISE:1;
  uint32_t CONEMPTYISE:1;
  uint32_t CONTHRISE:1;
  uint32_t BDDONEISE:1;
  uint32_t PKTCOMPISE:1;
  uint32_t DMAEISE:1;
} __SQI1INTSIGENbits_t;
volatile __SQI1INTSIGENbits_t SQI1INTSIGENbits __asm__ ("SQI1INTSIGEN") __attribute__((section("sfrs"), address(0xBF8E2058)));
#define SQI1TAPCON SQI1TAPCON
volatile uint32_t   SQI1TAPCON __attribute__((section("sfrs"), address(0xBF8E205C)));
typedef struct {
  uint32_t CLKOUTDLY:4;
  uint32_t DATAOUTDLY:4;
  uint32_t SDRCLKINDLY:6;
} __SQI1TAPCONbits_t;
volatile __SQI1TAPCONbits_t SQI1TAPCONbits __asm__ ("SQI1TAPCON") __attribute__((section("sfrs"), address(0xBF8E205C)));
#define SQI1MEMSTAT SQI1MEMSTAT
volatile uint32_t   SQI1MEMSTAT __attribute__((section("sfrs"), address(0xBF8E2060)));
typedef struct {
  uint32_t STATCMD:16;
  uint32_t STATBYTES:2;
  uint32_t STATTYPE:2;
  uint32_t STATPOS:1;
} __SQI1MEMSTATbits_t;
volatile __SQI1MEMSTATbits_t SQI1MEMSTATbits __asm__ ("SQI1MEMSTAT") __attribute__((section("sfrs"), address(0xBF8E2060)));
#define SQI1XCON3 SQI1XCON3
volatile uint32_t   SQI1XCON3 __attribute__((section("sfrs"), address(0xBF8E2064)));
typedef struct {
  uint32_t INIT1CMD1:8;
  uint32_t INIT1CMD2:8;
  uint32_t INIT1CMD3:8;
  uint32_t INIT1TYPE:2;
  uint32_t INIT1COUNT:2;
  uint32_t INIT1SCHECK:1;
} __SQI1XCON3bits_t;
volatile __SQI1XCON3bits_t SQI1XCON3bits __asm__ ("SQI1XCON3") __attribute__((section("sfrs"), address(0xBF8E2064)));
#define SQI1XCON4 SQI1XCON4
volatile uint32_t   SQI1XCON4 __attribute__((section("sfrs"), address(0xBF8E2068)));
typedef struct {
  uint32_t INIT2CMD1:8;
  uint32_t INIT2CMD2:8;
  uint32_t INIT2CMD3:8;
  uint32_t INIT2TYPE:2;
  uint32_t INIT2COUNT:2;
  uint32_t INIT2SCHECK:1;
} __SQI1XCON4bits_t;
volatile __SQI1XCON4bits_t SQI1XCON4bits __asm__ ("SQI1XCON4") __attribute__((section("sfrs"), address(0xBF8E2068)));
#define USBCSR0 USBCSR0
volatile uint32_t   USBCSR0 __attribute__((section("sfrs"), address(0xBF8E3000)));
typedef struct {
  uint32_t FUNC:7;
  uint32_t :1;
  uint32_t SUSPEN:1;
  uint32_t SUSPMODE:1;
  uint32_t RESUME:1;
  uint32_t RESET:1;
  uint32_t HSMODE:1;
  uint32_t HSEN:1;
  uint32_t SOFTCONN:1;
  uint32_t ISOUPD:1;
  uint32_t EP0IF:1;
  uint32_t EP1TXIF:1;
  uint32_t EP2TXIF:1;
  uint32_t EP3TXIF:1;
  uint32_t EP4TXIF:1;
  uint32_t EP5TXIF:1;
  uint32_t EP6TXIF:1;
  uint32_t EP7TXIF:1;
} __USBCSR0bits_t;
volatile __USBCSR0bits_t USBCSR0bits __asm__ ("USBCSR0") __attribute__((section("sfrs"), address(0xBF8E3000)));
#define USBCSR1 USBCSR1
volatile uint32_t   USBCSR1 __attribute__((section("sfrs"), address(0xBF8E3004)));
typedef struct {
  uint32_t :1;
  uint32_t EP1RXIF:1;
  uint32_t EP2RXIF:1;
  uint32_t EP3RXIF:1;
  uint32_t EP4RXIF:1;
  uint32_t EP5RXIF:1;
  uint32_t EP6RXIF:1;
  uint32_t EP7RXIF:1;
  uint32_t :8;
  uint32_t EP0IE:1;
  uint32_t EP1TXIE:1;
  uint32_t EP2TXIE:1;
  uint32_t EP3TXIE:1;
  uint32_t EP4TXIE:1;
  uint32_t EP5TXIE:1;
  uint32_t EP6TXIE:1;
  uint32_t EP7TXIE:1;
} __USBCSR1bits_t;
volatile __USBCSR1bits_t USBCSR1bits __asm__ ("USBCSR1") __attribute__((section("sfrs"), address(0xBF8E3004)));
#define USBCSR2 USBCSR2
volatile uint32_t   USBCSR2 __attribute__((section("sfrs"), address(0xBF8E3008)));
typedef struct {
  uint32_t :1;
  uint32_t EP1RXIE:1;
  uint32_t EP2RXIE:1;
  uint32_t EP3RXIE:1;
  uint32_t EP4RXIE:1;
  uint32_t EP5RXIE:1;
  uint32_t EP6RXIE:1;
  uint32_t EP7RXIE:1;
  uint32_t :8;
  uint32_t SUSPIF:1;
  uint32_t RESUMEIF:1;
  uint32_t RESETIF:1;
  uint32_t SOFIF:1;
  uint32_t CONNIF:1;
  uint32_t DISCONIF:1;
  uint32_t SESSRQIF:1;
  uint32_t VBUSERRIF:1;
  uint32_t SUSPIE:1;
  uint32_t RESUMEIE:1;
  uint32_t RESETIE:1;
  uint32_t SOFIE:1;
  uint32_t CONNIE:1;
  uint32_t DISCONIE:1;
  uint32_t SESSRQIE:1;
  uint32_t VBUSERRIE:1;
} __USBCSR2bits_t;
volatile __USBCSR2bits_t USBCSR2bits __asm__ ("USBCSR2") __attribute__((section("sfrs"), address(0xBF8E3008)));
#define USBCSR3 USBCSR3
volatile uint32_t   USBCSR3 __attribute__((section("sfrs"), address(0xBF8E300C)));
typedef struct {
  uint32_t RFRMNUM:11;
  uint32_t :5;
  uint32_t ENDPOINT:4;
  uint32_t :4;
  uint32_t NAK:1;
  uint32_t TESTJ:1;
  uint32_t TESTK:1;
  uint32_t PACKET:1;
  uint32_t FORCEHS:1;
  uint32_t FORCEFS:1;
  uint32_t FIFOACC:1;
  uint32_t FORCEHST:1;
} __USBCSR3bits_t;
volatile __USBCSR3bits_t USBCSR3bits __asm__ ("USBCSR3") __attribute__((section("sfrs"), address(0xBF8E300C)));
#define USBIENCSR1 USBIENCSR1
volatile uint32_t   USBIENCSR1 __attribute__((section("sfrs"), address(0xBF8E3014)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t OVERRUN:1;
    uint32_t DATAERR:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :5;
    uint32_t DISNYET:1;
    uint32_t :1;
    uint32_t ISO:1;
  };
} __USBIENCSR1bits_t;
volatile __USBIENCSR1bits_t USBIENCSR1bits __asm__ ("USBIENCSR1") __attribute__((section("sfrs"), address(0xBF8E3014)));
#define USBFIFO0 USBFIFO0
volatile uint32_t   USBFIFO0 __attribute__((section("sfrs"), address(0xBF8E3020)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO0bits_t;
volatile __USBFIFO0bits_t USBFIFO0bits __asm__ ("USBFIFO0") __attribute__((section("sfrs"), address(0xBF8E3020)));
#define USBFIFO1 USBFIFO1
volatile uint32_t   USBFIFO1 __attribute__((section("sfrs"), address(0xBF8E3024)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO1bits_t;
volatile __USBFIFO1bits_t USBFIFO1bits __asm__ ("USBFIFO1") __attribute__((section("sfrs"), address(0xBF8E3024)));
#define USBFIFO2 USBFIFO2
volatile uint32_t   USBFIFO2 __attribute__((section("sfrs"), address(0xBF8E3028)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO2bits_t;
volatile __USBFIFO2bits_t USBFIFO2bits __asm__ ("USBFIFO2") __attribute__((section("sfrs"), address(0xBF8E3028)));
#define USBFIFO3 USBFIFO3
volatile uint32_t   USBFIFO3 __attribute__((section("sfrs"), address(0xBF8E302C)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO3bits_t;
volatile __USBFIFO3bits_t USBFIFO3bits __asm__ ("USBFIFO3") __attribute__((section("sfrs"), address(0xBF8E302C)));
#define USBFIFO4 USBFIFO4
volatile uint32_t   USBFIFO4 __attribute__((section("sfrs"), address(0xBF8E3030)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO4bits_t;
volatile __USBFIFO4bits_t USBFIFO4bits __asm__ ("USBFIFO4") __attribute__((section("sfrs"), address(0xBF8E3030)));
#define USBFIFO5 USBFIFO5
volatile uint32_t   USBFIFO5 __attribute__((section("sfrs"), address(0xBF8E3034)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO5bits_t;
volatile __USBFIFO5bits_t USBFIFO5bits __asm__ ("USBFIFO5") __attribute__((section("sfrs"), address(0xBF8E3034)));
#define USBFIFO6 USBFIFO6
volatile uint32_t   USBFIFO6 __attribute__((section("sfrs"), address(0xBF8E3038)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO6bits_t;
volatile __USBFIFO6bits_t USBFIFO6bits __asm__ ("USBFIFO6") __attribute__((section("sfrs"), address(0xBF8E3038)));
#define USBFIFO7 USBFIFO7
volatile uint32_t   USBFIFO7 __attribute__((section("sfrs"), address(0xBF8E303C)));
typedef struct {
  uint32_t DATA:32;
} __USBFIFO7bits_t;
volatile __USBFIFO7bits_t USBFIFO7bits __asm__ ("USBFIFO7") __attribute__((section("sfrs"), address(0xBF8E303C)));
#define USBOTG USBOTG
volatile uint32_t   USBOTG __attribute__((section("sfrs"), address(0xBF8E3060)));
typedef struct {
  uint32_t SESSION:1;
  uint32_t HOSTREQ:1;
  uint32_t HOSTMODE:1;
  uint32_t VBUS:2;
  uint32_t LSDEV:1;
  uint32_t FSDEV:1;
  uint32_t BDEV:1;
  uint32_t RXEDMA:1;
  uint32_t TXEDMA:1;
  uint32_t :6;
  uint32_t TXFIFOSZ:4;
  uint32_t TXDPB:1;
  uint32_t :3;
  uint32_t RXFIFOSZ:4;
  uint32_t RXDPB:1;
} __USBOTGbits_t;
volatile __USBOTGbits_t USBOTGbits __asm__ ("USBOTG") __attribute__((section("sfrs"), address(0xBF8E3060)));
#define USBFIFOA USBFIFOA
volatile uint32_t   USBFIFOA __attribute__((section("sfrs"), address(0xBF8E3064)));
typedef struct {
  uint32_t TXFIFOAD:13;
  uint32_t :3;
  uint32_t RXFIFOAD:13;
} __USBFIFOAbits_t;
volatile __USBFIFOAbits_t USBFIFOAbits __asm__ ("USBFIFOA") __attribute__((section("sfrs"), address(0xBF8E3064)));
#define USBHWVER USBHWVER
volatile uint32_t   USBHWVER __attribute__((section("sfrs"), address(0xBF8E306C)));
typedef struct {
  uint32_t VERMINOR:10;
  uint32_t VERMAJOR:5;
  uint32_t RC:1;
} __USBHWVERbits_t;
volatile __USBHWVERbits_t USBHWVERbits __asm__ ("USBHWVER") __attribute__((section("sfrs"), address(0xBF8E306C)));
#define USBINFO USBINFO
volatile uint32_t   USBINFO __attribute__((section("sfrs"), address(0xBF8E3078)));
typedef struct {
  uint32_t TXENDPTS:4;
  uint32_t RXENDPTS:4;
  uint32_t RAMBITS:4;
  uint32_t DMACHANS:4;
  uint32_t WTID:4;
  uint32_t WTCON:4;
  uint32_t VPLEN:8;
} __USBINFObits_t;
volatile __USBINFObits_t USBINFObits __asm__ ("USBINFO") __attribute__((section("sfrs"), address(0xBF8E3078)));
#define USBEOFRST USBEOFRST
volatile uint32_t   USBEOFRST __attribute__((section("sfrs"), address(0xBF8E307C)));
typedef union {
  struct {
    uint32_t HSEOF:8;
    uint32_t FSEOF:8;
    uint32_t LSEOF:8;
    uint32_t NRST:1;
    uint32_t NRSTX:1;
  };
  struct {
    uint32_t :24;
    uint32_t SOFRST:8;
  };
} __USBEOFRSTbits_t;
volatile __USBEOFRSTbits_t USBEOFRSTbits __asm__ ("USBEOFRST") __attribute__((section("sfrs"), address(0xBF8E307C)));
#define USBE0TXA USBE0TXA
volatile uint32_t   USBE0TXA __attribute__((section("sfrs"), address(0xBF8E3080)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE0TXAbits_t;
volatile __USBE0TXAbits_t USBE0TXAbits __asm__ ("USBE0TXA") __attribute__((section("sfrs"), address(0xBF8E3080)));
#define USBE0RXA USBE0RXA
volatile uint32_t   USBE0RXA __attribute__((section("sfrs"), address(0xBF8E3084)));
typedef struct {
  uint32_t :16;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE0RXAbits_t;
volatile __USBE0RXAbits_t USBE0RXAbits __asm__ ("USBE0RXA") __attribute__((section("sfrs"), address(0xBF8E3084)));
#define USBE1TXA USBE1TXA
volatile uint32_t   USBE1TXA __attribute__((section("sfrs"), address(0xBF8E3088)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE1TXAbits_t;
volatile __USBE1TXAbits_t USBE1TXAbits __asm__ ("USBE1TXA") __attribute__((section("sfrs"), address(0xBF8E3088)));
#define USBE1RXA USBE1RXA
volatile uint32_t   USBE1RXA __attribute__((section("sfrs"), address(0xBF8E308C)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE1RXAbits_t;
volatile __USBE1RXAbits_t USBE1RXAbits __asm__ ("USBE1RXA") __attribute__((section("sfrs"), address(0xBF8E308C)));
#define USBE2TXA USBE2TXA
volatile uint32_t   USBE2TXA __attribute__((section("sfrs"), address(0xBF8E3090)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE2TXAbits_t;
volatile __USBE2TXAbits_t USBE2TXAbits __asm__ ("USBE2TXA") __attribute__((section("sfrs"), address(0xBF8E3090)));
#define USBE2RXA USBE2RXA
volatile uint32_t   USBE2RXA __attribute__((section("sfrs"), address(0xBF8E3094)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE2RXAbits_t;
volatile __USBE2RXAbits_t USBE2RXAbits __asm__ ("USBE2RXA") __attribute__((section("sfrs"), address(0xBF8E3094)));
#define USBE3TXA USBE3TXA
volatile uint32_t   USBE3TXA __attribute__((section("sfrs"), address(0xBF8E3098)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE3TXAbits_t;
volatile __USBE3TXAbits_t USBE3TXAbits __asm__ ("USBE3TXA") __attribute__((section("sfrs"), address(0xBF8E3098)));
#define USBE3RXA USBE3RXA
volatile uint32_t   USBE3RXA __attribute__((section("sfrs"), address(0xBF8E309C)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE3RXAbits_t;
volatile __USBE3RXAbits_t USBE3RXAbits __asm__ ("USBE3RXA") __attribute__((section("sfrs"), address(0xBF8E309C)));
#define USBE4TXA USBE4TXA
volatile uint32_t   USBE4TXA __attribute__((section("sfrs"), address(0xBF8E30A0)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE4TXAbits_t;
volatile __USBE4TXAbits_t USBE4TXAbits __asm__ ("USBE4TXA") __attribute__((section("sfrs"), address(0xBF8E30A0)));
#define USBE4RXA USBE4RXA
volatile uint32_t   USBE4RXA __attribute__((section("sfrs"), address(0xBF8E30A4)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE4RXAbits_t;
volatile __USBE4RXAbits_t USBE4RXAbits __asm__ ("USBE4RXA") __attribute__((section("sfrs"), address(0xBF8E30A4)));
#define USBE5TXA USBE5TXA
volatile uint32_t   USBE5TXA __attribute__((section("sfrs"), address(0xBF8E30A8)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE5TXAbits_t;
volatile __USBE5TXAbits_t USBE5TXAbits __asm__ ("USBE5TXA") __attribute__((section("sfrs"), address(0xBF8E30A8)));
#define USBE5RXA USBE5RXA
volatile uint32_t   USBE5RXA __attribute__((section("sfrs"), address(0xBF8E30AC)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE5RXAbits_t;
volatile __USBE5RXAbits_t USBE5RXAbits __asm__ ("USBE5RXA") __attribute__((section("sfrs"), address(0xBF8E30AC)));
#define USBE6TXA USBE6TXA
volatile uint32_t   USBE6TXA __attribute__((section("sfrs"), address(0xBF8E30B0)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE6TXAbits_t;
volatile __USBE6TXAbits_t USBE6TXAbits __asm__ ("USBE6TXA") __attribute__((section("sfrs"), address(0xBF8E30B0)));
#define USBE6RXA USBE6RXA
volatile uint32_t   USBE6RXA __attribute__((section("sfrs"), address(0xBF8E30B4)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE6RXAbits_t;
volatile __USBE6RXAbits_t USBE6RXAbits __asm__ ("USBE6RXA") __attribute__((section("sfrs"), address(0xBF8E30B4)));
#define USBE7TXA USBE7TXA
volatile uint32_t   USBE7TXA __attribute__((section("sfrs"), address(0xBF8E30B8)));
typedef struct {
  uint32_t TXFADDR:7;
  uint32_t :9;
  uint32_t TXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t TXHUBPRT:7;
} __USBE7TXAbits_t;
volatile __USBE7TXAbits_t USBE7TXAbits __asm__ ("USBE7TXA") __attribute__((section("sfrs"), address(0xBF8E30B8)));
#define USBE7RXA USBE7RXA
volatile uint32_t   USBE7RXA __attribute__((section("sfrs"), address(0xBF8E30BC)));
typedef struct {
  uint32_t RXFADDR:7;
  uint32_t :9;
  uint32_t RXHUBADD:7;
  uint32_t MULTTRAN:1;
  uint32_t RXHUBPRT:7;
} __USBE7RXAbits_t;
volatile __USBE7RXAbits_t USBE7RXAbits __asm__ ("USBE7RXA") __attribute__((section("sfrs"), address(0xBF8E30BC)));
#define USBE0CSR0 USBE0CSR0
volatile uint32_t   USBE0CSR0 __attribute__((section("sfrs"), address(0xBF8E3100)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t :5;
    uint32_t RXRDY:1;
    uint32_t TXRDY:1;
    uint32_t STALLED:1;
    uint32_t SETUP:1;
    uint32_t ERROR:1;
    uint32_t REQPKT:1;
    uint32_t STATUS:1;
    uint32_t NAKTO:1;
    uint32_t FLUSH:1;
    uint32_t DT:1;
    uint32_t DTWE:1;
  };
  struct {
    uint32_t :19;
    uint32_t DATAEND:1;
    uint32_t SETEND:1;
    uint32_t STALL:1;
    uint32_t RXRDYC:1;
    uint32_t SETENDC:1;
  };
} __USBE0CSR0bits_t;
volatile __USBE0CSR0bits_t USBE0CSR0bits __asm__ ("USBE0CSR0") __attribute__((section("sfrs"), address(0xBF8E3100)));
#define USBE0CSR2 USBE0CSR2
volatile uint32_t   USBE0CSR2 __attribute__((section("sfrs"), address(0xBF8E3108)));
typedef struct {
  uint32_t RXCNT:7;
  uint32_t :15;
  uint32_t SPEED:2;
  uint32_t NAKLIM:4;
} __USBE0CSR2bits_t;
volatile __USBE0CSR2bits_t USBE0CSR2bits __asm__ ("USBE0CSR2") __attribute__((section("sfrs"), address(0xBF8E3108)));
#define USBE0CSR3 USBE0CSR3
volatile uint32_t   USBE0CSR3 __attribute__((section("sfrs"), address(0xBF8E310C)));
typedef struct {
  uint32_t :24;
  uint32_t UTMIDWID:1;
  uint32_t SOFTCONE:1;
  uint32_t DYNFIFOS:1;
  uint32_t HBTXEN:1;
  uint32_t HBRXEN:1;
  uint32_t BIGEND:1;
  uint32_t MPTXEN:1;
  uint32_t MPRXEN:1;
} __USBE0CSR3bits_t;
volatile __USBE0CSR3bits_t USBE0CSR3bits __asm__ ("USBE0CSR3") __attribute__((section("sfrs"), address(0xBF8E310C)));
#define USBE1CSR0 USBE1CSR0
volatile uint32_t   USBE1CSR0 __attribute__((section("sfrs"), address(0xBF8E3110)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE1CSR0bits_t;
volatile __USBE1CSR0bits_t USBE1CSR0bits __asm__ ("USBE1CSR0") __attribute__((section("sfrs"), address(0xBF8E3110)));
#define USBE1CSR1 USBE1CSR1
volatile uint32_t   USBE1CSR1 __attribute__((section("sfrs"), address(0xBF8E3114)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE1CSR1bits_t;
volatile __USBE1CSR1bits_t USBE1CSR1bits __asm__ ("USBE1CSR1") __attribute__((section("sfrs"), address(0xBF8E3114)));
#define USBE1CSR2 USBE1CSR2
volatile uint32_t   USBE1CSR2 __attribute__((section("sfrs"), address(0xBF8E3118)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE1CSR2bits_t;
volatile __USBE1CSR2bits_t USBE1CSR2bits __asm__ ("USBE1CSR2") __attribute__((section("sfrs"), address(0xBF8E3118)));
#define USBE1CSR3 USBE1CSR3
volatile uint32_t   USBE1CSR3 __attribute__((section("sfrs"), address(0xBF8E311C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE1CSR3bits_t;
volatile __USBE1CSR3bits_t USBE1CSR3bits __asm__ ("USBE1CSR3") __attribute__((section("sfrs"), address(0xBF8E311C)));
#define USBE2CSR0 USBE2CSR0
volatile uint32_t   USBE2CSR0 __attribute__((section("sfrs"), address(0xBF8E3120)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE2CSR0bits_t;
volatile __USBE2CSR0bits_t USBE2CSR0bits __asm__ ("USBE2CSR0") __attribute__((section("sfrs"), address(0xBF8E3120)));
#define USBE2CSR1 USBE2CSR1
volatile uint32_t   USBE2CSR1 __attribute__((section("sfrs"), address(0xBF8E3124)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE2CSR1bits_t;
volatile __USBE2CSR1bits_t USBE2CSR1bits __asm__ ("USBE2CSR1") __attribute__((section("sfrs"), address(0xBF8E3124)));
#define USBE2CSR2 USBE2CSR2
volatile uint32_t   USBE2CSR2 __attribute__((section("sfrs"), address(0xBF8E3128)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE2CSR2bits_t;
volatile __USBE2CSR2bits_t USBE2CSR2bits __asm__ ("USBE2CSR2") __attribute__((section("sfrs"), address(0xBF8E3128)));
#define USBE2CSR3 USBE2CSR3
volatile uint32_t   USBE2CSR3 __attribute__((section("sfrs"), address(0xBF8E312C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE2CSR3bits_t;
volatile __USBE2CSR3bits_t USBE2CSR3bits __asm__ ("USBE2CSR3") __attribute__((section("sfrs"), address(0xBF8E312C)));
#define USBE3CSR0 USBE3CSR0
volatile uint32_t   USBE3CSR0 __attribute__((section("sfrs"), address(0xBF8E3130)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE3CSR0bits_t;
volatile __USBE3CSR0bits_t USBE3CSR0bits __asm__ ("USBE3CSR0") __attribute__((section("sfrs"), address(0xBF8E3130)));
#define USBE3CSR1 USBE3CSR1
volatile uint32_t   USBE3CSR1 __attribute__((section("sfrs"), address(0xBF8E3134)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE3CSR1bits_t;
volatile __USBE3CSR1bits_t USBE3CSR1bits __asm__ ("USBE3CSR1") __attribute__((section("sfrs"), address(0xBF8E3134)));
#define USBE3CSR2 USBE3CSR2
volatile uint32_t   USBE3CSR2 __attribute__((section("sfrs"), address(0xBF8E3138)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE3CSR2bits_t;
volatile __USBE3CSR2bits_t USBE3CSR2bits __asm__ ("USBE3CSR2") __attribute__((section("sfrs"), address(0xBF8E3138)));
#define USBE3CSR3 USBE3CSR3
volatile uint32_t   USBE3CSR3 __attribute__((section("sfrs"), address(0xBF8E313C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE3CSR3bits_t;
volatile __USBE3CSR3bits_t USBE3CSR3bits __asm__ ("USBE3CSR3") __attribute__((section("sfrs"), address(0xBF8E313C)));
#define USBE4CSR0 USBE4CSR0
volatile uint32_t   USBE4CSR0 __attribute__((section("sfrs"), address(0xBF8E3140)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE4CSR0bits_t;
volatile __USBE4CSR0bits_t USBE4CSR0bits __asm__ ("USBE4CSR0") __attribute__((section("sfrs"), address(0xBF8E3140)));
#define USBE4CSR1 USBE4CSR1
volatile uint32_t   USBE4CSR1 __attribute__((section("sfrs"), address(0xBF8E3144)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE4CSR1bits_t;
volatile __USBE4CSR1bits_t USBE4CSR1bits __asm__ ("USBE4CSR1") __attribute__((section("sfrs"), address(0xBF8E3144)));
#define USBE4CSR2 USBE4CSR2
volatile uint32_t   USBE4CSR2 __attribute__((section("sfrs"), address(0xBF8E3148)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE4CSR2bits_t;
volatile __USBE4CSR2bits_t USBE4CSR2bits __asm__ ("USBE4CSR2") __attribute__((section("sfrs"), address(0xBF8E3148)));
#define USBE4CSR3 USBE4CSR3
volatile uint32_t   USBE4CSR3 __attribute__((section("sfrs"), address(0xBF8E314C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE4CSR3bits_t;
volatile __USBE4CSR3bits_t USBE4CSR3bits __asm__ ("USBE4CSR3") __attribute__((section("sfrs"), address(0xBF8E314C)));
#define USBE5CSR0 USBE5CSR0
volatile uint32_t   USBE5CSR0 __attribute__((section("sfrs"), address(0xBF8E3150)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE5CSR0bits_t;
volatile __USBE5CSR0bits_t USBE5CSR0bits __asm__ ("USBE5CSR0") __attribute__((section("sfrs"), address(0xBF8E3150)));
#define USBE5CSR1 USBE5CSR1
volatile uint32_t   USBE5CSR1 __attribute__((section("sfrs"), address(0xBF8E3154)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE5CSR1bits_t;
volatile __USBE5CSR1bits_t USBE5CSR1bits __asm__ ("USBE5CSR1") __attribute__((section("sfrs"), address(0xBF8E3154)));
#define USBE5CSR2 USBE5CSR2
volatile uint32_t   USBE5CSR2 __attribute__((section("sfrs"), address(0xBF8E3158)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE5CSR2bits_t;
volatile __USBE5CSR2bits_t USBE5CSR2bits __asm__ ("USBE5CSR2") __attribute__((section("sfrs"), address(0xBF8E3158)));
#define USBE5CSR3 USBE5CSR3
volatile uint32_t   USBE5CSR3 __attribute__((section("sfrs"), address(0xBF8E315C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE5CSR3bits_t;
volatile __USBE5CSR3bits_t USBE5CSR3bits __asm__ ("USBE5CSR3") __attribute__((section("sfrs"), address(0xBF8E315C)));
#define USBE6CSR0 USBE6CSR0
volatile uint32_t   USBE6CSR0 __attribute__((section("sfrs"), address(0xBF8E3160)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE6CSR0bits_t;
volatile __USBE6CSR0bits_t USBE6CSR0bits __asm__ ("USBE6CSR0") __attribute__((section("sfrs"), address(0xBF8E3160)));
#define USBE6CSR1 USBE6CSR1
volatile uint32_t   USBE6CSR1 __attribute__((section("sfrs"), address(0xBF8E3164)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE6CSR1bits_t;
volatile __USBE6CSR1bits_t USBE6CSR1bits __asm__ ("USBE6CSR1") __attribute__((section("sfrs"), address(0xBF8E3164)));
#define USBE6CSR2 USBE6CSR2
volatile uint32_t   USBE6CSR2 __attribute__((section("sfrs"), address(0xBF8E3168)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE6CSR2bits_t;
volatile __USBE6CSR2bits_t USBE6CSR2bits __asm__ ("USBE6CSR2") __attribute__((section("sfrs"), address(0xBF8E3168)));
#define USBE6CSR3 USBE6CSR3
volatile uint32_t   USBE6CSR3 __attribute__((section("sfrs"), address(0xBF8E316C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE6CSR3bits_t;
volatile __USBE6CSR3bits_t USBE6CSR3bits __asm__ ("USBE6CSR3") __attribute__((section("sfrs"), address(0xBF8E316C)));
#define USBE7CSR0 USBE7CSR0
volatile uint32_t   USBE7CSR0 __attribute__((section("sfrs"), address(0xBF8E3170)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE7CSR0bits_t;
volatile __USBE7CSR0bits_t USBE7CSR0bits __asm__ ("USBE7CSR0") __attribute__((section("sfrs"), address(0xBF8E3170)));
#define USBE7CSR1 USBE7CSR1
volatile uint32_t   USBE7CSR1 __attribute__((section("sfrs"), address(0xBF8E3174)));
typedef union {
  struct {
    uint32_t RXMAXP:11;
    uint32_t MULT:5;
    uint32_t RXPKTRDY:1;
    uint32_t FIFOFULL:1;
    uint32_t ERROR:1;
    uint32_t DERRNAKT:1;
    uint32_t FLUSH:1;
    uint32_t REQPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t INCOMPRX:1;
    uint32_t DATATGGL:1;
    uint32_t DATATWEN:1;
    uint32_t DMAREQMD:1;
    uint32_t PIDERR:1;
    uint32_t DMAREQEN:1;
    uint32_t AUTORQ:1;
    uint32_t AUTOCLR:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBE7CSR1bits_t;
volatile __USBE7CSR1bits_t USBE7CSR1bits __asm__ ("USBE7CSR1") __attribute__((section("sfrs"), address(0xBF8E3174)));
#define USBE7CSR2 USBE7CSR2
volatile uint32_t   USBE7CSR2 __attribute__((section("sfrs"), address(0xBF8E3178)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBE7CSR2bits_t;
volatile __USBE7CSR2bits_t USBE7CSR2bits __asm__ ("USBE7CSR2") __attribute__((section("sfrs"), address(0xBF8E3178)));
#define USBE7CSR3 USBE7CSR3
volatile uint32_t   USBE7CSR3 __attribute__((section("sfrs"), address(0xBF8E317C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBE7CSR3bits_t;
volatile __USBE7CSR3bits_t USBE7CSR3bits __asm__ ("USBE7CSR3") __attribute__((section("sfrs"), address(0xBF8E317C)));
#define USBDMAINT USBDMAINT
volatile uint32_t   USBDMAINT __attribute__((section("sfrs"), address(0xBF8E3200)));
typedef struct {
  uint32_t DMA1IF:1;
  uint32_t DMA2IF:1;
  uint32_t DMA3IF:1;
  uint32_t DMA4IF:1;
  uint32_t DMA5IF:1;
  uint32_t DMA6IF:1;
  uint32_t DMA7IF:1;
  uint32_t DMA8IF:1;
} __USBDMAINTbits_t;
volatile __USBDMAINTbits_t USBDMAINTbits __asm__ ("USBDMAINT") __attribute__((section("sfrs"), address(0xBF8E3200)));
#define USBDMA1C USBDMA1C
volatile uint32_t   USBDMA1C __attribute__((section("sfrs"), address(0xBF8E3204)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA1Cbits_t;
volatile __USBDMA1Cbits_t USBDMA1Cbits __asm__ ("USBDMA1C") __attribute__((section("sfrs"), address(0xBF8E3204)));
#define USBDMA1A USBDMA1A
volatile uint32_t   USBDMA1A __attribute__((section("sfrs"), address(0xBF8E3208)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA1Abits_t;
volatile __USBDMA1Abits_t USBDMA1Abits __asm__ ("USBDMA1A") __attribute__((section("sfrs"), address(0xBF8E3208)));
#define USBDMA1N USBDMA1N
volatile uint32_t   USBDMA1N __attribute__((section("sfrs"), address(0xBF8E320C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA1Nbits_t;
volatile __USBDMA1Nbits_t USBDMA1Nbits __asm__ ("USBDMA1N") __attribute__((section("sfrs"), address(0xBF8E320C)));
#define USBDMA2C USBDMA2C
volatile uint32_t   USBDMA2C __attribute__((section("sfrs"), address(0xBF8E3214)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA2Cbits_t;
volatile __USBDMA2Cbits_t USBDMA2Cbits __asm__ ("USBDMA2C") __attribute__((section("sfrs"), address(0xBF8E3214)));
#define USBDMA2A USBDMA2A
volatile uint32_t   USBDMA2A __attribute__((section("sfrs"), address(0xBF8E3218)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA2Abits_t;
volatile __USBDMA2Abits_t USBDMA2Abits __asm__ ("USBDMA2A") __attribute__((section("sfrs"), address(0xBF8E3218)));
#define USBDMA2N USBDMA2N
volatile uint32_t   USBDMA2N __attribute__((section("sfrs"), address(0xBF8E321C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA2Nbits_t;
volatile __USBDMA2Nbits_t USBDMA2Nbits __asm__ ("USBDMA2N") __attribute__((section("sfrs"), address(0xBF8E321C)));
#define USBDMA3C USBDMA3C
volatile uint32_t   USBDMA3C __attribute__((section("sfrs"), address(0xBF8E3224)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA3Cbits_t;
volatile __USBDMA3Cbits_t USBDMA3Cbits __asm__ ("USBDMA3C") __attribute__((section("sfrs"), address(0xBF8E3224)));
#define USBDMA3A USBDMA3A
volatile uint32_t   USBDMA3A __attribute__((section("sfrs"), address(0xBF8E3228)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA3Abits_t;
volatile __USBDMA3Abits_t USBDMA3Abits __asm__ ("USBDMA3A") __attribute__((section("sfrs"), address(0xBF8E3228)));
#define USBDMA3N USBDMA3N
volatile uint32_t   USBDMA3N __attribute__((section("sfrs"), address(0xBF8E322C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA3Nbits_t;
volatile __USBDMA3Nbits_t USBDMA3Nbits __asm__ ("USBDMA3N") __attribute__((section("sfrs"), address(0xBF8E322C)));
#define USBDMA4C USBDMA4C
volatile uint32_t   USBDMA4C __attribute__((section("sfrs"), address(0xBF8E3234)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA4Cbits_t;
volatile __USBDMA4Cbits_t USBDMA4Cbits __asm__ ("USBDMA4C") __attribute__((section("sfrs"), address(0xBF8E3234)));
#define USBDMA4A USBDMA4A
volatile uint32_t   USBDMA4A __attribute__((section("sfrs"), address(0xBF8E3238)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA4Abits_t;
volatile __USBDMA4Abits_t USBDMA4Abits __asm__ ("USBDMA4A") __attribute__((section("sfrs"), address(0xBF8E3238)));
#define USBDMA4N USBDMA4N
volatile uint32_t   USBDMA4N __attribute__((section("sfrs"), address(0xBF8E323C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA4Nbits_t;
volatile __USBDMA4Nbits_t USBDMA4Nbits __asm__ ("USBDMA4N") __attribute__((section("sfrs"), address(0xBF8E323C)));
#define USBDMA5C USBDMA5C
volatile uint32_t   USBDMA5C __attribute__((section("sfrs"), address(0xBF8E3244)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA5Cbits_t;
volatile __USBDMA5Cbits_t USBDMA5Cbits __asm__ ("USBDMA5C") __attribute__((section("sfrs"), address(0xBF8E3244)));
#define USBDMA5A USBDMA5A
volatile uint32_t   USBDMA5A __attribute__((section("sfrs"), address(0xBF8E3248)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA5Abits_t;
volatile __USBDMA5Abits_t USBDMA5Abits __asm__ ("USBDMA5A") __attribute__((section("sfrs"), address(0xBF8E3248)));
#define USBDMA5N USBDMA5N
volatile uint32_t   USBDMA5N __attribute__((section("sfrs"), address(0xBF8E324C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA5Nbits_t;
volatile __USBDMA5Nbits_t USBDMA5Nbits __asm__ ("USBDMA5N") __attribute__((section("sfrs"), address(0xBF8E324C)));
#define USBDMA6C USBDMA6C
volatile uint32_t   USBDMA6C __attribute__((section("sfrs"), address(0xBF8E3254)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA6Cbits_t;
volatile __USBDMA6Cbits_t USBDMA6Cbits __asm__ ("USBDMA6C") __attribute__((section("sfrs"), address(0xBF8E3254)));
#define USBDMA6A USBDMA6A
volatile uint32_t   USBDMA6A __attribute__((section("sfrs"), address(0xBF8E3258)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA6Abits_t;
volatile __USBDMA6Abits_t USBDMA6Abits __asm__ ("USBDMA6A") __attribute__((section("sfrs"), address(0xBF8E3258)));
#define USBDMA6N USBDMA6N
volatile uint32_t   USBDMA6N __attribute__((section("sfrs"), address(0xBF8E325C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA6Nbits_t;
volatile __USBDMA6Nbits_t USBDMA6Nbits __asm__ ("USBDMA6N") __attribute__((section("sfrs"), address(0xBF8E325C)));
#define USBDMA7C USBDMA7C
volatile uint32_t   USBDMA7C __attribute__((section("sfrs"), address(0xBF8E3264)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA7Cbits_t;
volatile __USBDMA7Cbits_t USBDMA7Cbits __asm__ ("USBDMA7C") __attribute__((section("sfrs"), address(0xBF8E3264)));
#define USBDMA7A USBDMA7A
volatile uint32_t   USBDMA7A __attribute__((section("sfrs"), address(0xBF8E3268)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA7Abits_t;
volatile __USBDMA7Abits_t USBDMA7Abits __asm__ ("USBDMA7A") __attribute__((section("sfrs"), address(0xBF8E3268)));
#define USBDMA7N USBDMA7N
volatile uint32_t   USBDMA7N __attribute__((section("sfrs"), address(0xBF8E326C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA7Nbits_t;
volatile __USBDMA7Nbits_t USBDMA7Nbits __asm__ ("USBDMA7N") __attribute__((section("sfrs"), address(0xBF8E326C)));
#define USBDMA8C USBDMA8C
volatile uint32_t   USBDMA8C __attribute__((section("sfrs"), address(0xBF8E3274)));
typedef struct {
  uint32_t DMAEN:1;
  uint32_t DMADIR:1;
  uint32_t DMAMODE:1;
  uint32_t DMAIE:1;
  uint32_t DMAEP:4;
  uint32_t DMAERR:1;
  uint32_t DMABRSTM:2;
} __USBDMA8Cbits_t;
volatile __USBDMA8Cbits_t USBDMA8Cbits __asm__ ("USBDMA8C") __attribute__((section("sfrs"), address(0xBF8E3274)));
#define USBDMA8A USBDMA8A
volatile uint32_t   USBDMA8A __attribute__((section("sfrs"), address(0xBF8E3278)));
typedef struct {
  uint32_t DMAADDR:32;
} __USBDMA8Abits_t;
volatile __USBDMA8Abits_t USBDMA8Abits __asm__ ("USBDMA8A") __attribute__((section("sfrs"), address(0xBF8E3278)));
#define USBDMA8N USBDMA8N
volatile uint32_t   USBDMA8N __attribute__((section("sfrs"), address(0xBF8E327C)));
typedef struct {
  uint32_t DMACOUNT:32;
} __USBDMA8Nbits_t;
volatile __USBDMA8Nbits_t USBDMA8Nbits __asm__ ("USBDMA8N") __attribute__((section("sfrs"), address(0xBF8E327C)));
#define USBE1RPC USBE1RPC
volatile uint32_t   USBE1RPC __attribute__((section("sfrs"), address(0xBF8E3304)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE1RPCbits_t;
volatile __USBE1RPCbits_t USBE1RPCbits __asm__ ("USBE1RPC") __attribute__((section("sfrs"), address(0xBF8E3304)));
#define USBE2RPC USBE2RPC
volatile uint32_t   USBE2RPC __attribute__((section("sfrs"), address(0xBF8E3308)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE2RPCbits_t;
volatile __USBE2RPCbits_t USBE2RPCbits __asm__ ("USBE2RPC") __attribute__((section("sfrs"), address(0xBF8E3308)));
#define USBE3RPC USBE3RPC
volatile uint32_t   USBE3RPC __attribute__((section("sfrs"), address(0xBF8E330C)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE3RPCbits_t;
volatile __USBE3RPCbits_t USBE3RPCbits __asm__ ("USBE3RPC") __attribute__((section("sfrs"), address(0xBF8E330C)));
#define USBE4RPC USBE4RPC
volatile uint32_t   USBE4RPC __attribute__((section("sfrs"), address(0xBF8E3310)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE4RPCbits_t;
volatile __USBE4RPCbits_t USBE4RPCbits __asm__ ("USBE4RPC") __attribute__((section("sfrs"), address(0xBF8E3310)));
#define USBE5RPC USBE5RPC
volatile uint32_t   USBE5RPC __attribute__((section("sfrs"), address(0xBF8E3314)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE5RPCbits_t;
volatile __USBE5RPCbits_t USBE5RPCbits __asm__ ("USBE5RPC") __attribute__((section("sfrs"), address(0xBF8E3314)));
#define USBE6RPC USBE6RPC
volatile uint32_t   USBE6RPC __attribute__((section("sfrs"), address(0xBF8E3318)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE6RPCbits_t;
volatile __USBE6RPCbits_t USBE6RPCbits __asm__ ("USBE6RPC") __attribute__((section("sfrs"), address(0xBF8E3318)));
#define USBE7RPC USBE7RPC
volatile uint32_t   USBE7RPC __attribute__((section("sfrs"), address(0xBF8E331C)));
typedef struct {
  uint32_t RQPKTCNT:16;
} __USBE7RPCbits_t;
volatile __USBE7RPCbits_t USBE7RPCbits __asm__ ("USBE7RPC") __attribute__((section("sfrs"), address(0xBF8E331C)));
#define USBDPBFD USBDPBFD
volatile uint32_t   USBDPBFD __attribute__((section("sfrs"), address(0xBF8E3340)));
typedef struct {
  uint32_t :1;
  uint32_t EP1RXD:1;
  uint32_t EP2RXD:1;
  uint32_t EP3RXD:1;
  uint32_t EP4RXD:1;
  uint32_t EP5RXD:1;
  uint32_t EP6RXD:1;
  uint32_t EP7RXD:1;
  uint32_t :9;
  uint32_t EP1TXD:1;
  uint32_t EP2TXD:1;
  uint32_t EP3TXD:1;
  uint32_t EP4TXD:1;
  uint32_t EP5TXD:1;
  uint32_t EP6TXD:1;
  uint32_t EP7TXD:1;
} __USBDPBFDbits_t;
volatile __USBDPBFDbits_t USBDPBFDbits __asm__ ("USBDPBFD") __attribute__((section("sfrs"), address(0xBF8E3340)));
#define USBTMCON1 USBTMCON1
volatile uint32_t   USBTMCON1 __attribute__((section("sfrs"), address(0xBF8E3344)));
typedef struct {
  uint32_t TUCH:16;
  uint32_t THHSRTN:16;
} __USBTMCON1bits_t;
volatile __USBTMCON1bits_t USBTMCON1bits __asm__ ("USBTMCON1") __attribute__((section("sfrs"), address(0xBF8E3344)));
#define USBTMCON2 USBTMCON2
volatile uint32_t   USBTMCON2 __attribute__((section("sfrs"), address(0xBF8E3348)));
typedef struct {
  uint32_t THSBT:4;
} __USBTMCON2bits_t;
volatile __USBTMCON2bits_t USBTMCON2bits __asm__ ("USBTMCON2") __attribute__((section("sfrs"), address(0xBF8E3348)));
#define USBLPMR1 USBLPMR1
volatile uint32_t   USBLPMR1 __attribute__((section("sfrs"), address(0xBF8E3360)));
typedef struct {
  uint32_t LNKSTATE:4;
  uint32_t HIRD:4;
  uint32_t RMTWAK:1;
  uint32_t :3;
  uint32_t ENDPOINT:4;
  uint32_t LPMXMT:1;
  uint32_t LPMRES:1;
  uint32_t LPMEN:2;
  uint32_t LPMNAK:1;
  uint32_t :3;
  uint32_t LPMTOIE:1;
  uint32_t LPMSTIE:1;
  uint32_t LPMNYIE:1;
  uint32_t LPMACKIE:1;
  uint32_t LPMRESIE:1;
  uint32_t LPMERRIE:1;
} __USBLPMR1bits_t;
volatile __USBLPMR1bits_t USBLPMR1bits __asm__ ("USBLPMR1") __attribute__((section("sfrs"), address(0xBF8E3360)));
#define USBLMPR2 USBLMPR2
volatile uint32_t   USBLMPR2 __attribute__((section("sfrs"), address(0xBF8E3364)));
typedef struct {
  uint32_t LPMST:1;
  uint32_t LPMNY:1;
  uint32_t LPMACK:1;
  uint32_t LPMNC:1;
  uint32_t LPMRES:1;
  uint32_t LPMERR:1;
  uint32_t :2;
  uint32_t LPMFADDR:7;
} __USBLMPR2bits_t;
volatile __USBLMPR2bits_t USBLMPR2bits __asm__ ("USBLMPR2") __attribute__((section("sfrs"), address(0xBF8E3364)));
#define USBLPMP2 USBLPMP2
volatile uint32_t   USBLPMP2 __attribute__((section("sfrs"), address(0xBF8E3364)));
typedef struct {
  uint32_t LPMST:1;
  uint32_t LPMNY:1;
  uint32_t LPMACK:1;
  uint32_t LPMNC:1;
  uint32_t LPMRES:1;
  uint32_t LPMERR:1;
  uint32_t :2;
  uint32_t LPMFADDR:7;
} __USBLPMP2bits_t;
volatile __USBLPMP2bits_t USBLPMP2bits __asm__ ("USBLPMP2") __attribute__((section("sfrs"), address(0xBF8E3364)));
#define RNGVER RNGVER
volatile uint32_t   RNGVER __attribute__((section("sfrs"), address(0xBF8E6000)));
typedef struct {
  uint32_t REVISION:7;
  uint32_t VERSION:9;
  uint32_t ID:16;
} __RNGVERbits_t;
volatile __RNGVERbits_t RNGVERbits __asm__ ("RNGVER") __attribute__((section("sfrs"), address(0xBF8E6000)));
#define RNGCON RNGCON
volatile uint32_t   RNGCON __attribute__((section("sfrs"), address(0xBF8E6004)));
typedef struct {
  uint32_t PLEN:8;
  uint32_t TRNGEN:1;
  uint32_t PRNGEN:1;
  uint32_t CONT:1;
  uint32_t TRNGMODE:1;
  uint32_t LOAD:1;
} __RNGCONbits_t;
volatile __RNGCONbits_t RNGCONbits __asm__ ("RNGCON") __attribute__((section("sfrs"), address(0xBF8E6004)));
#define RNGPOLY1 RNGPOLY1
volatile uint32_t   RNGPOLY1 __attribute__((section("sfrs"), address(0xBF8E6008)));
typedef struct {
  uint32_t POLY:32;
} __RNGPOLY1bits_t;
volatile __RNGPOLY1bits_t RNGPOLY1bits __asm__ ("RNGPOLY1") __attribute__((section("sfrs"), address(0xBF8E6008)));
#define RNGPOLY2 RNGPOLY2
volatile uint32_t   RNGPOLY2 __attribute__((section("sfrs"), address(0xBF8E600C)));
typedef struct {
  uint32_t POLY:32;
} __RNGPOLY2bits_t;
volatile __RNGPOLY2bits_t RNGPOLY2bits __asm__ ("RNGPOLY2") __attribute__((section("sfrs"), address(0xBF8E600C)));
#define RNGNUMGEN1 RNGNUMGEN1
volatile uint32_t   RNGNUMGEN1 __attribute__((section("sfrs"), address(0xBF8E6010)));
typedef struct {
  uint32_t RNG:32;
} __RNGNUMGEN1bits_t;
volatile __RNGNUMGEN1bits_t RNGNUMGEN1bits __asm__ ("RNGNUMGEN1") __attribute__((section("sfrs"), address(0xBF8E6010)));
#define RNGNUMGEN2 RNGNUMGEN2
volatile uint32_t   RNGNUMGEN2 __attribute__((section("sfrs"), address(0xBF8E6014)));
typedef struct {
  uint32_t RNG:32;
} __RNGNUMGEN2bits_t;
volatile __RNGNUMGEN2bits_t RNGNUMGEN2bits __asm__ ("RNGNUMGEN2") __attribute__((section("sfrs"), address(0xBF8E6014)));
#define RNGSEED1 RNGSEED1
volatile uint32_t   RNGSEED1 __attribute__((section("sfrs"), address(0xBF8E6018)));
typedef struct {
  uint32_t SEED:32;
} __RNGSEED1bits_t;
volatile __RNGSEED1bits_t RNGSEED1bits __asm__ ("RNGSEED1") __attribute__((section("sfrs"), address(0xBF8E6018)));
#define RNGSEED2 RNGSEED2
volatile uint32_t   RNGSEED2 __attribute__((section("sfrs"), address(0xBF8E601C)));
typedef struct {
  uint32_t SEED:32;
} __RNGSEED2bits_t;
volatile __RNGSEED2bits_t RNGSEED2bits __asm__ ("RNGSEED2") __attribute__((section("sfrs"), address(0xBF8E601C)));
#define RNGCNT RNGCNT
volatile uint32_t   RNGCNT __attribute__((section("sfrs"), address(0xBF8E6020)));
typedef struct {
  uint32_t RCNT:7;
} __RNGCNTbits_t;
volatile __RNGCNTbits_t RNGCNTbits __asm__ ("RNGCNT") __attribute__((section("sfrs"), address(0xBF8E6020)));
#define SBFLAG SBFLAG
volatile uint32_t   SBFLAG __attribute__((section("sfrs"), address(0xBF8F0510)));
typedef struct {
  uint32_t T0PGV:1;
  uint32_t T1PGV:1;
  uint32_t T2PGV:1;
  uint32_t T3PGV:1;
  uint32_t T4PGV:1;
  uint32_t T5PGV:1;
  uint32_t T6PGV:1;
  uint32_t T7PGV:1;
  uint32_t T8PGV:1;
  uint32_t T9PGV:1;
  uint32_t T10PGV:1;
  uint32_t T11PGV:1;
  uint32_t T12PGV:1;
  uint32_t T13PGV:1;
} __SBFLAGbits_t;
volatile __SBFLAGbits_t SBFLAGbits __asm__ ("SBFLAG") __attribute__((section("sfrs"), address(0xBF8F0510)));
#define SBT0ELOG1 SBT0ELOG1
volatile uint32_t   SBT0ELOG1 __attribute__((section("sfrs"), address(0xBF8F8020)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT0ELOG1bits_t;
volatile __SBT0ELOG1bits_t SBT0ELOG1bits __asm__ ("SBT0ELOG1") __attribute__((section("sfrs"), address(0xBF8F8020)));
#define SBT0ELOG2 SBT0ELOG2
volatile uint32_t   SBT0ELOG2 __attribute__((section("sfrs"), address(0xBF8F8024)));
typedef struct {
  uint32_t GROUP:2;
} __SBT0ELOG2bits_t;
volatile __SBT0ELOG2bits_t SBT0ELOG2bits __asm__ ("SBT0ELOG2") __attribute__((section("sfrs"), address(0xBF8F8024)));
#define SBT0ECON SBT0ECON
volatile uint32_t   SBT0ECON __attribute__((section("sfrs"), address(0xBF8F8028)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT0ECONbits_t;
volatile __SBT0ECONbits_t SBT0ECONbits __asm__ ("SBT0ECON") __attribute__((section("sfrs"), address(0xBF8F8028)));
#define SBT0ECLRS SBT0ECLRS
volatile uint32_t   SBT0ECLRS __attribute__((section("sfrs"), address(0xBF8F8030)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT0ECLRSbits_t;
volatile __SBT0ECLRSbits_t SBT0ECLRSbits __asm__ ("SBT0ECLRS") __attribute__((section("sfrs"), address(0xBF8F8030)));
#define SBT0ECLRM SBT0ECLRM
volatile uint32_t   SBT0ECLRM __attribute__((section("sfrs"), address(0xBF8F8038)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT0ECLRMbits_t;
volatile __SBT0ECLRMbits_t SBT0ECLRMbits __asm__ ("SBT0ECLRM") __attribute__((section("sfrs"), address(0xBF8F8038)));
#define SBT0REG0 SBT0REG0
volatile uint32_t   SBT0REG0 __attribute__((section("sfrs"), address(0xBF8F8040)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT0REG0bits_t;
volatile __SBT0REG0bits_t SBT0REG0bits __asm__ ("SBT0REG0") __attribute__((section("sfrs"), address(0xBF8F8040)));
#define SBT0RD0 SBT0RD0
volatile uint32_t   SBT0RD0 __attribute__((section("sfrs"), address(0xBF8F8050)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT0RD0bits_t;
volatile __SBT0RD0bits_t SBT0RD0bits __asm__ ("SBT0RD0") __attribute__((section("sfrs"), address(0xBF8F8050)));
#define SBT0WR0 SBT0WR0
volatile uint32_t   SBT0WR0 __attribute__((section("sfrs"), address(0xBF8F8058)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT0WR0bits_t;
volatile __SBT0WR0bits_t SBT0WR0bits __asm__ ("SBT0WR0") __attribute__((section("sfrs"), address(0xBF8F8058)));
#define SBT0REG1 SBT0REG1
volatile uint32_t   SBT0REG1 __attribute__((section("sfrs"), address(0xBF8F8060)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT0REG1bits_t;
volatile __SBT0REG1bits_t SBT0REG1bits __asm__ ("SBT0REG1") __attribute__((section("sfrs"), address(0xBF8F8060)));
#define SBT0RD1 SBT0RD1
volatile uint32_t   SBT0RD1 __attribute__((section("sfrs"), address(0xBF8F8070)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT0RD1bits_t;
volatile __SBT0RD1bits_t SBT0RD1bits __asm__ ("SBT0RD1") __attribute__((section("sfrs"), address(0xBF8F8070)));
#define SBT0WR1 SBT0WR1
volatile uint32_t   SBT0WR1 __attribute__((section("sfrs"), address(0xBF8F8078)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT0WR1bits_t;
volatile __SBT0WR1bits_t SBT0WR1bits __asm__ ("SBT0WR1") __attribute__((section("sfrs"), address(0xBF8F8078)));
#define SBT1ELOG1 SBT1ELOG1
volatile uint32_t   SBT1ELOG1 __attribute__((section("sfrs"), address(0xBF8F8420)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT1ELOG1bits_t;
volatile __SBT1ELOG1bits_t SBT1ELOG1bits __asm__ ("SBT1ELOG1") __attribute__((section("sfrs"), address(0xBF8F8420)));
#define SBT1ELOG2 SBT1ELOG2
volatile uint32_t   SBT1ELOG2 __attribute__((section("sfrs"), address(0xBF8F8424)));
typedef struct {
  uint32_t GROUP:2;
} __SBT1ELOG2bits_t;
volatile __SBT1ELOG2bits_t SBT1ELOG2bits __asm__ ("SBT1ELOG2") __attribute__((section("sfrs"), address(0xBF8F8424)));
#define SBT1ECON SBT1ECON
volatile uint32_t   SBT1ECON __attribute__((section("sfrs"), address(0xBF8F8428)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT1ECONbits_t;
volatile __SBT1ECONbits_t SBT1ECONbits __asm__ ("SBT1ECON") __attribute__((section("sfrs"), address(0xBF8F8428)));
#define SBT1ECLRS SBT1ECLRS
volatile uint32_t   SBT1ECLRS __attribute__((section("sfrs"), address(0xBF8F8430)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT1ECLRSbits_t;
volatile __SBT1ECLRSbits_t SBT1ECLRSbits __asm__ ("SBT1ECLRS") __attribute__((section("sfrs"), address(0xBF8F8430)));
#define SBT1ECLRM SBT1ECLRM
volatile uint32_t   SBT1ECLRM __attribute__((section("sfrs"), address(0xBF8F8438)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT1ECLRMbits_t;
volatile __SBT1ECLRMbits_t SBT1ECLRMbits __asm__ ("SBT1ECLRM") __attribute__((section("sfrs"), address(0xBF8F8438)));
#define SBT1REG0 SBT1REG0
volatile uint32_t   SBT1REG0 __attribute__((section("sfrs"), address(0xBF8F8440)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG0bits_t;
volatile __SBT1REG0bits_t SBT1REG0bits __asm__ ("SBT1REG0") __attribute__((section("sfrs"), address(0xBF8F8440)));
#define SBT1RD0 SBT1RD0
volatile uint32_t   SBT1RD0 __attribute__((section("sfrs"), address(0xBF8F8450)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD0bits_t;
volatile __SBT1RD0bits_t SBT1RD0bits __asm__ ("SBT1RD0") __attribute__((section("sfrs"), address(0xBF8F8450)));
#define SBT1WR0 SBT1WR0
volatile uint32_t   SBT1WR0 __attribute__((section("sfrs"), address(0xBF8F8458)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR0bits_t;
volatile __SBT1WR0bits_t SBT1WR0bits __asm__ ("SBT1WR0") __attribute__((section("sfrs"), address(0xBF8F8458)));
#define SBT1REG2 SBT1REG2
volatile uint32_t   SBT1REG2 __attribute__((section("sfrs"), address(0xBF8F8480)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG2bits_t;
volatile __SBT1REG2bits_t SBT1REG2bits __asm__ ("SBT1REG2") __attribute__((section("sfrs"), address(0xBF8F8480)));
#define SBT1RD2 SBT1RD2
volatile uint32_t   SBT1RD2 __attribute__((section("sfrs"), address(0xBF8F8490)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD2bits_t;
volatile __SBT1RD2bits_t SBT1RD2bits __asm__ ("SBT1RD2") __attribute__((section("sfrs"), address(0xBF8F8490)));
#define SBT1WR2 SBT1WR2
volatile uint32_t   SBT1WR2 __attribute__((section("sfrs"), address(0xBF8F8498)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR2bits_t;
volatile __SBT1WR2bits_t SBT1WR2bits __asm__ ("SBT1WR2") __attribute__((section("sfrs"), address(0xBF8F8498)));
#define SBT1REG3 SBT1REG3
volatile uint32_t   SBT1REG3 __attribute__((section("sfrs"), address(0xBF8F84A0)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG3bits_t;
volatile __SBT1REG3bits_t SBT1REG3bits __asm__ ("SBT1REG3") __attribute__((section("sfrs"), address(0xBF8F84A0)));
#define SBT1RD3 SBT1RD3
volatile uint32_t   SBT1RD3 __attribute__((section("sfrs"), address(0xBF8F84B0)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD3bits_t;
volatile __SBT1RD3bits_t SBT1RD3bits __asm__ ("SBT1RD3") __attribute__((section("sfrs"), address(0xBF8F84B0)));
#define SBT1WR3 SBT1WR3
volatile uint32_t   SBT1WR3 __attribute__((section("sfrs"), address(0xBF8F84B8)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR3bits_t;
volatile __SBT1WR3bits_t SBT1WR3bits __asm__ ("SBT1WR3") __attribute__((section("sfrs"), address(0xBF8F84B8)));
#define SBT1REG4 SBT1REG4
volatile uint32_t   SBT1REG4 __attribute__((section("sfrs"), address(0xBF8F84C0)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG4bits_t;
volatile __SBT1REG4bits_t SBT1REG4bits __asm__ ("SBT1REG4") __attribute__((section("sfrs"), address(0xBF8F84C0)));
#define SBT1RD4 SBT1RD4
volatile uint32_t   SBT1RD4 __attribute__((section("sfrs"), address(0xBF8F84D0)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD4bits_t;
volatile __SBT1RD4bits_t SBT1RD4bits __asm__ ("SBT1RD4") __attribute__((section("sfrs"), address(0xBF8F84D0)));
#define SBT1WR4 SBT1WR4
volatile uint32_t   SBT1WR4 __attribute__((section("sfrs"), address(0xBF8F84D8)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR4bits_t;
volatile __SBT1WR4bits_t SBT1WR4bits __asm__ ("SBT1WR4") __attribute__((section("sfrs"), address(0xBF8F84D8)));
#define SBT1REG5 SBT1REG5
volatile uint32_t   SBT1REG5 __attribute__((section("sfrs"), address(0xBF8F84E0)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG5bits_t;
volatile __SBT1REG5bits_t SBT1REG5bits __asm__ ("SBT1REG5") __attribute__((section("sfrs"), address(0xBF8F84E0)));
#define SBT1RD5 SBT1RD5
volatile uint32_t   SBT1RD5 __attribute__((section("sfrs"), address(0xBF8F84F0)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD5bits_t;
volatile __SBT1RD5bits_t SBT1RD5bits __asm__ ("SBT1RD5") __attribute__((section("sfrs"), address(0xBF8F84F0)));
#define SBT1WR5 SBT1WR5
volatile uint32_t   SBT1WR5 __attribute__((section("sfrs"), address(0xBF8F84F8)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR5bits_t;
volatile __SBT1WR5bits_t SBT1WR5bits __asm__ ("SBT1WR5") __attribute__((section("sfrs"), address(0xBF8F84F8)));
#define SBT1REG6 SBT1REG6
volatile uint32_t   SBT1REG6 __attribute__((section("sfrs"), address(0xBF8F8500)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG6bits_t;
volatile __SBT1REG6bits_t SBT1REG6bits __asm__ ("SBT1REG6") __attribute__((section("sfrs"), address(0xBF8F8500)));
#define SBT1RD6 SBT1RD6
volatile uint32_t   SBT1RD6 __attribute__((section("sfrs"), address(0xBF8F8510)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD6bits_t;
volatile __SBT1RD6bits_t SBT1RD6bits __asm__ ("SBT1RD6") __attribute__((section("sfrs"), address(0xBF8F8510)));
#define SBT1WR6 SBT1WR6
volatile uint32_t   SBT1WR6 __attribute__((section("sfrs"), address(0xBF8F8518)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR6bits_t;
volatile __SBT1WR6bits_t SBT1WR6bits __asm__ ("SBT1WR6") __attribute__((section("sfrs"), address(0xBF8F8518)));
#define SBT1REG7 SBT1REG7
volatile uint32_t   SBT1REG7 __attribute__((section("sfrs"), address(0xBF8F8520)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG7bits_t;
volatile __SBT1REG7bits_t SBT1REG7bits __asm__ ("SBT1REG7") __attribute__((section("sfrs"), address(0xBF8F8520)));
#define SBT1RD7 SBT1RD7
volatile uint32_t   SBT1RD7 __attribute__((section("sfrs"), address(0xBF8F8530)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD7bits_t;
volatile __SBT1RD7bits_t SBT1RD7bits __asm__ ("SBT1RD7") __attribute__((section("sfrs"), address(0xBF8F8530)));
#define SBT1WR7 SBT1WR7
volatile uint32_t   SBT1WR7 __attribute__((section("sfrs"), address(0xBF8F8538)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR7bits_t;
volatile __SBT1WR7bits_t SBT1WR7bits __asm__ ("SBT1WR7") __attribute__((section("sfrs"), address(0xBF8F8538)));
#define SBT1REG8 SBT1REG8
volatile uint32_t   SBT1REG8 __attribute__((section("sfrs"), address(0xBF8F8540)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT1REG8bits_t;
volatile __SBT1REG8bits_t SBT1REG8bits __asm__ ("SBT1REG8") __attribute__((section("sfrs"), address(0xBF8F8540)));
#define SBT1RD8 SBT1RD8
volatile uint32_t   SBT1RD8 __attribute__((section("sfrs"), address(0xBF8F8550)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1RD8bits_t;
volatile __SBT1RD8bits_t SBT1RD8bits __asm__ ("SBT1RD8") __attribute__((section("sfrs"), address(0xBF8F8550)));
#define SBT1WR8 SBT1WR8
volatile uint32_t   SBT1WR8 __attribute__((section("sfrs"), address(0xBF8F8558)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT1WR8bits_t;
volatile __SBT1WR8bits_t SBT1WR8bits __asm__ ("SBT1WR8") __attribute__((section("sfrs"), address(0xBF8F8558)));
#define SBT2ELOG1 SBT2ELOG1
volatile uint32_t   SBT2ELOG1 __attribute__((section("sfrs"), address(0xBF8F8820)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT2ELOG1bits_t;
volatile __SBT2ELOG1bits_t SBT2ELOG1bits __asm__ ("SBT2ELOG1") __attribute__((section("sfrs"), address(0xBF8F8820)));
#define SBT2ELOG2 SBT2ELOG2
volatile uint32_t   SBT2ELOG2 __attribute__((section("sfrs"), address(0xBF8F8824)));
typedef struct {
  uint32_t GROUP:2;
} __SBT2ELOG2bits_t;
volatile __SBT2ELOG2bits_t SBT2ELOG2bits __asm__ ("SBT2ELOG2") __attribute__((section("sfrs"), address(0xBF8F8824)));
#define SBT2ECON SBT2ECON
volatile uint32_t   SBT2ECON __attribute__((section("sfrs"), address(0xBF8F8828)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT2ECONbits_t;
volatile __SBT2ECONbits_t SBT2ECONbits __asm__ ("SBT2ECON") __attribute__((section("sfrs"), address(0xBF8F8828)));
#define SBT2ECLRS SBT2ECLRS
volatile uint32_t   SBT2ECLRS __attribute__((section("sfrs"), address(0xBF8F8830)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT2ECLRSbits_t;
volatile __SBT2ECLRSbits_t SBT2ECLRSbits __asm__ ("SBT2ECLRS") __attribute__((section("sfrs"), address(0xBF8F8830)));
#define SBT2ECLRM SBT2ECLRM
volatile uint32_t   SBT2ECLRM __attribute__((section("sfrs"), address(0xBF8F8838)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT2ECLRMbits_t;
volatile __SBT2ECLRMbits_t SBT2ECLRMbits __asm__ ("SBT2ECLRM") __attribute__((section("sfrs"), address(0xBF8F8838)));
#define SBT2REG0 SBT2REG0
volatile uint32_t   SBT2REG0 __attribute__((section("sfrs"), address(0xBF8F8840)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT2REG0bits_t;
volatile __SBT2REG0bits_t SBT2REG0bits __asm__ ("SBT2REG0") __attribute__((section("sfrs"), address(0xBF8F8840)));
#define SBT2RD0 SBT2RD0
volatile uint32_t   SBT2RD0 __attribute__((section("sfrs"), address(0xBF8F8850)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT2RD0bits_t;
volatile __SBT2RD0bits_t SBT2RD0bits __asm__ ("SBT2RD0") __attribute__((section("sfrs"), address(0xBF8F8850)));
#define SBT2WR0 SBT2WR0
volatile uint32_t   SBT2WR0 __attribute__((section("sfrs"), address(0xBF8F8858)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT2WR0bits_t;
volatile __SBT2WR0bits_t SBT2WR0bits __asm__ ("SBT2WR0") __attribute__((section("sfrs"), address(0xBF8F8858)));
#define SBT2REG1 SBT2REG1
volatile uint32_t   SBT2REG1 __attribute__((section("sfrs"), address(0xBF8F8860)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT2REG1bits_t;
volatile __SBT2REG1bits_t SBT2REG1bits __asm__ ("SBT2REG1") __attribute__((section("sfrs"), address(0xBF8F8860)));
#define SBT2RD1 SBT2RD1
volatile uint32_t   SBT2RD1 __attribute__((section("sfrs"), address(0xBF8F8870)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT2RD1bits_t;
volatile __SBT2RD1bits_t SBT2RD1bits __asm__ ("SBT2RD1") __attribute__((section("sfrs"), address(0xBF8F8870)));
#define SBT2WR1 SBT2WR1
volatile uint32_t   SBT2WR1 __attribute__((section("sfrs"), address(0xBF8F8878)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT2WR1bits_t;
volatile __SBT2WR1bits_t SBT2WR1bits __asm__ ("SBT2WR1") __attribute__((section("sfrs"), address(0xBF8F8878)));
#define SBT2REG2 SBT2REG2
volatile uint32_t   SBT2REG2 __attribute__((section("sfrs"), address(0xBF8F8880)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT2REG2bits_t;
volatile __SBT2REG2bits_t SBT2REG2bits __asm__ ("SBT2REG2") __attribute__((section("sfrs"), address(0xBF8F8880)));
#define SBT2RD2 SBT2RD2
volatile uint32_t   SBT2RD2 __attribute__((section("sfrs"), address(0xBF8F8890)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT2RD2bits_t;
volatile __SBT2RD2bits_t SBT2RD2bits __asm__ ("SBT2RD2") __attribute__((section("sfrs"), address(0xBF8F8890)));
#define SBT2WR2 SBT2WR2
volatile uint32_t   SBT2WR2 __attribute__((section("sfrs"), address(0xBF8F8898)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT2WR2bits_t;
volatile __SBT2WR2bits_t SBT2WR2bits __asm__ ("SBT2WR2") __attribute__((section("sfrs"), address(0xBF8F8898)));
#define SBT3ELOG1 SBT3ELOG1
volatile uint32_t   SBT3ELOG1 __attribute__((section("sfrs"), address(0xBF8F8C20)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT3ELOG1bits_t;
volatile __SBT3ELOG1bits_t SBT3ELOG1bits __asm__ ("SBT3ELOG1") __attribute__((section("sfrs"), address(0xBF8F8C20)));
#define SBT3ELOG2 SBT3ELOG2
volatile uint32_t   SBT3ELOG2 __attribute__((section("sfrs"), address(0xBF8F8C24)));
typedef struct {
  uint32_t GROUP:2;
} __SBT3ELOG2bits_t;
volatile __SBT3ELOG2bits_t SBT3ELOG2bits __asm__ ("SBT3ELOG2") __attribute__((section("sfrs"), address(0xBF8F8C24)));
#define SBT3ECON SBT3ECON
volatile uint32_t   SBT3ECON __attribute__((section("sfrs"), address(0xBF8F8C28)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT3ECONbits_t;
volatile __SBT3ECONbits_t SBT3ECONbits __asm__ ("SBT3ECON") __attribute__((section("sfrs"), address(0xBF8F8C28)));
#define SBT3ECLRS SBT3ECLRS
volatile uint32_t   SBT3ECLRS __attribute__((section("sfrs"), address(0xBF8F8C30)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT3ECLRSbits_t;
volatile __SBT3ECLRSbits_t SBT3ECLRSbits __asm__ ("SBT3ECLRS") __attribute__((section("sfrs"), address(0xBF8F8C30)));
#define SBT3ECLRM SBT3ECLRM
volatile uint32_t   SBT3ECLRM __attribute__((section("sfrs"), address(0xBF8F8C38)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT3ECLRMbits_t;
volatile __SBT3ECLRMbits_t SBT3ECLRMbits __asm__ ("SBT3ECLRM") __attribute__((section("sfrs"), address(0xBF8F8C38)));
#define SBT3REG0 SBT3REG0
volatile uint32_t   SBT3REG0 __attribute__((section("sfrs"), address(0xBF8F8C40)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT3REG0bits_t;
volatile __SBT3REG0bits_t SBT3REG0bits __asm__ ("SBT3REG0") __attribute__((section("sfrs"), address(0xBF8F8C40)));
#define SBT3RD0 SBT3RD0
volatile uint32_t   SBT3RD0 __attribute__((section("sfrs"), address(0xBF8F8C50)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT3RD0bits_t;
volatile __SBT3RD0bits_t SBT3RD0bits __asm__ ("SBT3RD0") __attribute__((section("sfrs"), address(0xBF8F8C50)));
#define SBT3WR0 SBT3WR0
volatile uint32_t   SBT3WR0 __attribute__((section("sfrs"), address(0xBF8F8C58)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT3WR0bits_t;
volatile __SBT3WR0bits_t SBT3WR0bits __asm__ ("SBT3WR0") __attribute__((section("sfrs"), address(0xBF8F8C58)));
#define SBT3REG1 SBT3REG1
volatile uint32_t   SBT3REG1 __attribute__((section("sfrs"), address(0xBF8F8C60)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT3REG1bits_t;
volatile __SBT3REG1bits_t SBT3REG1bits __asm__ ("SBT3REG1") __attribute__((section("sfrs"), address(0xBF8F8C60)));
#define SBT3RD1 SBT3RD1
volatile uint32_t   SBT3RD1 __attribute__((section("sfrs"), address(0xBF8F8C70)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT3RD1bits_t;
volatile __SBT3RD1bits_t SBT3RD1bits __asm__ ("SBT3RD1") __attribute__((section("sfrs"), address(0xBF8F8C70)));
#define SBT3WR1 SBT3WR1
volatile uint32_t   SBT3WR1 __attribute__((section("sfrs"), address(0xBF8F8C78)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT3WR1bits_t;
volatile __SBT3WR1bits_t SBT3WR1bits __asm__ ("SBT3WR1") __attribute__((section("sfrs"), address(0xBF8F8C78)));
#define SBT3REG2 SBT3REG2
volatile uint32_t   SBT3REG2 __attribute__((section("sfrs"), address(0xBF8F8C80)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT3REG2bits_t;
volatile __SBT3REG2bits_t SBT3REG2bits __asm__ ("SBT3REG2") __attribute__((section("sfrs"), address(0xBF8F8C80)));
#define SBT3RD2 SBT3RD2
volatile uint32_t   SBT3RD2 __attribute__((section("sfrs"), address(0xBF8F8C90)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT3RD2bits_t;
volatile __SBT3RD2bits_t SBT3RD2bits __asm__ ("SBT3RD2") __attribute__((section("sfrs"), address(0xBF8F8C90)));
#define SBT3WR2 SBT3WR2
volatile uint32_t   SBT3WR2 __attribute__((section("sfrs"), address(0xBF8F8C98)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT3WR2bits_t;
volatile __SBT3WR2bits_t SBT3WR2bits __asm__ ("SBT3WR2") __attribute__((section("sfrs"), address(0xBF8F8C98)));
#define SBT4ELOG1 SBT4ELOG1
volatile uint32_t   SBT4ELOG1 __attribute__((section("sfrs"), address(0xBF8F9020)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT4ELOG1bits_t;
volatile __SBT4ELOG1bits_t SBT4ELOG1bits __asm__ ("SBT4ELOG1") __attribute__((section("sfrs"), address(0xBF8F9020)));
#define SBT4ELOG2 SBT4ELOG2
volatile uint32_t   SBT4ELOG2 __attribute__((section("sfrs"), address(0xBF8F9024)));
typedef struct {
  uint32_t GROUP:2;
} __SBT4ELOG2bits_t;
volatile __SBT4ELOG2bits_t SBT4ELOG2bits __asm__ ("SBT4ELOG2") __attribute__((section("sfrs"), address(0xBF8F9024)));
#define SBT4ECON SBT4ECON
volatile uint32_t   SBT4ECON __attribute__((section("sfrs"), address(0xBF8F9028)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT4ECONbits_t;
volatile __SBT4ECONbits_t SBT4ECONbits __asm__ ("SBT4ECON") __attribute__((section("sfrs"), address(0xBF8F9028)));
#define SBT4ECLRS SBT4ECLRS
volatile uint32_t   SBT4ECLRS __attribute__((section("sfrs"), address(0xBF8F9030)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT4ECLRSbits_t;
volatile __SBT4ECLRSbits_t SBT4ECLRSbits __asm__ ("SBT4ECLRS") __attribute__((section("sfrs"), address(0xBF8F9030)));
#define SBT4ECLRM SBT4ECLRM
volatile uint32_t   SBT4ECLRM __attribute__((section("sfrs"), address(0xBF8F9038)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT4ECLRMbits_t;
volatile __SBT4ECLRMbits_t SBT4ECLRMbits __asm__ ("SBT4ECLRM") __attribute__((section("sfrs"), address(0xBF8F9038)));
#define SBT4REG0 SBT4REG0
volatile uint32_t   SBT4REG0 __attribute__((section("sfrs"), address(0xBF8F9040)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT4REG0bits_t;
volatile __SBT4REG0bits_t SBT4REG0bits __asm__ ("SBT4REG0") __attribute__((section("sfrs"), address(0xBF8F9040)));
#define SBT4RD0 SBT4RD0
volatile uint32_t   SBT4RD0 __attribute__((section("sfrs"), address(0xBF8F9050)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT4RD0bits_t;
volatile __SBT4RD0bits_t SBT4RD0bits __asm__ ("SBT4RD0") __attribute__((section("sfrs"), address(0xBF8F9050)));
#define SBT4WR0 SBT4WR0
volatile uint32_t   SBT4WR0 __attribute__((section("sfrs"), address(0xBF8F9058)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT4WR0bits_t;
volatile __SBT4WR0bits_t SBT4WR0bits __asm__ ("SBT4WR0") __attribute__((section("sfrs"), address(0xBF8F9058)));
#define SBT4REG2 SBT4REG2
volatile uint32_t   SBT4REG2 __attribute__((section("sfrs"), address(0xBF8F9080)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT4REG2bits_t;
volatile __SBT4REG2bits_t SBT4REG2bits __asm__ ("SBT4REG2") __attribute__((section("sfrs"), address(0xBF8F9080)));
#define SBT4RD2 SBT4RD2
volatile uint32_t   SBT4RD2 __attribute__((section("sfrs"), address(0xBF8F9090)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT4RD2bits_t;
volatile __SBT4RD2bits_t SBT4RD2bits __asm__ ("SBT4RD2") __attribute__((section("sfrs"), address(0xBF8F9090)));
#define SBT4WR2 SBT4WR2
volatile uint32_t   SBT4WR2 __attribute__((section("sfrs"), address(0xBF8F9098)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT4WR2bits_t;
volatile __SBT4WR2bits_t SBT4WR2bits __asm__ ("SBT4WR2") __attribute__((section("sfrs"), address(0xBF8F9098)));
#define SBT5ELOG1 SBT5ELOG1
volatile uint32_t   SBT5ELOG1 __attribute__((section("sfrs"), address(0xBF8F9420)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT5ELOG1bits_t;
volatile __SBT5ELOG1bits_t SBT5ELOG1bits __asm__ ("SBT5ELOG1") __attribute__((section("sfrs"), address(0xBF8F9420)));
#define SBT5ELOG2 SBT5ELOG2
volatile uint32_t   SBT5ELOG2 __attribute__((section("sfrs"), address(0xBF8F9424)));
typedef struct {
  uint32_t GROUP:2;
} __SBT5ELOG2bits_t;
volatile __SBT5ELOG2bits_t SBT5ELOG2bits __asm__ ("SBT5ELOG2") __attribute__((section("sfrs"), address(0xBF8F9424)));
#define SBT5ECON SBT5ECON
volatile uint32_t   SBT5ECON __attribute__((section("sfrs"), address(0xBF8F9428)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT5ECONbits_t;
volatile __SBT5ECONbits_t SBT5ECONbits __asm__ ("SBT5ECON") __attribute__((section("sfrs"), address(0xBF8F9428)));
#define SBT5ECLRS SBT5ECLRS
volatile uint32_t   SBT5ECLRS __attribute__((section("sfrs"), address(0xBF8F9430)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT5ECLRSbits_t;
volatile __SBT5ECLRSbits_t SBT5ECLRSbits __asm__ ("SBT5ECLRS") __attribute__((section("sfrs"), address(0xBF8F9430)));
#define SBT5ECLRM SBT5ECLRM
volatile uint32_t   SBT5ECLRM __attribute__((section("sfrs"), address(0xBF8F9438)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT5ECLRMbits_t;
volatile __SBT5ECLRMbits_t SBT5ECLRMbits __asm__ ("SBT5ECLRM") __attribute__((section("sfrs"), address(0xBF8F9438)));
#define SBT5REG0 SBT5REG0
volatile uint32_t   SBT5REG0 __attribute__((section("sfrs"), address(0xBF8F9440)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT5REG0bits_t;
volatile __SBT5REG0bits_t SBT5REG0bits __asm__ ("SBT5REG0") __attribute__((section("sfrs"), address(0xBF8F9440)));
#define SBT5RD0 SBT5RD0
volatile uint32_t   SBT5RD0 __attribute__((section("sfrs"), address(0xBF8F9450)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT5RD0bits_t;
volatile __SBT5RD0bits_t SBT5RD0bits __asm__ ("SBT5RD0") __attribute__((section("sfrs"), address(0xBF8F9450)));
#define SBT5WR0 SBT5WR0
volatile uint32_t   SBT5WR0 __attribute__((section("sfrs"), address(0xBF8F9458)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT5WR0bits_t;
volatile __SBT5WR0bits_t SBT5WR0bits __asm__ ("SBT5WR0") __attribute__((section("sfrs"), address(0xBF8F9458)));
#define SBT5REG1 SBT5REG1
volatile uint32_t   SBT5REG1 __attribute__((section("sfrs"), address(0xBF8F9460)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT5REG1bits_t;
volatile __SBT5REG1bits_t SBT5REG1bits __asm__ ("SBT5REG1") __attribute__((section("sfrs"), address(0xBF8F9460)));
#define SBT5RD1 SBT5RD1
volatile uint32_t   SBT5RD1 __attribute__((section("sfrs"), address(0xBF8F9470)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT5RD1bits_t;
volatile __SBT5RD1bits_t SBT5RD1bits __asm__ ("SBT5RD1") __attribute__((section("sfrs"), address(0xBF8F9470)));
#define SBT5WR1 SBT5WR1
volatile uint32_t   SBT5WR1 __attribute__((section("sfrs"), address(0xBF8F9478)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT5WR1bits_t;
volatile __SBT5WR1bits_t SBT5WR1bits __asm__ ("SBT5WR1") __attribute__((section("sfrs"), address(0xBF8F9478)));
#define SBT5REG2 SBT5REG2
volatile uint32_t   SBT5REG2 __attribute__((section("sfrs"), address(0xBF8F9480)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT5REG2bits_t;
volatile __SBT5REG2bits_t SBT5REG2bits __asm__ ("SBT5REG2") __attribute__((section("sfrs"), address(0xBF8F9480)));
#define SBT5RD2 SBT5RD2
volatile uint32_t   SBT5RD2 __attribute__((section("sfrs"), address(0xBF8F9490)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT5RD2bits_t;
volatile __SBT5RD2bits_t SBT5RD2bits __asm__ ("SBT5RD2") __attribute__((section("sfrs"), address(0xBF8F9490)));
#define SBT5WR2 SBT5WR2
volatile uint32_t   SBT5WR2 __attribute__((section("sfrs"), address(0xBF8F9498)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT5WR2bits_t;
volatile __SBT5WR2bits_t SBT5WR2bits __asm__ ("SBT5WR2") __attribute__((section("sfrs"), address(0xBF8F9498)));
#define SBT6ELOG1 SBT6ELOG1
volatile uint32_t   SBT6ELOG1 __attribute__((section("sfrs"), address(0xBF8F9820)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT6ELOG1bits_t;
volatile __SBT6ELOG1bits_t SBT6ELOG1bits __asm__ ("SBT6ELOG1") __attribute__((section("sfrs"), address(0xBF8F9820)));
#define SBT6ELOG2 SBT6ELOG2
volatile uint32_t   SBT6ELOG2 __attribute__((section("sfrs"), address(0xBF8F9824)));
typedef struct {
  uint32_t GROUP:2;
} __SBT6ELOG2bits_t;
volatile __SBT6ELOG2bits_t SBT6ELOG2bits __asm__ ("SBT6ELOG2") __attribute__((section("sfrs"), address(0xBF8F9824)));
#define SBT6ECON SBT6ECON
volatile uint32_t   SBT6ECON __attribute__((section("sfrs"), address(0xBF8F9828)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT6ECONbits_t;
volatile __SBT6ECONbits_t SBT6ECONbits __asm__ ("SBT6ECON") __attribute__((section("sfrs"), address(0xBF8F9828)));
#define SBT6ECLRS SBT6ECLRS
volatile uint32_t   SBT6ECLRS __attribute__((section("sfrs"), address(0xBF8F9830)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT6ECLRSbits_t;
volatile __SBT6ECLRSbits_t SBT6ECLRSbits __asm__ ("SBT6ECLRS") __attribute__((section("sfrs"), address(0xBF8F9830)));
#define SBT6ECLRM SBT6ECLRM
volatile uint32_t   SBT6ECLRM __attribute__((section("sfrs"), address(0xBF8F9838)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT6ECLRMbits_t;
volatile __SBT6ECLRMbits_t SBT6ECLRMbits __asm__ ("SBT6ECLRM") __attribute__((section("sfrs"), address(0xBF8F9838)));
#define SBT6REG0 SBT6REG0
volatile uint32_t   SBT6REG0 __attribute__((section("sfrs"), address(0xBF8F9840)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT6REG0bits_t;
volatile __SBT6REG0bits_t SBT6REG0bits __asm__ ("SBT6REG0") __attribute__((section("sfrs"), address(0xBF8F9840)));
#define SBT6RD0 SBT6RD0
volatile uint32_t   SBT6RD0 __attribute__((section("sfrs"), address(0xBF8F9850)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT6RD0bits_t;
volatile __SBT6RD0bits_t SBT6RD0bits __asm__ ("SBT6RD0") __attribute__((section("sfrs"), address(0xBF8F9850)));
#define SBT6WR0 SBT6WR0
volatile uint32_t   SBT6WR0 __attribute__((section("sfrs"), address(0xBF8F9858)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT6WR0bits_t;
volatile __SBT6WR0bits_t SBT6WR0bits __asm__ ("SBT6WR0") __attribute__((section("sfrs"), address(0xBF8F9858)));
#define SBT6REG1 SBT6REG1
volatile uint32_t   SBT6REG1 __attribute__((section("sfrs"), address(0xBF8F9860)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT6REG1bits_t;
volatile __SBT6REG1bits_t SBT6REG1bits __asm__ ("SBT6REG1") __attribute__((section("sfrs"), address(0xBF8F9860)));
#define SBT6RD1 SBT6RD1
volatile uint32_t   SBT6RD1 __attribute__((section("sfrs"), address(0xBF8F9870)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT6RD1bits_t;
volatile __SBT6RD1bits_t SBT6RD1bits __asm__ ("SBT6RD1") __attribute__((section("sfrs"), address(0xBF8F9870)));
#define SBT6WR1 SBT6WR1
volatile uint32_t   SBT6WR1 __attribute__((section("sfrs"), address(0xBF8F9878)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT6WR1bits_t;
volatile __SBT6WR1bits_t SBT6WR1bits __asm__ ("SBT6WR1") __attribute__((section("sfrs"), address(0xBF8F9878)));
#define SBT7ELOG1 SBT7ELOG1
volatile uint32_t   SBT7ELOG1 __attribute__((section("sfrs"), address(0xBF8F9C20)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT7ELOG1bits_t;
volatile __SBT7ELOG1bits_t SBT7ELOG1bits __asm__ ("SBT7ELOG1") __attribute__((section("sfrs"), address(0xBF8F9C20)));
#define SBT7ELOG2 SBT7ELOG2
volatile uint32_t   SBT7ELOG2 __attribute__((section("sfrs"), address(0xBF8F9C24)));
typedef struct {
  uint32_t GROUP:2;
} __SBT7ELOG2bits_t;
volatile __SBT7ELOG2bits_t SBT7ELOG2bits __asm__ ("SBT7ELOG2") __attribute__((section("sfrs"), address(0xBF8F9C24)));
#define SBT7ECON SBT7ECON
volatile uint32_t   SBT7ECON __attribute__((section("sfrs"), address(0xBF8F9C28)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT7ECONbits_t;
volatile __SBT7ECONbits_t SBT7ECONbits __asm__ ("SBT7ECON") __attribute__((section("sfrs"), address(0xBF8F9C28)));
#define SBT7ECLRS SBT7ECLRS
volatile uint32_t   SBT7ECLRS __attribute__((section("sfrs"), address(0xBF8F9C30)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT7ECLRSbits_t;
volatile __SBT7ECLRSbits_t SBT7ECLRSbits __asm__ ("SBT7ECLRS") __attribute__((section("sfrs"), address(0xBF8F9C30)));
#define SBT7ECLRM SBT7ECLRM
volatile uint32_t   SBT7ECLRM __attribute__((section("sfrs"), address(0xBF8F9C38)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT7ECLRMbits_t;
volatile __SBT7ECLRMbits_t SBT7ECLRMbits __asm__ ("SBT7ECLRM") __attribute__((section("sfrs"), address(0xBF8F9C38)));
#define SBT7REG0 SBT7REG0
volatile uint32_t   SBT7REG0 __attribute__((section("sfrs"), address(0xBF8F9C40)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT7REG0bits_t;
volatile __SBT7REG0bits_t SBT7REG0bits __asm__ ("SBT7REG0") __attribute__((section("sfrs"), address(0xBF8F9C40)));
#define SBT7RD0 SBT7RD0
volatile uint32_t   SBT7RD0 __attribute__((section("sfrs"), address(0xBF8F9C50)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT7RD0bits_t;
volatile __SBT7RD0bits_t SBT7RD0bits __asm__ ("SBT7RD0") __attribute__((section("sfrs"), address(0xBF8F9C50)));
#define SBT7WR0 SBT7WR0
volatile uint32_t   SBT7WR0 __attribute__((section("sfrs"), address(0xBF8F9C58)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT7WR0bits_t;
volatile __SBT7WR0bits_t SBT7WR0bits __asm__ ("SBT7WR0") __attribute__((section("sfrs"), address(0xBF8F9C58)));
#define SBT7REG1 SBT7REG1
volatile uint32_t   SBT7REG1 __attribute__((section("sfrs"), address(0xBF8F9C60)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT7REG1bits_t;
volatile __SBT7REG1bits_t SBT7REG1bits __asm__ ("SBT7REG1") __attribute__((section("sfrs"), address(0xBF8F9C60)));
#define SBT7RD1 SBT7RD1
volatile uint32_t   SBT7RD1 __attribute__((section("sfrs"), address(0xBF8F9C70)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT7RD1bits_t;
volatile __SBT7RD1bits_t SBT7RD1bits __asm__ ("SBT7RD1") __attribute__((section("sfrs"), address(0xBF8F9C70)));
#define SBT7WR1 SBT7WR1
volatile uint32_t   SBT7WR1 __attribute__((section("sfrs"), address(0xBF8F9C78)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT7WR1bits_t;
volatile __SBT7WR1bits_t SBT7WR1bits __asm__ ("SBT7WR1") __attribute__((section("sfrs"), address(0xBF8F9C78)));
#define SBT8ELOG1 SBT8ELOG1
volatile uint32_t   SBT8ELOG1 __attribute__((section("sfrs"), address(0xBF8FA020)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT8ELOG1bits_t;
volatile __SBT8ELOG1bits_t SBT8ELOG1bits __asm__ ("SBT8ELOG1") __attribute__((section("sfrs"), address(0xBF8FA020)));
#define SBT8ELOG2 SBT8ELOG2
volatile uint32_t   SBT8ELOG2 __attribute__((section("sfrs"), address(0xBF8FA024)));
typedef struct {
  uint32_t GROUP:2;
} __SBT8ELOG2bits_t;
volatile __SBT8ELOG2bits_t SBT8ELOG2bits __asm__ ("SBT8ELOG2") __attribute__((section("sfrs"), address(0xBF8FA024)));
#define SBT8ECON SBT8ECON
volatile uint32_t   SBT8ECON __attribute__((section("sfrs"), address(0xBF8FA028)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT8ECONbits_t;
volatile __SBT8ECONbits_t SBT8ECONbits __asm__ ("SBT8ECON") __attribute__((section("sfrs"), address(0xBF8FA028)));
#define SBT8ECLRS SBT8ECLRS
volatile uint32_t   SBT8ECLRS __attribute__((section("sfrs"), address(0xBF8FA030)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT8ECLRSbits_t;
volatile __SBT8ECLRSbits_t SBT8ECLRSbits __asm__ ("SBT8ECLRS") __attribute__((section("sfrs"), address(0xBF8FA030)));
#define SBT8ECLRM SBT8ECLRM
volatile uint32_t   SBT8ECLRM __attribute__((section("sfrs"), address(0xBF8FA038)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT8ECLRMbits_t;
volatile __SBT8ECLRMbits_t SBT8ECLRMbits __asm__ ("SBT8ECLRM") __attribute__((section("sfrs"), address(0xBF8FA038)));
#define SBT8REG0 SBT8REG0
volatile uint32_t   SBT8REG0 __attribute__((section("sfrs"), address(0xBF8FA040)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT8REG0bits_t;
volatile __SBT8REG0bits_t SBT8REG0bits __asm__ ("SBT8REG0") __attribute__((section("sfrs"), address(0xBF8FA040)));
#define SBT8RD0 SBT8RD0
volatile uint32_t   SBT8RD0 __attribute__((section("sfrs"), address(0xBF8FA050)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT8RD0bits_t;
volatile __SBT8RD0bits_t SBT8RD0bits __asm__ ("SBT8RD0") __attribute__((section("sfrs"), address(0xBF8FA050)));
#define SBT8WR0 SBT8WR0
volatile uint32_t   SBT8WR0 __attribute__((section("sfrs"), address(0xBF8FA058)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT8WR0bits_t;
volatile __SBT8WR0bits_t SBT8WR0bits __asm__ ("SBT8WR0") __attribute__((section("sfrs"), address(0xBF8FA058)));
#define SBT8REG1 SBT8REG1
volatile uint32_t   SBT8REG1 __attribute__((section("sfrs"), address(0xBF8FA060)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT8REG1bits_t;
volatile __SBT8REG1bits_t SBT8REG1bits __asm__ ("SBT8REG1") __attribute__((section("sfrs"), address(0xBF8FA060)));
#define SBT8RD1 SBT8RD1
volatile uint32_t   SBT8RD1 __attribute__((section("sfrs"), address(0xBF8FA070)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT8RD1bits_t;
volatile __SBT8RD1bits_t SBT8RD1bits __asm__ ("SBT8RD1") __attribute__((section("sfrs"), address(0xBF8FA070)));
#define SBT8WR1 SBT8WR1
volatile uint32_t   SBT8WR1 __attribute__((section("sfrs"), address(0xBF8FA078)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT8WR1bits_t;
volatile __SBT8WR1bits_t SBT8WR1bits __asm__ ("SBT8WR1") __attribute__((section("sfrs"), address(0xBF8FA078)));
#define SBT9ELOG1 SBT9ELOG1
volatile uint32_t   SBT9ELOG1 __attribute__((section("sfrs"), address(0xBF8FA420)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT9ELOG1bits_t;
volatile __SBT9ELOG1bits_t SBT9ELOG1bits __asm__ ("SBT9ELOG1") __attribute__((section("sfrs"), address(0xBF8FA420)));
#define SBT9ELOG2 SBT9ELOG2
volatile uint32_t   SBT9ELOG2 __attribute__((section("sfrs"), address(0xBF8FA424)));
typedef struct {
  uint32_t GROUP:2;
} __SBT9ELOG2bits_t;
volatile __SBT9ELOG2bits_t SBT9ELOG2bits __asm__ ("SBT9ELOG2") __attribute__((section("sfrs"), address(0xBF8FA424)));
#define SBT9ECON SBT9ECON
volatile uint32_t   SBT9ECON __attribute__((section("sfrs"), address(0xBF8FA428)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT9ECONbits_t;
volatile __SBT9ECONbits_t SBT9ECONbits __asm__ ("SBT9ECON") __attribute__((section("sfrs"), address(0xBF8FA428)));
#define SBT9ECLRS SBT9ECLRS
volatile uint32_t   SBT9ECLRS __attribute__((section("sfrs"), address(0xBF8FA430)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT9ECLRSbits_t;
volatile __SBT9ECLRSbits_t SBT9ECLRSbits __asm__ ("SBT9ECLRS") __attribute__((section("sfrs"), address(0xBF8FA430)));
#define SBT9ECLRM SBT9ECLRM
volatile uint32_t   SBT9ECLRM __attribute__((section("sfrs"), address(0xBF8FA438)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT9ECLRMbits_t;
volatile __SBT9ECLRMbits_t SBT9ECLRMbits __asm__ ("SBT9ECLRM") __attribute__((section("sfrs"), address(0xBF8FA438)));
#define SBT9REG0 SBT9REG0
volatile uint32_t   SBT9REG0 __attribute__((section("sfrs"), address(0xBF8FA440)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT9REG0bits_t;
volatile __SBT9REG0bits_t SBT9REG0bits __asm__ ("SBT9REG0") __attribute__((section("sfrs"), address(0xBF8FA440)));
#define SBT9RD0 SBT9RD0
volatile uint32_t   SBT9RD0 __attribute__((section("sfrs"), address(0xBF8FA450)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT9RD0bits_t;
volatile __SBT9RD0bits_t SBT9RD0bits __asm__ ("SBT9RD0") __attribute__((section("sfrs"), address(0xBF8FA450)));
#define SBT9WR0 SBT9WR0
volatile uint32_t   SBT9WR0 __attribute__((section("sfrs"), address(0xBF8FA458)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT9WR0bits_t;
volatile __SBT9WR0bits_t SBT9WR0bits __asm__ ("SBT9WR0") __attribute__((section("sfrs"), address(0xBF8FA458)));
#define SBT9REG1 SBT9REG1
volatile uint32_t   SBT9REG1 __attribute__((section("sfrs"), address(0xBF8FA460)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT9REG1bits_t;
volatile __SBT9REG1bits_t SBT9REG1bits __asm__ ("SBT9REG1") __attribute__((section("sfrs"), address(0xBF8FA460)));
#define SBT9RD1 SBT9RD1
volatile uint32_t   SBT9RD1 __attribute__((section("sfrs"), address(0xBF8FA470)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT9RD1bits_t;
volatile __SBT9RD1bits_t SBT9RD1bits __asm__ ("SBT9RD1") __attribute__((section("sfrs"), address(0xBF8FA470)));
#define SBT9WR1 SBT9WR1
volatile uint32_t   SBT9WR1 __attribute__((section("sfrs"), address(0xBF8FA478)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT9WR1bits_t;
volatile __SBT9WR1bits_t SBT9WR1bits __asm__ ("SBT9WR1") __attribute__((section("sfrs"), address(0xBF8FA478)));
#define SBT10ELOG1 SBT10ELOG1
volatile uint32_t   SBT10ELOG1 __attribute__((section("sfrs"), address(0xBF8FA820)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT10ELOG1bits_t;
volatile __SBT10ELOG1bits_t SBT10ELOG1bits __asm__ ("SBT10ELOG1") __attribute__((section("sfrs"), address(0xBF8FA820)));
#define SBT10ELOG2 SBT10ELOG2
volatile uint32_t   SBT10ELOG2 __attribute__((section("sfrs"), address(0xBF8FA824)));
typedef struct {
  uint32_t GROUP:2;
} __SBT10ELOG2bits_t;
volatile __SBT10ELOG2bits_t SBT10ELOG2bits __asm__ ("SBT10ELOG2") __attribute__((section("sfrs"), address(0xBF8FA824)));
#define SBT10ECON SBT10ECON
volatile uint32_t   SBT10ECON __attribute__((section("sfrs"), address(0xBF8FA828)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT10ECONbits_t;
volatile __SBT10ECONbits_t SBT10ECONbits __asm__ ("SBT10ECON") __attribute__((section("sfrs"), address(0xBF8FA828)));
#define SBT10ECLRS SBT10ECLRS
volatile uint32_t   SBT10ECLRS __attribute__((section("sfrs"), address(0xBF8FA830)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT10ECLRSbits_t;
volatile __SBT10ECLRSbits_t SBT10ECLRSbits __asm__ ("SBT10ECLRS") __attribute__((section("sfrs"), address(0xBF8FA830)));
#define SBT10ECLRM SBT10ECLRM
volatile uint32_t   SBT10ECLRM __attribute__((section("sfrs"), address(0xBF8FA838)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT10ECLRMbits_t;
volatile __SBT10ECLRMbits_t SBT10ECLRMbits __asm__ ("SBT10ECLRM") __attribute__((section("sfrs"), address(0xBF8FA838)));
#define SBT10REG0 SBT10REG0
volatile uint32_t   SBT10REG0 __attribute__((section("sfrs"), address(0xBF8FA840)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT10REG0bits_t;
volatile __SBT10REG0bits_t SBT10REG0bits __asm__ ("SBT10REG0") __attribute__((section("sfrs"), address(0xBF8FA840)));
#define SBT10RD0 SBT10RD0
volatile uint32_t   SBT10RD0 __attribute__((section("sfrs"), address(0xBF8FA850)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT10RD0bits_t;
volatile __SBT10RD0bits_t SBT10RD0bits __asm__ ("SBT10RD0") __attribute__((section("sfrs"), address(0xBF8FA850)));
#define SBT10WR0 SBT10WR0
volatile uint32_t   SBT10WR0 __attribute__((section("sfrs"), address(0xBF8FA858)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT10WR0bits_t;
volatile __SBT10WR0bits_t SBT10WR0bits __asm__ ("SBT10WR0") __attribute__((section("sfrs"), address(0xBF8FA858)));
#define SBT11ELOG1 SBT11ELOG1
volatile uint32_t   SBT11ELOG1 __attribute__((section("sfrs"), address(0xBF8FAC20)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT11ELOG1bits_t;
volatile __SBT11ELOG1bits_t SBT11ELOG1bits __asm__ ("SBT11ELOG1") __attribute__((section("sfrs"), address(0xBF8FAC20)));
#define SBT11ELOG2 SBT11ELOG2
volatile uint32_t   SBT11ELOG2 __attribute__((section("sfrs"), address(0xBF8FAC24)));
typedef struct {
  uint32_t GROUP:2;
} __SBT11ELOG2bits_t;
volatile __SBT11ELOG2bits_t SBT11ELOG2bits __asm__ ("SBT11ELOG2") __attribute__((section("sfrs"), address(0xBF8FAC24)));
#define SBT11ECON SBT11ECON
volatile uint32_t   SBT11ECON __attribute__((section("sfrs"), address(0xBF8FAC28)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT11ECONbits_t;
volatile __SBT11ECONbits_t SBT11ECONbits __asm__ ("SBT11ECON") __attribute__((section("sfrs"), address(0xBF8FAC28)));
#define SBT11ECLRS SBT11ECLRS
volatile uint32_t   SBT11ECLRS __attribute__((section("sfrs"), address(0xBF8FAC30)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT11ECLRSbits_t;
volatile __SBT11ECLRSbits_t SBT11ECLRSbits __asm__ ("SBT11ECLRS") __attribute__((section("sfrs"), address(0xBF8FAC30)));
#define SBT11ECLRM SBT11ECLRM
volatile uint32_t   SBT11ECLRM __attribute__((section("sfrs"), address(0xBF8FAC38)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT11ECLRMbits_t;
volatile __SBT11ECLRMbits_t SBT11ECLRMbits __asm__ ("SBT11ECLRM") __attribute__((section("sfrs"), address(0xBF8FAC38)));
#define SBT11REG0 SBT11REG0
volatile uint32_t   SBT11REG0 __attribute__((section("sfrs"), address(0xBF8FAC40)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT11REG0bits_t;
volatile __SBT11REG0bits_t SBT11REG0bits __asm__ ("SBT11REG0") __attribute__((section("sfrs"), address(0xBF8FAC40)));
#define SBT11RD0 SBT11RD0
volatile uint32_t   SBT11RD0 __attribute__((section("sfrs"), address(0xBF8FAC50)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT11RD0bits_t;
volatile __SBT11RD0bits_t SBT11RD0bits __asm__ ("SBT11RD0") __attribute__((section("sfrs"), address(0xBF8FAC50)));
#define SBT11WR0 SBT11WR0
volatile uint32_t   SBT11WR0 __attribute__((section("sfrs"), address(0xBF8FAC58)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT11WR0bits_t;
volatile __SBT11WR0bits_t SBT11WR0bits __asm__ ("SBT11WR0") __attribute__((section("sfrs"), address(0xBF8FAC58)));
#define SBT11REG1 SBT11REG1
volatile uint32_t   SBT11REG1 __attribute__((section("sfrs"), address(0xBF8FAC60)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT11REG1bits_t;
volatile __SBT11REG1bits_t SBT11REG1bits __asm__ ("SBT11REG1") __attribute__((section("sfrs"), address(0xBF8FAC60)));
#define SBT11RD1 SBT11RD1
volatile uint32_t   SBT11RD1 __attribute__((section("sfrs"), address(0xBF8FAC70)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT11RD1bits_t;
volatile __SBT11RD1bits_t SBT11RD1bits __asm__ ("SBT11RD1") __attribute__((section("sfrs"), address(0xBF8FAC70)));
#define SBT11WR1 SBT11WR1
volatile uint32_t   SBT11WR1 __attribute__((section("sfrs"), address(0xBF8FAC78)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT11WR1bits_t;
volatile __SBT11WR1bits_t SBT11WR1bits __asm__ ("SBT11WR1") __attribute__((section("sfrs"), address(0xBF8FAC78)));
#define SBT12ELOG1 SBT12ELOG1
volatile uint32_t   SBT12ELOG1 __attribute__((section("sfrs"), address(0xBF8FB020)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT12ELOG1bits_t;
volatile __SBT12ELOG1bits_t SBT12ELOG1bits __asm__ ("SBT12ELOG1") __attribute__((section("sfrs"), address(0xBF8FB020)));
#define SBT12ELOG2 SBT12ELOG2
volatile uint32_t   SBT12ELOG2 __attribute__((section("sfrs"), address(0xBF8FB024)));
typedef struct {
  uint32_t GROUP:2;
} __SBT12ELOG2bits_t;
volatile __SBT12ELOG2bits_t SBT12ELOG2bits __asm__ ("SBT12ELOG2") __attribute__((section("sfrs"), address(0xBF8FB024)));
#define SBT12ECON SBT12ECON
volatile uint32_t   SBT12ECON __attribute__((section("sfrs"), address(0xBF8FB028)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT12ECONbits_t;
volatile __SBT12ECONbits_t SBT12ECONbits __asm__ ("SBT12ECON") __attribute__((section("sfrs"), address(0xBF8FB028)));
#define SBT12ECLRS SBT12ECLRS
volatile uint32_t   SBT12ECLRS __attribute__((section("sfrs"), address(0xBF8FB030)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT12ECLRSbits_t;
volatile __SBT12ECLRSbits_t SBT12ECLRSbits __asm__ ("SBT12ECLRS") __attribute__((section("sfrs"), address(0xBF8FB030)));
#define SBT12ECLRM SBT12ECLRM
volatile uint32_t   SBT12ECLRM __attribute__((section("sfrs"), address(0xBF8FB038)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT12ECLRMbits_t;
volatile __SBT12ECLRMbits_t SBT12ECLRMbits __asm__ ("SBT12ECLRM") __attribute__((section("sfrs"), address(0xBF8FB038)));
#define SBT12REG0 SBT12REG0
volatile uint32_t   SBT12REG0 __attribute__((section("sfrs"), address(0xBF8FB040)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT12REG0bits_t;
volatile __SBT12REG0bits_t SBT12REG0bits __asm__ ("SBT12REG0") __attribute__((section("sfrs"), address(0xBF8FB040)));
#define SBT12RD0 SBT12RD0
volatile uint32_t   SBT12RD0 __attribute__((section("sfrs"), address(0xBF8FB050)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT12RD0bits_t;
volatile __SBT12RD0bits_t SBT12RD0bits __asm__ ("SBT12RD0") __attribute__((section("sfrs"), address(0xBF8FB050)));
#define SBT12WR0 SBT12WR0
volatile uint32_t   SBT12WR0 __attribute__((section("sfrs"), address(0xBF8FB058)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT12WR0bits_t;
volatile __SBT12WR0bits_t SBT12WR0bits __asm__ ("SBT12WR0") __attribute__((section("sfrs"), address(0xBF8FB058)));
#define SBT13ELOG1 SBT13ELOG1
volatile uint32_t   SBT13ELOG1 __attribute__((section("sfrs"), address(0xBF8FB420)));
typedef struct {
  uint32_t CMD:3;
  uint32_t :1;
  uint32_t REGION:4;
  uint32_t INITID:8;
  uint32_t :8;
  uint32_t CODE:4;
  uint32_t :3;
  uint32_t MULTI:1;
} __SBT13ELOG1bits_t;
volatile __SBT13ELOG1bits_t SBT13ELOG1bits __asm__ ("SBT13ELOG1") __attribute__((section("sfrs"), address(0xBF8FB420)));
#define SBT13ELOG2 SBT13ELOG2
volatile uint32_t   SBT13ELOG2 __attribute__((section("sfrs"), address(0xBF8FB424)));
typedef struct {
  uint32_t GROUP:2;
} __SBT13ELOG2bits_t;
volatile __SBT13ELOG2bits_t SBT13ELOG2bits __asm__ ("SBT13ELOG2") __attribute__((section("sfrs"), address(0xBF8FB424)));
#define SBT13ECON SBT13ECON
volatile uint32_t   SBT13ECON __attribute__((section("sfrs"), address(0xBF8FB428)));
typedef struct {
  uint32_t :24;
  uint32_t ERRP:1;
} __SBT13ECONbits_t;
volatile __SBT13ECONbits_t SBT13ECONbits __asm__ ("SBT13ECON") __attribute__((section("sfrs"), address(0xBF8FB428)));
#define SBT13ECLRS SBT13ECLRS
volatile uint32_t   SBT13ECLRS __attribute__((section("sfrs"), address(0xBF8FB430)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT13ECLRSbits_t;
volatile __SBT13ECLRSbits_t SBT13ECLRSbits __asm__ ("SBT13ECLRS") __attribute__((section("sfrs"), address(0xBF8FB430)));
#define SBT13ECLRM SBT13ECLRM
volatile uint32_t   SBT13ECLRM __attribute__((section("sfrs"), address(0xBF8FB438)));
typedef struct {
  uint32_t CLEAR:1;
} __SBT13ECLRMbits_t;
volatile __SBT13ECLRMbits_t SBT13ECLRMbits __asm__ ("SBT13ECLRM") __attribute__((section("sfrs"), address(0xBF8FB438)));
#define SBT13REG0 SBT13REG0
volatile uint32_t   SBT13REG0 __attribute__((section("sfrs"), address(0xBF8FB440)));
typedef struct {
  uint32_t :3;
  uint32_t SIZE:5;
  uint32_t :1;
  uint32_t PRI:1;
  uint32_t BASE:22;
} __SBT13REG0bits_t;
volatile __SBT13REG0bits_t SBT13REG0bits __asm__ ("SBT13REG0") __attribute__((section("sfrs"), address(0xBF8FB440)));
#define SBT13RD0 SBT13RD0
volatile uint32_t   SBT13RD0 __attribute__((section("sfrs"), address(0xBF8FB450)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT13RD0bits_t;
volatile __SBT13RD0bits_t SBT13RD0bits __asm__ ("SBT13RD0") __attribute__((section("sfrs"), address(0xBF8FB450)));
#define SBT13WR0 SBT13WR0
volatile uint32_t   SBT13WR0 __attribute__((section("sfrs"), address(0xBF8FB458)));
typedef struct {
  uint32_t GROUP0:1;
  uint32_t GROUP1:1;
  uint32_t GROUP2:1;
  uint32_t GROUP3:1;
} __SBT13WR0bits_t;
volatile __SBT13WR0bits_t SBT13WR0bits __asm__ ("SBT13WR0") __attribute__((section("sfrs"), address(0xBF8FB458)));
#define USBIE0CSR0 USBIE0CSR0
volatile uint32_t   USBIE0CSR0 __attribute__((section("sfrs"), address(0xBF8E3010)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t :5;
    uint32_t RXRDY:1;
    uint32_t TXRDY:1;
    uint32_t STALLED:1;
    uint32_t SETUP:1;
    uint32_t ERROR:1;
    uint32_t REQPKT:1;
    uint32_t STATUS:1;
    uint32_t NAKTO:1;
    uint32_t FLUSH:1;
    uint32_t DT:1;
    uint32_t DTWE:1;
  };
  struct {
    uint32_t :19;
    uint32_t DATAEND:1;
    uint32_t SETEND:1;
    uint32_t STALL:1;
    uint32_t RXRDYC:1;
    uint32_t SETENDC:1;
  };
} __USBIE0CSR0bits_t;
volatile __USBIE0CSR0bits_t USBIE0CSR0bits __asm__ ("USBIE0CSR0") __attribute__((section("sfrs"), address(0xBF8E3010)));
#define USBIENCSR0 USBIENCSR0
volatile uint32_t   USBIENCSR0 __attribute__((section("sfrs"), address(0xBF8E3010)));
typedef union {
  struct {
    uint32_t TXMAXP:11;
    uint32_t MULT:5;
    uint32_t TXPKTRDY:1;
    uint32_t FIFONE:1;
    uint32_t ERROR:1;
    uint32_t FLUSH:1;
    uint32_t SETUPPKT:1;
    uint32_t RXSTALL:1;
    uint32_t CLRDT:1;
    uint32_t NAKTMOUT:1;
    uint32_t DATATGGL:1;
    uint32_t DTWREN:1;
    uint32_t DMAREQMD:1;
    uint32_t FRCDATTG:1;
    uint32_t DMAREQEN:1;
    uint32_t MODE:1;
    uint32_t :1;
    uint32_t AUTOSET:1;
  };
  struct {
    uint32_t :18;
    uint32_t UNDERRUN:1;
    uint32_t :1;
    uint32_t SENDSTALL:1;
    uint32_t SENTSTALL:1;
    uint32_t :1;
    uint32_t INCOMPTX:1;
    uint32_t :6;
    uint32_t ISO:1;
  };
} __USBIENCSR0bits_t;
volatile __USBIENCSR0bits_t USBIENCSR0bits __asm__ ("USBIENCSR0") __attribute__((section("sfrs"), address(0xBF8E3010)));
#define USBIE0CSR2 USBIE0CSR2
volatile uint32_t   USBIE0CSR2 __attribute__((section("sfrs"), address(0xBF8E3018)));
typedef struct {
  uint32_t RXCNT:7;
  uint32_t :15;
  uint32_t SPEED:2;
  uint32_t NAKLIM:4;
} __USBIE0CSR2bits_t;
volatile __USBIE0CSR2bits_t USBIE0CSR2bits __asm__ ("USBIE0CSR2") __attribute__((section("sfrs"), address(0xBF8E3018)));
#define USBIENCSR2 USBIENCSR2
volatile uint32_t   USBIENCSR2 __attribute__((section("sfrs"), address(0xBF8E3018)));
typedef struct {
  uint32_t RXCNT:14;
  uint32_t :2;
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t TXINTERV:8;
} __USBIENCSR2bits_t;
volatile __USBIENCSR2bits_t USBIENCSR2bits __asm__ ("USBIENCSR2") __attribute__((section("sfrs"), address(0xBF8E3018)));
#define USBIE0CSR3 USBIE0CSR3
volatile uint32_t   USBIE0CSR3 __attribute__((section("sfrs"), address(0xBF8E301C)));
typedef struct {
  uint32_t :24;
  uint32_t UTMIDWID:1;
  uint32_t SOFTCONE:1;
  uint32_t DYNFIFOS:1;
  uint32_t HBTXEN:1;
  uint32_t HBRXEN:1;
  uint32_t BIGEND:1;
  uint32_t MPTXEN:1;
  uint32_t MPRXEN:1;
} __USBIE0CSR3bits_t;
volatile __USBIE0CSR3bits_t USBIE0CSR3bits __asm__ ("USBIE0CSR3") __attribute__((section("sfrs"), address(0xBF8E301C)));
#define USBIENCSR3 USBIENCSR3
volatile uint32_t   USBIENCSR3 __attribute__((section("sfrs"), address(0xBF8E301C)));
typedef struct {
  uint32_t TEP:4;
  uint32_t PROTOCOL:2;
  uint32_t SPEED:2;
  uint32_t RXINTERV:8;
  uint32_t :8;
  uint32_t TXFIFOSZ:4;
  uint32_t RXFIFOSZ:4;
} __USBIENCSR3bits_t;
volatile __USBIENCSR3bits_t USBIENCSR3bits __asm__ ("USBIENCSR3") __attribute__((section("sfrs"), address(0xBF8E301C)));
#define DEVCFG3 DEVCFG3
volatile uint32_t   DEVCFG3 __attribute__((section("sfrs"), address(0xBFC0FFC0)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG3bits_t;
volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3") __attribute__((section("sfrs"), address(0xBFC0FFC0)));
#define DEVCFG2 DEVCFG2
volatile uint32_t   DEVCFG2 __attribute__((section("sfrs"), address(0xBFC0FFC4)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG2bits_t;
volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2") __attribute__((section("sfrs"), address(0xBFC0FFC4)));
#define DEVCFG1 DEVCFG1
volatile uint32_t   DEVCFG1 __attribute__((section("sfrs"), address(0xBFC0FFC8)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG1bits_t;
volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1") __attribute__((section("sfrs"), address(0xBFC0FFC8)));
#define DEVCFG0 DEVCFG0
volatile uint32_t   DEVCFG0 __attribute__((section("sfrs"), address(0xBFC0FFCC)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG0bits_t;
volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0") __attribute__((section("sfrs"), address(0xBFC0FFCC)));
#define DEVCP3 DEVCP3
volatile uint32_t   DEVCP3 __attribute__((section("sfrs"), address(0xBFC0FFD0)));
#define DEVCP2 DEVCP2
volatile uint32_t   DEVCP2 __attribute__((section("sfrs"), address(0xBFC0FFD4)));
#define DEVCP1 DEVCP1
volatile uint32_t   DEVCP1 __attribute__((section("sfrs"), address(0xBFC0FFD8)));
#define DEVCP0 DEVCP0
volatile uint32_t   DEVCP0 __attribute__((section("sfrs"), address(0xBFC0FFDC)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCP0bits_t;
volatile __DEVCP0bits_t DEVCP0bits __asm__ ("DEVCP0") __attribute__((section("sfrs"), address(0xBFC0FFDC)));
#define DEVSIGN3 DEVSIGN3
volatile uint32_t   DEVSIGN3 __attribute__((section("sfrs"), address(0xBFC0FFE0)));
#define DEVSIGN2 DEVSIGN2
volatile uint32_t   DEVSIGN2 __attribute__((section("sfrs"), address(0xBFC0FFE4)));
#define DEVSIGN1 DEVSIGN1
volatile uint32_t   DEVSIGN1 __attribute__((section("sfrs"), address(0xBFC0FFE8)));
#define DEVSIGN0 DEVSIGN0
volatile uint32_t   DEVSIGN0 __attribute__((section("sfrs"), address(0xBFC0FFEC)));
#define SEQ3 SEQ3
volatile uint32_t   SEQ3 __attribute__((section("sfrs"), address(0xBFC0FFF0)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __SEQ3bits_t;
volatile __SEQ3bits_t SEQ3bits __asm__ ("SEQ3") __attribute__((section("sfrs"), address(0xBFC0FFF0)));
#define SEQ2 SEQ2
volatile uint32_t   SEQ2 __attribute__((section("sfrs"), address(0xBFC0FFF4)));
#define SEQ1 SEQ1
volatile uint32_t   SEQ1 __attribute__((section("sfrs"), address(0xBFC0FFF8)));
#define SEQ0 SEQ0
volatile uint32_t   SEQ0 __attribute__((section("sfrs"), address(0xBFC0FFFC)));
#define DEVADC0 DEVADC0
volatile uint32_t   DEVADC0 __attribute__((section("sfrs"), address(0xBFC54000)));
typedef union {
  struct {
    uint32_t ADCFG:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVADC0bits_t;
volatile __DEVADC0bits_t DEVADC0bits __asm__ ("DEVADC0") __attribute__((section("sfrs"), address(0xBFC54000)));
#define DEVADC1 DEVADC1
volatile uint32_t   DEVADC1 __attribute__((section("sfrs"), address(0xBFC54004)));
typedef union {
  struct {
    uint32_t ADCFG:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVADC1bits_t;
volatile __DEVADC1bits_t DEVADC1bits __asm__ ("DEVADC1") __attribute__((section("sfrs"), address(0xBFC54004)));
#define DEVADC2 DEVADC2
volatile uint32_t   DEVADC2 __attribute__((section("sfrs"), address(0xBFC54008)));
typedef union {
  struct {
    uint32_t ADCFG:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVADC2bits_t;
volatile __DEVADC2bits_t DEVADC2bits __asm__ ("DEVADC2") __attribute__((section("sfrs"), address(0xBFC54008)));
#define DEVADC3 DEVADC3
volatile uint32_t   DEVADC3 __attribute__((section("sfrs"), address(0xBFC5400C)));
typedef union {
  struct {
    uint32_t ADCFG:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVADC3bits_t;
volatile __DEVADC3bits_t DEVADC3bits __asm__ ("DEVADC3") __attribute__((section("sfrs"), address(0xBFC5400C)));
#define DEVADC4 DEVADC4
volatile uint32_t   DEVADC4 __attribute__((section("sfrs"), address(0xBFC54010)));
typedef union {
  struct {
    uint32_t ADCFG:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVADC4bits_t;
volatile __DEVADC4bits_t DEVADC4bits __asm__ ("DEVADC4") __attribute__((section("sfrs"), address(0xBFC54010)));
#define DEVADC7 DEVADC7
volatile uint32_t   DEVADC7 __attribute__((section("sfrs"), address(0xBFC5401C)));
typedef union {
  struct {
    uint32_t ADCFG:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVADC7bits_t;
volatile __DEVADC7bits_t DEVADC7bits __asm__ ("DEVADC7") __attribute__((section("sfrs"), address(0xBFC5401C)));
#define DEVSN0 DEVSN0
volatile uint32_t   DEVSN0 __attribute__((section("sfrs"), address(0xBFC54020)));
typedef union {
  struct {
    uint32_t SN:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVSN0bits_t;
volatile __DEVSN0bits_t DEVSN0bits __asm__ ("DEVSN0") __attribute__((section("sfrs"), address(0xBFC54020)));
#define DEVSN1 DEVSN1
volatile uint32_t   DEVSN1 __attribute__((section("sfrs"), address(0xBFC54024)));
typedef union {
  struct {
    uint32_t SN:32;
  };
  struct {
    uint32_t w:32;
  };
} __DEVSN1bits_t;
volatile __DEVSN1bits_t DEVSN1bits __asm__ ("DEVSN1") __attribute__((section("sfrs"), address(0xBFC54024)));
#define ADEVCFG3 ADEVCFG3
volatile uint32_t   ADEVCFG3 __attribute__((section("sfrs"), address(0xBFC0FF40)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __ADEVCFG3bits_t;
volatile __ADEVCFG3bits_t ADEVCFG3bits __asm__ ("ADEVCFG3") __attribute__((section("sfrs"), address(0xBFC0FF40)));
#define ADEVCFG2 ADEVCFG2
volatile uint32_t   ADEVCFG2 __attribute__((section("sfrs"), address(0xBFC0FF44)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __ADEVCFG2bits_t;
volatile __ADEVCFG2bits_t ADEVCFG2bits __asm__ ("ADEVCFG2") __attribute__((section("sfrs"), address(0xBFC0FF44)));
#define ADEVCFG1 ADEVCFG1
volatile uint32_t   ADEVCFG1 __attribute__((section("sfrs"), address(0xBFC0FF48)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __ADEVCFG1bits_t;
volatile __ADEVCFG1bits_t ADEVCFG1bits __asm__ ("ADEVCFG1") __attribute__((section("sfrs"), address(0xBFC0FF48)));
#define ADEVCFG0 ADEVCFG0
volatile uint32_t   ADEVCFG0 __attribute__((section("sfrs"), address(0xBFC0FF4C)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __ADEVCFG0bits_t;
volatile __ADEVCFG0bits_t ADEVCFG0bits __asm__ ("ADEVCFG0") __attribute__((section("sfrs"), address(0xBFC0FF4C)));
#define ADEVCP3 ADEVCP3
volatile uint32_t   ADEVCP3 __attribute__((section("sfrs"), address(0xBFC0FF50)));
#define ADEVCP2 ADEVCP2
volatile uint32_t   ADEVCP2 __attribute__((section("sfrs"), address(0xBFC0FF54)));
#define ADEVCP1 ADEVCP1
volatile uint32_t   ADEVCP1 __attribute__((section("sfrs"), address(0xBFC0FF58)));
#define ADEVCP0 ADEVCP0
volatile uint32_t   ADEVCP0 __attribute__((section("sfrs"), address(0xBFC0FF5C)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __ADEVCP0bits_t;
volatile __ADEVCP0bits_t ADEVCP0bits __asm__ ("ADEVCP0") __attribute__((section("sfrs"), address(0xBFC0FF5C)));
#define ADEVSIGN3 ADEVSIGN3
volatile uint32_t   ADEVSIGN3 __attribute__((section("sfrs"), address(0xBFC0FF60)));
#define ADEVSIGN2 ADEVSIGN2
volatile uint32_t   ADEVSIGN2 __attribute__((section("sfrs"), address(0xBFC0FF64)));
#define ADEVSIGN1 ADEVSIGN1
volatile uint32_t   ADEVSIGN1 __attribute__((section("sfrs"), address(0xBFC0FF68)));
#define ADEVSIGN0 ADEVSIGN0
volatile uint32_t   ADEVSIGN0 __attribute__((section("sfrs"), address(0xBFC0FF6C)));
#define ASEQ3 ASEQ3
volatile uint32_t   ASEQ3 __attribute__((section("sfrs"), address(0xBFC0FF70)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __ASEQ3bits_t;
volatile __ASEQ3bits_t ASEQ3bits __asm__ ("ASEQ3") __attribute__((section("sfrs"), address(0xBFC0FF70)));
#define ASEQ2 ASEQ2
volatile uint32_t   ASEQ2 __attribute__((section("sfrs"), address(0xBFC0FF74)));
#define ASEQ1 ASEQ1
volatile uint32_t   ASEQ1 __attribute__((section("sfrs"), address(0xBFC0FF78)));
#define ASEQ0 ASEQ0
volatile uint32_t   ASEQ0 __attribute__((section("sfrs"), address(0xBFC0FF7C)));
#define AUBADEVCFG3 AUBADEVCFG3
volatile uint32_t   AUBADEVCFG3 __attribute__((section("sfrs"), address(0xBFC2FF40)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __AUBADEVCFG3bits_t;
volatile __AUBADEVCFG3bits_t AUBADEVCFG3bits __asm__ ("AUBADEVCFG3") __attribute__((section("sfrs"), address(0xBFC2FF40)));
#define AUBADEVCFG2 AUBADEVCFG2
volatile uint32_t   AUBADEVCFG2 __attribute__((section("sfrs"), address(0xBFC2FF44)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __AUBADEVCFG2bits_t;
volatile __AUBADEVCFG2bits_t AUBADEVCFG2bits __asm__ ("AUBADEVCFG2") __attribute__((section("sfrs"), address(0xBFC2FF44)));
#define AUBADEVCFG1 AUBADEVCFG1
volatile uint32_t   AUBADEVCFG1 __attribute__((section("sfrs"), address(0xBFC2FF48)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __AUBADEVCFG1bits_t;
volatile __AUBADEVCFG1bits_t AUBADEVCFG1bits __asm__ ("AUBADEVCFG1") __attribute__((section("sfrs"), address(0xBFC2FF48)));
#define AUBADEVCFG0 AUBADEVCFG0
volatile uint32_t   AUBADEVCFG0 __attribute__((section("sfrs"), address(0xBFC2FF4C)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __AUBADEVCFG0bits_t;
volatile __AUBADEVCFG0bits_t AUBADEVCFG0bits __asm__ ("AUBADEVCFG0") __attribute__((section("sfrs"), address(0xBFC2FF4C)));
#define AUBADEVCP3 AUBADEVCP3
volatile uint32_t   AUBADEVCP3 __attribute__((section("sfrs"), address(0xBFC2FF50)));
#define AUBADEVCP2 AUBADEVCP2
volatile uint32_t   AUBADEVCP2 __attribute__((section("sfrs"), address(0xBFC2FF54)));
#define AUBADEVCP1 AUBADEVCP1
volatile uint32_t   AUBADEVCP1 __attribute__((section("sfrs"), address(0xBFC2FF58)));
#define AUBADEVCP0 AUBADEVCP0
volatile uint32_t   AUBADEVCP0 __attribute__((section("sfrs"), address(0xBFC2FF5C)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __AUBADEVCP0bits_t;
volatile __AUBADEVCP0bits_t AUBADEVCP0bits __asm__ ("AUBADEVCP0") __attribute__((section("sfrs"), address(0xBFC2FF5C)));
#define AUBADEVSIGN3 AUBADEVSIGN3
volatile uint32_t   AUBADEVSIGN3 __attribute__((section("sfrs"), address(0xBFC2FF60)));
#define AUBADEVSIGN2 AUBADEVSIGN2
volatile uint32_t   AUBADEVSIGN2 __attribute__((section("sfrs"), address(0xBFC2FF64)));
#define AUBADEVSIGN1 AUBADEVSIGN1
volatile uint32_t   AUBADEVSIGN1 __attribute__((section("sfrs"), address(0xBFC2FF68)));
#define AUBADEVSIGN0 AUBADEVSIGN0
volatile uint32_t   AUBADEVSIGN0 __attribute__((section("sfrs"), address(0xBFC2FF6C)));
#define AUBASEQ3 AUBASEQ3
volatile uint32_t   AUBASEQ3 __attribute__((section("sfrs"), address(0xBFC2FF70)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __AUBASEQ3bits_t;
volatile __AUBASEQ3bits_t AUBASEQ3bits __asm__ ("AUBASEQ3") __attribute__((section("sfrs"), address(0xBFC2FF70)));
#define AUBASEQ2 AUBASEQ2
volatile uint32_t   AUBASEQ2 __attribute__((section("sfrs"), address(0xBFC2FF74)));
#define AUBASEQ1 AUBASEQ1
volatile uint32_t   AUBASEQ1 __attribute__((section("sfrs"), address(0xBFC2FF78)));
#define AUBASEQ0 AUBASEQ0
volatile uint32_t   AUBASEQ0 __attribute__((section("sfrs"), address(0xBFC2FF7C)));
#define UBADEVCFG3 UBADEVCFG3
volatile uint32_t   UBADEVCFG3 __attribute__((section("sfrs"), address(0xBFC2FFC0)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __UBADEVCFG3bits_t;
volatile __UBADEVCFG3bits_t UBADEVCFG3bits __asm__ ("UBADEVCFG3") __attribute__((section("sfrs"), address(0xBFC2FFC0)));
#define UBADEVCFG2 UBADEVCFG2
volatile uint32_t   UBADEVCFG2 __attribute__((section("sfrs"), address(0xBFC2FFC4)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __UBADEVCFG2bits_t;
volatile __UBADEVCFG2bits_t UBADEVCFG2bits __asm__ ("UBADEVCFG2") __attribute__((section("sfrs"), address(0xBFC2FFC4)));
#define UBADEVCFG1 UBADEVCFG1
volatile uint32_t   UBADEVCFG1 __attribute__((section("sfrs"), address(0xBFC2FFC8)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __UBADEVCFG1bits_t;
volatile __UBADEVCFG1bits_t UBADEVCFG1bits __asm__ ("UBADEVCFG1") __attribute__((section("sfrs"), address(0xBFC2FFC8)));
#define UBADEVCFG0 UBADEVCFG0
volatile uint32_t   UBADEVCFG0 __attribute__((section("sfrs"), address(0xBFC2FFCC)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __UBADEVCFG0bits_t;
volatile __UBADEVCFG0bits_t UBADEVCFG0bits __asm__ ("UBADEVCFG0") __attribute__((section("sfrs"), address(0xBFC2FFCC)));
#define UBADEVCP3 UBADEVCP3
volatile uint32_t   UBADEVCP3 __attribute__((section("sfrs"), address(0xBFC2FFD0)));
#define UBADEVCP2 UBADEVCP2
volatile uint32_t   UBADEVCP2 __attribute__((section("sfrs"), address(0xBFC2FFD4)));
#define UBADEVCP1 UBADEVCP1
volatile uint32_t   UBADEVCP1 __attribute__((section("sfrs"), address(0xBFC2FFD8)));
#define UBADEVCP0 UBADEVCP0
volatile uint32_t   UBADEVCP0 __attribute__((section("sfrs"), address(0xBFC2FFDC)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __UBADEVCP0bits_t;
volatile __UBADEVCP0bits_t UBADEVCP0bits __asm__ ("UBADEVCP0") __attribute__((section("sfrs"), address(0xBFC2FFDC)));
#define UBADEVSIGN3 UBADEVSIGN3
volatile uint32_t   UBADEVSIGN3 __attribute__((section("sfrs"), address(0xBFC2FFE0)));
#define UBADEVSIGN2 UBADEVSIGN2
volatile uint32_t   UBADEVSIGN2 __attribute__((section("sfrs"), address(0xBFC2FFE4)));
#define UBADEVSIGN1 UBADEVSIGN1
volatile uint32_t   UBADEVSIGN1 __attribute__((section("sfrs"), address(0xBFC2FFE8)));
#define UBADEVSIGN0 UBADEVSIGN0
volatile uint32_t   UBADEVSIGN0 __attribute__((section("sfrs"), address(0xBFC2FFEC)));
#define UBASEQ3 UBASEQ3
volatile uint32_t   UBASEQ3 __attribute__((section("sfrs"), address(0xBFC2FFF0)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __UBASEQ3bits_t;
volatile __UBASEQ3bits_t UBASEQ3bits __asm__ ("UBASEQ3") __attribute__((section("sfrs"), address(0xBFC2FFF0)));
#define UBASEQ2 UBASEQ2
volatile uint32_t   UBASEQ2 __attribute__((section("sfrs"), address(0xBFC2FFF4)));
#define UBASEQ1 UBASEQ1
volatile uint32_t   UBASEQ1 __attribute__((section("sfrs"), address(0xBFC2FFF8)));
#define UBASEQ0 UBASEQ0
volatile uint32_t   UBASEQ0 __attribute__((section("sfrs"), address(0xBFC2FFFC)));
#define ABF1DEVCFG3 ABF1DEVCFG3
volatile uint32_t   ABF1DEVCFG3 __attribute__((section("sfrs"), address(0xBFC4FF40)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF1DEVCFG3bits_t;
volatile __ABF1DEVCFG3bits_t ABF1DEVCFG3bits __asm__ ("ABF1DEVCFG3") __attribute__((section("sfrs"), address(0xBFC4FF40)));
#define ABF1DEVCFG2 ABF1DEVCFG2
volatile uint32_t   ABF1DEVCFG2 __attribute__((section("sfrs"), address(0xBFC4FF44)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF1DEVCFG2bits_t;
volatile __ABF1DEVCFG2bits_t ABF1DEVCFG2bits __asm__ ("ABF1DEVCFG2") __attribute__((section("sfrs"), address(0xBFC4FF44)));
#define ABF1DEVCFG1 ABF1DEVCFG1
volatile uint32_t   ABF1DEVCFG1 __attribute__((section("sfrs"), address(0xBFC4FF48)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF1DEVCFG1bits_t;
volatile __ABF1DEVCFG1bits_t ABF1DEVCFG1bits __asm__ ("ABF1DEVCFG1") __attribute__((section("sfrs"), address(0xBFC4FF48)));
#define ABF1DEVCFG0 ABF1DEVCFG0
volatile uint32_t   ABF1DEVCFG0 __attribute__((section("sfrs"), address(0xBFC4FF4C)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __ABF1DEVCFG0bits_t;
volatile __ABF1DEVCFG0bits_t ABF1DEVCFG0bits __asm__ ("ABF1DEVCFG0") __attribute__((section("sfrs"), address(0xBFC4FF4C)));
#define ABF1DEVCP3 ABF1DEVCP3
volatile uint32_t   ABF1DEVCP3 __attribute__((section("sfrs"), address(0xBFC4FF50)));
#define ABF1DEVCP2 ABF1DEVCP2
volatile uint32_t   ABF1DEVCP2 __attribute__((section("sfrs"), address(0xBFC4FF54)));
#define ABF1DEVCP1 ABF1DEVCP1
volatile uint32_t   ABF1DEVCP1 __attribute__((section("sfrs"), address(0xBFC4FF58)));
#define ABF1DEVCP0 ABF1DEVCP0
volatile uint32_t   ABF1DEVCP0 __attribute__((section("sfrs"), address(0xBFC4FF5C)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF1DEVCP0bits_t;
volatile __ABF1DEVCP0bits_t ABF1DEVCP0bits __asm__ ("ABF1DEVCP0") __attribute__((section("sfrs"), address(0xBFC4FF5C)));
#define ABF1DEVSIGN3 ABF1DEVSIGN3
volatile uint32_t   ABF1DEVSIGN3 __attribute__((section("sfrs"), address(0xBFC4FF60)));
#define ABF1DEVSIGN2 ABF1DEVSIGN2
volatile uint32_t   ABF1DEVSIGN2 __attribute__((section("sfrs"), address(0xBFC4FF64)));
#define ABF1DEVSIGN1 ABF1DEVSIGN1
volatile uint32_t   ABF1DEVSIGN1 __attribute__((section("sfrs"), address(0xBFC4FF68)));
#define ABF1DEVSIGN0 ABF1DEVSIGN0
volatile uint32_t   ABF1DEVSIGN0 __attribute__((section("sfrs"), address(0xBFC4FF6C)));
#define ABF1SEQ3 ABF1SEQ3
volatile uint32_t   ABF1SEQ3 __attribute__((section("sfrs"), address(0xBFC4FF70)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __ABF1SEQ3bits_t;
volatile __ABF1SEQ3bits_t ABF1SEQ3bits __asm__ ("ABF1SEQ3") __attribute__((section("sfrs"), address(0xBFC4FF70)));
#define ABF1SEQ2 ABF1SEQ2
volatile uint32_t   ABF1SEQ2 __attribute__((section("sfrs"), address(0xBFC4FF74)));
#define ABF1SEQ1 ABF1SEQ1
volatile uint32_t   ABF1SEQ1 __attribute__((section("sfrs"), address(0xBFC4FF78)));
#define ABF1SEQ0 ABF1SEQ0
volatile uint32_t   ABF1SEQ0 __attribute__((section("sfrs"), address(0xBFC4FF7C)));
#define BF1DEVCFG3 BF1DEVCFG3
volatile uint32_t   BF1DEVCFG3 __attribute__((section("sfrs"), address(0xBFC4FFC0)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF1DEVCFG3bits_t;
volatile __BF1DEVCFG3bits_t BF1DEVCFG3bits __asm__ ("BF1DEVCFG3") __attribute__((section("sfrs"), address(0xBFC4FFC0)));
#define BF1DEVCFG2 BF1DEVCFG2
volatile uint32_t   BF1DEVCFG2 __attribute__((section("sfrs"), address(0xBFC4FFC4)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF1DEVCFG2bits_t;
volatile __BF1DEVCFG2bits_t BF1DEVCFG2bits __asm__ ("BF1DEVCFG2") __attribute__((section("sfrs"), address(0xBFC4FFC4)));
#define BF1DEVCFG1 BF1DEVCFG1
volatile uint32_t   BF1DEVCFG1 __attribute__((section("sfrs"), address(0xBFC4FFC8)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF1DEVCFG1bits_t;
volatile __BF1DEVCFG1bits_t BF1DEVCFG1bits __asm__ ("BF1DEVCFG1") __attribute__((section("sfrs"), address(0xBFC4FFC8)));
#define BF1DEVCFG0 BF1DEVCFG0
volatile uint32_t   BF1DEVCFG0 __attribute__((section("sfrs"), address(0xBFC4FFCC)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __BF1DEVCFG0bits_t;
volatile __BF1DEVCFG0bits_t BF1DEVCFG0bits __asm__ ("BF1DEVCFG0") __attribute__((section("sfrs"), address(0xBFC4FFCC)));
#define BF1DEVCP3 BF1DEVCP3
volatile uint32_t   BF1DEVCP3 __attribute__((section("sfrs"), address(0xBFC4FFD0)));
#define BF1DEVCP2 BF1DEVCP2
volatile uint32_t   BF1DEVCP2 __attribute__((section("sfrs"), address(0xBFC4FFD4)));
#define BF1DEVCP1 BF1DEVCP1
volatile uint32_t   BF1DEVCP1 __attribute__((section("sfrs"), address(0xBFC4FFD8)));
#define BF1DEVCP0 BF1DEVCP0
volatile uint32_t   BF1DEVCP0 __attribute__((section("sfrs"), address(0xBFC4FFDC)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF1DEVCP0bits_t;
volatile __BF1DEVCP0bits_t BF1DEVCP0bits __asm__ ("BF1DEVCP0") __attribute__((section("sfrs"), address(0xBFC4FFDC)));
#define BF1DEVSIGN3 BF1DEVSIGN3
volatile uint32_t   BF1DEVSIGN3 __attribute__((section("sfrs"), address(0xBFC4FFE0)));
#define BF1DEVSIGN2 BF1DEVSIGN2
volatile uint32_t   BF1DEVSIGN2 __attribute__((section("sfrs"), address(0xBFC4FFE4)));
#define BF1DEVSIGN1 BF1DEVSIGN1
volatile uint32_t   BF1DEVSIGN1 __attribute__((section("sfrs"), address(0xBFC4FFE8)));
#define BF1DEVSIGN0 BF1DEVSIGN0
volatile uint32_t   BF1DEVSIGN0 __attribute__((section("sfrs"), address(0xBFC4FFEC)));
#define BF1SEQ3 BF1SEQ3
volatile uint32_t   BF1SEQ3 __attribute__((section("sfrs"), address(0xBFC4FFF0)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __BF1SEQ3bits_t;
volatile __BF1SEQ3bits_t BF1SEQ3bits __asm__ ("BF1SEQ3") __attribute__((section("sfrs"), address(0xBFC4FFF0)));
#define BF1SEQ2 BF1SEQ2
volatile uint32_t   BF1SEQ2 __attribute__((section("sfrs"), address(0xBFC4FFF4)));
#define BF1SEQ1 BF1SEQ1
volatile uint32_t   BF1SEQ1 __attribute__((section("sfrs"), address(0xBFC4FFF8)));
#define BF1SEQ0 BF1SEQ0
volatile uint32_t   BF1SEQ0 __attribute__((section("sfrs"), address(0xBFC4FFFC)));
#define ABF2DEVCFG3 ABF2DEVCFG3
volatile uint32_t   ABF2DEVCFG3 __attribute__((section("sfrs"), address(0xBFC6FF40)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF2DEVCFG3bits_t;
volatile __ABF2DEVCFG3bits_t ABF2DEVCFG3bits __asm__ ("ABF2DEVCFG3") __attribute__((section("sfrs"), address(0xBFC6FF40)));
#define ABF2DEVCFG2 ABF2DEVCFG2
volatile uint32_t   ABF2DEVCFG2 __attribute__((section("sfrs"), address(0xBFC6FF44)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF2DEVCFG2bits_t;
volatile __ABF2DEVCFG2bits_t ABF2DEVCFG2bits __asm__ ("ABF2DEVCFG2") __attribute__((section("sfrs"), address(0xBFC6FF44)));
#define ABF2DEVCFG1 ABF2DEVCFG1
volatile uint32_t   ABF2DEVCFG1 __attribute__((section("sfrs"), address(0xBFC6FF48)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF2DEVCFG1bits_t;
volatile __ABF2DEVCFG1bits_t ABF2DEVCFG1bits __asm__ ("ABF2DEVCFG1") __attribute__((section("sfrs"), address(0xBFC6FF48)));
#define ABF2DEVCFG0 ABF2DEVCFG0
volatile uint32_t   ABF2DEVCFG0 __attribute__((section("sfrs"), address(0xBFC6FF4C)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __ABF2DEVCFG0bits_t;
volatile __ABF2DEVCFG0bits_t ABF2DEVCFG0bits __asm__ ("ABF2DEVCFG0") __attribute__((section("sfrs"), address(0xBFC6FF4C)));
#define ABF2DEVCP3 ABF2DEVCP3
volatile uint32_t   ABF2DEVCP3 __attribute__((section("sfrs"), address(0xBFC6FF50)));
#define ABF2DEVCP2 ABF2DEVCP2
volatile uint32_t   ABF2DEVCP2 __attribute__((section("sfrs"), address(0xBFC6FF54)));
#define ABF2DEVCP1 ABF2DEVCP1
volatile uint32_t   ABF2DEVCP1 __attribute__((section("sfrs"), address(0xBFC6FF58)));
#define ABF2DEVCP0 ABF2DEVCP0
volatile uint32_t   ABF2DEVCP0 __attribute__((section("sfrs"), address(0xBFC6FF5C)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __ABF2DEVCP0bits_t;
volatile __ABF2DEVCP0bits_t ABF2DEVCP0bits __asm__ ("ABF2DEVCP0") __attribute__((section("sfrs"), address(0xBFC6FF5C)));
#define ABF2DEVSIGN3 ABF2DEVSIGN3
volatile uint32_t   ABF2DEVSIGN3 __attribute__((section("sfrs"), address(0xBFC6FF60)));
#define ABF2DEVSIGN2 ABF2DEVSIGN2
volatile uint32_t   ABF2DEVSIGN2 __attribute__((section("sfrs"), address(0xBFC6FF64)));
#define ABF2DEVSIGN1 ABF2DEVSIGN1
volatile uint32_t   ABF2DEVSIGN1 __attribute__((section("sfrs"), address(0xBFC6FF68)));
#define ABF2DEVSIGN0 ABF2DEVSIGN0
volatile uint32_t   ABF2DEVSIGN0 __attribute__((section("sfrs"), address(0xBFC6FF6C)));
#define ABF2SEQ3 ABF2SEQ3
volatile uint32_t   ABF2SEQ3 __attribute__((section("sfrs"), address(0xBFC6FF70)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __ABF2SEQ3bits_t;
volatile __ABF2SEQ3bits_t ABF2SEQ3bits __asm__ ("ABF2SEQ3") __attribute__((section("sfrs"), address(0xBFC6FF70)));
#define ABF2SEQ2 ABF2SEQ2
volatile uint32_t   ABF2SEQ2 __attribute__((section("sfrs"), address(0xBFC6FF74)));
#define ABF2SEQ1 ABF2SEQ1
volatile uint32_t   ABF2SEQ1 __attribute__((section("sfrs"), address(0xBFC6FF78)));
#define ABF2SEQ0 ABF2SEQ0
volatile uint32_t   ABF2SEQ0 __attribute__((section("sfrs"), address(0xBFC6FF7C)));
#define BF2DEVCFG3 BF2DEVCFG3
volatile uint32_t   BF2DEVCFG3 __attribute__((section("sfrs"), address(0xBFC6FFC0)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :8;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :1;
    uint32_t PGL1WAY:1;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF2DEVCFG3bits_t;
volatile __BF2DEVCFG3bits_t BF2DEVCFG3bits __asm__ ("BF2DEVCFG3") __attribute__((section("sfrs"), address(0xBFC6FFC0)));
#define BF2DEVCFG2 BF2DEVCFG2
volatile uint32_t   BF2DEVCFG2 __attribute__((section("sfrs"), address(0xBFC6FFC4)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLRNG:3;
    uint32_t FPLLICLK:1;
    uint32_t FPLLMULT:7;
    uint32_t :1;
    uint32_t FPLLODIV:3;
    uint32_t :11;
    uint32_t UPLLFSEL:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF2DEVCFG2bits_t;
volatile __BF2DEVCFG2bits_t BF2DEVCFG2bits __asm__ ("BF2DEVCFG2") __attribute__((section("sfrs"), address(0xBFC6FFC4)));
#define BF2DEVCFG1 BF2DEVCFG1
volatile uint32_t   BF2DEVCFG1 __attribute__((section("sfrs"), address(0xBFC6FFC8)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t DMTINTV:3;
    uint32_t FSOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :3;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t WDTSPGM:1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
    uint32_t DMTCNT:5;
    uint32_t FDMTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF2DEVCFG1bits_t;
volatile __BF2DEVCFG1bits_t BF2DEVCFG1bits __asm__ ("BF2DEVCFG1") __attribute__((section("sfrs"), address(0xBFC6FFC8)));
#define BF2DEVCFG0 BF2DEVCFG0
volatile uint32_t   BF2DEVCFG0 __attribute__((section("sfrs"), address(0xBFC6FFCC)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t TRCEN:1;
    uint32_t BOOTISA:1;
    uint32_t :1;
    uint32_t FECCCON:2;
    uint32_t FSLEEP:1;
    uint32_t :1;
    uint32_t DBGPER:3;
    uint32_t SMCLR:1;
    uint32_t SOSCGAIN:2;
    uint32_t SOSCBOOST:1;
    uint32_t POSCGAIN:2;
    uint32_t POSCBOOST:1;
    uint32_t :8;
    uint32_t EJTAGBEN:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __BF2DEVCFG0bits_t;
volatile __BF2DEVCFG0bits_t BF2DEVCFG0bits __asm__ ("BF2DEVCFG0") __attribute__((section("sfrs"), address(0xBFC6FFCC)));
#define BF2DEVCP3 BF2DEVCP3
volatile uint32_t   BF2DEVCP3 __attribute__((section("sfrs"), address(0xBFC6FFD0)));
#define BF2DEVCP2 BF2DEVCP2
volatile uint32_t   BF2DEVCP2 __attribute__((section("sfrs"), address(0xBFC6FFD4)));
#define BF2DEVCP1 BF2DEVCP1
volatile uint32_t   BF2DEVCP1 __attribute__((section("sfrs"), address(0xBFC6FFD8)));
#define BF2DEVCP0 BF2DEVCP0
volatile uint32_t   BF2DEVCP0 __attribute__((section("sfrs"), address(0xBFC6FFDC)));
typedef union {
  struct {
    uint32_t :28;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __BF2DEVCP0bits_t;
volatile __BF2DEVCP0bits_t BF2DEVCP0bits __asm__ ("BF2DEVCP0") __attribute__((section("sfrs"), address(0xBFC6FFDC)));
#define BF2DEVSIGN3 BF2DEVSIGN3
volatile uint32_t   BF2DEVSIGN3 __attribute__((section("sfrs"), address(0xBFC6FFE0)));
#define BF2DEVSIGN2 BF2DEVSIGN2
volatile uint32_t   BF2DEVSIGN2 __attribute__((section("sfrs"), address(0xBFC6FFE4)));
#define BF2DEVSIGN1 BF2DEVSIGN1
volatile uint32_t   BF2DEVSIGN1 __attribute__((section("sfrs"), address(0xBFC6FFE8)));
#define BF2DEVSIGN0 BF2DEVSIGN0
volatile uint32_t   BF2DEVSIGN0 __attribute__((section("sfrs"), address(0xBFC6FFEC)));
#define BF2SEQ3 BF2SEQ3
volatile uint32_t   BF2SEQ3 __attribute__((section("sfrs"), address(0xBFC6FFF0)));
typedef union {
  struct {
    uint32_t TSEQ:16;
    uint32_t CSEQ:16;
  };
  struct {
    uint32_t w:32;
  };
} __BF2SEQ3bits_t;
volatile __BF2SEQ3bits_t BF2SEQ3bits __asm__ ("BF2SEQ3") __attribute__((section("sfrs"), address(0xBFC6FFF0)));
#define BF2SEQ2 BF2SEQ2
volatile uint32_t   BF2SEQ2 __attribute__((section("sfrs"), address(0xBFC6FFF4)));
#define BF2SEQ1 BF2SEQ1
volatile uint32_t   BF2SEQ1 __attribute__((section("sfrs"), address(0xBFC6FFF8)));
#define BF2SEQ0 BF2SEQ0
volatile uint32_t   BF2SEQ0 __attribute__((section("sfrs"), address(0xBFC6FFFC)));
#ifdef __cplusplus
}
#endif

