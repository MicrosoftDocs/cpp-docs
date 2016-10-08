---
title: "invalid_scheduler_policy_key Class"
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
ms.assetid: 6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d
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
|[invalid_scheduler_policy_key::invalid_scheduler_policy_key Constructor](#invalid_scheduler_policy_key__invalid_scheduler_policy_key_constructor)|Overloaded. Constructs an `invalid_scheduler_policy_key` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_scheduler_policy_key`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="invalid_scheduler_policy_key__invalid_scheduler_policy_key_constructor"></a>  invalid_scheduler_policy_key::invalid_scheduler_policy_key Constructor  
 Constructs an `invalid_scheduler_policy_key` object.  
  
```  
explicit _CRTIMP invalid_scheduler_policy_key(  
    _In_z_ const char * _Message ) throw();  
  
invalid_scheduler_policy_key() throw();  
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