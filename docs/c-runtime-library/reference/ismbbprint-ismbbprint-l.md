---
title: "_ismbbprint, _ismbbprint_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_ismbbprint_l", "_ismbbprint"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_ismbbprint_l", "_ismbbprint", "ismbbprint", "ismbbprint_l"]
dev_langs: ["C++"]
helpviewer_keywords: ["ismbbprint_l function", "ismbbprint function", "_ismbbprint function", "_ismbbprint_l function"]
ms.assetid: d08a061c-18a8-48f2-a75d-bff4870aec9d
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _ismbbprint, _ismbbprint_l

Determines whether a specified multibyte character is a print character.

## Syntax

```
int _ismbbprint(
   unsigned int c
);
int _ismbbprint_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

`c`
Integer to be tested.

`locale`
Locale to use.

## Return Value

`_ismbbprint` returns a nonzero value if the expression:

```
isprint || _ismbbkprint
```

is nonzero for `c`, or 0 if it is not. `_ismbbprint` uses the current locale for any locale-dependent behavior. `_ismbbprint_l` is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_ismbbprint`|\<mbctype.h>|
|`_ismbbprint_l`|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See Also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)