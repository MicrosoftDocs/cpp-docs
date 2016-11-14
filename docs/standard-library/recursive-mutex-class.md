---
title: "recursive_mutex Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::recursive_mutex"
dev_langs: 
  - "C++"
ms.assetid: eb5ffd1b-7e78-4559-8391-bb220ead42fc
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
# recursive_mutex Class
Represents a *mutex type*. In contrast to [mutex](../standard-library/mutex-class-stl.md), the behavior of calls to locking methods for objects that are already locked is well-defined.  
  
## Syntax  
  
```
class recursive_mutex;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[recursive_mutex Constructor](#recursive_mutex__recursive_mutex_constructor)|Constructs a `recursive_mutex` object.|  
|[~recursive_mutex Destructor](#recursive_mutex___dtorrecursive_mutex_destructor)|Releases any resources that are used by the `recursive_mutex` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[lock](#recursive_mutex__lock_method)|Blocks the calling thread until the thread obtains ownership of the mutex.|  
|[try_lock](#recursive_mutex__try_lock_method)|Attempts to obtain ownership of the mutex without blocking.|  
|[unlock](#recursive_mutex__unlock_method)|Releases ownership of the mutex.|  
  
## Requirements  
 **Header:** mutex  
  
 **Namespace:** std  
  
##  <a name="recursive_mutex__lock_method"></a>  lock  
 Blocks the calling thread until the thread obtains ownership of the `mutex`.  
  
```cpp
void lock();
```  
  
### Remarks  
 If the calling thread already owns the `mutex`, the method returns immediately, and the previous lock remains in effect.  
  
##  <a name="recursive_mutex__recursive_mutex_constructor"></a>  recursive_mutex  
 Constructs a `recursive_mutex` object that is not locked.  
  
```cpp
recursive_mutex();
```  
  
##  <a name="recursive_mutex___dtorrecursive_mutex_destructor"></a>  ~recursive_mutex  
 Releases any resources that are used by the object.  
  
```cpp
~recursive_mutex();
```  
  
### Remarks  
 If the object is locked when the destructor runs, the behavior is undefined.  
  
##  <a name="recursive_mutex__try_lock_method"></a>  try_lock  
 Attempts to obtain ownership of the `mutex` without blocking.  
  
```cpp
bool try_lock() noexcept;
```  
  
### Return Value  
 `true` if the method successfully obtains ownership of the `mutex` or if the calling thread already owns the `mutex`; otherwise, `false`.  
  
### Remarks  
 If the calling thread already owns the `mutex`, the function immediately returns `true`, and the previous lock remains in effect.  
  
##  <a name="recursive_mutex__unlock_method"></a>  unlock  
 Releases ownership of the mutex.  
  
```cpp
void unlock();
```  
  
### Remarks  
 This method releases ownership of the `mutex` only after it is called as many times as [lock](#recursive_mutex__lock_method) and [try_lock](#recursive_mutex__try_lock_method) have been called successfully on the `recursive_mutex` object.  
  
 If the calling thread does not own the `mutex`, the behavior is undefined.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



