---
title: "invalid_multiple_scheduling Class | Microsoft Docs"
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
  - "concrt/concurrency::invalid_multiple_scheduling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_multiple_scheduling class"
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# invalid_multiple_scheduling Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

This class describes an exception thrown when a `task_handle` object is scheduled multiple times using the `run` method of a `task_group` or `structured_task_group` object without an intervening call to either the `wait` or `run_and_wait` methods.  
  
## Syntax  
  
```
class invalid_multiple_scheduling : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_multiple_scheduling::invalid_multiple_scheduling Constructor](#invalid_multiple_scheduling__invalid_multiple_scheduling_constructor)|Overloaded. Constructs an `invalid_multiple_scheduling` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_multiple_scheduling`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="invalid_multiple_scheduling__invalid_multiple_scheduling_constructor"></a>  invalid_multiple_scheduling::invalid_multiple_scheduling Constructor  
 Constructs an `invalid_multiple_scheduling` object.  
  
```
explicit _CRTIMP invalid_multiple_scheduling(_In_z_ const char* _Message) throw();

invalid_multiple_scheduling() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [task_handle Class](../../../parallel/concrt/reference/task-handle-class.md)   
 [task_group Class](http://msdn.microsoft.com/library/b4af5b28-227d-4488-8194-0a0d039173b7)   
 [task_group::run Method](http://msdn.microsoft.com/library/b4af5b28-227d-4488-8194-0a0d039173b7#task_group__run_method)   
 [task_group::wait Method](http://msdn.microsoft.com/library/b4af5b28-227d-4488-8194-0a0d039173b7#task_group__wait_method)   
 [task_group::run_and_wait Method](http://msdn.microsoft.com/library/b4af5b28-227d-4488-8194-0a0d039173b7#task_group__run_and_wait_method)   
 [structured_task_group Class](../../../parallel/concrt/reference/structured-task-group-class.md)
