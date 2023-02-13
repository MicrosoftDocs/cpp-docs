---
title: "asinh, asinhf, asinhl"
description: "API reference for asinh, asinhf, and asinhl; which calculate the inverse hyperbolic sine of a floating-point value."
ms.date: "08/31/2020"
api_name: ["asinh", "asinhf", "asinhl", "_o_asinh", "_o_asinhf", "_o_asinhl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["asinhf", "asinhl", "asinh"]
helpviewer_keywords: ["asinh function", "asinhl function", "asinhf function"]
ms.assetid: 4488babe-1a7e-44ca-8b7b-c2db0a70084f
---
# `asinh`, `asinhf`, `asinhl`

Calculates the inverse hyperbolic sine.

## Syntax

```C
double asinh( double x );
float asinhf( float x );
long double asinhl( long double x );
#define asinh(X) // Requires C11 or higher

float asinh( float x );  // C++ only
long double asinh( long double x );  // C++ only
```

### Parameters

*`x`*\
Floating-point value.

## Return value

The **`asinh`** functions return the inverse hyperbolic sine (arc hyperbolic sine) of *`x`*. This function is valid over the floating-point domain. If *`x`* is a quiet NaN, indefinite, or infinity, the same value is returned.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND, INF | none | none |

## Remarks

When you use C++, you can call overloads of **`asinh`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`asinh`** always takes and returns **`double`**.

If you use the \<tgmath.h> `asinh()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required C header | Required C++ header |
|---|---|---|
| **`asinh`**, **`asinhf`**, **`asinhl`** | \<math.h> | \<cmath> or \<math.h> |
| **asinh()** macro | \<tgmath.h> |  |

For additional compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_asinh.c
// Compile by using: cl /W4 crt_asinh.c
// This program displays the hyperbolic sine of pi / 4
// and the arc hyperbolic sine of the result.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = sinh( pi / 4 );
   y = asinh( x );
   printf( "sinh( %f ) = %f\n", pi/4, x );
   printf( "asinh( %f ) = %f\n", x, y );
}
```

```Output
sinh( 0.785398 ) = 0.868671
asinh( 0.868671 ) = 0.785398
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acosh`, `acoshf`, `acoshl`](acosh-acoshf-acoshl.md)\
[`atanh`, `atanhf`, `atanhl`](atanh-atanhf-atanhl.md)\
[`cosh`, `coshf`, `coshl`](cosh-coshf-coshl.md)\
[`sinh`, `sinhf`, `sinhl`](sinh-sinhf-sinhl.md)\
[`tanh`, `tanhf`, `tanhl`](tanh-tanhf-tanhl.md)
