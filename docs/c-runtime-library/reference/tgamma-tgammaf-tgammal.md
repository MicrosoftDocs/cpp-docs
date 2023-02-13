---
title: "tgamma, tgammaf, tgammal"
description: "API reference for tgamma, tgammaf, and tgammal; which determine the gamma function of the specified value."
ms.date: "9/1/2020"
api_name: ["tgamma", "tgammaf", "tgammal", "_o_tgamma", "_o_tgammaf", "_o_tgammal"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_MATH/tgamma", "CORECRT_MATH/tgammaf", "CORECRT_MATH/tgammal", "tgamma", "tgammaf", "tgammal"]
helpviewer_keywords: ["tgamma function", "tgammaf function", "tgammal function"]
ms.assetid: f1bd2681-8af2-48a9-919d-5358fd068acd
---
# `tgamma`, `tgammaf`, `tgammal`

Determines the gamma function of the specified value.

## Syntax

```C
double tgamma(
   double x
);

float tgammaf(
   float x
);

long double tgammal(
   long double x
);

#define tgamma(X) // Requires C11 or higher

float tgamma(
   float x
); //C++ only

long double tgamma(
   long double x
); //C++ only
```

### Parameters

*`x`*\
The value to find the gamma of.

## Return value

If successful, returns the gamma of *`x`*.

A range error may occur if the magnitude of *`x`* is too large or too small for the data type. A domain error or range error may occur if *`x`* <= 0.

| Issue | Return |
|---|---|
| *`x`* = ±0 | ±INFINITY |
| *`x`* = negative integer | NaN |
| *`x`* = -INFINITY | NaN |
| *`x`* = +INFINITY | +INFINITY |
| *`x`* = NaN | NaN |
| domain error | NaN |
| pole error | ±`HUGE_VAL`, ±`HUGE_VALF`, or ±`HUGE_VALL` |
| overflow range error | ±`HUGE_VAL`, ±`HUGE_VALF`, or ±`HUGE_VALL` |
| underflow range error | the correct value, after rounding. |

Errors are reported as specified in [`_matherr`](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`tgamma`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`tgamma`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `tgamma()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

If x is a natural number, this function returns the factorial of (x-1).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`tgamma`**, **`tgammaf`**,  **`tgammal`** | \<math.h> | \<cmath> |
| **`tgamma`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`lgamma`, `lgammaf`, `lgammal`](lgamma-lgammaf-lgammal.md)
