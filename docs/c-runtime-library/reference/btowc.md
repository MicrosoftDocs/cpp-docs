---
title: "btowc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["btowc"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["btowc"]
dev_langs: ["C++"]
helpviewer_keywords: ["btowc function"]
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# btowc

Determine whether an integer represents a valid single-byte character in the initial shift state.

## Syntax

```C
wint_t btowc(
   int character
);
```

### Parameters

*character*<br/>
Integer to test.

## Return Value

Returns the wide-character representation of the character if the integer represents a valid single-byte character in the initial shift state. Returns WEOF if the integer is EOF or is not a valid single-byte character in the initial shift state. The output of this function is affected by the current **LC_TYPE** locale.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**btowc**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
