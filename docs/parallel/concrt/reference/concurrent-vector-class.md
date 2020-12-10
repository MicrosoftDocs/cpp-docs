---
description: "Learn more about: concurrent_vector Class"
title: "concurrent_vector Class"
ms.date: "11/04/2016"
f1_keywords: ["concurrent_vector", "CONCURRENT_VECTOR/concurrency::concurrent_vector", "CONCURRENT_VECTOR/concurrency::concurrent_vector::concurrent_vector", "CONCURRENT_VECTOR/concurrency::concurrent_vector::assign", "CONCURRENT_VECTOR/concurrency::concurrent_vector::at", "CONCURRENT_VECTOR/concurrency::concurrent_vector::back", "CONCURRENT_VECTOR/concurrency::concurrent_vector::begin", "CONCURRENT_VECTOR/concurrency::concurrent_vector::capacity", "CONCURRENT_VECTOR/concurrency::concurrent_vector::cbegin", "CONCURRENT_VECTOR/concurrency::concurrent_vector::cend", "CONCURRENT_VECTOR/concurrency::concurrent_vector::clear", "CONCURRENT_VECTOR/concurrency::concurrent_vector::crbegin", "CONCURRENT_VECTOR/concurrency::concurrent_vector::crend", "CONCURRENT_VECTOR/concurrency::concurrent_vector::empty", "CONCURRENT_VECTOR/concurrency::concurrent_vector::end", "CONCURRENT_VECTOR/concurrency::concurrent_vector::front", "CONCURRENT_VECTOR/concurrency::concurrent_vector::get_allocator", "CONCURRENT_VECTOR/concurrency::concurrent_vector::grow_by", "CONCURRENT_VECTOR/concurrency::concurrent_vector::grow_to_at_least", "CONCURRENT_VECTOR/concurrency::concurrent_vector::max_size", "CONCURRENT_VECTOR/concurrency::concurrent_vector::push_back", "CONCURRENT_VECTOR/concurrency::concurrent_vector::rbegin", "CONCURRENT_VECTOR/concurrency::concurrent_vector::rend", "CONCURRENT_VECTOR/concurrency::concurrent_vector::reserve", "CONCURRENT_VECTOR/concurrency::concurrent_vector::resize", "CONCURRENT_VECTOR/concurrency::concurrent_vector::shrink_to_fit", "CONCURRENT_VECTOR/concurrency::concurrent_vector::size", "CONCURRENT_VECTOR/concurrency::concurrent_vector::swap"]
helpviewer_keywords: ["concurrent_vector class"]
ms.assetid: a217b4ac-af2b-4d41-94eb-09a75ee28622
---
# concurrent_vector Class

The `concurrent_vector` class is a sequence container class that allows random access to any element. It enables concurrency-safe append, element access, iterator access, and iterator traversal operations. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order.

## Syntax

```cpp
template<typename T, class _Ax>
class concurrent_vector: protected details::_Allocator_base<T,
    _Ax>,
private details::_Concurrent_vector_base_v4;
```

### Parameters

*T*<br/>
The data type of the elements to be stored in the vector.

*_Ax*<br/>
The type that represents the stored allocator object that encapsulates details about the allocation and deallocation of memory for the concurrent vector. This argument is optional and the default value is `allocator<T>`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`allocator_type`|A type that represents the allocator class for the concurrent vector.|
|`const_iterator`|A type that provides a random-access iterator that can read a **`const`** element in a concurrent vector.|
|`const_pointer`|A type that provides a pointer to a **`const`** element in a concurrent vector.|
|`const_reference`|A type that provides a reference to a **`const`** element stored in a concurrent vector for reading and performing **`const`** operations.|
|`const_reverse_iterator`|A type that provides a random-access iterator that can read any **`const`** element in the concurrent vector.|
|`difference_type`|A type that provides the signed distance between two elements in a concurrent vector.|
|`iterator`|A type that provides a random-access iterator that can read any element in a concurrent vector. Modification of an element using the iterator is not concurrency-safe.|
|`pointer`|A type that provides a pointer to an element in a concurrent vector.|
|`reference`|A type that provides a reference to an element stored in a concurrent vector.|
|`reverse_iterator`|A type that provides a random-access iterator that can read any element in a reversed concurrent vector. Modification of an element using the iterator is not concurrency-safe.|
|`size_type`|A type that counts the number of elements in a concurrent vector.|
|`value_type`|A type that represents the data type stored in a concurrent vector.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[concurrent_vector](#ctor)|Overloaded. Constructs a concurrent vector.|
|[~concurrent_vector Destructor](#dtor)|Erases all elements and destroys this concurrent vector.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[assign](#assign)|Overloaded. Erases the elements of the concurrent vector and assigns to it either `_N` copies of `_Item`, or values specified by the iterator range [ `_Begin`, `_End`). This method is not concurrency-safe.|
|[at](#at)|Overloaded. Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as you have ensured that the value `_Index` is less than the size of the concurrent vector.|
|[back](#back)|Overloaded. Returns a reference or a **`const`** reference to the last element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.|
|[begin](#begin)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|
|[capacity](#capacity)|Returns the maximum size to which the concurrent vector can grow without having to allocate more memory. This method is concurrency-safe.|
|[cbegin](#cbegin)|Returns an iterator of type `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|
|[cend](#cend)|Returns an iterator of type `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.|
|[clear](#clear)|Erases all elements in the concurrent vector. This method is not concurrency-safe.|
|[crbegin](#crbegin)|Returns an iterator of type `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|
|[crend](#crend)|Returns an iterator of type `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.|
|[empty](#empty)|Tests if the concurrent vector is empty at the time this method is called. This method is concurrency-safe.|
|[end](#end)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.|
|[front](#front)|Overloaded. Returns a reference or a **`const`** reference to the first element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.|
|[get_allocator](#get_allocator)|Returns a copy of the allocator used to construct the concurrent vector. This method is concurrency-safe.|
|[grow_by](#grow_by)|Overloaded. Grows this concurrent vector by `_Delta` elements. This method is concurrency-safe.|
|[grow_to_at_least](#grow_to_at_least)|Grows this concurrent vector until it has at least `_N` elements. This method is concurrency-safe.|
|[max_size](#max_size)|Returns the maximum number of elements the concurrent vector can hold. This method is concurrency-safe.|
|[push_back](#push_back)|Overloaded. Appends the given item to the end of the concurrent vector. This method is concurrency-safe.|
|[rbegin](#rbegin)|Overloaded. Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|
|[rend](#rend)|Overloaded. Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.|
|[reserve](#reserve)|Allocates enough space to grow the concurrent vector to size `_N` without having to allocate more memory later. This method is not concurrency-safe.|
|[resize](#resize)|Overloaded. Changes the size of the concurrent vector to the requested size, deleting or adding elements as necessary. This method is not concurrency-safe.|
|[shrink_to_fit](#shrink_to_fit)|Compacts the internal representation of the concurrent vector to reduce fragmentation and optimize memory usage. This method is not concurrency-safe.|
|[size](#size)|Returns the number of elements in the concurrent vector. This method is concurrency-safe.|
|[swap](#swap)|Swaps the contents of two concurrent vectors. This method is not concurrency-safe.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator\[\]](#operator_at)|Overloaded. Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as the you have ensured that the value `_Index` is less than the size of the concurrent vector.|
|[operator=](#operator_eq)|Overloaded. Assigns the contents of another `concurrent_vector` object to this one. This method is not concurrency-safe.|

## Remarks

For detailed information on the `concurrent_vector` class, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).

## Inheritance Hierarchy

`_Concurrent_vector_base_v4`

`_Allocator_base`

`concurrent_vector`

## Requirements

**Header:** concurrent_vector.h

**Namespace:** concurrency

## <a name="assign"></a> assign

Erases the elements of the concurrent vector and assigns to it either `_N` copies of `_Item`, or values specified by the iterator range [ `_Begin`, `_End`). This method is not concurrency-safe.

```cpp
void assign(
    size_type _N,
    const_reference _Item);

template<class _InputIterator>
void assign(_InputIterator _Begin,
    _InputIterator _End);
```

### Parameters

*_InputIterator*<br/>
The type of the specified iterator.

*_N*<br/>
The number of items to copy into the concurrent vector.

*_Item*<br/>
Reference to a value used to fill the concurrent vector.

*_Begin*<br/>
An iterator to the first element of the source range.

*_End*<br/>
An iterator to one past the last element of the source range.

### Remarks

`assign` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method.

## <a name="at"></a> at

Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as you have ensured that the value `_Index` is less than the size of the concurrent vector.

```cpp
reference at(size_type _Index);

const_reference at(size_type _Index) const;
```

### Parameters

*_Index*<br/>
The index of the element to be retrieved.

### Return Value

A reference to the item at the given index.

### Remarks

The version of the function `at` that returns a non- **`const`** reference cannot be used to concurrently write to the element from different threads. A different synchronization object should be used to synchronize concurrent read and write operations to the same data element.

The method throws `out_of_range` if `_Index` is greater than or equal to the size of the concurrent vector, and `range_error` if the index is for a broken portion of the vector. For details on how a vector can become broken, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="back"></a> back

Returns a reference or a **`const`** reference to the last element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.

```cpp
reference back();

const_reference back() const;
```

### Return Value

A reference or a **`const`** reference to the last element in the concurrent vector.

## <a name="begin"></a> begin

Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.

```cpp
iterator begin();

const_iterator begin() const;
```

### Return Value

An iterator of type `iterator` or `const_iterator` to the beginning of the concurrent vector.

## <a name="capacity"></a> capacity

Returns the maximum size to which the concurrent vector can grow without having to allocate more memory. This method is concurrency-safe.

```cpp
size_type capacity() const;
```

### Return Value

The maximum size to which the concurrent vector can grow without having to allocate more memory.

### Remarks

Unlike a C++ Standard Library `vector`, a `concurrent_vector` object does not move existing elements if it allocates more memory.

## <a name="cbegin"></a> cbegin

Returns an iterator of type `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.

```cpp
const_iterator cbegin() const;
```

### Return Value

An iterator of type `const_iterator` to the beginning of the concurrent vector.

## <a name="cend"></a> cend

Returns an iterator of type `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.

```cpp
const_iterator cend() const;
```

### Return Value

An iterator of type `const_iterator` to the end of the concurrent vector.

## <a name="clear"></a> clear

Erases all elements in the concurrent vector. This method is not concurrency-safe.

```cpp
void clear();
```

### Remarks

`clear` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method. `clear` does not free internal arrays. To free internal arrays, call the function `shrink_to_fit` after `clear`.

## <a name="ctor"></a> concurrent_vector

Constructs a concurrent vector.

```cpp
explicit concurrent_vector(
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector(
    const concurrent_vector<T,
    M>& _Vector,
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    concurrent_vector&& _Vector);

explicit concurrent_vector(
    size_type _N);

concurrent_vector(
    size_type _N,
    const_reference _Item,
    const allocator_type& _Al = allocator_type());

template<class _InputIterator>
concurrent_vector(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());
```

### Parameters

*M*<br/>
The allocator type of the source vector.

*_InputIterator*<br/>
The type of the input iterator.

*_Al*<br/>
The allocator class to use with this object.

*_Vector*<br/>
The source `concurrent_vector` object to copy or move elements from.

*_N*<br/>
The initial capacity of the `concurrent_vector` object.

*_Item*<br/>
The value of elements in the constructed object.

*_Begin*<br/>
Position of the first element in the range of elements to be copied.

*_End*<br/>
Position of the first element beyond the range of elements to be copied.

### Remarks

All constructors store an allocator object `_Al` and initialize the vector.

The first constructor specify an empty initial vector and explicitly specifies the allocator type. to be used.

The second and third constructors specify a copy of the concurrent vector `_Vector`.

The fourth constructor specifies a move of the concurrent vector `_Vector`.

The fifth constructor specifies a repetition of a specified number ( `_N`) of elements of the default value for class `T`.

The sixth constructor specifies a repetition of ( `_N`) elements of value `_Item`.

The last constructor specifies values supplied by the iterator range [ `_Begin`, `_End`).

## <a name="dtor"></a> ~concurrent_vector

Erases all elements and destroys this concurrent vector.

```cpp
~concurrent_vector();
```

## <a name="crbegin"></a> crbegin

Returns an iterator of type `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.

```cpp
const_reverse_iterator crbegin() const;
```

### Return Value

An iterator of type `const_reverse_iterator` to the beginning of the concurrent vector.

## <a name="crend"></a> crend

Returns an iterator of type `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.

```cpp
const_reverse_iterator crend() const;
```

### Return Value

An iterator of type `const_reverse_iterator` to the end of the concurrent vector.

## <a name="empty"></a> empty

Tests if the concurrent vector is empty at the time this method is called. This method is concurrency-safe.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the vector was empty at the moment the function was called, **`false`** otherwise.

## <a name="end"></a> end

Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.

```cpp
iterator end();

const_iterator end() const;
```

### Return Value

An iterator of type `iterator` or `const_iterator` to the end of the concurrent vector.

## <a name="front"></a> front

Returns a reference or a **`const`** reference to the first element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.

```cpp
reference front();

const_reference front() const;
```

### Return Value

A reference or a **`const`** reference to the first element in the concurrent vector.

## <a name="get_allocator"></a> get_allocator

Returns a copy of the allocator used to construct the concurrent vector. This method is concurrency-safe.

```cpp
allocator_type get_allocator() const;
```

### Return Value

A copy of the allocator used to construct the `concurrent_vector` object.

## <a name="grow_by"></a> grow_by

Grows this concurrent vector by `_Delta` elements. This method is concurrency-safe.

```cpp
iterator grow_by(
    size_type _Delta);

iterator grow_by(
    size_type _Delta,
    const_reference _Item);
```

### Parameters

*_Delta*<br/>
The number of elements to append to the object.

*_Item*<br/>
The value to initialize the new elements with.

### Return Value

An iterator to first item appended.

### Remarks

If `_Item` is not specified, the new elements are default constructed.

## <a name="grow_to_at_least"></a> grow_to_at_least

Grows this concurrent vector until it has at least `_N` elements. This method is concurrency-safe.

```cpp
iterator grow_to_at_least(size_type _N);
```

### Parameters

*_N*<br/>
The new minimum size for the `concurrent_vector` object.

### Return Value

An iterator that points to beginning of appended sequence, or to the element at index `_N` if no elements were appended.

## <a name="max_size"></a> max_size

Returns the maximum number of elements the concurrent vector can hold. This method is concurrency-safe.

```cpp
size_type max_size() const;
```

### Return Value

The maximum number of elements the `concurrent_vector` object can hold.

## <a name="operator_eq"></a> operator=

Assigns the contents of another `concurrent_vector` object to this one. This method is not concurrency-safe.

```cpp
concurrent_vector& operator= (
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector& operator= (
    const concurrent_vector<T, M>& _Vector);

concurrent_vector& operator= (
    concurrent_vector&& _Vector);
```

### Parameters

*M*<br/>
The allocator type of the source vector.

*_Vector*<br/>
The source `concurrent_vector` object.

### Return Value

A reference to this `concurrent_vector` object.

## <a name="operator_at"></a> operator[]

Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as the you have ensured that the value `_Index` is less than the size of the concurrent vector.

```cpp
reference operator[](size_type _index);

const_reference operator[](size_type _index) const;
```

### Parameters

*_Index*<br/>
The index of the element to be retrieved.

### Return Value

A reference to the item at the given index.

### Remarks

The version of `operator []` that returns a non- **`const`** reference cannot be used to concurrently write to the element from different threads. A different synchronization object should be used to synchronize concurrent read and write operations to the same data element.

No bounds checking is performed to ensure that `_Index` is a valid index into the concurrent vector.

## <a name="push_back"></a> push_back

Appends the given item to the end of the concurrent vector. This method is concurrency-safe.

```cpp
iterator push_back(const_reference _Item);

iterator push_back(T&& _Item);
```

### Parameters

*_Item*<br/>
The value to be appended.

### Return Value

An iterator to item appended.

## <a name="rbegin"></a> rbegin

Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.

```cpp
reverse_iterator rbegin();

const_reverse_iterator rbegin() const;
```

### Return Value

An iterator of type `reverse_iterator` or `const_reverse_iterator` to the beginning of the concurrent vector.

## <a name="rend"></a> rend

Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.

```cpp
reverse_iterator rend();

const_reverse_iterator rend() const;
```

### Return Value

An iterator of type `reverse_iterator` or `const_reverse_iterator` to the end of the concurrent vector.

## <a name="reserve"></a> reserve

Allocates enough space to grow the concurrent vector to size `_N` without having to allocate more memory later. This method is not concurrency-safe.

```cpp
void reserve(size_type _N);
```

### Parameters

*_N*<br/>
The number of elements to reserve space for.

### Remarks

`reserve` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method. The capacity of the concurrent vector after the method returns may be bigger than the requested reservation.

## <a name="resize"></a> resize

Changes the size of the concurrent vector to the requested size, deleting or adding elements as necessary. This method is not concurrency-safe.

```cpp
void resize(
    size_type _N);

void resize(
    size_type _N,
    const T& val);
```

### Parameters

*_N*<br/>
The new size of the concurrent_vector.

*val*<br/>
The value of new elements added to the vector if the new size is larger than the original size. If the value is omitted, the new objects are assigned the default value for their type.

### Remarks

If the size of the container is less than the requested size, elements are added to the vector until it reaches the requested size. If the size of the container is larger than the requested size, the elements closest to the end of the container are deleted until the container reaches the size `_N`. If the present size of the container is the same as the requested size, no action is taken.

`resize` is not concurrency safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method.

## <a name="shrink_to_fit"></a> shrink_to_fit

Compacts the internal representation of the concurrent vector to reduce fragmentation and optimize memory usage. This method is not concurrency-safe.

```cpp
void shrink_to_fit();
```

### Remarks

This method will internally re-allocate memory move elements around, invalidating all the iterators. `shrink_to_fit` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this function.

## <a name="size"></a> size

Returns the number of elements in the concurrent vector. This method is concurrency-safe.

```cpp
size_type size() const;
```

### Return Value

The number of elements in this `concurrent_vector` object.

### Remarks

The returned size is guaranteed to include all elements appended by calls to the function `push_back`, or grow operations that have completed prior to invoking this method. However, it may also include elements that are allocated but still under construction by concurrent calls to any of the growth methods.

## <a name="swap"></a> swap

Swaps the contents of two concurrent vectors. This method is not concurrency-safe.

```cpp
void swap(concurrent_vector& _Vector);
```

### Parameters

*_Vector*<br/>
The `concurrent_vector` object to swap contents with.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md)
