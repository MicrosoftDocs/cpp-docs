---
title: "atanh, atanhf, atanhl"
description: "API reference for atanh, atanhf, and atanhl; which calculate the inverse hyperbolic tangent of a floating-point value."
ms.date: "08/31/2020"
api_name: ["atanhl", "atanhf", "atanh", "_o_atanh", "_o_atanhf", "_o_atanhl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["atanhl", "atanhf", "atanh"]
helpviewer_keywords: ["atanhf function", "atanhl function", "atanh funciton"]
ms.assetid: 83a43b5b-2580-4461-854f-dc84236d9f32
---
# `atanh`, `atanhf`, `atanhl`

Calculates the inverse hyperbolic tangent.

## Syntax

```C
double atanh( double x );
float atanhf( float x );
long double atanhl( long double x );
#define atanh(X) // Requires C11 or higher

float atanh( float x );  // C++ only
long double atanh( long double x );  // C++ only
```

### Parameters

*`x`*\
Floating-point value.

## Return value

The **`atanh`** functions return the inverse hyperbolic tangent (arc hyperbolic tangent) of *`x`*. If *`x`* is greater than 1, or less than -1, `errno` is set to `EDOM` and the result is a quiet NaN. If *`x`* is equal to 1 or -1, a positive or negative infinity is returned, respectively, and `errno` is set to `ERANGE`.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | none |
| *`X`* ≥ 1; *`x`* ≤ -1 | none | none |

## Remarks

Because C++ allows overloading, you can call overloads of **`atanh`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`atanh`** always takes and returns **`double`**.

If you use the \<tgmath.h> `atanh()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`atanh`**, **`atanhf`**, **`atanhl`** | \<math.h> | \<cmath> or \<math.h> |
| **`atanh`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_atanh.c
// This program displays the hyperbolic tangent of pi / 4
// and the arc hyperbolic tangent of the result.
//

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = tanh( pi / 4 );
   y = atanh( x );
   printf( "tanh( %f ) = %f\n", pi/4, x );
   printf( "atanh( %f ) = %f\n", x, y );
}
```

```Output
tanh( 0.785398 ) = 0.655794
atanh( 0.655794 ) = 0.785398
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acosh`, `acoshf`, `acoshl`](acosh-acoshf-acoshl.md)\
[`asinh`, `asinhf`, `asinhl`](asinh-asinhf-asinhl.md)\
[`cosh`, `coshf`, `coshl`](cosh-coshf-coshl.md)\
[`sinh`, `sinhf`, `sinhl`](sinh-sinhf-sinhl.md)\
[`tanh`, `tanhf`, `tanhl`](tanh-tanhf-tanhl.md)
