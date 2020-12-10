---
description: "Learn more about: cpow, cpowf, cpowl"
title: "cpow, cpowf, cpowl"
ms.date: "11/04/2016"
api_name: ["cpow", "cpowf", "cpowl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cpow", "cpowf", "cpowl", "complex/cpow", "complex/cpowf", "complex/copwl"]
helpviewer_keywords: ["cpow function", "cpowf function", "complex/cpowl function"]
ms.assetid: 83fe2187-22b7-4295-ab16-4d77abdbb80b
---
# cpow, cpowf, cpowl

Retrieves the value of a number raised to the specified power, where the base and exponent are complex numbers. This function has a branch cut for the exponent along the negative real axis.

## Syntax

```C
_Dcomplex cpow(
   _Dcomplex x, _Dcomplex y
);
_Fcomplex cpow(
   _Fcomplex x, _Fcomplex y
);  // C++ only
_Lcomplex cpow(
   _Lcomplex x, _Lcomplex y
);  // C++ only
_Fcomplex cpowf(
   _Fcomplex x, _Fcomplex y
);
_Lcomplex cpowl(
   _Lcomplex x, _Lcomplex y
);
```

### Parameters

*x*<br/>
The base.

*y*<br/>
The exponent.

## Return Value

The value of *x* raised to the power of *y* with a branch cut for *x* along the negative real axis.

## Remarks

Because C++ allows overloading, you can call overloads of **cpow** that take and return **_Fcomplex** and **_Lcomplex** values. In a C program, **cpow** always takes and returns a **_Dcomplex** value.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**cpow**,               **cpowf**, **cpowl**|\<complex.h>|\<ccomplex>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[cexp, cexpf, cexpl](cexp-cexpf-cexpl.md)<br/>
[clog10, clog10f, clog10l](clog10-clog10f-clog10l.md)<br/>
[clog, clogf, clogl](clog-clogf-clogl.md)<br/>
