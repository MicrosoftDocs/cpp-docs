---
title: "saturate Function"
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
ms.assetid: dfefbee9-84f1-4c6c-bb36-b41e1dc6d205
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
# saturate Function
Clamps _X within the range of 0 to 1  
  
## Syntax  
  
```  
inline float saturate(    float _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns _X clamped within the range of 0 to 1  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)