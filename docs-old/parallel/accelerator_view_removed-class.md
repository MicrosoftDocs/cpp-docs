---
title: "accelerator_view_removed Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::accelerator_view_removed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "amprt/Concurrency::accelerator_view_removed Class"
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
caps.latest.revision: 4
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
|[accelerator_view_removed::accelerator_view_removed Constructor](../Topic/accelerator_view_removed::accelerator_view_removed%20Constructor.md)|Initializes a new instance of the `accelerator_view_removed` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view_removed::get_view_removed_reason Method](../Topic/accelerator_view_removed::get_view_removed_reason%20Method.md)|Returns an HRESULT error code indicating the cause of the `accelerator_view` object's removal.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../parallel/concurrency-namespace--c---amp-.md)