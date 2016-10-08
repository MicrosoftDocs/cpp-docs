---
title: "rsqrt Function"
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
ms.assetid: b97087e4-a0b0-450e-8b6d-e97156bbbc67
caps.latest.revision: 8
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
# rsqrt Function
Returns the reciprocal of the square root of the argument  
  
## Syntax  
  
```  
inline float rsqrt(  
    float _X ) restrict(amp);  
  
inline double rsqrt(  
    double _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns the reciprocal of the square root of the argument  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)