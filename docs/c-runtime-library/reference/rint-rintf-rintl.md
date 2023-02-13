---
title: "rint, rintf, rintl"
description: "API reference for rint, rintf, and rintl; which round a floating-point value to the nearest integer in floating-point format."
ms.date: "9/1/2020"
api_name: ["rintf", "rintl", "rint", "_o_rint", "_o_rintf", "_o_rintl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["rintf", "rintl", "rint"]
helpviewer_keywords: ["rintf function", "rint function", "rintl function"]
ms.assetid: 312ae3e6-278c-459a-9393-11b8f87d9184
---
# `rint`, `rintf`, `rintl`

Rounds a floating-point value to the nearest integer in floating-point format.

## Syntax

```C
double rint( double x );
float rintf( float x );
long double rintl( long double x );
#define rint(X) // Requires C11 or higher

float rint( float x );  // C++ only
long double rint( long double x );  // C++ only
```

### Parameters

*`x`*\
The floating-point value to round.

## Return value

The **`rint`** functions return a floating-point value that represents the nearest integer to *`x`*. Halfway values are rounded according to the current setting of the floating-point rounding mode, the same as the `nearbyint` functions. Unlike the `nearbyint` functions, the **`rint`** functions may raise the `FE_INEXACT` floating-point exception if the result differs in value from the argument. There's no error return.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± INF, QNaN, IND | none | none |
| Denormals | `EXCEPTION_FLT_UNDERFLOW` | none |

## Remarks

Because C++ allows overloading, you can call overloads of **`rint`** that take and return **`float`** and **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`rint`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `rint()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`rint`**, **`rintf`**, **`rintl`** | \<math.h> | \<cmath> |
| **`rint`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_rint.c
// Build with: cl /W3 /Tc crt_rint.c
// This example displays the rounded results of
// the floating-point values 2.499999, -2.499999,
// 2.8, -2.8, 2.5 and -2.5.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.499999;
   float y = 2.8f;
   long double z = 2.5;

   printf("rint(%f) is %.0f\n", x, rint (x));
   printf("rint(%f) is %.0f\n", -x, rint (-x));
   printf("rintf(%f) is %.0f\n", y, rintf(y));
   printf("rintf(%f) is %.0f\n", -y, rintf(-y));
   printf("rintl(%Lf) is %.0Lf\n", z, rintl(z));
   printf("rintl(%Lf) is %.0Lf\n", -z, rintl(-z));
}
```

```Output
rint(2.499999) is 2
rint(-2.499999) is -2
rintf(2.800000) is 3
rintf(-2.800000) is -3
rintl(2.500000) is 3
rintl(-2.500000) is -3
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ceil`, `ceilf`, `ceill`](ceil-ceilf-ceill.md)\
[`floor`, `floorf`, `floorl`](floor-floorf-floorl.md)\
[`fmod`, `fmodf`](fmod-fmodf.md)\
[`lrint`, `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)\
[`lround`, `lroundf`, `lroundl`, `llround`, `llroundf`, `llroundl`](lround-lroundf-lroundl-llround-llroundf-llroundl.md)\
[`nearbyint`, `nearbyintf`, `nearbyintl`](nearbyint-nearbyintf-nearbyintl1.md)\
[`rint`](rint-rintf-rintl.md)
