---
title: "fmodf Function (fast_math)"
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
ms.assetid: 2bddb864-bb35-40d9-9808-2e23b8891418
caps.latest.revision: 9
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
# fmodf Function (fast_math)
Calculates the floating-point remainder of _X/_Y.  
  
## Syntax  
  
```  
inline float fmodf(  
    float _X,  
    float _Y ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
 `_Y`  
 Floating-point value  
  
## Return Value  
 Returns the floating-point remainder of _X/_Y  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency::fast_math Namespace](../VS_visualcpp/Concurrency--fast_math-Namespace.md)