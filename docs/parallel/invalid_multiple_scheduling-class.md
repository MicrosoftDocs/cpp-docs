---
title: "invalid_multiple_scheduling Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::invalid_multiple_scheduling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_multiple_scheduling class"
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
caps.latest.revision: 18
ms.author: "mithom"
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
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [task_handle Class](../parallel/task_handle-class.md)   
 [task_group Class](../Topic/task_group%20Class.md)   
 [task_group::run Method](../Topic/task_group%20Class.md#task_group__run_method)   
 [task_group::wait Method](../Topic/task_group%20Class.md#task_group__wait_method)   
 [task_group::run_and_wait Method](../Topic/task_group%20Class.md#task_group__run_and_wait_method)   
 [structured_task_group Class](../parallel/structured_task_group-class.md)   
 [structured_task_group::run Method](../parallel/structured_task_group-class.md#structured_task_group__run_method)   
 [structured_task_group::wait Method](../parallel/structured_task_group-class.md#structured_task_group__wait_method)   
 [structured_task_group::run_and_wait Method](../parallel/structured_task_group-class.md#structured_task_group__run_and_wait_method)

