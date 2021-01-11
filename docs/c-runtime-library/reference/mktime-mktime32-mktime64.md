---
description: "Learn more about: mktime, _mktime32, _mktime64"
title: "mktime, _mktime32, _mktime64"
ms.date: "4/2/2020"
api_name: ["_mktime32", "mktime", "_mktime64", "_o__mktime32", "_o__mktime64"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mktime", "_mktime64"]
helpviewer_keywords: ["_mktime32 function", "mktime function", "time functions", "mktime64 function", "converting times", "mktime32 function", "_mktime64 function", "time, converting"]
ms.assetid: 284ed5d4-7064-48a2-bd50-15effdae32cf
---
# mktime, _mktime32, _mktime64

Convert the local time to a calendar value.

## Syntax

```C
time_t mktime(
   struct tm *timeptr
);
__time32_t _mktime32(
   struct tm *timeptr
);
__time64_t _mktime64(
   struct tm *timeptr
);
```

### Parameters

*timeptr*<br/>
Pointer to time structure; see [asctime](asctime-wasctime.md).

## Return Value

**_mktime32** returns the specified calendar time encoded as a value of type [time_t](../../c-runtime-library/standard-types.md). If *timeptr* references a date before midnight, January 1, 1970, or if the calendar time cannot be represented, **_mktime32** returns -1 cast to type **time_t**. When using **_mktime32** and if *timeptr* references a date after 23:59:59 January 18, 2038, Coordinated Universal Time (UTC), it will return -1 cast to type **time_t**.

**_mktime64** will return -1 cast to type **__time64_t** if *timeptr* references a date after 23:59:59, December 31, 3000, UTC.

## Remarks

The **mktime**, **_mktime32** and **_mktime64** functions convert the supplied time structure (possibly incomplete) pointed to by *timeptr* into a fully defined structure with normalized values and then converts it to a **time_t** calendar time value. The converted time has the same encoding as the values returned by the [time](time-time32-time64.md) function. The original values of the **tm_wday** and **tm_yday** components of the *timeptr* structure are ignored, and the original values of the other components are not restricted to their normal ranges.

**mktime** is an inline function that is equivalent to **_mktime64**, unless **_USE_32BIT_TIME_T** is defined, in which case it is equivalent to **_mktime32**.

After an adjustment to UTC, **_mktime32** handles dates from midnight, January 1, 1970, to 23:59:59 January 18, 2038, UTC. **_mktime64** handles dates from midnight, January 1, 1970 to 23:59:59, December 31, 3000. This adjustment may cause these functions to return -1 (cast to **time_t**, **__time32_t** or **__time64_t**) even though the date you specify is within range. For example, if you are in Cairo, Egypt, which is two hours ahead of UTC, two hours will first be subtracted from the date you specify in *timeptr*; this may now put your date out of range.

These functions may be used to validate and fill in a tm structure. If successful, these functions set the values of **tm_wday** and **tm_yday** as appropriate and set the other components to represent the specified calendar time, but with their values forced to the normal ranges. The final value of **tm_mday** is not set until **tm_mon** and **tm_year** are determined. When specifying a **tm** structure time, set the **tm_isdst** field to:

- Zero (0) to indicate that standard time is in effect.

- A value greater than 0 to indicate that daylight saving time is in effect.

- A value less than zero to have the C run-time library code compute whether standard time or daylight saving time is in effect.

The C run-time library will determine the daylight savings time behavior from the [TZ](tzset.md) environment variable. If **TZ** is not set, the Win32 API call [GetTimeZoneInformation](/windows/win32/api/timezoneapi/nf-timezoneapi-gettimezoneinformation) is used to get the daylight savings time information from the operating system. If this fails, the library assumes the United States' rules for implementing the calculation of daylight saving time are used. **tm_isdst** is a required field. If not set, its value is undefined and the return value from these functions is unpredictable. If *timeptr* points to a **tm** structure returned by a previous call to [asctime](asctime-wasctime.md), [gmtime](gmtime-gmtime32-gmtime64.md), or [localtime](localtime-localtime32-localtime64.md) (or variants of these functions), the **tm_isdst** field contains the correct value.

Note that **gmtime** and **localtime** (and **_gmtime32**, **_gmtime64**, **_localtime32**, and **_localtime64**) use a single buffer per thread for the conversion. If you supply this buffer to **mktime**, **_mktime32** or **_mktime64**, the previous contents are destroyed.

These functions validate their parameter. If *timeptr* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mktime**|\<time.h>|
|**_mktime32**|\<time.h>|
|**_mktime64**|\<time.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_mktime.c
/* The example takes a number of days
* as input and returns the time, the current
* date, and the specified number of days.
*/

#include <time.h>
#include <stdio.h>

int main( void )
{
   struct tm  when;
   __time64_t now, result;
   int        days;
   char       buff[80];

   time( &now );
   _localtime64_s( &when, &now );
   asctime_s( buff, sizeof(buff), &when );
   printf( "Current time is %s\n", buff );
   days = 20;
   when.tm_mday = when.tm_mday + days;
   if( (result = mktime( &when )) != (time_t)-1 ) {
      asctime_s( buff, sizeof(buff), &when );
      printf( "In %d days the time will be %s\n", days, buff );
   } else
      perror( "mktime failed" );
}
```

### Sample Output

```Output
Current time is Fri Apr 25 13:34:07 2003

In 20 days the time will be Thu May 15 13:34:07 2003
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[_mkgmtime, _mkgmtime32, _mkgmtime64](mkgmtime-mkgmtime32-mkgmtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
