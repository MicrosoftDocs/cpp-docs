---
title: "array_view::synchronize_to Method"
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
ms.assetid: f6ef8a8d-623e-4f6c-adb0-021d73fc815f
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
# array_view::synchronize_to Method
Synchronizes any modifications made to this array_view to the specified accelerator_view.  
  
## Syntax  
  
```  
void synchronize_to(  
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
void synchronize_to(  
    const accelerator_view& _Accl_view ) const restrict(cpu);  
```  
  
#### Parameters  
 `_Accl_view`  
 The target accelerator_view to synchronize to.  
  
 `_Access_type`  
 The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)