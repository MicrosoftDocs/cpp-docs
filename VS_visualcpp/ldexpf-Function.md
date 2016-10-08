---
title: "ldexpf Function"
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
ms.assetid: e5696a8a-9f10-479a-b6e0-2d37a1f357d3
caps.latest.revision: 9
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
# ldexpf Function
Computes a real number from the specified mantissa and exponent.  
  
## Syntax  
  
```  
inline float ldexpf(  
    float _X,  
    int _Exp ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value, mantissa  
  
 `_Exp`  
 Integer value, exponent  
  
## Return Value  
 Returns _X * 2^_Exp  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)