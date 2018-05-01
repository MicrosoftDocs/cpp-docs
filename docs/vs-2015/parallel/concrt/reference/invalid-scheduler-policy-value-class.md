---
title: "invalid_scheduler_policy_value Class | Microsoft Docs"
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
  - "concrt/concurrency::invalid_scheduler_policy_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_scheduler_policy_value class"
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# invalid_scheduler_policy_value Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

This class describes an exception thrown when a policy key of a `SchedulerPolicy` object is set to an invalid value for that key.  
  
## Syntax  
  
```
class invalid_scheduler_policy_value : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_scheduler_policy_value::invalid_scheduler_policy_value Constructor](../../../parallel/concrt/reference/invalid-scheduler-policy-thread-specification-class.md#invalid_scheduler_policy_value__invalid_scheduler_policy_value_constructor)|Overloaded. Constructs an `invalid_scheduler_policy_value` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_scheduler_policy_value`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="invalid_scheduler_policy_thread_specification__invalid_scheduler_policy_thread_specification_constructor"></a>  invalid_scheduler_policy_thread_specification::invalid_scheduler_policy_thread_specification Constructor  
 Constructs an `invalid_scheduler_policy_value` object.  
  
```
explicit _CRTIMP invalid_scheduler_policy_thread_specification(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_thread_specification() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [SchedulerPolicy Class](../../../parallel/concrt/reference/schedulerpolicy-class.md)
