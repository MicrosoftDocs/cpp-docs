---
title: "step Function"
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
ms.assetid: f9432540-8e3d-41d2-b0df-3e5af76aa7b0
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
# step Function
Compares two values, returning 0 or 1 based on which value is greater  
  
## Syntax  
  
```  
inline float step(  
    float _Y,  
    float _X ) restrict(amp);  
```  
  
#### Parameters  
 `_Y`  
 Floating-point value  
  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns 1 if the _X is greater than or equal to _Y; otherwise, 0  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)