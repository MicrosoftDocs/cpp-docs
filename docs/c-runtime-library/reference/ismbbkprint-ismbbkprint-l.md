---
description: "Learn more about: _ismbbkprint, _ismbbkprint_l"
title: "_ismbbkprint, _ismbbkprint_l"
ms.date: "4/2/2020"
api_name: ["_ismbbkprint", "_ismbbkprint_l", "_o__ismbbkprint", "_o__ismbbkprint_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbbkprint_l", "ismbbkprint", "_ismbbkprint", "ismbbkprint_l"]
helpviewer_keywords: ["_ismbbkprint function", "ismbbkprint_l function", "ismbbkprint function", "_ismbbkprint_l function"]
ms.assetid: 8d1d3258-1e34-4365-81ed-97c95de25475
---
# _ismbbkprint, _ismbbkprint_l

Determines whether a particular multibyte character is a punctuation symbol.

## Syntax

```C
int _ismbbkprint(
   unsigned int c
);
int _ismbbkprint_l(
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

**_ismbbkprint** returns a nonzero value if the integer *c* is a non-ASCII text or non-ASCII punctuation symbol or 0 if it is not. For example, in code page 932 only, **_ismbbkprint** tests for katakana alphanumeric or katakana punctuation (range: 0xA1 - 0xDF). **_ismbbkprint** uses the current locale for locale-dependent character settings. **_ismbbkprint_l** is identical except that it uses the locale passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbkprint**|\<mbctype.h>|
|**_ismbbkprint_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
