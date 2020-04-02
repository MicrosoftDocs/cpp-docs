---
title: "exp2, exp2f, exp2l"
ms.date: "4/2/2020"
api_name: ["exp2", "exp2f", "exp2l", "_o_exp2", "_o_exp2f", "_o_exp2l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["exp2", "math/exp2", "exp2f", "math/exp2f", "exp2l", "math/exp2l"]
helpviewer_keywords: ["exp2 function", "exp2f function", "exp2l function"]
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
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

By default, this function's global state is scoped to the application. To change this, see [App vs OS state](../global-state.md).

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**exp**, **expf**, **expl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log2, log2f, log2l](log2-log2f-log2l.md)<br/>
