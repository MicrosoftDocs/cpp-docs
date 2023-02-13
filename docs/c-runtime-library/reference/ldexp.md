---
title: "ldexp, ldexpf, ldexpl"
description: "API reference for ldexp, ldexpf, and ldexpl; which multiplies a floating-point number by an integral power of two."
ms.date: "9/1/2020"
api_name: ["ldexp", "ldexpf", "ldexpl", "_ldexpl", "_o_ldexp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ldexp", "ldexpf", "ldexpl", "_ldexpl"]
helpviewer_keywords: ["calculating real numbers", "computing real numbers", "mantissas, floating-point variables", "ldexp function", "ldexpf function", "ldexpl function", "exponent, floating-point numbers", "floating-point functions, mantissa and exponent"]
ms.assetid: aa7f5310-3879-4f63-ae74-86a39fbdedfa
---
# `ldexp`, `ldexpf`, `ldexpl`

Multiplies a floating-point number by an integral power of two.

## Syntax

```C
double ldexp(
   double x,
   int exp
);
float ldexpf(
   float x,
   int exp
);
long double ldexpl(
   long double x,
   int exp
);
#define ldexp(X, INT) // Requires C11 or higher

float ldexp(
   float x,
   int exp
);  // C++ only
long double ldexp(
   long double x,
   int exp
);  // C++ only
```

### Parameters

*`x`*\
Floating-point value.

*`exp`*\
Integer exponent.

## Return value

The **`ldexp`** functions return the value of *`x`* \* 2<sup>*`exp`*</sup> if successful. On overflow, and depending on the sign of *`x`*, **`ldexp`** returns +/- `HUGE_VAL`; the `errno` value is set to `ERANGE`.

For more information about `errno` and possible error return values, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`ldexp`** that take **`float`** or **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`ldexp`** always takes a **`double`** and an **`int`** and returns a **`double`**.

If you use the \<tgmath.h> `ldexp()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`ldexp`**, **`ldexpf`**, **`ldexpl`** | \<math.h> | \<cmath> |
| **`ldexp`** macro | \<tgmath.h> |  |

For compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_ldexp.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 4.0, y;
   int p = 3;

   y = ldexp( x, p );
   printf( "%2.1f times two to the power of %d is %2.1f\n", x, p, y );
}
```

## Output

```Output
4.0 times two to the power of 3 is 32.0
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`frexp`](frexp.md)\
[`modf`, `modff`, `modfl`](modf-modff-modfl.md)
