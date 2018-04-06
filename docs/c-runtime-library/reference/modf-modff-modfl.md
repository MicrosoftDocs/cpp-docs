---
title: "modf, modff, modfl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["modff", "modf", "modfl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["modff", "_modfl", "modf", "modfl", "math/modf", "math/modff", "math/modfl"]
dev_langs: ["C++"]
helpviewer_keywords: ["modf function", "modff function", "modfl function"]
ms.assetid: b1c7abf5-d476-43ca-a03c-02072a86e32d
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# modf, modff, modfl

Splits a floating-point value into fractional and integer parts.

## Syntax

```C
double modf( double x, double * intptr );
float modff( float x, float * intptr );
long double modfl( long double x, long double * intptr );
```

```cpp
float modf( float x, float * intptr );  // C++ only
long double modf( long double x, long double * intptr );  // C++ only
```

### Parameters

*x*<br/>
Floating-point value.

*intptr*<br/>
Pointer to stored integer portion.

## Return Value

This function returns the signed fractional portion of *x*. There is no error return.

## Remarks

The **modf** functions break down the floating-point value *x* into fractional and integer parts, each of which has the same sign as *x*. The signed fractional portion of *x* is returned. The integer portion is stored as a floating-point value at *intptr*.

**modf** has an implementation that uses Streaming SIMD Extensions 2 (SSE2). See [_set_SSE2_enable](../../c-runtime-library/reference/set-sse2-enable.md) for information and restrictions on using the SSE2 implementation.

C++ allows overloading, so you can call overloads of **modf** that take and return **float** or **long** **double** parameters. In a C program, **modf** always takes two double values and returns a double value.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**modf**, **modff**, **modfl**|C: \<math.h><br /><br /> C++: , \<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_modf.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x, y, n;

   x = -14.87654321;      /* Divide x into its fractional */
   y = modf( x, &n );     /* and integer parts            */

   printf( "For %f, the fraction is %f and the integer is %.f\n", 
           x, y, n );
}
```

```Output
For -14.876543, the fraction is -0.876543 and the integer is -14
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](../../c-runtime-library/reference/frexp.md)<br/>
[ldexp](../../c-runtime-library/reference/ldexp.md)<br/>
