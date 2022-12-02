---
title: "erf, erff, erfl, erfc, erfcf, erfcl"
description: "API reference for erf, erff, erfl, erfc, erfcf, and erfcl; which computes the error function or the complementary error function of a value."
ms.date: "9/1/2020"
api_name: ["erff", "erfl", "erf", "erfc", "erfcf", "erfcl", "_o_erf", "_o_erfc", "_o_erfcf", "_o_erfcl", "_o_erff", "_o_erfl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["erfl", "erf", "erff", "erfc", "erfcf", "erfcl"]
helpviewer_keywords: ["erfl function", "erff function", "erf function", "erfcl function", "erfcf function", "erfc function"]
ms.assetid: 144d90d3-e437-41c2-a659-cd57596023b5
---
# `erf`, `erff`, `erfl`, `erfc`, `erfcf`, `erfcl`

Computes the error function or the complementary error function of a value.

## Syntax

```C
double erf(
   double x
);
float erf(
   float x
); // C++ only
long double erf(
   long double x
); // C++ only
float erff(
   float x
);
long double erfl(
   long double x
);
double erfc(
   double x
);
float erfc(
   float x
); // C++ only
long double erfc(
   long double x
); // C++ only
float erfcf(
   float x
);
long double erfcl(
   long double x
);
#define erf(X) // Requires C11 or higher
#define erfc(X) // Requires C11 or higher
```

### Parameters

*`x`*\
A floating-point value.

## Return value

The **`erf`** functions return the Gauss error function of *`x`*. The **`erfc`** functions return the complementary Gauss error function of *`x`*.

## Remarks

The **`erf`** functions calculate the Gauss error function of *`x`*, which is defined as:

![The error function of x equals two over the square root of pi times the integral from zero to x of e to the minus t squared d t. ](media/crt_erf_formula.PNG "The error function of x")

The complementary Gauss error function is defined as 1 - erf(x). The **`erf`** functions return a value in the range -1.0 to 1.0. There's no error return. The **`erfc`** functions return a value in the range 0 to 2. If *`x`* is too large for **`erfc`**, the `errno` variable is set to `ERANGE`.

Because C++ allows overloading, you can call **`erf`** and **`erfc`** overloads that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`erf`** and **`erfc`** always take and return a **`double`**.

If you use the \<tgmath.h> `erf()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`erf`**, **`erff`**, **`erfl`**, **`erfc`**, **`erfcf`**, **`erfcl`** | \<math.h> |
| **`erf`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)
