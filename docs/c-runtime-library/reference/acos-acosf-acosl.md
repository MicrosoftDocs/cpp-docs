---
title: "acos, acosf, acosl"
description: "API reference for acos, acosf, and acosl; which calculate the arccosine of a floating-point value."
ms.date: "1/15/2021"
api_name: ["acosf", "acos", "acosl", "_o_acos", "_o_acosf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["acos", "CMATH/acos", "CORECRT_MATH/acos", "acosl", "CORECRT_MATH/acosl", "acosf", "CORECRT_MATH/acosf"]
helpviewer_keywords: ["acos function", "acosl function", "acosf function", "trigonometric functions", "arccosine function"]
---
# `acos`, `acosf`, `acosl`

Calculates the arccosine.

## Syntax

```C
double acos( double x );
float acosf( float x );
long double acosl( long double x );
#define acos(X) // Requires C11 or higher

float acos( float x );   // C++ only
long double acos( long double x );   // C++ only
```

### Parameters

*`x`*\
Value between -1 and 1, for which to calculate the arccosine (the inverse cosine).

## Return value

The **`acos`** function returns the arccosine of *`x`* in the range 0 to π radians.

By default, if *`x`* is less than -1 or greater than 1, **`acos`** returns an indefinite.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± INF | `INVALID` | `_DOMAIN` |
| ± QNaN, IND | none | `_DOMAIN` |
| `|x| > 1` | `INVALID` | `_DOMAIN` |

## Remarks

Because C++ allows overloading, you can call overloads of **`acos`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`acos`** always takes and returns a **`double`**.

If you use the `acos` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`acos`**, **`acosf`**, **`acosl`** | `<math.h>` | `<errno.h>` |
| **`acos`** macro | `<tgmath.h>` |  |

## Example

This program prompts for a value in the range -1 to 1. Input values outside this range produce `_DOMAIN` error messages. If a valid value is entered, the program prints the arcsine and the arccosine of that value.

```C
// crt_asincos.c
// arguments: 0

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main( int ac, char* av[] )
{
    double  x,
            y;
    errno_t err;

    // argument checking
    if (ac != 2)
    {
        fprintf_s( stderr, "Usage: %s <number between -1 and 1>\n",
                   av[0]);
        return 1;
    }

    // Convert argument into a double value
    if ((err = sscanf_s( av[1], "%lf", &x )) != 1)
    {
        fprintf_s( stderr, "Error converting argument into ",
                   "double value.\n");
        return 1;
    }

    // Arcsine of X
    y = asin( x );
    printf_s( "Arcsine of %f = %f\n", x, y );

    // Arccosine of X
    y = acos( x );
    printf_s( "Arccosine of %f = %f\n", x, y );
}
```

```Output
Arcsine of 0.000000 = 0.000000
Arccosine of 0.000000 = 1.570796
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`asin`, `asinf`, `asinl`](asin-asinf-asinl.md)\
[`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`cos`, `cosf`, `cosl`](cos-cosf-cosl.md)\
[`_matherr`](matherr.md)\
[`sin`, `sinf`, `sinl`](sin-sinf-sinl.md)\
[`tan`, `tanf`, `tanl`](tan-tanf-tanl.md)
