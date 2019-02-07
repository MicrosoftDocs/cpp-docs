---
title: "ctan, ctanf, ctanl"
ms.date: "11/04/2016"
apiname: ["ctan", "ctanf", "ctanl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ctan", "ctanf", "ctanl", "complex/ctan", "complex/ctanf", "complex/ctanl"]
helpviewer_keywords: ["ctan function", "ctanf function", "ctanl function"]
ms.assetid: d3cbd25c-1e93-4a6d-8154-da42921f7223
---
# ctan, ctanf, ctanl

Retrieves the tangent of a complex number.

## Syntax

```C
_Dcomplex ctan(
   _Dcomplex z
);
_Fcomplex ctan(
   _Fcomplex z
);  // C++ only
_Lcomplex ctan(
   _Lcomplex z
);  // C++ only
_Fcomplex ctanf(
   _Fcomplex z
);
_Lcomplex ctanl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number that represents the angle, in radians.

## Return Value

The tangent of *z*.

|Input|SEH Exception|**_matherr** Exception|
|-----------|-------------------|--------------------------|
|± ∞, QNAN, IND|none|_DOMAIN|
|± ∞ (**tan**, **tanf**)|INVALID|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of **ctan** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **ctan** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**ctan**,               **ctanf**, **ctanl**|\<complex.h>|\<ccomplex>|

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
- [csin, csinf, csinl](csin-csinf-csinl.md)
- [casin, casinf, casinl](casin-casinf-casinl.md)
- [ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)
- [csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)
