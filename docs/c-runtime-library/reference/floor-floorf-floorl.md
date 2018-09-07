---
title: "floor, floorf, floorl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["floorf", "floorl", "floor"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["floor", "floorl", "_floorl", "floorf"]
dev_langs: ["C++"]
helpviewer_keywords: ["floor function", "floorf function", "calculating floors of values", "floorl function"]
ms.assetid: e9955f70-d659-414f-8050-132e13c8ff36
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# floor, floorf, floorl

Calculates the floor of a value.

## Syntax

```C
double floor(
   double x
);
float floor(
   float x
); // C++ only
long double floor(
   long double x
); // C++ only
float floorf(
   float x
);
long double floorl(
   long double x
);
```

### Parameters

*x*<br/>
Floating-point value.

## Return Value

The **floor** functions return a floating-point value that represents the largest integer that is less than or equal to *x*. There is no error return.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± QNAN,IND|none|_DOMAIN|

**floor** has an implementation that uses Streaming SIMD Extensions 2 (SSE2). For information and restrictions about using the SSE2 implementation, see [_set_SSE2_enable](set-sse2-enable.md).

## Remarks

C++ allows overloading, so you can call overloads of **floor** that take and return **float** and **long** **double** values. In a C program, **floor** always takes and returns a **double**.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**floor**, **floorf**, **floorl**|\<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_floor.c
// This example displays the largest integers
// less than or equal to the floating-point values 2.8
// and -2.8. It then shows the smallest integers greater
// than or equal to 2.8 and -2.8.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double y;

   y = floor( 2.8 );
   printf( "The floor of 2.8 is %f\n", y );
   y = floor( -2.8 );
   printf( "The floor of -2.8 is %f\n", y );

   y = ceil( 2.8 );
   printf( "The ceil of 2.8 is %f\n", y );
   y = ceil( -2.8 );
   printf( "The ceil of -2.8 is %f\n", y );
}
```

```Output
The floor of 2.8 is 2.000000
The floor of -2.8 is -3.000000
The ceil of 2.8 is 3.000000
The ceil of -2.8 is -2.000000
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[ceil, ceilf, ceill](ceil-ceilf-ceill.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
