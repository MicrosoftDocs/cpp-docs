---
title: "sinh, sinhf, sinhl"
description: "API reference for calculating the hyperbolic sine of a floating-point value."
ms.date: "1/15/2021"
api_name: ["sinh", "sinhl", "sinhf", "sinhl", "_o_sinh", "_o_sinhf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["sinh", "sinhf", "sinhl"]
helpviewer_keywords: ["sinh function", "sinhl function", "sinhf function", "calculating hyperbolic sines", "trigonometric functions", "sinhf function", "sinhl function", "hyperbolic functions"]
---
# `sinh`, `sinhf`, `sinhl`

Calculates the hyperbolic sine.

## Syntax

```C
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
#define sinh(x) // Requires C11 or higher

float sinh(float x);  // C++ only
long double sinh(long double x);  // C++ only
```

### Parameters

*`x`*\
Angle in radians.

## Return value

The **`sinh`** functions return the hyperbolic sine of *`x`*. By default, if the result is too large, **`sinh`** sets `errno` to `ERANGE` and returns ±`HUGE_VAL`.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | None | `_DOMAIN` |
| `|x| ≥ 7.104760e+002` | `OVERFLOW`+`INEXACT` | `OVERFLOW` |

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`sinh`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`sinh`** always takes and returns **`double`**.

If you use the `sinh` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header (C) | Required header (C++) |
|---|---|---|
| **`sinh`**, **`sinhf`**, **`sinhl`** | `<math.h>` | `<cmath>` or `<math.h>` |
| **`sinh`** macro | `<tgmath.h>` |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_sinhcosh.c
// This program displays the hyperbolic
// sine and hyperbolic cosine of pi / 2.
// Compile by using: cl /W4 crt_sinhcosh.c

#include <math.h>
#include <stdio.h>

int main( void)
{
   double pi = 3.1415926535;
   double x, y;

   x = pi / 2;
   y = sinh( x );
   printf( "sinh( %f ) = %f\n",x, y );
   y = cosh( x );
   printf( "cosh( %f ) = %f\n",x, y );
}
```

```Output
sinh( 1.570796 ) = 2.301299
cosh( 1.570796 ) = 2.509178
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acosh`, `acoshf`, `acoshl`](acosh-acoshf-acoshl.md)\
[`asinh`, `asinhf`, `asinhl`](asinh-asinhf-asinhl.md)\
[`atanh`, `atanhf`, `atanhl`](atanh-atanhf-atanhl.md)\
[`cosh`, `coshf`, `coshl`](cosh-coshf-coshl.md)\
[`tanh`, `tanhf`, `tanhl`](tanh-tanhf-tanhl.md)
