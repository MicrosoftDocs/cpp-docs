---
title: "signbit Function (fast_math)"
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
ms.assetid: 30e26c14-1004-48d1-980d-f32249bfe248
caps.latest.revision: 5
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
# signbit Function (fast_math)
Determines whether the sign of _X is negative  
  
## Syntax  
  
```  
inline int signbit(    float _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns a nonzero value if and only if the sign of _X is negative  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency::fast_math Namespace](../VS_visualcpp/Concurrency--fast_math-Namespace.md)