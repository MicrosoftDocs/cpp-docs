---
title: "remquo, remquof, remquol"
description: "API reference for remquo, remquof, and remquol, which compute the remainder of two integer values, and store the sign and approximate magnitude of the quotient."
ms.date: "9/1/2020"
api_name: ["remquof", "remquo", "remquol", "_o_remquo", "_o_remquof", "_o_remquol"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["remquof", "remquol", "remquo"]
helpviewer_keywords: ["remquol function", "remquof function", "remquo function"]
ms.assetid: a1d3cb8b-8027-4cd3-8deb-04eb17f299fc
---
# `remquo`, `remquof`, `remquol`

Computes the remainder of two integer values, and stores an integer value with the sign and approximate magnitude of the quotient in a parameter.

## Syntax

```C
double remquo( double numer, double denom, int* quo );
float remquof( float numer, float denom, int* quo );
long double remquol( long double numer, long double denom, int* quo );
#define remquo(X, Y, INT_PTR) // Requires C11 or higher

float remquo( float numer, float denom, int* quo ); /* C++ only */
long double remquo( long double numer, long double denom, int* quo ); /* C++ only */
```

### Parameters

*`numer`*\
The numerator.

*`denom`*\
The denominator.

*`quo`*\
A pointer to an integer to store a value that has the sign and approximate magnitude of the quotient.

## Return value

**`remquo`** returns the floating-point remainder of *`x`* / *`y`*. If the value of *`y`* is 0.0, **`remquo`** returns a quiet NaN. For information about the representation of a quiet NaN by the `printf` family, see [`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md).

## Remarks

The **`remquo`** function calculates the floating-point remainder `f` of *`x`* / *`y`* such that *`x`* = `n` \* *`y`* + `f`*, where `n` is an integer, `f` has the same sign as *`x`*, and the absolute value of `f` is less than the absolute value of *`y`*.

C++ allows overloading, so you can call overloads of **`remquo`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`remquo`** always takes two **`double`** arguments and returns a **`double`**.

If you use the \<tgmath.h> `remquo()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header (C) | Required header (C++) |
|---|---|---|
| **`remquo`**, **`remquof`**, **`remquol`** | \<math.h> | \<cmath> or \<math.h> |
| **`remquo`** macro | \<tgmath.h> |  |

For compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_remquo.c
// This program displays a floating-point remainder.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double w = -10.0, x = 3.0, z;
   int quo = 0;

   z = remquo(w, x, &quo);
   printf("The remainder of %.2f / %.2f is %f\n", w, x, z);
   printf("Approximate signed quotient is %d\n", quo);
}
```

```Output
The remainder of -10.00 / 3.00 is -1.000000
Approximate signed quotient is -3
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ldiv`, `lldiv`](./div.md)\
[`imaxdiv`](imaxdiv.md)\
[`fmod`, `fmodf`](fmod-fmodf.md)\
[`remainder`, `remainderf`, `remainderl`](remainder-remainderf-remainderl.md)
