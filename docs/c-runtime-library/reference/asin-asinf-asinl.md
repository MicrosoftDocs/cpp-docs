---
title: "asin, asinf, asinl"
description: "API reference for asin, asinf, and asinl; which calculate the arcsine of a floating-point value."
ms.date: "1/15/2021"
api_name: ["asinf", "asinl", "asin", "_o_asin", "_o_asinf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["asin", "asinl", "asinf"]
helpviewer_keywords: ["asin function", "asinl function", "asinf function", "trigonometric functions", "arcsine function"]
---
# `asin`, `asinf`, `asinl`

Calculates the arcsine.

## Syntax

```C
double asin( double x );
float asinf ( float x );
long double asinl( long double x );
#define asin(X) // Requires C11 or higher

float asin( float x );  // C++ only
long double asin( long double x );  // C++ only
```

### Parameters

*`x`*\
Value whose arcsine is to be calculated.

## Return value

The **`asin`** function returns the arcsine (the inverse sine function) of *`x`* in the range -π/2 to π/2 radians.

By default, if *`x`* is less than -1 or greater than 1, **`asin`** returns an indefinite.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± INF | `INVALID` | `_DOMAIN` |
| ± QNaN, IND | none | `_DOMAIN` |
| `|x| > 1` | `INVALID` | `_DOMAIN` |

## Remarks

Because C++ allows overloading, you can call overloads of **`asin`** with **`float`** and **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`asin`** always takes and returns a **`double`**.

If you use the `asin` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header (C) | Required header (C++) |
|---|---|---|
| **`asin`**, **`asinf`**, **`asinl`** | `<math.h>` | `<cmath>` or `<math.h>` |
| **`asin`** macro | `<tgmath.h>` |  |

## Example

For more information, see [`acos`, `acosf`, `acosl`](acos-acosf-acosl.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acos`, `acosf`, `acosl`](acos-acosf-acosl.md)\
[`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`cos`, `cosf`, `cosl`](cos-cosf-cosl.md)\
[`_matherr`](matherr.md)\
[`sin`, `sinf`, `sinl`](sin-sinf-sinl.md)\
[`tan`, `tanf`, `tanl`](tan-tanf-tanl.md)
