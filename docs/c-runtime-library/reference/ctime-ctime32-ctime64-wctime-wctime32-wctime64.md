---
description: "Learn more about: ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64"
title: "ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64"
ms.date: "4/2/2020"
api_name: ["_ctime64", "_wctime32", "ctime", "_wctime64", "_ctime32", "_wctime", "_o__wctime32", "_o__wctime64"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wctime64", "_ctime32", "_tctime", "_wctime", "_wctime32", "_tctime64", "_ctime64", "ctime"]
helpviewer_keywords: ["tctime64 function", "_ctime32 function", "ctime32 function", "_wctime function", "wctime64 function", "_tctime64 function", "_tctime32 function", "_ctime64 function", "_wctime64 function", "ctime function", "wctime32 function", "ctime64 function", "_wctime32 function", "_tctime function", "tctime32 function", "tctime function", "wctime function", "time, converting"]
ms.assetid: 2423de37-a35c-4f0a-a378-3116bc120a9d
---
# ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64

Convert a time value to a string and adjust for local time zone settings. More secure versions of these functions are available; see [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md).

## Syntax

```C
char *ctime( const time_t *sourceTime );
char *_ctime32( const __time32_t *sourceTime );
char *_ctime64( const __time64_t *sourceTime );
wchar_t *_wctime( const time_t *sourceTime );
wchar_t *_wctime32( const __time32_t *sourceTime );
wchar_t *_wctime64( const __time64_t *sourceTime );
```

### Parameters

*sourceTime*<br/>
Pointer to stored time to convert.

## Return Value

A pointer to the character string result. **NULL** will be returned if:

- *sourceTime* represents a date before midnight, January 1, 1970, UTC.

- If you use **_ctime32** or **_wctime32** and *sourceTime* represents a date after 23:59:59 January 18, 2038, UTC.

- If you use **_ctime64** or **_wctime64** and *sourceTime* represents a date after 23:59:59, December 31, 3000, UTC.

**ctime** is an inline function which evaluates to **_ctime64** and **time_t** is equivalent to **__time64_t**. If you need to force the compiler to interpret **time_t** as the old 32-bit **time_t**, you can define **_USE_32BIT_TIME_T**. Doing this will cause **ctime** to evaluate to **_ctime32**. This is not recommended because your application may fail after January 18, 2038, and it is not allowed on 64-bit platforms.

## Remarks

The **ctime** function converts a time value stored as a [time_t](../../c-runtime-library/standard-types.md) value into a character string. The *sourceTime* value is usually obtained from a call to [time](time-time32-time64.md), which returns the number of seconds elapsed since midnight (00:00:00), January 1, 1970, coordinated universal time (UTC). The return value string contains exactly 26 characters and has the form:

```Output
Wed Jan 02 02:03:55 1980\n\0
```

A 24-hour clock is used. All fields have a constant width. The newline character ('\n') and the null character ('\0') occupy the last two positions of the string.

The converted character string is also adjusted according to the local time zone settings. See the [time](time-time32-time64.md), [_ftime](ftime-ftime32-ftime64.md), and [localtime](localtime-localtime32-localtime64.md) functions for information on configuring the local time and the [_tzset](tzset.md) function for details about defining the time zone environment and global variables.

A call to **ctime** modifies the single statically allocated buffer used by the **gmtime** and **localtime** functions. Each call to one of these routines destroys the result of the previous call. **ctime** shares a static buffer with the **asctime** function. Thus, a call to **ctime** destroys the results of any previous call to **asctime**, **localtime**, or **gmtime**.

**_wctime** and **_wctime64** are the wide-character version of **ctime** and **_ctime64**; returning a pointer to wide-character string. Otherwise, **_ctime64**, **_wctime**, and **_wctime64** behave identically to **ctime**.

These functions validate their parameters. If *sourceTime* is a null pointer, or if the *sourceTime* value is negative, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return **NULL** and set **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tctime**|**ctime**|**ctime**|**_wctime**|
|**_tctime32**|**_ctime32**|**_ctime32**|**_wctime32**|
|**_tctime64**|**_ctime64**|**_ctime64**|**_wctime64**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**ctime**|\<time.h>|
|**_ctime32**|\<time.h>|
|**_ctime64**|\<time.h>|
|**_wctime**|\<time.h> or \<wchar.h>|
|**_wctime32**|\<time.h> or \<wchar.h>|
|**_wctime64**|\<time.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_ctime64.c
// compile with: /W3
/* This program gets the current
* time in _time64_t form, then uses ctime to
* display the time in string form.
*/

#include <time.h>
#include <stdio.h>

int main( void )
{
   __time64_t ltime;

   _time64( &ltime );
   printf( "The time is %s\n", _ctime64( &ltime ) ); // C4996
   // Note: _ctime64 is deprecated; consider using _ctime64_s
}
```

```Output
The time is Wed Feb 13 16:04:43 2002
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
