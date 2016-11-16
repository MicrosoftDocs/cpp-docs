---
title: "future Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::future"
dev_langs: 
  - "C++"
ms.assetid: 495e82c3-5341-4e37-87dd-b40107fbdfb6
caps.latest.revision: 13
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
# future Class
Describes an *asynchronous return object*.  
  
## Syntax  
  
```
template <class Ty>
class future;
```  
  
## Remarks  
 Each standard *asynchronous provider* returns an object whose type is an instantiation of this template. A `future` object provides the only access to the asynchronous provider that it is associated with. If you need multiple asynchronous return objects that are associated with the same asynchronous provider, copy the `future` object to a [shared_future](../standard-library/shared-future-class.md) object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[future::future Constructor](#future__future_constructor)|Constructs a `future` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[future::get](#future__get_method)|Retrieves the result that is stored in the associated asynchronous state.|  
|[future::share](#future__share_method)|Converts the object to a `shared_future`.|  
|[future::valid](#future__valid_method)|Specifies whether the object is not empty.|  
|[future::wait](#future__wait_method)|Blocks the current thread until the associated asynchronous state is ready.|  
|[future::wait_for](#future__wait_for_method)|Blocks until the associated asynchronous state is ready or until the specified time has elapsed.|  
|[future::wait_until](#future__wait_until_method)|Blocks until the associated asynchronous state is ready or until a specified point in time.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[future::operator=](#future__operator_eq)|Transfers the associated asynchronous state from a specified object.|  
  
## Requirements  
 **Header:** future  
  
 **Namespace:** std  
  
##  <a name="future__future_constructor"></a>  future::future Constructor  
 Constructs a `future` object.  
  
```
future() noexcept;
future(future&& Other) noexcept;
```  
  
### Parameters  
 `Other`  
 A `future` object.  
  
### Remarks  
 The first constructor constructs a `future` object that has no associated asynchronous state.  
  
 The second constructor constructs a `future` object and transfers the associated asynchronous state from `Other`. `Other` no longer has an associated asynchronous state.  
  
##  <a name="future__get_method"></a>  future::get  
 Retrieves the result that is stored in the associated asynchronous state.  
  
```
Ty get();
```  
  
### Return Value  
 If the result is an exception, the method rethrows it. Otherwise, the result is returned.  
  
### Remarks  
 Before it retrieves the result, this method blocks the current thread until the associated asynchronous state is ready.  
  
 For the partial specialization `future<Ty&>`, the stored value is effectively a reference to the object that was passed to the asynchronous provider as the return value.  
  
 Because no stored value exists for the specialization `future<void>`, the method returns `void`.  
  
 In other specializations, the method moves its return value from the stored value. Therefore, call this method only once.  
  
##  <a name="future__operator_eq"></a>  future::operator=  
 Transfers an associated asynchronous state from a specified object.  
  
```
future& operator=(future&& Right) noexcept;
```  
  
### Parameters  
 `Right`  
 A `future` object.  
  
### Return Value  
 `*this`  
  
### Remarks  
 After the transfer, `Right` no longer has an associated asynchronous state.  
  
##  <a name="future__share_method"></a>  future::share  
 Converts the object to a [shared_future](../standard-library/shared-future-class.md) object.  
  
```
shared_future<Ty> share();
```  
  
### Return Value  
 `shared_future(move(*this))`  
  
##  <a name="future__valid_method"></a>  future::valid  
 Specifies whether the object has an associated asynchronous state.  
  
```
bool valid() noexcept;
```  
  
### Return Value  
 `true` if the object has an associated asynchronous state; otherwise, `false`.  
  
##  <a name="future__wait_method"></a>  future::wait  
 Blocks the current thread until the associated asynchronous state is *ready*.  
  
```cpp
void wait() const;
```  
  
### Remarks  
 An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.  
  
##  <a name="future__wait_for_method"></a>  future::wait_for  
 Blocks the current thread until the associated asynchronous state is *ready* or until a specified time interval has elapsed.  
  
```
template <class Rep, class Period>
future_status wait_for(const chrono::duration<Rep, Period>& Rel_time) const;
```  
  
### Parameters  
 `Rel_time`  
 A [chrono::duration](../standard-library/duration-class.md) object that specifies a maximum time interval that the thread blocks.  
  
### Return Value  
 A [future_status](../standard-library/future-enums.md#future_status_enumeration) that indicates the reason for returning.  
  
### Remarks  
 An associated asynchronous state is ready only if its asynchronous provider has stored a return value or stored an exception.  
  
##  <a name="future__wait_until_method"></a>  future::wait_until  
 Blocks the current thread until the associated asynchronous state is *ready* or until after a specified time point.  
  
```cpp
template <class Clock, class Duration>
future_status wait_until(const chrono::time_point<Clock, Duration>& Abs_time) const;
```  
  
### Parameters  
 `Abs_time`  
 A [chrono::time_point](../standard-library/time-point-class.md) object that specifies a time after which the thread can unblock.  
  
### Return Value  
 A [future_status](../standard-library/future-enums.md#future_status_enumeration) that indicates the reason for returning.  
  
### Remarks  
 An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<future>](../standard-library/future.md)



