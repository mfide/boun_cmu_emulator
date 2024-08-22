#ifndef _LCD_H    /* Guard against multiple inclusion */
#define _LCD_H

#include "io.h"


extern void InitializeLCD(void);
extern void LCDWriteTextRow(const uint8_t row, const char* text);
void ProcessLCD(void);


// required by Menu Framework
extern void LCDClear(void);
extern void LCDSetCursorPos(const uint8_t row, const uint8_t col);
extern void LCDWriteTextRowCol(const uint8_t row, const uint8_t col, const char* text, const bool upper);
extern void LCDCursorOn(const bool val);
extern bool LCDIsCursorOn(void);

#endif /* _LCD_H */
