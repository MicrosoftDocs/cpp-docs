---
title: "texture::operator= Operator"
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
ms.assetid: 9173a95c-15d7-4aae-a115-8cd51ec59b0f
caps.latest.revision: 5
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
# texture::operator= Operator
Copies the specified [texture](../VS_visualcpp/texture-Class.md) object to this one.  
  
## Syntax  
  
```  
texture& operator=(  
   const texture & _Other  
);  
  
texture& operator=(  
   texture<_Value_type, _Rank> && _Other  
);  
```  
  
#### Parameters  
 `_Other`  
 The [texture](../VS_visualcpp/texture-Class.md) object to copy from.  
  
## Return Value  
 A reference to this [texture](../VS_visualcpp/texture-Class.md) object.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)