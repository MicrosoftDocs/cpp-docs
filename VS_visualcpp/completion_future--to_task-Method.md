---
title: "completion_future::to_task Method"
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
ms.assetid: 79fd4965-3d35-44db-845c-450e20b2647a
caps.latest.revision: 5
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
# completion_future::to_task Method
Returns a `task` object corresponding to the associated asynchronous operation.  
  
## Syntax  
  
```  
concurrency::task<void> to_task() const;  
```  
  
## Return Value  
 A `task` object corresponding to the associated asynchronous operation.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [completion_future Class](../VS_visualcpp/completion_future-Class.md)