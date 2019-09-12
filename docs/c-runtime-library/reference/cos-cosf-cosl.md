---
title: "cos, cosf, cosl"
ms.date: "04/05/2018"
api_name: ["cos", "cosf", "cosl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cos", "cosf", "cosl"]
helpviewer_keywords: ["cosines", "cosl function", "calculating cosine", "cosf function", "cos function", "trigonometric functions", "cosines, calculating"]
ms.assetid: ae90435e-6b68-4a47-a81f-be87d5c08f16
---
# cos, cosf, cosl

Calculates the cosine.

## Syntax

```C
double cos( double x );
float cosf( float x );
long double cosl( long double x );
```

```cpp
float cos( float x );  // C++ only
long double cos( long double x );  // C++ only
```

### Parameters

*x*<br/>
Angle in radians.

## Return Value

The cosine of *x*. If *x* is greater than or equal to 263, or less than or equal to -263, a loss of significance in the result occurs.

|Input|SEH Exception|Matherr Exception|
|-----------|-------------------|-----------------------|
|± QNAN, IND|none|**_DOMAIN**|
|± INF|**INVALID**|**_DOMAIN**|

## Remarks

Because C++ allows overloading, you can call overloads of **cos** that take and return **float** or **long** **double** values. In a C program, **cos** always takes and returns a **double**.

## Requirements

|Routine|Required C header|Required C++ header|
|-------------|---------------------|-|
|**cos**, **cosh**, **cosf**|\<math.h>|\<cmath> or \<math.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [sin, sinf, sinl](sin-sinf-sinl.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
[_CIcos](../../c-runtime-library/cicos.md)<br/>