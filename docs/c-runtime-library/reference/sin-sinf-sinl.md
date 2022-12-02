---
title: "sin, sinf, sinl"
description: "API reference for sin, sinf, and sinl; which calculate the sine of a floating-point value."
ms.date: "08/31/2020"
api_name: ["sinl", "sinf", "sin", "_o_sin", "_o_sinf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_sinl", "sinf", "sinl", "sin"]
helpviewer_keywords: ["_sinl function", "sinl function", "calculating sines", "sin function", "trigonometric functions", "sinf function"]
---
# `sin`, `sinf`, `sinl`

Calculates the sine of a floating-point value.

## Syntax

```C
double sin(double x);
float sinf(float x);
long double sinl(long double x);
#define sin(x) // Requires C11 or higher
```

```cpp
float sin(float x);  // C++ only
long double sin(long double x);  // C++ only
```

### Parameters

*`x`*\
Angle in radians.

## Return value

The **`sin`** functions return the sine of *`x`*. If *`x`* is greater than or equal to 263, or less than or equal to -263, a loss of significance in the result occurs.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | None | `_DOMAIN` |
| ± INF (`sin`, `sinf`, `sinl`) | `INVALID` | `_DOMAIN` |

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`sin`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`sin`** always takes and returns **`double`**.

If you use the `<tgmath.h> sin()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header (C) | Required header (C++) |
|---|---|---|
| **`sin`**, **`sinf`**, **`sinl`** | `<math.h>` | `<cmath>` or `<math.h>` |
| **`sin`** macro | `<tgmath.h>` |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_sincos.c
// This program displays the sine and cosine of pi / 2.
// Compile by using: cl /W4 crt_sincos.c

#include <math.h>
#include <stdio.h>

int main( void)
{
   double pi = 3.1415926535;
   double x, y;

   x = pi / 2;
   y = sin( x );
   printf( "sin( %f ) = %f\n", x, y );
   y = cos( x );
   printf( "cos( %f ) = %f\n", x, y );
}
```

```Output
sin( 1.570796 ) = 1.000000
cos( 1.570796 ) = 0.000000
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acos`, `acosf`, `acosl`](acos-acosf-acosl.md)\
[`asin`, `asinf`, `asinl`](asin-asinf-asinl.md)\
[`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`cos`, `cosf`, `cosl`](cos-cosf-cosl.md)\
[`tan`, `tanf`, `tanl`](tan-tanf-tanl.md)\
[`_CIsin`](../cisin.md)\
