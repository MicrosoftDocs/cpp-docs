---
title: "creal, crealf, creall"
description: "API reference for creal, crealf, creall; which retrieve the real part of a complex number."
ms.date: "9/2/2020"
api_name: ["creal", "crealf", "creall"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["creal", "crealf", "creall", "complex/creal", "complex/crealf", "complex/creall"]
helpviewer_keywords: ["creal function", "crealf function", "creall function"]
ms.assetid: fa3ac62f-7aa3-4238-a71f-d6b00cd0c7c8
---
# `creal`, `crealf`, `creall`

Retrieves the real part of a complex number.

## Syntax

```C
double creal( _Dcomplex z );
float crealf( _Fcomplex z );
long double creall( _Lcomplex z );
#define creal(X) // Requires C11 or higher

float creal( _Fcomplex z );  // C++ only
long double creal( _Lcomplex z );  // C++ only
```

### Parameters

*`z`*\
A complex number.

## Return value

The real part of *`z`*.

## Remarks

Because C++ allows overloading, you can call overloads of **`creal`** that take `_Fcomplex` or `_Lcomplex` values, and return **`float`** or **`long double`** values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`creal`** always takes a `_Dcomplex` value and returns a **`double`** value.

If you use the \<tgmath.h> `creal()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`creal`**, **`crealf`**, **`creall`** | \<complex.h> | \<ccomplex> |
| **`creal`** macro | \<tgmath.h> |  |

The `_Fcomplex`, `_Dcomplex`, and `_Lcomplex` types are Microsoft-specific equivalents of the unimplemented native C99 types **float _Complex**, **double _Complex**, and **long double _Complex**, respectively. For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`_Cbuild`, `_FCbuild`, `_LCbuild`](cbuild-fcbuild-lcbuild.md)\
[`norm`, `normf`, `norml`](norm-normf-norml1.md)\
[`cproj`, `cprojf`, `cprojl`](cproj-cprojf-cprojl.md)\
[`conj`, `conjf`, `conjl`](conj-conjf-conjl.md)\
[`cimag`, `cimagf`, `cimagl`](cimag-cimagf-cimagl.md)\
[`carg`, `cargf`, `cargl`](carg-cargf-cargl.md)\
[`cabs`, `cabsf`, `cabsl`](cabs-cabsf-cabsl.md)
