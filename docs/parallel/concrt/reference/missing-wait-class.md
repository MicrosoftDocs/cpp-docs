---
title: "missing_wait Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["missing_wait", "CONCRT/concurrency::missing_wait", "CONCRT/concurrency::missing_wait::missing_wait"]
dev_langs: ["C++"]
helpviewer_keywords: ["missing_wait class"]
ms.assetid: ff981875-bd43-47e3-806f-b03c9f418b18
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# missing_wait Class
This class describes an exception thrown when there are tasks still scheduled to a `task_group` or `structured_task_group` object at the time that object's destructor executes. This exception will never be thrown if the destructor is reached because of a stack unwinding as the result of an exception.  
  
## Syntax  
  
```
class missing_wait : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[missing_wait](#ctor)|Overloaded. Constructs a `missing_wait` object.|  
  
## Remarks  
 Absent exception flow, you are responsible for calling either the `wait` or `run_and_wait` method of a `task_group` or `structured_task_group` object before allowing that object to destruct. The runtime throws this exception as an indication that you forgot to call the `wait` or `run_and_wait` method.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `missing_wait`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> missing_wait 

 Constructs a `missing_wait` object.  
  
```
explicit _CRTIMP missing_wait(_In_z_ const char* _Message) throw();

missing_wait() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [task_group Class](task-group-class.md)   
 [wait](task-group-class.md)   
 [run_and_wait](task-group-class.md)   
 [structured_task_group Class](structured-task-group-class.md)
