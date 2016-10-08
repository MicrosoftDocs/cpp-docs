---
title: "completion_future::wait_until Method"
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
ms.assetid: cb12f1a2-211f-4c64-85e6-a37585573847
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
# completion_future::wait_until Method
Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.  
  
## Syntax  
  
```  
template <  
    class _Clock,  
    class _Duration  
>  
std::future_status::future_status wait_until(  
    const std::chrono::time_point< _Clock, _Duration>& _Abs_time ) const;  
```  
  
#### Parameters  
 `_Clock`  
 The clock on which this time point is measured.  
  
 `_Duration`  
 The time interval since the start of `_Clock`’s epoch, after which the function will time out.  
  
 `_Abs_time`  
 The point in time after which the function will time out.  
  
## Return Value  
 Returns:  
  
1.  `std::future_status::deferred` if the associated asynchronous operation is not running.  
  
2.  `std::future_status::ready` if the associated asynchronous operation is finished.  
  
3.  `std::future_status::timeout` if the time period specified has elapsed.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [completion_future Class](../VS_visualcpp/completion_future-Class.md)