---
title: "cacosh, cacoshf, cacoshl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["cacosh", "cacoshf", "cacoshl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cacosh", "cacoshf", "cacoshl", "complex/cacosh", "complex/cacoshf", "complex/cacoshl"]
dev_langs: ["C++"]
helpviewer_keywords: ["cacosh function", "cacoshf function", "cacoshl function"]
ms.assetid: 83fd05eb-3587-4741-9be6-589a830a1703
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# cacosh, cacoshf, cacoshl

Retrieves the inverse hyperbolic cosine of a complex number with a branch cut at values less than 1 along the real axis. .

## Syntax

```C
_Dcomplex cacosh(
   _Dcomplex z
);
_Fcomplex cacosh(
   _Fcomplex z
);  // C++ only
_Lcomplex cacosh(
   _Lcomplex z
);  // C++ only
_Fcomplex cacoshf(
   _Fcomplex z
);
_Lcomplex cacoshl(
   _Lcomplex z
);
```

### Parameters

*z*
A complex number that represents an angle, in radians.

## Return Value

The inverse hyperbolic cosine of *z*, in radians. The result is unbounded and non-negative along the real axis, and  in the interval [-iπ, +iπ] along the imaginary axis.

## Remarks

Because C++ allows overloading, you can call overloads of `cacosh` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `cacosh` always takes and returns a `_Dcomplex` value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|`cacosh`,               `cacoshf`, `cacoshl`|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](../../c-runtime-library/reference/catanh-catanhf-catanhl.md)<br/>
[ctanh, ctanhf, ctanhl](../../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)<br/>
[catan, catanf, catanl](../../c-runtime-library/reference/catan-catanf-catanl.md)<br/>
[csinh, csinhf, csinhl](../../c-runtime-library/reference/csinh-csinhf-csinhl.md)<br/>
[casinh, casinhf, casinhl](../../c-runtime-library/reference/casinh-casinhf-casinhl.md)<br/>
[ccosh, ccoshf, ccoshl](../../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)<br/>
[cacos, cacosf, cacosl](../../c-runtime-library/reference/cacos-cacosf-cacosl.md)<br/>
[ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)<br/>
