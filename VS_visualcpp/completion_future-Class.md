---
title: "completion_future Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
caps.latest.revision: 6
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
# completion_future Class
Represents a future corresponding to a C++ AMP asynchronous operation.  
  
## Syntax  
  
```  
class completion_future;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::completion_future Constructor](../VS_visualcpp/completion_future--completion_future-Constructor.md)|Initializes a new instance of the `completion_future` class.|  
|[completion_future::~completion_future Destructor](../VS_visualcpp/completion_future--~completion_future-Destructor.md)|Destroys the `completion_future` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::get Method](../VS_visualcpp/completion_future--get-Method.md)|Waits until the associated asynchronous operation completes.|  
|[completion_future::then Method](../VS_visualcpp/completion_future--then-Method.md)|Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.|  
|[completion_future::to_task Method](../VS_visualcpp/completion_future--to_task-Method.md)|Returns a `task` object corresponding to the associated asynchronous operation.|  
|[completion_future::valid Method](../VS_visualcpp/completion_future--valid-Method.md)|Gets a Boolean value that indicates whether the object is associated with an asynchronous operation.|  
|[completion_future::wait Method](../VS_visualcpp/completion_future--wait-Method.md)|Blocks until the associated asynchronous operation completes.|  
|[completion_future::wait_for Method](../VS_visualcpp/completion_future--wait_for-Method.md)|Blocks until the associated asynchronous operation completes or the time specified by `_Rel_time` has elapsed.|  
|[completion_future::wait_until Method](../VS_visualcpp/completion_future--wait_until-Method.md)|Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::operator std::shared_future<void\> Operator](../VS_visualcpp/completion_future--operator-std--shared_future-void--Operator.md)|Implicitly converts the `completion_future` object to an `std::shared_future` object.|  
|[completion_future::operator= Operator](../VS_visualcpp/completion_future--operator=-Operator.md)|Copies the contents of the specified `completion_future` object into this one.|  
  
## Inheritance Hierarchy  
 `completion_future`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)