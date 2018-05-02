---
title: "nearbyint, nearbyintf, nearbyintl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["nearbyint", "nearbyintf", "nerabyintl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["nearbyint", "nearbyintf", "nearbyintl", "math/nearbyint", "math/narbyintf", "math/narbyintl"]
dev_langs: ["C++"]
helpviewer_keywords: ["nearbyint function", "nearbyintf function", "nearbyintl function"]
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# nearbyint, nearbyintf, nearbyintl

Rounds the specified floating-point value to an integer, and returns that value in a floating-point format.

## Syntax

```C
double nearbyint( double x );
float nearbyintf( float x );
long double nearbyintl( long double x );
```

```cpp
float nearbyint( float x ); //C++ only
long double nearbyint( long double x ); //C++ only
```

### Parameters

*x*<br/>
The value to round.

## Return Value

If successful, returns *x*, rounded to the nearest integer, using the current rounding format as reported by [fegetround](fegetround-fesetround2.md). Otherwise, the function may return one of the following values:

|Issue|Return|
|-----------|------------|
|*x* = ±INFINITY|±INFINITY, unmodified|
|*x* = ±0|±0, unmodified|
|*x* = NaN|NaN|

Errors are not reported through [_matherr](matherr.md); specifically, this function does not report any **FE_INEXACT** exceptions.

## Remarks

The primary difference between this function and [rint](rint-rintf-rintl.md) is that this function does not raise the inexact floating point exception.

Because the maximum floating-point values are exact integers, this function will never overflow by itself; rather, the output may overflow the return value, depending on which version of the function you use.

C++ allows overloading, so you can call overloads of **nearbyint** that take and return **float** or **long** **double** parameters. In a C program, **nearbyint** always takes two double values and returns a double value.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**nearbyint**, **nearbyintf**, **nearbyintl**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[Math and floating-point support](../floating-point-support.md)<br/>
