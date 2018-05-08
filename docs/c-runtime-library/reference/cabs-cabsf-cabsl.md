---
title: "cabs, cabsf, cabsl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["cabs", "cabsf", "cabsl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cabs", "cabsf", "cabsl", "complex/cabs", "complex/cabsf", "complex/cabsl"]
dev_langs: ["C++"]
helpviewer_keywords: ["cabs function", "cabsf function", "cabsl function"]
ms.assetid: 6b8eb453-cc8f-4972-bebf-351cbdfdfc15
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# cabs, cabsf, cabsl

Retrieves the absolute value of a complex number.

## Syntax

```C
double cabs(
   _Dcomplex z
);
float cabs(
   _Fcomplex z
);  // C++ only
long double cabs(
   _Lcomplex z
);  // C++ only
float cabsf(
   _Fcomplex z
);
long double cabsl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number.

## Return Value

The absolute value of *z*.

## Remarks

Because C++ allows overloading, you can call overloads of **cabs** that take **_Fcomplex** or **_Lcomplex** values, and return **float** or **long** **double** values. In a C program, **cabs** always takes a **_Dcomplex** value and returns a **double** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**cabs**,               **cabsf**, **cabsl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
