---
title: "accelerator_view::create_marker Method"
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
ms.assetid: 6a5fc539-b5a4-4ddf-8201-a5fa633385ee
caps.latest.revision: 8
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
# accelerator_view::create_marker Method
Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.  
  
## Syntax  
  
```  
concurrency::completion_future create_marker();  
```  
  
## Return Value  
 A future to track the completion of all commands submitted so far to this `accelerator_view` object.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [accelerator_view Class](../VS_visualcpp/accelerator_view-Class.md)