---
title: "fma, fmaf, fmal"
description: "API reference for fma, fmaf, and fmal; which multiplies two values together, adds a third value, and then rounds the result, while only losing a small amount of precision due to intermediary rounding."
ms.date: "9/1/2020"
api_name: ["fma", "fmaf", "fmal", "_o_fma", "_o_fmaf", "_o_fmal"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fma", "fmaf", "fmal", "math/fma", "math/fmaf", "math/fmal"]
helpviewer_keywords: ["fma function", "fmaf function", "fmal function"]
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
---
# `fma`, `fmaf`, `fmal`

Multiplies two values together, adds a third value, and then rounds the result, while only losing a small amount of precision due to intermediary rounding.

## Syntax

```C
double fma(
   double x,
   double y,
   double z
);

float fma(
   float  x,
   float  y,
   float z
); //C++ only

long double fma(
   long double  x,
   long double  y,
   long double z
); //C++ only

float fmaf(
   float  x,
   float  y,
   float z
);

long double fmal(
   long double  x,
   long double  y,
   long double z
);

#define fma(X, Y, Z) // Requires C11 or higher
```

### Parameters

*`x`*\
The first value to multiply.

*`y`*\
The second value to multiply.

*`z`*\
The value to add.

## Return value

Returns approximately `(x * y) + z`. The return value is then rounded using the current rounding format, although in many cases, it returns incorrectly rounded results and thus the value may be inexact by up to half an ulp from the correct value.

Otherwise, may return one of the following values:

| Issue | Return |
|---|---|
| *`x`* = INFINITY, *`y`* = 0 or<br /><br /> *`x`* = 0, *`y`* = INFINITY | NaN |
| *`x`* or *`y`* = exact ± INFINITY, *`z`* = INFINITY with the opposite sign | NaN |
| *`x`* or *`y`* = NaN | NaN |
| not (*`x`* = 0, *`y`*= indefinite) and *`z`* = NaN<br /><br /> not (*`x`*=indefinite, *`y`*=0) and *`z`* = NaN | NaN |
| Overflow range error | ±`HUGE_VAL`, ±`HUGE_VALF`, or ±`HUGE_VALL` |
| Underflow range error | correct value, after rounding. |

Errors are reported as specified in [`_matherr`](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`fma`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`fma`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `fma()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

This function computes the value as though it were taken to infinite precision, and then rounds the final result.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`fma`**, **`fmaf`**, **`fmal`** | \<math.h> | \<cmath> |
| **`fma`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`remainder`, `remainderf`, `remainderl`](remainder-remainderf-remainderl.md)\
[`remquo`, `remquof`, `remquol`](remquo-remquof-remquol.md)
