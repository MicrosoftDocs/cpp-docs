---
title: "concurrent_queue Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concurrent_queue/concurrency::concurrent_queue"
  - "concurrent_queue/Concurrency::concurrent_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_queue class"
ms.assetid: c2218996-d0ea-40e9-b002-e9a15b085f51
caps.latest.revision: 21
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
# concurrent_queue Class
The `concurrent_queue` class is a sequence container class that allows first-in, first-out access to its elements. It enables a limited set of concurrency-safe operations, such as `push` and `try_pop`.  
  
## Syntax  
  
```
template<typename T, class _Ax>
class concurrent_queue: public ::Concurrency::details::_Concurrent_queue_base_v4;
```  
  
#### Parameters  
 `T`  
 The data type of the elements to be stored in the queue.  
  
 `_Ax`  
 The type that represents the stored allocator object that encapsulates details about the allocation and deallocation of memory for this concurrent queue. This argument is optional and the default value is `allocator<``T``>`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`allocator_type`|A type that represents the allocator class for the concurrent queue.|  
|`const_iterator`|A type that represents a non-thread-safe `const` iterator over elements in a concurrent queue.|  
|`const_reference`|A type that provides a reference to a `const` element stored in a concurrent queue for reading and performing `const` operations.|  
|`difference_type`|A type that provides the signed distance between two elements in a concurrent queue.|  
|`iterator`|A type that represents a non-thread-safe iterator over the elements in a concurrent queue.|  
|`reference`|A type that provides a reference to an element stored in a concurrent queue.|  
|`size_type`|A type that counts the number of elements in a concurrent queue.|  
|`value_type`|A type that represents the data type stored in a concurrent queue.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_queue::concurrent_queue Constructor](#ctor)|Overloaded. Constructs a concurrent queue.|  
|[concurrent_queue::~concurrent_queue Destructor](#dtor)|Destroys the concurrent queue.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_queue::clear Method](#clear)|Clears the concurrent queue, destroying any currently enqueued elements. This method is not concurrency-safe.|  
|[concurrent_queue::empty Method](#empty)|Tests if the concurrent queue is empty at the moment this method is called. This method is concurrency-safe.|  
|[concurrent_queue::get_allocator Method](#get_allocator)|Returns a copy of the allocator used to construct the concurrent queue. This method is concurrency-safe.|  
|[concurrent_queue::push Method](#push)|Overloaded. Enqueues an item at tail end of the concurrent queue. This method is concurrency-safe.|  
|[concurrent_queue::try_pop Method](#try_pop)|Dequeues an item from the queue if one is available. This method is concurrency-safe.|  
|[concurrent_queue::unsafe_begin Method](#unsafe_begin)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent queue. This method is not concurrency-safe.|  
|[concurrent_queue::unsafe_end Method](#unsafe_end)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent queue. This method is not concurrency-safe.|  
|[concurrent_queue::unsafe_size Method](#unsafe_size)|Returns the number of items in the queue. This method is not concurrency-safe.|  
  
## Remarks  
 For more information, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Inheritance Hierarchy  
 `concurrent_queue`  
  
## Requirements  
 **Header:** concurrent_queue.h  
  
 **Namespace:** concurrency  
  
##  <a name="clear"></a>  concurrent_queue::clear Method  
 Clears the concurrent queue, destroying any currently enqueued elements. This method is not concurrency-safe.  
  
```
void clear();
```  
  
##  <a name="ctor"></a>  concurrent_queue::concurrent_queue Constructor  
 Constructs a concurrent queue.  
  
```
explicit concurrent_queue(
    const allocator_type& _Al = allocator_type());

concurrent_queue(
    const concurrent_queue& _OtherQ,
    const allocator_type& _Al = allocator_type());

concurrent_queue(
    concurrent_queue&& _OtherQ,
    const allocator_type& _Al = allocator_type());

template<typename _InputIterator>
concurrent_queue(_InputIterator _Begin,
    _InputIterator _End);
```  
  
### Parameters  
 `_InputIterator`  
 The type of the input iterator that specifies a range of values.  
  
 `_Al`  
 The allocator class to use with this object.  
  
 `_OtherQ`  
 The source `concurrent_queue` object to copy or move elements from.  
  
 `_Begin`  
 Position of the first element in the range of elements to be copied.  
  
 `_End`  
 Position of the first element beyond the range of elements to be copied.  
  
### Remarks  
 All constructors store an allocator object `_Al` and initialize the queue.  
  
 The first constructor specifies an empty initial queue and explicitly specifies the allocator type to be used.  
  
 The second constructor specifies a copy of the concurrent queue `_OtherQ`.  
  
 The third constructor specifies a move of the concurrent queue `_OtherQ`.  
  
 The fourth constructor specifies values supplied by the iterator range [ `_Begin`, `_End`).  
  
##  <a name="dtor"></a>  concurrent_queue::~concurrent_queue Destructor  
 Destroys the concurrent queue.  
  
```
~concurrent_queue();
```  
  
##  <a name="empty"></a>  concurrent_queue::empty Method  
 Tests if the concurrent queue is empty at the moment this method is called. This method is concurrency-safe.  
  
```
bool empty() const;
```  
  
### Return Value  
 `true` if the concurrent queue was empty at the moment we looked, `false` otherwise.  
  
### Remarks  
 While this method is concurrency-safe with respect to calls to the methods `push`, `try_pop`, and `empty`, the value returned might be incorrect by the time it is inspected by the calling thread.  
  
##  <a name="get_allocator"></a>  concurrent_queue::get_allocator Method  
 Returns a copy of the allocator used to construct the concurrent queue. This method is concurrency-safe.  
  
```
allocator_type get_allocator() const;
```  
  
### Return Value  
 A copy of the allocator used to construct the concurrent queue.  
  
##  <a name="push"></a>  concurrent_queue::push Method  
 Enqueues an item at tail end of the concurrent queue. This method is concurrency-safe.  
  
```
void push(const T& _Src);

void push(T&& _Src);
```  
  
### Parameters  
 `_Src`  
 The item to be added to the queue.  
  
### Remarks  
 `push` is concurrency-safe with respect to calls to the methods `push`, `try_pop`, and `empty`.  
  
##  <a name="try_pop"></a>  concurrent_queue::try_pop Method  
 Dequeues an item from the queue if one is available. This method is concurrency-safe.  
  
```
bool try_pop(T& _Dest);
```  
  
### Parameters  
 `_Dest`  
 A reference to a location to store the dequeued item.  
  
### Return Value  
 `true` if an item was successfully dequeued, `false` otherwise.  
  
### Remarks  
 If an item was successfully dequeued, the parameter `_Dest` receives the dequeued value, the original value held in the queue is destroyed, and this function returns `true`. If there was no item to dequeue, this function returns `false` without blocking, and the contents of the `_Dest` parameter are undefined.  
  
 `try_pop` is concurrency-safe with respect to calls to the methods `push`, `try_pop`, and `empty`.  
  
##  <a name="unsafe_begin"></a>  concurrent_queue::unsafe_begin Method  
 Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent queue. This method is not concurrency-safe.  
  
```
iterator unsafe_begin();

const_iterator unsafe_begin() const;
```  
  
### Return Value  
 An iterator of type `iterator` or `const_iterator` to the beginning of the concurrent queue object.  
  
### Remarks  
 The iterators for the `concurrent_queue` class are primarily intended for debugging, as they are slow, and iteration is not concurrency-safe with respect to other queue operations.  
  
##  <a name="unsafe_end"></a>  concurrent_queue::unsafe_end Method  
 Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent queue. This method is not concurrency-safe.  
  
```
iterator unsafe_end();

const_iterator unsafe_end() const;
```  
  
### Return Value  
 An iterator of type `iterator` or `const_iterator` to the end of the concurrent queue.  
  
### Remarks  
 The iterators for the `concurrent_queue` class are primarily intended for debugging, as they are slow, and iteration is not concurrency-safe with respect to other queue operations.  
  
##  <a name="unsafe_size"></a>  concurrent_queue::unsafe_size Method  
 Returns the number of items in the queue. This method is not concurrency-safe.  
  
```
size_type unsafe_size() const;
```  
  
### Return Value  
 The size of the concurrent queue.  
  
### Remarks  
 `unsafe_size` is not concurrency-safe and can produce incorrect results if called concurrently with calls to the methods `push`, `try_pop`, and `empty`.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
