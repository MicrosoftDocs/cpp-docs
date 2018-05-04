---
title: "invalid_scheduler_policy_key Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["invalid_scheduler_policy_key", "CONCRT/concurrency::invalid_scheduler_policy_key", "CONCRT/concurrency::invalid_scheduler_policy_key::invalid_scheduler_policy_key"]
dev_langs: ["C++"]
helpviewer_keywords: ["invalid_scheduler_policy_key class"]
ms.assetid: 6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# invalid_scheduler_policy_key Class
This class describes an exception thrown when an invalid or unknown key is passed to a `SchedulerPolicy` object constructor, or the `SetPolicyValue` method of a `SchedulerPolicy` object is passed a key that must be changed using other means such as the `SetConcurrencyLimits` method.  
  
## Syntax  
  
```
class invalid_scheduler_policy_key : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_scheduler_policy_key](#ctor)|Overloaded. Constructs an `invalid_scheduler_policy_key` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_scheduler_policy_key`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> invalid_scheduler_policy_key 

 Constructs an `invalid_scheduler_policy_key` object.  
  
```
explicit _CRTIMP invalid_scheduler_policy_key(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_key() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [SchedulerPolicy Class](schedulerpolicy-class.md)
