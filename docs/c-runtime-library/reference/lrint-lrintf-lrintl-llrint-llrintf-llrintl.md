---
title: "lrint, lrintf, lrintl, llrint, llrintf, llrintl"
description: "API reference for lrint(), lrintf(), lrintl(), llrint(), llrintf(), and llrintl(); which rounds the specified floating-point value to the nearest integral value, by using the current rounding mode and direction."
ms.date: "9/1/2020"
api_name: ["lrint", "lrintl", "lrintf", "llrint", "llrintf", "llrintl", "_o_llrint", "_o_llrintf", "_o_llrintl", "_o_lrint", "_o_lrintf", "_o_lrintl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["lrint", "lrintf", "lrintl", "llrint", "llrintf", "llrintl", "math/lrint", "math/lrintf", "math/lrintl", "math/llrint", "math/llrintf", "math/llrintl"]
helpviewer_keywords: ["lrint function", "lrintf function", "lrintl function", "llrint function", "llrintf function", "llrintl function"]
ms.assetid: 28ccd5b3-5e6f-434f-997d-a21d51b8ce7f
---
# `lrint`, `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`

Rounds the specified floating-point value to the nearest integral value, by using the current rounding mode and direction.

## Syntax

```C
long int lrint(
   double x
);

long int lrint(
   float x
); //C++ only

long int lrint(
   long double x
); //C++ only

long int lrintf(
   float x
);

long int lrintl(
   long double x
);

long long int llrint(
   double x
);

long long int llrint(
   float x
); //C++ only

long long int llrint(
   long double x
); //C++ only

long long int llrintf(
   float x
);

long long int llrintl(
   long double x
);

#define lrint(X) // Requires C11 or higher
```

### Parameters

*`x`*\
The value to round.

## Return value

If successful, returns the rounded integral value of *`x`*.

| Issue | Return |
|---|---|
| *`x`* is outside the range of the return type<br /><br /> *`x`* = ±INF<br /><br /> *`x`* = NaN | Raises `FE_INVALID` and returns zero (0). |

## Remarks

Because C++ allows overloading, you can call overloads of **`lrint`** and **`llrint`** that take **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`lrint`** and **`llrint`** always take a **`double`**.

If you use the \<tgmath.h> `llrint()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

If *`x`* doesn't represent the floating-point equivalent of an integral value, these functions raise `FE_INEXACT`.

**Microsoft-specific**: When the result is outside the range of the return type, or when the parameter is a NaN or infinity, the return value is implementation defined. The Microsoft compiler returns a zero (0) value.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`lrint`**, **`lrintf`**, **`lrintl`**, **`llrint`**, **`llrintf`**, **`llrintl`** | \<math.h> | \<cmath> |
| **`lrint`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)
