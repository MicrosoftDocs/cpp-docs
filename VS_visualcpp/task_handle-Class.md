---
title: "task_handle Class"
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
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
caps.latest.revision: 22
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
# task_handle Class
The `task_handle` class represents an individual parallel work item. It encapsulates the instructions and the data required to execute a piece of work.  
  
## Syntax  
  
```  
template<  
    typename _Function  
>  
class task_handle : public ::Concurrency::details::_UnrealizedChore;  
```  
  
#### Parameters  
 `_Function`  
 The type of the function object that will be invoked to execute the work represented by the `task_handle` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[task_handle::task_handle Constructor](#task_handle__task_handle_constructor)|Constructs a new `task_handle` object. The work of the task is performed by invoking the function specified as a parameter to the constructor.|  
|[task_handle::~task_handle Destructor](#task_handle___dtortask_handle_destructor)|Destroys the `task_handle` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[task_handle::operator() Operator](#task_handle__operator___operator)|The function call operator that the runtime invokes to perform the work of the task handle.|  
  
## Remarks  
 `task_handle` objects can be used in conjunction with a `structured_task_group` or a more general `task_group` object, to decompose work into parallel tasks. For more information, see [Task Parallelism](../VS_visualcpp/Task-Parallelism--Concurrency-Runtime-.md).  
  
 Note that the creator of a `task_handle` object is responsible for maintaining the lifetime of the created `task_handle` object until it is no longer required by the Concurrency Runtime. Typically, this means that the `task_handle` object must not destruct until either the `wait` or `run_and_wait` method of the `task_group` or `structured_task_group` to which it is queued has been called.  
  
 `task_handle` objects are typically used in conjunction with C++ lambdas. Because you do not know the true type of the lambda, the [make_task](concurrency_namespace_Functions) function is typically used to create a `task_handle` object.  
  
 The runtime creates a copy of the work function that you pass to a `task_handle` object. Therefore, any state changes that occur in a function object that you pass to a `task_handle` object will not appear in your copy of that function object.  
  
## Inheritance Hierarchy  
 `task_handle`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="task_handle__operator___operator"></a>  task_handle::operator() Operator  
 The function call operator that the runtime invokes to perform the work of the task handle.  
  
```  
void operator()() const;  
```  
  
##  <a name="task_handle__task_handle_constructor"></a>  task_handle::task_handle Constructor  
 Constructs a new `task_handle` object. The work of the task is performed by invoking the function specified as a parameter to the constructor.  
  
```  
task_handle(    const _Function& _Func );  
```  
  
### Parameters  
 `_Func`  
 The function that will be invoked to execute the work represented by the `task_handle` object. This may be a lambda functor, a pointer to a function, or any object that supports a version of the function call operator with the signature `void operator()()`.  
  
### Remarks  
 The runtime creates a copy of the work function that you pass to the constructor. Therefore, any state changes that occur in a function object that you pass to a `task_handle` object will not appear in your copy of that function object.  
  
##  <a name="task_handle___dtortask_handle_destructor"></a>  task_handle::~task_handle Destructor  
 Destroys the `task_handle` object.  
  
```  
~task_handle();  
```  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [task_group Class](../Topic/task_group%20Class.md)   
 [structured_task_group Class](../VS_visualcpp/structured_task_group-Class.md)   
 [make_task Function](concurrency_namespace_Functions)   
 [task_group::run Method](../Topic/task_group%20Class.md#task_group__run_method)   
 [task_group::wait Method](../Topic/task_group%20Class.md#task_group__wait_method)   
 [task_group::run_and_wait Method](../Topic/task_group%20Class.md#task_group__run_and_wait_method)   
 [structured_task_group::run Method](../VS_visualcpp/structured_task_group-Class.md#structured_task_group__run_method)   
 [structured_task_group::wait Method](../VS_visualcpp/structured_task_group-Class.md#structured_task_group__wait_method)   
 [structured_task_group::run_and_wait Method](../VS_visualcpp/structured_task_group-Class.md#structured_task_group__run_and_wait_method)