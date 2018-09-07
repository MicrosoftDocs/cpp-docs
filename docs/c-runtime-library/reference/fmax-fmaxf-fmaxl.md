---
title: "fmax, fmaxf, fmaxl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["fmax", "fmaxf", "fmaxl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["fmax", "fmaxf", "fmaxl", "math/fmax", "math/fmaxf", "math/fmaxl"]
dev_langs: ["C++"]
helpviewer_keywords: ["fmax function", "fmaxf function", "fmaxl function"]
ms.assetid: a773ccf7-495e-4a9a-8c6d-dfb53e341e35
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# fmax, fmaxf, fmaxl

Determine the larger of two specified numeric values.

## Syntax

```C
double fmax(
   double x,
   double y
);

float fmax(
   float x,
   float y
); //C++ only

long double fmax(
   long double x,
   long double y
); //C++ only

float fmaxf(
   float x,
   float y
);

long double fmaxl(
   long double x,
   long double y
);

```

### Parameters

*x*<br/>
The first value to compare.

*y*<br/>
The second value to compare.

## Return Value

If successful, returns the larger of *x* or *y*. The value returned is exact, and does not depend on any form of rounding.

Otherwise, may return one of the following values:

|Issue|Return|
|-----------|------------|
|*x* = NaN|*y*|
|*y* = NaN|*x*|
|*x* and *y* = NaN|NaN|

This function does not use the errors specified in  [_matherr](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of fmax that take and return float and long double types. In a C program, fmax always takes and returns a double.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**fmax**, **fmaxf**, **fmaxl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[fmin, fminf, fminl](fmin-fminf-fminl.md)<br/>
