---
title: "completion_future Class | Microsoft Docs"
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
  - "amprt/Concurrency::completion_future"
dev_langs: 
  - "C++"
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# completion_future Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Represents a future corresponding to a C++ AMP asynchronous operation.  
  
## Syntax  
  
```  
class completion_future;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::completion_future Constructor](../Topic/completion_future::completion_future%20Constructor.md)|Initializes a new instance of the `completion_future` class.|  
|[completion_future::~completion_future Destructor](../Topic/completion_future::~completion_future%20Destructor.md)|Destroys the `completion_future` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::get Method](../Topic/completion_future::get%20Method.md)|Waits until the associated asynchronous operation completes.|  
|[completion_future::then Method](../Topic/completion_future::then%20Method.md)|Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.|  
|[completion_future::to_task Method](../Topic/completion_future::to_task%20Method.md)|Returns a `task` object corresponding to the associated asynchronous operation.|  
|[completion_future::valid Method](../Topic/completion_future::valid%20Method.md)|Gets a Boolean value that indicates whether the object is associated with an asynchronous operation.|  
|[completion_future::wait Method](../Topic/completion_future::wait%20Method.md)|Blocks until the associated asynchronous operation completes.|  
|[completion_future::wait_for Method](../Topic/completion_future::wait_for%20Method.md)|Blocks until the associated asynchronous operation completes or the time specified by `_Rel_time` has elapsed.|  
|[completion_future::wait_until Method](../Topic/completion_future::wait_until%20Method.md)|Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::operator std::shared_future\<void> Operator](../Topic/completion_future::operator%20std::shared_future%3Cvoid%3E%20Operator.md)|Implicitly converts the `completion_future` object to an `std::shared_future` object.|  
|[completion_future::operator= Operator](../Topic/completion_future::operator=%20Operator.md)|Copies the contents of the specified `completion_future` object into this one.|  
  
## Inheritance Hierarchy  
 `completion_future`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
