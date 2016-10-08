---
title: "texture::get_associated_accelerator_view Method"
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
ms.assetid: e2d4d32a-30aa-43b4-9811-1025330e2511
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
# texture::get_associated_accelerator_view Method
Returns the accelerator_view that is the preferred target for this texture to be copied to.  
  
## Syntax  
  
```  
Concurrency::accelerator_view get_associated_accelerator_view() const restrict(cpu);  
```  
  
## Return Value  
 The [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) that is the preferred target for this texture to be copied to.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)