---
description: "Learn more about: asctime, _wasctime"
title: "asctime, _wasctime"
ms.date: "4/2/2020"
api_name: ["_wasctime", "asctime", "_o__wasctime", "_o_asctime"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tasctime", "asctime", "_wasctime"]
helpviewer_keywords: ["asctime function", "tasctime function", "wasctime function", "_tasctime function", "_wasctime function", "time structure conversion", "time, converting"]
ms.assetid: 974f1727-10ff-4ed4-8cac-2eb2d681f576
---
# asctime, _wasctime

Convert a **tm** time structure to a character string. More secure versions of these functions are available; see [asctime_s, _wasctime_s](asctime-s-wasctime-s.md).

## Syntax

```C
char *asctime(
   const struct tm *timeptr
);
wchar_t *_wasctime(
   const struct tm *timeptr
);
```

### Parameters

*timeptr*<br/>
Time/date structure.

## Return Value

**asctime** returns a pointer to the character string result; **_wasctime** returns a pointer to the wide-character string result. There is no error return value.

## Remarks

More secure versions of these functions are available; see [asctime_s, _wasctime_s](asctime-s-wasctime-s.md).

The **asctime** function converts a time stored as a structure to a character string. The *timeptr* value is usually obtained from a call to **gmtime** or **localtime**, which both return a pointer to a **tm** structure, defined in TIME.H.

|timeptr member|Value|
|--------------------|-----------|
|**tm_hour**|Hours since midnight (0-23)|
|**tm_isdst**|Positive if daylight saving time is in effect; 0 if daylight saving time is not in effect; negative if status of daylight saving time is unknown. The C run-time library assumes the United States' rules for implementing the calculation of Daylight Saving Time (DST).|
|**tm_mday**|Day of month (1-31)|
|**tm_min**|Minutes after hour (0-59)|
|**tm_mon**|Month (0-11; January = 0)|
|**tm_sec**|Seconds after minute (0-59)|
|**tm_wday**|Day of week (0-6; Sunday = 0)|
|**tm_yday**|Day of year (0-365; January 1 = 0)|
|**tm_year**|Year (current year minus 1900)|

The converted character string is also adjusted according to the local time zone settings. For information about configuring the local time, see the [time](time-time32-time64.md), [_ftime](ftime-ftime32-ftime64.md), and [localtime](localtime-localtime32-localtime64.md) functions and the [_tzset](tzset.md) function for information about defining the time zone environment and global variables.

The string result produced by **asctime** contains exactly 26 characters and has the form `Wed Jan 02 02:03:55 1980\n\0`. A 24-hour clock is used. All fields have a constant width. The newline character and the null character occupy the last two positions of the string. **asctime** uses a single, statically allocated buffer to hold the return string. Each call to this function destroys the result of the previous call.

**_wasctime** is a wide-character version of **asctime**. **_wasctime** and **asctime** behave identically otherwise.

These functions validate their parameters. If *timeptr* is a null pointer, or if it contains out-of-range values, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns **NULL** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mapping

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tasctime**|**asctime**|**asctime**|**_wasctime**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**asctime**|\<time.h>|
|**_wasctime**|\<time.h> or \<wchar.h>|

## Example

This program places the system time in the long integer **aclock**, translates it into the structure **newtime** and then converts it to string form for output, using the **asctime** function.

```C
// crt_asctime.c
// compile with: /W3

#include <time.h>
#include <stdio.h>

int main( void )
{
    struct tm   *newTime;
    time_t      szClock;

    // Get time in seconds
    time( &szClock );

    // Convert time to struct tm form
    newTime = localtime( &szClock );

    // Print local time as a string.
    printf_s( "Current date and time: %s", asctime( newTime ) ); // C4996
    // Note: asctime is deprecated; consider using asctime_s instead
}
```

```Output
Current date and time: Sun Feb 03 11:38:58 2002
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
