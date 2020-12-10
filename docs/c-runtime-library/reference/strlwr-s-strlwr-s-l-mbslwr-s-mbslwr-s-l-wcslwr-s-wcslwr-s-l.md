---
description: "Learn more about: _strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l"
title: "_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l"
ms.date: "4/2/2020"
api_name: ["_strlwr_s_l", "_mbslwr_s_l", "_mbslwr_s", "_wcslwr_s", "_strlwr_s", "_wcslwr_s_l", "_o__mbslwr_s", "_o__mbslwr_s_l", "_o__strlwr_s", "_o__strlwr_s_l", "_o__wcslwr_s", "_o__wcslwr_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_strlwr_s_l", "_strlwr_s", "mbslwr_s_l", "strlwr_s_l", "_wcslwr_s", "strlwr_s", "mbslwr_s", "_wcslwr_s_l", "wcslwr_s_l", "_tcslwr_s", "_tcslwr_s_l", "_mbslwr_s_l", "wcslwr_s", "_mbslwr_s"]
helpviewer_keywords: ["_tcslwr_s function", "wcslwr_s function", "_mbslwr_s function", "_wcslwr_s function", "strlwr_s_l function", "mbslwr_s_l function", "_strlwr_s function", "string conversion [C++], case", "strlwr_s function", "wcslwr_s_l function", "_tcslwr_s_l function", "mbslwr_s function", "strings [C++], case", "_wcslwr_s_l function", "converting case, CRT functions", "_strlwr_s_l function", "_mbslwr_s_l function", "case, converting", "tcslwr_s function", "tcslwr_s_l function", "strings [C++], converting case"]
ms.assetid: 4883d31b-bdac-4049-83a1-91dfdeceee79
---
# _strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l

Converts a string to lowercase, by using the current locale or a locale object that's passed in. These versions of [_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbslwr_s** and **_mbslwr_s_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _strlwr_s(
   char *str,
   size_t numberOfElements
);
errno_t _strlwr_s_l(
   char *str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _mbslwr_s(
   unsigned char *str,
   size_t numberOfElements
);
errno_t _mbslwr_s_l(
   unsigned char *str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _wcslwr_s(
   wchar_t *str,
   size_t numberOfElements
);
errno_t _wcslwr_s_l(
   wchar_t *str,
   size_t numberOfElements,
   _locale_t locale
);
template <size_t size>
errno_t _strlwr_s(
   char (&str)[size]
); // C++ only
template <size_t size>
errno_t _strlwr_s_l(
   char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _mbslwr_s(
   unsigned char (&str)[size]
); // C++ only
template <size_t size>
errno_t _mbslwr_s_l(
   unsigned char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _wcslwr_s(
   wchar_t (&str)[size]
); // C++ only
template <size_t size>
errno_t _wcslwr_s_l(
   wchar_t (&str)[size],
   _locale_t locale
); // C++ only
```

### Parameters

*str*<br/>
Null-terminated string to convert to lowercase.

*numberOfElements*<br/>
Size of the buffer.

*locale*<br/>
The locale to use.

## Return Value

Zero if successful; a non-zero error code on failure.

These functions validate their parameters. If *str* is not a valid null-terminated string, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, the functions return **EINVAL** and set **errno** to **EINVAL**. If *numberOfElements* is less than the length of the string, the functions also return **EINVAL** and set **errno** to **EINVAL**.

## Remarks

The **_strlwr_s** function converts, in place, any uppercase letters in *str* to lowercase. **_mbslwr_s** is a multi-byte character version of **_strlwr_s**. **_wcslwr_s** is a wide-character version of **_strlwr_s**.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcslwr_s**|**_strlwr_s**|**_mbslwr_s**|**_wcslwr_s**|
|**_tcslwr_s_l**|**_strlwr_s_l**|**_mbslwr_s_l**|**_wcslwr_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strlwr_s**, **_strlwr_s_l**|\<string.h>|
|**_mbslwr_s**, **_mbslwr_s_l**|\<mbstring.h>|
|**_wcslwr_s**, **_wcslwr_s_l**|\<string.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```cpp
// crt_strlwr_s.cpp
// This program uses _strlwr_s and _strupr_s to create
// uppercase and lowercase copies of a mixed-case string.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[] = "The String to End All Strings!";
   char *copy1, *copy2;
   errno_t err;

   err = _strlwr_s( copy1 = _strdup(str), strlen(str) + 1);
   err = _strupr_s( copy2 = _strdup(str), strlen(str) + 1);

   printf( "Mixed: %s\n", str );
   printf( "Lower: %s\n", copy1 );
   printf( "Upper: %s\n", copy2 );

   free( copy1 );
   free( copy2 );

   return 0;
}
```

```Output
Mixed: The String to End All Strings!
Lower: the string to end all strings!
Upper: THE STRING TO END ALL STRINGS!
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md)<br/>
