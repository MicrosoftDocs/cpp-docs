---
description: "Learn more about: gmtime_s, _gmtime32_s, _gmtime64_s"
title: "gmtime_s, _gmtime32_s, _gmtime64_s"
ms.date: "4/2/2020"
api_name: ["_gmtime32_s", "gmtime_s", "_gmtime64_s", "_o__gmtime32_s", "_o__gmtime64_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_gmtime_s", "gmtime64_s", "gmtime32_s", "_gmtime64_s", "gmtime_s", "_gmtime32_s"]
helpviewer_keywords: ["gmtime_s function", "gmtime32_s function", "time functions", "gmtime64_s function", "_gmtime64_s function", "time structure conversion", "_gmtime_s function", "_gmtime32_s function"]
ms.assetid: 261c7df0-2b0c-44ba-ba61-cb83efaec60f
---
# gmtime_s, _gmtime32_s, _gmtime64_s

Converts a time value to a **tm** structure. These are versions of [_gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t gmtime_s(
   struct tm* tmDest,
   const __time_t* sourceTime
);
errno_t _gmtime32_s(
   struct tm* tmDest,
   const __time32_t* sourceTime
);
errno_t _gmtime64_s(
   struct tm* tmDest,
   const __time64_t* sourceTime
);
```

### Parameters

*tmDest*<br/>
Pointer to a [tm](../../c-runtime-library/standard-types.md) structure. The fields of the returned structure hold the evaluated value of the *timer* argument in UTC rather than in local time.

*sourceTime*<br/>
Pointer to stored time. The time is represented as seconds elapsed since midnight (00:00:00), January 1, 1970, coordinated universal time (UTC).

## Return Value

Zero if successful. The return value is an error code if there is a failure. Error codes are defined in Errno.h; for a listing of these errors, see [errno](../../c-runtime-library/errno-constants.md).

### Error Conditions

|*tmDest*|*sourceTime*|Return|Value in *tmDest*|
|-----------|------------|------------|--------------------|
|**NULL**|any|**EINVAL**|Not modified.|
|Not **NULL** (points to valid memory)|**NULL**|**EINVAL**|All fields set to -1.|
|Not **NULL**|< 0|**EINVAL**|All fields set to -1.|

In the case of the first two error conditions, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return **EINVAL**.

## Remarks

The **_gmtime32_s** function breaks down the *sourceTime* value and stores it in a structure of type **tm**, defined in Time.h. The address of the structure is passed in *tmDest*. The value of *sourceTime* is usually obtained from a call to the [time](time-time32-time64.md) function.

> [!NOTE]
> The target environment should try to determine whether daylight savings time is in effect. The C run-time library assumes the United States rules for implementing the calculation of daylight saving time .

Each of the structure fields is of type **`int`**, as shown in the following table.

|Field|Description|
|-|-|
|**tm_sec**|Seconds after minute (0 - 59).|
|**tm_min**|Minutes after hour (0 - 59).|
|**tm_hour**|Hours since midnight (0 - 23).|
|**tm_mday**|Day of month (1 - 31).|
|**tm_mon**|Month (0 - 11; January = 0).|
|**tm_year**|Year (current year minus 1900).|
|**tm_wday**|Day of week (0 - 6; Sunday = 0).|
|**tm_yday**|Day of year (0 - 365; January 1 = 0).|
|**tm_isdst**|Always 0 for **gmtime_s**.|

**_gmtime64_s**, which uses the **__time64_t** structure, allows dates to be expressed up through 23:59:59, December 31, 3000, UTC; whereas **gmtime32_s** only represent dates through 23:59:59 January 18, 2038, UTC. Midnight, January 1, 1970, is the lower bound of the date range for both these functions.

**gmtime_s** is an inline function which evaluates to **_gmtime64_s** and **time_t** is equivalent to **__time64_t**. If you need to force the compiler to interpret **time_t** as the old 32-bit **time_t**, you can define **_USE_32BIT_TIME_T**. Doing this will cause **gmtime_s** to be in-lined to **_gmtime32_s**. This is not recommended because your application may fail after January 18, 2038, and it is not allowed on 64-bit platforms.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required C header|Required C++ header|
|-------------|---------------------|-|
|**gmtime_s**, **_gmtime32_s**, **_gmtime64_s**|\<time.h>|\<ctime> or \<time.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_gmtime64_s.c
// This program uses _gmtime64_s to convert a 64-bit
// integer representation of coordinated universal time
// to a structure named newtime, then uses asctime_s to
// convert this structure to an output string.

#include <time.h>
#include <stdio.h>

int main( void )
{
   struct tm newtime;
   __int64 ltime;
   char buf[26];
   errno_t err;

   _time64( &ltime );

   // Obtain coordinated universal time:
   err = _gmtime64_s( &newtime, &ltime );
   if (err)
   {
      printf("Invalid Argument to _gmtime64_s.");
   }

   // Convert to an ASCII representation
   err = asctime_s(buf, 26, &newtime);
   if (err)
   {
      printf("Invalid Argument to asctime_s.");
   }

   printf( "Coordinated universal time is %s\n",
           buf );
}
```

```Output
Coordinated universal time is Fri Apr 25 20:12:33 2003
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[_mkgmtime, _mkgmtime32, _mkgmtime64](mkgmtime-mkgmtime32-mkgmtime64.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
