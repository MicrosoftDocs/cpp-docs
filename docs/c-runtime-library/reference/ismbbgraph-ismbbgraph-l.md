---
description: "Learn more about: _ismbbgraph, _ismbbgraph_l"
title: "_ismbbgraph, _ismbbgraph_l"
ms.date: "4/2/2020"
api_name: ["_ismbbgraph_l", "_ismbbgraph", "_o__ismbbgraph", "_o__ismbbgraph_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbbgraph", "_ismbbgraph_l", "ismbbgraph", "ismbbgraph_l"]
helpviewer_keywords: ["_ismbbgraph_l function", "ismbbgraph_l function", "_ismbbgraph function", "ismbbgraph function"]
ms.assetid: b60db718-134f-4796-acc1-592d0b9efbb7
---
# `_ismbbgraph`, `_ismbbgraph_l`

Determines whether a particular multibyte character is a graphical character.

## Syntax

```C
int _ismbbgraph (
   unsigned int c
);
int _ismbbgraph_l (
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

Returns a nonzero value when the expression:

`isctype(c, ( _PUNCT | _UPPER | _LOWER | _DIGIT )) || _ismbbkprint(c)`

is nonzero for *`c`*, or 0 when it's zero. **`_ismbbgraph`** uses the current locale for any locale-dependent behavior. **`_ismbbgraph_l`** is identical except that it uses the locale passed in instead. For more information, see [Locale](../locale.md).

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_ismbbgraph`** | \<mbctype.h> |
| **`_ismbbgraph_l`** | \<mbctype.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## See also

[Byte classification](../byte-classification.md)\
[`_ismbb` routines](../ismbb-routines.md)
