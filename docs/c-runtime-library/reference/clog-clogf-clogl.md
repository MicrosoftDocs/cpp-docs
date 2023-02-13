---
title: "clog, clogf, clogl"
description: "API reference for clog, clogf, and clogl; which retrieve the natural logarithm of a complex number, with a branch cut along the negative real axis."
ms.date: "11/04/2016"
api_name: ["clog", "clogf", "clogl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["clog", "clogf", "clogl", "complex/clog", "complex/clogf", "complex/clogl"]
helpviewer_keywords: ["clog function", "clogf function", "clogl function"]
ms.assetid: 870b9b0b-6618-46f3-bfcf-da595cbd5e18
---
# `clog`, `clogf`, `clogl`

Retrieves the natural logarithm of a complex number, with a branch cut along the negative real axis.

## Syntax

```C
_Dcomplex clog(
   _Dcomplex z
);
_Fcomplex clog(
   _Fcomplex z
);  // C++ only
_Lcomplex clog(
   _Lcomplex z
);  // C++ only
_Fcomplex clogf(
   _Fcomplex z
);
_Lcomplex clogl(
   _Lcomplex z
);
```

### Parameters

*`z`*\
The base of the logarithm.

## Return value

The natural logarithm of *`z`*. The result is unbounded along the real axis and in the interval [-iπ, +iπ] along the imaginary axis.

The possible return values are:

| *`z`* parameter | Return value |
|---|---|
| Positive | The logarithm (base 10) of *`z`* |
| Zero | - INF |
| Negative | NaN |
| NaN | NaN |
| + INF | + INF |

## Remarks

Because C++ allows overloading, you can call overloads of **`clog`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`clog`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`clog`**, **`clogf`**, **`clogl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`cexp`, `cexpf`, `cexpl`](cexp-cexpf-cexpl.md)\
[`cpow`, `cpowf`, `cpowl`](cpow-cpowf-cpowl.md)\
[`clog10`, `clog10f`, `clog10l`](clog10-clog10f-clog10l.md)
