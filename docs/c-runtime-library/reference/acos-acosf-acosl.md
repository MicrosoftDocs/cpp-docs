---
title: "acos, acosf, acosl"
ms.date: "04/05/2018"
apiname: ["acosf", "acos", "acosl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["acos", "acosl", "acosf", "math/acosf", "math/acosl"]
helpviewer_keywords: ["acos function", "acosl function", "acosf function", "trigonometric functions", "arccosine function"]
ms.assetid: 00b89c48-8faf-4824-aa95-fa4349a4975d
---
# acos, acosf, acosl

Calculates the arccosine.

## Syntax

```C
double acos( double x );
float acosf( float x );
long double acosl( long double x );
```

```cpp
float acos( float x );   // C++ only
long double acos( long double x );   // C++ only
```

### Parameters

*x*<br/>
Value between -1 and 1, for which to calculate the arccosine (the inverse cosine).

## Return Value

The **acos** function returns the arccosine of *x* in the range 0 to π radians.

By default, if *x* is less than -1 or greater than 1, **acos** returns an indefinite.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± ∞|INVALID|_DOMAIN|
|± QNAN,IND|none|_DOMAIN|
|&#124;x&#124;>1|INVALID|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of **acos** that take and return **float** and **long** **double** types. In a C program, **acos** always takes and returns a **double**.

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**acos**, **acosf**, **acosl**|\<math.h>|\<errno.h>|

## Example

This program prompts for a value in the range -1 to 1. Input values outside this range produce `_DOMAIN` error messages. If a valid value is entered, the program prints the arcsine and the arccosine of that value.

```C
// crt_asincos.c
// arguments: 0

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main( int ac, char* av[] )
{
    double  x,
            y;
    errno_t err;

    // argument checking
    if (ac != 2)
    {
        fprintf_s( stderr, "Usage: %s <number between -1 and 1>\n",
                   av[0]);
        return 1;
    }

    // Convert argument into a double value
    if ((err = sscanf_s( av[1], "%lf", &x )) != 1)
    {
        fprintf_s( stderr, "Error converting argument into ",
                   "double value.\n");
        return 1;
    }

    // Arcsine of X
    y = asin( x );
    printf_s( "Arcsine of %f = %f\n", x, y );

    // Arccosine of X
    y = acos( x );
    printf_s( "Arccosine of %f = %f\n", x, y );
}
```

```Output
Arcsine of 0.000000 = 0.000000
Arccosine of 0.000000 = 1.570796
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)