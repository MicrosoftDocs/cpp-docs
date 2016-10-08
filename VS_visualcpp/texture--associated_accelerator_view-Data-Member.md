---
title: "texture::associated_accelerator_view Data Member"
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
ms.assetid: 262e8d46-273f-48f2-93d2-c8d55285b722
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
# texture::associated_accelerator_view Data Member
Gets the [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) that is the preferred target for this texture to be copied to.  
  
## Syntax  
  
```  
__declspec(property(get=get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;  
```  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)