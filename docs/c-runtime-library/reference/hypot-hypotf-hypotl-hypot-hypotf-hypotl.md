---
title: "hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl"
ms.date: "04/05/2018"
api_name: ["_hypotf", "hypot", "hypotf", "_hypot", "_hypotl", "hypotl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["hypotf", "hypotl", "_hypotl", "hypot", "_hypot", "_hypotf"]
helpviewer_keywords: ["hypotenuse calculation", "hypot function", "hypotf function", "triangles, calculating hypotenuse", "hypotl function", "calculating hypotenuses", "_hypot function"]
ms.assetid: 6a13887f-bd53-43fc-9d77-5b42d6e49925
---
# hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl

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
```

### Parameters

*x*, *y*<br/>
Floating-point values.

## Return Value

If successful, **hypot** returns the length of the hypotenuse; on overflow, **hypot** returns INF (infinity) and the **errno** variable is set to **ERANGE**. You can use **_matherr** to modify error handling.

For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **hypot** functions calculate the length of the hypotenuse of a right triangle, given the length of the two sides *x* and *y* (in other words, the square root of *x*<sup>2</sup> + *y*<sup>2</sup>).

The versions of the functions that have leading underscores are provided for compatibility with earlier standards. Their behavior is identical to the versions that don't have leading underscores. We recommend using the versions without leading underscores for new code.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**hypot**, **hypotf**, **hypotl**, **_hypot**, **_hypotf**, **_hypotl**|\<math.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_cabs](cabs.md)<br/>
[_matherr](matherr.md)<br/>