---
description: "Learn more about: toupper, _toupper, towupper, _toupper_l, _towupper_l"
title: "toupper, _toupper, towupper, _toupper_l, _towupper_l"
ms.date: "4/2/2020"
api_name: ["_toupper_l", "towupper", "toupper", "_towupper_l", "_toupper", "_o__toupper", "_o__toupper_l", "_o__towupper_l", "_o_toupper", "_o_towupper"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CTYPE/toupper", "CTYPE/_toupper", "CTYPE/_toupper_l", "CORECRT_WCTYPE/towupper", "CORECRT_WCTYPE/_towupper_l", "TCHAR/_totupper", "TCHAR/_totupper_l", "toupper", "_toupper", "_toupper_l", "towupper", "_towupper_l", "_totupper", "_totupper_l"]
helpviewer_keywords: ["_toupper function", "towupper function", "uppercase, converting strings to", "totupper function", "string conversion, to different characters", "towupper_l function", "toupper_l function", "string conversion, case", "_toupper_l function", "_towupper_l function", "_totupper function", "case, converting", "characters, converting", "toupper function"]
ms.assetid: cdef1b0f-b19c-4d11-b7d2-cf6334c9b6cc
---
# `toupper`, `_toupper`, `towupper`, `_toupper_l`, `_towupper_l`

Convert character to uppercase.

## Syntax

```C
int toupper(
   int c
);
int _toupper(
   int c
);
int towupper(
   wint_t c
);
int _toupper_l(
   int c ,
   _locale_t locale
);
int _towupper_l(
   wint_t c ,
   _locale_t locale
);
```

### Parameters

*`c`*\
Character to convert.

*`locale`*\
Locale to use.

## Return value

Each of these routines converts a copy of *`c`*, if possible, and returns the result.

If *`c`* is a wide character for which `iswlower` is nonzero and there's a corresponding wide character for which [`iswupper`](isupper-isupper-l-iswupper-iswupper-l.md) is nonzero, **`towupper`** returns the corresponding wide character; otherwise, **`towupper`** returns *`c`* unchanged.

There's no return value reserved to indicate an error.

In order for **`toupper`** to give the expected results, [`__isascii`](isascii-isascii-iswascii.md) and [`islower`](islower-iswlower-islower-l-iswlower-l.md) must both return nonzero.

## Remarks

Each of these routines converts a given lowercase letter to an uppercase letter if possible and appropriate. The case conversion of **`towupper`** is locale-specific. Only the characters relevant to the current locale are changed in case. The functions without the `_l` suffix use the currently set locale. The versions of these functions with the `_l` suffix take the locale as a parameter and use that instead of the currently set locale. For more information, see [Locale](../locale.md).

In order for **`toupper`** to give the expected results, [`__isascii`](isascii-isascii-iswascii.md) and [`isupper`](isupper-isupper-l-iswupper-iswupper-l.md) must both return nonzero.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_totupper` | **`toupper`** | **`_mbctoupper`** | **`towupper`** |
| `_totupper_l` | **`_toupper_l`** | **`_mbctoupper_l`** | **`_towupper_l`** |

> [!NOTE]
> **`_toupper_l`** and **`_towupper_l`** have no locale dependence and are not meant to be called directly. They are provided for internal use by **`_totupper_l`**.

## Requirements

| Routine | Required header |
|---|---|
| **`toupper`** | \<ctype.h> |
| **`_toupper`** | \<ctype.h> |
| **`towupper`** | \<ctype.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example in [`to` functions](../to-functions.md).

## See also

[`is`, `isw` routines](../is-isw-routines.md)\
[`to` functions](../to-functions.md)\
[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)
