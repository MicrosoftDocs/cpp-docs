---
title: "creal, crealf, creall | Microsoft Docs"
ms.custom: ""
ms.date: "03/30/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["creal", "crealf", "creall"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["creal", "crealf", "creall", "complex/creal", "complex/crealf", "complex/creall"]
dev_langs: ["C++"]
helpviewer_keywords: ["creal function", "crealf function", "creall function"]
ms.assetid: fa3ac62f-7aa3-4238-a71f-d6b00cd0c7c8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# creal, crealf, creall

Retrieves the real part of a complex number.

## Syntax

```C
double creal( _Dcomplex z );
float crealf( _Fcomplex z );
long double creall( _Lcomplex z );
```

```cpp
float creal( _Fcomplex z );  // C++ only
long double creal( _Lcomplex z );  // C++ only
```

### Parameters

*z*<br/>
A complex number.

## Return Value

The real part of *z*.

## Remarks

Because C++ allows overloading, you can call overloads of `creal` that take **_Fcomplex** or **_Lcomplex** values, and return **float** or **long double** values. In a C program, `creal` always takes a **_Dcomplex** value and returns a **double** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|`creal`, `crealf`, `creall`|\<complex.h>|\<ccomplex>|

The **_Fcomplex**, **_Dcomplex**, and **_Lcomplex** types are Microsoft-specific equivalents of the unimplemented native C99 types **float _Complex**, **double _Complex**, and **long double _Complex**, respectively. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[_Cbuild, _FCbuild, _LCbuild](../../c-runtime-library/reference/cbuild-fcbuild-lcbuild.md)<br/>
[norm, normf, norml](../../c-runtime-library/reference/norm-normf-norml1.md)<br/>
[cproj, cprojf, cprojl](../../c-runtime-library/reference/cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](../../c-runtime-library/reference/conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](../../c-runtime-library/reference/cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](../../c-runtime-library/reference/carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](../../c-runtime-library/reference/cabs-cabsf-cabsl.md)<br/>