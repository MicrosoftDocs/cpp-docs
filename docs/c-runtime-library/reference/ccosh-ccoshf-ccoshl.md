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
# ccosh, ccoshf, ccoshl

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

*z*<br/>
A complex number that represents the angle, in radians.

## Return Value

The hyperbolic cosine of *z*, in radians.

## Remarks

Because C++ allows overloading, you can call overloads of **ccosh** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **ccosh** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**ccosh**,               **ccoshf**, **ccoshl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](catanh-catanhf-catanhl.md)<br/>
[ctanh, ctanhf, ctanhl](ctanh-ctanhf-ctanhl.md)<br/>
[catan, catanf, catanl](catan-catanf-catanl.md)<br/>
[csinh, csinhf, csinhl](csinh-csinhf-csinhl.md)<br/>
[casinh, casinhf, casinhl](casinh-casinhf-casinhl.md)<br/>
[cacosh, cacoshf, cacoshl](cacosh-cacoshf-cacoshl.md)<br/>
[cacos, cacosf, cacosl](cacos-cacosf-cacosl.md)<br/>
[ctan, ctanf, ctanl](ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)<br/>
