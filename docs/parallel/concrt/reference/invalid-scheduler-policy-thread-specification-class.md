---
title: "invalid_scheduler_policy_thread_specification Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# invalid_scheduler_policy_thread_specification Class
This class describes an exception thrown when an attempt is made to set the concurrency limits of a `SchedulerPolicy` object such that the value of the `MinConcurrency` key is less than the value of the `MaxConcurrency` key.  
  
## Syntax  
  
```
class invalid_scheduler_policy_thread_specification : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_scheduler_policy_thread_specification::invalid_scheduler_policy_thread_specification Constructor](invalid-scheduler-policy-value-class.md#ctor|Overloaded. Constructs an `invalid_scheduler_policy_value` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_scheduler_policy_thread_specification`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a>  invalid_scheduler_policy_value::invalid_scheduler_policy_value Constructor  
 Constructs an `invalid_scheduler_policy_value` object.  
  
```
explicit _CRTIMP invalid_scheduler_policy_value(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_value() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [SchedulerPolicy Class](schedulerpolicy-class.md)
