---
title: "invalid_scheduler_policy_value Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# invalid_scheduler_policy_value Class
This class describes an exception thrown when a policy key of a `SchedulerPolicy` object is set to an invalid value for that key.  
  
## Syntax  
  
```  
class invalid_scheduler_policy_value : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_scheduler_policy_value::invalid_scheduler_policy_value Constructor](../VS_visualcpp/invalid_scheduler_policy_thread_specification-Class.md#invalid_scheduler_policy_value__invalid_scheduler_policy_value_constructor)|Overloaded. Constructs an `invalid_scheduler_policy_value` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_scheduler_policy_value`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="invalid_scheduler_policy_thread_specification__invalid_scheduler_policy_thread_specification_constructor"></a>  invalid_scheduler_policy_thread_specification::invalid_scheduler_policy_thread_specification Constructor  
 Constructs an `invalid_scheduler_policy_value` object.  
  
```  
explicit _CRTIMP invalid_scheduler_policy_thread_specification(  
    _In_z_ const char * _Message ) throw();  
  
invalid_scheduler_policy_thread_specification() throw();  
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [SchedulerPolicy Class](../VS_visualcpp/SchedulerPolicy-Class.md)   
 [PolicyElementKey Enumeration](concurrency_namespace_Enumerations)   
 [SchedulerPolicy::SetPolicyValue Method](../VS_visualcpp/SchedulerPolicy-Class.md#schedulerpolicy__setpolicyvalue_method)   
 [SchedulerPolicy::SetConcurrencyLimits Method](../VS_visualcpp/SchedulerPolicy-Class.md#schedulerpolicy__setconcurrencylimits_method)