---
description: "Learn more about: _Cmulcc, _FCmulcc, _LCmulcc"
title: "_Cmulcc, _FCmulcc, _LCmulcc"
ms.date: "03/30/2018"
api_name: ["_Cmulcc", "_FCmulcc", "_LCmulcc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_Cmulcc", "_FCmulcc", "_LCmulcc", "complex/_Cmulcc", "complex/_FCmulcc", "complex/_LCmulcc"]
helpviewer_keywords: ["_Cmulcc function", "_FCmulcc function", "_LCmulcc function"]
---
# _Cmulcc, _FCmulcc, _LCmulcc

Multiplies two complex numbers.

## Syntax

```C
_Dcomplex _Cmulcc( _Dcomplex x, _Dcomplex y );
_Fcomplex _FCmulcc( _Fcomplex x, _Fcomplex y );
_Lcomplex _LCmulcc( _Lcomplex x, _Lcomplex y );
```

### Parameters

*x*<br/>
One of the complex operands to multiply.

*y*<br/>
The other complex operand to multiply.

## Return Value

A **_Dcomplex**, **_Fcomplex**, or **_Lcomplex** structure that represents the complex product of the complex numbers *x* and *y*.

## Remarks

Because the built-in arithmetic operators do not work on the Microsoft implementation of the complex types, the **_Cmulcc**, **_FCmulcc**, and **_LCmulcc** functions simplify multiplication of complex types.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**_Cmulcc**, **_FCmulcc**, **_LCmulcc**|\<complex.h>|\<complex.h>|

These functions are Microsoft-specific. The types **_Dcomplex**, **_Fcomplex**, and **_Lcomplex** are Microsoft-specific equivalents to the unimplemented C99 native types **double _Complex**, **float _Complex**, and **long double _Complex**, respectively. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[_Cbuild, _FCbuild, _LCbuild](cbuild-fcbuild-lcbuild.md)<br/>
[_Cmulcr, _FCmulcr, _LCmulcr](cmulcr-fcmulcr-lcmulcr.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
