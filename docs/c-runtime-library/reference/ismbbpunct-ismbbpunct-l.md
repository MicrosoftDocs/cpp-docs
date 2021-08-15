---
description: "Learn more about: _ismbbpunct, _ismbbpunct_l"
title: "_ismbbpunct, _ismbbpunct_l"
ms.date: "4/2/2020"
api_name: ["_ismbbpunct", "_ismbbpunct_l", "_o__ismbbpunct", "_o__ismbbpunct_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ismbbpunct", "ismbbpunct_l", "_ismbbpunct_l", "_ismbbpunct"]
helpviewer_keywords: ["ismbbpunct function", "_ismbbpunct function", "ismbbpunct_l function", "_ismbbpunct_l function"]
ms.assetid: 1976c9d3-7d1a-415f-ac52-2715c7bb56eb
---
# _ismbbpunct, _ismbbpunct_l

Determines whether a particular character is a punctuation character.

## Syntax

```C
int _ismbbpunct(
   unsigned int c
);
int _ismbbpunct_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

**_ismbbpunct** returns a nonzero value if the integer *c* is a non-ASCII punctuation symbol. **_ismbbpunct** uses the current locale for any locale-dependent character settings. **_ismbbpunct_l** is identical except that it uses the locale that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbpunct**|\<mbctype.h>|
|**_ismbbpunct_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
