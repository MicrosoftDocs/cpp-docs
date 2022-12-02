---
title: "nearbyint, nearbyintf, nearbyintl"
description: "API reference for nearbyint, nearbyintf, and nearbyintl; which rounds the specified floating-point value to an integer, and returns that value in a floating-point format."
ms.date: "9/1/2020"
api_name: ["nearbyint", "nearbyintf", "nearbyintl", "_o_nearbyint", "_o_nearbyintf", "_o_nearbyintl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["nearbyint", "nearbyintf", "nearbyintl", "math/nearbyint", "math/narbyintf", "math/narbyintl"]
helpviewer_keywords: ["nearbyint function", "nearbyintf function", "nearbyintl function"]
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
---
# `nearbyint`, `nearbyintf`, `nearbyintl`

Rounds the specified floating-point value to an integer, and returns that value in a floating-point format.

## Syntax

```C
double nearbyint( double x );
float nearbyintf( float x );
long double nearbyintl( long double x );
#define nearbyint( X ) // Requires C11 or higher

float nearbyint( float x ); //C++ only
long double nearbyint( long double x ); //C++ only
```

### Parameters

*`x`*\
The value to round.

## Return value

If successful, returns *`x`*, rounded to the nearest integer, using the current rounding format as reported by [`fegetround`](fegetround-fesetround2.md). Otherwise, the function may return one of the following values:

| Issue | Return |
|---|---|
| *`x`* = ±INFINITY | ±INFINITY, unmodified |
| *`x`* = ±0 | ±0, unmodified |
| *`x`* = NaN | NaN |

Errors aren't reported through [`_matherr`](matherr.md); specifically, this function doesn't report any `FE_INEXACT` exceptions.

## Remarks

The primary difference between this function and [`rint`](rint-rintf-rintl.md) is that this function doesn't raise the inexact floating point exception.

Because the maximum floating-point values are exact integers, this function will never overflow by itself; rather, the output may overflow the return value, depending on which version of the function you use.

C++ allows overloading, so you can call overloads of **`nearbyint`** that take and return **`float`** or **`long double`** parameters. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`nearbyint`** always takes two double values and returns a double value.

If you use the \<tgmath.h> `nearbyint()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`nearbyint`**, **`nearbyintf`**, **`nearbyintl`** | \<math.h> | \<cmath> or \<math.h> |
| **`nearbyint`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[Math and floating-point support](../floating-point-support.md)
