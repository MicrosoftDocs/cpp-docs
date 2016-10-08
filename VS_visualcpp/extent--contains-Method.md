---
title: "extent::contains Method"
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
ms.assetid: 28b6094f-ffcf-4c7f-b968-40e5c8c77961
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
# extent::contains Method
Indicates whether the specified [index](../VS_visualcpp/index-Class.md) value is contained within the [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object.  
  
## Syntax  
  
```  
bool contains(  
    const index<rank>& _Index ) const restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Index`  
 The `index` value to test.  
  
## Return Value  
 `true` if the specified `index` value is contained in the `extent` object; otherwise, `false`.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [extent Class](../VS_visualcpp/extent-Class--C---AMP-.md)