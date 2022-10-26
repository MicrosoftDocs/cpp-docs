---
description: "Learn more about: casinh, casinhf, casinhl"
title: "casinh, casinhf, casinhl"
ms.date: "11/04/2016"
api_name: ["casinh", "casinhl", "casinhf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["casinh", "casinhf", "casinhl", "complex/casinh", "complex/casinhf", "complex/casinhl"]
helpviewer_keywords: ["casinh function", "casinhf function", "casinhl function"]
ms.assetid: bd18340b-21dd-4c86-a14e-e8e15dd97e3b
---
# `casinh`, `casinhf`, `casinhl`

Retrieves the inverse hyperbolic sine of a complex number, with branch cuts outside the interval [-i, +i] along the imaginary axis.

## Syntax

```C
_Dcomplex casinh(
   _Dcomplex z
);
_Fcomplex casinh(
   _Fcomplex z
);  // C++ only
_Lcomplex casinh(
   _Lcomplex z
);  // C++ only
_Fcomplex casinhf(
   _Fcomplex z
);
_Lcomplex casinhl(
   _Lcomplex z
);
```

### Parameters

*`z`*\
A complex number that represents an angle, in radians.

## Return value

The inverse hyperbolic sine of *`z`*, in radians. The result is unbound along the real axis, and in the interval [-iπ/2, +iπ/2] along the imaginary axis.

## Remarks

Because C++ allows overloading, you can call overloads of **`casinh`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`casinh`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`casinh`**, **`casinhf`**, **`casinhl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`catanh`, `catanhf`, `catanhl`](catanh-catanhf-catanhl.md)\
[`ctanh`, `ctanhf`, `ctanhl`](ctanh-ctanhf-ctanhl.md)\
[`catan`, `catanf`, `catanl`](catan-catanf-catanl.md)\
[`csinh`, `csinhf`, `csinhl`](csinh-csinhf-csinhl.md)\
[`ccosh`, `ccoshf`, `ccoshl`](ccosh-ccoshf-ccoshl.md)\
[`cacosh`, `cacoshf`, `cacoshl`](cacosh-cacoshf-cacoshl.md)\
[`cacos`, `cacosf`, `cacosl`](cacos-cacosf-cacosl.md)\
[`ctan`, `ctanf`, `ctanl`](ctan-ctanf-ctanl.md)\
[`csin`, `csinf`, `csinl`](csin-csinf-csinl.md)\
[`casin`, `casinf`, `casinl`](casin-casinf-casinl.md)\
[`ccos`, `ccosf`, `ccosl`](ccos-ccosf-ccosl.md)\
[`csqrt`, `csqrtf`, `csqrtl`](csqrt-csqrtf-csqrtl.md)
