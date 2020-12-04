---
description: "Learn more about: _Cmulcr, _FCmulcr, _LCmulcr"
title: "_Cmulcr, _FCmulcr, _LCmulcr"
ms.date: "03/30/2018"
api_name: ["_Cmulcr", "_FCmulcr", "_LCmulcr"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_Cmulcr", "_FCmulcr", "_LCmulcr", "complex/_Cmulcr", "complex/_FCmulcr", "complex/_LCmulcr"]
helpviewer_keywords: ["_Cmulcr function", "_FCmulcr function", "_LCmulcr function"]
---
# _Cmulcr, _FCmulcr, _LCmulcr

Multiplies a complex number by a floating-point number.

## Syntax

```C
_Dcomplex _Cmulcr( _Dcomplex x, double y );
_Fcomplex _FCmulcr( _Fcomplex x, float y );
_Lcomplex _LCmulcr( _Lcomplex x, long double y );
```

### Parameters

*x*<br/>
One of the complex operands to multiply.

*y*<br/>
The floating-point operand to multiply.

## Return Value

A **_Dcomplex**, **_Fcomplex**, or **_Lcomplex** structure that represents the complex product of the complex number *x* and flaoting-point number *y*.

## Remarks

Because the built-in arithmetic operators do not work on the Microsoft implementation of the complex types, the **_Cmulcr**, **_FCmulcr**, and **_LCmulcr** functions simplify multiplication of complex types by floating-point types.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**_Cmulcr**, **_FCmulcr**, **_LCmulcr**|\<complex.h>|\<complex.h>|

These functions are Microsoft-specific. The types **_Dcomplex**, **_Fcomplex**, and **_Lcomplex** are Microsoft-specific equivalents to the unimplemented C99 native types **double _Complex**, **float _Complex**, and **long double _Complex**, respectively. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[_Cbuild, _FCbuild, _LCbuild](cbuild-fcbuild-lcbuild.md)<br/>
[_Cmulcc, _FCmulcc, _LCmulcc](cmulcc-fcmulcc-lcmulcc.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
