---
title: "timed_mutex Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::timed_mutex"
dev_langs: 
  - "C++"
ms.assetid: cd198081-6f38-447a-9dba-e06dfbfafe59
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
# timed_mutex Class
Represents a *timed mutex type*. Objects of this type are used to enforce mutual exclusion through time-limited blocking within a program.  
  
## Syntax  
  
```
class timed_mutex;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[timed_mutex::timed_mutex Constructor](#timed_mutex__timed_mutex_constructor)|Constructs a `timed_mutex` object that's not locked.|  
|[timed_mutex::~timed_mutex Destructor](#timed_mutex___dtortimed_mutex_destructor)|Releases any resources that are used by the `timed_mutex` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[timed_mutex::lock Method](#timed_mutex__lock_method)|Blocks the calling thread until the thread obtains ownership of the `mutex`.|  
|[timed_mutex::try_lock Method](#timed_mutex__try_lock_method)|Attempts to obtain ownership of the `mutex` without blocking.|  
|[timed_mutex::try_lock_for Method](#timed_mutex__try_lock_for_method)|Attempts to obtain ownership of the `mutex` for a specified time interval.|  
|[timed_mutex::try_lock_until Method](#timed_mutex__try_lock_until_method)|Attempts to obtain ownership of the `mutex` until a specified time.|  
|[timed_mutex::unlock Method](#timed_mutex__unlock_method)|Releases ownership of the `mutex`.|  
  
## Requirements  
 **Header:** mutex  
  
 **Namespace:** std  
  
##  <a name="timed_mutex__lock_method"></a>  timed_mutex::lock Method  
 Blocks the calling thread until the thread obtains ownership of the `mutex`.  
  
```cpp
void lock();
```  
  
### Remarks  
 If the calling thread already owns the `mutex`, the behavior is undefined.  
  
##  <a name="timed_mutex__timed_mutex_constructor"></a>  timed_mutex::timed_mutex Constructor  
 Constructs a `timed_mutex` object that is not locked.  
  
```cpp
timed_mutex();
```  
  
##  <a name="timed_mutex___dtortimed_mutex_destructor"></a>  timed_mutex::~timed_mutex Destructor  
 Releases any resources that are used by the `mutex` object.  
  
```cpp
~timed_mutex();
```  
  
### Remarks  
 If the object is locked when the destructor runs, the behavior is undefined.  
  
##  <a name="timed_mutex__try_lock_method"></a>  timed_mutex::try_lock Method  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp
bool try_lock();
```  
  
### Return Value  
 `true` if the method successfully obtains ownership of the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the behavior is undefined.  
  
##  <a name="timed_mutex__try_lock_for_method"></a>  timed_mutex::try_lock_for Method  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp
template <class Rep, class Period>
bool try_lock_for(const chrono::duration<Rep, Period>& Rel_time);
```  
  
### Parameters  
 `Rel_time`  
 A [chrono::duration](../standard-library/duration-class.md) object that specifies the maximum amount of time that the method attempts to obtain ownership of the `mutex`.  
  
### Return Value  
 `true` if the method successfully obtains ownership of the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the behavior is undefined.  
  
##  <a name="timed_mutex__try_lock_until_method"></a>  timed_mutex::try_lock_until Method  
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
 `true` if the method successfully obtains ownership of the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the behavior is undefined.  
  
##  <a name="timed_mutex__unlock_method"></a>  timed_mutex::unlock Method  
 Releases ownership of the `mutex`.  
  
```cpp
void unlock();
```  
  
### Remarks  
 If the calling thread does not own the `mutex`, the behavior is undefined.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



