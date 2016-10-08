---
title: "nested_scheduler_missing_detach Class"
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
ms.assetid: 65d3f277-6d43-4160-97ef-caf8b26c1641
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
# nested_scheduler_missing_detach Class
This class describes an exception thrown when the Concurrency Runtime detects that you neglected to call the `CurrentScheduler::Detach` method on a context that attached to a second scheduler using the `Attach` method of the `Scheduler` object.  
  
## Syntax  
  
```  
class nested_scheduler_missing_detach : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[nested_scheduler_missing_detach::nested_scheduler_missing_detach Constructor](#nested_scheduler_missing_detach__nested_scheduler_missing_detach_constructor)|Overloaded. Constructs a `nested_scheduler_missing_detach` object.|  
  
## Remarks  
 This exception is thrown only when you nest one scheduler inside another by calling the `Attach` method of a `Scheduler` object on a context that is already owned by or attached to another scheduler. The Concurrency Runtime throws this exception opportunistically when it can detect the scenario as an aid to locating the problem. Not every instance of neglecting to call the `CurrentScheduler::Detach` method is guaranteed to throw this exception.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `nested_scheduler_missing_detach`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="nested_scheduler_missing_detach__nested_scheduler_missing_detach_constructor"></a>  nested_scheduler_missing_detach::nested_scheduler_missing_detach Constructor  
 Constructs a `nested_scheduler_missing_detach` object.  
  
```  
explicit _CRTIMP nested_scheduler_missing_detach(  
    _In_z_ const char * _Message ) throw();  
  
nested_scheduler_missing_detach() throw();  
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [Scheduler Class](../VS_visualcpp/Scheduler-Class.md)   
 [CurrentScheduler::Detach Method](../VS_visualcpp/CurrentScheduler-Class.md#currentscheduler__detach_method)   
 [Scheduler::Attach Method](../VS_visualcpp/Scheduler-Class.md#scheduler__attach_method)