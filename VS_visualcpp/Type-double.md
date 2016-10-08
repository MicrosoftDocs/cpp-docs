---
title: "Type double"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 17c85b24-1475-4d41-a03c-ddf2d6561d34
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Type double
Double precision values with double type have 8 bytes. The format is similar to the float format except that it has an 11-bit excess-1023 exponent and a 52-bit mantissa, plus the implied high-order 1 bit. This format gives a range of approximately 1.7E–308 to 1.7E+308 for type double.  
  
 **Microsoft Specific**  
  
 The double type contains 64 bits: 1 for sign, 11 for the exponent, and 52 for the mantissa. Its range is +/–1.7E308 with at least 15 digits of precision.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Storage of Basic Types](../VS_visualcpp/Storage-of-Basic-Types.md)