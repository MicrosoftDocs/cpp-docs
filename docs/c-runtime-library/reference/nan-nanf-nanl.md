---
description: "Learn more about: nan, nanf, nanl"
title: "nan, nanf, nanl"
ms.date: "4/2/2020"
api_name: ["nanf", "nan", "nanl", "_o_nan", "_o_nanf", "_o_nanl"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["nan", "nanl", "nanf"]
helpviewer_keywords: ["nan function", "nanf function", "nanl function"]
ms.assetid: 790e9158-80ab-43e0-8f5a-096198553fd9
---
# `nan`, `nanf`, `nanl`

Returns a quiet NaN value.

## Syntax

```C
double nan( const char* input );
float nanf( const char* input );
long double nanl( const char* input );
```

### Parameters

*`input`*\
A string value.

## Return value

The **`nan`** functions return a quiet NaN value.

## Remarks

The **`nan`** functions return a floating-point value that corresponds to a quiet (non-signalling) NaN. The *`input`* value is ignored. For information about how a NaN is represented for output, see [`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`nan`**, **`nanf`**, **`nanl`** | \<math.h> | \<cmath> or \<math.h> |

## See also

[Math and floating-point support](../floating-point-support.md)\
[`fpclassify`](fpclassify.md)\
[`_fpclass`, `_fpclassf`](fpclass-fpclassf.md)\
[`isfinite`, `_finite`, `_finitef`](finite-finitef.md)\
[`isinf`](isinf.md)\
[`isnan`, `_isnan`, `_isnanf`](isnan-isnan-isnanf.md)\
[`isnormal`](isnormal.md)
