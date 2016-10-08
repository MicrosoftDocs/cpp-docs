---
title: "texture_view::set Method"
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
ms.assetid: d130c39f-1ea9-42ce-b396-8bb69cf61059
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
# texture_view::set Method
Sets the value of the element at the specified index to the specified value.  
  
## Syntax  
  
```  
void set(  
   const index<_Rank>& _Index,  
   const value_type& _Value  
) const restrict(amp);  
```  
  
#### Parameters  
 `_Index`  
 The index of the element to set, possibly multi-dimensional.  
  
 `_Value`  
 The value to set the element to.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture_view Class](../VS_visualcpp/texture_view-Class.md)