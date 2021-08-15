---
description: "Learn more about: Parallel Containers and Objects"
title: "Parallel Containers and Objects"
ms.date: "03/27/2019"
helpviewer_keywords: ["parallel objects", "parallel containers", "concurrent containers"]
ms.assetid: 90ab715c-29cd-48eb-8e76-528619aab466
---
# Parallel Containers and Objects

The Parallel Patterns Library (PPL) includes several containers and objects that provide thread-safe access to their elements.

A *concurrent container* provides concurrency-safe access to the most important operations. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order. The functionality of these containers resembles those that are provided by the C++ Standard Library. For example, the [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) class resembles the [std::vector](../../standard-library/vector-class.md) class, except that the `concurrent_vector` class lets you append elements in parallel. Use concurrent containers when you have parallel code that requires both read and write access to the same container.

A *concurrent object* is shared concurrently among components. A process that computes the state of a concurrent object in parallel produces the same result as another process that computes the same state serially. The [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class is one example of a concurrent object type. The `combinable` class lets you perform computations in parallel, and then combine those computations into a final result. Use concurrent objects when you would otherwise use a synchronization mechanism, for example, a mutex, to synchronize access to a shared variable or resource.

## <a name="top"></a> Sections

This topic describes the following parallel containers and objects in detail.

Concurrent containers:

- [concurrent_vector Class](#vector)

  - [Differences Between concurrent_vector and vector](#vector-differences)

  - [Concurrency-Safe Operations](#vector-safety)

  - [Exception Safety](#vector-exceptions)

- [concurrent_queue Class](#queue)

  - [Differences Between concurrent_queue and queue](#queue-differences)

  - [Concurrency-Safe Operations](#queue-safety)

  - [Iterator Support](#queue-iterators)

- [concurrent_unordered_map Class](#unordered_map)

  - [Differences Between concurrent_unordered_map and unordered_map](#map-differences)

  - [Concurrency-Safe Operations](#map-safety)

- [concurrent_unordered_multimap Class](#unordered_multimap)

- [concurrent_unordered_set Class](#unordered_set)

- [concurrent_unordered_multiset Class](#unordered_multiset)

Concurrent objects:

- [combinable Class](#combinable)

  - [Methods and Features](#combinable-features)

  - [Examples](#combinable-examples)

## <a name="vector"></a> concurrent_vector Class

The [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) class is a sequence container class that, just like the [std::vector](../../standard-library/vector-class.md) class, lets you randomly access its elements. The `concurrent_vector` class enables concurrency-safe append and element access operations. Append operations do not invalidate existing pointers or iterators. Iterator access and traversal operations are also concurrency-safe. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order.

### <a name="vector-differences"></a> Differences Between concurrent_vector and vector

The `concurrent_vector` class closely resembles the `vector` class. The complexity of append, element access, and iterator access operations on a `concurrent_vector` object are the same as for a `vector` object. The following points illustrate where `concurrent_vector` differs from `vector`:

- Append, element access, iterator access, and iterator traversal operations on a `concurrent_vector` object are concurrency-safe.

- You can add elements only to the end of a `concurrent_vector` object. The `concurrent_vector` class does not provide the `insert` method.

- A `concurrent_vector` object does not use [move semantics](../../cpp/rvalue-reference-declarator-amp-amp.md) when you append to it.

- The `concurrent_vector` class does not provide the `erase` or `pop_back` methods. As with `vector`, use the [clear](reference/concurrent-vector-class.md#clear) method to remove all elements from a `concurrent_vector` object.

- The `concurrent_vector` class does not store its elements contiguously in memory. Therefore, you cannot use the `concurrent_vector` class in all the ways that you can use an array. For example, for a variable named `v` of type `concurrent_vector`, the expression `&v[0]+2` produces undefined behavior.

- The `concurrent_vector` class defines the [grow_by](reference/concurrent-vector-class.md#grow_by) and [grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least) methods. These methods resemble the [resize](reference/concurrent-vector-class.md#resize) method, except that they are concurrency-safe.

- A `concurrent_vector` object does not relocate its elements when you append to it or resize it. This enables existing pointers and iterators to remain valid during concurrent operations.

- The runtime does not define a specialized version of `concurrent_vector` for type **`bool`**.

### <a name="vector-safety"></a> Concurrency-Safe Operations

All methods that append to or increase the size of a `concurrent_vector` object, or access an element in a `concurrent_vector` object, are concurrency-safe. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order. The exception to this rule is the `resize` method.

The following table shows the common `concurrent_vector` methods and operators that are concurrency-safe.

:::row:::
   :::column span="":::
      [`at`](reference/concurrent-vector-class.md#at)\
      [`back`](reference/concurrent-vector-class.md#back)\
      [`begin`](reference/concurrent-vector-class.md#begin)\
      [`capacity`](reference/concurrent-vector-class.md#capacity)
   :::column-end:::
   :::column span="":::
      [`empty`](reference/concurrent-vector-class.md#empty)\
      [`end`](reference/concurrent-vector-class.md#end)\
      [`front`](reference/concurrent-vector-class.md#front)\
      [`grow_by`](reference/concurrent-vector-class.md#grow_by)
   :::column-end:::
   :::column span="":::
      [`grow_to_at_least`](reference/concurrent-vector-class.md#grow_to_at_least)\
      [`max_size`](reference/concurrent-vector-class.md#max_size)\
      [`operator[]`](reference/concurrent-vector-class.md#operator_at)\
      [`push_back`](reference/concurrent-vector-class.md#push_back)
   :::column-end:::
   :::column span="":::
      [`rbegin`](reference/concurrent-vector-class.md#rbegin)\
      [`rend`](reference/concurrent-vector-class.md#rend)\
      [`size`](reference/concurrent-vector-class.md#size)
   :::column-end:::
:::row-end:::

Operations that the runtime provides for compatibility with the C++ Standard Library, for example, `reserve`, are not concurrency-safe. The following table shows the common methods and operators that are not concurrency-safe.

:::row:::
   :::column span="":::
      [`assign`](reference/concurrent-vector-class.md#assign)\
      [`clear`](reference/concurrent-vector-class.md#clear)
   :::column-end:::
   :::column span="":::
      [`operator=`](reference/concurrent-vector-class.md#operator_eq)\
      [`reserve`](reference/concurrent-vector-class.md#reserve)
   :::column-end:::
   :::column span="":::
      [`resize`](reference/concurrent-vector-class.md#resize)
   :::column-end:::
   :::column span="":::
      [`shrink_to_fit`](reference/concurrent-vector-class.md#shrink_to_fit)
   :::column-end:::
:::row-end:::

Operations that modify the value of existing elements are not concurrency-safe. Use a synchronization object such as a [reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) object to synchronize concurrent read and write operations to the same data element. For more information about synchronization objects, see [Synchronization Data Structures](../../parallel/concrt/synchronization-data-structures.md).

When you convert existing code that uses `vector` to use `concurrent_vector`, concurrent operations can cause the behavior of your application to change. For example, consider the following program that concurrently performs two tasks on a `concurrent_vector` object. The first task appends additional elements to a `concurrent_vector` object. The second task computes the sum of all elements in the same object.

[!code-cpp[concrt-vector-safety#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_1.cpp)]

Although the `end` method is concurrency-safe, a concurrent call to the [push_back](reference/concurrent-vector-class.md#push_back) method causes the value that is returned by `end` to change. The number of elements that the iterator traverses is indeterminate. Therefore, this program can produce a different result each time that you run it. When the element type is non-trivial, it's possible for a race condition to exist between `push_back` and `end` calls. The `end` method may return an element that's allocated, but not fully initialized.

### <a name="vector-exceptions"></a> Exception Safety

If a growth or assignment operation throws an exception, the state of the `concurrent_vector` object becomes invalid. The behavior of a `concurrent_vector` object that is in an invalid state is undefined unless stated otherwise. However, the destructor always frees the memory that the object allocates, even if the object is in an invalid state.

The data type of the vector elements, `T`, must meet the following requirements. Otherwise, the behavior of the `concurrent_vector` class is undefined.

- The destructor must not throw.

- If the default or copy constructor throws, the destructor must not be declared by using the **`virtual`** keyword and it must work correctly with zero-initialized memory.

[[Top](#top)]

## <a name="queue"></a> concurrent_queue Class

The [concurrency::concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) class, just like the [std::queue](../../standard-library/queue-class.md) class, lets you access its front and back elements. The `concurrent_queue` class enables concurrency-safe enqueue and dequeue operations. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order. The `concurrent_queue` class also provides iterator support that is not concurrency-safe.

### <a name="queue-differences"></a> Differences Between concurrent_queue and queue

The `concurrent_queue` class closely resembles the `queue` class. The following points illustrate where `concurrent_queue` differs from `queue`:

- Enqueue and dequeue operations on a `concurrent_queue` object are concurrency-safe.

- The `concurrent_queue` class provides iterator support that is not concurrency-safe.

- The `concurrent_queue` class does not provide the `front` or `pop` methods. The `concurrent_queue` class replaces these methods by defining the [try_pop](reference/concurrent-queue-class.md#try_pop) method.

- The `concurrent_queue` class does not provide the `back` method. Therefore, you cannot reference the end of the queue.

- The `concurrent_queue` class provides the [unsafe_size](reference/concurrent-queue-class.md#unsafe_size) method instead of the `size` method. The `unsafe_size` method is not concurrency-safe.

### <a name="queue-safety"></a> Concurrency-Safe Operations

All methods that enqueue to or dequeue from a `concurrent_queue` object are concurrency-safe. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order.

The following table shows the common `concurrent_queue` methods and operators that are concurrency-safe.

:::row:::
   :::column span="":::
      [`empty`](reference/concurrent-queue-class.md#empty)
   :::column-end:::
   :::column span="":::
      [`get_allocator`](reference/concurrent-queue-class.md#get_allocator)
   :::column-end:::
   :::column span="":::
      [`push`](reference/concurrent-queue-class.md#push)
   :::column-end:::
   :::column span="":::
      [`try_pop`](reference/concurrent-queue-class.md#try_pop)
   :::column-end:::
:::row-end:::

Although the `empty` method is concurrency-safe, a concurrent operation may cause the queue to grow or shrink before the `empty` method returns.

The following table shows the common methods and operators that are not concurrency-safe.

:::row:::
   :::column span="":::
      [`clear`](reference/concurrent-queue-class.md#clear)
   :::column-end:::
   :::column span="":::
      [`unsafe_begin`](reference/concurrent-queue-class.md#unsafe_begin)
   :::column-end:::
   :::column span="":::
      [`unsafe_end`](reference/concurrent-queue-class.md#unsafe_end)
   :::column-end:::
   :::column span="":::
      [`unsafe_size`](reference/concurrent-queue-class.md#unsafe_size)
   :::column-end:::
:::row-end:::

### <a name="queue-iterators"></a> Iterator Support

The `concurrent_queue` provides iterators that are not concurrency-safe. We recommend that you use these iterators for debugging only.

A `concurrent_queue` iterator traverses elements in the forward direction only. The following table shows the operators that each iterator supports.

|Operator|Description|
|--------------|-----------------|
|`operator++`|Advances to next item in the queue. This operator is overloaded to provide both pre-increment and post-increment semantics.|
|`operator*`|Retrieves a reference to the current item.|
|`operator->`|Retrieves a pointer to the current item.|

\[[Top](#top)]

## <a name="unordered_map"></a> concurrent_unordered_map Class

The [concurrency::concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) class is an associative container class that, just like the [std::unordered_map](../../standard-library/unordered-map-class.md) class, controls a varying-length sequence of elements of type [std::pair\<const Key, Ty>](../../standard-library/pair-structure.md). Think of an unordered map as a dictionary that you can add a key and value pair to or look up a value by key. This class is useful when you have multiple threads or tasks that have to concurrently access a shared container, insert into it, or update it.

The following example shows the basic structure for using `concurrent_unordered_map`. This example inserts character keys in the range ['a', 'i']. Because the order of operations is undetermined, the final value for each key is also undetermined. However, it is safe to perform the insertions in parallel.

[!code-cpp[concrt-unordered-map-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_2.cpp)]

For an example that uses `concurrent_unordered_map` to perform a map and reduce operation in parallel, see [How to: Perform Map and Reduce Operations in Parallel](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).

### <a name="map-differences"></a> Differences Between concurrent_unordered_map and unordered_map

The `concurrent_unordered_map` class closely resembles the `unordered_map` class. The following points illustrate where `concurrent_unordered_map` differs from `unordered_map`:

- The `erase`, `bucket`, `bucket_count`, and `bucket_size` methods are named `unsafe_erase`, `unsafe_bucket`, `unsafe_bucket_count`, and `unsafe_bucket_size`, respectively. The `unsafe_` naming convention indicates that these methods are not concurrency-safe. For more information about concurrency safety, see [Concurrency-Safe Operations](#map-safety).

- Insert operations do not invalidate existing pointers or iterators, nor do they change the order of items that already exist in the map. Insert and traverse operations can occur concurrently.

- `concurrent_unordered_map` supports forward iteration only.

- Insertion does not invalidate or update the iterators that are returned by `equal_range`. Insertion can append unequal items to the end of the range. The begin iterator points to an equal item.

To help avoid deadlock, no method of `concurrent_unordered_map` holds a lock when it calls the memory allocator, hash functions, or other user-defined code. Also, you must ensure that the hash function always evaluates equal keys to the same value. The best hash functions distribute keys uniformly across the hash code space.

### <a name="map-safety"></a> Concurrency-Safe Operations

The `concurrent_unordered_map` class enables concurrency-safe insert and element-access operations. Insert operations do not invalidate existing pointers or iterators. Iterator access and traversal operations are also concurrency-safe. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order. The following table shows the commonly used `concurrent_unordered_map` methods and operators that are concurrency-safe.

:::row:::
   :::column span="":::
      [`at`](reference/concurrent-unordered-map-class.md#at)\
      [`begin`](reference/concurrent-unordered-map-class.md#begin)\
      [`cbegin`](reference/concurrent-unordered-map-class.md#cbegin)\
      [`cend`](reference/concurrent-unordered-map-class.md#cend)
   :::column-end:::
   :::column span="":::
      [`count`](reference/concurrent-unordered-map-class.md#count)\
      [`empty`](reference/concurrent-unordered-map-class.md#empty)\
      [`end`](reference/concurrent-unordered-map-class.md#cend)\
      [`equal_range`](reference/concurrent-unordered-map-class.md#equal_range)
   :::column-end:::
   :::column span="":::
      [`find`](reference/concurrent-unordered-map-class.md#find)\
      [`get_allocator`](reference/concurrent-unordered-map-class.md#get_allocator)\
      [`hash_function`](reference/concurrent-unordered-map-class.md#hash_function)\
      [`insert`](reference/concurrent-unordered-map-class.md#insert)
   :::column-end:::
   :::column span="":::
      [`key_eq`](reference/concurrent-unordered-map-class.md#key_eq)\
      [`max_size`](reference/concurrent-unordered-map-class.md#max_size)\
      [`operator[]`](./reference/concurrent-unordered-map-class.md#operator_at)\
      [`size`](reference/concurrent-unordered-map-class.md#size)
   :::column-end:::
:::row-end:::

Although the `count` method can be called safely from concurrently running threads, different threads can receive different results if a new value is simultaneously inserted into the container.

The following table shows the commonly used methods and operators that are not concurrency-safe.

:::row:::
   :::column span="":::
      [`clear`](reference/concurrent-unordered-map-class.md#clear)\
      [`load_factor`](reference/concurrent-unordered-map-class.md#load_factor)
   :::column-end:::
   :::column span="":::
      [`max_load_factor`](reference/concurrent-unordered-map-class.md#max_load_factor)
   :::column-end:::
   :::column span="":::
      [`operator=`](reference/concurrent-unordered-map-class.md#operator_eq)
   :::column-end:::
   :::column span="":::
      [`rehash`](reference/concurrent-unordered-map-class.md#rehash)
   :::column-end:::
:::row-end:::

In addition to these methods, any method that begins with `unsafe_` is also not concurrency-safe.

[[Top](#top)]

## <a name="unordered_multimap"></a> concurrent_unordered_multimap Class

The [concurrency::concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md) class closely resembles the `concurrent_unordered_map` class except that it allows for multiple values to map to the same key. It also differs from `concurrent_unordered_map` in the following ways:

- The [concurrent_unordered_multimap::insert](reference/concurrent-unordered-multimap-class.md#insert) method returns an iterator instead of `std::pair<iterator, bool>`.

- The `concurrent_unordered_multimap` class does not provide `operator[]` nor the `at` method.

The following example shows the basic structure for using `concurrent_unordered_multimap`. This example inserts character keys in the range ['a', 'i']. `concurrent_unordered_multimap` enables a key to have multiple values.

[!code-cpp[concrt-unordered-multimap-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_3.cpp)]

[[Top](#top)]

## <a name="unordered_set"></a> concurrent_unordered_set Class

The [concurrency::concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md) class closely resembles the `concurrent_unordered_map` class except that it manages values instead of key and value pairs. The `concurrent_unordered_set` class does not provide `operator[]` nor the `at` method.

The following example shows the basic structure for using `concurrent_unordered_set`. This example inserts character values in the range ['a', 'i']. It is safe to perform the insertions in parallel.

[!code-cpp[concrt-unordered-set#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_4.cpp)]

[[Top](#top)]

## <a name="unordered_multiset"></a> concurrent_unordered_multiset Class

The [concurrency::concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md) class closely resembles the `concurrent_unordered_set` class except that it allows for duplicate values. It also differs from `concurrent_unordered_set` in the following ways:

- The [concurrent_unordered_multiset::insert](reference/concurrent-unordered-multiset-class.md#insert) method returns an iterator instead of `std::pair<iterator, bool>`.

- The `concurrent_unordered_multiset` class does not provide `operator[]` nor the `at` method.

The following example shows the basic structure for using `concurrent_unordered_multiset`. This example inserts character values in the range ['a', 'i']. `concurrent_unordered_multiset` enables a value to occur multiple times.

[!code-cpp[concrt-unordered-multiset#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_5.cpp)]

[[Top](#top)]

## <a name="combinable"></a> combinable Class

The [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) class provides reusable, thread-local storage that lets you perform fine-grained computations and then merge those computations into a final result. You can think of a `combinable` object as a reduction variable.

The `combinable` class is useful when you have a resource that is shared among several threads or tasks. The `combinable` class helps you eliminate shared state by providing access to shared resources in a lock-free manner. Therefore, this class provides an alternative to using a synchronization mechanism, for example, a mutex, to synchronize access to shared data from multiple threads.

### <a name="combinable-features"></a> Methods and Features

The following table shows some of the important methods of the `combinable` class. For more information about all the `combinable` class methods, see [combinable Class](../../parallel/concrt/reference/combinable-class.md).

|Method|Description|
|------------|-----------------|
|[local](reference/combinable-class.md#local)|Retrieves a reference to the local variable that is associated with the current thread context.|
|[clear](reference/combinable-class.md#clear)|Removes all thread-local variables from the `combinable` object.|
|[combine](reference/combinable-class.md#combine)<br /><br /> [combine_each](reference/combinable-class.md#combine_each)|Uses the provided combine function to generate a final value from the set of all thread-local computations.|

The `combinable` class is a template class that is parameterized on the final merged result. If you call the default constructor, the `T` template parameter type must have a default constructor and a copy constructor. If the `T` template parameter type does not have a default constructor, call the overloaded version of the constructor that takes an initialization function as its parameter.

You can store additional data in a `combinable` object after you call the [combine](reference/combinable-class.md#combine) or [combine_each](reference/combinable-class.md#combine_each) methods. You can also call the `combine` and `combine_each` methods multiple times. If no local value in a `combinable` object changes, the `combine` and `combine_each` methods produce the same result every time that they are called.

### <a name="combinable-examples"></a> Examples

For examples about how to use the `combinable` class, see the following topics:

- [How to: Use combinable to Improve Performance](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)

- [How to: Use combinable to Combine Sets](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)

[[Top](#top)]

## Related Topics

[How to: Use Parallel Containers to Increase Efficiency](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br/>
Shows how to use parallel containers to efficiently store and access data in parallel.

[How to: Use combinable to Improve Performance](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br/>
Shows how to use the `combinable` class to eliminate shared state, and thereby improve performance.

[How to: Use combinable to Combine Sets](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)<br/>
Shows how to use a `combine` function to merge thread-local sets of data.

[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Describes the PPL, which provides an imperative programming model that promotes scalability and ease-of-use for developing concurrent applications.

## Reference

[concurrent_vector Class](../../parallel/concrt/reference/concurrent-vector-class.md)

[concurrent_queue Class](../../parallel/concrt/reference/concurrent-queue-class.md)

[concurrent_unordered_map Class](../../parallel/concrt/reference/concurrent-unordered-map-class.md)

[concurrent_unordered_multimap Class](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)

[concurrent_unordered_set Class](../../parallel/concrt/reference/concurrent-unordered-set-class.md)

[concurrent_unordered_multiset Class](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)

[combinable Class](../../parallel/concrt/reference/combinable-class.md)
