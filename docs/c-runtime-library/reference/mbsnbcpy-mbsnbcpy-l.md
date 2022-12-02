---
description: "Learn more about: _mbsnbcpy, _mbsnbcpy_l"
title: "_mbsnbcpy, _mbsnbcpy_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbcpy", "_mbsnbcpy_l", "_o__mbsnbcpy", "_o__mbsnbcpy_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsnbcpy", "_mbsnbcpy", "mbsnbcpy_l", "_mbsnbcpy_l"]
helpviewer_keywords: ["mbsnbcpy function", "_mbsnbcpy_l function", "_mbsnbcpy function", "_tcsncpy function", "tcsncpy_l function", "_tcsncpy_l function", "mbsnbcpy_l function", "tcsncpy function"]
ms.assetid: 83d17b50-3cbf-4df9-bce8-3b6d52f85d04
---
# `_mbsnbcpy`, `_mbsnbcpy_l`

Copies **n** bytes of a string to a destination string. More secure versions of these functions are available—see [`_mbsnbcpy_s`, `_mbsnbcpy_s_l`](mbsnbcpy-s-mbsnbcpy-s-l.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned char * _mbsnbcpy(
   unsigned char * strDest,
   const unsigned char * strSource,
   size_t count
);
unsigned char * _mbsnbcpy_l(
   unsigned char * strDest,
   const unsigned char * strSource,
   size_t count,
   _locale_t locale
);
template <size_t size>
unsigned char * _mbsnbcpy(
   unsigned char (&strDest)[size],
   const unsigned char * strSource,
   size_t count
); // C++ only
template <size_t size>
unsigned char * _mbsnbcpy_l(
   unsigned char (&strDest)[size],
   const unsigned char * strSource,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*`strDest`*\
Destination for the character string to be copied.

*`strSource`*\
Character string to be copied.

*`count`*\
Number of bytes to be copied.

*`locale`*\
Locale to use.

## Return value

**`_mbsnbcpy`** returns a pointer to the destination character string. No return value is reserved to indicate an error.

## Remarks

The **`_mbsnbcpy`** function copies *`count`* bytes from *`strSource`* to *`strDest`*. If *`count`* exceeds the size of *`strDest`* or the source and destination strings overlap, the behavior of **`_mbsnbcpy`** is undefined.

If *`strSource`* or *`strDest`* is a null pointer, this function invokes the invalid parameter handler as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function returns `NULL` and sets `errno` to `EINVAL`.

The output value is affected by the setting of the `LC_CTYPE` category setting of the locale. For more information, see [`setlocale`](setlocale-wsetlocale.md). The versions of these functions are identical, except that the ones that don't have the `_l` suffix use the current locale and the versions that do have the `_l` suffix instead use the locale parameter that's passed in. For more information, see [Locale](../locale.md).

> [!IMPORTANT]
> These functions might be vulnerable to buffer overrun threats. Buffer overruns can be used to execute arbitrary attacker code, which can cause an unwarranted elevation of privilege and compromise the system. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

In C++, these functions have template overloads that invoke the newer, more secure counterparts of these functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcsncpy` | [`strncpy`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md) | **`_mbsnbcpy`** | [`wcsncpy`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md) |
| `_tcsncpy_l` | `_strncpy_l` | **`_mbsnbcp_l`** | `_wcsncpy_l` |

## Requirements

| Routine | Required header |
|---|---|
| **`_mbsnbcpy`** | \<mbstring.h> |
| **`_mbsnbcpy_l`** | \<mbstring.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[String manipulation](../string-manipulation-crt.md)\
[`_mbsnbcat`, `_mbsnbcat_l`](mbsnbcat-mbsnbcat-l.md)\
[`_mbsnbcmp`, `_mbsnbcmp_l`](mbsnbcmp-mbsnbcmp-l.md)\
[`_strncnt`, `_wcsncnt`, `_mbsnbcnt`, `_mbsnbcnt_l`, `_mbsnccnt`, `_mbsnccnt_l`](strncnt-wcsncnt-mbsnbcnt-mbsnbcnt-l-mbsnccnt-mbsnccnt-l.md)\
[`_mbsnbset`, `_mbsnbset_l`](mbsnbset-mbsnbset-l.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)
