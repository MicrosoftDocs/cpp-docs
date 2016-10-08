---
title: "accelerator_view::get_is_auto_selection Method"
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
ms.assetid: 6389fb49-122d-4bbc-b5cb-b792a571ff4e
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
# accelerator_view::get_is_auto_selection Method
Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a [parallel_for_each](../VS_visualcpp/parallel_for_each-Function--C---AMP-.md).  
  
## Syntax  
  
```  
bool get_is_auto_selection() const;  
```  
  
## Return Value  
 `true` if the runtime will automatically select an appropriate accelerator; otherwise, `false`.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [accelerator_view Class](../VS_visualcpp/accelerator_view-Class.md)