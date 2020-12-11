---
description: "Learn more about: norm, normf, norml"
title: "norm, normf, norml"
ms.date: "04/05/2018"
api_name: ["norm", "normf", "norml"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["norm", "normf", "norml", "complex/norm", "complex/normf", "complex/norml"]
helpviewer_keywords: ["norm function", "normf function", "norml function"]
ms.assetid: 9786ecfe-0019-4553-b378-0af6c691e15c
---
# norm, normf, norml

Retrieves the squared magnitude of a complex number.

## Syntax

```C
double norm( _Dcomplex z );
float normf( _Fcomplex z );
long double norml( _Lcomplex z );
```

```cpp
float norm( _Fcomplex z );  // C++ only
long double norm( _Lcomplex z );  // C++ only
```

### Parameters

*z*<br/>
A complex number.

## Return Value

The squared magnitude of *z*.

## Remarks

Because C++ allows overloading, you can call overloads of **norm** that take **_Fcomplex** or **_Lcomplex** values, and return **`float`** or **`long double`** values. In a C program, **norm** always takes a **_Dcomplex** value and returns a **`double`** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**norm**, **normf**, **norml**|\<complex.h>|\<complex.h>|

The **_Fcomplex**, **_Dcomplex**, and **_Lcomplex** types are Microsoft-specific equivalents of the unimplemented native C99 types **float _Complex**, **double _Complex**, and **long double _Complex**, respectively.  For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
