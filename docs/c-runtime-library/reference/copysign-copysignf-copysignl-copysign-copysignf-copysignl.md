---
title: "copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl"
description: "API ref for returning a value that has the magnitude of one argument and the sign of another using copysign()"
ms.date: "9/1/2020"
api_name: ["copysignf", "copysignl", "_copysignl", "_copysign", "_copysignf", "copysign"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_copysignl", "copysign", "copysignf", "_copysign", "copysignl", "_copysignf"]
helpviewer_keywords: ["copysignl function", "_copysignl function", "copysign function", "_copysignf function", "_copysign function", "copysignf function"]
ms.assetid: 009216d6-72a2-402d-aa6c-91d924b2c9e4
---
# `copysign`, `copysignf`, `copysignl`, `_copysign`, `_copysignf`, `_copysignl`

Returns a value that has the magnitude of one argument and the sign of another.

## Syntax

```C
double copysign(
   double x,
   double y
);
float copysign(
   float x,
   float y
); // C++ only
long double copysign(
   long double x,
   long double y
); // C++ only
float copysignf(
   float x,
   float y
); // C++ only
long double copysignl(
   long double x,
   long double y
); // C++ only
double _copysign(
   double x,
   double y
);
long double _copysignl(
   long double x,
   long double y
);
#define copysign(X, Y) // Requires C11 or higher
```

### Parameters

*`x`*\
The floating-point value that's returned as the magnitude of the result.

*`y`*\
The floating-point value that's returned as the sign of the result.

[Math and floating-point support](../floating-point-support.md)

## Return value

The **`copysign`** functions return a floating-point value that combines the magnitude of *`x`* and the sign of *`y`*. There's no error return.

## Remarks

Because C++ allows overloading, you can call overloads of **`copysign`** that take and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`copysign`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `copysign()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | Required header |
|---|---|
| **`_copysign`** | \<float.h> |
| **`copysign`**, **`copysignf`**, **`copysignl`**, **`_copysignf`**, **`_copysignl`** | \<math.h> |
| **`copysign`** macro | \<tgmath.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[`fabs`, `fabsf`, `fabsl`](fabs-fabsf-fabsl.md)\
[`_chgsign`, `_chgsignf`, `_chgsignl`](chgsign-chgsignf-chgsignl.md)
