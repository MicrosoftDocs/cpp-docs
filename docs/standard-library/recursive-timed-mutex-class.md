---
title: "recursive_timed_mutex Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["mutex/std::recursive_timed_mutex", "mutex/std::recursive_timed_mutex::recursive_timed_mutex", "mutex/std::recursive_timed_mutex::lock", "mutex/std::recursive_timed_mutex::try_lock", "mutex/std::recursive_timed_mutex::try_lock_for", "mutex/std::recursive_timed_mutex::try_lock_until", "mutex/std::recursive_timed_mutex::unlock"]
dev_langs: ["C++"]
ms.assetid: 59cc2d5c-ed80-45f3-a0a8-05652a8ead7e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: ["cs-cz", "de-de", "es-es", "fr-fr", "it-it", "ja-jp", "ko-kr", "pl-pl", "pt-br", "ru-ru", "tr-tr", "zh-cn", "zh-tw"]
helpviewer_keywords: ["std::recursive_timed_mutex [C++]", "std::recursive_timed_mutex [C++], recursive_timed_mutex", "std::recursive_timed_mutex [C++], lock", "std::recursive_timed_mutex [C++], try_lock", "std::recursive_timed_mutex [C++], try_lock_for", "std::recursive_timed_mutex [C++], try_lock_until", "std::recursive_timed_mutex [C++], unlock"]
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
|[recursive_timed_mutex](#recursive_timed_mutex)|Constructs a `recursive_timed_mutex` object that's not locked.|  
|[~recursive_timed_mutex Destructor](#dtorrecursive_timed_mutex_destructor)|Releases any resources that are used by the `recursive_timed_mutex` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[lock](#lock)|Blocks the calling thread until the thread obtains ownership of the `mutex`.|  
|[try_lock](#try_lock)|Attempts to obtain ownership of the `mutex` without blocking.|  
|[try_lock_for](#try_lock_for)|Attempts to obtain ownership of the `mutex` for a specified time interval.|  
|[try_lock_until](#try_lock_until)|Attempts to obtain ownership of the `mutex` until a specified time.|  
|[unlock](#unlock)|Releases ownership of the `mutex`.|  
  
## Requirements  
 **Header:** \<mutex>  
  
 **Namespace:** std  
  
##  <a name="lock"></a>  lock  
 Blocks the calling thread until the thread obtains ownership of the `mutex`.  
  
```cpp  
void lock();
```  
  
### Remarks  
 If the calling thread already owns the `mutex`, the method returns immediately, and the previous lock remains in effect.  
  
##  <a name="recursive_timed_mutex"></a>  recursive_timed_mutex Constructor  
 Constructs a `recursive_timed_mutex` object that is not locked.  
  
```cpp  
recursive_timed_mutex();
```  
  
##  <a name="dtorrecursive_timed_mutex_destructor"></a>  ~recursive_timed_mutex Destructor  
 Releases any resources that are used by the `recursive_timed_mutex` object.  
  
```cpp  
~recursive_timed_mutex();
```  
  
### Remarks  
 If the object is locked when the destructor runs, the behavior is undefined.  
  
##  <a name="try_lock"></a>  try_lock  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp  
bool try_lock() noexcept;
```  
  
### Return Value  
 `true` if the method successfully obtained ownership of the `mutex` or if the calling thread already owns the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the function immediately returns `true`, and the previous lock remains in effect.  
  
##  <a name="try_lock_for"></a>  try_lock_for  
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
  
##  <a name="try_lock_until"></a>  try_lock_until  
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
  
##  <a name="unlock"></a>  unlock  
 Releases ownership of the `mutex`.  
  
```cpp  
void unlock();
```  
  
### Remarks  
 This method releases ownership of the `mutex` only after it is called as many times as [lock](#lock), [try_lock](#try_lock), [try_lock_for](#try_lock_for), and [try_lock_until](#try_lock_until) have been called successfully on the `recursive_timed_mutex` object.  
  
 If the calling thread does not own the `mutex`, the behavior is undefined.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



