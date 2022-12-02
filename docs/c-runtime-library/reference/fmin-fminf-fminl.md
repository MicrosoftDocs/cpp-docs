---
title: "fmin, fminf, fminl"
description: "API reference for fmin, fminf, and fminl; which determines the smaller of two values."
ms.date: "9/1/2020"
api_name: ["fmin", "fminf", "fminl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fmin", "fminf", "fminl", "math/fmin", "math/fminf", "math/fminl"]
helpviewer_keywords: ["fmin function", "fminf function", "fminl function"]
ms.assetid: 1916dfb5-99c1-4b0d-aefb-513525c3f2ac
---
# `fmin`, `fminf`, `fminl`

Determines the smaller of the two specified values.

## Syntax

```C
double fmin(
   double x,
   double y
);

float fmin(
   float x,
   float y
); //C++ only

long double fmin(
   long double x,
   long double y
); //C++ only

float fminf(
   float x,
   float y
);

long double fminl(
   long double x,
   long double y
);

#define fmin(x) // Requires C11 or higher
```

### Parameters

*`x`*\
The first value to compare.

*`y`*\
The second value to compare.

## Return value

If successful, returns the smaller of *`x`* or *`y`*.

| Input | Result |
|---|---|
| *`x`* is NaN | *`y`* |
| *`y`* is NaN | *`x`* |
| *`x`* and *`y`* are NaN | NaN |

The function doesn't cause [`_matherr`](matherr.md) to be invoked, cause any floating-point exceptions, or change the value of `errno`.

## Remarks

Because C++ allows overloading, you can call overloads of **`fmin`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`fmin`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `fmin()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | Required header |
|---|---|
| **`fmin`**, **`fminf`**, **`fminl`** | C: \<math.h><br />C++: \<math.h> or \<cmath> |
| **`fmin`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`fmax`, `fmaxf`, `fmaxl`](fmax-fmaxf-fmaxl.md)
