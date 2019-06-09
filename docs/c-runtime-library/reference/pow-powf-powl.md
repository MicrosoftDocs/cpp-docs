---
title: "pow, powf, powl"
ms.date: "04/05/2018"
apiname: ["powl", "pow", "powf"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["powl", "pow", "_powl", "powf"]
helpviewer_keywords: ["exponential calculations", "powl function", "_powl function", "exponentiation", "powers, calculating", "calculating exponentials", "powf function", "pow function"]
ms.assetid: e75c33ed-2e59-48b1-be40-81da917324f1
---
# pow, powf, powl

Calculates *x* raised to the power of *y*.

## Syntax

```C
double pow( double x, double y );
float powf( float x, float y );
long double powl( long double x, long double y );
```

```cpp
double pow( double x, int y );  // C++ only
float pow( float x, float y );  // C++ only
float pow( float x, int y );  // C++ only
long double pow( long double x, long double y );  // C++ only
long double pow( long double x, int y );  // C++ only
```

### Parameters

*x*<br/>
Base.

*y*<br/>
Exponent.

## Return Value

Returns the value of *x*<sup>*y*</sup>. No error message is printed on overflow or underflow.

|Values of x and y|Return value of pow|
|-----------------------|-------------------------|
|*x* != 0.0 and *y* == 0.0|1|
|*x* == 0.0 and *y* == 0.0|1|
|*x* == 0.0 and *y* < 0|INF|

## Remarks

**pow** does not recognize integral floating-point values greater than 2<sup>64</sup> (for example, 1.0E100).

**pow** has an implementation that uses Streaming SIMD Extensions 2 (SSE2). For information and restrictions about using the SSE2 implementation, see [_set_SSE2_enable](set-sse2-enable.md).

Because C++ allows overloading, you can call any of the various overloads of **pow**. In a C program, **pow** always takes two **double** values and returns a **double** value.

The `pow(int, int)` overload is no longer available. If you use this overload, the compiler may emit [C2668](../../error-messages/compiler-errors-2/compiler-error-c2668.md). To avoid this problem, cast the first parameter to **double**, **float**, or **long** **double**.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-|-|-|
|**pow**, **powf**, **powl**|\<math.h>|\<math.h> or \<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_pow.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.0, y = 3.0, z;

   z = pow( x, y );
   printf( "%.1f to the power of %.1f is %.1f\n", x, y, z );
}
```

```Output
2.0 to the power of 3.0 is 8.0
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md) <br/>
[exp, expf, expl](exp-expf.md) <br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md) <br/>
[sqrt, sqrtf, sqrtl](sqrt-sqrtf-sqrtl.md) <br/>
[_CIpow](../../c-runtime-library/cipow.md)<br/>
