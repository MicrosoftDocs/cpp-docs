---
title: "texture::set Method"
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
ms.assetid: c518e29e-64f3-4d27-8e2c-3beb2ce2981c
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
# texture::set Method
Sets the value of the element at the specified index.  
  
## Syntax  
  
```  
void set(  
   const index<_Rank>& _Index,  
   const value_type& _Value  
) restrict(amp);  
```  
  
#### Parameters  
 `_Index`  
 The index of the element.  
  
 `_Rank`  
 The rank of the index.  
  
 `_Value`  
 The new value of the element.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)