---
description: "Learn more about: _ismbbkalnum, _ismbbkalnum_l"
title: "_ismbbkalnum, _ismbbkalnum_l"
ms.date: "4/2/2020"
api_name: ["_ismbbkalnum", "_ismbbkalnum_l", "_o__ismbbkalnum", "_o__ismbbkalnum_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbbkalnum", "ismbbkalnum", "ismbbkalnum_l", "_ismbbkalnum_l"]
helpviewer_keywords: ["_ismbbkalnum_l function", "ismbbkalnum_l function", "_ismbbkalnum function", "ismbbkalnum function"]
ms.assetid: e1d70e7b-29d0-469c-9d93-442b99de22ac
---
# `_ismbbkalnum`, `_ismbbkalnum_l`

Determines whether a particular multibyte character is a non-ASCII text symbol.

## Syntax

```C
int _ismbbkalnum(
   unsigned int c
);
int _ismbbkalnum_l(
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

**`_ismbbkalnum`** returns a nonzero value if the integer *`c`* is a non-ASCII text symbol other than punctuation. Otherwise, it returns 0. **`_ismbbkalnum`** uses the current locale for locale-dependent character information. **`_ismbbkalnum_l`** is identical to **`_ismbbkalnum`** except that it takes the locale as a parameter. For more information, see [Locale](../locale.md).

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_ismbbkalnum`** | \<mbctype.h> |
| **`_ismbbkalnum_l`** | \<mbctype.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Byte classification](../byte-classification.md)\
[`_ismbb` routines](../ismbb-routines.md)
