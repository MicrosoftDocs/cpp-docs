---
title: "round, roundf, roundl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["round", "roundl", "roundf"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["roundf", "roundl", "round"]
dev_langs: ["C++"]
helpviewer_keywords: ["roundl function", "round function", "roundf function"]
ms.assetid: 6be90877-193c-4b80-a32b-c3eca33f9c6f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# round, roundf, roundl

Rounds a floating-point value to the nearest integer.

## Syntax

```C
double round(
   double x
);
float round(
   float x
);  // C++ only
long double round(
   long double x
);  // C++ only
float roundf(
   float x
);
long double roundl(
   long double x
);
```

### Parameters

*x*<br/>
The floating-point value to round.

## Return Value

The **round** functions return a floating-point value that represents the nearest integer to *x*. Halfway values are rounded away from zero, regardless of the setting of the floating-point rounding mode. There is no error return.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± **QNAN**,**IND**|none|**_DOMAIN**|

## Remarks

Because C++ allows overloading, you can call overloads of **round** that take and return **float** and **long** **double** values. In a C program, **round** always takes and returns a **double**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**round**, **roundf**, **roundl**|\<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_round.c
// Build with: cl /W3 /Tc crt_round.c
// This example displays the rounded results of
// the floating-point values 2.499999, -2.499999,
// 2.8, -2.8, 2.5 and -2.5.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.499999;
   float y = 2.8f;
   long double z = 2.5;

   printf("round(%f) is %.0f\n", x, round(x));
   printf("round(%f) is %.0f\n", -x, round(-x));
   printf("roundf(%f) is %.0f\n", y, roundf(y));
   printf("roundf(%f) is %.0f\n", -y, roundf(-y));
   printf("roundl(%Lf) is %.0Lf\n", z, roundl(z));
   printf("roundl(%Lf) is %.0Lf\n", -z, roundl(-z));
}
```

```Output
round(2.499999) is 2
round(-2.499999) is -2
roundf(2.800000) is 3
roundf(-2.800000) is -3
roundl(2.500000) is 3
roundl(-2.500000) is -3
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)<br/>
[floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)<br/>
[fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)<br/>
[lrint, lrintf, lrintl, llrint, llrintf, llrintl](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)<br/>
[lround, lroundf, lroundl, llround, llroundf, llroundl](../../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)<br/>
[nearbyint, nearbyintf, nearbyintl](nearbyint-nearbyintf-nearbyintl1.md)<br/>
[rint, rintf, rintl](../../c-runtime-library/reference/rint-rintf-rintl.md)<br/>
