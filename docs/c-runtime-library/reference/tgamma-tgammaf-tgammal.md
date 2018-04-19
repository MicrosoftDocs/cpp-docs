---
title: "tgamma, tgammaf, tgammal | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["tgamma", "tgammaf", "tgammal"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["tgamma", "tgammaf", "tgammal", "math/tgamma", "math/tgammaf", "math/tgammal"]
dev_langs: ["C++"]
helpviewer_keywords: ["tgamma function", "tgammaf function", "tgammal function"]
ms.assetid: f1bd2681-8af2-48a9-919d-5358fd068acd
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# tgamma, tgammaf, tgammal

Determines the gamma function of the specified value.

## Syntax

```C
double tgamma(
   double x
);

float tgamma(
   float x
); //C++ only

long double tgamma(
   long double x
); //C++ only

float tgammaf(
   float x
);

long double tgammal(
   long double x
);

```

### Parameters

*x*<br/>
The value to find the gamma of.

## Return Value

If successful, returns the gamma of *x*.

A range error may occur if the magnitude of *x* is too large or too small for the data type. A domain error or range error may occur if *x* <= 0.

|Issue|Return|
|-----------|------------|
|x = ±0|±INFINITY|
|x = negative integer|NaN|
|x = -INFINITY|NaN|
|x = +INFINITY|+INFINITY|
|x = NaN|NaN|
|domain error|NaN|
|pole error|±HUGE_VAL, ±HUGE_VALF, or ±HUGE_VALL|
|overflow range error|±HUGE_VAL, ±HUGE_VALF, or ±HUGE_VALL|
|underflow range error|the correct value, after rounding.|

Errors are reported as specified in [_matherr](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **tgamma** that take and return **float** and **long** **double** types. In a C program, **tgamma** always takes and returns a **double**.

If x is a natural number, this function returns the factorial of (x-1).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**tgamma**, **tgammaf**,  **tgammal**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[lgamma, lgammaf, lgammal](lgamma-lgammaf-lgammal.md)<br/>
