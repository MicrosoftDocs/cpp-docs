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
# catan, catanf, catanl

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

*z*<br/>
A complex number that represents an angle, in radians.

## Return Value

The arctangent of *z*, in radians. The result is unbounded along the imaginary axis, and  in the interval [-π/2; +π/2] along the real axis.

## Remarks

Because C++ allows overloading, you can call overloads of **catan** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **catan** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**catan**,               **catanf**, **catanl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](catanh-catanhf-catanhl.md)<br/>
[ctanh, ctanhf, ctanhl](ctanh-ctanhf-ctanhl.md)<br/>
[csinh, csinhf, csinhl](csinh-csinhf-csinhl.md)<br/>
[casinh, casinhf, casinhl](casinh-casinhf-casinhl.md)<br/>
[ccosh, ccoshf, ccoshl](ccosh-ccoshf-ccoshl.md)<br/>
[cacosh, cacoshf, cacoshl](cacosh-cacoshf-cacoshl.md)<br/>
[cacos, cacosf, cacosl](cacos-cacosf-cacosl.md)<br/>
[ctan, ctanf, ctanl](ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)<br/>
