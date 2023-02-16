---
title: "tanh, tanhf, tanhl"
description: "API reference for tanh, tanhf, and tanhl; which calculate the hyperbolic tangent of a floating-point value."
ms.date: "1/15/2021"
api_name: ["tanh", "tanhf", "tanhl", "_o_tanh", "_o_tanhf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_MATH/tanh", "CORECRT_MATH/tanhf", "CORECRT_MATH/tanhl", "tanh", "tanhf", "tanhl"]
helpviewer_keywords: ["tanhl function", "tanh function", "tanhf function", "trigonometric functions", "hyperbolic functions"]
---
# `tanh`, `tanhf`, `tanhl`

Calculates the hyperbolic tangent.

## Syntax

```C
double tanh( double x );
float tanhf( float x );
long double tanhl( long double x );
#define tanh(x) // Requires C11 or higher
```

```cpp
float tanh( float x );  // C++ only
long double tanh( long double x );  // C++ only
```

### Parameters

*`x`*\
Angle in radians.

## Return value

The **`tanh`** functions return the hyperbolic tangent of *`x`*. There's no error return.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |

## Remarks

Because C++ allows overloading, you can call overloads of **`tanh`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`tanh`** always takes and returns **`double`**.

If you use the `tanh` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header (C) | Required header (C) |
|---|---|---|
| **`tanh`**, **`tanhf`**, **`tanhl`** | `<math.h>` | `<cmath>` or `<math.h>` |
| **`tanh`** macro | `<tgmath.h>` |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_tanh.c
// This program displays the tangent of pi / 4
// and the hyperbolic tangent of the result.
// Compile by using: cl crt_tanh.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = tan( pi / 4 );
   y = tanh( x );
   printf( "tan( %f ) = %f\n", pi/4, x );
   printf( "tanh( %f ) = %f\n", x, y );
}
```

```Output
tan( 0.785398 ) = 1.000000
tanh( 1.000000 ) = 0.761594
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acosh`, `acoshf`, `acoshl`](acosh-acoshf-acoshl.md)\
[`asinh`, `asinhf`, `asinhl`](asinh-asinhf-asinhl.md)\
[`atanh`, `atanhf`, `atanhl`](atanh-atanhf-atanhl.md)\
[`cosh`, `coshf`, `coshl`](cosh-coshf-coshl.md)\
[`sinh`, `sinhf`, `sinhl`](sinh-sinhf-sinhl.md)
