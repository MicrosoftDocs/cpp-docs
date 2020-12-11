---
description: "Learn more about: csin, csinf, csinl"
title: "csin, csinf, csinl"
ms.date: "11/04/2016"
api_name: ["csin", "csinf", "csinl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["csin", "csinf", "csinl", "complex/csin", "complex/csinf", "complex/csinl"]
helpviewer_keywords: ["csin function", "csinf function", "csinl function"]
ms.assetid: 3ed475e8-9aae-42ba-a25c-7ae656a0fd4d
---
# csin, csinf, csinl

Retrieves the sine of a complex number.

## Syntax

```C
_Dcomplex csin(
   _Dcomplex z
);
_Fcomplex csin(
   _Fcomplex z
);  // C++ only
_Lcomplex csin(
   _Lcomplex z
);  // C++ only
_Fcomplex csinf(
   _Fcomplex z
);
_Lcomplex csinl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number that represents an angle, in radians.

## Return Value

The sine of *z*, in radians.

## Remarks

Because C++ allows overloading, you can call overloads of **csin** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **csin** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**csin**,               **csinf**, **csinl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](catanh-catanhf-catanhl.md)<br/>
[ctanh, ctanhf, ctanhl](ctanh-ctanhf-ctanhl.md)<br/>
[catan, catanf, catanl](catan-catanf-catanl.md)<br/>
[csinh, csinhf, csinhl](csinh-csinhf-csinhl.md)<br/>
[casinh, casinhf, casinhl](casinh-casinhf-casinhl.md)<br/>
[ccosh, ccoshf, ccoshl](ccosh-ccoshf-ccoshl.md)<br/>
[cacosh, cacoshf, cacoshl](cacosh-cacoshf-cacoshl.md)<br/>
[cacos, cacosf, cacosl](cacos-cacosf-cacosl.md)<br/>
[ctan, ctanf, ctanl](ctan-ctanf-ctanl.md)<br/>
[casin, casinf, casinl](casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)<br/>
