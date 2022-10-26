---
title: "fdim, fdimf, fdiml"
description: "API reference for fdim, fdimf, and fdiml; which determines the positive difference between two values."
ms.date: "9/1/2020"
api_name: ["fdim", "fdimf", "fdiml"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fdim", "fdimf", "fdiml", "math/fdim", "math/fdimf", "math/fdiml"]
helpviewer_keywords: ["fdim function", "fdimf function", "fdiml function"]
ms.assetid: 2d4ac639-51e9-462d-84ab-fb03b06971a0
---
# `fdim`, `fdimf`, `fdiml`

Determines the positive difference between the first and second values.

## Syntax

```C
double fdim(
   double x,
   double y
);

float fdim(
   float x,
   float y
); //C++ only

long double fdim(
   long double x,
   long double y
); //C++ only

float fdimf(
   float x,
   float y
);

long double fdiml(
   long double x,
   long double y
);

#define fdim(X) // Requires C11 or higher
```

### Parameters

*`x`*\
The first value.

*`y`*\
The second value.

## Return value

Returns the positive difference between *`x`* and *`y`*:

| Return value | Scenario |
|---|---|
| `x-y` | if *`x`* > *`y`* |
| 0 | if *`x`* <= *`y`* |

Otherwise, may return one of the following errors:

| Issue | Return |
|---|---|
| Overflow range error | +HUGE_VAL, +HUGE_VALF, or +HUGE_VALL |
| Underflow range error | correct value (after rounding) |
| *`x`* or *`y`* is NaN | NaN |

Errors are reported as specified in [`_matherr`](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`fdim`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`fdim`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `fdim()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

Except for the NaN handling, this function is equivalent to `fmax(x - y, 0)`.

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`fdim`**, **`fdimf`**, **`fdiml`** | \<math.h> | \<cmath> |
| **`fdim`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`fmax`, `fmaxf`, `fmaxl`](fmax-fmaxf-fmaxl.md)\
[`abs`, `labs`, `llabs`, `_abs64`](abs-labs-llabs-abs64.md)\
