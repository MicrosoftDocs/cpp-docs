---
title: "_chgsign, _chgsignf, _chgsignl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_chgsignl", "_chgsign", "_chgsignf"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_chgsignf", "chgsign", "_chgsignl", "_chgsign"]
dev_langs: ["C++"]
helpviewer_keywords: ["_chgsignl function", "_chgsignf function", "chgsign function", "_chgsign function"]
ms.assetid: a6646f8e-213d-4564-8617-f43bc66f989f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _chgsign, _chgsignf, _chgsignl

Reverses the sign of a floating-point argument.

## Syntax

```C
double _chgsign(
   double x
);
float _chgsignf(
   float x
);
long double _chgsignl(
   long double x
);
```

### Parameters

*x*<br/>
The floating-point value to be changed.

## Return Value

The **_chgsign** functions return a value that's equal to the floating-point argument *x*, but with its sign reversed. There is no error return.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_chgsign**|\<float.h>|
|**_chgsignf**, **_chgsignl**|\<math.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)<br/>
[copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl](copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)<br/>
