---
title: "cexp, cexpf, cexpl"
description: "API reference for cexp, cexpf, and cexpl; which compute the base-e exponential of a complex number."
ms.date: "11/04/2016"
api_name: ["cexp", "cexpf", "cexpl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cexp", "cexpf", "cexpl", "complex/cepx", "complex/cexpf", "complex/cexpl"]
helpviewer_keywords: ["cexp function", "cexpl function", "cexpf function"]
ms.assetid: f27fd5a9-70c7-4957-a7ee-5256d19bd1da
---
# `cexp`, `cexpf`, `cexpl`

Compute the base-e exponential of a complex number.

## Syntax

```C
_Dcomplex cexp( _Dcomplex z );
_Fcomplex cexpf( _Fcomplex z );
_Lcomplex cexpl( _Lcomplex z );

_Fcomplex cexp( _Fcomplex z );  // C++ only
_Lcomplex cexp( _Lcomplex z );  // C++ only
```

### Parameters

*`z`*\
A complex number that represents the exponent.

## Return value

The value of **e** raised to the power of *`z`*.

## Remarks

Because C++ allows overloading, you can call overloads of **`cexp`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`cexp`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`cexp`**, **`cexpf`**, **`cexpl`** | \<complex.h> | \<complex.h> |

For compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`cpow`, `cpowf`, `cpowl`](cpow-cpowf-cpowl.md)\
[`clog10`, `clog10f`, `clog10l`](clog10-clog10f-clog10l.md)\
[`clog`, `clogf`, `clogl`](clog-clogf-clogl.md)
