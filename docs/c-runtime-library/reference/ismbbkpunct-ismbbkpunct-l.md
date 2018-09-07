---
title: "_ismbbkpunct, _ismbbkpunct_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_ismbbkpunct_l", "_ismbbkpunct"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ismbbkpunct_l", "_ismbbkpunct_l", "ismbbkpunct", "_ismbbkpunct"]
dev_langs: ["C++"]
helpviewer_keywords: ["_ismbbkpunct_l function", "ismbbkpunct_l function", "ismbbkpunct function", "_ismbbkpunct function"]
ms.assetid: a04c59cd-5ca7-4296-bec0-2b0d7f04edd0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _ismbbkpunct, _ismbbkpunct_l

Checks whether a multibyte character is a punctuation character.

## Syntax

```C
int _ismbbkpunct(
   unsigned int c
);
int _ismbbkpunct_l(
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

**_ismbbkpunct** returns a nonzero value if the integer *c* is a non-ASCII punctuation symbol, or 0 if it is not. For example, in code page 932 only, **_ismbbkpunct** tests for katakana punctuation. **_ismbbkpunct** uses the current locale for any locale-dependent character settings. **_ismbbkpunct_l** is identical except that it uses the locale that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbkpunct**|\<mbctype.h>|
|**_ismbbkpunct_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
