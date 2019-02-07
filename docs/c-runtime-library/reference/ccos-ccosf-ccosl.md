---
title: "ccos, ccosf, ccosl"
ms.date: "11/04/2016"
apiname: ["ccos", "ccosf", "ccosl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ccos", "ccosf", "ccosl", "complex/ccos", "complex/ccosf", "complex/ccosl"]
helpviewer_keywords: ["ccos function", "ccosf function", "ccosl function"]
ms.assetid: 4ab936ac-ff85-49ac-9418-2b69cf5d4696
---
# ccos, ccosf, ccosl

Retrieves the cosine of a complex number.

## Syntax

```C
_Dcomplex ccos(
   _Dcomplex z
);
_Fcomplex ccos(
   _Fcomplex z
);  // C++ only
_Lcomplex ccos(
   _Lcomplex z
);  // C++ only
_Fcomplex ccosf(
   _Fcomplex z
);
_Lcomplex ccosl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number that represents the angle, in radians.

## Return Value

The cosine of *z*, in radians.

## Remarks

Because C++ allows overloading, you can call overloads of **ccos** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **ccos** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**ccos**,               **ccosf**, **ccosl**|\<complex.h>|\<ccomplex>|

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
- [casin, casinf, casinl](casin-casinf-casinl.md)
- [csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)
