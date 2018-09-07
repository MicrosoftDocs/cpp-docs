---
title: "Values | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
ms.assetid: 24003f89-220f-4f93-be7a-b650c26157d7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Values
**ANSI 3.1.2.5** The representations and sets of values of the various types of floating-point numbers  
  
 The **float** type contains 32 bits: 1 for the sign, 8 for the exponent, and 23 for the mantissa. Its range is +/- 3.4E38 with at least 7 digits of precision.  
  
 The **double** type contains 64 bits: 1 for the sign, 11 for the exponent, and 52 for the mantissa. Its range is +/- 1.7E308 with at least 15 digits of precision.  
  
 The **long double** type contains 80 bits: 1 for the sign, 15 for the exponent, and 64 for the mantissa. Its range is +/- 1.2E4932 with at least 19 digits of precision. Note that with the Microsoft C compiler, the representation of type **long double** is identical to type **double**.  
  
## See Also  
 [Floating-Point Math](../c-language/floating-point-math.md)