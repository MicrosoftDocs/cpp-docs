---
title: "improper_scheduler_detach Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["improper_scheduler_detach", "CONCRT/concurrency::improper_scheduler_detach", "CONCRT/concurrency::improper_scheduler_detach::improper_scheduler_detach"]
dev_langs: ["C++"]
helpviewer_keywords: ["improper_scheduler_detach class"]
ms.assetid: 30132102-c900-4951-a470-b63b4e3aa2d2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# improper_scheduler_detach Class
This class describes an exception thrown when the `CurrentScheduler::Detach` method is called on a context which has not been attached to any scheduler using the `Attach` method of a `Scheduler` object.  
  
## Syntax  
  
```
class improper_scheduler_detach : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[improper_scheduler_detach](#ctor)|Overloaded. Constructs an `improper_scheduler_detach` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `improper_scheduler_detach`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> improper_scheduler_detach 

 Constructs an `improper_scheduler_detach` object.  
  
```
explicit _CRTIMP improper_scheduler_detach(_In_z_ const char* _Message) throw();

improper_scheduler_detach() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Scheduler Class](scheduler-class.md)
