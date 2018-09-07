---
title: "invalid_multiple_scheduling Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["invalid_multiple_scheduling", "CONCRT/concurrency::invalid_multiple_scheduling", "CONCRT/concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling"]
dev_langs: ["C++"]
helpviewer_keywords: ["invalid_multiple_scheduling class"]
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# invalid_multiple_scheduling Class
This class describes an exception thrown when a `task_handle` object is scheduled multiple times using the `run` method of a `task_group` or `structured_task_group` object without an intervening call to either the `wait` or `run_and_wait` methods.  
  
## Syntax  
  
```
class invalid_multiple_scheduling : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_multiple_scheduling](#ctor)|Overloaded. Constructs an `invalid_multiple_scheduling` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_multiple_scheduling`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> invalid_multiple_scheduling 

 Constructs an `invalid_multiple_scheduling` object.  
  
```
explicit _CRTIMP invalid_multiple_scheduling(_In_z_ const char* _Message) throw();

invalid_multiple_scheduling() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [task_handle Class](task-handle-class.md)   
 [task_group Class](task-group-class.md)   
 [run](task-group-class.md)   
 [wait](task-group-class.md)   
 [run_and_wait](task-group-class.md)   
 [structured_task_group Class](structured-task-group-class.md)
