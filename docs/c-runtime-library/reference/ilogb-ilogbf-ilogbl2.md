---
title: "ilogb, ilogbf, ilogbl2 | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["ilogb", "ilogbf", "ilogbl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ilogb", "ilogbf", "ilogbl", "math/ilogb", "math/ilogbf", "math/ilogbl"]
helpviewer_keywords: ["ilogb function", "ilogbf function", "ilogbl function"]
ms.assetid: 9ef19d57-1caa-41d5-8233-2faad3562fcb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ilogb, ilogbf, ilogbl

Retrieves an integer that represents the unbiased base-2 exponent of the specified value.

## Syntax

```C
int ilogb(
   double x
);

int ilogb(
   float x
); //C++ only

int ilogb(
   long double x
); //C++ only

int ilogbf(
   float x
);

int ilogbl(
   long double x
);

```

### Parameters

*x*<br/>
The specified value.

## Return Value

If successful, return the base-2 exponent of *x* as a signed **int** value.

Otherwise, returns one of the following values, defined in \<math.h>:

|Input|Result|
|-----------|------------|
|±0|FP_ILOGB0|
|±inf, ±nan, indefinite|FP_ILOGBNAN|

Errors are reported as specified in [_matherr](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **ilogb** that take and return **float** and **long** **double** types. In a C program, **ilogb** always takes and returns a **double**.

Calling this function is similar to calling the equivalent **logb** function, then casting the return value to **int**.

## Requirements

|Routine|C header|C++ header|
|-------------|--------------|------------------|
|**ilogb**, **ilogbf**, **ilogbl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[frexp](frexp.md)<br/>
[logb, logbf, logbl, _logb, _logbf](logb-logbf-logbl-logb-logbf.md)<br/>
