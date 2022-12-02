---
title: "lround, lroundf, lroundl, llround, llroundf, llroundl"
description: "API reference for lround, lroundf, lroundl, llround, llroundf, and llroundl; which rounds a floating-point value to the nearest integer."
ms.date: "9/1/2020"
api_name: ["llround", "llroundf", "llroundl", "lroundf", "lround", "lroundl", "_o_llround", "_o_llroundf", "_o_llroundl", "_o_lround", "_o_lroundf", "_o_lroundl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["lround", "lroundl", "llroundl", "llround", "lroundf", "llroundf"]
helpviewer_keywords: ["lround function", "llroundl function", "llround function", "lroundf function", "llroundf function", "lroundl function"]
ms.assetid: cfb88a35-54c6-469f-85af-f7d695dcfdd8
---
# `lround`, `lroundf`, `lroundl`, `llround`, `llroundf`, `llroundl`

Rounds a floating-point value to the nearest integer.

## Syntax

```C
long lround(
   double x
);
long lround(
   float x
);  // C++ only
long lround(
   long double x
);  // C++ only
long lroundf(
   float x
);
long lroundl(
   long double x
);
long long llround(
   double x
);
long long llround(
   float x
);  // C++ only
long long llround(
   long double x
);  // C++ only
long long llroundf(
   float x
);
long long llroundl(
   long double x
);
#define lround(X) // Requires C11 or higher
```

### Parameters

*`x`*\
The floating-point value to round.

## Return value

The **`lround`** and **`llround`** functions return the nearest **`long`** or **`long long`** integer to *`x`*. Halfway values are rounded away from zero, regardless of the setting of the floating-point rounding mode. There's no error return.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |

## Remarks

Because C++ allows overloading, you can call **`lround`** or **`llround`** overloads that take and return **`float`** and **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`lround`** and **`llround`** always take and return a **`double`**.

If you use the \<tgmath.h> `lround()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`lround`**, **`lroundf`**, **`lroundl`**, **`llround`**, **`llroundf`**, **`llroundl`** | \<math.h> |
| **`lround`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_lround.c
// Build with: cl /W4 /Tc crt_lround.c
// This example displays the rounded results of
// the floating-point values 2.499999, -2.499999,
// 2.8, -2.8, 3.5 and -3.5.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.499999;
   float y = 2.8f;
   long double z = 3.5L;

   printf("lround(%f) is %d\n", x, lround(x));
   printf("lround(%f) is %d\n", -x, lround(-x));
   printf("lroundf(%f) is %d\n", y, lroundf(y));
   printf("lroundf(%f) is %d\n", -y, lroundf(-y));
   printf("lroundl(%Lf) is %d\n", z, lroundl(z));
   printf("lroundl(%Lf) is %d\n", -z, lroundl(-z));
}
```

```Output
lround(2.499999) is 2
lround(-2.499999) is -2
lroundf(2.800000) is 3
lroundf(-2.800000) is -3
lroundl(3.500000) is 4
lroundl(-3.500000) is -4
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ceil`, `ceilf`, `ceill`](ceil-ceilf-ceill.md)\
[`floor`, `floorf`, `floorl`](floor-floorf-floorl.md)\
[`fmod`, `fmodf`](fmod-fmodf.md)\
[`lrint`, `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)\
[`round`, `roundf`, `roundl`](round-roundf-roundl.md)\
[`nearbyint`, `nearbyintf`, `nearbyintl`](nearbyint-nearbyintf-nearbyintl1.md)\
[`rint`, `rintf`, `rintl`](rint-rintf-rintl.md)
