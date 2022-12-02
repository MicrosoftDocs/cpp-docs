---
title: "fmod, fmodf, fmodl"
description: "API reference for fmod, fmodf, and fmodl; which calculates the floating-point remainder."
ms.date: "1/15/2021"
api_name: ["fmod", "fmodf", "fmodl", "_o_fmod", "_o_fmodf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fmod", "_fmodl", "fmodf"]
helpviewer_keywords: ["calculating floating-point remainders", "fmodf function", "fmodl function", "fmod function", "floating-point numbers, calculating remainders"]
---
# `fmod`, `fmodf`, `fmodl`

Calculates the floating-point remainder.

## Syntax

```C
double fmod(
   double x,
   double y
);
float fmod(
   float x,
   float y
);  // C++ only
long double fmod(
   long double x,
   long double y
);  // C++ only
float fmodf(
   float x,
   float y
);
long double fmodl(
   long double x,
   long double y
);

#define fmod(X, Y) // Requires C11 or higher
```

### Parameters

*`x`*, *`y`*\
Floating-point values.

## Return value

**`fmod`** returns the floating-point remainder of `x / y`. If the value of *`y`* is 0.0, **`fmod`** returns a quiet `NaN`. For information about representation of a quiet `NaN` by the **`printf`** family, see [`printf`](printf-printf-l-wprintf-wprintf-l.md).

## Remarks

The **`fmod`** function calculates the floating-point remainder *`f`* of `x / y` such that `x = i * y + f`, where *`i`* is an integer, *`f`* has the same sign as *`x`*, and the absolute value of *`f`* is less than the absolute value of *`y`*.

C++ allows overloading, so you can call overloads of **`fmod`** that take and return **`float`** and **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`fmod`** always takes two **`double`** arguments and returns a **`double`**.

If you use the `fmod` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`fmod`**, **`fmodf`**, **`fmodl`** | `<math.h>` |
| **`fmod`** macro | `<tgmath.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fmod.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;

   z = fmod( w, x );
   printf( "The remainder of %.2f / %.2f is %f\n", w, x, z );
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ceil`, `ceilf`, `ceill`](ceil-ceilf-ceill.md)\
[`fabs`, `fabsf`, `fabsl`](fabs-fabsf-fabsl.md)\
[`floor`, `floorf`, `floorl`](floor-floorf-floorl.md)\
[`_CIfmod`](../cifmod.md)
