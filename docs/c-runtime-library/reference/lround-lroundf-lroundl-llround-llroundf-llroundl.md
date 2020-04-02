---
title: "lround, lroundf, lroundl, llround, llroundf, llroundl"
ms.date: "4/2/2020"
api_name: ["llround", "llroundf", "llroundl", "lroundf", "lround", "lroundl", "_o_llround", "_o_llroundf", "_o_llroundl", "_o_lround", "_o_lroundf", "_o_lroundl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["lround", "lroundl", "llroundl", "llround", "lroundf", "llroundf"]
helpviewer_keywords: ["lround function", "llroundl function", "llround function", "lroundf function", "llroundf function", "lroundl function"]
ms.assetid: cfb88a35-54c6-469f-85af-f7d695dcfdd8
---
# lround, lroundf, lroundl, llround, llroundf, llroundl

Rounds a floating-point value to the nearest integer.

## Syntax

```C
long lround(
   double x
);
long lround(
   float x
);  // C++ only
long lround(
   long double x
);  // C++ only
long lroundf(
   float x
);
long lroundl(
   long double x
);
long long llround(
   double x
);
long long llround(
   float x
);  // C++ only
long long llround(
   long double x
);  // C++ only
long long llroundf(
   float x
);
long long llroundl(
   long double x
);
```

### Parameters

*x*<br/>
The floating-point value to round.

## Return Value

The **lround** and **llround** functions return the nearest **long** or **long** **long** integer to *x*. Halfway values are rounded away from zero, regardless of the setting of the floating-point rounding mode. There is no error return.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|none|**_DOMAIN**|

## Remarks

Because C++ allows overloading, you can call overloads of **lround** or **llround** that take and return **float** and **long** **double** values. In a C program, **lround** and **llround** always take and return a **double**.

By default, this function's global state is scoped to the application. To change this, see [App vs OS state](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**lround**, **lroundf**, **lroundl**, **llround**, **llroundf**, **llroundl**|\<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_lround.c
// Build with: cl /W4 /Tc crt_lround.c
// This example displays the rounded results of
// the floating-point values 2.499999, -2.499999,
// 2.8, -2.8, 3.5 and -3.5.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.499999;
   float y = 2.8f;
   long double z = 3.5L;

   printf("lround(%f) is %d\n", x, lround(x));
   printf("lround(%f) is %d\n", -x, lround(-x));
   printf("lroundf(%f) is %d\n", y, lroundf(y));
   printf("lroundf(%f) is %d\n", -y, lroundf(-y));
   printf("lroundl(%Lf) is %d\n", z, lroundl(z));
   printf("lroundl(%Lf) is %d\n", -z, lroundl(-z));
}
```

```Output
lround(2.499999) is 2
lround(-2.499999) is -2
lroundf(2.800000) is 3
lroundf(-2.800000) is -3
lroundl(3.500000) is 4
lroundl(-3.500000) is -4
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[ceil, ceilf, ceill](ceil-ceilf-ceill.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[lrint, lrintf, lrintl, llrint, llrintf, llrintl](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>
[nearbyint, nearbyintf, nearbyintl](nearbyint-nearbyintf-nearbyintl1.md)<br/>
[rint, rintf, rintl](rint-rintf-rintl.md)<br/>
