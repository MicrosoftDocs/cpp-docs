---
title: "log, logf, logl, log10, log10f, log10l"
description: "API reference for log, logf, logl, log10, log10f, and log10l; which calculate logarithms."
ms.date: "9/1/2020"
api_name: ["log10f", "logf", "log10", "log", "log10l", "logl", "_o_log", "_o_log10", "_o_log10f", "_o_logf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["logf", "logl", "_log10l", "log", "_logl", "log10f", "log10l", "log10"]
helpviewer_keywords: ["calculating logarithms", "log10f function", "log10 function", "log function", "log10l function", "logl function", "logf function", "logarithms"]
---
# `log`, `logf`, `logl`, `log10`, `log10f`, `log10l`

Calculates logarithms.

## Syntax

```C
double log(double x);
float logf(float x);
long double logl(double x);
double log10(double x);
float log10f (float x);
long double log10l(double x);
#define log(X) // Requires C11 or higher
#define log10(X) // Requires C11 or higher

float log(float x);  // C++ only
long double log(long double x);  // C++ only
float log10(float x);  // C++ only
long double log10(long double x);  // C++ only
```

### Parameters

*`x`*\
Value whose logarithm is to be found.

## Return value

The **`log`** functions return the natural logarithm (base *`e`*) of *`x`* if successful. The **`log10`** functions return the base-10 logarithm. If *`x`* is negative, these functions return an indefinite (`IND`), by default. If *`x`* is 0, they return infinity (`INF`).

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |
| ± 0 | `ZERODIVIDE` | `_SING` |
| *`x < 0`* | `INVALID` | `_DOMAIN` |

**`log`** and **`log10`** have an implementation that uses Streaming SIMD Extensions 2 (SSE2). See [`_set_SSE2_enable`](set-sse2-enable.md) for information and restrictions on using the SSE2 implementation.

## Remarks

C++ allows overloading, so you can call overloads of **`log`** and **`log10`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`log`** and **`log10`** always take and return a **`double`**.

If you use the `<tgmath.h> log()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`log`**, **`logf`**, **`logl`**, **`log10`**, **`log10f`**, **`log10l`** | `<math.h>` |
| **`log`** macro | `<tgmath.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

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

[Math and floating-point support](../floating-point-support.md) \
[`exp`, `expf`, `expl`](exp-expf.md) \
[`_matherr`](matherr.md) \
[`pow`, `powf`, `powl`](pow-powf-powl.md) \
[`_CIlog`](../cilog.md) \
[`_CIlog10`](../cilog10.md)\
