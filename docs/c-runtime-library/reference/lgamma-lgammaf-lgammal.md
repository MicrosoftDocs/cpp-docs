---
title: "lgamma, lgammaf, lgammal"
ms.date: "04/05/2018"
api_name: ["lgamma", "lgammaf", "lgammal"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: "DLLExport"
topic_type: ["apiref"]
f1_keywords: ["lgamma", "lgammaf", "lgammal", "math/lgamma", "math/lgammaf", "math/lgammal"]
helpviewer_keywords: ["lgamma function", "lgammal function", "lgammaf function"]
ms.assetid: 6e326c58-7077-481a-a329-c82ae56ae9e6
---
# lgamma, lgammaf, lgammal

Determines the natural logarithm of the absolute value of the gamma function of the specified value.

## Syntax

```C
double lgamma( double x );
float lgammaf( float x );
long double lgammal( long double x );
```

```cpp
float lgamma( float x ); //C++ only
long double lgamma( long double x ); //C++ only
```

### Parameters

*x*<br/>
The value to compute.

## Return Value

If successful, return the natural logarithm of the absolute value of the gamma function of *x*.

|Issue|Return|
|-----------|------------|
|*x* = NaN|NaN|
|*x* = ±0|+INFINITY|
|*x*= negative integer|+INFINITY|
|±INFINITY|+INFINITY|
|pole error|+HUGE_VAL, +HUGE_VALF, or +HUGE_VALL|
|overflow range error|±HUGE_VAL, ±HUGE_VALF, or ±HUGE_VALL|

Errors are reported as specified in [_matherr](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **lgamma** that take and return **float** and **long** **double** types. In a C program, **lgamma** always takes and returns a **double**.

If x is a rational number, this function returns the logarithm of the factorial of (x - 1).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**lgamma**, **lgammaf**, **lgammal**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[tgamma, tgammaf, tgammal](tgamma-tgammaf-tgammal.md)<br/>
