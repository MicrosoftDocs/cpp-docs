---
title: "array_view::synchronize_to_async Method"
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
ms.assetid: 466d1966-cf6c-4f02-a799-57f0e59f1ce6
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
# array_view::synchronize_to_async Method
Asynchronously synchronizes any modifications made to this array_view to the specified accelerator_view.  
  
## Syntax  
  
```  
concurrency::completion_future synchronize_to_async(  
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
concurrency::completion_future synchronize_to_async(  
    const accelerator_view& _Accl_view ) const restrict(cpu);  
```  
  
#### Parameters  
 `_Accl_view`  
 The target accelerator_view to synchronize to.  
  
 `_Access_type`  
 The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read.  
  
## Return Value  
 A future upon which to wait for the operation to complete.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)