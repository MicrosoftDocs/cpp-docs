---
title: "_ismbblead, _ismbblead_l"
description: "Describes the Microsoft C Runtime Library (CRT) _ismbblead and _ismbblead_l functions."
ms.date: "4/2/2020"
api_name: ["_ismbblead_l", "_ismbblead", "_o__ismbblead", "_o__ismbblead_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ismbblead_l", "istlead", "_ismbblead", "_ismbblead_l", "ismbblead", "_istlead"]
helpviewer_keywords: ["_ismbblead_l function", "ismbblead function", "_ismbblead function", "istlead function", "ismbblead_l function", "_istlead function"]
ms.assetid: 2abc6f75-ed5c-472e-bfd0-e905a1835ccf
---
# `_ismbblead`, `_ismbblead_l`

Tests a character to determine whether it's a lead byte of a multibyte character.

## Syntax

```C
int _ismbblead(
   unsigned int c
);
int _ismbblead_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*`c`*\
Integer to be tested.

*`locale`*\
Locale to use.

## Return value

Returns a nonzero value if the integer *`c`* is the first byte of a multibyte character.

## Remarks

Multibyte characters consist of a lead byte followed by a trailing byte. Lead bytes are distinguished by being in a particular range for a given character set. For example, in code page 932 only, lead bytes range from 0x81 - 0x9F and 0xE0 - 0xFC.

**`_ismbblead`** uses the current locale for locale-dependent behavior. **`_ismbblead_l`** is identical except that it uses the locale passed in instead. For more information, see [Locale](../locale.md).

When the locale is UTF-8, **`_ismbblead`** and **`_ismbblead_l`** always return 0 (false), whether *`c`* is a lead byte or not.

**`_ismbblead`** and **`_ismbblead_l`** are Microsoft-specific, not part of the Standard C library. We don't recommend you use them where you want portable code. For Standard C compatibility, use `mbrlen` instead.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_istlead` | Always returns false | **`_ismbblead`** | Always returns false |

## Requirements

| Routine | Required header | Optional header |
|---|---|---|
| **`_ismbblead`** | \<mbctype.h> or \<mbstring.h> | \<ctype.h>,* \<limits.h>, \<stdlib.h> |
| **`_ismbblead_l`** | \<mbctype.h> or \<mbstring.h> | \<ctype.h>,* \<limits.h>, \<stdlib.h> |

\* For manifest constants for the test conditions.

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Byte classification](../byte-classification.md)\
[`_ismbb` routines](../ismbb-routines.md)\
[`mbrlen`](mbrlen.md)
