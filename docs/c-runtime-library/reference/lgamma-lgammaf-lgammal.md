---
title: "lgamma, lgammaf, lgammal"
description: "API reference for lgamma, lgammaf, and lgammal; which determines the natural logarithm of the absolute value of the gamma function of the specified value."
ms.date: "9/1/2020"
api_name: ["lgamma", "lgammaf", "lgammal", "_o_lgamma", "_o_lgammaf", "_o_lgammal"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["lgamma", "lgammaf", "lgammal", "math/lgamma", "math/lgammaf", "math/lgammal"]
helpviewer_keywords: ["lgamma function", "lgammal function", "lgammaf function"]
ms.assetid: 6e326c58-7077-481a-a329-c82ae56ae9e6
---
# `lgamma`, `lgammaf`, `lgammal`

Determines the natural logarithm of the absolute value of the gamma function of the specified value.

## Syntax

```C
double lgamma( double x );
float lgammaf( float x );
long double lgammal( long double x );
#define lgammal(X) // Requires C11 or higher

float lgamma( float x ); //C++ only
long double lgamma( long double x ); //C++ only
```

### Parameters

*`x`*\
The value to compute.

## Return value

If successful, return the natural logarithm of the absolute value of the gamma function of *`x`*.

| Issue | Return |
|---|---|
| *`x`* = NaN | NaN |
| *`x`* = ±0 | +INFINITY |
| *`x`*= negative integer | +INFINITY |
| ±INFINITY | +INFINITY |
| pole error | +`HUGE_VAL`, +`HUGE_VALF`, or +`HUGE_VALL` |
| overflow range error | ±`HUGE_VAL`, ±`HUGE_VALF`, or ±`HUGE_VALL` |

Errors are reported as specified in [`_matherr`](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`lgamma`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`lgamma`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `lgamma()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

If x is a rational number, this function returns the logarithm of the factorial of (x - 1).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`lgamma`**, **`lgammaf`**, **`lgammal`** | \<math.h> | \<cmath> |
| **`lgamma`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`tgamma`, `tgammaf`, `tgammal`](tgamma-tgammaf-tgammal.md)
