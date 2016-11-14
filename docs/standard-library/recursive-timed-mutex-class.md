---
title: "recursive_timed_mutex Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::recursive_timed_mutex"
dev_langs: 
  - "C++"
ms.assetid: 59cc2d5c-ed80-45f3-a0a8-05652a8ead7e
caps.latest.revision: 9
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
# recursive_timed_mutex Class
Represents a *timed mutex type*. Objects of this type are used to enforce mutual exclusion by using time-limited blocking within a program. Unlike objects of type [timed_mutex](../standard-library/timed-mutex-class.md), the effect of calling locking methods for `recursive_timed_mutex` objects is well-defined.  
  
## Syntax  
  
```
class recursive_timed_mutex;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[recursive_timed_mutex Constructor](#recursive_timed_mutex__recursive_timed_mutex_constructor)|Constructs a `recursive_timed_mutex` object that's not locked.|  
|[~recursive_timed_mutex Destructor](#recursive_timed_mutex___dtorrecursive_timed_mutex_destructor)|Releases any resources that are used by the `recursive_timed_mutex` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[lock](#recursive_timed_mutex__lock_method)|Blocks the calling thread until the thread obtains ownership of the `mutex`.|  
|[try_lock](#recursive_timed_mutex__try_lock_method)|Attempts to obtain ownership of the `mutex` without blocking.|  
|[try_lock_for](#recursive_timed_mutex__try_lock_for_method)|Attempts to obtain ownership of the `mutex` for a specified time interval.|  
|[try_lock_until](#recursive_timed_mutex__try_lock_until_method)|Attempts to obtain ownership of the `mutex` until a specified time.|  
|[unlock](#recursive_timed_mutex__unlock_method)|Releases ownership of the `mutex`.|  
  
## Requirements  
 **Header:** mutex  
  
 **Namespace:** std  
  
##  <a name="recursive_timed_mutex__lock_method"></a>  lock  
 Blocks the calling thread until the thread obtains ownership of the `mutex`.  
  
```cpp
void lock();
```  
  
### Remarks  
 If the calling thread already owns the `mutex`, the method returns immediately, and the previous lock remains in effect.  
  
##  <a name="recursive_timed_mutex__recursive_timed_mutex_constructor"></a>  recursive_timed_mutex Constructor  
 Constructs a `recursive_timed_mutex` object that is not locked.  
  
```cpp
recursive_timed_mutex();
```  
  
##  <a name="recursive_timed_mutex___dtorrecursive_timed_mutex_destructor"></a>  ~recursive_timed_mutex Destructor  
 Releases any resources that are used by the `recursive_timed_mutex` object.  
  
```cpp
~recursive_timed_mutex();
```  
  
### Remarks  
 If the object is locked when the destructor runs, the behavior is undefined.  
  
##  <a name="recursive_timed_mutex__try_lock_method"></a>  try_lock  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp
bool try_lock() noexcept;
```  
  
### Return Value  
 `true` if the method successfully obtained ownership of the `mutex` or if the calling thread already owns the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the function immediately returns `true`, and the previous lock remains in effect.  
  
##  <a name="recursive_timed_mutex__try_lock_for_method"></a>  try_lock_for  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp
template <class Rep, class Period>
bool try_lock_for(const chrono::duration<Rep, Period>& Rel_time);
```  
  
### Parameters  
 `Rel_time`  
 A [chrono::duration](../standard-library/duration-class.md) object that specifies the maximum amount of time that the method attempts to obtain ownership of the `mutex`.  
  
### Return Value  
 `true` if the method successfully obtains ownership of the `mutex` or if the calling thread already owns the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the method immediately returns `true`, and the previous lock remains in effect.  
  
##  <a name="recursive_timed_mutex__try_lock_until_method"></a>  try_lock_until  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp
template <class Clock, class Duration>
bool try_lock_for(const chrono::time_point<Clock, Duration>& Abs_time);

bool try_lock_until(const xtime* Abs_time);
```  
  
### Parameters  
 `Abs_time`  
 A point in time that specifies the threshold after which the method no longer attempts to obtain ownership of the `mutex`.  
  
### Return Value  
 `true` if the method successfully obtains ownership of the `mutex` or if the calling thread already owns the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the method immediately returns `true`, and the previous lock remains in effect.  
  
##  <a name="recursive_timed_mutex__unlock_method"></a>  unlock  
 Releases ownership of the `mutex`.  
  
```cpp
void unlock();
```  
  
### Remarks  
 This method releases ownership of the `mutex` only after it is called as many times as [lock](#recursive_timed_mutex__lock_method), [try_lock](#recursive_timed_mutex__try_lock_method), [try_lock_for](#recursive_timed_mutex__try_lock_for_method), and [try_lock_until](#recursive_timed_mutex__try_lock_until_method) have been called successfully on the `recursive_timed_mutex` object.  
  
 If the calling thread does not own the `mutex`, the behavior is undefined.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



