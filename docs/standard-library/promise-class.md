---
title: "promise Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::promise"
dev_langs: 
  - "C++"
ms.assetid: 2931558c-d94a-4ba1-ac4f-20bf7b6e23f9
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
# promise Class
Describes an *asynchronous provider*.  
  
## Syntax  
  
```
template <class Ty>
class promise;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[promise::promise Constructor](#promise__promise_constructor)|Constructs a `promise` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[promise::get_future](#promise__get_future_method)|Returns a [future](../standard-library/future-class.md) associated with this promise.|  
|[promise::set_exception](#promise__set_exception_method)|Atomically sets the result of this promise to indicate an exception.|  
|[promise::set_exception_at_thread_exit](#promise__set_exception_at_thread_exit_method)|Atomically sets the result of this promise to indicate an exception, and delivers the notification only after all thread-local objects in the current thread have been destroyed (usually at thread exit).|  
|[promise::set_value](#promise__set_value_method)|Atomically sets the result of this promise to indicate a value.|  
|[promise::set_value_at_thread_exit](#promise__set_value_at_thread_exit_method)|Atomically sets the result of this promise to indicate a value, and delivers the notification only after all thread-local objects in the current thread have been destroyed (usually at thread exit).|  
|[promise::swap](#promise__swap_method)|Exchanges the *associated asynchronous state* of this promise with that of a specified promise object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[promise::operator=](#promise__operator_eq)|Assignment of the shared state of this promise object.|  
  
## Inheritance Hierarchy  
 `promise`  
  
## Requirements  
 **Header:** future  
  
 **Namespace:** std  
  
##  <a name="promise__get_future_method"></a>  promise::get_future  
 Returns a [future](../standard-library/future-class.md) object that has the same *associated asynchronous state* as this promise.  
  
```
future<Ty> get_future();
```  
  
### Remarks  
 If the promise object is empty, this method throws a [future_error](../standard-library/future-error-class.md) that has an [error_code](../standard-library/error-code-class.md) of `no_state`.  
  
 If this method has already been called for a promise object that has the same associated asynchronous state, the method throws a `future_error` that has an `error_code` of `future_already_retrieved`.  
  
##  <a name="promise__operator_eq"></a>  promise::operator=  
 Transfers the *associated asynchronous state* from a specified `promise` object.  
  
```
promise& operator=(promise&& Other) noexcept;
```  
  
### Parameters  
 `Other`  
 A `promise` object.  
  
### Return Value  
 `*this`  
  
### Remarks  
 This operator transfers the associated asynchronous state from `Other`. After the transfer, `Other` is *empty*.  
  
##  <a name="promise__promise_constructor"></a>  promise::promise Constructor  
 Constructs a `promise` object.  
  
```
promise();
template <class Alloc>
promise(allocator_arg_t, const Alloc& Al);
promise(promise&& Other) noexcept;
```  
  
### Parameters  
 `Al`  
 A memory allocator. See [\<allocators>](../standard-library/allocators-header.md) for more information.  
  
 `Other`  
 A `promise` object.  
  
### Remarks  
 The first constructor constructs an *empty*`promise` object.  
  
 The second constructor constructs an empty `promise` object and uses `Al` for memory allocation.  
  
 The third constructor constructs a `promise` object and transfers the associated asynchronous state from `Other`, and leaves `Other` empty.  
  
##  <a name="promise__set_exception_method"></a>  promise::set_exception  
 Atomically stores an exception as the result of this `promise` object and sets the *associated asynchronous state* to *ready*.  
  
```
void set_exception(exception_ptr Exc);
```  
  
### Parameters  
 `Exc`  
 An [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) that's stored by this method as the exception result.  
  
### Remarks  
 If the `promise` object has no associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.  
  
 If `set_exception`, [set_exception_at_thread_exit](#promise__set_exception_at_thread_exit_method), [set_value](#promise__set_value_method), or [set_value_at_thread_exit](#promise__set_value_at_thread_exit_method) has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.  
  
 As a result of this method, any threads that are blocked on the associated asynchronous state become unblocked.  
  
##  <a name="promise__set_exception_at_thread_exit_method"></a>  promise::set_exception_at_thread_exit  
 Atomically sets the result of this `promise` to indicate an exception, delivering the notification only after all thread-local objects in the current thread have been destroyed (usually at thread exit).  
  
```
void set_exception_at_thread_exit(exception_ptr Exc);
```  
  
### Parameters  
 `Exc`  
 An [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) that's stored by this method as the exception result.  
  
### Remarks  
 If the promise object has no *associated asynchronous state*, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.  
  
 If [set_exception](#promise__set_exception_method), `set_exception_at_thread_exit`, [set_value](#promise__set_value_method), or [set_value_at_thread_exit](#promise__set_value_at_thread_exit_method) has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.  
  
 In contrast to [set_exception](#promise__set_exception_method), this method does not set the associated asynchronous state to ready until after all thread-local objects in the current thread have been destroyed. Typically, threads that are blocked on the associated asynchronous state are not unblocked until the current thread exits.  
  
##  <a name="promise__set_value_method"></a>  promise::set_value  
 Atomically stores a value as the result of this `promise` object and sets the *associated asynchronous state* to *ready*.  
  
```
void promise::set_value(const Ty& Val);
void promise::set_value(Ty&& Val);
void promise<Ty&>::set_value(Ty& Val);
void promise<void>::set_value();
```  
  
### Parameters  
 `Val`  
 The value to be stored as the result.  
  
### Remarks  
 If the `promise` object has no associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.  
  
 If [set_exception](#promise__set_exception_method), [set_exception_at_thread_exit](#promise__set_exception_at_thread_exit_method), `set_value`, or [set_value_at_thread_exit](#promise__set_value_at_thread_exit_method) has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.  
  
 As a result of this method, any threads that are blocked on the associated asynchronous state become unblocked.  
  
 The first method also throws any exception that is thrown when `Val` is copied into the associated asynchronous state. In this situation, the associated asynchronous state is not set to ready.  
  
 The second method also throws any exception that is thrown when `Val` is moved into the associated asynchronous state. In this situation, the associated asynchronous state is not set to ready.  
  
 For the partial specialization `promise<Ty&>`, the stored value is in effect a reference to `Val`.  
  
 For the specialization `promise<void>`, no stored value exists.  
  
##  <a name="promise__set_value_at_thread_exit_method"></a>  promise::set_value_at_thread_exit  
 Atomically stores a value as the result of this `promise` object.  
  
```
void promise::set_value_at_thread_exit(const Ty& Val);
void promise::set_value_at_thread_exit(Ty&& Val);
void promise<Ty&>::set_value_at_thread_exit(Ty& Val);
void promise<void>::set_value_at_thread_exit();
```  
  
### Parameters  
 `Val`  
 The value to be stored as the result.  
  
### Remarks  
 If the promise object has no *associated asynchronous state*, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.  
  
 If [set_exception](#promise__set_exception_method), [set_exception_at_thread_exit](#promise__set_exception_at_thread_exit_method), [set_value](#promise__set_value_method), or `set_value_at_thread_exit` has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.  
  
 In contrast to `set_value`, the associated asynchronous state is not set to ready until after all thread-local objects in the current thread have been destroyed. Typically, threads that are blocked on the associated asynchronous state are not unblocked until the current thread exits.  
  
 The first method also throws any exception that is thrown when `Val` is copied into the associated asynchronous state.  
  
 The second method also throws any exception that is thrown when `Val` is moved into the associated asynchronous state.  
  
 For the partial specialization `promise<Ty&>`, the stored value is effectively a reference to `Val`.  
  
 For the specialization `promise<void>`, no stored value exists.  
  
##  <a name="promise__swap_method"></a>  promise::swap  
 Exchanges the *associated asynchronous state* of this promise object with that of a specified object.  
  
```
void swap(promise& Other) noexcept;
```  
  
### Parameters  
 `Other`  
 A `promise` object.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)




 

