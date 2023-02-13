---
title: "cbrt, cbrtf, cbrtl"
description: "API reference for cbrt, cbrtf, and cbrtl; which calculate a cube root"
ms.date: "9/1/2020"
api_name: ["cbrt", "cbrtf", "cbrtl", "_o_cbrt", "_o_cbrtf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cbrtl", "cbrt", "cbrtf"]
helpviewer_keywords: ["cbrtl function", "cbrtf function", "cbrt function"]
ms.assetid: ab51d916-3db2-4beb-b46a-28b4062cd33f
---
# `cbrt`, `cbrtf`, `cbrtl`

Calculates the cube root.

## Syntax

```C
double cbrt(
   double x
);
float cbrt(
   float x
);  // C++ only
long double cbrt(
   long double x
);  // C++ only
float cbrtf(
   float x
);
long double cbrtl(
   long double x
);
#define cbrt(X) // Requires C11 or higher
```

### Parameters

*`x`*\
Floating-point value

## Return value

The **`cbrt`** functions return the cube-root of *`x`*.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± INF, QNaN, IND | none | none |

## Remarks

Because C++ allows overloading, you can call overloads of **`cbrt`** that take **`float`** or **`long double`** types. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`cbrt`** always takes and returns **`double`**.

If you use the \<tgmath.h> `cbrt()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`cbrt`**, **`cbrtf`**, **`cbrtl`** | \<math.h> | \<cmath> |
| **`cbrt`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_cbrt.c
// Compile using: cl /W4 crt_cbrt.c
// This program calculates a cube root.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double question = -64.64;
   double answer;

   answer = cbrt(question);
   printf("The cube root of %.2f is %.6f\n", question, answer);
}
```

```Output
The cube root of -64.64 is -4.013289
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`exp`, `expf`, `expl`](exp-expf.md)\
[`log`, `logf`, `log10`, `log10f`](log-logf-log10-log10f.md)\
[`pow`, `powf`, `powl`](pow-powf-powl.md)
