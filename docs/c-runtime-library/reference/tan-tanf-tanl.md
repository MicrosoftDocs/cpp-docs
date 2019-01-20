---
title: "tan, tanf, tanl"
ms.date: "04/10/2018"
apiname: ["tan", "tanf", "tanl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["tan", "tanf", "_tanl", "tanl"]
helpviewer_keywords: ["tanl function", "_tanl function", "tan function", "calculating tangents", "tangent", "tanf function", "trigonometric functions"]
ms.assetid: 36cc0ce8-9c80-4653-b354-ddb3b378b6bd
---
# tan, tanf, tanl

Calculates the tangent.

## Syntax

```C
double tan( double x );
float tanf( float x );
long double tanl( long double x );
```

```cpp
float tan( float x );  // C++ only
long double tan( long double x );  // C++ only
```

### Parameters

*x*<br/>
Angle in radians.

## Return value

The **tan** functions return the tangent of *x*. If *x* is greater than or equal to 263, or less than or equal to -263, a loss of significance in the result occurs.

|Input|SEH Exception|**Matherr** Exception|
|-----------|-------------------|-------------------------|
|± QNAN,IND|none|_DOMAIN|
|± INF|**INVALID**|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of **tan** that take and return **float** or **long** **double** values. In a C program, **tan** always takes and returns **double**.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------|-|
|**tan**, **tanf**, **tanl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_tan.c
// This program displays the tangent of pi / 4
// Compile by using: cl crt_tan.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x;

   x = tan( pi / 4 );
   printf( "tan( %f ) = %f\n", pi/4, x );
}
```

```Output
tan( 0.785398 ) = 1.000000
```

## See also

- [Floating-Point Support](../../c-runtime-library/floating-point-support.md)
- [acos, acosf, acosl](acos-acosf-acosl.md)
- [asin, asinf, asinl](asin-asinf-asinl.md)
- [atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)
- [cos, cosf, cosl](cos-cosf-cosl.md)
- [sin, sinf, sinl](sin-sinf-sinl.md)
- [_CItan](../../c-runtime-library/citan.md)
