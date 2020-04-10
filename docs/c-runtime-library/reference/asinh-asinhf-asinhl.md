---
title: "asinh, asinhf, asinhl"
ms.date: "4/2/2020"
api_name: ["asinh", "asinhf", "asinhl", "_o_asinh", "_o_asinhf", "_o_asinhl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["asinhf", "asinhl", "asinh"]
helpviewer_keywords: ["asinh function", "asinhl function", "asinhf function"]
ms.assetid: 4488babe-1a7e-44ca-8b7b-c2db0a70084f
---
# asinh, asinhf, asinhl

Calculates the inverse hyperbolic sine.

## Syntax

```C
double asinh( double x );
float asinhf( float x );
long double asinhl( long double x );
```

```cpp
float asinh( float x );  // C++ only
long double asinh( long double x );  // C++ only
```

### Parameters

*x*<br/>
Floating-point value.

## Return Value

The **asinh** functions return the inverse hyberbolic sine (arc hyperbolic sine) of *x*. This function is valid over the floating-point domain. If *x* is a quiet NaN, indefinite, or infinity, the same value is returned.

|Input|SEH Exception|**_matherr** Exception|
|-----------|-------------------|--------------------------|
|± QNAN, IND, INF|none|none|

## Remarks

When you use C++, you can call overloads of **asinh** that take and return **float** or **long** **double** values. In a C program, **asinh** always takes and returns **double**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required C header|Required C++ header|
|--------------|--------------|------------------|
|**asinh**, **asinhf**, **asinhl**|\<math.h>|\<cmath> or \<math.h<|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_asinh.c
// Compile by using: cl /W4 crt_asinh.c
// This program displays the hyperbolic sine of pi / 4
// and the arc hyperbolic sine of the result.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = sinh( pi / 4 );
   y = asinh( x );
   printf( "sinh( %f ) = %f\n", pi/4, x );
   printf( "asinh( %f ) = %f\n", x, y );
}
```

```Output
sinh( 0.785398 ) = 0.868671
asinh( 0.868671 ) = 0.785398
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
