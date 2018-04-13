---
title: "cacos, cacosf, cacosl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["cacos", "cacosf", "cacosl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cacos", "cacosf", "cacosl", "complex/cacos", "complex/cacosf", "complex/cacosl"]
dev_langs: ["C++"]
helpviewer_keywords: ["cacos function", "cacosf function", "cacosl function"]
ms.assetid: 78118c00-0a07-49c1-8a13-4bf19ce3aea8
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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

*z*
A complex number that represents an angle, in radians.

## Return Value

The arccosine of *z*, in radians. The result is unbounded along the imaginary axis, and  in the  in the interval [0, π] along the real axis. A domain error will occur if *z* is outside the interval [-1, +1].

## Remarks

Because C++ allows overloading, you can call overloads of `cacos` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `cacos` always takes and returns a `_Dcomplex` value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|`cacos`,               `cacosf`, `cacosl`|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](../../c-runtime-library/reference/catanh-catanhf-catanhl.md)<br/>
[ctanh, ctanhf, ctanhl](../../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)<br/>
[catan, catanf, catanl](../../c-runtime-library/reference/catan-catanf-catanl.md)<br/>
[csinh, csinhf, csinhl](../../c-runtime-library/reference/csinh-csinhf-csinhl.md)<br/>
[casinh, casinhf, casinhl](../../c-runtime-library/reference/casinh-casinhf-casinhl.md)<br/>
[ccosh, ccoshf, ccoshl](../../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)<br/>
[cacosh, cacoshf, cacoshl](../../c-runtime-library/reference/cacosh-cacoshf-cacoshl.md)<br/>
[ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)<br/>
