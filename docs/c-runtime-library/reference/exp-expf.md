---
title: "exp, expf, expl"
description: "API reference for exp, expf, and expl; which calculate the exponential."
ms.date: "1/15/2021"
api_name: ["expf", "expl", "exp", "_o_exp", "_o_expf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_expl", "expf", "expl", "exp"]
helpviewer_keywords: ["exponential calculations", "expf function", "expl function", "calculating exponentials", "exp function"]
---
# `exp`, `expf`, `expl`

Calculates the exponential.

## Syntax

```C
double exp(
   double x
);
float exp(
   float x
);  // C++ only
long double exp(
   long double x
);  // C++ only
float expf(
   float x
);
long double expl(
   long double x
);
#define exp(z) // Requires C11 or higher
```

### Parameters

*`x`*\
The floating-point value to exponentiate the natural logarithm base *e* by.

## Return value

The **`exp`** functions return the exponential value of the floating-point parameter, *`x`*, if successful. That is, the result is *e*<sup>*`x`*</sup>, where *e* is the base of the natural logarithm. On overflow, the function returns `INF` (infinity) and on underflow, **`exp`** returns 0.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± Quiet NaN, indeterminate | None | `_DOMAIN` |
| ± Infinity | `INVALID` | `_DOMAIN` |
| *`x`* ≥ 7.097827e+002 | `INEXACT`+`OVERFLOW` | `OVERFLOW` |
| *`x`* ≤ -7.083964e+002 | `INEXACT`+`UNDERFLOW` | `UNDERFLOW` |

The **`exp`** function has an implementation that uses Streaming SIMD Extensions 2 (SSE2). See [`_set_SSE2_enable`](set-sse2-enable.md) for information and restrictions on using the SSE2 implementation.

## Remarks

C++ allows overloading, so you can call overloads of **`exp`** that take a **`float`** or **`long double`** argument. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`exp`** always takes and returns a **`double`**.

If you use the `exp` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required C header | Required C++ header |
|---|---|---|
| **`exp`**, **`expf`**, **`expl`** | `<math.h>` | `<cmath>` or `<math.h>` |
| **`exp`** macro | `<tgmath.h>` |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_exp.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.302585093, y;

   y = exp( x );
   printf( "exp( %f ) = %f\n", x, y );
}
```

```Output
exp( 2.302585 ) = 10.000000
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`log`, `logf`, `log10`, `log10f`](log-logf-log10-log10f.md)\
[`_CIexp`](../ciexp.md)
