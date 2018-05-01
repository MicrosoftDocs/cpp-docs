---
title: "invalid_compute_domain Class | Microsoft Docs"
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
  - "amprt/Concurrency::invalid_compute_domain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_compute_domain class"
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# invalid_compute_domain Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The exception that's thrown when the runtime can't start a kernel by using the compute domain specified at the [parallel_for_each](http://msdn.microsoft.com/library/449013a2-5f16-4280-ac1a-0d850f7d5160) call site.  
  
## Syntax  
  
```  
class invalid_compute_domain : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_compute_domain::invalid_compute_domain Constructor](http://msdn.microsoft.com/library/d304a551-19da-4191-90fe-1cbaf4a737f7)|Initializes a new instance of the `invalid_compute_domain` class.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `invalid_compute_domain`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
