---
title: "remainder, remainderf, remainderl"
description: "API reference for remainder, remainderf, and remainderl; which compute the remainder of the quotient of two floating-point values, rounded to the nearest integral value."
ms.date: "9/1/2020"
api_name: ["remainderl", "remainder", "remainderf", "_o_remainder", "_o_remainderf", "_o_remainderl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["remainderf", "remainder", "remainderl"]
helpviewer_keywords: ["remainderf", "remainderl", "remainder"]
ms.assetid: 5f721fb3-8b78-4597-9bc0-ca9bcd1f1d0e
---
# `remainder`, `remainderf`, `remainderl`

Computes the remainder of the quotient of two floating-point values, rounded to the nearest integral value.

## Syntax

```C
double remainder( double x, double y );
float remainderf( float x, float y );
long double remainderl( long double x, long double y );
#define remainder(X, Y) // Requires C11 or higher

float remainder( float x, float y ); /* C++ only */
long double remainder( long double x, long double y ); /* C++ only */
```

### Parameters

*`x`*\
The numerator.

*`y`*\
The denominator.

## Return value

The floating-point remainder of *`x`* / *`y`*. If the value of *`y`* is 0.0, **`remainder`** returns a quiet NaN. For information about the representation of a quiet NaN by the `printf` family, see [`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md).

## Remarks

The **`remainder`** functions calculate the floating-point remainder `r` of `x / y` such that `x = n * y + r`, where `n` is the integer nearest in value to `x / y` and `n` is even whenever `|n - x / y| = 1/2`. When `r = 0`, `r` has the same sign as *`x`*.

Because C++ allows overloading, you can call overloads of **`remainder`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`remainder`** always takes two **`double`** arguments and returns a **`double`**.

If you use the \<tgmath.h> `remainder()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header (C) | Required header (C++) |
|---|---|---|
| **`remainder`**, **`remainderf`**, **`remainderl`** | \<math.h> | \<cmath> or \<math.h> |
| **`remainder`** macro | \<tgmath.h> |  |

For compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_remainder.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;

   z = remainder(w, x);
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ldiv`, `lldiv`](./div.md)\
[`imaxdiv`](imaxdiv.md)\
[`fmod`, `fmodf`](fmod-fmodf.md)\
[`remquo`, `remquof`, `remquol`](remquo-remquof-remquol.md)
