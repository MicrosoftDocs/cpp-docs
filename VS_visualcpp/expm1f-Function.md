---
title: "expm1f Function"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d1a805ec-8c4b-4d81-8bea-454767b1375e
caps.latest.revision: 10
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
# expm1f Function
Calculates the base-e exponential of the argument, minus 1  
  
## Syntax  
  
```  
inline float expm1f(    float exponent ) restrict(amp);  
```  
  
#### Parameters  
 `exponent`  
 The exponential term *n* of the mathematical expression `e`<sup>n</sup>, where `e` is the base of the natural logarithm.  
  
## Return Value  
 Returns the base-e exponential of the argument, minus 1  
  
## Remarks  
 The result of the function call `expm1f(n)` is the same as the result of the expression `expf(n) – 1.0f`.  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)