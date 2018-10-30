---
title: "atanh, atanhf, atanhl"
ms.date: "04/05/2018"
apiname: ["atanhl", "atanhf", "atanh"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["atanhl", "atanhf", "atanh"]
helpviewer_keywords: ["atanhf function", "atanhl function", "atanh funciton"]
ms.assetid: 83a43b5b-2580-4461-854f-dc84236d9f32
---
# atanh, atanhf, atanhl

Calculates the inverse hyperbolic tangent.

## Syntax

```C
double atanh( double x );
float atanhf( float x );
long double atanhl( long double x );
```

```cpp
float atanh( float x );  // C++ only
long double atanh( long double x );  // C++ only
```

### Parameters

*x*<br/>
Floating-point value.

## Return Value

The **atanh** functions return the inverse hyberbolic tangent (arc hyperbolic tangent) of *x*. If *x* is greater than 1, or less than -1, **errno** is set to **EDOM** and the result is a quiet NaN. If *x* is equal to 1 or -1, a positive or negative infinity is returned, respectively, and **errno** is set to **ERANGE**.

|Input|SEH Exception|**Matherr** Exception|
|-----------|-------------------|-------------------------|
|± QNAN,IND|none|none|
|*X* ≥ 1; *x* ≤ -1|none|none|

## Remarks

Because C++ allows overloading, you can call overloads of **atanh** that take and return **float** or **long** **double** values. In a C program, **atanh** always takes and returns **double**.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**atanh**, **atanhf**, **atanhl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_atanh.c
// This program displays the hyperbolic tangent of pi / 4
// and the arc hyperbolic tangent of the result.
//

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = tanh( pi / 4 );
   y = atanh( x );
   printf( "tanh( %f ) = %f\n", pi/4, x );
   printf( "atanh( %f ) = %f\n", x, y );
}
```

```Output
tanh( 0.785398 ) = 0.655794
atanh( 0.655794 ) = 0.785398
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
