---
title: "nan, nanf, nanl | Microsoft Docs"
ms.custom: ""
ms.date: "94/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["nanf", "nan", "nanl"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["nan", "nanl", "nanf"]
dev_langs: ["C++"]
helpviewer_keywords: ["nan function", "nanf function", "nanl function"]
ms.assetid: 790e9158-80ab-43e0-8f5a-096198553fd9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# nan, nanf, nanl

Returns a quiet NaN value.

## Syntax

```C
double nan( const char* input );
float nanf( const char* input );
long double nanl( const char* input );
```

### Parameters

*input*<br/>
A string value.

## Return Value

The **nan** functions return a quiet NaN value.

## Remarks

The **nan** functions return a floating-point value that corresponds to a quiet (non-signalling) NaN. The *input* value is ignored. For information about how a NaN is represented for output, see [printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**nan**, **nanf**, **nanl**|\<math.h>|\<cmath> or \<math.h>|

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_finite, _finitef](finite-finitef.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
