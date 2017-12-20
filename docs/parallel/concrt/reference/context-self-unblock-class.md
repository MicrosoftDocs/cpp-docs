---
title: "context_self_unblock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["context_self_unblock", "CONCRT/concurrency::context_self_unblock", "CONCRT/concurrency::context_self_unblock::context_self_unblock"]
dev_langs: ["C++"]
helpviewer_keywords: ["context_self_unblock class"]
ms.assetid: 9601cd28-4f40-4c2e-89ab-747068956331
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# context_self_unblock Class
This class describes an exception thrown when the `Unblock` method of a `Context` object is called from the same context. This would indicate an attempt by a given context to unblock itself.  
  
## Syntax  
  
```  
class context_self_unblock : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[context_self_unblock](#ctor)|Overloaded. Constructs a `context_self_unblock` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `context_self_unblock`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> context_self_unblock 

 Constructs a `context_self_unblock` object.  
  
```  
explicit _CRTIMP context_self_unblock(_In_z_ const char* _Message) throw();

 
context_self_unblock() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
