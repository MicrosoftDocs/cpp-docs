---
title: "task_canceled Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["task_canceled", "CONCRT/concurrency::task_canceled", "CONCRT/concurrency::task_canceled::task_canceled"]
dev_langs: ["C++"]
helpviewer_keywords: ["task_canceled class"]
ms.assetid: c3f0b234-2cc1-435f-a48e-995f45b190be
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# task_canceled Class
This class describes an exception thrown by the PPL tasks layer in order to force the current task to cancel. It is also thrown by the `get()` method on [task](/visualstudio/extensibility/debugger/task-class-internal-members), for a canceled task.  
  
## Syntax  
  
```
class task_canceled : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[task_canceled](#ctor)|Overloaded. Constructs a `task_canceled` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `task_canceled`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> task_canceled 

 Constructs a `task_canceled` object.  
  
```
explicit _CRTIMP task_canceled(_In_z_ const char* _Message) throw();

task_canceled() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
