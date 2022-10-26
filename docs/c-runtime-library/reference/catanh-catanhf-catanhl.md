---
description: "Learn more about: catanh, catanhf, catanhl"
title: "catanh, catanhf, catanhl"
ms.date: "11/04/2016"
api_name: ["catanh", "catanhf", "catanhl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["catanh", "catanhf", "catanhl", "complex/catanh", "complex/catanhf", "complex/catanhl"]
helpviewer_keywords: ["catanh function", "catanhf function", "catanhl function"]
ms.assetid: 1b6021cb-647a-41b4-9d7f-919cc8b57b86
---
# `catanh`, `catanhf`, `catanhl`

Retrieves the inverse hyperbolic tangent of a complex number, with branch cuts outside the interval [-1; +1] along the real axis.

## Syntax

```C
_Dcomplex catanh(
   _Dcomplex z
);
_Fcomplex catanh(
   _Fcomplex z
);  // C++ only
_Lcomplex catanh(
   _Lcomplex z
);  //  C++ only
_Fcomplex catanhf(
   _Fcomplex z
);
_Lcomplex catanhl(
   _Lcomplex z
);
```

### Parameters

*`z`*\
A complex number that represents an angle, in radians.

## Return value

The inverse hyperbolic tangent of *`z`*, in radians. The result is unbounded along the real axis, and  in the interval [-iπ/2; +iπ/2] along the imaginary axis. A domain error will occur if *`z`* is outside the interval [-1, +1]. A pole error will occur if *`z`* is -1 or +1.

## Remarks

Because C++ allows overloading, you can call overloads of **`catanh`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`catanh`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`catanh`**, **`catanhf`**, **`catanhl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`ctanh`, `ctanhf`, `ctanhl`](ctanh-ctanhf-ctanhl.md)\
[`catan`, `catanf`, `catanl`](catan-catanf-catanl.md)\
[`csinh`, `csinhf`, `csinhl`](csinh-csinhf-csinhl.md)\
[`casinh`, `casinhf`, `casinhl`](casinh-casinhf-casinhl.md)\
[`ccosh`, `ccoshf`, `ccoshl`](ccosh-ccoshf-ccoshl.md)\
[`cacosh`, `cacoshf`, `cacoshl`](cacosh-cacoshf-cacoshl.md)\
[`cacos`, `cacosf`, `cacosl`](cacos-cacosf-cacosl.md)\
[`ctan`, `ctanf`, `ctanl`](ctan-ctanf-ctanl.md)\
[`csin`, `csinf`, `csinl`](csin-csinf-csinl.md)\
[`casin`, `casinf`, `casinl`](casin-casinf-casinl.md)\
[`ccos`, `ccosf`, `ccosl`](ccos-ccosf-ccosl.md)\
[`csqrt`, `csqrtf`, `csqrtl`](csqrt-csqrtf-csqrtl.md)
