---
title: "acosh, acoshf, acoshl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["acoshf", "acosh", "acoshl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["acosh", "acoshf", "acoshl", "math/acosh", "math/acoshf", "math/acoshl"]
dev_langs: ["C++"]
helpviewer_keywords: ["acoshf function", "acosh function", "acoshl function"]
ms.assetid: 6985c4d7-9e2a-44ce-9a9b-5a43015f15f7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# acosh, acoshf, acoshl

Calculates the inverse hyperbolic cosine.

## Syntax

```C
double acosh( double x );
float acoshf( float x );
long double acoshl( long double x );
```

```cpp
float acosh( float x );  // C++ only
long double acosh( long double x );  // C++ only
```

### Parameters

*x*<br/>
Floating-point value.

## Return Value

The **acosh** functions return the inverse hyberbolic cosine (arc hyperbolic cosine) of *x*. These functions are valid over the domain *x* ≥ 1. If *x* is less than 1, `errno` is set to `EDOM` and the result is a quiet NaN. If *x* is a quiet NaN, indefinite, or infinity, the same value is returned.

|Input|SEH Exception|`_matherr` Exception|
|-----------|-------------------|--------------------------|
|± QNAN, IND, INF|none|none|
|*x* < 1|none|none|

## Remarks

When you use C++, you can call overloads of **acosh** that take and return **float** or **long** **double** values. In a C program, **acosh** always takes and returns **double**.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**acosh**, **acoshf**, **acoshl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_acosh.c
// Compile by using: cl /W4 crt_acosh.c
// This program displays the hyperbolic cosine of pi / 4
// and the arc hyperbolic cosine of the result.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x, y;

   x = cosh( pi / 4 );
   y = acosh( x );
   printf( "cosh( %f ) = %f\n", pi/4, x );
   printf( "acosh( %f ) = %f\n", x, y );
}
```

```Output
cosh( 0.785398 ) = 1.324609
acosh( 1.324609 ) = 0.785398
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[cosh, coshf, coshl](cosh-coshf-coshl.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)