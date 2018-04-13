---
title: "csqrt, csqrtf, csqrtl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["csqrt", "csqrtf", "csqrtl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["csqrt", "csqrtf", "csqrtl", "complex/csqrt", "complex/csqrtf", "complex/csqrtl"]
dev_langs: ["C++"]
helpviewer_keywords: ["csqrt function", "csqrtf function", "csqrtl function"]
ms.assetid: b65f086b-0f55-4622-a7a3-4e79d9c9c05c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# csqrt, csqrtf, csqrtl

Retrieves the square root of a complex number, with a branch cut along the negative real axis.

## Syntax

```C
_Dcomplex csqrt(
   _Dcomplex z
);
_Fcomplex csqrt(
   _Fcomplex z
);  // C++ only
_Lcomplex csqrt(
   _Lcomplex z
);  // C++ only
_Fcomplex csqrtf(
   _Fcomplex z
);
_Lcomplex csqrtl(
   _Lcomplex z
);
```

### Parameters

*z*
A complex number.

## Return Value

The square root of *z*. The result is in the right half-plane.

|Input|SEH Exception|`_matherr` Exception|
|-----------|-------------------|--------------------------|
|± QNAN, IND|none|_DOMAIN|
|- ∞|none|_DOMAIN|

## Remarks

Because C++ allows overloading, you can call overloads of `csqrt` that take and return `_Fcomplex` and `_Lcomplex` values. In a C program, `csqrt` always takes and returns a `_Dcomplex` value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|`csqrt`,               `csqrtf`, `csqrtl`|\<complex.h>|\<ccomplex>|

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
[ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)<br/>
