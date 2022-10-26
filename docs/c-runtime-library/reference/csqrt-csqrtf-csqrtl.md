---
description: "Learn more about: csqrt, csqrtf, csqrtl"
title: "csqrt, csqrtf, csqrtl"
ms.date: "11/04/2016"
api_name: ["csqrt", "csqrtf", "csqrtl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["csqrt", "csqrtf", "csqrtl", "complex/csqrt", "complex/csqrtf", "complex/csqrtl"]
helpviewer_keywords: ["csqrt function", "csqrtf function", "csqrtl function"]
ms.assetid: b65f086b-0f55-4622-a7a3-4e79d9c9c05c
---
# `csqrt`, `csqrtf`, `csqrtl`

Retrieves the square root of a complex number, with a branch cut along the negative real axis.

## Syntax

```C
_Dcomplex csqrt(
   _Dcomplex z
);
_Fcomplex csqrt(
   _Fcomplex z
);  // C++ only
_Lcomplex csqrt(
   _Lcomplex z
);  // C++ only
_Fcomplex csqrtf(
   _Fcomplex z
);
_Lcomplex csqrtl(
   _Lcomplex z
);
```

### Parameters

*`z`*\
A complex number.

## Return value

The square root of *`z`*. The result is in the right half-plane.

| Input | SEH exception | `_matherr` exception |
|---|---|---|
| ± QNaN, IND | none | _DOMAIN |
| - INF | none | _DOMAIN |

## Remarks

Because C++ allows overloading, you can call overloads of **`csqrt`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`csqrt`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`csqrt`**, **`csqrtf`**, **`csqrtl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`catanh`, `catanhf`, `catanhl`](catanh-catanhf-catanhl.md)\
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
[`ccos`, `ccosf`, `ccosl`](ccos-ccosf-ccosl.md)
