---
title: "cacos, cacosf, cacosl"
ms.date: "11/04/2016"
apiname: ["cacos", "cacosf", "cacosl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cacos", "cacosf", "cacosl", "complex/cacos", "complex/cacosf", "complex/cacosl"]
helpviewer_keywords: ["cacos function", "cacosf function", "cacosl function"]
ms.assetid: 78118c00-0a07-49c1-8a13-4bf19ce3aea8
---
# cacos, cacosf, cacosl

Retrieves the arccosine of a complex number, with branch cuts outside the interval [-1, +1] along the real axis.

## Syntax

```C
_Dcomplex cacos( _Dcomplex z );
_Fcomplex cacosf( _Fcomplex z );
_Lcomplex cacosl( _Lcomplex z );
```

```cpp
_Fcomplex cacos( _Fcomplex z );  // C++ only
_Lcomplex cacos( _Lcomplex z );  // C++ only
```

### Parameters

*z*<br/>
A complex number that represents an angle, in radians.

## Return Value

The arccosine of *z*, in radians. The result is unbounded along the imaginary axis, and  in the  in the interval [0, π] along the real axis. A domain error will occur if *z* is outside the interval [-1, +1].

## Remarks

Because C++ allows overloading, you can call overloads of **cacos** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **cacos** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**cacos**,               **cacosf**, **cacosl**|\<complex.h>|\<ccomplex>|

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
- [ctan, ctanf, ctanl](ctan-ctanf-ctanl.md)
- [csin, csinf, csinl](csin-csinf-csinl.md)
- [casin, casinf, casinl](casin-casinf-casinl.md)
- [ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)
- [csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)
