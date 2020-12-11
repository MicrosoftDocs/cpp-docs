---
description: "Learn more about: ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s"
title: "ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s"
ms.date: "4/2/2020"
api_name: ["_ctime64_s", "_wctime32_s", "ctime_s", "_wctime64_s", "_ctime32_s", "_wctime_s", "_o__ctime32_s", "_o__ctime64_s", "_o__wctime32_s", "_o__wctime64_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ctime64_s", "_ctime32_s", "_tctime32_s", "_ctime64_s", "_wctime_s", "_tctime_s", "_tctime64_s", "ctime_s", "ctime32_s"]
helpviewer_keywords: ["_wctime32_s function", "ctime64_s function", "_tctime64_s function", "_wctime_s function", "tctime_s function", "_wctime64_s function", "ctime_s function", "ctime32_s function", "_ctime64_s function", "tctime64_s function", "wctime64_s function", "wctime_s function", "_tctime_s function", "tctime32_s function", "wctime32_s function", "time, converting", "_ctime32_s function", "_tctime32_s function"]
ms.assetid: 36ac419a-8000-4389-9fd8-d78b747a009b
---
# ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s

Convert a time value to a string and adjust for local time zone settings. These are versions of [ctime, _ctime64, _wctime, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t ctime_s(
   char* buffer,
   size_t numberOfElements,
   const time_t *sourceTime
);
errno_t _ctime32_s(
   char* buffer,
   size_t numberOfElements,
   const __time32_t *sourceTime
);
errno_t _ctime64_s(
   char* buffer,
   size_t numberOfElements,
   const __time64_t *sourceTime )
;
errno_t _wctime_s(
   wchar_t* buffer,
   size_t numberOfElements,
   const time_t *sourceTime
);
errno_t _wctime32_s(
   wchar_t* buffer,
   size_t numberOfElements,
   const __time32_t *sourceTime
);
errno_t _wctime64_s(
   wchar_t* buffer,
   size_t numberOfElements,
   const __time64_t *sourceTime
);
```

```cpp
template <size_t size>
errno_t _ctime32_s(
   char (&buffer)[size],
   const __time32_t *sourceTime
); // C++ only
template <size_t size>
errno_t _ctime64_s(
   char (&buffer)[size],
   const __time64_t *sourceTime
); // C++ only
template <size_t size>
errno_t _wctime32_s(
   wchar_t (&buffer)[size],
   const __time32_t *sourceTime
); // C++ only
template <size_t size>
errno_t _wctime64_s(
   wchar_t (&buffer)[size],
   const __time64_t *sourceTime
); // C++ only
```

### Parameters

*buffer*<br/>
Must be large enough to hold 26 characters. A pointer to the character string result, or **NULL** if:

- *sourceTime* represents a date before midnight, January 1, 1970, UTC.

- If you use **_ctime32_s** or **_wctime32_s** and *sourceTime* represents a date after 23:59:59 January 18, 2038, UTC.

- If you use **_ctime64_s** or **_wctime64_s** and *sourceTime* represents a date after 23:59:59, December 31, 3000, UTC.

- If you use **_ctime_s** or **_wctime_s**, these functions are wrappers to the previous functions. See the Remarks section.

*numberOfElements*<br/>
The size of the buffer.

*sourceTime*<br/>
Pointer to stored time.

## Return Value

Zero if successful. If there is a failure due to an invalid parameter, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, an error code is returned. Error codes are defined in ERRNO.H; for a listing of these errors, see [errno](../../c-runtime-library/errno-constants.md). The actual error codes thrown for each error condition are shown in the following table.

## Error Conditions

|*buffer*|*numberOfElements*|*sourceTime*|Return|Value in *buffer*|
|--------------|------------------------|------------|------------|-----------------------|
|**NULL**|any|any|**EINVAL**|Not modified|
|Not **NULL** (points to valid memory)|0|any|**EINVAL**|Not modified|
|Not **NULL**|0< size < 26|any|**EINVAL**|Empty string|
|Not **NULL**|>= 26|NULL|**EINVAL**|Empty string|
|Not **NULL**|>= 26|< 0|**EINVAL**|Empty string|

## Remarks

The **ctime_s** function converts a time value stored as a [time_t](../../c-runtime-library/standard-types.md) structure into a character string. The *sourceTime* value is usually obtained from a call to [time](time-time32-time64.md), which returns the number of seconds elapsed since midnight (00:00:00), January 1, 1970, coordinated universal time (UTC). The return value string contains exactly 26 characters and has the form:

`Wed Jan 02 02:03:55 1980\n\0`

A 24-hour clock is used. All fields have a constant width. The new line character ('\n') and the null character ('\0') occupy the last two positions of the string.

The converted character string is also adjusted according to the local time zone settings. See the [time](time-time32-time64.md), [_ftime](ftime-ftime32-ftime64.md), and [localtime32_s](localtime-s-localtime32-s-localtime64-s.md) functions for information about configuring the local time and the [_tzset](tzset.md) function for information about defining the time zone environment and global variables.

**_wctime32_s** and **_wctime64_s** are the wide-character version of **_ctime32_s** and **_ctime64_s**; returning a pointer to wide-character string. Otherwise, **_ctime64_s**, **_wctime32_s**, and **_wctime64_s** behave identically to **_ctime32_s**.

**ctime_s** is an inline function that evaluates to **_ctime64_s** and **time_t** is equivalent to **__time64_t**. If you need to force the compiler to interpret **time_t** as the old 32-bit **time_t**, you can define **_USE_32BIT_TIME_T**. Doing this will cause **ctime_s** to evaluate to **_ctime32_s**. This is not recommended because your application may fail after January 18, 2038, and it is not allowed on 64-bit platforms.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tctime_s**|**ctime_s**|**ctime_s**|**_wctime_s**|
|**_tctime32_s**|**_ctime32_s**|**_ctime32_s**|**_wctime32_s**|
|**_tctime64_s**|**_ctime64_s**|**_ctime64_s**|**_wctime64_s**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**ctime_s**, **_ctime32_s**, **_ctime64_s**|\<time.h>|
|**_wctime_s**, **_wctime32_s**, **_wctime64_s**|\<time.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_wctime_s.c
// This program gets the current
// time in time_t form and then uses _wctime_s to
// display the time in string form.

#include <time.h>
#include <stdio.h>

#define SIZE 26

int main( void )
{
   time_t ltime;
   wchar_t buf[SIZE];
   errno_t err;

   time( &ltime );

   err = _wctime_s( buf, SIZE, &ltime );
   if (err != 0)
   {
      printf("Invalid Arguments for _wctime_s. Error Code: %d\n", err);
   }
   wprintf_s( L"The time is %s\n", buf );
}
```

```Output
The time is Fri Apr 25 13:03:39 2003
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
