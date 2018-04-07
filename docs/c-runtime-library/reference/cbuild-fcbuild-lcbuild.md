---
title: "_Cbuild, _FCbuild, _LCbuild | Microsoft Docs"
ms.custom: ""
ms.date: "03/30/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["_Cbuild", "_FCbuild", "_LCbuild"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_Cbuild", "_FCbuild", "_LCbuild", "complex/_Cbuild", "complex/_FCbuild", "complex/_LCbuild"]
dev_langs: ["C++"]
helpviewer_keywords: ["_Cbuild function", "_FCbuild function", "_LCbuild function"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _Cbuild, _FCbuild, _LCbuild

Constructs a complex number from real and imaginary parts.

## Syntax

```C
_Dcomplex _Cbuild( double real, double imaginary );
_Fcomplex _FCbuild( float real, float imaginary );
_Lcomplex _LCbuild( long double real, long double imaginary );
```

### Parameters

*real*<br/>
The real part of the complex number to construct.

*imaginary*<br/>
The imaginary part of the complex number to construct.

## Return Value

A **_Dcomplex**, **_Fcomplex**, or **_Lcomplex** structure that represents the complex number (*real*, *imaginary* \* i) for values of the specified floating-point type.

## Remarks

The **_Cbuild**, **_FCbuild**, and **_LCbuild** functions simplify creation of complex types. Use the [creal, crealf, creall](../../c-runtime-library/reference/creal-crealf-creall.md) and [cimag, cimagf, cimagl](../../c-runtime-library/reference/cimag-cimagf-cimagl.md) functions to retrieve the real and imaginary portions of the represented complex numbers.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**_Cbuild**,**_FCbuild**, **_LCbuild**|\<complex.h>|\<ccomplex>|

These functions are Microsoft-specific. The types **_Dcomplex**, **_Fcomplex**, and **_Lcomplex** are Microsoft-specific equivalents to the unimplemented C99 native types **double _Complex**, **float _Complex**, and **long double _Complex**, respectively. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[_Cmulcc, _FCmulcc, _LCmulcc](../../c-runtime-library/reference/cmulcc-fcmulcc-lcmulcc.md)<br/>
[_Cmulcr, _FCmulcr, _LCmulcr](../../c-runtime-library/reference/cmulcr-fcmulcr-lcmulcr.md)<br/>
[norm, normf, norml](../../c-runtime-library/reference/norm-normf-norml1.md)<br/>
[cproj, cprojf, cprojl](../../c-runtime-library/reference/cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](../../c-runtime-library/reference/conj-conjf-conjl.md)<br/>
[creal, crealf, creall](../../c-runtime-library/reference/creal-crealf-creall.md)<br/>
[cimag, cimagf, cimagl](../../c-runtime-library/reference/cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](../../c-runtime-library/reference/carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](../../c-runtime-library/reference/cabs-cabsf-cabsl.md)<br/>
