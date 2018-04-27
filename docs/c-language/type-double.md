---
title: "Type double | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["mantissas, floating-point variables", "type double", "portability [C++], type double", "double data type"]
ms.assetid: 17c85b24-1475-4d41-a03c-ddf2d6561d34
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Type double
Double precision values with double type have 8 bytes. The format is similar to the float format except that it has an 11-bit excess-1023 exponent and a 52-bit mantissa, plus the implied high-order 1 bit. This format gives a range of approximately 1.7E-308 to 1.7E+308 for type double.  
  
 **Microsoft Specific**  
  
 The double type contains 64 bits: 1 for sign, 11 for the exponent, and 52 for the mantissa. Its range is +/-1.7E308 with at least 15 digits of precision.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Storage of Basic Types](../c-language/storage-of-basic-types.md)