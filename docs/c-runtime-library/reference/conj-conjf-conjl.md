---
title: "conj, conjf, conjl"
description: "API reference for conj, conjf, and conjl; which retrieve the complex conjugate of a complex number."
ms.date: "9/2/2020"
api_name: ["conj", "conjf", "conjl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["conj", "conjf", "conjl", "complex/conj", "complex/conjf", "complex/conjl"]
helpviewer_keywords: ["conj function", "conjf function", "conjl function"]
ms.assetid: 792fccfa-19c6-4890-99f9-a3b89effccd6
---
# conj, conjf, conjl

Retrieves the complex conjugate of a complex number.

## Syntax

```C
_Dcomplex conj(
   _Dcomplex z
);
_Fcomplex conj(
   _Fcomplex z
);  // C++ only
_Lcomplex conj(
   _Lcomplex z
);  // C++ only
_Fcomplex conjf(
   _Fcomplex z
);
_Lcomplex conjl(
   _Lcomplex z
);
#define conj(X) // Requires C11 or higher
```

### Parameters

*z*\
A complex number.

## Return Value

The complex conjugate  of *z*.  The result has the same real and imaginary part as *z*, but with the opposite sign.

## Remarks

Because C++ allows overloading, you can call overloads of **conj** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, unless you are using the \<tgmath.h> macro to call this function, **conj** always takes and returns a **_Dcomplex** value.

If you use the \<tgmath.h> `conj()` macro, the type of the argument determines which version of the function is selected. See [Type-generic math](../../c-runtime-library/tgmath.md) for details.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**conj**, **conjf**, **conjl**|\<complex.h>|\<ccomplex>|
|**conj** macro | \<tgmath.h> ||

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
