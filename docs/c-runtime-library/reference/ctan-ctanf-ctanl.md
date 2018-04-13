---
title: "ctan, ctanf, ctanl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["ctan", "ctanf", "ctanl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ctan", "ctanf", "ctanl", "complex/ctan", "complex/ctanf", "complex/ctanl"]
dev_langs: ["C++"]
helpviewer_keywords: ["ctan function", "ctanf function", "ctanl function"]
ms.assetid: d3cbd25c-1e93-4a6d-8154-da42921f7223
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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

*z*
A complex number that represents the angle, in radians.

## Return Value

The tangent of *z*.

|Input|SEH Exception|`_matherr` Exception|
|-----------|-------------------|--------------------------|
|± ∞, QNAN, IND|none|_DOMAIN|
|± ∞ (`tan`, `tanf`)|INVALID|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of `ctan` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `ctan` always takes and returns a `_Dcomplex` value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|`ctan`,               `ctanf`, `ctanl`|\<complex.h>|\<ccomplex>|

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
[cacos, cacosf, cacosl](../../c-runtime-library/reference/cacos-cacosf-cacosl.md)<br/>
[csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)<br/>
