---
title: "_ismbbkana, _ismbbkana_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_ismbbkana_l", "_ismbbkana"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_ismbbkana_l", "ismbbkana_l", "ismbbkana", "_ismbbkana"]
dev_langs: ["C++"]
helpviewer_keywords: ["_ismbbkana_l function", "_ismbbkana function", "ismbbkana function", "ismbbkana_l function"]
ms.assetid: 64d4eb4a-205a-40ef-be35-ff9d77fabbaf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _ismbbkana, _ismbbkana_l

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

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

**_ismbbkana** returns a nonzero value if the integer *c* is a katakana symbol or 0 if it is not. **_ismbbkana** uses the current locale for locale-dependent character information. **_ismbbkana_l** is identical except that it uses the locale object passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbkana**|\<mbctype.h>|
|**_ismbbkana_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
