---
description: "Learn more about: clog10, clog10f, clog10l"
title: "clog10, clog10f, clog10l"
ms.date: "11/04/2016"
api_name: ["clog10", "clog10f", "clog10l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["clog10", "clog10f", "clog10l", "complex/clog10", "complex/clog10f", "complex/clog10l"]
helpviewer_keywords: ["clog10 function", "clog10f function", "clog10l function"]
ms.assetid: 2ddae00d-ef93-4441-add3-f4d58358401b
---
# clog10, clog10f, clog10l

Retrieves the base 10 logarithm of a complex number.

## Syntax

```C
_Dcomplex clog10( _Dcomplex z );
_Fcomplex clog10f( _Fcomplex z );
_Lcomplex clog10l( _Lcomplex z );
```

```cpp
_Fcomplex clog10( _Fcomplex z );  // C++ only
_Lcomplex clog10( _Lcomplex z );  // C++ only
```

### Parameters

*z*<br/>
The base of the logarithm.

## Return Value

The possible return values are:

|z parameter|Return value|
|-----------------|------------------|
|Positive|The base 10 logarithm of z|
|Zero|- ∞|
|Negative|NaN|
|NaN|NaN|
|+ ∞|+ ∞|

## Remarks

Because C++ allows overloading, you can call overloads of **clog10** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **clog10** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**clog10**,               **clog10f**, **clogl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[cexp, cexpf, cexpl](cexp-cexpf-cexpl.md)<br/>
[cpow, cpowf, cpowl](cpow-cpowf-cpowl.md)<br/>
[clog, clogf, clogl](clog-clogf-clogl.md)<br/>
