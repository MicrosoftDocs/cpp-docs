---
title: "cbrt, cbrtf, cbrtl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["cbrt", "cbrtf", "cbrtl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["cbrtl", "cbrt", "cbrtf"]
dev_langs: ["C++"]
helpviewer_keywords: ["cbrtl function", "cbrtf function", "cbrt function"]
ms.assetid: ab51d916-3db2-4beb-b46a-28b4062cd33f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# cbrt, cbrtf, cbrtl

Calculates the cube root.

## Syntax

```C
double cbrt(
   double x
);
float cbrt(
   float x
);  // C++ only
long double cbrt(
   long double x
);  // C++ only
float cbrtf(
   float x
);
long double cbrtl(
   long double x
);
```

### Parameters

*x*<br/>
Floating-point value

## Return Value

The **cbrt** functions return the cube-root of *x*.

|Input|SEH Exception|**_matherr** Exception|
|-----------|-------------------|--------------------------|
|± ∞, QNAN, IND|none|none|

## Remarks

Because C++ allows overloading, you can call overloads of **cbrt** that take **float** or **long** **double** types. In a C program, **cbrt** always takes and returns **double**.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**cbrt**, **cbrtf**, **cbrtl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_cbrt.c
// Compile using: cl /W4 crt_cbrt.c
// This program calculates a cube root.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double question = -64.64;
   double answer;

   answer = cbrt(question);
   printf("The cube root of %.2f is %.6f\n", question, answer);
}
```

```Output
The cube root of -64.64 is -4.013289
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
[pow, powf, powl](pow-powf-powl.md)<br/>
