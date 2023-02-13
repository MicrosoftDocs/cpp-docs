---
description: "Learn more about: catan, catanf, catanl"
title: "catan, catanf, catanl"
ms.date: "11/04/2016"
api_name: ["catan", "catanf", "catanl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["catan", "catanf", "catanl", "complex/catan", "complex/catanf", "complex/catanl"]
helpviewer_keywords: ["catan function", "catanf function", "catanl function"]
ms.assetid: 8415ed9c-7909-4d08-b532-4630bafdc7e8
---
# `catan`, `catanf`, `catanl`

Retrieves the arctangent of a complex number with branch cuts outside the interval [-1; +1] along the imaginary axis.

## Syntax

```C
_Dcomplex catan( _Dcomplex z );
_Fcomplex catanf( _Fcomplex z );
_Lcomplex catanl( _Lcomplex z );
```

```cpp
_Fcomplex catan( _Fcomplex z );  // C++ only
_Lcomplex catan( _Lcomplex z );  // C++ only
```

### Parameters

*`z`*\
A complex number that represents an angle, in radians.

## Return value

The arctangent of *`z`*, in radians. The result is unbounded along the imaginary axis, and  in the interval [-π/2; +π/2] along the real axis.

## Remarks

Because C++ allows overloading, you can call overloads of **`catan`** that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, **`catan`** always takes and returns a `_Dcomplex` value.

## Requirements

| Routine | C header | C++ header |
|---|---|---|
| **`catan`**, **`catanf`**, **`catanl`** | \<complex.h> | \<ccomplex> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`catanh`, `catanhf`, `catanhl`](catanh-catanhf-catanhl.md)\
[`ctanh`, `ctanhf`, `ctanhl`](ctanh-ctanhf-ctanhl.md)\
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
