---
title: "lock_guard Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::lock_guard"
dev_langs: 
  - "C++"
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# lock_guard Class
Represents a template that can be instantiated to create an object whose destructor unlocks a `mutex`.  
  
## Syntax  
  
```
template <class Mutex>
class lock_guard;
```  
  
## Remarks  
 The template argument `Mutex` must name a *mutex type*.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`lock_guard::mutex_type`|Synonym for the template argument `Mutex`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[lock_guard::lock_guard Constructor](#lock_guard__lock_guard_constructor)|Constructs a `lock_guard` object.|  
|[lock_guard::~lock_guard Destructor](#lock_guard___dtorlock_guard_destructor)|Unlocks the `mutex` that was passed to the constructor.|  
  
## Requirements  
 **Header:** mutex  
  
 **Namespace:** std  
  
##  <a name="lock_guard__lock_guard_constructor"></a>  lock_guard::lock_guard Constructor  
 Constructs a `lock_guard` object.  
  
```cpp
explicit lock_guard(mutex_type& Mtx);

lock_guard(mutex_type& Mtx, adopt_lock_t);
```  
  
### Parameters  
 `Mtx`  
 A *mutex type* object.  
  
### Remarks  
 The first constructor constructs an object of type `lock_guard` and locks `Mtx`. If `Mtx` is not a recursive mutex, it must be unlocked when this constructor is called.  
  
 The second constructor does not lock `Mtx`. `Mtx` must be locked when this constructor is called. The constructor throws no exceptions.  
  
##  <a name="lock_guard___dtorlock_guard_destructor"></a>  lock_guard::~lock_guard Destructor  
 Unlocks the `mutex` that was passed to the constructor.  
  
```
~lock_guard() noexcept;
```  
  
### Remarks  
 If the `mutex` does not exist when the destructor runs, the behavior is undefined.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



