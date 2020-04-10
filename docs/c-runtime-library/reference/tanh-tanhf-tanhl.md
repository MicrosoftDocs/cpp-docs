---
title: "tanh, tanhf, tanhl"
ms.date: "4/2/2020"
api_name: ["tanh", "tanhf", "tanhl", "_o_tanh"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["tanh", "tanhf", "tanhl", "_tanhl"]
helpviewer_keywords: ["tanhl function", "_tanhl function", "tanh function", "tanhf function", "trigonometric functions", "hyperbolic functions"]
---
# tanh, tanhf, tanhl

Calculates the hyperbolic tangent.

## Syntax

```C
double tanh( double x );
float tanhf( float x );
long double tanhl( long double x );
```

```cpp
float tanh( float x );  // C++ only
long double tanh( long double x );  // C++ only
```

### Parameters

*x*<br/>
Angle in radians.

## Return value

The **tanh** functions return the hyperbolic tangent of *x*. There is no error return.

|Input|SEH Exception|**Matherr** Exception|
|-----------|-------------------|-------------------------|
|± QNAN,IND|none|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of **tanh** that take and return **float** or **long** **double** values. In a C program, **tanh** always takes and returns **double**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header (C)|Required header (C)|
|-------------|---------------------|-|
|**tanh**, **tanhf**, **tanhl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_tanh.c
// This program displays the tangent of pi / 4
// and the hyperbolic tangent of the result.
// Compile by using: cl crt_tanh.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = tan( pi / 4 );
   y = tanh( x );
   printf( "tan( %f ) = %f\n", pi/4, x );
   printf( "tanh( %f ) = %f\n", x, y );
}
```

```Output
tan( 0.785398 ) = 1.000000
tanh( 1.000000 ) = 0.761594
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
