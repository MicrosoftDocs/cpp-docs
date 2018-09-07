---
title: "trunc, truncf, truncl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
apiname: ["trunc", "truncf", "truncl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["trunc", "truncf", "truncl", "math/trunc", "math/truncf", "math/truncl"]
dev_langs: ["C++"]
helpviewer_keywords: ["trunc function", "truncf function", "truncl function"]
ms.assetid: de2038ac-ac0b-483e-870c-e8992dcd4fd0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# trunc, truncf, truncl

Determines the nearest integer that is less than or equal to the specified floating-point value.

## Syntax

```C
double trunc( double x );
float trunc( float x ); //C++ only
long double truncl( long double x );
```

```cpp
long double trunc( long double x ); //C++ only
float trunc( float x ); //C++ only
```

### Parameters

*x*<br/>
The value to truncate.

## Return Value

If successful, returns an integer value of *x*, rounded towards zero.

Otherwise, may return one of the following:

|Issue|Return|
|-----------|------------|
|*x* = ±INFINITY|x|
|*x* =  ±0|x|
|*x* = NaN|NaN|

Errors are reported as specified in [_matherr](matherr.md).

## Remarks

Because C++ allows overloading, you can call overloads of **trunc** that take and return **float** and **long** **double** types. In a C program, **trunc** always takes and returns a **double**.

Because the largest floating-point values are exact integers, this function will not overflow on its own. However, you may cause the function to overflow by returning a value into an integer type.

You can also round down by implicitly converting from floating-point to integral; however, doing so is limited to the values that can be stored in the target type.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**trunc**, **truncf**, **truncl**|\<math.h>|\<cmath>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[ceil, ceilf, ceill](ceil-ceilf-ceill.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>
