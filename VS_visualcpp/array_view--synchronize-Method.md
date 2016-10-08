---
title: "array_view::synchronize Method"
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
ms.assetid: 124cc736-d511-42cb-8e2b-17bb75a6c2de
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
# array_view::synchronize Method
Synchronizes any modifications made to the `array_view` object back to its source data.  
  
## Syntax  
  
```  
void synchronize(  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
void synchronize() const restrict(cpu);  
```  
  
#### Parameters  
 `_Access_type`  
 The intended [access_type](../VS_visualcpp/access_type-Enumeration.md) on the target [accelerator_view](../VS_visualcpp/accelerator_view-Class.md). This parameter has a default value of `access_type_read`.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)