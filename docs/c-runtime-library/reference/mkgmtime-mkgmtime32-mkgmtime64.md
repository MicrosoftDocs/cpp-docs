---
title: "_mkgmtime, _mkgmtime32, _mkgmtime64"
description: "Describes the _mkgmtime, _mkgmtime32, and _mkgmtime64 C Runtime library functions, and gives examples of how to use them."
ms.date: 09/22/2021
api_name: ["_mkgmtime32", "_mkgmtime64", "_mkgmtime", "_o__mkgmtime32", "_o__mkgmtime64"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mkgmtime64", "mkgmtime32", "_mkgmtime32", "mkgmtime", "mkgmtime64", "_mkgmtime"]
helpviewer_keywords: ["mkgmtime32 function", "time functions", "mkgmtime function", "_mkgmtime function", "converting times", "mkgmtime64 function", "_mkgmtime64 function", "_mkgmtime32 function", "time, converting"]
---
# `_mkgmtime`, `_mkgmtime32`, `_mkgmtime64`

Converts a UTC time represented by a **`struct tm`** to a UTC time represented by a **`time_t`** type.

## Syntax

```C
time_t _mkgmtime(
   struct tm* timeptr
);
__time32_t _mkgmtime32(
   struct tm* timeptr
);
__time64_t _mkgmtime64(
   struct tm* timeptr
);
```

### Parameters

*`timeptr`*\
A pointer to the UTC time as a **`struct tm`** to convert.

## Return value

A quantity of type **`__time32_t`** or **`__time64_t`** representing the number of seconds elapsed since midnight, January 1, 1970, in Coordinated Universal Time (UTC). If the date is out of range (see the Remarks section) or the input can't be interpreted as a valid time, the return value is -1.

## Remarks

The **`_mkgmtime32`** and **`_mkgmtime64`** functions convert a UTC time to a **`__time32_t`** or **`__time64_t`** type representing the time in UTC. To convert a local time to UTC time, use **`mktime`**, **`_mktime32`**, and **`_mktime64`** instead.

**`_mkgmtime`** is an inline function that evaluates to **`_mkgmtime64`**, and **`time_t`** is equivalent to **`__time64_t`**. If you need to force the compiler to interpret **`time_t`** as the old 32-bit **`time_t`**, you can define `_USE_32BIT_TIME_T`. We don't recommend it, because your application might fail after January 18, 2038, the maximum range of a 32-bit **`time_t`**. It's not allowed at all on 64-bit platforms.

The time structure passed in is changed as follows, in the same way as it's changed by the **`_mktime`** functions: the **`tm_wday`** and **`tm_yday`** fields are set to new values based on the values of **`tm_mday`** and **`tm_year`**. Because the time is assumed to be UTC, the **`tm_isdst`** field is ignored.

The range of the **`_mkgmtime32`** function is from midnight, January 1, 1970, UTC to 23:59:59 January 18, 2038, UTC. The range of **`_mkgmtime64`** is from midnight, January 1, 1970, UTC to 23:59:59, December 31, 3000, UTC. An out-of-range date results in a return value of -1. The range of **`_mkgmtime`** depends on whether `_USE_32BIT_TIME_T` is defined. When it's not defined, which is the default, the range is the same as **`_mkgmtime64`**. Otherwise, the range is limited to the 32-bit range of **`_mkgmtime32`**.

Both **`gmtime`** and **`localtime`** use a common static buffer for the conversion. If you supply this buffer to **`_mkgmtime`**, the previous contents are destroyed.

## Examples

```C
// crt_mkgmtime.c
#include <stdio.h>
#include <time.h>

int main()
{
    struct tm t1, t2;
    time_t now, mytime, gmtime;
    char buff[30];

    time( & now );

    _localtime64_s( &t1, &now );
    _gmtime64_s( &t2, &now );

    mytime = mktime(&t1);
    gmtime = _mkgmtime(&t2);

    printf("Seconds since midnight, January 1, 1970\n");
    printf("My time: %I64d\nGM time (UTC): %I64d\n\n", mytime, gmtime);

    /* Use asctime_s to display these times. */

    _localtime64_s( &t1, &mytime );
    asctime_s( buff, sizeof(buff), &t1 );
    printf( "Local Time: %s\n", buff );

    _gmtime64_s( &t2, &gmtime );
    asctime_s( buff, sizeof(buff), &t2 );
    printf( "Greenwich Mean Time: %s\n", buff );

}
```

```Output
Seconds since midnight, January 1, 1970
My time: 1171588492
GM time (UTC): 1171588492

Local Time: Thu Feb 15 17:14:52 2007

Greenwich Mean Time: Fri Feb 16 01:14:52 2007
```

The following example shows how the incomplete structure is filled out by **`_mkgmtime`**. It computes values for both the day of the week and of the year.

```C
// crt_mkgmtime2.c
#include <stdio.h>
#include <time.h>
#include <memory.h>

int main()
{
    struct tm t1, t2;
    time_t gmtime;
    char buff[30];

    memset(&t1, 0, sizeof(struct tm));
    memset(&t2, 0, sizeof(struct tm));

    t1.tm_mon = 1;
    t1.tm_isdst = 0;
    t1.tm_year = 103;
    t1.tm_mday = 12;

    // The day of the week and year will be incorrect in the output here.
    asctime_s( buff, sizeof(buff), &t1);
    printf("Before calling _mkgmtime, t1 = %s t.tm_yday = %d\n",
            buff, t1.tm_yday );

    gmtime = _mkgmtime(&t1);

    // The correct day of the week and year were determined.
    asctime_s( buff, sizeof(buff), &t1);
    printf("After calling _mkgmtime, t1 = %s t.tm_yday = %d\n",
            buff, t1.tm_yday );

}
```

```Output
Before calling _mkgmtime, t1 = Sun Feb 12 00:00:00 2003
t.tm_yday = 0
After calling _mkgmtime, t1 = Wed Feb 12 00:00:00 2003
t.tm_yday = 42
```

## See also

[Time management](../time-management.md)\
[`asctime`, `_wasctime`](asctime-wasctime.md)\
[`asctime_s`, `_wasctime_s`](asctime-s-wasctime-s.md)\
[`gmtime`, `_gmtime32`, `_gmtime64`](gmtime-gmtime32-gmtime64.md)\
[`gmtime_s`, `_gmtime32_s`, `_gmtime64_s`](gmtime-s-gmtime32-s-gmtime64-s.md)\
[`localtime_s`, `_localtime32_s`, `_localtime64_s`](localtime-s-localtime32-s-localtime64-s.md)\
[`mktime`, `_mktime32`, `_mktime64`](mktime-mktime32-mktime64.md)\
[`time`, `_time32`, `_time64`](time-time32-time64.md)
