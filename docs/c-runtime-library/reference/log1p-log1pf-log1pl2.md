---
title: "log1p, log1pf, log1pl2 | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp", "devlang-cpp"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["log1p", "log1pf", "log1pl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["log1p", "log1pf", "log1pl", "math/log1p", "math/log1pf", "math/log1pl"]
helpviewer_keywords: ["log1p function", "log1pf function", "log1pl function"]
ms.assetid: a40d965d-b4f6-42f4-ba27-2395546f7c12
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# log1p, log1pf, log1pl

Computes the natural logarithm of 1 plus the specified value.

## Syntax

```C
double log1p(
   double x
);

float log1p(
   float x
); //C++ only

long double log1p(
   long double x
); //C++ only

float log1pf(
   float x
);

long double log1pl(
   long double x
);

```

### Parameters

*x*<br/>
The floating-point argument.

## Return Value

If successful, returns the natural (base-*e*) log of (*x* + 1).

Otherwise, may return one of the following values:

|Input|Result|SEH exception|errno|
|-----------|------------|-------------------|-----------|
|+inf|+inf|||
|Denormals|Same as input|UNDERFLOW||
|±0|Same as input|||
|-1|-inf|DIVBYZERO|ERANGE|
|< -1|nan|INVALID|EDOM|
|-inf|nan|INVALID|EDOM|
|±SNaN|Same as input|INVALID||
|±QNaN, indefinite|Same as input|||

The **errno** value is set to ERANGE if *x* = -1. The **errno** value is set to **EDOM** if *x* < -1.

## Remarks

The **log1p** functions may be more accurate than using `log(x + 1)` when *x* is near 0.

Because C++ allows overloading, you can call overloads of **log1p** that take and return **float** and **long** **double** types. In a C program, **log1p** always takes and returns a **double**.

If *x* is a natural number, this function returns the logarithm of the factorial of (*x* - 1).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**log1p**, **log1pf**, **log1pl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[log2, log2f, log2l](../../c-runtime-library/reference/log2-log2f-log2l.md)<br/>
[log, logf, log10, log10f](../../c-runtime-library/reference/log-logf-log10-log10f.md)<br/>
