---
title: "ldexpf Function (fast_math)"
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
ms.assetid: d3e46d8a-1b8b-4534-8ef4-2e7becd31ca0
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# ldexpf Function (fast_math)
Computes a real number from the mantissa and exponent  
  
## Syntax  
  
```  
inline float ldexpf(  
    float _X,  
    int _Exp ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value, mentissa  
  
 `_Exp`  
 Integer exponent  
  
## Return Value  
 Returns _X * 2^_Exp  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency::fast_math Namespace](../VS_visualcpp/Concurrency--fast_math-Namespace.md)