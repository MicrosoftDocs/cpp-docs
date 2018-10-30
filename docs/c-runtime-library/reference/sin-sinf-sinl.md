---
title: "sin, sinf, sinl"
ms.date: "04/10/2018"
apiname: ["sinl", "sinf", "sin"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_sinl", "sinf", "sinl", "sin"]
helpviewer_keywords: ["_sinl function", "sinl function", "calculating sines", "sin function", "trigonometric functions", "sinf function"]
ms.assetid: 737de73e-3590-45f9-8257-dc1c0c489dfc
---
# sin, sinf, sinl

Calculates the sine of a floating-point value.

## Syntax

```C
double sin(double x);
float sinf(float x);
long double sinl(long double x);
```

```cpp
float sin(float x);  // C++ only
long double sin(long double x);  // C++ only
```

### Parameters

*x*<br/>
Angle in radians.

## Return value

The **sin** functions return the sine of *x*. If *x* is greater than or equal to 263, or less than or equal to -263, a loss of significance in the result occurs.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± QNAN,IND|None|_DOMAIN|
|± ∞ (sin, sinf, sinl)|INVALID|_DOMAIN|

For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **sin** that take and return **float** or **long** **double** values. In a C program, **sin** always takes and returns **double**.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-|-|-|
|**sin**, **sinf**, **sinl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_sincos.c
// This program displays the sine and cosine of pi / 2.
// Compile by using: cl /W4 crt_sincos.c

#include <math.h>
#include <stdio.h>

int main( void)
{
   double pi = 3.1415926535;
   double x, y;

   x = pi / 2;
   y = sin( x );
   printf( "sin( %f ) = %f\n", x, y );
   y = cos( x );
   printf( "cos( %f ) = %f\n", x, y );
}
```

```Output
sin( 1.570796 ) = 1.000000
cos( 1.570796 ) = 0.000000
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
[_CIsin](../../c-runtime-library/cisin.md)<br/>
