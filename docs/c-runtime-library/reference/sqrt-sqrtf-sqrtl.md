---
title: "sqrt, sqrtf, sqrtl"
ms.date: "04/05/2018"
api_name: ["sqrtl", "sqrtf", "sqrt"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "ntoskrnl.exe"]
api_type: "DLLExport"
f1_keywords: ["sqrt", "sqrtf", "_sqrtl"]
helpviewer_keywords: ["sqrtf function", "sqrt function", "sqrtl function", "_sqrtl function", "calculating square roots", "square roots, calculating"]
ms.assetid: 2ba9467b-f172-41dc-8f10-b86f68fa813c
---
# sqrt, sqrtf, sqrtl

Calculates the square root.

## Syntax

```C
double sqrt(
   double x
);
float sqrt(
   float x
);  // C++ only
long double sqrt(
   long double x
);  // C++ only
float sqrtf(
   float x
);
long double sqrtl(
   long double x
);
```

### Parameters

*x*<br/>
Non-negative floating-point value

## Remarks

Because C++ allows overloading, you can call overloads of **sqrt** that take **float** or **long** **double** types. In a C program, **sqrt** always takes and returns **double**.

## Return Value

The **sqrt** functions return the square-root of *x*. By default, if *x* is negative, **sqrt** returns an indefinite NaN.

|Input|SEH Exception|**_matherr** Exception|
|-----------|-------------------|--------------------------|
|± QNAN,IND|none|_DOMAIN|
|- ∞|none|_DOMAIN|
|x<0|none|_DOMAIN|

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**sqrt**, **sqrtf**, **sqrtl**|\<math.h>|\<cmath>|

For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_sqrt.c
// This program calculates a square root.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   double question = 45.35, answer;
   answer = sqrt( question );
   if( question < 0 )
      printf( "Error: sqrt returns %f\n", answer );
   else
      printf( "The square root of %.2f is %.2f\n", question, answer );
}
```

```Output
The square root of 45.35 is 6.73
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
[pow, powf, powl](pow-powf-powl.md)<br/>
[_CIsqrt](../../c-runtime-library/cisqrt.md)<br/>
