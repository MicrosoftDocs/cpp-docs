---
title: "accelerator_view_removed Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::accelerator_view_removed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "amprt/Concurrency::accelerator_view_removed Class"
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
|[accelerator_view_removed::get_view_removed_reason Method](reference/accelerator_view_removed-class.md#accelerator_view_removed__get_view_removed_reason_method)|Returns an HRESULT error code indicating the cause of the `accelerator_view` object's removal.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
