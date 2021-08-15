---
description: "Learn more about: _strdate, _wstrdate"
title: "_strdate, _wstrdate"
ms.date: "4/2/2020"
api_name: ["_strdate", "_wstrdate", "_o__strdate", "_o__wstrdate"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tstrdate", "wstrdate", "_wstrdate", "_strdate", "strdate"]
helpviewer_keywords: ["strdate function", "dates, copying", "tstrdate function", "_wstrdate function", "wstrdate function", "_strdate function", "_tstrdate function", "copying dates"]
ms.assetid: de8e4097-58f8-42ba-9dcd-cb4d9a9f1696
---
# _strdate, _wstrdate

Copy current system date to a buffer. More secure versions of these functions are available; see [_strdate_s, _wstrdate_s](strdate-s-wstrdate-s.md).

## Syntax

```C
char *_strdate(
   char *datestr
);
wchar_t *_wstrdate(
   wchar_t *datestr
);
template <size_t size>
char *_strdate(
   char (&datestr)[size]
); // C++ only
template <size_t size>
wchar_t *_wstrdate(
   wchar_t (&datestr)[size]
); // C++ only
```

### Parameters

*datestr*<br/>
A pointer to a buffer containing the formatted date string.

## Return Value

Each of these functions returns a pointer to the resulting character string *datestr*.

## Remarks

More secure versions of these functions are available; see [_strdate_s, _wstrdate_s](strdate-s-wstrdate-s.md). It is recommended that the more secure functions be used wherever possible.

The **_strdate** function copies the current system date to the buffer pointed to by *datestr*, formatted **mm**/**dd**/**yy**, where **mm** is two digits representing the month, **dd** is two digits representing the day, and **yy** is the last two digits of the year. For example, the string **12/05/99** represents December 5, 1999. The buffer must be at least 9 bytes long.

If *datestr* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**.

**_wstrdate** is a wide-character version of **_strdate**; the argument and return value of **_wstrdate** are wide-character strings. These functions behave identically otherwise.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstrdate**|**_strdate**|**_strdate**|**_wstrdate**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strdate**|\<time.h>|
|**_wstrdate**|\<time.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// strdate.c
// compile with: /W3
#include <time.h>
#include <stdio.h>
int main()
{
    char tmpbuf[9];

    // Set time zone from TZ environment variable. If TZ is not set,
    // the operating system is queried to obtain the default value
    // for the variable.
    //
    _tzset();

    printf( "OS date: %s\n", _strdate(tmpbuf) ); // C4996
    // Note: _strdate is deprecated; consider using _strdate_s instead
}
```

```Output
OS date: 04/25/03
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
