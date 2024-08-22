#ifndef _CMU_EMULATOR_H    /* Guard against multiple inclusion */
#define _CMU_EMULATOR_H

#include "io.h"


extern void Init_CMU_Server(void);
extern void ProcessTCP_CMU(void);
extern void ProcessUDP_CMU(void);


#endif /* _CMU_EMULATOR_H */
