---
title: "frexp, frexpf, frexpl"
description: "API reference for frexp, frexpf, and frexpl; which gets the mantissa and exponent of a floating-point number."
ms.date: "9/1/2020"
api_name: ["frexp", "_o_frexp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["frexp", "_frexpl"]
helpviewer_keywords: ["_frexpl function", "mantissas, floating-point variables", "frexpl function", "exponent, floating-point numbers", "frexp function", "floating-point functions, mantissa and exponent"]
ms.assetid: 9b020f2e-3967-45ec-a6a8-d467a071aa55
---
# `frexp`, `frexpf`, `frexpl`

Gets the mantissa and exponent of a floating-point number.

## Syntax

```C
double frexp(
   double x,
   int *expptr
);
float frexpf(
   float x,
   int * expptr
);
long double frexpl(
   long double x,
   int * expptr
);
#define frexpl(X, INT_PTR) // Requires C11 or higher
```

```cpp
float frexp(
   float x,
   int * expptr
);  // C++ only
long double frexp(
   long double x,
   int * expptr
);  // C++ only
```

### Parameters

*`x`*\
Floating-point value.

*`expptr`*\
Pointer to stored integer exponent.

## Return value

**`frexp`** returns the mantissa. If *`x`* is 0, the function returns 0 for both the mantissa and the exponent. If *`expptr`* is `NULL`, the invalid parameter handler is invoked as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns 0.

## Remarks

The **`frexp`** function breaks down the floating-point value (*`x`*) into a mantissa (`m`) and an exponent (`n`), such that the absolute value of `m` is greater than or equal to 0.5 and less than 1.0, and *`x`* = `m` * 2<sup>`n`</sup>. The integer exponent `n` is stored at the location pointed to by *`expptr`*.

C++ allows overloading, so you can call overloads of **`frexp`**. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`frexp`** always takes a **`double`** and an **`int`** pointer and returns a **`double`**.

If you use the \<tgmath.h> `frexp()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`frexp`**, **`frexpf`**, **`frexpl`** | \<math.h> |
| **`frexp`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_frexp.c
// This program calculates frexp( 16.4, &n )
// then displays y and n.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x, y;
   int n;

   x = 16.4;
   y = frexp( x, &n );
   printf( "frexp( %f, &n ) = %f, n = %d\n", x, y, n );
}
```

```Output
frexp( 16.400000, &n ) = 0.512500, n = 5
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ldexp`](ldexp.md)\
[`modf`, `modff`, `modfl`](modf-modff-modfl.md)
