---
description: "Learn more about: time, _time32, _time64"
title: "time, _time32, _time64"
ms.date: "11/06/2018"
api_name: ["time", "_time64", "_time32"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["TIME/time", "TIME/_time32", "TIME/_time64", "time", "_time32", "_time64"]
helpviewer_keywords: ["time32 function", "_time32 function", "_time64 function", "time functions", "system time", "time64 function"]
ms.assetid: 280e00f2-2b93-4ece-94cd-e048484c6cc7
---
# `time`, `_time32`, `_time64`

Gets the system time.

## Syntax

```C
time_t time( time_t *destTime ); // See note in remarks section about linkage
__time32_t _time32( __time32_t *destTime );
__time64_t _time64( __time64_t *destTime );
```

### Parameters

*`destTime`*\
Pointer to the storage location for time.

## Return value

Returns the time as seconds elapsed since midnight, January 1, 1970, or -1 if there's an error.

## Remarks

The **`time`** function returns the number of seconds elapsed since midnight (00:00:00), January 1, 1970, Coordinated Universal Time (UTC), according to the system clock. The return value is stored in the location given by *`destTime`*. This parameter may be `NULL`, in which case the return value isn't stored.

**`time`** is a wrapper for **`_time64`** and **`time_t`** is, by default, equivalent to **`__time64_t`**. If you need to force the compiler to interpret **`time_t`** as the old 32-bit **`time_t`**, you can define `_USE_32BIT_TIME_T`. We don't recommend `_USE_32BIT_TIME_T`, because your application may fail after January 18, 2038; the use of this macro isn't allowed on 64-bit platforms.

> [!Note]
> When you use Windows SDK version 10.0.xxxxx.xxxx and Visual Studio 2026 or later together, the following functions are no longer declared as `static inline` (internal linkage). Instead, they are declared as `inline` (external linkage).\
> To return to the previous behavior, `#define _STATIC_INLINE_UCRT_FUNCTIONS=1` before including any CRT headers. By default, `_STATIC_INLINE_UCRT_FUNCTIONS` is set to 0.\
> This change increases UCRT conformance with the C++ standard, while also improving compatibility with C++ modules.\
> This applies to the following function: `time`

## Requirements

| Routine | Required C header | Required C++ header |
|---|---|---|
| **`time`**, **`_time32`**, **`_time64`** | `<time.h>` | `<ctime>` or `<time.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_times.c
// compile with: /W3
// This program demonstrates these time and date functions:
//      time         _ftime    ctime_s     asctime_s
//      _localtime64_s    _gmtime64_s    mktime    _tzset
//      _strtime_s     _strdate_s  strftime
//
// Also the global variable:
//      _tzname
//
// Turn off deprecated unsafe CRT function warnings
#define _CRT_SECURE_NO_WARNINGS 1

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <string.h>

int main()
{
    char tmpbuf[128], timebuf[26], ampm[] = "AM";
    time_t ltime;
    struct _timeb tstruct;
    struct tm today, gmt, xmas = { 0, 0, 12, 25, 11, 93 };
    errno_t err;

    // Set time zone from TZ environment variable. If TZ is not set,
    // the operating system is queried to obtain the default value
    // for the variable.
    //
    _tzset();

    // Display operating system-style date and time.
    _strtime_s( tmpbuf, 128 );
    printf( "OS time:\t\t\t\t%s\n", tmpbuf );
    _strdate_s( tmpbuf, 128 );
    printf( "OS date:\t\t\t\t%s\n", tmpbuf );

    // Get UNIX-style time and display as number and string.
    time( &ltime );
    printf( "Time in seconds since UTC 1/1/70:\t%lld\n", (long long)ltime );
    err = ctime_s(timebuf, 26, &ltime);
    if (err)
    {
        printf("ctime_s failed due to an invalid argument.");
        exit(1);
    }
    printf( "UNIX time and date:\t\t\t%s", timebuf );

    // Display UTC.
    err = _gmtime64_s( &gmt, &ltime );
    if (err)
    {
        printf("_gmtime64_s failed due to an invalid argument.");
    }
    err = asctime_s(timebuf, 26, &gmt);
    if (err)
    {
        printf("asctime_s failed due to an invalid argument.");
        exit(1);
    }
    printf( "Coordinated universal time:\t\t%s", timebuf );

    // Convert to time structure and adjust for PM if necessary.
    err = _localtime64_s( &today, &ltime );
    if (err)
    {
        printf("_localtime64_s failed due to an invalid argument.");
        exit(1);
    }
    if ( today.tm_hour >= 12 )
    {
        strcpy_s( ampm, sizeof(ampm), "PM" );
        today.tm_hour -= 12;
    }
    if ( today.tm_hour == 0 )  // Adjust if midnight hour.
        today.tm_hour = 12;

    // Convert today into an ASCII string
    err = asctime_s(timebuf, 26, &today);
    if (err)
    {
        printf("asctime_s failed due to an invalid argument.");
        exit(1);
    }

    // Note how pointer addition is used to skip the first 11
    // characters and printf is used to trim off terminating
    // characters.
    //
    printf( "12-hour time:\t\t\t\t%.8s %s\n",
        timebuf + 11, ampm );

    // Print additional time information.
    _ftime( &tstruct ); // C4996
    // Note: _ftime is deprecated; consider using _ftime_s instead
    printf( "Plus milliseconds:\t\t\t%u\n", tstruct.millitm );
    printf( "Zone difference in hours from UTC:\t%u\n",
             tstruct.timezone/60 );
    printf( "Time zone name:\t\t\t\t%s\n", _tzname[0] ); //C4996
    // Note: _tzname is deprecated; consider using _get_tzname
    printf( "Daylight savings:\t\t\t%s\n",
             tstruct.dstflag ? "YES" : "NO" );

    // Make time for noon on Christmas, 1993.
    if( mktime( &xmas ) != (time_t)-1 )
    {
        err = asctime_s(timebuf, 26, &xmas);
        if (err)
        {
            printf("asctime_s failed due to an invalid argument.");
            exit(1);
        }
        printf( "Christmas\t\t\t\t%s\n", timebuf );
    }

    // Use time structure to build a customized time string.
    err = _localtime64_s( &today, &ltime );
    if (err)
    {
        printf(" _localtime64_s failed due to invalid arguments.");
        exit(1);
    }

    // Use strftime to build a customized time string.
    strftime( tmpbuf, 128,
              "Today is %A, day %d of %B in the year %Y.\n", &today );
    printf( tmpbuf );
}
```

```Output
OS time:            13:51:23
OS date:            04/25/03
Time in seconds since UTC 1/1/70:   1051303883
UNIX time and date:         Fri Apr 25 13:51:23 2003
Coordinated universal time:      Fri Apr 25 20:51:23 2003
12-hour time:            01:51:23 PM
Plus milliseconds:         552
Zone difference in hours from UTC:   8
Time zone name:            Pacific Standard Time
Daylight savings:         YES
Christmas            Sat Dec 25 12:00:00 1993

Today is Friday, day 25 of April in the year 2003.
```

## See also

[Time management](../time-management.md)\
[`asctime`, `_wasctime`](asctime-wasctime.md)\
[`asctime_s`, `_wasctime_s`](asctime-s-wasctime-s.md)\
[`_ftime`, `_ftime32`, `_ftime64`](ftime-ftime32-ftime64.md)\
[`gmtime`, `_gmtime32`, `_gmtime64`](gmtime-gmtime32-gmtime64.md)\
[`gmtime_s`, `_gmtime32_s`, `_gmtime64_s`](gmtime-s-gmtime32-s-gmtime64-s.md)\
[`localtime`, `_localtime32`, `_localtime64`](localtime-localtime32-localtime64.md)\
[`localtime_s`, `_localtime32_s`, `_localtime64_s`](localtime-s-localtime32-s-localtime64-s.md)\
[`_utime`, `_utime32`, `_utime64`, `_wutime`, `_wutime32`, `_wutime64`](utime-utime32-utime64-wutime-wutime32-wutime64.md)
