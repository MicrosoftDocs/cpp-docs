---
description: "Learn more about: _tzset"
title: "_tzset"
ms.date: "4/2/2020"
api_name: ["_tzset", "_o__tzset"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tzset"]
helpviewer_keywords: ["_tzset function", "time environment variables", "environment variables, setting time"]
ms.assetid: 3f6ed537-b414-444d-b272-5dd377481930
---
# _tzset

Sets time environment variables.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
void _tzset( void );
```

## Remarks

The **_tzset** function uses the current setting of the environment variable **TZ** to assign values to three global variables: **_daylight**, **_timezone**, and **_tzname**. These variables are used by the [_ftime](ftime-ftime32-ftime64.md) and [localtime](localtime-localtime32-localtime64.md) functions to make corrections from coordinated universal time (UTC) to local time, and by the [time](time-time32-time64.md) function to compute UTC from system time. Use the following syntax to set the **TZ** environment variable:

> **set TZ=**_tzn_ \[**+**&#124;**-**]*hh*\[**:**_mm_\[**:**_ss_] ][*dzn*]

 *tzn* \
 Three-letter time-zone name, such as PST. You must specify the correct offset from local time to UTC.

 *hh* \
 Difference in hours between UTC and local time. Sign (+) optional for positive values.

 *mm* \
 Minutes. Separated from *hh* by a colon (**:**).

 *ss* \
 Seconds. Separated from *mm* by a colon (**:**).

 *dzn* \
 Three-letter daylight-saving-time zone such as PDT. If daylight saving time is never in effect in the locality, set **TZ** without a value for *dzn*. The C run-time library assumes the United States' rules for implementing the calculation of daylight saving time (DST).

> [!NOTE]
> Take care in computing the sign of the time difference. Because the time difference is the offset from local time to UTC (rather than the reverse), its sign may be the opposite of what you might intuitively expect. For time zones ahead of UTC, the time difference is negative; for those behind UTC, the difference is positive.

For example, to set the **TZ** environment variable to correspond to the current time zone in Germany, enter the following on the command line:

> **set TZ=GST-1GDT**

This command uses GST to indicate German standard time, assumes that UTC is one hour behind Germany (or in other words, that Germany is one hour ahead of UTC), and assumes that Germany observes daylight-saving time.

If the **TZ** value is not set, **_tzset** attempts to use the time zone information specified by the operating system. In the Windows operating system, this information is specified in the Date/Time application in Control Panel. If **_tzset** cannot obtain this information, it uses PST8PDT by default, which signifies the Pacific Time zone.

Based on the **TZ** environment variable value, the following values are assigned to the global variables **_daylight**, **_timezone**, and **_tzname** when **_tzset** is called:

|Global variable|Description|Default value|
|---------------------|-----------------|-------------------|
|**_daylight**|Nonzero value if a daylight-saving-time zone is specified in **TZ** setting; otherwise, 0.|1|
|**_timezone**|Difference in seconds between local time and UTC.|28800 (28800 seconds equals 8 hours)|
|**_tzname**[0]|String value of time-zone name from **TZ** environmental variable; empty if **TZ** has not been set.|PST|
|**_tzname**[1]|String value of daylight-saving-time zone; empty if daylight-saving-time zone is omitted from **TZ** environmental variable.|PDT|

The default values shown in the preceding table for **_daylight** and the **_tzname** array correspond to "PST8PDT." If the DST zone is omitted from the **TZ** environmental variable, the value of **_daylight** is 0 and the [_ftime](ftime-ftime32-ftime64.md), [gmtime](gmtime-gmtime32-gmtime64.md), and [localtime](localtime-localtime32-localtime64.md) functions return 0 for their DST flags.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_tzset**|\<time.h>|

The **_tzset** function is Microsoft-specific. For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_tzset.cpp
// This program uses _tzset to set the global variables
// named _daylight, _timezone, and _tzname. Since TZ is
// not being explicitly set, it uses the system time.

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
    _tzset();
    int daylight;
    _get_daylight( &daylight );
    printf( "_daylight = %d\n", daylight );
    long timezone;
    _get_timezone( &timezone );
    printf( "_timezone = %ld\n", timezone );
    size_t s;
    char tzname[100];
    _get_tzname( &s, tzname, sizeof(tzname), 0 );
    printf( "_tzname[0] = %s\n", tzname );
    exit( 0 );
}
```

```Output
_daylight = 1
_timezone = 28800
_tzname[0] = Pacific Standard Time
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](utime-utime32-utime64-wutime-wutime32-wutime64.md)<br/>
