---
title: "texture::data Method"
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
ms.assetid: dda01f88-a19a-4161-85cc-3b197b095187
caps.latest.revision: 4
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
# texture::data Method
Returns a CPU pointer to the raw data of this texture.  
  
## Syntax  
  
```  
void* data() restrict(cpu);  
  
const void* data() const restrict(cpu);  
```  
  
## Return Value  
 A pointer to the raw data of the texture.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)