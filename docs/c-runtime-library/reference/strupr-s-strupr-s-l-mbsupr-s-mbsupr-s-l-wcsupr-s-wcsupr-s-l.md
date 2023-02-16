---
description: "Learn more about: _strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l"
title: "_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l"
ms.date: "4/2/2020"
api_name: ["_strupr_s", "_strupr_s_l", "_mbsupr_s", "_wcsupr_s_l", "_mbsupr_s_l", "_wcsupr_s", "_o__mbsupr_s", "_o__mbsupr_s_l", "_o__strupr_s", "_o__strupr_s_l", "_o__wcsupr_s", "_o__wcsupr_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_strupr_s", "_strupr_s_l", "_mbsupr_s", "_mbsupr_s_l", "_wcsupr_s", "_wcsupr_s_l", "_tcsupr_s", "_tcsupr_s_l"]
helpviewer_keywords: ["mbsupr_s_l function", "strupr_s_l function", "_wcsupr_s_l function", "_tcsupr_s_l function", "mbsupr_s function", "_wcsupr_s function", "uppercase, converting strings to", "tcsupr_s function", "string conversion [C++], case", "strupr_s function", "wcsupr_s_l function", "_mbsupr_s function", "_mbsupr_s_l function", "_strupr_s_l function", "tcsupr_s_l function", "strings [C++], case", "converting case, CRT functions", "_tcsupr_s function", "strings [C++], converting case", "_strupr_s function", "wcsupr_s function"]
ms.assetid: 82d3a273-9f6f-4a26-9560-919d891e4581
---
# `_strupr_s`, `_strupr_s_l`, `_mbsupr_s`, `_mbsupr_s_l`, `_wcsupr_s`, `_wcsupr_s_l`

Converts a string to uppercase, by using the current locale or a specified locale that's passed in. These versions of [`_strupr`, `_strupr_l`, `_mbsupr`, `_mbsupr_l`, `_wcsupr_l`, `_wcsupr`](strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

> [!IMPORTANT]
> **`_mbsupr_s`** and **`_mbsupr_s_l`** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _strupr_s(
   char *str,
   size_t numberOfElements
);
errno_t _wcsupr_s(
   wchar_t * str,
   size_t numberOfElements
);
errno_t _strupr_s_l(
   char * str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _wcsupr_s_l(
   wchar_t * str,
   size_t numberOfElements,
   _locale_t locale
);
errno_t _mbsupr_s(
   unsigned char *str,
   size_t numberOfElements
);
errno_t _mbsupr_s_l(
   unsigned char *str,
   size_t numberOfElements,
   _locale_t locale
);
template <size_t size>
errno_t _strupr_s(
   char (&str)[size]
); // C++ only
template <size_t size>
errno_t _wcsupr_s(
   wchar_t (&str)[size]
); // C++ only
template <size_t size>
errno_t _strupr_s_l(
   char (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _wcsupr_s_l(
   wchar_t (&str)[size],
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _mbsupr_s(
   unsigned char (&str)[size]
); // C++ only
template <size_t size>
errno_t _mbsupr_s_l(
   unsigned char (&str)[size],
   _locale_t locale
); // C++ only
```

### Parameters

*`str`*\
String to capitalize.

*`numberOfElements`*\
Size of the buffer.

*`locale`*\
The locale to use.

## Return value

Zero if successful; a non-zero error code on failure.

These functions validate their parameters. If *`str`* is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md) . If execution is allowed to continue, the functions return `EINVAL` and set `errno` to `EINVAL`. If *`numberOfElements`* is less than the length of the string, the functions return `ERANGE` and set `errno` to `ERANGE`.

## Remarks

The **`_strupr_s`** function converts, in place, each lowercase letter in *`str`* to uppercase. **`_wcsupr_s`** is the wide-character version of **`_strupr_s`**. **`_mbsupr_s`** is the multi-byte character version of **`_strupr_s`**.

The conversion is determined by the `LC_CTYPE` category setting of the locale. Other characters aren't affected. For more information on `LC_CTYPE`, see [`setlocale`](setlocale-wsetlocale.md). The versions of these functions without the `_l` suffix use the current locale; the visions with the `_l` suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../locale.md).

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcsupr_s` | **`_strupr_s`** | **`_mbsupr_s`** | **`_wcsupr_s`** |
| `_tcsupr_s_l` | **`_strupr_s_l`** | **`_mbsupr_s_l`** | **`_wcsupr_s_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_strupr_s`**, **`_strupr_s_l`** | \<string.h> |
| **`_wcsupr_s`**, **`_wcsupr_s_l`**, **`_mbsupr_s`**, **`_mbsupr_s_l`** | \<string.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`_strlwr_s`, `_strlwr_s_l`, `_mbslwr_s`, `_mbslwr_s_l`, `_wcslwr_s`, `_wcslwr_s_l`](strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md) .

## See also

[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[String manipulation](../string-manipulation-crt.md)\
[`_strlwr_s`, `_strlwr_s_l`, `_mbslwr_s`, `_mbslwr_s_l`, `_wcslwr_s`, `_wcslwr_s_l`](strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)
