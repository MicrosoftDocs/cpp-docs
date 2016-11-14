---
title: "thread Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "thread/std::thread"
dev_langs: 
  - "C++"
ms.assetid: df249bc7-ff81-4ff9-a6d6-5e3d9a8f56a1
caps.latest.revision: 16
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
# thread Class
Defines an object that's used to observe and manage a thread of execution within an application.  
  
## Syntax  
  
```
class thread;
```  
  
## Remarks  
 You can use a `thread` object to observe and manage a thread of execution within an application. A thread object that's created by using the default constructor is not associated with any thread of execution. A thread object that's constructed by using a callable object creates a new thread of execution and calls the callable object in that thread. Thread objects can be moved but not copied. Therefore, a thread of execution can be associated with only one thread object.  
  
 Every thread of execution has a unique identifier of type `thread::id`. The function `this_thread::get_id` returns the identifier of the calling thread. The member function `thread::get_id` returns the identifier of the thread that's managed by a thread object. For a default-constructed thread object, the `thread::get_id` method returns an object that has a value that's the same for all default-constructed thread objects and different from the value that's returned by `this_thread::get_id` for any thread of execution that could be joined at the time of the call.  
  
## Members  
  
### Public Classes  
  
|Name|Description|  
|----------|-----------------|  
|[thread::id Class](#thread__id_class)|Uniquely identifies the associated thread.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[thread::thread Constructor](#thread__thread_constructor)|Constructs a `thread` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[thread::detach Method](#thread__detach_method)|Detaches the associated thread from the `thread` object.|  
|[thread::get_id Method](#thread__get_id_method)|Returns the unique identifier of the associated thread.|  
|[thread::hardware_concurrency Method](#thread__hardware_concurrency_method)|Static. Returns an estimate of the number of hardware thread contexts.|  
|[thread::join Method](#thread__join_method)|Blocks until the associated thread completes.|  
|[thread::joinable Method](#thread__joinable_method)|Specifies whether the associated thread is joinable.|  
|[thread::native_handle Method](#thread__native_handle_method)|Returns the implementation-specific type that represents the thread handle.|  
|[thread::swap Method](#thread__swap_method)|Swaps the object state with a specified `thread` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[thread::operator=](#thread__operator_eq)|Associates a thread with the current `thread` object.|  
  
## Requirements  
 **Header:** thread  
  
 **Namespace:** std  
  
##  <a name="thread__detach_method"></a>  thread::detach Method  
 Detaches the associated thread. The operating system becomes responsible for releasing thread resources on termination.  
  
```
void detach();
```  
  
### Remarks  
 After a call to `detach`, subsequent calls to [get_id](#thread__get_id_method) return [id](#thread__id_class).  
  
 If the thread that's associated with the calling object is not joinable, the function throws a [system_error](../standard-library/system-error-class.md) that has an error code of `invalid_argument`.  
  
 If the thread that's associated with the calling object is invalid, the function throws a `system_error` that has an error code of `no_such_process`.  
  
##  <a name="thread__get_id_method"></a>  thread::get_id Method  
 Returns a unique identifier for the associated thread.  
  
```
id get_id() const noexcept;
```  
  
### Return Value  
 A [thread::id](#thread__id_class) object that uniquely identifies the associated thread, or `thread::id()` if no thread is associated with the object.  
  
##  <a name="thread__hardware_concurrency_method"></a>  thread::hardware_concurrency Method  
 Static method that returns an estimate of the number of hardware thread contexts.  
  
```
static unsigned int hardware_concurrency() noexcept;
```  
  
### Return Value  
 An estimate of the number of hardware thread contexts. If the value cannot be computed or is not well defined, this method returns 0.  
  
##  <a name="thread__id_class"></a>  thread::id Class  
 Provides a unique identifier for each thread of execution in the process.  
  
```
class thread::id {
    id() noexcept;
};
```  
  
### Remarks  
 The default constructor creates an object that does not compare equal to the `thread::id` object for any existing thread.  
  
 All default-constructed `thread::id` objects compare equal.  
  
##  <a name="thread__join_method"></a>  thread::join Method  
 Blocks until the thread of execution that's associated with the calling object completes.  
  
```
void join();
```  
  
### Remarks  
 If the call succeeds, subsequent calls to [get_id](#thread__get_id_method) for the calling object return a default [thread::id](#thread__id_class) that does not compare equal to the `thread::id` of any existing thread; if the call does not succeed, the value that's returned by `get_id` is unchanged.  
  
##  <a name="thread__joinable_method"></a>  thread::joinable Method  
 Specifies whether the associated thread is *joinable*.  
  
```
bool joinable() const noexcept;
```  
  
### Return Value  
 `true` if the associated thread is *joinable*; otherwise, `false`.  
  
### Remarks  
 A thread object is *joinable* if `get_id() != id()`.  
  
##  <a name="thread__native_handle_method"></a>  thread::native_handle Method  
 Returns the implementation-specific type that represents the thread handle. The thread handle can be used in implementation-specific ways.  
  
```
native_handle_type native_handle();
```  
  
### Return Value  
 `native_handle_type` is defined as a Win32 `HANDLE` that's cast as `void *`.  
  
##  <a name="thread__operator_eq"></a>  thread::operator=  
 Associates the thread of a specified object with the current object.  
  
```
thread& operator=(thread&& Other) noexcept;
```  
  
### Parameters  
 `Other`  
 A `thread` object.  
  
### Return Value  
 `*this`  
  
### Remarks  
 The method calls detach if the calling object is joinable.  
  
 After the association is made, `Other` is set to a default-constructed state.  
  
##  <a name="thread__swap_method"></a>  thread::swap Method  
 Swaps the object state with that of a specified `thread` object.  
  
```
void swap(thread& Other) noexcept;
```  
  
### Parameters  
 `Other`  
 A `thread` object.  
  
##  <a name="thread__thread_constructor"></a>  thread::thread Constructor  
 Constructs a `thread` object.  
  
```
thread() noexcept;
template <class Fn, class... Args>
explicit thread(Fn&& F, Args&&... A);

thread(thread&& Other) noexcept;
```  
  
### Parameters  
 `F`  
 An application-defined function to be executed by the thread.  
  
 `A`  
 A list of arguments to be passed to `F`.  
  
 `Other`  
 An existing `thread` object.  
  
### Remarks  
 The first constructor constructs an object that's not associated with a thread of execution. The value that's returned by a call to `get_id` for the constructed object is `thread::id()`.  
  
 The second constructor constructs an object that's associated with a new thread of execution and executes the pseudo-function `INVOKE` that's defined in [\<functional>](../standard-library/functional.md). If not enough resources are available to start a new thread, the function throws a [system_error](../standard-library/system-error-class.md) object that has an error code of `resource_unavailable_try_again`. If the call to `F` terminates with an uncaught exception, [terminate](../standard-library/exception-functions.md#terminate) is called.  
  
 The third constructor constructs an object that's associated with the thread that's associated with `Other`. `Other` is then set to a default-constructed state.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<thread>](../standard-library/thread.md)



