---
title: "cosh, coshf, coshl | Microsoft Docs"
ms.custom: ""
ms.date: "04/11/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["cosh", "coshf", "coshl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cosh", "coshf", "coshl"]
dev_langs: ["C++"]
helpviewer_keywords: ["cosh function", "coshf function", "coshl function", "trigonometric functions", "hyperbolic functions"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# cosh, coshf, coshl

Calculates the hyperbolic cosine.

## Syntax

```C
double cosh( double x );
float coshf( float x );
long double coshl( long double x );
```

```cpp
float cosh( float x );  // C++ only
long double cosh( long double x );  // C++ only
```

### Parameters

*x*<br/>
Angle in radians.

## Return Value

The hyperbolic cosine of *x*.

By default, if the result is too large in a **cosh**, **coshf**, or **coshl** call, the function returns **HUGE_VAL** and sets **errno** to **ERANGE**.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± **QNAN**,**IND**|none|**_DOMAIN**|
|*x* ≥ 7.104760e+002|**INEXACT**+**OVERFLOW**|**OVERFLOW**|

## Remarks

Because C++ allows overloading, you can call overloads of **cosh** that take and return **float** or **long** **double** values. In a C program, **cosh** always takes and returns a **double**.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------|-|
|**coshf**, **cosl**, **coshl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [sinh, sinhf, sinhl](../../c-runtime-library/reference/sinh-sinhf-sinhl.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](../../c-runtime-library/reference/acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](../../c-runtime-library/reference/asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](../../c-runtime-library/reference/atanh-atanhf-atanhl.md)<br/>
[_matherr](../../c-runtime-library/reference/matherr.md)<br/>
[sinh, sinhf, sinhl](../../c-runtime-library/reference/sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](../../c-runtime-library/reference/tanh-tanhf-tanhl.md)<br/>
