#ifndef _RTC_H    /* Guard against multiple inclusion */
#define _RTC_H

#include "io.h"

#if __cplusplus
extern "C" {
#endif

	extern void InitializeExternalRTC(void);
	extern void GetDateTime(char* buf);
	extern void SetDateTime(struct tm const* val);

	extern double ReadTemperature(void);

	extern void sntp_set_system_time(uint32_t sec);

	extern bool GetDateTimeAsSec(uint32_t* jd);
	extern bool SetDateTimeAsSec(const uint32_t jd);

#if __cplusplus
}
#endif

#endif /* _RTC_H */
