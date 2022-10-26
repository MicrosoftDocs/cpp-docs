---
title: "expm1, expm1f, expm1l"
description: "API reference for expm1, expm1f, and expm1; which compute the base-e exponential of a value, minus one."
ms.date: "9/1/2020"
api_name: ["expm1l", "expm1", "expm1f"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["expm1l", "expm1", "expm1f"]
helpviewer_keywords: ["expm1f function", "expm1l function", "expm1 function"]
ms.assetid: 2a4dd2d9-370c-42b0-9067-0625efa272e0
---
# `expm1`, `expm1f`, `expm1l`

Computes the base-e exponential of a value, minus one.

## Syntax

```C
double expm1(
   double x
);
float expm1(
   float x
);  // C++ only
long double expm1(
   long double x
);  // C++ only
float expm1f(
   float x
);
long double expm1l(
   long double x
);
#define expm1(X) // Requires C11 or higher
```

### Parameters

*`x`*\
The floating-point exponential value.

## Return value

The **`expm1`** functions return a floating-point value that represents e<sup>x</sup> - 1, if successful. On overflow, **`expm1`** returns `HUGE_VAL`, **`expm1f`** returns `HUGE_VALF`, **`expm1l`** returns `HUGE_VALL`, and `errno` is set to `ERANGE`. For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`expm1`** that take and return **`float`** and **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`expm1`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `expm1()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | Required header |
|---|---|
| **`expm1`**, **`expm1f`**, **`expm1l`** | \<math.h> |
| **`expm1`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`exp2`, `exp2f`, `exp2l`](exp2-exp2f-exp2l.md)\
[`pow`, `powf`, `powl`](pow-powf-powl.md)
