---
title: "isnan, _isnan, _isnanf | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_isnan", "_isnanf", "isnan"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_isnan", "isnan", "math/isnan", "math/_isnan", "math/_isnanf", "_isnanf"]
dev_langs: ["C++"]
helpviewer_keywords: ["NAN (not a number)", "_isnan function", "IEEE floating-point representation", "Not a Number (NANs)", "isnan function"]
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# isnan, _isnan, _isnanf

Tests if a floating-point value is not a number (NAN).

## Syntax

```C
int isnan(
   /* floating-point */ x
); /* C-only macro */

int _isnan(
   double x
);

int _isnanf(
   float x
); /* x64 only */

template <class T>
bool isnan(
   T x
) throw(); /* C++ only */
```

### Parameters

*x*<br/>
The floating-point value to test.

## Return Value

In C, the **isnan** macro and the **_isnan** and **_isnanf** functions return a nonzero value if the argument *x* is a NAN; otherwise they return 0.

In C++, the **isnan** template functions return **true** if the argument *x* is a NAN; otherwise they return **false**.

## Remarks

The C **isnan** macro and the **_isnan** and **_isnanf** functions test floating-point value *x*, returning a nonzero value if *x* is a Not a Number (NAN) value. A NAN is generated when the result of a floating-point operation can't be represented in IEEE-754 floating-point format for the specified type. For information about how a NAN is represented for output, see [printf](printf-printf-l-wprintf-wprintf-l.md).

When compiled as C++, the **isnan** macro is not defined, and an **isnan** template function is defined instead. It returns a value of type **bool** instead of an integer.

The **_isnan** and **_isnanf** functions are Microsoft specific. The **_isnanf** function is only available when compiled for x64.

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------------|-------------------------------|
|**isnan**, **_isnanf**|\<math.h>|\<math.h> or \<cmath>|
|**_isnan**|\<float.h>|\<float.h> or \<cfloat>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_finite, _finitef](finite-finitef.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
