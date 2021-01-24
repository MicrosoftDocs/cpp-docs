---
description: "Learn more about: _strtime, _wstrtime"
title: "_strtime, _wstrtime"
ms.date: "4/2/2020"
api_name: ["_wstrtime", "_strtime", "_o__strtime", "_o__wstrtime"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wstrtime", "_strtime", "wstrtime", "strtime", "_tstrtime"]
helpviewer_keywords: ["strtime function", "_strtime function", "_wstrtime function", "copying time to buffers", "wstrtime function", "tstrtime function", "_tstrtime function", "time, copying"]
ms.assetid: 9e538161-cf49-44ec-bca5-c0ab0b9e4ca3
---
# _strtime, _wstrtime

Copy the time to a buffer. More secure versions of these functions are available; see [_strtime_s, _wstrtime_s](strtime-s-wstrtime-s.md).

## Syntax

```C
char *_strtime(
   char *timestr
);
wchar_t *_wstrtime(
   wchar_t *timestr
);
template <size_t size>
char *_strtime(
   char (&timestr)[size]
); // C++ only
template <size_t size>
wchar_t *_wstrtime(
   wchar_t (&timestr)[size]
); // C++ only
```

### Parameters

*timestr*<br/>
Time string.

## Return Value

Returns a pointer to the resulting character string *timestr*.

## Remarks

The **_strtime** function copies the current local time into the buffer pointed to by *timestr*. The time is formatted as **hh:mm:ss** where **hh** is two digits representing the hour in 24-hour notation, **mm** is two digits representing the minutes past the hour, and **ss** is two digits representing seconds. For example, the string **18:23:44** represents 23 minutes and 44 seconds past 6 P.M. The buffer must be at least 9 bytes long.

**_wstrtime** is a wide-character version of **_strtime**; the argument and return value of **_wstrtime** are wide-character strings. These functions behave identically otherwise. If *timestr* is a **NULL** pointer or if *timestr* is formatted incorrectly, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If the exception is allowed to continue, these functions return a **NULL** and set **errno** to **EINVAL** if *timestr* was a **NULL** or set **errno** to **ERANGE** if *timestr* is formatted incorrectly.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstrtime**|**_strtime**|**_strtime**|**_wstrtime**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strtime**|\<time.h>|
|**_wstrtime**|\<time.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strtime.c
// compile with: /W3

#include <time.h>
#include <stdio.h>

int main( void )
{
   char tbuffer [9];
   _strtime( tbuffer ); // C4996
   // Note: _strtime is deprecated; consider using _strtime_s instead
   printf( "The current time is %s \n", tbuffer );
}
```

```Output
The current time is 14:21:44
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>
