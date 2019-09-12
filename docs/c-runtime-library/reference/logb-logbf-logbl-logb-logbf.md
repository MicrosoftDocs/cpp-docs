---
title: "logb, logbf, logbl, _logb, _logbf"
ms.date: "04/05/2018"
api_name: ["logb", "_logb", "_logbl", "logbf", "logbl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: "DLLExport"
f1_keywords: ["logb", "logbl", "_logb", "_logbf", "logbf"]
helpviewer_keywords: ["_logbf function", "mantissas, floating-point variables", "logbf function", "_logb function", "exponent, floating-point numbers", "logbl function", "logb function", "floating-point functions", "floating-point functions, mantissa and exponent", "exponents and mantissas"]
ms.assetid: 780c4daa-6fe6-4fbc-9412-4c1ba1a1766f
---
# logb, logbf, logbl, _logb, _logbf

Extracts the exponent value of a floating-point argument.

## Syntax

```C
double logb(
   double x
);
float logb(
   float x
); // C++ only
long double logb(
   long double x
); // C++ only
float logbf(
   float x
);
long double logbl(
   long double x
);
double _logb(
   double x
);
float _logbf(
   float x
);
```

### Parameters

*x*<br/>
A floating-point value.

## Return Value

**logb** returns the unbiased exponent value of *x* as a signed integer represented as a floating-point value.

## Remarks

The **logb** functions extract the exponential value of the floating-point argument *x*, as though *x* were represented with infinite range. If the argument *x* is denormalized, it is treated as if it were normalized.

Because C++ allows overloading, you can call overloads of **logb** that take and return **float** or **long** **double** values. In a C program, **logb** always takes and returns a **double**.

|Input|SEH exception|Matherr exception|
|-----------|-------------------|-----------------------|
|± QNAN,IND|None|_DOMAIN|
|± 0|ZERODIVIDE|_SING|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_logb**|\<float.h>|
|**logb**, **logbf**, **logbl**, **_logbf**|\<math.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
