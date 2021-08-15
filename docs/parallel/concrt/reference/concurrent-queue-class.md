---
description: "Learn more about: concurrent_queue Class"
title: "concurrent_queue Class"
ms.date: "11/04/2016"
f1_keywords: ["concurrent_queue", "CONCURRENT_QUEUE/concurrency::concurrent_queue", "CONCURRENT_QUEUE/concurrency::concurrent_queue::concurrent_queue", "CONCURRENT_QUEUE/concurrency::concurrent_queue::clear", "CONCURRENT_QUEUE/concurrency::concurrent_queue::empty", "CONCURRENT_QUEUE/concurrency::concurrent_queue::get_allocator", "CONCURRENT_QUEUE/concurrency::concurrent_queue::push", "CONCURRENT_QUEUE/concurrency::concurrent_queue::try_pop", "CONCURRENT_QUEUE/concurrency::concurrent_queue::unsafe_begin", "CONCURRENT_QUEUE/concurrency::concurrent_queue::unsafe_end", "CONCURRENT_QUEUE/concurrency::concurrent_queue::unsafe_size"]
helpviewer_keywords: ["concurrent_queue class"]
ms.assetid: c2218996-d0ea-40e9-b002-e9a15b085f51
---
# concurrent_queue Class

The `concurrent_queue` class is a sequence container class that allows first-in, first-out access to its elements. It enables a limited set of concurrency-safe operations, such as `push` and `try_pop`. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order.

## Syntax

```cpp
template<typename T, class _Ax>
class concurrent_queue: public ::Concurrency::details::_Concurrent_queue_base_v4;
```

### Parameters

*T*<br/>
The data type of the elements to be stored in the queue.

*_Ax*<br/>
The type that represents the stored allocator object that encapsulates details about the allocation and deallocation of memory for this concurrent queue. This argument is optional and the default value is `allocator<T>`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`allocator_type`|A type that represents the allocator class for the concurrent queue.|
|`const_iterator`|A type that represents a non-thread-safe **`const`** iterator over elements in a concurrent queue.|
|`const_reference`|A type that provides a reference to a **`const`** element stored in a concurrent queue for reading and performing **`const`** operations.|
|`difference_type`|A type that provides the signed distance between two elements in a concurrent queue.|
|`iterator`|A type that represents a non-thread-safe iterator over the elements in a concurrent queue.|
|`reference`|A type that provides a reference to an element stored in a concurrent queue.|
|`size_type`|A type that counts the number of elements in a concurrent queue.|
|`value_type`|A type that represents the data type stored in a concurrent queue.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[concurrent_queue](#ctor)|Overloaded. Constructs a concurrent queue.|
|[~concurrent_queue Destructor](#dtor)|Destroys the concurrent queue.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[clear](#clear)|Clears the concurrent queue, destroying any currently enqueued elements. This method is not concurrency-safe.|
|[empty](#empty)|Tests if the concurrent queue is empty at the moment this method is called. This method is concurrency-safe.|
|[get_allocator](#get_allocator)|Returns a copy of the allocator used to construct the concurrent queue. This method is concurrency-safe.|
|[push](#push)|Overloaded. Enqueues an item at tail end of the concurrent queue. This method is concurrency-safe.|
|[try_pop](#try_pop)|Dequeues an item from the queue if one is available. This method is concurrency-safe.|
|[unsafe_begin](#unsafe_begin)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent queue. This method is not concurrency-safe.|
|[unsafe_end](#unsafe_end)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent queue. This method is not concurrency-safe.|
|[unsafe_size](#unsafe_size)|Returns the number of items in the queue. This method is not concurrency-safe.|

## Remarks

For more information, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).

## Inheritance Hierarchy

`concurrent_queue`

## Requirements

**Header:** concurrent_queue.h

**Namespace:** concurrency

## <a name="clear"></a> clear

Clears the concurrent queue, destroying any currently enqueued elements. This method is not concurrency-safe.

```cpp
void clear();
```

## <a name="ctor"></a> concurrent_queue

Constructs a concurrent queue.

```cpp
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

*_InputIterator*<br/>
The type of the input iterator that specifies a range of values.

*_Al*<br/>
The allocator class to use with this object.

*_OtherQ*<br/>
The source `concurrent_queue` object to copy or move elements from.

*_Begin*<br/>
Position of the first element in the range of elements to be copied.

*_End*<br/>
Position of the first element beyond the range of elements to be copied.

### Remarks

All constructors store an allocator object `_Al` and initialize the queue.

The first constructor specifies an empty initial queue and explicitly specifies the allocator type to be used.

The second constructor specifies a copy of the concurrent queue `_OtherQ`.

The third constructor specifies a move of the concurrent queue `_OtherQ`.

The fourth constructor specifies values supplied by the iterator range [ `_Begin`, `_End`).

## <a name="dtor"></a> ~concurrent_queue

Destroys the concurrent queue.

```cpp
~concurrent_queue();
```

## <a name="empty"></a> empty

Tests if the concurrent queue is empty at the moment this method is called. This method is concurrency-safe.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the concurrent queue was empty at the moment we looked, **`false`** otherwise.

### Remarks

While this method is concurrency-safe with respect to calls to the methods `push`, `try_pop`, and `empty`, the value returned might be incorrect by the time it is inspected by the calling thread.

## <a name="get_allocator"></a> get_allocator

Returns a copy of the allocator used to construct the concurrent queue. This method is concurrency-safe.

```cpp
allocator_type get_allocator() const;
```

### Return Value

A copy of the allocator used to construct the concurrent queue.

## <a name="push"></a> push

Enqueues an item at tail end of the concurrent queue. This method is concurrency-safe.

```cpp
void push(const T& _Src);

void push(T&& _Src);
```

### Parameters

*_Src*<br/>
The item to be added to the queue.

### Remarks

`push` is concurrency-safe with respect to calls to the methods `push`, `try_pop`, and `empty`.

## <a name="try_pop"></a> try_pop

Dequeues an item from the queue if one is available. This method is concurrency-safe.

```cpp
bool try_pop(T& _Dest);
```

### Parameters

*_Dest*<br/>
A reference to a location to store the dequeued item.

### Return Value

**`true`** if an item was successfully dequeued, **`false`** otherwise.

### Remarks

If an item was successfully dequeued, the parameter `_Dest` receives the dequeued value, the original value held in the queue is destroyed, and this function returns **`true`**. If there was no item to dequeue, this function returns **`false`** without blocking, and the contents of the `_Dest` parameter are undefined.

`try_pop` is concurrency-safe with respect to calls to the methods `push`, `try_pop`, and `empty`.

## <a name="unsafe_begin"></a> unsafe_begin

Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent queue. This method is not concurrency-safe.

```cpp
iterator unsafe_begin();

const_iterator unsafe_begin() const;
```

### Return Value

An iterator of type `iterator` or `const_iterator` to the beginning of the concurrent queue object.

### Remarks

The iterators for the `concurrent_queue` class are primarily intended for debugging, as they are slow, and iteration is not concurrency-safe with respect to other queue operations.

## <a name="unsafe_end"></a> unsafe_end

Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent queue. This method is not concurrency-safe.

```cpp
iterator unsafe_end();

const_iterator unsafe_end() const;
```

### Return Value

An iterator of type `iterator` or `const_iterator` to the end of the concurrent queue.

### Remarks

The iterators for the `concurrent_queue` class are primarily intended for debugging, as they are slow, and iteration is not concurrency-safe with respect to other queue operations.

## <a name="unsafe_size"></a> unsafe_size

Returns the number of items in the queue. This method is not concurrency-safe.

```cpp
size_type unsafe_size() const;
```

### Return Value

The size of the concurrent queue.

### Remarks

`unsafe_size` is not concurrency-safe and can produce incorrect results if called concurrently with calls to the methods `push`, `try_pop`, and `empty`.

## See also

[concurrency Namespace](concurrency-namespace.md)
