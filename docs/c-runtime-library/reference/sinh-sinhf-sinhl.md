---
title: "sinh, sinhf, sinhl"
ms.date: "04/10/2018"
api_name: ["sinhl", "sinhf", "sinhl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: "DLLExport"
topic_type: ["apiref"]
f1_keywords: ["sinh", "sinhf", "sinhl"]
helpviewer_keywords: ["sinh function", "sinhl function", "sinhf function", "calculating hyperbolic sines", "trigonometric functions", "sinhf function", "sinhl function", "hyperbolic functions"]
---
# sinh, sinhf, sinhl

Calculates the hyperbolic sine.

## Syntax

```C
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
```

```cpp
float sinh(float x);  // C++ only
long double sinh(long double x);  // C++ only
```

### Parameters

*x*<br/>
Angle in radians.

## Return Value

The **sinh** functions return the hyperbolic sine of *x*. By default, if the result is too large, **sinh** sets **errno** to **ERANGE** and returns ±**HUGE_VAL**.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± QNAN,IND|None|_DOMAIN|
|&#124;x&#124; ≥ 7.104760e+002|OVERFLOW+INEXACT|OVERFLOW|

For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **sinh** that take and return **float** or **long** **double** values. In a C program, **sinh** always takes and returns **double**.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-|-|-|
|**sinh**, **sinhf**, **sinhl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_sinhcosh.c
// This program displays the hyperbolic
// sine and hyperbolic cosine of pi / 2.
// Compile by using: cl /W4 crt_sinhcosh.c

#include <math.h>
#include <stdio.h>

int main( void)
{
   double pi = 3.1415926535;
   double x, y;

   x = pi / 2;
   y = sinh( x );
   printf( "sinh( %f ) = %f\n",x, y );
   y = cosh( x );
   printf( "cosh( %f ) = %f\n",x, y );
}
```

```Output
sinh( 1.570796 ) = 2.301299
cosh( 1.570796 ) = 2.509178
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
