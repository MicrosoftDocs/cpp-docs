---
title: "hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl"
description: "API reference for hypot, hypotf, hypotl, _hypot, _hypotf, and _hypotl; which calculate the hypotenuse."
ms.date: "9/1/2020"
api_name: ["_hypotf", "hypot", "hypotf", "_hypot", "_hypotl", "hypotl", "_o__hypot", "_o__hypotf", "_o_hypot"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["hypotf", "hypotl", "_hypotl", "hypot", "_hypot", "_hypotf"]
helpviewer_keywords: ["hypotenuse calculation", "hypot function", "hypotf function", "triangles, calculating hypotenuse", "hypotl function", "calculating hypotenuses", "_hypot function"]
ms.assetid: 6a13887f-bd53-43fc-9d77-5b42d6e49925
---
# `hypot`, `hypotf`, `hypotl`, `_hypot`, `_hypotf`, `_hypotl`

Calculates the hypotenuse.

## Syntax

```C
double hypot(
   double x,
   double y
);
float hypotf(
   float x,
   float y
);
long double hypotl(
   long double x,
   long double y
);
double _hypot(
   double x,
   double y
);
float _hypotf(
   float x,
   float y
);
long double _hypotl(
   long double x,
   long double y
);
#define hypotf(X, Y) // Requires C11 or higher
```

### Parameters

*`x`*, *`y`*\
Floating-point values.

## Return value

If successful, **`hypot`** returns the length of the hypotenuse; on overflow, **`hypot`** returns INF (infinity) and the `errno` variable is set to `ERANGE`. You can use `_matherr` to modify error handling.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`hypot`** functions calculate the length of the hypotenuse of a right triangle, given the length of the two sides *`x`* and *`y`* (in other words, the square root of *`x`*<sup>2</sup> + *`y`*<sup>2</sup>).

The versions of the functions that have leading underscores are provided for compatibility with earlier standards. Their behavior is identical to the versions that don't have leading underscores. We recommend using the versions without leading underscores for new code.

If you use the \<tgmath.h> `hypot()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`hypot`**, **`hypotf`**, **`hypotl`**, **`_hypot`**, **`_hypotf`**, **`_hypotl`** | \<math.h> |
| **`hypot`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_hypot.c
// This program prints the hypotenuse of a right triangle.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 3.0, y = 4.0;

   printf( "If a right triangle has sides %2.1f and %2.1f, "
           "its hypotenuse is %2.1f\n", x, y, _hypot( x, y ) );
}
```

```Output
If a right triangle has sides 3.0 and 4.0, its hypotenuse is 5.0
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`_cabs`](cabs.md)\
[`_matherr`](matherr.md)
