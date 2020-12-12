---
description: "Learn more about: asctime_s, _wasctime_s"
title: "asctime_s, _wasctime_s"
ms.date: "4/2/2020"
api_name: ["_wasctime_s", "asctime_s", "_o__wasctime_s", "_o_asctime_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["asctime_s", "_wasctime_s", "_tasctime_s"]
helpviewer_keywords: ["tasctime_s function", "_tasctime_s function", "time structure conversion", "wasctime_s function", "time, converting", "_wasctime_s function", "asctime_s function"]
ms.assetid: 17ad9b2b-a459-465d-976a-42822897688a
---
# asctime_s, _wasctime_s

Convert a **tm** time structure to a character string. These functions are versions of [asctime, _wasctime](asctime-wasctime.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t asctime_s(
   char* buffer,
   size_t numberOfElements,
   const struct tm *tmSource
);
errno_t _wasctime_s(
   wchar_t* buffer,
   size_t numberOfElements
   const struct tm *tmSource
);
template <size_t size>
errno_t asctime_s(
   char (&buffer)[size],
   const struct tm *tmSource
); // C++ only
template <size_t size>
errno_t _wasctime_s(
   wchar_t (&buffer)[size],
   const struct tm *tmSource
); // C++ only
```

### Parameters

*buffer*<br/>
A pointer to a buffer to store the character string result. This function assumes a pointer to a valid memory location with a size specified by *numberOfElements*.

*numberOfElements*<br/>
The size of the buffer used to store the result.

*tmSource*<br/>
Time/date structure. This function assumes a pointer to a valid **`struct`** **tm** object.

## Return Value

Zero if successful. If there is a failure, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the return value is an error code. Error codes are defined in ERRNO.H. For more information, see [errno Constants](../../c-runtime-library/errno-constants.md). The actual error codes returned for each error condition are shown in the following table.

### Error Conditions

|*buffer*|*numberOfElements*|*tmSource*|Return|Value in *buffer*|
|--------------|------------------------|----------|------------|-----------------------|
|**NULL**|Any|Any|**EINVAL**|Not modified|
|Not **NULL** (points to valid memory)|0|Any|**EINVAL**|Not modified|
|Not **NULL**|0< size < 26|Any|**EINVAL**|Empty string|
|Not **NULL**|>= 26|**NULL**|**EINVAL**|Empty string|
|Not **NULL**|>= 26|Invalid time structure or out of range values for components of the time|**EINVAL**|Empty string|

> [!NOTE]
> Error conditions for **wasctime_s** are similar to **asctime_s** with the exception that the size limit is measured in words.

## Remarks

The **asctime** function converts a time stored as a structure to a character string. The *tmSource* value is usually obtained from a call to **gmtime** or **localtime**. Both functions can be used to fill in a **tm** structure, as defined in TIME.H.

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

The converted character string is also adjusted according to the local time zone settings. See the [time, _time32, _time64](time-time32-time64.md), [_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md), and [localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md) functions for information about configuring the local time and the [_tzset](tzset.md) function for information about defining the time zone environment and global variables.

The string result produced by **asctime_s** contains exactly 26 characters and has the form `Wed Jan 02 02:03:55 1980\n\0`. A 24-hour clock is used. All fields have a constant width. The new line character and the null character occupy the last two positions of the string. The value passed in as the second parameter should be at least this big. If it is less, an error code, **EINVAL**, will be returned.

**_wasctime_s** is a wide-character version of **asctime_s**. **_wasctime_s** and **asctime_s** behave identically otherwise.

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mapping

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tasctime_s**|**asctime_s**|**asctime_s**|**_wasctime_s**|

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**asctime_s**|\<time.h>|
|**_wasctime_s**|\<time.h> or \<wchar.h>|

## Security

If the buffer pointer is not **NULL** and the pointer does not point to a valid buffer, the function will overwrite whatever is at the location. This can also result in an access violation.

A [buffer overrun](/windows/win32/SecBP/avoiding-buffer-overruns) can occur if the size argument passed in is greater than the actual size of the buffer.

## Example

This program places the system time in the long integer **aclock**, translates it into the structure **newtime** and then converts it to string form for output, using the **asctime_s** function.

```C
// crt_asctime_s.c
#include <time.h>
#include <stdio.h>

struct tm newtime;
__time32_t aclock;

int main( void )
{
   char buffer[32];
   errno_t errNum;
   _time32( &aclock );   // Get time in seconds.
   _localtime32_s( &newtime, &aclock );   // Convert time to struct tm form.

   // Print local time as a string.

   errNum = asctime_s(buffer, 32, &newtime);
   if (errNum)
   {
       printf("Error code: %d", (int)errNum);
       return 1;
   }
   printf( "Current date and time: %s", buffer );
   return 0;
}
```

```Output
Current date and time: Wed May 14 15:30:17 2003
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
