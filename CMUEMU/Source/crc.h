#ifndef _CRC_H    /* Guard against multiple inclusion */
#define _CRC_H

#include "io.h"


extern uint32_t CalculateCRC32(const void* data, int32_t len);
extern void CRC32_CALC(void* data, int32_t len);
extern bool CRC32_OK(const void* data, int32_t len);


extern bool CRC16_OK(const void* source, uint16_t size);
extern void CRC16_CALC(void* source, uint16_t size);

#endif /* _CRC_H */
