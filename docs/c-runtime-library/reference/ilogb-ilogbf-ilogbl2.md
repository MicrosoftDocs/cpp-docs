---
title: "ilogb, ilogbf, ilogbl2"
description: "API reference for ilogb, ilogbf, and ilogbl2; which retrieve an integer that represents the unbiased base-2 exponent of the specified value."
ms.date: "9/1/2020"
api_name: ["ilogb", "ilogbf", "ilogbl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ilogb", "ilogbf", "ilogbl", "math/ilogb", "math/ilogbf", "math/ilogbl"]
helpviewer_keywords: ["ilogb function", "ilogbf function", "ilogbl function"]
ms.assetid: 9ef19d57-1caa-41d5-8233-2faad3562fcb
---
# `ilogb`, `ilogbf`, `ilogbl`

Retrieves an integer that represents the unbiased base-2 exponent of the specified value.

## Syntax

```C
int ilogb(
   double x
);

int ilogb(
   float x
); //C++ only

int ilogb(
   long double x
); //C++ only

int ilogbf(
   float x
);

int ilogbl(
   long double x
);

#define ilogbl(X) // Requires C11 or higher
```

### Parameters

*`x`*\
The specified value.

## Return value

If successful, these functions return the base-2 exponent of *`x`* as a **`signed int`** value.

Otherwise, the functions return one of the following values, defined in \<math.h>:

| Input | Result |
|---|---|
| ±0 | `FP_ILOGB0` |
| ± INF, ± NAN, IND | `FP_ILOGBNAN` |

Errors are reported as specified in [`_matherr`](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **`ilogb`** that take and return **`float`** and **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`ilogb`** always takes and returns a **`double`**.

If you use the \<tgmath.h> `ilogb()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

Calling this function is similar to calling the equivalent `logb` function, then casting the return value to **`int`**.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`ilogb`**, **`ilogbf`**, **`ilogbl`** | \<math.h> | \<cmath> |
| **`ilogb`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`frexp`](frexp.md)\
[`logb`, `logbf`, `logbl`, `_logb`, `_logbf`](logb-logbf-logbl-logb-logbf.md)
