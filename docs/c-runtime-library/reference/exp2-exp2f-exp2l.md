---
title: "exp2, exp2f, exp2l | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["exp2", "exp2f", "exp2l"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["exp2", "math/exp2", "exp2f", "math/exp2f", "exp2l", "math/exp2l"]
dev_langs: ["C++"]
helpviewer_keywords: ["exp2 function", "exp2f function", "exp2l function"]
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# exp2, exp2f, exp2l

Computes 2 raised to the specified value.

## Syntax

```C
double exp2(
   double x
);

float exp2(
   float x
);  // C++ only

long double exp2(
   long double x
); // C++ only

float exp2f(
   float x
);

long double exp2l(
   long double x
);
```

### Parameters

*x*<br/>
The value of the exponent.

## Return Value

If successful, returns the base-2 exponent of *x*, that is, 2<sup>x</sup>. Otherwise, it returns one of the following values:

|Issue|Return|
|-----------|------------|
|*x* = ±0|1|
|*x* = -INFINITY|+0|
|*x* = +INFINITY|+INFINITY|
|*x* = NaN|NaN|
|Overflow range error|+HUGE_VAL, +HUGE_VALF, or +HUGE_VALL|
|Underflow range error|Correct result, after rounding|

Errors are reported as specified in [_matherr](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **exp2** that take and return **float** and **long double** types. In a C program, **exp2** always takes and returns a **double**.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**exp**, **expf**, **expl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log2, log2f, log2l](log2-log2f-log2l.md)<br/>
