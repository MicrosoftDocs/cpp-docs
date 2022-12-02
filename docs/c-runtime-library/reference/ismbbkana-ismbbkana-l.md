---
description: "Learn more about: _ismbbkana, _ismbbkana_l"
title: "_ismbbkana, _ismbbkana_l"
ms.date: "4/2/2020"
api_name: ["_ismbbkana_l", "_ismbbkana", "_o__ismbbkana", "_o__ismbbkana_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbbkana_l", "ismbbkana_l", "ismbbkana", "_ismbbkana"]
helpviewer_keywords: ["_ismbbkana_l function", "_ismbbkana function", "ismbbkana function", "ismbbkana_l function"]
ms.assetid: 64d4eb4a-205a-40ef-be35-ff9d77fabbaf
---
# `_ismbbkana`, `_ismbbkana_l`

Tests for a katakana symbol and is specific to code page 932.

## Syntax

```C
int _ismbbkana(
   unsigned int c
);
int _ismbbkana_l(
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

**`_ismbbkana`** returns a nonzero value if the integer *`c`* is a katakana symbol. Otherwise, it returns 0. **`_ismbbkana`** uses the current locale for locale-dependent character information. **`_ismbbkana_l`** is identical except that it uses the locale object passed in. For more information, see [Locale](../locale.md).

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_ismbbkana`** | \<mbctype.h> |
| **`_ismbbkana_l`** | \<mbctype.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Byte classification](../byte-classification.md)\
[`_ismbb` routines](../ismbb-routines.md)
