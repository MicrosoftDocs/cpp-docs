---
title: "cosh, coshf, coshl"
description: "API reference for cosh, coshf, and coshl; which calculate the hyperbolic cosine of a floating-point value."
ms.date: "1/15/2021"
api_name: ["cosh", "coshf", "coshl", "_o_cosh", "_o_coshf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cosh", "coshf", "coshl"]
helpviewer_keywords: ["cosh function", "coshf function", "coshl function", "trigonometric functions", "hyperbolic functions"]
---
# `cosh`, `coshf`, `coshl`

Calculates the hyperbolic cosine.

## Syntax

```C
double cosh( double x );
float coshf( float x );
long double coshl( long double x );
#define cosh(X) // Requires C11 or higher

float cosh( float x );  // C++ only
long double cosh( long double x );  // C++ only
```

### Parameters

*`x`*\
Angle in radians.

## Return value

The hyperbolic cosine of *`x`*.

By default, if the result is too large in a **`cosh`**, **`coshf`**, or **`coshl`** call, the function returns `HUGE_VAL` and sets `errno` to `ERANGE`.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |
| *`x`* ≥ 7.104760e+002 | `INEXACT`+`OVERFLOW` | `OVERFLOW` |

## Remarks

Because C++ allows overloading, you can call overloads of **`cosh`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`cosh`** always takes and returns a **`double`**.

If you use the `cosh` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header (C) | Required header (C++) |
|---|---|---|
| **`coshf`**, **`cosl`**, **`coshl`** | `<math.h>` | `<cmath>` or `<math.h>` |
| **`coshf`** macro | `<tgmath.h>` |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example in [`sinh`, `sinhf`, `sinhl`](sinh-sinhf-sinhl.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acosh`, `acoshf`, `acoshl`](acosh-acoshf-acoshl.md)\
[`asinh`, `asinhf`, `asinhl`](asinh-asinhf-asinhl.md)\
[`atanh`, `atanhf`, `atanhl`](atanh-atanhf-atanhl.md)\
[`_matherr`](matherr.md)\
[`sinh`, `sinhf`, `sinhl`](sinh-sinhf-sinhl.md)\
[`tanh`, `tanhf`, `tanhl`](tanh-tanhf-tanhl.md)
