---
title: "accelerator_view_removed Class"
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
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
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
# accelerator_view_removed Class
The exception that is thrown when an underlying DirectX call fails due to the Windows timeout detection and recovery mechanism.  
  
## Syntax  
  
```  
class accelerator_view_removed : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view_removed::accelerator_view_removed Constructor](../VS_visualcpp/accelerator_view_removed--accelerator_view_removed-Constructor.md)|Initializes a new instance of the `accelerator_view_removed` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view_removed::get_view_removed_reason Method](../VS_visualcpp/accelerator_view_removed--get_view_removed_reason-Method.md)|Returns an HRESULT error code indicating the cause of the `accelerator_view` object's removal.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)