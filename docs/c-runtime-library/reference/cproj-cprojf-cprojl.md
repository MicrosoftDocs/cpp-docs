---
title: "cproj, cprojf, cprojl"
description: "API reference for cproj, cprojf, and cprojl; which retrieve the projection of a complex number on the Reimann sphere."
ms.date: "9/2/2020"
api_name: ["cproj", "cprojf", "cprojl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cproj", "cprojf", "cprojl", "complex/cproj", "complex/cprojf", "complex/cprojl"]
helpviewer_keywords: ["cproj function", "cprojf function", "cprojl function"]
ms.assetid: 32b49623-13bf-4cae-802e-7912d75030fe
---
# `cproj`, `cprojf`, `cprojl`

Retrieves the projection of a complex number on the Reimann sphere.

## Syntax

```C
_Dcomplex cproj(
   _Dcomplex z
);
_Fcomplex cproj(
   _Fcomplex z
);  // C++ only
_Lcomplex cproj(
   _Lcomplex z
);  // C++ only
_Fcomplex cprojf(
   _Fcomplex z
);
_Lcomplex cprojl(
   _Lcomplex z
);
#define cproj(X) // Requires C11 or higher
```

### Parameters

*`z`*\
A complex number.

## Return value

The projection of *`z`* on the Reimann sphere.

## Remarks

Because C++ allows overloading, you can call overloads of **`cproj`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, unless you're using the \<tgmath.h> macro to call this function, **`cproj`** always takes and returns a `_Dcomplex` value.

If you use the \<tgmath.h> `cproj()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../tgmath.md) for details.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`cproj`**, **`cprojf`**, **`cprojl`** | \<complex.h> | \<ccomplex> |
| **`cproj`** macro | \<tgmath.h> |  |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`norm`, `normf`, `norml`](norm-normf-norml1.md)\
[`creal`, `crealf`, `creall`](creal-crealf-creall.md)\
[`conj`, `conjf`, `conjl`](conj-conjf-conjl.md)\
[`cimag`, `cimagf`, `cimagl`](cimag-cimagf-cimagl.md)\
[`carg`, `cargf`, `cargl`](carg-cargf-cargl.md)\
[`cabs`, `cabsf`, `cabsl`](cabs-cabsf-cabsl.md)
