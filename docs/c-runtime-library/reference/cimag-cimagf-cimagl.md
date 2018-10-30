---
title: "cimag, cimagf, cimagl"
ms.date: "11/04/2016"
apiname: ["cimag", "cimagf", "cimagl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cimagf", "cimagl", "complex/cimag", "complex/cimagf", "complex/cimagl", "cimag"]
helpviewer_keywords: ["cimag function", "cimagf function", "cimagl function"]
ms.assetid: 0d8836f5-d61d-44cd-8731-6f75cb776def
---
# cimag, cimagf, cimagl

Retrieves the imaginary part of a complex number.

## Syntax

```C
double cimag( _Dcomplex z );
float cimagf( _Fcomplex z );
long double cimagl( _Lcomplex z );
```

```cpp
float cimag( _Fcomplex z );  // C++
long double cimag( _Lcomplex z );  // C++
```

### Parameters

*z*<br/>
A complex number.

## Return Value

The imaginary part of *z*.

## Remarks

Because C++ allows overloading, you can call overloads of **cimag** that take **_Fcomplex** or **_Lcomplex** values, and return **float** or **long** **double** values. In a C program, **cimag** always takes a **_Dcomplex** value and returns a **double** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**cimag**,               **cimagf**, **cimagl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
