---
title: "completion_future Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# completion_future Class
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
|[completion_future::get Method](reference/completion_future-class.md#completion_future__get_method)|Waits until the associated asynchronous operation completes.|  
|[completion_future::then Method](reference/completion_future-class.md#completion_future__then_method)|Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.|  
|[completion_future::to_task Method](reference/completion_future-class.md#completion_future__to_task_method)|Returns a `task` object corresponding to the associated asynchronous operation.|  
|[completion_future::valid Method](reference/completion_future-class.md#completion_future__valid_method)|Gets a Boolean value that indicates whether the object is associated with an asynchronous operation.|  
|[completion_future::wait Method](reference/completion_future-class.md#completion_future__wait_method)|Blocks until the associated asynchronous operation completes.|  
|[completion_future::wait_for Method](reference/completion_future-class.md#completion_future__wait_for_method)|Blocks until the associated asynchronous operation completes or the time specified by `_Rel_time` has elapsed.|  
|[completion_future::wait_until Method](reference/completion_future-class.md#completion_future__wait_until_method)|Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.|  
  
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
