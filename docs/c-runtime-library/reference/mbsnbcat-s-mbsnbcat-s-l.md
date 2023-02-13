---
title: "`_mbsnbcat_s`, `_mbsnbcat_s_l`"
description: "API description for the Microsoft Visual C++ `_mbsnbcat_s`, and `_mbsnbcat_s_l` functions"
ms.date: "12/2/2020"
api_name: ["_mbsnbcat_s_l", "_mbsnbcat_s", "_o__mbsnbcat_s", "_o__mbsnbcat_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbsnbcat_s", "mbsnbcat_s", "_mbsnbcat_s_l", "mbsnbcat_s_l"]
helpviewer_keywords: ["_tcsncat function", "mbsnbcat_s function", "_mbsnbcat_s function", "_mbsnbcat_s_l function", "_tcsncat_s_l function", "tcsncat_s_l function", "mbsnbcat_s_l function", "tcsncat function"]
ms.assetid: 2c9e9be7-d979-4a54-8ada-23428b6648a9
---
# `_mbsnbcat_s`, `_mbsnbcat_s_l`

Appends to a multibyte character string, at most, the first **n** bytes of another multibyte-character string. These functions are versions of [`_mbsnbcat`, `_mbsnbcat_l`](mbsnbcat-mbsnbcat-l.md) that have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _mbsnbcat_s(
   unsigned char *dest,
   size_t sizeInBytes,
   const unsigned char *src,
   size_t count
);
errno_t _mbsnbcat_s_l(
   unsigned char *dest,
   size_t sizeInBytes,
   const unsigned char *src,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t _mbsnbcat_s(
   unsigned char (&dest)[size],
   const unsigned char *src,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsnbcat_s_l(
   unsigned char (&dest)[size],
   const unsigned char *src,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*`dest`*\
Null-terminated multibyte-character destination string.

*`sizeInBytes`*\
Size of the *`dest`* buffer in bytes.

*`src`*\
Null-terminated multibyte-character source string.

*`count`*\
Number of bytes from *`src`* to append to *`dest`*.

*`locale`*\
Locale to use.

## Return value

Zero if successful; otherwise, an error code.

### Error conditions

| **`dest`** | *`sizeInBytes`* | *`src`* | Return value |
|---|---|---|---|
| `NULL` | any | any | `EINVAL` |
| Any | <= 0 | any | `EINVAL` |
| Any | any | `NULL` | `EINVAL` |

If any of the error conditions occurs, the function generates an invalid parameter error, as described in [Parameter validation](../parameter-validation.md). If the error is handled, the function returns `EINVAL` and sets `errno` to `EINVAL`.

## Remarks

The **`_mbsnbcat_s`** function appends to *`dest`*, at most, the first *`count`* bytes of *`src`*. If the byte that immediately precedes the null character in *`dest`* is a lead byte, it's overwritten by the initial byte of *`src`*. Otherwise, the initial byte of *`src`* overwrites the terminating null character of *`dest`*. If a null byte appears in *`src`* before *`count`* bytes are appended, **`_mbsnbcat_s`** appends all bytes from *`src`*, up to the null character. If *`count`* is greater than the length of *`src`*, the length of *`src`* is used in place of *`count`*. The resulting string is terminated by a null character. If copying takes place between strings that overlap, the behavior is undefined.

The output value is affected by the setting of the `LC_CTYPE` category setting of the locale. For more information, see [`setlocale`](setlocale-wsetlocale.md). The versions of these functions are identical, except that the ones that don't have the **`_l`** suffix use the current locale and the ones that do have the **`_l`** suffix instead use the locale parameter that's passed in. For more information, see [Locale](../locale.md).

In C++, the use of these functions is simplified by template overloads. The overloads can infer buffer length automatically, which eliminates the need to specify a size argument, and they can automatically use the newer, more secure functions to replace older, less-secure functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcsncat_s` | [`strncat_s`](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) | **`_mbsnbcat_s`** | [`wcsncat_s`](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) |
| `_tcsncat_s_l` | **`_strncat_s_l`** | **`_mbsnbcat_s_l`** | **`_wcsncat_s_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_mbsnbcat_s`** | \<mbstring.h> |
| **`_mbsnbcat_s_l`** | \<mbstring.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[String manipulation](../string-manipulation-crt.md)\
[`_mbsnbcmp`, `_mbsnbcmp_l`](mbsnbcmp-mbsnbcmp-l.md)\
[`_strncnt`, `_wcsncnt`, `_mbsnbcnt`, `_mbsnbcnt_l`, `_mbsnccnt`, `_mbsnccnt_l`](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)\
[`_mbsnbcpy`, `_mbsnbcpy_l`](mbsnbcpy-mbsnbcpy-l.md)\
[`_mbsnbcpy_s`, `_mbsnbcpy_s_l`](mbsnbcpy-s-mbsnbcpy-s-l.md)\
[`_mbsnbset`, `_mbsnbset_l`](mbsnbset-mbsnbset-l.md)\
[`strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)\
[`strncat_s`, `_strncat_s_l`, `wcsncat_s`, `_wcsncat_s_l`, `_mbsncat_s`, `_mbsncat_s_l`](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)
