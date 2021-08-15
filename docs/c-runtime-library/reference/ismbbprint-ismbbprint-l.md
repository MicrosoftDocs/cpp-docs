---
description: "Learn more about: _ismbbprint, _ismbbprint_l"
title: "_ismbbprint, _ismbbprint_l"
ms.date: "4/2/2020"
api_name: ["_ismbbprint_l", "_ismbbprint", "_o__ismbbprint", "_o__ismbbprint_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbbprint_l", "_ismbbprint", "ismbbprint", "ismbbprint_l"]
helpviewer_keywords: ["ismbbprint_l function", "ismbbprint function", "_ismbbprint function", "_ismbbprint_l function"]
ms.assetid: d08a061c-18a8-48f2-a75d-bff4870aec9d
---
# _ismbbprint, _ismbbprint_l

Determines whether a specified multibyte character is a print character.

## Syntax

```C
int _ismbbprint(
   unsigned int c
);
int _ismbbprint_l(
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

**_ismbbprint** returns a nonzero value if the expression:

`isprint(c) || _ismbbkprint(c)`

is nonzero for *c*, or 0 if it is not. **_ismbbprint** uses the current locale for any locale-dependent behavior. **_ismbbprint_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbprint**|\<mbctype.h>|
|**_ismbbprint_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
