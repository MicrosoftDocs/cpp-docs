---
title: "asin, asinf, asinl"
ms.date: "4/2/2020"
api_name: ["asinf", "asinl", "asin", "_o_asin"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["asin", "asinl", "asinf"]
helpviewer_keywords: ["asin function", "asinl function", "asinf function", "trigonometric functions", "arcsine function"]
ms.assetid: ca05f9ea-b711-49f6-9f32-2f4019abfd69
---
# asin, asinf, asinl

Calculates the arcsine.

## Syntax

```C
double asin( double x );
float asinf ( float x );
long double asinl( long double x );
```

```cpp
float asin( float x );  // C++ only
long double asin( long double x );  // C++ only
```

### Parameters

*x*<br/>
Value whose arcsine is to be calculated.

## Return Value

The **asin** function returns the arcsine (the inverse sine function) of *x* in the range -π/2 to π/2 radians.

By default, if *x* is less than -1 or greater than 1, **asin** returns an indefinite.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± ∞|**INVALID**|**_DOMAIN**|
|± **QNAN**, **IND**|none|**_DOMAIN**|
|&#124;x&#124;>1|**INVALID**|**_DOMAIN**|

## Remarks

Because C++ allows overloading, you can call overloads of **asin** with **float** and **long** **double** values. In a C program, **asin** always takes and returns a **double**.

By default, this function's global state is scoped to the application. To change this, see [App vs OS state](../global-state.md).

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------|-|
|**asin**, **asinf**, **asinl**|\<math.h>|\<cmath> or \<math.h>|

## Example

For more information, see [acos, acosf, acosl](acos-acosf-acosl.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
