---
title: "array_view::get_source_accelerator_view Method"
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
ms.assetid: b84229ce-644d-4647-baea-5516f33d43ac
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
# array_view::get_source_accelerator_view Method
Returns the accelerator_view where the data source of the array_view is located. If the array_view does not have a data source, this API throws a runtime_exception  
  
## Syntax  
  
```  
accelerator_view get_source_accelerator_view() const;  
```  
  
## Return Value  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)