---
title: "cproj, cprojf, cprojl"
ms.date: "11/04/2016"
apiname: ["cproj", "cprojf", "cprojl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cproj", "cprojf", "cprojl", "complex/cproj", "complex/cprojf", "complex/cprojl"]
helpviewer_keywords: ["cproj function", "cprojf function", "cprojl function"]
ms.assetid: 32b49623-13bf-4cae-802e-7912d75030fe
---
# cproj, cprojf, cprojl

Retrieves the projection of a complex number on the Reimann sphere.

## Syntax

```C
_Dcomplex cproj(
   _Dcomplex z
);
_Fcomplex cproj(
   _Fcomplex z
);  // C++ only
_Lcomplex cproj(
   _Lcomplex z
);  // C++ only
_Fcomplex cprojf(
   _Fcomplex z
);
_Lcomplex cprojl(
   _Lcomplex z
);
```

### Parameters

*z*<br/>
A complex number.

## Return Value

The projection of *z* on the Reimann sphere.

## Remarks

Because C++ allows overloading, you can call overloads of **cproj** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **cproj** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**cproj**,               **cprojf**, **cprojl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

- [Alphabetical Function Reference](crt-alphabetical-function-reference.md)
- [norm, normf, norml](norm-normf-norml1.md)
- [creal, crealf, creall](creal-crealf-creall.md)
- [conj, conjf, conjl](conj-conjf-conjl.md)
- [cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)
- [carg, cargf, cargl](carg-cargf-cargl.md)
- [cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)
