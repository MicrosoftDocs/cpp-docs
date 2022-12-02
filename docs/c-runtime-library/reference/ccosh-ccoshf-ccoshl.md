---
description: "Learn more about: ccosh, ccoshf, ccoshl"
title: "ccosh, ccoshf, ccoshl"
ms.date: "11/04/2016"
api_name: ["ccosh", "ccoshf", "ccoshl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ccosh", "ccoshf", "ccoshl", "complex/ccosh", "complex/ccoshf", "complex/ccoshl"]
helpviewer_keywords: ["ccosh function", "ccoshf function", "ccoshl function"]
ms.assetid: 79667449-4edf-4948-bf6b-720adf2b3f3b
---
# `ccosh`, `ccoshf`, `ccoshl`

Retrieves the hyperbolic cosine of a complex number.

## Syntax

```C
_Dcomplex ccosh(
   _Dcomplex z
);
_Fcomplex ccosh(
   _Fcomplex z
);  // C++ only
_Lcomplex ccosh(
   _Lcomplex z
);  // C++ only
_Fcomplex ccoshf(
   _Fcomplex z
);
_Lcomplex ccoshl(
   _Lcomplex z
);
```

### Parameters

*`z`*\
A complex number that represents the angle, in radians.

## Return value

The hyperbolic cosine of *`z`*, in radians.

## Remarks

Because C++ allows overloading, you can call overloads of **`ccosh`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`ccosh`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`ccosh`**, **`ccoshf`**, **`ccoshl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`catanh`, `catanhf`, `catanhl`](catanh-catanhf-catanhl.md)\
[`ctanh`, `ctanhf`, `ctanhl`](ctanh-ctanhf-ctanhl.md)\
[`catan`, `catanf`, `catanl`](catan-catanf-catanl.md)\
[`csinh`, `csinhf`, `csinhl`](csinh-csinhf-csinhl.md)\
[`casinh`, `casinhf`, `casinhl`](casinh-casinhf-casinhl.md)\
[`cacosh`, `cacoshf`, `cacoshl`](cacosh-cacoshf-cacoshl.md)\
[`cacos`, `cacosf`, `cacosl`](cacos-cacosf-cacosl.md)\
[`ctan`, `ctanf`, `ctanl`](ctan-ctanf-ctanl.md)\
[`csin`, `csinf`, `csinl`](csin-csinf-csinl.md)\
[`casin`, `casinf`, `casinl`](casin-casinf-casinl.md)\
[`ccos`, `ccosf`, `ccosl`](ccos-ccosf-ccosl.md)\
[`csqrt`, `csqrtf`, `csqrtl`](csqrt-csqrtf-csqrtl.md)
