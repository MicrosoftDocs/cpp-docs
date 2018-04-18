---
title: "ctanh, ctanhf, ctanhl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["ctanh", "ctahf", "ctahl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ctanh", "ctanhf", "ctanhl", "complex/ctanh", "complex/ctanhf", "complex/ctanhl"]
dev_langs: ["C++"]
helpviewer_keywords: ["ctanh function", "ctanhl function", "ctanhf function"]
ms.assetid: 807f2cd1-8740-4988-afff-5911c346385b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# ctanh, ctanhf, ctanhl

Computes the complex hyperbolic tangent of a complex number.

## Syntax

```C
_Dcomplex ctanh(
   _Dcomplex z
);
_Fcomplex ctanh(
   _Fcomplex z
);  // C++ only
_Lcomplex ctanh(
   _Lcomplex z
);  // C++ only
_Fcomplex ctanhf(
   _Fcomplex z
);
_Lcomplex ctanhl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number that represents an angle, in radians.

## Return Value

The complex hyperbolic tangent of *z*.

|Input|SEH Exception|**_matherr** Exception|
|-----------|-------------------|--------------------------|
|± ∞, QNAN, IND|none|_DOMAIN|
|± ∞ (tan, tanf)|INVALID|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of **ctanh** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **ctanh** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**ctanh**,               **ctanhf**, **ctanhl**|\<complex.h>|\<ccomplex>|

For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](catanh-catanhf-catanhl.md)<br/>
[catan, catanf, catanl](catan-catanf-catanl.md)<br/>
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
