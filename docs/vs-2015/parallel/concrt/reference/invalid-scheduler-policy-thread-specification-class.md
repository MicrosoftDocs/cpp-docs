---
title: "invalid_scheduler_policy_thread_specification Class | Microsoft Docs"
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
  - "concrt/concurrency::invalid_scheduler_policy_thread_specification"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_scheduler_policy_thread_specification class"
ms.assetid: 2d0fafb2-18f8-4284-8040-3db640d33303
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# invalid_scheduler_policy_thread_specification Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

This class describes an exception thrown when an attempt is made to set the concurrency limits of a `SchedulerPolicy` object such that the value of the `MinConcurrency` key is less than the value of the `MaxConcurrency` key.  
  
## Syntax  
  
```
class invalid_scheduler_policy_thread_specification : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_scheduler_policy_thread_specification::invalid_scheduler_policy_thread_specification Constructor](../../../parallel/concrt/reference/invalid-scheduler-policy-value-class.md#invalid_scheduler_policy_thread_specification__invalid_scheduler_policy_thread_specification_constructor)|Overloaded. Constructs an `invalid_scheduler_policy_value` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_scheduler_policy_thread_specification`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="invalid_scheduler_policy_value__invalid_scheduler_policy_value_constructor"></a>  invalid_scheduler_policy_value::invalid_scheduler_policy_value Constructor  
 Constructs an `invalid_scheduler_policy_value` object.  
  
```
explicit _CRTIMP invalid_scheduler_policy_value(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_value() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [SchedulerPolicy Class](../../../parallel/concrt/reference/schedulerpolicy-class.md)
