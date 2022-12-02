---
title: "floor, floorf, floorl"
description: "API reference for floor, floorf, and floorl; which calculates the floor of a value." 
ms.date: "9/1/2020"
api_name: ["floorf", "floorl", "floor", "_o_floor", "_o_floorf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["floor", "floorl", "_floorl", "floorf"]
helpviewer_keywords: ["floor function", "floorf function", "calculating floors of values", "floorl function"]
ms.assetid: e9955f70-d659-414f-8050-132e13c8ff36
---
# `floor`, `floorf`, `floorl`

Calculates the floor of a value.

## Syntax

```C
double floor(
   double x
);
float floor(
   float x
); // C++ only
long double floor(
   long double x
); // C++ only
float floorf(
   float x
);
long double floorl(
   long double x
);
#define floor(X) // Requires C11 or higher
```

### Parameters

*`x`*\
Floating-point value.

## Return value

The **`floor`** functions return a floating-point value that represents the largest integer that is less than or equal to *`x`*. There's no error return.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |

**`floor`** has an implementation that uses Streaming SIMD Extensions 2 (SSE2). For information and restrictions about using the SSE2 implementation, see [`_set_SSE2_enable`](set-sse2-enable.md).

## Remarks

C++ allows overloading, so you can call overloads of **`floor`** that take and return **`float`** and **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`floor`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `floor()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`floor`**, **`floorf`**, **`floorl`** | \<math.h> |
| **`floor`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_floor.c
// This example displays the largest integers
// less than or equal to the floating-point values 2.8
// and -2.8. It then shows the smallest integers greater
// than or equal to 2.8 and -2.8.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double y;

   y = floor( 2.8 );
   printf( "The floor of 2.8 is %f\n", y );
   y = floor( -2.8 );
   printf( "The floor of -2.8 is %f\n", y );

   y = ceil( 2.8 );
   printf( "The ceil of 2.8 is %f\n", y );
   y = ceil( -2.8 );
   printf( "The ceil of -2.8 is %f\n", y );
}
```

```Output
The floor of 2.8 is 2.000000
The floor of -2.8 is -3.000000
The ceil of 2.8 is 3.000000
The ceil of -2.8 is -2.000000
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ceil`, `ceilf`, `ceill`](ceil-ceilf-ceill.md)\
[`round`, `roundf`, `roundl`](round-roundf-roundl.md)\
[`fmod`, `fmodf`](fmod-fmodf.md)
