---
title: "log1p, log1pf, log1pl2"
description: "API reference for log1p, log1pf, log1pl2; which compute the natural logarithm of 1 plus the specified value."
ms.date: "2/1/2023"
api_name: ["log1p", "log1pf", "log1pl", "_o_log1p", "_o_log1pf", "_o_log1pl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["log1p", "log1pf", "log1pl", "math/log1p", "math/log1pf", "math/log1pl"]
helpviewer_keywords: ["log1p function", "log1pf function", "log1pl function"]
---
# `log1p`, `log1pf`, `log1pl`

Computes the natural logarithm of 1 plus the specified value.

## Syntax

```C
double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);

#define log1p(X) // Requires C11 or higher

float log1p(float x); //C++ only
long double log1p(long double x); //C++ only
```

### Parameters

*`x`*\
The floating-point argument.

## Return value

If successful, returns the natural (base-*e*) log of (*`x`* + 1).

Otherwise, may return one of the following values:

| Input | Result | SEH exception | errno |
|---|---|---|---|
| +INF | +INF |  |  |
| Denormals | Same as input | `UNDERFLOW` |  |
| ±0 | Same as input |  |  |
| -1 | -INF | `DIVBYZERO` | `ERANGE` |
| < -1 | NaN | `INVALID` | `EDOM` |
| -INF | NaN | `INVALID` | `EDOM` |
| ±SNaN | Same as input | `INVALID` |  |
| ±QNaN, indefinite | Same as input |  |  |

The `errno` value is set to ERANGE if *`x`* = -1. The `errno` value is set to `EDOM` if *`x`* < -1.

## Remarks

The **`log1p`** functions may be more accurate than using `log(x + 1)` when *`x`* is near 0.

Because C++ allows overloading, you can call overloads of **`log1p`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`log1p`** always takes and returns a **`double`**.

If you use the `<tgmath.h>` `log1p()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

Where *`x`* is a natural number, this function returns the base e logarithm of *`x`* + 1.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`log1p`**, **`log1pf`**, **`log1pl`** | `<math.h>` | `<cmath>` |
| **`log1p`** macro | `<tgmath.h>` |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`log2`, `log2f`, `log2l`](log2-log2f-log2l.md)\
[`log`, `logf`, `log10`, `log10f`](log-logf-log10-log10f.md)
