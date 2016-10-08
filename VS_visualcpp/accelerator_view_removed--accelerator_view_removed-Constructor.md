---
title: "accelerator_view_removed::accelerator_view_removed Constructor"
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
ms.assetid: 1f4d541e-da9c-4fbd-be32-758b91ef0648
caps.latest.revision: 4
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
# accelerator_view_removed::accelerator_view_removed Constructor
Initializes a new instance of the [accelerator_view_removed](../VS_visualcpp/accelerator_view_removed-Class.md) class.  
  
## Syntax  
  
```  
explicit accelerator_view_removed(  
    const char * _Message,  
    HRESULT _View_removed_reason ) throw();  
  
explicit accelerator_view_removed(  
    HRESULT _View_removed_reason ) throw();  
```  
  
#### Parameters  
 `_Message`  
 A description of the error.  
  
 `_View_removed_reason`  
 An HRESULT error code indicating the cause of removal of the `accelerator_view` object.  
  
## Return Value  
 A new instance of the [accelerator_view_removed](../VS_visualcpp/accelerator_view_removed-Class.md) class.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [accelerator_view_removed Class](../VS_visualcpp/accelerator_view_removed-Class.md)