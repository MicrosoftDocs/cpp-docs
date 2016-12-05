---
title: "completion_future Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::completion_future"
dev_langs: 
  - "C++"
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# completion_future Class
Represents a future corresponding to a C++ AMP asynchronous operation.  
  
### Syntax  
  
```  
class completion_future;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::completion_future Constructor](#ctor)|Initializes a new instance of the `completion_future` class.|  
|[completion_future::~completion_future Destructor](#dtor)|Destroys the `completion_future` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  

|[completion_future::get Method](#get)|Waits until the associated asynchronous operation completes.|  
|[completion_future::then Method](#then)|Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.|  
|[completion_future::to_task Method](#to_task)|Returns a `task` object corresponding to the associated asynchronous operation.|  
|[completion_future::valid Method](#valid)|Gets a Boolean value that indicates whether the object is associated with an asynchronous operation.|  
|[completion_future::wait Method](#wait)|Blocks until the associated asynchronous operation completes.|  
|[completion_future::wait_for Method](#wait_for)|Blocks until the associated asynchronous operation completes or the time specified by `_Rel_time` has elapsed.|  
|[completion_future::wait_until Method](#wait_until)|Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[completion_future::operator std::shared_future\<void> Operator](#operator_shared_future)|Implicitly converts the `completion_future` object to an `std::shared_future` object.|  
|[completion_future::operator= Operator](#operator_eq)|Copies the contents of the specified `completion_future` object into this one.|  
  
## Inheritance Hierarchy  
 `completion_future`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  


## <a name="ctor"></a> completion_future::completion_future Constructor
Initializes a new instance of the `completion_future` class.  
  
### Syntax  
  
```  
completion_future();  
  
completion_future(  
    const completion_future& _Other );  
  
completion_future(  
    completion_future&& _Other );  
```  
  
### Parameters  
 `_Other`  
 The `completion_future` object to copy or move.  
  
### Overloads List  
  
|Name|Description|  
|----------|-----------------|  
|`completion_future();`|Initializes a new instance of the `completion_future` Class|  
|`completion_future(const completion_future& _Other);`|Initializes a new instance of the `completion_future` class by copying a constructor.|  
|`completion_future(completion_future&& _Other);`|Initializes a new instance of the `completion_future` class by moving a constructor.|  
  
## <a name="get"></a> completion_future::get Method  
Waits until the associated asynchronous operation completes. Throws the stored exception if one was encountered during the asynchronous operation.  
  
### Syntax  
  
```  
void get() const;  
```  
  
## <a name="operator_shared_future"></a> completion_future::operator std::shared_future<void> Operator  
Implicitly converts the `completion_future` object to an `std::shared_future` object.  
  
### Syntax  
  
```  
operator std::shared_future<void>() const;  
```  
  
### Return Value  
 An `std::shared_future` object.  
  
## <a name="operator_eq"></a>completion_future::operator= Operator  
Copies the contents of the specified `completion_future` object into this one.  
  
### Syntax  
  
```  
completion_future&  operator= (  
    const completion_future& _Other );  
  
completion_future&  operator= (  
    completion_future&& _Other );  
```  
  
### Parameters  
 `_Other`  
 The object to copy from.  
  
### Return Value  
 A reference to this `completion_future` object.  
  
## Overloads List  
  
|Name|Description|  
|----------|-----------------|  
|`completion_future& operator=(const completion_future& _Other);`|Copies the contents of the specified `completion_future` object into this one, using a deep copy.|  
|`completion_future& operator=(completion_future&& _Other);`|Copies the contents of the specified `completion_future` object into this one, using a move assignment.|  
  
## <a name="then"></a> completion_future::then Method  
Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.  
  
### Syntax  
  
```  
template <  
    typename _Functor  
>  
void then(  
    const _Functor & _Func ) const;  
```  
  
### Parameters  
 `_Functor`  
 The callback functor.  
  
 `_Func`  
 The callback function object.  
  
## <a name="to_task"></a> completion_future::to_task Method  
Returns a `task` object corresponding to the associated asynchronous operation.  
  
### Syntax  
  
```  
concurrency::task<void> to_task() const;  
```  
  
### Return Value  
 A `task` object corresponding to the associated asynchronous operation.  
  
## <a name="valid"></a> completion_future::valid Method  
Gets a Boolean value that indicates whether the  object is associated with an asynchronous operation.  
  
### Syntax  
  
```  
bool valid() const;  
```  
  
### Return Value  
 `true` if the object is associated with an asynchronous operation; otherwise, `false`.  
  
## <a name="wait"></a> completion_future::wait Method  
Blocks until the associated asynchronous operation completes.  
  
### Syntax  
  
```  
void wait() const;  
```  
  
## <a name="wait_for"></a> completion_future::wait_for Method  
Blocks until the associated asynchronous operation completes or the time that's specified by `_Rel_time` has elapsed.  
  
### Syntax  
  
```  
template <  
    class _Rep,  
    class _Period  
>  
std::future_status::future_status wait_for(  
    const std::chrono::duration< _Rep, _Period>& _Rel_time ) const;  
```  
  
### Parameters  
 `_Rep`  
 An arithmetic type that represents the number of ticks.  
  
 `_Period`  
 A std::ratio that represents the number of seconds that elapse per tick.  
  
 `_Rel_time`  
 The maximum amount of time to wait for the operation to complete.  
  
### Return Value  
 Returns:  
  
-   `std::future_status::deferred` if the associated asynchronous operation is not running.  
  
-   `std::future_status::ready` if the associated asynchronous operation is finished.  
  
-   `std::future_status::timeout` if the specified time period has elapsed.  
  
## <a name="wait_until"></a> completion_future::wait_until Method  
Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.  
  
### Syntax  
  
```  
template <  
    class _Clock,  
    class _Duration  
>  
std::future_status::future_status wait_until(  
    const std::chrono::time_point< _Clock, _Duration>& _Abs_time ) const;  
```  
  
### Parameters  
 `_Clock`  
 The clock on which this time point is measured.  
  
 `_Duration`  
 The time interval since the start of `_Clock`’s epoch, after which the function will time out.  
  
 `_Abs_time`  
 The point in time after which the function will time out.  
  
### Return Value  
 Returns:  
  
1.  `std::future_status::deferred` if the associated asynchronous operation is not running.  
  
2.  `std::future_status::ready` if the associated asynchronous operation is finished.  
  
3.  `std::future_status::timeout` if the time period specified has elapsed.  
  
## <a name="dtor"></a> completion_future::~completion_future Destructor  
Destroys the `completion_future` object.  
  
### Syntax  
  
```  
~completion_future();  
```  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
