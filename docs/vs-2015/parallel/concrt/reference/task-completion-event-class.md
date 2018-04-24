---
title: "task_completion_event Class | Microsoft Docs"
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
  - "ppltasks/concurrency::task_completion_event"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_completion_event class"
ms.assetid: fb19ed98-f245-48dc-9ba5-487ba879b28a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# task_completion_event Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The `task_completion_event` class allows you to delay the execution of a task until a condition is satisfied, or start a task in response to an external event.  
  
## Syntax  
  
```
template<typename _ResultType>
class task_completion_event;

template<>
class task_completion_event<void>;
```  
  
#### Parameters  
 `_ResultType`  
 The result type of this `task_completion_event` class.  
  
 `T`  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[task_completion_event::task_completion_event Constructor](#task_completion_event__task_completion_event_constructor)|Constructs a `task_completion_event` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[task_completion_event::set Method](#task_completion_event__set_method)|Overloaded. Sets the task completion event.|  
|[task_completion_event::set_exception Method](#task_completion_event__set_exception_method)|Overloaded. Propagates an exception to all tasks associated with this event.|  
  
## Remarks  
 Use a task created from a task completion event when your scenario requires you to create a task that will complete, and thereby have its continuations scheduled for execution, at some point in the future. The `task_completion_event` must have the same type as the task you create, and calling the set method on the task completion event with a value of that type will cause the associated task to complete, and provide that value as a result to its continuations.  
  
 If the task completion event is never signaled, any tasks created from it will be canceled when it is destructed.  
  
 `task_completion_event` behaves like a smart pointer, and should be passed by value.  
  
## Inheritance Hierarchy  
 `task_completion_event`  
  
## Requirements  
 **Header:** ppltasks.h  
  
 **Namespace:** concurrency  
  
##  <a name="task_completion_event__set_method"></a>  task_completion_event::set Method  
 Sets the task completion event.  
  
```
bool set(_ResultType _Result) const ;

bool set() const ;
```  
  
### Parameters  
 `_Result`  
 The result to set this event with.  
  
### Return Value  
 The method returns `true` if it was successful in setting the event. It returns `false` if the event is already set.  
  
### Remarks  
 In the presence of multiple or concurrent calls to `set`, only the first call will succeed and its result (if any) will be stored in the task completion event. The remaining sets are ignored and the method will return false. When you set a task completion event, all the tasks created from that event will immediately complete, and its continuations, if any, will be scheduled. Task completion objects that have a `_ResultType` other than `void` will pass the value                          to their continuations.  
  
##  <a name="task_completion_event__set_exception_method"></a>  task_completion_event::set_exception Method  
 Propagates an exception to all tasks associated with this event.  
  
```
template<typename _E>
__declspec(noinline) bool set_exception(_E _Except) const;

__declspec(noinline) bool set_exception(std::exception_ptr _ExceptionPtr) const ;
```  
  
### Parameters  
 `_E`  
 `_Except`  
 `_ExceptionPtr`  
  
### Return Value  
  
##  <a name="task_completion_event__task_completion_event_constructor"></a>  task_completion_event::task_completion_event Constructor  
 Constructs a `task_completion_event` object.  
  
```
task_completion_event();
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
