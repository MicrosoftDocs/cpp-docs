---
title: "atan2 Function"
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
ms.assetid: 92cc3291-2067-4996-9748-03bed8cbab43
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
# atan2 Function
Calculates the arctangent of _Y/_X  
  
## Syntax  
  
```  
inline float atan2(  
    float _Y,  
    float _X ) restrict(amp);  
  
inline double atan2(  
    double _Y,  
    double _X ) restrict(amp);  
```  
  
#### Parameters  
 `_Y`  
 Floating-point value  
  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns the arctangent value of _Y/_X  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)