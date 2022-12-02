---
description: "Learn more about: islower, iswlower, _islower_l, _iswlower_l"
title: "islower, iswlower, _islower_l, _iswlower_l"
ms.date: "4/2/2020"
api_name: ["iswlower", "_islower_l", "islower", "_iswlower_l", "_o_islower", "_o_iswlower"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_istlower", "islower", "_ismbclower_l", "_liswlower_l", "_istlower_l", "_iswlower_l", "_islower _l", "_islower_l", "iswlower"]
helpviewer_keywords: ["_islower _l function", "_ismbclower_l function", "islower function", "_iswlower_l function", "_liswlower_l function", "_istlower_l function", "istlower function", "_istlower function", "iswlower function", "_islower_l function"]
ms.assetid: fcc3b70a-2b47-45fd-944d-e5c1942e6457
---
# `islower`, `iswlower`, `_islower_l`, `_iswlower_l`

Determines whether an integer represents a lowercase character.

## Syntax

```C
int islower(
   int c
);
int iswlower(
   wint_t c
);
int islower_l(
   int c,
   _locale_t locale
);
int _iswlower_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*`c`*\
Integer to test.

*`locale`*\
Locale to use.

## Return value

Each of these routines returns nonzero if *`c`* is a particular representation of a lowercase character. **`islower`** returns a nonzero value if *`c`* is a lowercase character (a - z). **`iswlower`** returns a nonzero value if *`c`* is a wide character that corresponds to a lowercase letter, or if *`c`* is one of an implementation-defined set of wide characters for which none of `iswcntrl`, `iswdigit`, `iswpunct`, or `iswspace` is nonzero. Each of these routines returns 0 if *`c`* doesn't satisfy the test condition.

The versions of these functions that have the `_l` suffix use the locale that's passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../locale.md).

The behavior of **`islower`** and **`_islower_l`** is undefined if *`c`* isn't EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *`c`* isn't one of these values, the functions raise an assertion.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_istlower` | **`islower`** | [`_ismbclower`](ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md) | **`iswlower`** |
| **`_istlower_l`** | `_islower _l` | [`_ismbclower_l`](ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md) | **`_liswlower_l`** |

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`islower`** | \<ctype.h> |
| **`iswlower`** | \<ctype.h> or \<wchar.h> |
| **`_islower_l`** | \<ctype.h> |
| **`_swlower_l`** | \<ctype.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Character classification](../character-classification.md)\
[Locale](../locale.md)\
[`is`, `isw` routines](../is-isw-routines.md)
