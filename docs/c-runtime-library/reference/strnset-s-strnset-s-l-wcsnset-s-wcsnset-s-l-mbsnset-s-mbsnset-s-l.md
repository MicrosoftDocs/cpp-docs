---
description: "Learn more about: _strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l"
title: "_strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l"
ms.date: "4/2/2020"
api_name: ["_mbsnset_s_l", "_strnset_s", "_mbsnset_s", "_strnset_s_l", "_wcsnset_s_l", "_wcsnset_s", "_o__mbsnset_s", "_o__mbsnset_s_l", "_o__strnset_s", "_o__wcsnset_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbsnset_s_l", "wcsnset_s", "_tcsnset_s_l", "_wcsnset_s", "_mbsnset_s", "_wcsnset_s_l", "_strnset_s_l", "strnset_s_l", "_tcsnset_s", "_strnset_s", "strnset_s", "mbsnset_s_l", "mbsnset_s", "wcsnset_s_l"]
helpviewer_keywords: ["tcsnset_s function", "mbsnset_s_l function", "initializing characters", "wcsnset_s function", "mbsnset_s function", "_tcsnset_s_l function", "_strnset_s_l function", "_mbsnset_s function", "strnset_s_l function", "_tcsnset_s function", "_strnset_s function", "tcsnset_s_l function", "_mbsnset_s_l function", "strnset_s function", "_wcsnset_s function"]
ms.assetid: 9cf1b321-b5cb-4469-b285-4c07cfbd8813
---
# _strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l

Initializes characters of a string to a given character. These versions of [_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbsnset_s** and **_mbsnset_s_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _strnset_s(
   char *str,
   size_t numberOfElements,
   int c,
   size_t count
);
errno_t _strnset_s_l(
   char *str,
   size_t numberOfElements,
   int c,
   size_t count,
   locale_t locale
);
errno_t _wcsnset_s(
   wchar_t *str,
   size_t numberOfElements,
   wchar_t c,
   size_t count
);
errno_t _wcsnset_s_l(
   wchar_t *str,
   size_t numberOfElements,
   wchar_t c,
   size_t count,
   _locale_t locale
);
errno_t _mbsnset_s(
   unsigned char *str,
   size_t numberOfElements,
   unsigned int c,
   size_t count
);
errno_t _mbsnset_s_l(
   unsigned char *str,
   size_t numberOfElements,
   unsigned int c,
   size_t count,
   _locale_t locale
);
```

### Parameters

*str*<br/>
String to be altered.

*numberOfElements*<br/>
The size of the *str* buffer.

*c*<br/>
Character setting.

*count*<br/>
Number of characters to be set.

*locale*<br/>
Locale to use.

## Return Value

Zero if successful, otherwise an error code.

These functions validate their arguments. If *str* is not a valid null-terminated string or the size argument is less than or equal to 0, then the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return an error code and set **errno** to that error code. The default error code is **EINVAL** if a more specific value does not apply.

## Remarks

These functions set, at most, the first *count* characters of *str* to *c*. If *count* is greater than the size of *str*, the size of *str* is used instead of *count*. An error occurs if *count* is greater than *numberOfElements* and both those parameters are greater than the size of *str*.

**_wcsnset_s** and **_mbsnset_s** are wide-character and multibyte-character versions of **_strnset_s**. The string argument of **_wcsnset_s** is a wide-character string; that of **_mbsnset_s** is amultibyte-character string. These three functions behave identically otherwise.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsnset_s**|**_strnset_s**|**_mbsnbset_s**|**_wcsnset_s**|
|**_tcsnset_s_l**|**_strnset_s_l**|**_mbsnbset_s_l**|**_wcsnset_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strnset_s**|\<string.h>|
|**_strnset_s_l**|\<tchar.h>|
|**_wcsnset_s**|\<string.h> or \<wchar.h>|
|**_wcsnset_s_l**|\<tchar.h>|
|**_mbsnset_s**, **_mbsnset_s_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strnset_s.c
#include <string.h>
#include <stdio.h>

int main( void )
{
   char string[15] = "This is a test";
   /* Set not more than 4 characters of string to be *'s */
   printf( "Before: %s\n", string );
   _strnset_s( string, sizeof(string), '*', 4 );
   printf( "After:  %s\n", string );
}
```

```Output
Before: This is a test
After:  **** is a test
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
