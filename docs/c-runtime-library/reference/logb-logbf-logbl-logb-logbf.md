---
title: "logb, logbf, logbl, _logb, _logbf"
description: "API reference for logb, logbf, logbl, _logb, and _logbf; which extract the exponent value of a floating-point argument."
ms.date: "1/15/2021"
api_name: ["logb", "_logb", "_logbl", "logbf", "_logbf", "logbl", "_o__logb", "_o_logb", "_o_logbf", "_o_logbl", "_o__logbf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["logb", "logbl", "_logb", "_logbf", "logbf"]
helpviewer_keywords: ["_logbf function", "mantissas, floating-point variables", "logbf function", "_logb function", "exponent, floating-point numbers", "logbl function", "logb function", "floating-point functions", "floating-point functions, mantissa and exponent", "exponents and mantissas"]
---
# `logb`, `logbf`, `logbl`, `_logb`, `_logbf`

Extracts the exponent value of a floating-point argument.

## Syntax

```C
double logb(
   double x
);
float logb(
   float x
); // C++ only
long double logb(
   long double x
); // C++ only
float logbf(
   float x
);
long double logbl(
   long double x
);
double _logb(
   double x
);
float _logbf(
   float x
);
#define logb(X) // Requires C11 or higher
```

### Parameters

*`x`*\
A floating-point value.

## Return value

**`logb`** returns the unbiased exponent value of *`x`* as a signed integer represented as a floating-point value.

## Remarks

The **`logb`** functions extract the exponential value of the floating-point argument *`x`*, as though *`x`* were represented with infinite range. If the argument *`x`* is denormalized, it's treated as if it were normalized.

Because C++ allows overloading, you can call overloads of **`logb`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`logb`** always takes and returns a **`double`**.

If you use the `logb` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | None | `_DOMAIN` |
| ± 0 | `ZERODIVIDE` | `_SING` |

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_logb`** | `<float.h>` |
| **`logb`**, **`logbf`**, **`logbl`**, **`_logbf`** | `<math.h>` |
| **`logb`** macro | `<tgmath.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`frexp`](frexp.md)
