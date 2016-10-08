---
title: "array_view::copy_to Method"
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
ms.assetid: d0e55f3e-8fb8-4df5-afde-013cf72bed84
caps.latest.revision: 13
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
# array_view::copy_to Method
Copies the contents of the [array_view](../VS_visualcpp/array_view-Class.md) object to the specified destination object by calling `copy(*this, dest)`.  
  
## Syntax  
  
```  
void copy_to(  
    array<_Value_type, _Rank>& _Dest ) const;  
  
void copy_to(  
    array_view<_Value_type, _Rank>& _Dest ) const;  
```  
  
#### Parameters  
 `_Dest`  
 The object to copy to.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)