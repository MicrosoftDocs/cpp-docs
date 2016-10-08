---
title: "array_view::discard_data Method"
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
ms.assetid: a5647eb2-68a0-46a9-80ab-383007e55518
caps.latest.revision: 9
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
# array_view::discard_data Method
Discards the current data underlying this view. This is an optimization hint to the runtime used to avoid copying the current contents of the view to a target `accelerator_view` that it is accessed on, and its use is recommended if the existing content is not needed. This method is a no-op when used in a restrict(amp) context  
  
## Syntax  
  
```  
void discard_data() const restrict(cpu);  
```  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)