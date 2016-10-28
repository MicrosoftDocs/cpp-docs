---
title: "combinable Class"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::combinable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "combinable class"
ms.assetid: fe0bfbf6-6250-47da-b8d0-f75369f0b5be
caps.latest.revision: 20
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
# combinable Class
The `combinable<T>` object is intended to provide thread-private copies of data, to perform lock-free thread-local sub-computations during parallel algorithms. At the end of the parallel operation, the thread-private sub-computations can then be merged into a final result. This class can be used instead of a shared variable, and can result in a performance improvement if there would otherwise be a lot of contention on that shared variable.  
  
## Syntax  
  
```
template<typename T>
class combinable;
```  
  
#### Parameters  
 `T`  
 The data type of the final merged result. The type must have a copy constructor and a default constructor.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[combinable::combinable Constructor](#combinable__combinable_constructor)|Overloaded. Constructs a new `combinable` object.|  
|[combinable::~combinable Destructor](#combinable___dtorcombinable_destructor)|Destroys a `combinable` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[combinable::clear Method](#combinable__clear_method)|Clears any intermediate computational results from a previous usage.|  
|[combinable::combine Method](#combinable__combine_method)|Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor.|  
|[combinable::combine_each Method](#combinable__combine_each_method)|Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor once per thread-local sub-computation. The final result is accumulated by the function object.|  
|[combinable::local Method](#combinable__local_method)|Overloaded. Returns a reference to the thread-private sub-computation.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[combinable::operator= Operator](#combinable__operator_eq_operator)|Assigns to a `combinable` object from another `combinable` object.|  
  
## Remarks  
 For more information, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Inheritance Hierarchy  
 `combinable`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="combinable__clear_method"></a>  combinable::clear Method  
 Clears any intermediate computational results from a previous usage.  
  
```
void clear();
```  
  
##  <a name="combinable__combinable_constructor"></a>  combinable::combinable Constructor  
 Constructs a new `combinable` object.  
  
```
combinable();

template <typename _Function>
explicit combinable(_Function _FnInitialize);

combinable(const combinable& _Copy);
```  
  
### Parameters  
 `_Function`  
 The type of the initialization functor object.  
  
 `_FnInitialize`  
 A function which will be called to initialize each new thread-private value of the type `T`. It must support a function call operator with the signature `T ()`.  
  
 `_Copy`  
 An existing `combinable` object to be copied into this one.  
  
### Remarks  
 The first constructor initializes new elements with the default constructor for the type `T`.  
  
 The second constructor initializes new elements using the initialization functor supplied as the `_FnInitialize` parameter.  
  
 The third constructor is the copy constructor.  
  
##  <a name="combinable___dtorcombinable_destructor"></a>  combinable::~combinable Destructor  
 Destroys a `combinable` object.  
  
```
~combinable();
```  
  
##  <a name="combinable__combine_method"></a>  combinable::combine Method  
 Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor.  
  
```
template<typename _Function>
T combine(_Function _FnCombine) const;
```  
  
### Parameters  
 `_Function`  
 The type of the function object that will be invoked to combine two thread-local sub-computations.  
  
 `_FnCombine`  
 The functor that is used to combine the sub-computations. Its signature is `T (T, T)` or `T (const T&, const T&)`, and it must be associative and commutative.  
  
### Return Value  
 The final result of combining all the thread-private sub-computations.  
  
##  <a name="combinable__combine_each_method"></a>  combinable::combine_each Method  
 Computes a final value from the set of thread-local sub-computations by calling the supplied combine functor once per thread-local sub-computation. The final result is accumulated by the function object.  
  
```
template<typename _Function>
void combine_each(_Function _FnCombine) const;
```  
  
### Parameters  
 `_Function`  
 The type of the function object that will be invoked to combine a single thread-local sub-computation.  
  
 `_FnCombine`  
 The functor that is used to combine one sub-computation. Its signature is `void (T)` or `void (const T&)`, and must be associative and commutative.  
  
##  <a name="combinable__local_method"></a>  combinable::local Method  
 Returns a reference to the thread-private sub-computation.  
  
```
T& local();

T& local(bool& _Exists);
```  
  
### Parameters  
 `_Exists`  
 A reference to a boolean. The boolean value referenced by this argument will be set to `true` if the sub-computation already existed on this thread, and set to `false` if this was the first sub-computation on this thread.  
  
### Return Value  
 A reference to the thread-private sub-computation.  
  
##  <a name="combinable__operator_eq_operator"></a>  combinable::operator= Operator  
 Assigns to a `combinable` object from another `combinable` object.  
  
```
combinable& operator= (const combinable& _Copy);
```  
  
### Parameters  
 `_Copy`  
 An existing `combinable` object to be copied into this one.  
  
### Return Value  
 A reference to this `combinable` object.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
