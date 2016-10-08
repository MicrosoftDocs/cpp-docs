---
title: "accelerator_view::operator!= Operator"
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
ms.assetid: e27cc235-d333-453c-b5d6-2eacb6c9fb9d
caps.latest.revision: 10
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
# accelerator_view::operator!= Operator
Compares this [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object with another and returns `false` if they are the same; otherwise, returns `true`.  
  
## Syntax  
  
```  
bool operator!= (    const accelerator_view & _Other ) const;  
```  
  
#### Parameters  
 `_Other`  
 The `accelerator_view` object to compare with this one.  
  
## Return Value  
 `false` if the two objects are the same; otherwise, `true`.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [accelerator_view Class](../VS_visualcpp/accelerator_view-Class.md)