---
title: "array_view::synchronize_async Method"
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
ms.assetid: c9a41b8e-9e71-44e8-b785-e1b7c46279ff
caps.latest.revision: 10
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
# array_view::synchronize_async Method
Asynchronously synchronizes any modifications made to the [array_view](../VS_visualcpp/array_view-Class.md) object back to its source data.  
  
## Syntax  
  
```  
concurrency::completion_future synchronize_async(  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
concurrency::completion_future synchronize_async() const restrict(cpu);  
```  
  
#### Parameters  
 `_Access_type`  
 The intended [access_type](../VS_visualcpp/access_type-Enumeration.md) on the target [accelerator_view](../VS_visualcpp/accelerator_view-Class.md). This parameter has a default value of `access_type_read`.  
  
## Return Value  
 A future upon which to wait for the operation to complete.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)