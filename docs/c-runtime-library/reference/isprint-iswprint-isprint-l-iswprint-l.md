---
description: "Learn more about: isprint, iswprint, _isprint_l, _iswprint_l"
title: "isprint, iswprint, _isprint_l, _iswprint_l"
ms.date: "4/2/2020"
api_name: ["iswprint", "isprint", "_isprint_l", "_iswprint_l", "_o_isprint", "_o_iswprint"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswprint", "_istprint", "isprint"]
helpviewer_keywords: ["_istprint function", "iswprint function", "_iswprint_l function", "isprint_l function", "istprint function", "isprint function", "iswprint_l function", "_isprint_l function"]
ms.assetid: a8bbcdb0-e8d0-4d8c-ae4e-56d3bdee6ca3
---
# `isprint`, `iswprint`, `_isprint_l`, `_iswprint_l`

Determines whether an integer represents a printable character.

## Syntax

```C
int isprint(
   int c
);
int iswprint(
   wint_t c
);
int _isprint_l(
   int c,
   _locale_t locale
);
int _iswprint_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*`c`*\
Integer to test.

*`locale`*\
The locale to use.

## Return value

Each of these routines returns nonzero if *`c`* is a particular representation of a printable character. **`isprint`** returns a nonzero value if *`c`* is a printable character (0x20 - 0x7E), including the space character. **`iswprint`** returns a nonzero value if *`c`* is a printable wide character, including the space wide character. Each of these routines returns 0 if *`c`* doesn't satisfy the test condition.

The result of the test condition for these functions depends on the `LC_CTYPE` category setting of the locale. For more information, see [`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md). The versions of these functions that don't have the `_l` suffix use the current locale for any locale-dependent behavior; the versions that do have the `_l` suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../locale.md).

The behavior of **`isprint`** and **`_isprint_l`** is undefined if *`c`* isn't EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *`c`* isn't one of these values, the functions raise an assertion.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_istprint` | **`isprint`** | [`_ismbcprint`](ismbcgraph-functions.md) | **`iswprint`** |

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`isprint`** | \<ctype.h> |
| **`iswprint`** | \<ctype.h> or \<wchar.h> |
| **`_isprint_l`** | \<ctype.h> |
| **`_iswprint_l`** | \<ctype.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Character classification](../character-classification.md)\
[Locale](../locale.md)\
[`is`, `isw` routines](../is-isw-routines.md)
