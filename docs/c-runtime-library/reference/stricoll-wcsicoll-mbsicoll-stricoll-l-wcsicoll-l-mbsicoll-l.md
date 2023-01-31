---
description: "Learn more about: _stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l"
title: "_stricoll, _wcsicoll, _mbsicoll, _stricoll_l, _wcsicoll_l, _mbsicoll_l"
ms.date: "4/2/2020"
api_name: ["_mbsicoll_l", "_stricoll_l", "_mbsicoll", "_wcsicoll_l", "_wcsicoll", "_stricoll", "_o__mbsicoll", "_o__mbsicoll_l", "_o__stricoll", "_o__stricoll_l", "_o__wcsicoll", "_o__wcsicoll_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STRING/_stricoll", "CORECRT_WSTRING/_wcsicoll", "MBSTRING/_mbsicoll", "TCHAR/_tcsicoll", "TCHAR/_ftcsicoll", "STRING/_stricoll_l", "CORECRT_WSTRING/_wcsicoll_l", "MBSTRING/_mbsicoll_l", "TCHAR/_tcsicoll_l", "_stricoll", "_wcsicoll", "_mbsicoll", "_tcsicoll", "_ftcsicoll", "_stricoll_l", "_wcsicoll_l", "_mbsicoll_l", "_tcsicoll_l", "stricoll", "mbsicoll", "stricoll_l", "wcsicoll_l", "mbsicoll_l"]
helpviewer_keywords: ["code pages, using for string comparisons", "_ftcsicoll function", "_mbsicoll_l function", "_mbsicoll function", "mbsicoll function", "stricoll function", "tcsicoll function", "string comparison [C++], culture-specific", "_tcsicoll function", "_stricoll function", "_stricoll_l function", "_wcsicoll function", "mbsicoll_l function", "stricoll_l function", "strings [C++], comparing by code page", "ftcsicoll function"]
ms.assetid: 8ec93016-5a49-49d2-930f-721566661d82
---
# `_stricoll`, `_wcsicoll`, `_mbsicoll`, `_stricoll_l`, `_wcsicoll_l`, `_mbsicoll_l`

Compares strings by using locale-specific information.

> [!IMPORTANT]
> **`_mbsicoll`** and **`_mbsicoll_l`** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _stricoll(
   const char *string1,
   const char *string2
);
int _wcsicoll(
   const wchar_t *string1,
   const wchar_t *string2
);
int _mbsicoll(
   const unsigned char *string1,
   const unsigned char *string2
);
int _stricoll_l(
   const char *string1,
   const char *string2,
   _locale_t locale
);
int _wcsicoll_l(
   const wchar_t *string1,
   const wchar_t *string2,
   _locale_t locale
);
int _mbsicoll_l(
   const unsigned char *string1,
   const unsigned char *string2,
   _locale_t locale
);
```

### Parameters

*`string1`*, *`string2`*\
Null-terminated strings to compare.

*`locale`*\
The locale to use.

## Return value

Each of these functions returns a value indicating the relationship of *`string1`* to *`string2`*, as follows.

| Return value | Relationship of *`string1`* to *`string2`* |
|---|---|
| < 0 | *`string1`* less than *`string2`* |
| 0 | *`string1`* identical to *`string2`* |
| > 0 | *`string1`* greater than *`string2`* |
| `_NLSCMPERROR` | An error occurred. |

Each of these functions returns `_NLSCMPERROR`. To use `_NLSCMPERROR`, include either \<string.h> or \<mbstring.h>. **`_wcsicoll`** can fail if either *`string1`* or *`string2`* contains wide-character codes outside the domain of the collating sequence. When an error occurs, **`_wcsicoll`** may set `errno` to `EINVAL`. To check for an error on a call to **`_wcsicoll`**, set `errno` to 0 and then check `errno` after calling **`_wcsicoll`**.

## Remarks

Each of these functions performs a case-insensitive comparison of *`string1`* and *`string2`* according to the code page currently in use. These functions should be used only when there's a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the string comparison.

`_stricmp` differs from **`_stricoll`** in that the `_stricmp` comparison is affected by `LC_CTYPE`, whereas the **`_stricoll`** comparison is according to the `LC_CTYPE` and `LC_COLLATE` categories of the locale. For more information on the `LC_COLLATE` category, see [`setlocale`](setlocale-wsetlocale.md) and [Locale categories](../locale-categories.md). The versions of these functions without the `_l` suffix use the current locale; the versions with the `_l` suffix are identical except that they use the locale passed in instead. For more information, see [Locale](../locale.md).

All of these functions validate their parameters. If either *`string1`* or *`string2`* are `NULL` pointers, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return `_NLSCMPERROR` and set `errno` to `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcsicoll` | **`_stricoll`** | **`_mbsicoll`** | **`_wcsicoll`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_stricoll`**, **`_stricoll_l`** | \<string.h> |
| **`_wcsicoll`**, **`_wcsicoll_l`** | \<wchar.h>, \<string.h> |
| **`_mbsicoll`**, **`_mbsicoll_l`** | \<mbstring.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Locale](../locale.md)\
[String manipulation](../string-manipulation-crt.md)\
[`strcoll` functions](../strcoll-functions.md)\
[`localeconv`](localeconv.md)\
[`_mbsnbcoll`, `_mbsnbcoll_l`, `_mbsnbicoll`, `_mbsnbicoll_l`](mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)\
[`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md)\
[`strcmp`, `wcscmp`, `_mbscmp`](strcmp-wcscmp-mbscmp.md)\
[`_stricmp`, `_wcsicmp`, `_mbsicmp`, `_stricmp_l`, `_wcsicmp_l`, `_mbsicmp_l`](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)\
[`strncmp`, `wcsncmp`, `_mbsncmp`, `_mbsncmp_l`](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strxfrm`, `wcsxfrm`, `_strxfrm_l`, `_wcsxfrm_l`](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)
