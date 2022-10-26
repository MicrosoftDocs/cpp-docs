---
title: "_chgsign, _chgsignf, _chgsignl"
description: "API reference for _chgsign, _chgsignf, and _chgsignl; which reverses the sign of a floating-point argument."
ms.date: "04/05/2018"
api_name: ["_chgsignl", "_chgsign", "_chgsignf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_chgsignf", "chgsign", "_chgsignl", "_chgsign"]
helpviewer_keywords: ["_chgsignl function", "_chgsignf function", "chgsign function", "_chgsign function"]
ms.assetid: a6646f8e-213d-4564-8617-f43bc66f989f
---
# `_chgsign`, `_chgsignf`, `_chgsignl`

Reverses the sign of a floating-point argument.

## Syntax

```C
double _chgsign(
   double x
);
float _chgsignf(
   float x
);
long double _chgsignl(
   long double x
);
```

### Parameters

*`x`*\
The floating-point value to be changed.

## Return value

The **`_chgsign`** functions return a value that's equal to the floating-point argument *`x`*, but with its sign reversed. There's no error return.

## Requirements

| Routine | Required header |
|---|---|
| **`_chgsign`** | \<float.h> |
| **`_chgsignf`**, **`_chgsignl`** | \<math.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Math and floating-point support](../floating-point-support.md)\
[`fabs`, `fabsf`, `fabsl`](fabs-fabsf-fabsl.md)\
[`copysign`, `copysignf`, `copysignl`, `_copysign`, `_copysignf`, `_copysignl`](copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)
