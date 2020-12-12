---
description: "Learn more about: _mbsnbcat, _mbsnbcat_l"
title: "_mbsnbcat, _mbsnbcat_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbcat_l", "_mbsnbcat", "_o__mbsnbcat", "_o__mbsnbcat_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsnbcat", "mbsnbcat_l", "_mbsnbcat", "_mbsnbcat_l"]
helpviewer_keywords: ["tcsncat_l function", "_tcsncat function", "mbsnbcat_l function", "mbsnbcat function", "_mbsnbcat_l function", "_tcsncat_l function", "_mbsnbcat function", "tcsncat function"]
ms.assetid: aa0f1d30-0ddd-48d1-88eb-c6884b20fd91
---
# _mbsnbcat, _mbsnbcat_l

Appends, at most, the first **n** bytes of one multibyte-character string to another. More secure versions of these functions are available; see [_mbsnbcat_s, _mbsnbcat_s_l](mbsnbcat-s-mbsnbcat-s-l.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned char *_mbsnbcat(
   unsigned char *dest,
   const unsigned char *src,
   size_t count
);
unsigned char *_mbsnbcat_l(
   unsigned char *dest,
   const unsigned char *src,
   size_t count,
   _locale_t locale
);
template <size_t size>
unsigned char *_mbsnbcat(
   unsigned char (&dest)[size],
   const unsigned char *src,
   size_t count
); // C++ only
template <size_t size>
unsigned char *_mbsnbcat_l(
   unsigned char (&dest)[size],
   const unsigned char *src,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*dest*<br/>
Null-terminated multibyte-character destination string.

*src*<br/>
Null-terminated multibyte-character source string.

*count*<br/>
Number of bytes from *src* to append to *dest*.

*locale*<br/>
Locale to use.

## Return Value

**_mbsnbcat** returns a pointer to the destination string. No return value is reserved to indicate an error.

## Remarks

The **_mbsnbcat** function appends, at most, the first *count* bytes of *src* to *dest*. If the byte immediately preceding the null character in *dest* is a lead byte, the initial byte of *src* overwrites this lead byte. Otherwise, the initial byte of *src* overwrites the terminating null character of *dest*. If a null byte appears in *src* before *count* bytes are appended, **_mbsnbcat** appends all bytes from *src*, up to the null character. If *count* is greater than the length of *src*, the length of *src* is used in place of *count*. The resulting string is terminated with a null character. If copying takes place between strings that overlap, the behavior is undefined.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The **_mbsnbcat** version of the function uses the current locale for this locale-dependent behavior; the **_mbsnbcat_l** version is identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

**Security Note** Use a null-terminated string. The null-terminated string must not exceed the size of the destination buffer. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

If *dest* or *src* is **NULL**, the function will generate an invalid parameter error, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If the error is handled, the function returns **EINVAL** and sets **errno** to **EINVAL**.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsncat**|[strncat](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)|**_mbsnbcat**|[wcsncat](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)|
|**_tcsncat_l**|**_strncat_l**|**_mbsnbcat_l**|**_wcsncat_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbcat**|\<mbstring.h>|
|**_mbsnbcat_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)<br/>
[_mbsnbcpy, _mbsnbcpy_l](mbsnbcpy-mbsnbcpy-l.md)<br/>
[_mbsnbicmp, _mbsnbicmp_l](mbsnbicmp-mbsnbicmp-l.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[_mbsnbcat_s, _mbsnbcat_s_l](mbsnbcat-s-mbsnbcat-s-l.md)<br/>
