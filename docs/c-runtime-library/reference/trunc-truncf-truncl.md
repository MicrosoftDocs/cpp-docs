---
title: "trunc, truncf, truncl"
description: "API reference for trunc, truncf, truncl; which determine the nearest integer that is less than or equal to the specified floating-point value."
ms.date: "9/1/2020"
api_name: ["trunc", "truncf", "truncl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_MATH/trunc", "CORECRT_MATH/truncf", "CORECRT_MATH/truncl", "math/trunc", "math/truncf", "math/truncl", "trunc", "truncf", "truncl"]
helpviewer_keywords: ["trunc function", "truncf function", "truncl function"]
ms.assetid: de2038ac-ac0b-483e-870c-e8992dcd4fd0
---
# `trunc`, `truncf`, `truncl`

Determines the nearest integer that is less than or equal to the specified floating-point value.

## Syntax

```C
double trunc( double x );
long double truncl( long double x );
#define trunc(X) // Requires C11 or higher

long double trunc( long double x ); //C++ only
float trunc( float x ); //C++ only
```

### Parameters

*`x`*\
The value to truncate.

## Return value

If successful, the functions return an integer value of *`x`*, rounded towards zero.

Otherwise, the functions may return one of the following values:

| Issue | Return |
|---|---|
| *`x`* = ±INFINITY | x |
| *`x`* =  ±0 | x |
| *`x`* = NaN | NaN |

Errors are reported as specified in [`_matherr`](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`trunc`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`trunc`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `trunc()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

Because the largest floating-point values are exact integers, this function won't overflow on its own. However, you may cause the function to overflow by returning a value into an integer type.

You can also round down by implicitly converting from floating-point to integral; however, doing so is limited to the values that can be stored in the target type.

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`trunc`**, **`truncf`**, **`truncl`** | \<math.h> | \<cmath> |
| **`trunc`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`floor`, `floorf`, `floorl`](floor-floorf-floorl.md)\
[`ceil`, `ceilf`, `ceill`](ceil-ceilf-ceill.md)\
[`round`, `roundf`, `roundl`](round-roundf-roundl.md)
