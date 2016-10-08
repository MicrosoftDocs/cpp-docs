---
title: "completion_future::wait_for Method"
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
ms.assetid: 715e4ac6-6014-48fb-b1a0-ea9d6183fbe1
caps.latest.revision: 8
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
# completion_future::wait_for Method
Blocks until the associated asynchronous operation completes or the time that's specified by `_Rel_time` has elapsed.  
  
## Syntax  
  
```  
template <  
    class _Rep,  
    class _Period  
>  
std::future_status::future_status wait_for(  
    const std::chrono::duration< _Rep, _Period>& _Rel_time ) const;  
```  
  
#### Parameters  
 `_Rep`  
 An arithmetic type that represents the number of ticks.  
  
 `_Period`  
 A std::ratio that represents the number of seconds that elapse per tick.  
  
 `_Rel_time`  
 The maximum amount of time to wait for the operation to complete.  
  
## Return Value  
 Returns:  
  
-   `std::future_status::deferred` if the associated asynchronous operation is not running.  
  
-   `std::future_status::ready` if the associated asynchronous operation is finished.  
  
-   `std::future_status::timeout` if the specified time period has elapsed.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [completion_future Class](../VS_visualcpp/completion_future-Class.md)