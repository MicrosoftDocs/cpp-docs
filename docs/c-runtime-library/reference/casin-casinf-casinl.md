---
title: "casin, casinf, casinl"
ms.date: "11/04/2016"
apiname: ["casin", "casinf", "casinl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["casin", "casinf", "casinl", "complex/casin", "complex/casinf", "complex/casinl"]
helpviewer_keywords: ["casin function", "casinf function", "casinl function"]
ms.assetid: b75d1455-7b1e-43b0-bd46-c530be190be9
---
# casin, casinf, casinl

Retrieves the arcsine of a complex number, with branch cuts outside the interval [-1, +1] along the real axis.

## Syntax

```C
_Dcomplex casin(
   _Dcomplex z
);
_Fcomplex casin(
   _Fcomplex z
);  // C++ only
_Lcomplex casin(
   _Lcomplex z
);  // C++ only
_Fcomplex casinf(
   _Fcomplex z
);
_Lcomplex casinl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number that represents an angle, in radians.

## Return Value

The arcsine of *z*, in radians. The result is unbounded along the imaginary axis, and in the interval [-π/2, +π/2] along the real axis.

## Remarks

Because C++ allows overloading, you can call overloads of **casin** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **casin** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**casin**,               **casinf**, **casinl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

- [Alphabetical Function Reference](crt-alphabetical-function-reference.md)
- [catanh, catanhf, catanhl](catanh-catanhf-catanhl.md)
- [ctanh, ctanhf, ctanhl](ctanh-ctanhf-ctanhl.md)
- [catan, catanf, catanl](catan-catanf-catanl.md)
- [csinh, csinhf, csinhl](csinh-csinhf-csinhl.md)
- [casinh, casinhf, casinhl](casinh-casinhf-casinhl.md)
- [ccosh, ccoshf, ccoshl](ccosh-ccoshf-ccoshl.md)
- [cacosh, cacoshf, cacoshl](cacosh-cacoshf-cacoshl.md)
- [cacos, cacosf, cacosl](cacos-cacosf-cacosl.md)
- [ctan, ctanf, ctanl](ctan-ctanf-ctanl.md)
- [csin, csinf, csinl](csin-csinf-csinl.md)
- [ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)
- [csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)
