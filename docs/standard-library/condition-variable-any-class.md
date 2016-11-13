---
title: "condition_variable_any Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "condition_variable/std::condition_variable_any"
dev_langs: 
  - "C++"
ms.assetid: d8afe5db-1561-4ec2-8e85-21ea03ee4321
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
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
# condition_variable_any Class
Use the class `condition_variable_any` to wait for an event that has any `mutex` type.  
  
## Syntax  
  
```
class condition_variable_any;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[condition_variable_any::condition_variable_any Constructor](#condition_variable_any__condition_variable_any_constructor)|Constructs a `condition_variable_any` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[condition_variable_any::notify_all](#condition_variable_any__notify_all_method)|Unblocks all threads that are waiting for the `condition_variable_any` object.|  
|[condition_variable_any::notify_one](#condition_variable_any__notify_one_method)|Unblocks one of the threads that are waiting for the `condition_variable_any` object.|  
|[condition_variable_any::wait](#condition_variable_any__wait_method)|Blocks a thread.|  
|[condition_variable_any::wait_for](#condition_variable_any__wait_for_method)|Blocks a thread, and sets a time interval after which the thread unblocks.|  
|[condition_variable_any::wait_until](#condition_variable_any__wait_until_method)|Blocks a thread, and sets a maximum point in time at which the thread unblocks.|  
  
## Requirements  
 **Header:** condition_variable  
  
 **Namespace:** std  
  
##  <a name="condition_variable_any__condition_variable_any_constructor"></a>  condition_variable_any::condition_variable_any Constructor  
 Constructs a `condition_variable_any` object.  
  
```
condition_variable_any();
```  
  
### Remarks  
 If not enough memory is available, the constructor throws a [system_error](../standard-library/system-error-class.md) object that has a `not_enough_memory` error code. If the object cannot be constructed because some other resource is not available, the constructor throws a `system_error` object that has a `resource_unavailable_try_again` error code.  
  
##  <a name="condition_variable_any__notify_all_method"></a>  condition_variable_any::notify_all  
 Unblocks all threads that are waiting for the `condition_variable_any` object.  
  
```
void notify_all() noexcept;
```  
  
##  <a name="condition_variable_any__notify_one_method"></a>  condition_variable_any::notify_one  
 Unblocks one of the threads that are waiting on the `condition_variable_any` object.  
  
```
void notify_one() noexcept;
```  
  
##  <a name="condition_variable_any__wait_method"></a>  condition_variable_any::wait  
 Blocks a thread.  
  
```
template <class Lock>  
void wait(Lock& Lck);

template <class Lock, class Predicate>
void wait(Lock& Lck, Predicate Pred);
```  
  
### Parameters  
 `Lck`  
 A `mutex` object of any type.  
  
 `Pred`  
 Any expression that returns `true` or `false`.  
  
### Remarks  
 The first method blocks until the `condition_variable_any` object is signaled by a call to [notify_one](../standard-library/condition-variable-class.md#condition_variable__notify_one_method) or [notify_all](../standard-library/condition-variable-class.md#condition_variable__notify_all_method). It can also wake up spuriously.  
  
 The second method in effect executes the following code.  
  
```
while (!Pred())
    wait(Lck);
```    
  
##  <a name="condition_variable_any__wait_for_method"></a>  condition_variable_any::wait_for  
 Blocks a thread, and sets a time interval after which the thread unblocks.  
  
```
template <class Lock, class Rep, class Period>
bool wait_for(Lock& Lck, const chrono::duration<Rep, Period>& Rel_time);

template <class Lock, class Rep, class Period, class Predicate>
bool wait_for(Lock& Lck, const chrono::duration<Rep, Period>& Rel_time, Predicate Pred);
```  
  
### Parameters  
 `Lck`  
 A `mutex` object of any type.  
  
 `Rel_time`  
 A `chrono::duration` object that specifies the amount of time before the thread wakes up.  
  
 `Pred`  
 Any expression that returns `true` or `false`.  
  
### Return Value  
 The first method returns `cv_status::timeout` if the wait terminates when `Rel_time` has elapsed. Otherwise, the method returns `cv_status::no_timeout`.  
  
 The second method returns the value of `Pred`.  
  
### Remarks  
 The first method blocks until the `condition_variable_any` object is signaled by a call to [notify_one](../standard-library/condition-variable-class.md#condition_variable__notify_one_method) or [notify_all](../standard-library/condition-variable-class.md#condition_variable__notify_all_method), or until the time interval `Rel_time` has elapsed. It can also wake up spuriously.  
  
 The second method in effect executes the following code.  
  
```cpp
while(!Pred())
    if(wait_for(Lck, Rel_time) == cv_status::timeout)
    return Pred();

return true;
```  
  
##  <a name="condition_variable_any__wait_until_method"></a>  condition_variable_any::wait_until  
 Blocks a thread, and sets a maximum point in time at which the thread unblocks.  
  
```
template <class Lock, class Clock, class Duration>
void wait_until(Lock& Lck, const chrono::time_point<Clock, Duration>& Abs_time);

template <class Lock, class Clock, class Duration, class Predicate>
void wait_until(
    Lock& Lck,
    const chrono::time_point<Clock, Duration>& Abs_time,
    Predicate Pred);

template <class Lock>
void wait_until(Lock Lck, const xtime* Abs_time);

template <class Lock, class Predicate>
void wait_until(
    Lock Lck,
    const xtime* Abs_time,
    Predicate Pred);
```  
  
### Parameters  
 `Lck`  
 A mutex object.  
  
 `Abs_time`  
 A [chrono::time_point](../standard-library/time-point-class.md) object.  
  
 `Pred`  
 Any expression that returns `true` or `false`.  
  
### Return Value  
 Methods that return a `cv_status` type return `cv_status::timeout` if the wait terminates when `Abs_time` elapses. Otherwise, the methods return `cv_status::no_timeout`.  
  
 Methods that return a `bool` return the value of `Pred`.  
  
### Remarks  
 The first method blocks until the `condition_variable` object is signaled by a call to [notify_one](../standard-library/condition-variable-class.md#condition_variable__notify_one_method) or [notify_all](../standard-library/condition-variable-class.md#condition_variable__notify_all_method), or until `Abs_time`. It can also wake up spuriously.  
  
 The second method in effect executes the following code.  
  
```
while(!Pred())
    if(wait_until(Lck, Abs_time) == cv_status::timeout)
    return Pred();

return true;
```  
  
 The third and fourth methods use a pointer to an object of type `xtime` to replace the `chrono::time_point` object. The `xtime` object specifies the maximum amount of time to wait for a signal.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [<condition_variable>](../standard-library/condition-variable.md)



