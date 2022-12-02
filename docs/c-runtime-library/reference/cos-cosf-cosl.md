---
title: "cos, cosf, cosl"
description: "API reference for cos, cosf, and cosl; which calculate the cosine value of a floating-point number."
ms.date: "08/31/2020"
api_name: ["cos", "cosf", "cosl", "_o_cos", "_o_cosf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cos", "cosf", "cosl"]
helpviewer_keywords: ["cosines", "cosl function", "calculating cosine", "cosf function", "cos function", "trigonometric functions", "cosines, calculating"]
ms.assetid: ae90435e-6b68-4a47-a81f-be87d5c08f16
---
# `cos`, `cosf`, `cosl`

Calculates the cosine.

## Syntax

```C
double cos( double x );
float cosf( float x );
long double cosl( long double x );
#define cos(X) // Requires C11 or higher

float cos( float x );  // C++ only
long double cos( long double x );  // C++ only
```

### Parameters

*`x`*\
Angle in radians.

## Return value

The cosine of *`x`*. If *`x`* is greater than or equal to 263, or less than or equal to -263, a loss of significance in the result occurs.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |
| ± INF | `INVALID` | `_DOMAIN` |

## Remarks

Because C++ allows overloading, you can call overloads of **`cos`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`cos`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `cos()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required C header | Required C++ header |
|---|---|---|
| **`cos`**, **`cosh`**, **`cosf`** | \<math.h> | \<cmath> or \<math.h> |
| **cos()** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example in [`sin`, `sinf`, `sinl`](sin-sinf-sinl.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`acos`, `acosf`, `acosl`](acos-acosf-acosl.md)\
[`asin`, `asinf`, `asinl`](asin-asinf-asinl.md)\
[`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`_matherr`](matherr.md)\
[`sin`, `sinf`, `sinl`](sin-sinf-sinl.md)\
[`tan`, `tanf`, `tanl`](tan-tanf-tanl.md)
