---
title: "frexp, frexpf, frexpl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["frexp"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["frexp", "_frexpl"]
dev_langs: ["C++"]
helpviewer_keywords: ["_frexpl function", "mantissas, floating-point variables", "frexpl function", "exponent, floating-point numbers", "frexp function", "floating-point functions, mantissa and exponent"]
ms.assetid: 9b020f2e-3967-45ec-a6a8-d467a071aa55
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# frexp, frexpf, frexpl

Gets the mantissa and exponent of a floating-point number.

## Syntax

```C
double frexp(
   double x,
   int *expptr
);
float frexpf(
   float x,
   int * expptr
);
long double frexpl(
   long double x,
   int * expptr
);
float frexp(
   float x,
   int * expptr
);  // C++ only
long double frexp(
   long double x,
   int * expptr
);  // C++ only
```

### Parameters

*x*<br/>
Floating-point value.

*expptr*<br/>
Pointer to stored integer exponent.

## Return Value

**frexp** returns the mantissa. If *x* is 0, the function returns 0 for both the mantissa and the exponent. If *expptr* is **NULL**, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns 0.

## Remarks

The **frexp** function breaks down the floating-point value (*x*) into a mantissa (*m*) and an exponent (*n*), such that the absolute value of *m* is greater than or equal to 0.5 and less than 1.0, and *x* = *m* * 2<sup>*n*</sup>. The integer exponent *n* is stored at the location pointed to by *expptr*.

C++ allows overloading, so you can call overloads of **frexp**. In a C program, **frexp** always takes a **double** and an **int** pointer and returns a **double**.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**frexp**, **frexpf**, **frexpl**|\<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_frexp.c
// This program calculates frexp( 16.4, &n )
// then displays y and n.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x, y;
   int n;

   x = 16.4;
   y = frexp( x, &n );
   printf( "frexp( %f, &n ) = %f, n = %d\n", x, y, n );
}
```

```Output
frexp( 16.400000, &n ) = 0.512500, n = 5
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[ldexp](ldexp.md)<br/>
[modf, modff, modfl](modf-modff-modfl.md)<br/>
