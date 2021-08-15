---
description: "Learn more about: _strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l"
title: "_strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l"
ms.date: "4/2/2020"
api_name: ["_wcsset_s", "_wcsset_s_l", "_strset_s", "_mbsset_s_l", "_strset_s_l", "_mbsset_s", "_o__mbsset_s", "_o__mbsset_s_l", "_o__strset_s", "_o__wcsset_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wcsset_s_l", "strset_s", "_mbsset_s", "mbsset_s", "_strset_s", "_mbsset_s_l", "strset_s_l", "_wcsset_s", "mbsset_s_l", "wcsset_s_l", "wcsset_s", "_strset_s_l", "_tcsset_s_l", "_tcsset_s"]
helpviewer_keywords: ["mbsset_s_l function", "wcsset_s function", "_mbsset_s function", "tcsset_s function", "strset_s_l function", "characters [C++], setting", "_wcsset_s_l function", "_strset_s function", "strset_s function", "wcsset_s_l function", "strings [C++], setting characters", "_strset_s_l function", "_mbsset_s_l function", "_wcsset_s function", "tcsset_s_l function", "_tcsset_s_l function", "_tcsset_s function", "mbsset_s function"]
ms.assetid: dceb2909-6b41-4792-acb7-888e45bb8b35
---
# _strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l

Sets characters of a string to a character. These versions of [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbsset_s** and **_mbsset_s_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _strset_s(
   char *str,
   size_t numberOfElements,
   int c
);
errno_t _strset_s_l(
   char *str,
   size_t numberOfElements,
   int c,
   locale_t locale
);
errno_t _wcsset_s(
   wchar_t *str,
   size_t numberOfElements,
   wchar_t c
);
errno_t *_wcsset_s_l(
   wchar_t *str,
   size_t numberOfElements,
   wchar_t c,
   locale_t locale
);
errno_t _mbsset_s(
   unsigned char *str,
   size_t numberOfElements,
   unsigned int c
);
errno_t _mbsset_s_l(
   unsigned char *str,
   size_t numberOfElements,
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Null-terminated string to be set.

*numberOfElements*<br/>
The size of the *str* buffer.

*c*<br/>
Character setting.

*locale*<br/>
Locale to use.

## Return Value

Zero if successful, otherwise an error code.

These functions validate their arguments. If *str* is a null pointer, or the *numberOfElements* argument is less than or equal to 0, or the block passed in is not null-terminated, then the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EINVAL** and set **errno** to **EINVAL**.

## Remarks

The **_strset_s** function sets all the characters of *str* to *c* (converted to **`char`**), except the terminating null character. **_wcsset_s** and **_mbsset_s** are wide-character and multibyte-character versions of **_strset_s**. The data types of the arguments and return values vary accordingly. These functions behave identically otherwise.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsset_s**|**_strset_s**|**_mbsset_s**|**_wcsset_s**|
|**_tcsset_s_l**|**_strset_s_l**|**_mbsset_s_l**|**_wcsset_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strset_s**|\<string.h>|
|**_strset_s_l**|\<tchar.h>|
|**_wcsset_s**|\<string.h> or \<wchar.h>|
|**_wcsset_s_l**|\<tchar.h>|
|**_mbsset_s**, **_mbsset_s_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strset_s.c
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   char string[] = "Fill the string with something.";
   printf( "Before: %s\n", string );
   _strset_s( string, _countof(string), '*' );
   printf( "After:  %s\n", string );
}
```

```Output
Before: Fill the string with something.
After:  *******************************
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
