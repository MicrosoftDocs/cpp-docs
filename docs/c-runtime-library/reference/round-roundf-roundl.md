---
title: "round, roundf, roundl"
description: "API reference for round, roundf, and roundl; which round a floating-point value to the nearest integer value."
ms.date: "09/25/2020"
api_name: ["round", "roundl", "roundf", "_o_round", "_o_roundf", "_o_roundl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["roundf", "roundl", "round"]
helpviewer_keywords: ["roundl function", "round function", "roundf function"]
ms.assetid: 6be90877-193c-4b80-a32b-c3eca33f9c6f
---
# `round`, `roundf`, `roundl`

Rounds a floating-point value to the nearest integer value.

## Syntax

```C
double round(
   double x
);
float round(
   float x
);  // C++ only
long double round(
   long double x
);  // C++ only
float roundf(
   float x
);
long double roundl(
   long double x
);
#define round(X) // Requires C11 or higher
```

### Parameters

*`x`*\
The floating-point value to round.

## Return value

The **`round`** functions return a floating-point value that represents the nearest integer to *`x`*. Halfway values are rounded away from zero, regardless of the setting of the floating-point rounding mode. There's no error return.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | `_DOMAIN` |

## Remarks

Because C++ allows overloading, you can call overloads of **`round`** that take and return **`float`** and **`long double`** values. In a C program, unless you're using the `<tgmath.h>` macro to call this function, **`round`** always takes and returns a **`double`**.

If you use the `round` macro from `<tgmath.h>`, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`round`**, **`roundf`**, **`roundl`** | `<math.h>` |
| **`round`** macro | `<tgmath.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// Build with: cl /W3 /Tc
// This example displays the rounded
// results of floating-point values

#include <math.h>
#include <stdio.h>

int main()
{
    printf("===== Round a float\n\n");
    float floatValue = 2.4999999f; // float stores a value close to, but not exactly equal to, the initializer below. floatValue will contain 2.5 because it is the closest single precision value
    printf("roundf(%.1000g) is %.1000g\n", floatValue, roundf(floatValue));
    printf("roundf(%.1000g) is %.1000g\n", -floatValue, roundf(-floatValue));

    // double stores a value close to, but not exactly equal to, the initializer below. The closest double value is just slightly larger.
    double doubleValue = 2.4999999;
    printf("\n===== Round a double\n\n");
    printf("round(%.1000g) is %.1000g\n", doubleValue, round(doubleValue));
    printf("round(%.1000g) is %.1000g\n", -doubleValue, round(-doubleValue));

    // long double stores a value close to, but not exactly equal to, the initializer below. The closest long double value is just slightly larger.
    long double longDoubleValue = 2.4999999L;
    printf("\n===== Round a long double\n\n");
    printf("roundl(%.1000g) is %.1000g\n", longDoubleValue, roundl(longDoubleValue));
    printf("roundl(%.1000g) is %.1000g\n", -longDoubleValue, roundl(-longDoubleValue));

    return 0;
}
```

```Output
===== Round a float

roundf(2.5) is 3
roundf(-2.5) is -3

===== Round a double

round(2.499999900000000163657887242152355611324310302734375) is 2
round(-2.499999900000000163657887242152355611324310302734375) is -2

===== Round a long double

roundl(2.499999900000000163657887242152355611324310302734375) is 2
roundl(-2.499999900000000163657887242152355611324310302734375) is -2
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`ceil`, `ceilf`, `ceill`](ceil-ceilf-ceill.md)\
[`floor`, `floorf`, `floorl`](floor-floorf-floorl.md)\
[`fmod`, `fmodf`](fmod-fmodf.md)\
[`lrint`, `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)\
[`lround`, `lroundf`, `lroundl`, `llround`, `llroundf`, `llroundl`](lround-lroundf-lroundl-llround-llroundf-llroundl.md)\
[`nearbyint`, `nearbyintf`, `nearbyintl`](nearbyint-nearbyintf-nearbyintl1.md)\
[`rint`, `rintf`, `rintl`](rint-rintf-rintl.md)
