---
title: "log, logf, logl, log10, log10f, log10l"
ms.date: "04/05/2018"
api_name: ["log10f", "logf", "log10", "log", "log10l", "logl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: "DLLExport"
f1_keywords: ["logf", "logl", "_log10l", "log", "_logl", "log10f", "log10l", "log10"]
helpviewer_keywords: ["calculating logarithms", "log10f function", "log10 function", "log function", "log10l function", "logl function", "logf function", "logarithms"]
ms.assetid: 7adc77c2-04f7-4245-a980-21215563cfae
---
# log, logf, logl, log10, log10f, log10l

Calculates logarithms.

## Syntax

```C
double log( double x );
float logf( float x );
long double logl( double x );
double log10( double x );
float log10f ( float x );
long double log10l( double x );
```

```cpp
float log( float x );  // C++ only
long double log( long double x );  // C++ only
float log10( float x );  // C++ only
long double log10( long double x );  // C++ only
```

### Parameters

*x*<br/>
Value whose logarithm is to be found.

## Return Value

The **log** functions return the natural logarithm (base *e*) of *x* if successful. The **log10** functions return the base-10 logarithm. If *x* is negative, these functions return an indefinite (IND), by default. If *x* is 0, they return infinity (INF).

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± QNAN, IND|none|_DOMAIN|
|± 0|ZERODIVIDE|_SING|
|*x* < 0|INVALID|_DOMAIN|

**log** and **log10** have an implementation that uses Streaming SIMD Extensions 2 (SSE2). See [_set_SSE2_enable](set-sse2-enable.md) for information and restrictions on using the SSE2 implementation.

## Remarks

C++ allows overloading, so you can call overloads of **log** and **log10** that take and return **float** or **long double** values. In a C program, **log** and **log10** always take and return a **double**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**log**, **logf**, **logl**, **log10**, **log10f**, **log10l**|\<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_log.c
/* This program uses log and log10
* to calculate the natural logarithm and
* the base-10 logarithm of 9,000.
*/

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 9000.0;
   double y;

   y = log( x );
   printf( "log( %.2f ) = %f\n", x, y );
   y = log10( x );
   printf( "log10( %.2f ) = %f\n", x, y );
}
```

```Output
log( 9000.00 ) = 9.104980
log10( 9000.00 ) = 3.954243
```

To generate logarithms for other bases, use the mathematical relation: log base b of a == natural log (a) / natural log (b).

```cpp
// logbase.cpp
#include <math.h>
#include <stdio.h>

double logbase(double a, double base)
{
   return log(a) / log(base);
}

int main()
{
   double x = 65536;
   double result;

   result = logbase(x, 2);
   printf("Log base 2 of %lf is %lf\n", x, result);
}
```

```Output
Log base 2 of 65536.000000 is 16.000000
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md) <br/>
[exp, expf, expl](exp-expf.md) <br/>
[_matherr](matherr.md) <br/>
[pow, powf, powl](pow-powf-powl.md) <br/>
[_CIlog](../../c-runtime-library/cilog.md) <br/>
[_CIlog10](../../c-runtime-library/cilog10.md)<br/>
