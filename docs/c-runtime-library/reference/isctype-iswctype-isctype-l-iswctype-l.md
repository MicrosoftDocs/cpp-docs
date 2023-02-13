---
description: "Learn more about: _isctype, iswctype, _isctype_l, _iswctype_l"
title: "_isctype, iswctype, _isctype_l, _iswctype_l"
ms.date: "4/2/2020"
api_name: ["_isctype_l", "iswctype", "_iswctype_l", "_isctype", "_o__isctype", "_o__isctype_l", "_o__iswctype_l", "_o_iswctype"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["iswctype", "_isctype", "_isctype_l", "_iswctype", "isctype", "iswctype_l", "isctype_l", "_iswctype_l"]
helpviewer_keywords: ["isctype_l function", "iswctype_l function", "iswctype function", "_isctype function", "_isctype_l function", "_iswctype_l function", "isctype function", "_iswctype function"]
ms.assetid: cf7509b7-12fc-4d95-8140-ad2eb98173d3
---
# `_isctype`, `iswctype`, `_isctype_l`, `_iswctype_l`

Tests *`c`* for the `ctype` property specified by the *`desc`* argument. For each valid value of *`desc`*, there's an equivalent wide-character classification routine.

## Syntax

```C
int _isctype(
   int c,
   _ctype_t desc
);
int _isctype_l(
   int c,
   _ctype_t desc,
   _locale_t locale
);
int iswctype(
   wint_t c,
   wctype_t desc
);
int _iswctype_l(
   wint_t c,
   wctype_t desc,
   _locale_t locale
);
```

### Parameters

*`c`*\
Integer to test.

*`desc`*\
Property to test for. The property is normally retrieved using `ctype` or [`wctype`](wctype.md).

*`locale`*\
The locale to use for any locale-dependent tests.

## Return value

**`_isctype`** and **`iswctype`** return a nonzero value if *`c`* has the property specified by *`desc`* in the current locale. Otherwise, they return 0. The versions of these functions with the `_l` suffix are identical except that they use the locale passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../locale.md).

The behavior of **`_isctype`** and **`_isctype_l`** is undefined if *`c`* isn't EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *`c`* isn't one of these values, the functions raise an assertion.

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| n/a | **`_isctype`** | n/a | **`_iswctype`** |
| n/a | **`_isctype_l`** | n/a | **`_iswctype_l`** |

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_isctype`** | \<ctype.h> |
| **`iswctype`** | \<ctype.h> or \<wchar.h> |
| **`_isctype_l`** | \<ctype.h> |
| **`_iswctype_l`** | \<ctype.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## See also

[Character classification](../character-classification.md)\
[Locale](../locale.md)\
[`is`, `isw` routines](../is-isw-routines.md)
