---
title: "atan, atanf, atanl, atan2, atan2f, atan2l"
ms.date: "04/05/2018"
api_name: ["atan2f", "atan2l", "atan2", "atanf", "atan", "atanl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["atan", "atan2l", "atan2", "atanl", "atanf", "atan2f"]
helpviewer_keywords: ["atan function", "atanf function", "atanl function", "atan2 function", "atan2l function", "arctangent function", "trigonometric functions", "atan2f function"]
ms.assetid: 7a87a18e-c94d-4727-9cb1-1bb5c2725ae4
---
# atan, atanf, atanl, atan2, atan2f, atan2l

Calculates the arctangent of **x** (**atan**, **atanf**, and **atanl**) or the arctangent of **y**/**x** (**atan2**, **atan2f**, and **atan2l**).

## Syntax

```C
double atan( double x );
float atanf( float x );
long double atanl( long double x );

double atan2( double y, double x );
float atan2f( float y, float x );
long double atan2l( long double y, long double x );
```

```cpp
float atan( float x );  // C++ only
long double atan( long double x );  // C++ only

float atan2( float y, float x );  // C++ only
long double atan2( long double y, long double x );  // C++ only
```

### Parameters

*x*, *y*<br/>
Any numbers.

## Return Value

**atan** returns the arctangent of *x* in the range -π/2 to π/2 radians. **atan2** returns the arctangent of *y*/*x* in the range -π to π radians. If *x* is 0, **atan** returns 0. If both parameters of **atan2** are 0, the function returns 0. All results are in radians.

**atan2** uses the signs of both parameters to determine the quadrant of the return value.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|none|**_DOMAIN**|

## Remarks

The **atan** function calculates the arctangent (the inverse tangent function) of *x*. **atan2** calculates the arctangent of *y*/*x* (if *x* equals 0, **atan2** returns π/2 if *y* is positive, -π/2 if *y* is negative, or 0 if *y* is 0.)

**atan** has an implementation that uses Streaming SIMD Extensions 2 (SSE2). For information and restrictions about using the SSE2 implementation, see [_set_SSE2_enable](set-sse2-enable.md).

Because C++ allows overloading, you can call overloads of **atan** and **atan2** that take **float** or **long** **double** arguments. In a C program, **atan** and **atan2** always take **double** arguments and return a **double**.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------|-|
|**atan**, **atan2**, **atanf**, **atan2f**, **atanl**, **atan2l**|\<math.h>|\<cmath> or \<math.h>|

## Example

```C
// crt_atan.c
// arguments: 5 0.5
#include <math.h>
#include <stdio.h>
#include <errno.h>

int main( int ac, char* av[] )
{
   double x, y, theta;
   if( ac != 3 ){
      fprintf( stderr, "Usage: %s <x> <y>\n", av[0] );
      return 1;
   }
   x = atof( av[1] );
   theta = atan( x );
   printf( "Arctangent of %f: %f\n", x, theta );
   y = atof( av[2] );
   theta = atan2( y, x );
   printf( "Arctangent of %f / %f: %f\n", y, x, theta );
   return 0;
}
```

```Output
Arctangent of 5.000000: 1.373401
Arctangent of 0.500000 / 5.000000: 0.099669
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
[_CIatan](../../c-runtime-library/ciatan.md)<br/>
[_CIatan2](../../c-runtime-library/ciatan2.md)<br/>
