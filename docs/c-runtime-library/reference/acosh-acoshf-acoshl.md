---
title: "acosh, acoshf, acoshl"
description: "API reference for acosh, acoshf, and acoshl; which calculate the inverse hyperbolic cosine of a floating-point value."
ms.date: "08/31/2020"
api_name: ["acoshf", "acosh", "acoshl", "_o_acosh", "_o_acoshf", "_o_acoshl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["acosh", "acoshf", "acoshl", "math/acosh", "math/acoshf", "math/acoshl"]
helpviewer_keywords: ["acoshf function", "acosh function", "acoshl function"]
ms.assetid: 6985c4d7-9e2a-44ce-9a9b-5a43015f15f7
---
# `acosh`, `acoshf`, `acoshl`

Calculates the inverse hyperbolic cosine.

## Syntax

```C
double acosh( double x );
float acoshf( float x );
long double acoshl( long double x );
#define acosh(X) // Requires C11 or higher

float acosh( float x );  // C++ only
long double acosh( long double x );  // C++ only
```

### Parameters

*`x`*\
Floating-point value.

## Return value

The **`acosh`** functions return the inverse hyperbolic cosine (arc hyperbolic cosine) of *`x`*. These functions are valid over the domain *`x`* ≥ 1. If *`x`* is less than 1, `errno` is set to `EDOM`, and the result is a quiet NaN. If *`x`* is a quiet NaN, indefinite, or infinity, the same value is returned.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND, INF | none | none |
| *`x`* < 1 | none | none |

## Remarks

When you use C++, you can call overloads of **`acosh`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`acosh`** always takes and returns **`double`**.

If you use the \<tgmath.h> `acosh()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`acosh`**, **`acoshf`**, **`acoshl`** | \<math.h> | \<cmath> |
| **`acosh`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_acosh.c
// Compile by using: cl /W4 crt_acosh.c
// This program displays the hyperbolic cosine of pi / 4
// and the arc hyperbolic cosine of the result.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = cosh( pi / 4 );
   y = acosh( x );
   printf( "cosh( %f ) = %f\n", pi/4, x );
   printf( "acosh( %f ) = %f\n", x, y );
}
```

```Output
cosh( 0.785398 ) = 1.324609
acosh( 1.324609 ) = 0.785398
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`asinh`, `asinhf`, `asinhl`](asinh-asinhf-asinhl.md)\
[`atanh`, `atanhf`, `atanhl`](atanh-atanhf-atanhl.md)\
[`cosh`, `coshf`, `coshl`](cosh-coshf-coshl.md)\
[`sinh`, `sinhf`, `sinhl`](sinh-sinhf-sinhl.md)\
[`tanh`, `tanhf`, `tanhl`](tanh-tanhf-tanhl.md)
