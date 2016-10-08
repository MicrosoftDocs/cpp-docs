---
title: "expm1 Function"
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
ms.assetid: db9024be-e691-4bd2-92d1-94ff36595c44
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
# expm1 Function
Calculates the base-e exponential of the argument, minus 1  
  
## Syntax  
  
```  
inline float expm1(  
    float exponent ) restrict(amp);  
  
inline double expm1(  
    double exponent ) restrict(amp);  
```  
  
#### Parameters  
 `exponent`  
 The exponential term *n* of the mathematical expression `e`<sup>n</sup>, where `e` is the base of the natural logarithm.  
  
## Return Value  
 Returns the base-e exponential of the argument, minus 1  
  
## Remarks  
 The result of the function call `expm1(n)` is the same as the result of the expression `exp(n) – 1.0f` if *n* is a single-precision floating-point number, or the expression `exp(n) – 1.0` if *n* is a double-precision floating-point number.  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)