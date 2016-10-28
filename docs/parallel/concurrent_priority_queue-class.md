---
title: "concurrent_priority_queue Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "concurrent_priority_queue/concurrency::concurrent_priority_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_priority_queue class"
ms.assetid: 3e740381-0f4e-41fc-8b66-ad0bb55f17a3
caps.latest.revision: 8
ms.author: "mithom"
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
# concurrent_priority_queue Class
The `concurrent_priority_queue` class is a container that allows multiple threads to concurrently push and pop items. Items are popped in priority order where priority is determined by a functor supplied as a template argument.  
  
## Syntax  
  
```
template <typename T,
    typename _Compare= std::less<T>,
    typename _Ax = std::allocator<T>
>,
    typename _Ax = std::allocator<T>> class concurrent_priority_queue;
```  
  
#### Parameters  
 `T`  
 The data type of the elements to be stored in the priority queue.  
  
 `_Compare`  
 The type of the function object that can compare two element values as sort keys to determine their relative order in the priority queue. This argument is optional and the binary predicate `less<``T``>` is the default value.  
  
 `_Ax`  
 The type that represents the stored allocator object that encapsulates details about the allocation and deallocation of memory for the concurrent priority queue. This argument is optional and the default value is `allocator<``T``>`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`allocator_type`|A type that represents the allocator class for the concurrent priority queue.|  
|`const_reference`|A type that represents a const reference to an element of the type stored in a concurrent priority queue.|  
|`reference`|A type that represents a reference to an element of the type stored in a concurrent priority queue.|  
|`size_type`|A type that counts the number of elements in a concurrent priority queue.|  
|`value_type`|A type that represents the data type stored in a concurrent priority queue.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_priority_queue::concurrent_priority_queue Constructor](#concurrent_priority_queue__concurrent_priority_queue_constructor)|Overloaded. Constructs a concurrent priority queue.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_priority_queue::clear Method](#concurrent_priority_queue__clear_method)|Erases all elements in the concurrent priority. This method is not concurrency-safe.|  
|[concurrent_priority_queue::empty Method](#concurrent_priority_queue__empty_method)|Tests if the concurrent priority queue is empty at the time this method is called. This method is concurrency-safe.|  
|[concurrent_priority_queue::get_allocator Method](#concurrent_priority_queue__get_allocator_method)|Returns a copy of the allocator used to construct the concurrent priority queue. This method is concurrency-safe.|  
|[concurrent_priority_queue::push Method](#concurrent_priority_queue__push_method)|Overloaded. Adds an element to the concurrent priority queue. This method is concurrency-safe.|  
|[concurrent_priority_queue::size Method](#concurrent_priority_queue__size_method)|Returns the number of elements in the concurrent priority queue. This method is concurrency-safe.|  
|[concurrent_priority_queue::swap Method](#concurrent_priority_queue__swap_method)|Swaps the contents of two concurrent priority queues. This method is not concurrency-safe.|  
|[concurrent_priority_queue::try_pop Method](#concurrent_priority_queue__try_pop_method)|Removes and returns the highest priority element from the queue if the queue is non-empty. This method is concurrency-safe.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_priority_queue::operator= Operator](#concurrent_priority_queue__operator_eq_operator)|Overloaded. Assigns the contents of another `concurrent_priority_queue` object to this one. This method is not concurrency-safe.|  
  
## Remarks  
 For detailed information on the `concurrent_priority_queue` class, see [Parallel Containers and Objects](../parallel/parallel-containers-and-objects.md).  
  
## Inheritance Hierarchy  
 `concurrent_priority_queue`  
  
## Requirements  
 **Header:** concurrent_priority_queue.h  
  
 **Namespace:** concurrency  
  
##  <a name="concurrent_priority_queue__clear_method"></a>  concurrent_priority_queue::clear Method  
 Erases all elements in the concurrent priority. This method is not concurrency-safe.  
  
```
void clear();
```  
  
### Remarks  
 `clear` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent priority queue when you call this method. `clear` does not free memory.  
  
##  <a name="concurrent_priority_queue__concurrent_priority_queue_constructor"></a>  concurrent_priority_queue::concurrent_priority_queue Constructor  
 Constructs a concurrent priority queue.  
  
```
explicit concurrent_priority_queue(
    const allocator_type& _Al = allocator_type());

explicit concurrent_priority_queue(
    size_type _Init_capacity,
    const allocator_type& _Al = allocator_type());

template<typename _InputIterator>
concurrent_priority_queue(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());

concurrent_priority_queue(
    const concurrent_priority_queue& _Src);

concurrent_priority_queue(
    const concurrent_priority_queue& _Src,
    const allocator_type& _Al);

concurrent_priority_queue(
    concurrent_priority_queue&& _Src);

concurrent_priority_queue(
    concurrent_priority_queue&& _Src,
    const allocator_type& _Al);
```  
  
### Parameters  
 `_InputIterator`  
 The type of the input iterator.  
  
 `_Al`  
 The allocator class to use with this object.  
  
 `_Init_capacity`  
 The initial capacity of the `concurrent_priority_queue` object.  
  
 `_Begin`  
 The position of the first element in the range of elements to be copied.  
  
 `_End`  
 The position of the first element beyond the range of elements to be copied.  
  
 `_Src`  
 The source `concurrent_priority_queue` object to copy or move elements from.  
  
### Remarks  
 All constructors store an allocator object `_Al` and initialize the priority queue.  
  
 The first constructor specifies an empty initial priority queue and optionally specifies an allocator.  
  
 The second constructor specifies a priority queue with an initial capacity `_Init_capacity` and optionally specifies an allocator.  
  
 The third constructor specifies values supplied by the iterator range [ `_Begin`, `_End`) and optionally specifies an allocator.  
  
 The fourth and fifth constructors specify a copy of the priority queue `_Src`.  
  
 The sixth and seventh constructors specify a move of the priority queue `_Src`.  
  
##  <a name="concurrent_priority_queue__empty_method"></a>  concurrent_priority_queue::empty Method  
 Tests if the concurrent priority queue is empty at the time this method is called. This method is concurrency-safe.  
  
```
bool empty() const;
```  
  
### Return Value  
 `true` if the priority queue was empty at the moment the function was called, `false` otherwise.  
  
##  <a name="concurrent_priority_queue__get_allocator_method"></a>  concurrent_priority_queue::get_allocator Method  
 Returns a copy of the allocator used to construct the concurrent priority queue. This method is concurrency-safe.  
  
```
allocator_type get_allocator() const;
```  
  
### Return Value  
 A copy of the allocator used to construct the `concurrent_priority_queue` object.  
  
##  <a name="concurrent_priority_queue__operator_eq_operator"></a>  concurrent_priority_queue::operator= Operator  
 Assigns the contents of another `concurrent_priority_queue` object to this one. This method is not concurrency-safe.  
  
```
concurrent_priority_queue& operator= (const concurrent_priority_queue& _Src);

concurrent_priority_queue& operator= (concurrent_priority_queue&& _Src);
```  
  
### Parameters  
 `_Src`  
 The source `concurrent_priority_queue` object.  
  
### Return Value  
 A reference to this `concurrent_priority_queue` object.  
  
##  <a name="concurrent_priority_queue__push_method"></a>  concurrent_priority_queue::push Method  
 Adds an element to the concurrent priority queue. This method is concurrency-safe.  
  
```
void push(const value_type& _Elem);

void push(value_type&& _Elem);
```  
  
### Parameters  
 `_Elem`  
 The element to be added to the concurrent priority queue.  
  
##  <a name="concurrent_priority_queue__size_method"></a>  concurrent_priority_queue::size Method  
 Returns the number of elements in the concurrent priority queue. This method is concurrency-safe.  
  
```
size_type size() const;
```  
  
### Return Value  
 The number of elements in this `concurrent_priority_queue` object.  
  
### Remarks  
 The returned size is guaranteed to include all elements added by calls to the function `push`. However, it may not reflect results of pending concurrent operations.  
  
##  <a name="concurrent_priority_queue__swap_method"></a>  concurrent_priority_queue::swap Method  
 Swaps the contents of two concurrent priority queues. This method is not concurrency-safe.  
  
```
void swap(concurrent_priority_queue& _Queue);
```  
  
### Parameters  
 `_Queue`  
 The `concurrent_priority_queue` object to swap contents with.  
  
##  <a name="concurrent_priority_queue__try_pop_method"></a>  concurrent_priority_queue::try_pop Method  
 Removes and returns the highest priority element from the queue if the queue is non-empty. This method is concurrency-safe.  
  
```
bool try_pop(reference _Elem);
```  
  
### Parameters  
 `_Elem`  
 A reference to a variable that will be populated with the highest priority element, if the queue is non-empty.  
  
### Return Value  
 `true` if a value was popped, `false` otherwise.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [Parallel Containers and Objects](../parallel/parallel-containers-and-objects.md)

