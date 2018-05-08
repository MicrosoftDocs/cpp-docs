---
title: "carg, cargf, cargl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["carg", "cargf", "cargl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["carg", "cargf", "cargl", "complex/carg", "complex/cargf", "complex/cargl"]
dev_langs: ["C++"]
helpviewer_keywords: ["carg function", "cargf function", "cargl function"]
ms.assetid: 610d6a93-b929-46ab-a966-b77db0b804be
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# carg, cargf, cargl

Retrieves the argument  of a complex number, with a branch cut along the negative real axis.

## Syntax

```C
double carg(
   _Dcomplex z
);
float carg(
   _Fcomplex z
);  // C++ only
long double carg(
   _Lcomplex z
);  // C++ only
float cargf(
   _Fcomplex z
);
long double cargl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number.

## Return Value

The argument (also known as the phase) of *z*. The result is in the interval [-π, +π].

## Remarks

Because C++ allows overloading, you can call overloads of **carg** that take **_Fcomplex** or **_Lcomplex** values, and return **float** or **long** **double** values. In a C program, **carg** always takes a **_Dcomplex** value and returns a **double** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**carg**,               **cargf**, **cargl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
