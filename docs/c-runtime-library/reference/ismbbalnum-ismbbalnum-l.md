---
title: "_ismbbalnum, _ismbbalnum_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_ismbbalnum", "_ismbbalnum_l"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_ismbbalnum", "ismbbalnum", "_ismbbalnum_l", "ismbbalnum_l"]
dev_langs: ["C++"]
helpviewer_keywords: ["_ismbbalnum_l function", "ismbbalnum function", "ismbbalnum_l function", "_ismbbalnum function"]
ms.assetid: 8025de50-a871-49fd-9ae6-f437b47aa987
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _ismbbalnum, _ismbbalnum_l

Determines whether a specified multibyte character is alpha or numeric.

## Syntax

```C
int _ismbbalnum(
   unsigned int c
);
int _ismbbalnum_l(
   unsigned int c
);
```

### Parameters

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

**_ismbbalnum** returns a nonzero value if the expression:

`isalnum(c) || _ismbbkalnum(c)`

is nonzero for *c*, or 0 if it is not.

The version of this function with the **_l** suffix is identical except that it uses the locale passed in instead of the current locale for its locale-dependent behavior.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbalnum**|\<mbctype.h>|
|**_ismbbalnum_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
