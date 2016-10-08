---
title: "accelerator_view::operator== Operator"
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
ms.assetid: bd8db2fd-1c44-4e9a-ae1b-1995e915b142
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
# accelerator_view::operator== Operator
Compares this [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object with another and returns `true` if they are the same; otherwise, returns `false`.  
  
## Syntax  
  
```  
bool operator= = (    const accelerator_view & _Other ) const;  
```  
  
#### Parameters  
 `_Other`  
 The `accelerator_view` object to compare with this one.  
  
## Return Value  
 `true` if the two objects are the same; otherwise, `false`.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [accelerator_view Class](../VS_visualcpp/accelerator_view-Class.md)