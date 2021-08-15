---
description: "Learn more about: _mbsnbset_s, _mbsnbset_s_l"
title: "_mbsnbset_s, _mbsnbset_s_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbset_s_l", "_mbsnbset_s", "_o__mbsnbset_s", "_o__mbsnbset_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsnbset_s", "_mbsnbset_s_l", "_mbsnbset_s", "mbsnbset_s_l"]
helpviewer_keywords: ["tcsnset_s function", "mbsnbset_s function", "mbsnbset_s_l function", "_mbsnbset_s_l function", "_tcsnset_s_l function", "_mbsnbset_s function", "_tcsnset_s function", "tcsnset_s_l function"]
ms.assetid: 811f92c9-cc31-4bbd-8017-2d1bfc6fb96f
---
# _mbsnbset_s, _mbsnbset_s_l

Sets the first **n** bytes of a multibyte-character string to a specified character. These versions of [_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _mbsnbset_s(
   unsigned char *str,
   size_t size,
   unsigned int c,
   size_t count
);
errno_t _mbsnbset_s_l(
   unsigned char *str,
   size_t size,
   unsigned int c,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t _mbsnbset_s(
   unsigned char (&str)[size],
   unsigned int c,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsnbset_s_l(
   unsigned char (&str)[size],
   unsigned int c,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*str*<br/>
String to be altered.

*size*<br/>
The size of the string buffer.

*c*<br/>
Single-byte or multibyte-character setting.

*count*<br/>
Number of bytes to be set.

*locale*<br/>
Locale to use.

## Return Value

Zero if successful; otherwise, an error code.

## Remarks

The **_mbsnbset_s** and **_mbsnbset_s_l** functions set, at most, the first *count* bytes of *str* to *c*. If *count* is greater than the length of *str*, the length of *str* is used instead of *count*. If *c* is a multibyte character and cannot be set entirely into the last byte that's specified by *count*, the last byte is padded with a blank character. **_mbsnbset_s** and **_mbsnbset_s_l** do not place a terminating null at the end of *str*.

**_mbsnbset_s** and **_mbsnbset_s_l** resemble **_mbsnset**, except that they set *count* bytes rather than *count* characters of *c*.

If *str* is **NULL** or *count* is zero, this function generates an invalid parameter exception, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **NULL**. Also, if *c* is not a valid multibyte character, **errno** is set to **EINVAL** and a space is used instead.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The **_mbsnbset_s** version of this function uses the current locale for this locale-dependent behavior; the **_mbsnbset_s_l** version is identical except that it instead uses the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

In C++, use of these functions is simplified by template overloads; the overloads can infer buffer length automatically and thereby eliminate the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnset_s**|**_strnset_s**|**_mbsnbset_s**|**_wcsnset_s**|
|**_tcsnset_s_l**|`_strnset_s _l`|**_mbsnbset_s_l**|**_wcsnset_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbset_s**|\<mbstring.h>|
|**_mbsnbset_s_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_mbsnbset_s.c
#include <mbstring.h>
#include <stdio.h>

int main( void )
{
   char string[15] = "This is a test";
   /* Set not more than 4 bytes of string to be *'s */
   printf( "Before: %s\n", string );
   _mbsnbset_s( string, sizeof(string), '*', 4 );
   printf( "After:  %s\n", string );
}
```

## Output

```Output
Before: This is a test
After:  **** is a test
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
