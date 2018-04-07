---
title: "erf, erff, erfl, erfc, erfcf, erfcl | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["erff", "erfl", "erf"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["erfl", "erf", "erff"]
dev_langs: ["C++"]
helpviewer_keywords: ["erfl function", "erff function", "erf function"]
ms.assetid: 144d90d3-e437-41c2-a659-cd57596023b5
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# erf, erff, erfl, erfc, erfcf, erfcl
Computes the error function or the complementary error function of a value.

## Syntax

```
double erf(
   double x
);
float erf(
   float x
); // C++ only
long double erf(
   long double x
); // C++ only
float erff(
   float x
);
long double erfl(
   long double x
);
double erfc(
   double x
);
float erfc(
   float x
); // C++ only
long double erfc(
   long double x
); // C++ only
float erfcf(
   float x
);
long double erfcl(
   long double x
);
```

#### Parameters
 *x*<br/>
 A floating-point value.

## Return Value
 The **erf** functions return the Gauss error function of *x*. The **erfc** functions return the complementary Gauss error function of *x*.

## Remarks
 The **erf** functions calculate the Gauss error function of *x*, which is defined as:

 ![The error function of x](../../c-runtime-library/reference/media/crt_erf_formula.PNG "CRT_erf_formula")

 The complementary Gauss error function is defined as 1 - erf(x). The **erf** functions return a value in the range -1.0 to 1.0. There is no error return. The **erfc** functions return a value in the range 0 to 2. If *x* is too large for **erfc**, the **errno** variable is set to **ERANGE**.

 Because C++ allows overloading, you can call overloads of **erf** and **erfc** that take and return **float** and **long** **double** types. In a C program, **erf** and **erfc** always take and return a **double**.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**erf**, **erff**, **erfl**, **erfc**, **erfcf**, **erfcl**|\<math.h>|

 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See Also
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
