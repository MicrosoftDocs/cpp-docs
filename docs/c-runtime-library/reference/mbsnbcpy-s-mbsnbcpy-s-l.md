---
description: "Learn more about: _mbsnbcpy_s, _mbsnbcpy_s_l"
title: "_mbsnbcpy_s, _mbsnbcpy_s_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbcpy_s_l", "_mbsnbcpy_s", "_o__mbsnbcpy_s", "_o__mbsnbcpy_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsnbcpy_s_l", "_mbsnbcpy_s", "mbsnbcpy_s", "_mbsnbcpy_s_l"]
helpviewer_keywords: ["_mbsnbcpy_s function", "tcsncpy_s function", "mbsnbcpy_s_l function", "_tcsncpy_s_l function", "mbsnbcpy_s function", "tcsncpy_s_l function", "_mbsnbcpy_s_l function", "_tcsncpy_s function"]
ms.assetid: dfff64ab-fe6f-49c4-99ba-75014e2b0cd6
---
# _mbsnbcpy_s, _mbsnbcpy_s_l

Copies **n** bytes of a string to a destination string. These versions of [_mbsnbcpy, _mbsnbcpy_l](mbsnbcpy-mbsnbcpy-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _mbsnbcpy_s(
   unsigned char * strDest,
   size_t sizeInBytes,
   const unsigned char * strSource,
   size_t count
);
errno_t _mbsnbcpy_s_l(
   unsigned char * strDest,
   size_t sizeInBytes,
   const unsigned char * strSource,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t _mbsnbcpy_s(
   unsigned char (&strDest)[size],
   const unsigned char * strSource,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsnbcpy_s_l(
   unsigned char (&strDest)[size],
   const unsigned char * strSource,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*strDest*<br/>
Destination for character string to be copied.

*sizeInBytes*<br/>
Destination buffer size.

*strSource*<br/>
Character string to be copied.

*count*<br/>
Number of bytes to be copied.

*locale*<br/>
Locale to use.

## Return Value

Zero if successful; **EINVAL** if a bad parameter was passed in.

## Remarks

The **_mbsnbcpy_s** function copies *count* bytes from *strSource* to *strDest*. If *count* exceeds the size of *strDest*, either of the input strings is a null pointer, or *sizeInBytes* or *count* is 0, the function invokes the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, the function returns **EINVAL**. If the source and destination strings overlap, the behavior of **_mbsnbcpy_s** is undefined.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> Unlike the non-secure version of this function, **_mbsnbcpy_s** does not do any null padding and always null terminates the string.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsncpy_s**|**_strncpy_s**|**_mbsnbcpy_s**|**_wcsncpy_s**|
|**_tcsncpy_s_l**|**_strncpy_s_l**|**_mbsnbcpy_s_l**|**_wcsncpy_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbcpy_s**|\<mbstring.h>|
|**_mbsnbcpy_s_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
