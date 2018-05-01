---
title: "accelerator_view_removed Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
---
# accelerator_view_removed Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The exception that is thrown when an underlying DirectX call fails due to the Windows timeout detection and recovery mechanism.  
  
## Syntax  
  
```  
class accelerator_view_removed : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view_removed::accelerator_view_removed Constructor](http://msdn.microsoft.com/library/1f4d541e-da9c-4fbd-be32-758b91ef0648)|Initializes a new instance of the `accelerator_view_removed` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view_removed::get_view_removed_reason Method](http://msdn.microsoft.com/library/fdd6e450-58f8-4338-8968-1d77de598124)|Returns an HRESULT error code indicating the cause of the `accelerator_view` object's removal.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
