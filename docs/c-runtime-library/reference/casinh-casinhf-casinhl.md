---
title: "casinh, casinhf, casinhl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["casinh", "casinhl", "casinhf"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["casinh", "casinhf", "casinhl", "complex/casinh", "complex/casinhf", "complex/casinhl"]
dev_langs: ["C++"]
helpviewer_keywords: ["casinh function", "casinhf function", "casinhl function"]
ms.assetid: bd18340b-21dd-4c86-a14e-e8e15dd97e3b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# casinh, casinhf, casinhl

Retrieves the inverse hyperbolic sine of a complex number, with branch cuts outside the interval [-i, +i] along the imaginary axis.

## Syntax

```C
_Dcomplex casinh(
   _Dcomplex z
);
_Fcomplex casinh(
   _Fcomplex z
);  // C++ only
_Lcomplex casinh(
   _Lcomplex z
);  // C++ only
_Fcomplex casinhf(
   _Fcomplex z
);
_Lcomplex casinhl(
   _Lcomplex z
);
```

### Parameters

*z*
A complex number that represents an angle, in radians.

## Return Value

The inverse hyperbolic sine of *z*, in radians. The result is unbound along the real axis, and in the interval [-iπ/2, +iπ/2] along the imaginary axis.

## Remarks

Because C++ allows overloading, you can call overloads of `casinh` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `casinh` always takes and returns a `_Dcomplex` value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|`casinh`,               `casinhf`, `casinhl`|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](../../c-runtime-library/reference/catanh-catanhf-catanhl.md)<br/>
[ctanh, ctanhf, ctanhl](../../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)<br/>
[catan, catanf, catanl](../../c-runtime-library/reference/catan-catanf-catanl.md)<br/>
[csinh, csinhf, csinhl](../../c-runtime-library/reference/csinh-csinhf-csinhl.md)<br/>
[ccosh, ccoshf, ccoshl](../../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)<br/>
[cacosh, cacoshf, cacoshl](../../c-runtime-library/reference/cacosh-cacoshf-cacoshl.md)<br/>
[cacos, cacosf, cacosl](../../c-runtime-library/reference/cacos-cacosf-cacosl.md)<br/>
[ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)<br/>
