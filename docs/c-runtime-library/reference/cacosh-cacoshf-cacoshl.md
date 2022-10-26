---
description: "Learn more about: cacosh, cacoshf, cacoshl"
title: "cacosh, cacoshf, cacoshl"
ms.date: "11/04/2016"
api_name: ["cacosh", "cacoshf", "cacoshl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cacosh", "cacoshf", "cacoshl", "complex/cacosh", "complex/cacoshf", "complex/cacoshl"]
helpviewer_keywords: ["cacosh function", "cacoshf function", "cacoshl function"]
ms.assetid: 83fd05eb-3587-4741-9be6-589a830a1703
---
# `cacosh`, `cacoshf`, `cacoshl`

Retrieves the inverse hyperbolic cosine of a complex number with a branch cut at values less than 1 along the real axis.

## Syntax

```C
_Dcomplex cacosh(
   _Dcomplex z
);
_Fcomplex cacosh(
   _Fcomplex z
);  // C++ only
_Lcomplex cacosh(
   _Lcomplex z
);  // C++ only
_Fcomplex cacoshf(
   _Fcomplex z
);
_Lcomplex cacoshl(
   _Lcomplex z
);
```

### Parameters

*`z`*\
A complex number that represents an angle, in radians.

## Return value

The inverse hyperbolic cosine of *`z`*, in radians. The result is unbounded and non-negative along the real axis, and  in the interval [-iπ, +iπ] along the imaginary axis.

## Remarks

Because C++ allows overloading, you can call overloads of **`cacosh`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`cacosh`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`cacosh`**, **`cacoshf`**, **`cacoshl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`catanh`, `catanhf`, `catanhl`](catanh-catanhf-catanhl.md)\
[`ctanh`, `ctanhf`, `ctanhl`](ctanh-ctanhf-ctanhl.md)\
[`catan`, `catanf`, `catanl`](catan-catanf-catanl.md)\
[`csinh`, `csinhf`, `csinhl`](csinh-csinhf-csinhl.md)\
[`casinh`, `casinhf`, `casinhl`](casinh-casinhf-casinhl.md)\
[`ccosh`, `ccoshf`, `ccoshl`](ccosh-ccoshf-ccoshl.md)\
[`cacos`, `cacosf`, `cacosl`](cacos-cacosf-cacosl.md)\
[`ctan`, `ctanf`, `ctanl`](ctan-ctanf-ctanl.md)\
[`csin`, `csinf`, `csinl`](csin-csinf-csinl.md)\
[`casin`, `casinf`, `casinl`](casin-casinf-casinl.md)\
[`ccos`, `ccosf`, `ccosl`](ccos-ccosf-ccosl.md)\
[`csqrt`, `csqrtf`, `csqrtl`](csqrt-csqrtf-csqrtl.md)
