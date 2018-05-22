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
|[completion_future::completion_future Constructor](http://msdn.microsoft.com/library/472755a4-baa2-4892-836b-9ff4b80747dc)|Initializes a new instance of the `completion_future` class.|  
|[completion_future::~completion_future Destructor](http://msdn.microsoft.com/library/00b3b726-d9ed-4ab8-a249-7ee9269c3c02)|Destroys the `completion_future` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::get Method](http://msdn.microsoft.com/library/edfee0c5-cfdc-45fc-b115-e15057b1bb74)|Waits until the associated asynchronous operation completes.|  
|[completion_future::then Method](http://msdn.microsoft.com/library/b0193808-be8a-4785-ba9e-e4d46329aaac)|Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.|  
|[completion_future::to_task Method](http://msdn.microsoft.com/library/79fd4965-3d35-44db-845c-450e20b2647a)|Returns a `task` object corresponding to the associated asynchronous operation.|  
|[completion_future::valid Method](http://msdn.microsoft.com/library/58ec69af-b461-4cb1-988b-bb7909c2222e)|Gets a Boolean value that indicates whether the object is associated with an asynchronous operation.|  
|[completion_future::wait Method](http://msdn.microsoft.com/library/7c14f5cb-c4ff-47e5-af77-74fe63338b68)|Blocks until the associated asynchronous operation completes.|  
|[completion_future::wait_for Method](http://msdn.microsoft.com/library/715e4ac6-6014-48fb-b1a0-ea9d6183fbe1)|Blocks until the associated asynchronous operation completes or the time specified by `_Rel_time` has elapsed.|  
|[completion_future::wait_until Method](http://msdn.microsoft.com/library/cb12f1a2-211f-4c64-85e6-a37585573847)|Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::operator std::shared_future\<void> Operator](http://msdn.microsoft.com/library/243149e6-5f75-4d98-84dc-3aa30be61068)|Implicitly converts the `completion_future` object to an `std::shared_future` object.|  
|[completion_future::operator= Operator](http://msdn.microsoft.com/library/ecaf56c3-b0f6-4432-a782-f3e71fc68f58)|Copies the contents of the specified `completion_future` object into this one.|  
  
## Inheritance Hierarchy  
 `completion_future`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
