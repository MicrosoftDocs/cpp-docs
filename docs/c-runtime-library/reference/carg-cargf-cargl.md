---
title: "carg, cargf, cargl"
description: "API reference for carg, cargf, and cargl; which retrieve the argument of a complex number, with a branch cut along the negative real axis."
ms.date: "9/2/2020"
api_name: ["carg", "cargf", "cargl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["carg", "cargf", "cargl", "complex/carg", "complex/cargf", "complex/cargl"]
helpviewer_keywords: ["carg function", "cargf function", "cargl function"]
ms.assetid: 610d6a93-b929-46ab-a966-b77db0b804be
---
# `carg`, `cargf`, `cargl`

Retrieves the argument of a complex number, with a branch cut along the negative real axis.

## Syntax

```C
double carg(
   _Dcomplex z
);
float carg(
   _Fcomplex z
);  // C++ only
long double carg(
   _Lcomplex z
);  // C++ only
float cargf(
   _Fcomplex z
);
long double cargl(
   _Lcomplex z
);
#define carg(X) // Requires C11 or higher
```

### Parameters

*`z`*\
A complex number.

## Return value

The argument (also known as the phase) of *`z`*. The result is in the interval [-π, +π].

## Remarks

Because C++ allows overloading, you can call overloads of **`carg`** that take `_Fcomplex` or `_Lcomplex` values, and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`carg`** always takes a `_Dcomplex` value and returns a **`double`** value.

If you use the \<tgmath.h> `carg()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`carg`**, **`cargf`**, **`cargl`** | \<complex.h> | \<ccomplex> |
| **`carg`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`norm`, `normf`, `norml`](norm-normf-norml1.md)\
[`creal`, `crealf`, `creall`](creal-crealf-creall.md)\
[`cproj`, `cprojf`, `cprojl`](cproj-cprojf-cprojl.md)\
[`conj`, `conjf`, `conjl`](conj-conjf-conjl.md)\
[`cimag`, `cimagf`, `cimagl`](cimag-cimagf-cimagl.md)\
[`cabs`, `cabsf`, `cabsl`](cabs-cabsf-cabsl.md)
