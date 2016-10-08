---
title: "accelerator_view::wait Method"
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
ms.assetid: c34ac1b3-e5bf-4a4e-86a3-420d23f0e2e9
caps.latest.revision: 11
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
# accelerator_view::wait Method
Waits for all commands submitted to the [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object to finish.  
  
## Syntax  
  
```  
void wait();  
```  
  
## Return Value  
 Returns `void`.  
  
## Remarks  
 If the [queuing_mode](../VS_visualcpp/queuing_mode-Enumeration.md) is `immediate`, this method returns immediately without blocking.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [accelerator_view Class](../VS_visualcpp/accelerator_view-Class.md)