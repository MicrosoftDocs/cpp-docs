---
title: "noise Function"
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
ms.assetid: 86760981-66e3-4cf2-8f17-6e450554e1ef
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
# noise Function
Generates a random value using the Perlin noise algorithm  
  
## Syntax  
  
```  
inline float noise(    float _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value from which to generate Perlin noise  
  
## Return Value  
 Returns The Perlin noise value within a range between -1 and 1  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)