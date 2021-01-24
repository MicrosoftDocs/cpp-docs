---
description: "Learn more about: _scalb, _scalbf"
title: "_scalb, _scalbf"
ms.date: "4/2/2020"
api_name: ["_scalb", "_scalbf", "_o__scalb"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["scalb", "_scalb", "_scalbf"]
helpviewer_keywords: ["exponential calculations", "_scalb function", "_scalbf function", "scalb function"]
ms.assetid: 148cf5a8-b405-44bf-a1f0-7487adba2421
---
# _scalb, _scalbf

Scales argument by a power of 2.

## Syntax

```C
double _scalb(
   double x,
   long exp
);
float _scalbf(
   float x,
   long exp
); /* x64 only */
```

### Parameters

*x*<br/>
Double-precision, floating-point value.

*exp*<br/>
Long integer exponent.

## Return Value

Returns an exponential value if successful. On overflow (depending on the sign of *x*), **_scalb** returns +/- **HUGE_VAL**; the **errno** variable is set to **ERANGE**.

For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_scalb** function calculates the value of *x* \* 2<sup>*exp*</sup>.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_scalb**, **_scalbf**|\<float.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[ldexp](ldexp.md)<br/>
