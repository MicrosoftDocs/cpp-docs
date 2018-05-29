---
title: "expm1, expm1f, expm1l | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["expm1l", "expm1", "expm1f"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["expm1l", "expm1", "expm1f"]
dev_langs: ["C++"]
helpviewer_keywords: ["expm1f function", "expm1l function", "expm1 function"]
ms.assetid: 2a4dd2d9-370c-42b0-9067-0625efa272e0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# expm1, expm1f, expm1l

Computes the base-e exponential of a value, minus one.

## Syntax

```C
double expm1(
   double x
);
float expm1(
   float x
);  // C++ only
long double expm1(
   long double x
);  // C++ only
float expm1f(
   float x
);
long double expm1l(
   long double x
);
```

### Parameters

*x*<br/>
The floating-point exponential value.

## Return Value

The **expm1** functions return a floating-point value that represents e<sup>x</sup> - 1, if successful. On overflow, **expm1** returns **HUGE_VAL**, **expm1f** returns **HUGE_VALF**, **expm1l** returns **HUGE_VALL**, and **errno** is set to **ERANGE**. For more information about return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **expm1** that take and return **float** and **long** **double** values. In a C program, **expm1** always takes and returns a **double**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**expm1**, **expm1f**, **expm1l**|\<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[exp2, exp2f, exp2l](exp2-exp2f-exp2l.md)<br/>
[pow, powf, powl](pow-powf-powl.md)<br/>
