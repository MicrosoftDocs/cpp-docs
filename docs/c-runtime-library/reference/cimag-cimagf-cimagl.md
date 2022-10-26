---
title: "cimag, cimagf, cimagl"
description: "API reference for cimag, cimagf, and cimagl; which retrieve the imaginary part of a complex number."
ms.date: "9/2/2020"
api_name: ["cimag", "cimagf", "cimagl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cimagf", "cimagl", "complex/cimag", "complex/cimagf", "complex/cimagl", "cimag"]
helpviewer_keywords: ["cimag function", "cimagf function", "cimagl function"]
ms.assetid: 0d8836f5-d61d-44cd-8731-6f75cb776def
---
# `cimag`, `cimagf`, `cimagl`

Retrieves the imaginary part of a complex number.

## Syntax

```C
double cimag( _Dcomplex z );
float cimagf( _Fcomplex z );
long double cimagl( _Lcomplex z );
#define cimag(X) // Requires C11 or higher

float cimag( _Fcomplex z );  // C++ only
long double cimag( _Lcomplex z );  // C++ only
```

### Parameters

*`z`*\
A complex number.

## Return value

The imaginary part of *`z`*.

## Remarks

Because C++ allows overloading, you can call overloads of **`cimag`** that take `_Fcomplex` or `_Lcomplex` values, and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`cimag`** always takes a `_Dcomplex` value and returns a **`double`** value.

If you use the \<tgmath.h> `cimag()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`cimag`**, **`cimagf`**, **`cimagl`** | \<complex.h> | \<ccomplex> |
| **`cimag`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`norm`, `normf`, `norml`](norm-normf-norml1.md)\
[`creal`, `crealf`, `creall`](creal-crealf-creall.md)\
[`cproj`, `cprojf`, `cprojl`](cproj-cprojf-cprojl.md)\
[`conj`, `conjf`, `conjl`](conj-conjf-conjl.md)\
[`carg`, `cargf`, `cargl`](carg-cargf-cargl.md)\
[`cabs`, `cabsf`, `cabsl`](cabs-cabsf-cabsl.md)
