---
description: "Learn more about: concurrent_unordered_map Class"
title: "concurrent_unordered_map Class"
ms.date: "11/04/2016"
f1_keywords: ["concurrent_unordered_map", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::concurrent_unordered_map", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::at", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::hash_function", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::insert", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::key_eq", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::swap", "CONCURRENT_UNORDERED_MAP/concurrency::concurrent_unordered_map::unsafe_erase"]
helpviewer_keywords: ["concurrent_unordered_map class"]
ms.assetid: b2d879dd-87ef-4af9-a266-a5443fd538b8
---
# concurrent_unordered_map Class

The `concurrent_unordered_map` class is a concurrency-safe container that controls a varying-length sequence of elements of type `std::pair<const K, _Element_type>`. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access, and iterator traversal operations. Here, concurrency-safe means pointers or iterators are always valid. It's not a guarantee of element initialization, or of a particular traversal order.

## Syntax

```cpp
template <typename K,
    typename _Element_type,
    typename _Hasher = std::hash<K>,
    typename key_equality = std::equal_to<K>,
    typename _Allocator_type = std::allocator<std::pair<const K,
    _Element_type>>
>,
typename key_equality = std::equal_to<K>,
    typename _Allocator_type = std::allocator<std::pair<const K,
    _Element_type>>> class concurrent_unordered_map : public details::_Concurrent_hash<details::_Concurrent_unordered_map_traits<K,
    _Element_type,
details::_Hash_compare<K,
    _Hasher,
key_equality>,
    _Allocator_type,
false>>;
```

### Parameters

*K*<br/>
The key type.

*_Element_type*<br/>
The mapped type.

*_Hasher*<br/>
The hash function object type. This argument is optional and the default value is `std::hash<K>`.

*key_equality*<br/>
The equality comparison function object type. This argument is optional and the default value is `std::equal_to<K>`.

*_Allocator_type*<br/>
The type that represents the stored allocator object that encapsulates details about the allocation and deallocation of memory for the concurrent unordered map. This argument is optional and the default value is `std::allocator<std::pair<K`, `_Element_type>>`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`allocator_type`|The type of an allocator for managing storage.|
|`const_iterator`|The type of a constant iterator for the controlled sequence.|
|`const_local_iterator`|The type of a constant bucket iterator for the controlled sequence.|
|`const_pointer`|The type of a constant pointer to an element.|
|`const_reference`|The type of a constant reference to an element.|
|`difference_type`|The type of a signed distance between two elements.|
|`hasher`|The type of the hash function.|
|`iterator`|The type of an iterator for the controlled sequence.|
|`key_equal`|The type of the comparison function.|
|`key_type`|The type of an ordering key.|
|`local_iterator`|The type of a bucket iterator for the controlled sequence.|
|`mapped_type`|The type of a mapped value associated with each key.|
|`pointer`|The type of a pointer to an element.|
|`reference`|The type of a reference to an element.|
|`size_type`|The type of an unsigned distance between two elements.|
|`value_type`|The type of an element.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[concurrent_unordered_map](#ctor)|Overloaded. Constructs a concurrent unordered map.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[at](#at)|Overloaded. Finds an element in a `concurrent_unordered_map` with a specified key value.. This method is concurrency-safe.|
|[hash_function](#hash_function)|Gets the stored hash function object.|
|[insert](#insert)|Overloaded. Adds elements to the `concurrent_unordered_map` object.|
|[key_eq](#key_eq)|Gets the stored equality comparison function object.|
|[swap](#swap)|Swaps the contents of two `concurrent_unordered_map` objects. This method is not concurrency-safe.|
|[unsafe_erase](#unsafe_erase)|Overloaded. Removes elements from the `concurrent_unordered_map` at specified positions. This method is not concurrency-safe.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator\[\]](#operator_at)|Overloaded. Finds or inserts an element with the specified key. This method is concurrency-safe.|
|[operator=](#operator_eq)|Overloaded. Assigns the contents of another `concurrent_unordered_map` object to this one. This method is not concurrency-safe.|

## Remarks

For detailed information on the `concurrent_unordered_map` class, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).

## Inheritance Hierarchy

`_Traits`

`_Concurrent_hash`

`concurrent_unordered_map`

## Requirements

**Header:** concurrent_unordered_map.h

**Namespace:** concurrency

## <a name="at"></a> at

Finds an element in a `concurrent_unordered_map` with a specified key value.. This method is concurrency-safe.

```cpp
mapped_type& at(const key_type& KVal);

const mapped_type& at(const key_type& KVal) const;
```

### Parameters

*KVal*<br/>
The key value to find.

### Return Value

A reference to the data value of the element found.

### Remarks

If the argument key value is not found, the function throws an object of class `out_of_range`.

## <a name="begin"></a> begin

Returns an iterator pointing to the first element in the concurrent container. This method is concurrency safe.

```cpp
iterator begin();

const_iterator begin() const;
```

### Return Value

An iterator to the first element in the concurrent container.

## <a name="cbegin"></a> cbegin

Returns a const iterator pointing to the first element in the concurrent container. This method is concurrency safe.

```cpp
const_iterator cbegin() const;
```

### Return Value

A const iterator to the first element in the concurrent container.

## <a name="cend"></a> cend

Returns a const iterator pointing to the location succeeding the last element in the concurrent container. This method is concurrency safe.

```cpp
const_iterator cend() const;
```

### Return Value

A const iterator to the location succeeding the last element in the concurrent container.

## <a name="clear"></a> clear

Erases all the elements in the concurrent container. This function is not concurrency safe.

```cpp
void clear();
```

## <a name="ctor"></a> concurrent_unordered_map

Constructs a concurrent unordered map.

```cpp
explicit concurrent_unordered_map(
    size_type _Number_of_buckets = 8,
    const hasher& _Hasher = hasher(),
    const key_equal& key_equality = key_equal(),
    const allocator_type& _Allocator = allocator_type());

concurrent_unordered_map(
    const allocator_type& _Allocator);

template <typename _Iterator>
concurrent_unordered_map(_Iterator _Begin,
    _Iterator _End,
    size_type _Number_of_buckets = 8,
    const hasher& _Hasher = hasher(),
    const key_equal& key_equality = key_equal(),
    const allocator_type& _Allocator = allocator_type());

concurrent_unordered_map(
    const concurrent_unordered_map& _Umap);

concurrent_unordered_map(
    const concurrent_unordered_map& _Umap,
    const allocator_type& _Allocator);

concurrent_unordered_map(
    concurrent_unordered_map&& _Umap);
```

### Parameters

*_Iterator*<br/>
The type of the input iterator.

*_Number_of_buckets*<br/>
The initial number of buckets for this unordered map.

*_Hasher*<br/>
The hash function for this unordered map.

*key_equality*<br/>
The equality comparison function for this unordered map.

*_Allocator*<br/>
The allocator for this unordered map.

*_Begin*<br/>
The position of the first element in the range of elements to be copied.

*_End*<br/>
The position of the first element beyond the range of elements to be copied.

*_Umap*<br/>
The source `concurrent_unordered_map` object to copy or move elements from.

### Remarks

All constructors store an allocator object `_Allocator` and initialize the unordered map.

The first constructor specifies an empty initial map and explicitly specifies the number of buckets, hash function, equality function and allocator type to be used.

The second constructor specifies an allocator for the unordered map.

The third constructor specifies values supplied by the iterator range [ `_Begin`, `_End`).

The fourth and fifth constructors specify a copy of the concurrent unordered map `_Umap`.

The last constructor specifies a move of the concurrent unordered map `_Umap`.

## <a name="count"></a> count

Counts the number of elements matching a specified key. This function is concurrency safe.

```cpp
size_type count(const key_type& KVal) const;
```

### Parameters

*KVal*<br/>
The key to search for.

### Return Value

The number of times number of times the key appears in the container.

## <a name="empty"></a> empty

Tests whether no elements are present. This method is concurrency safe.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the concurrent container is empty, **`false`** otherwise.

### Remarks

In the presence of concurrent inserts, whether or not the concurrent container is empty may change immediately after calling this function, before the return value is even read.

## <a name="end"></a> end

Returns an iterator pointing to the location succeeding the last element in the concurrent container. This method is concurrency safe.

```cpp
iterator end();

const_iterator end() const;
```

### Return Value

An iterator to the location succeeding the last element in the concurrent container.

## <a name="equal_range"></a> equal_range

Finds a range that matches a specified key. This function is concurrency safe.

```cpp
std::pair<iterator,
    iterator> equal_range(
    const key_type& KVal);

std::pair<const_iterator,
    const_iterator> equal_range(
    const key_type& KVal) const;
```

### Parameters

*KVal*<br/>
The key value to search for.

### Return Value

A [pair](../../../standard-library/pair-structure.md) where the first element is an iterator to the beginning and the second element is an iterator to the end of the range.

### Remarks

It is possible for concurrent inserts to cause additional keys to be inserted after the begin iterator and before the end iterator.

## <a name="find"></a> find

Finds an element that matches a specified key. This function is concurrency safe.

```cpp
iterator find(const key_type& KVal);

const_iterator find(const key_type& KVal) const;
```

### Parameters

*KVal*<br/>
The key value to search for.

### Return Value

An iterator pointing to the location of the first element that matched the key provided, or the iterator `end()` if no such element exists.

## <a name="get_allocator"></a> get_allocator

Returns the stored allocator object for this concurrent container. This method is concurrency safe.

```cpp
allocator_type get_allocator() const;
```

### Return Value

The stored allocator object for this concurrent container.

## <a name="hash_function"></a> hash_function

Gets the stored hash function object.

```cpp
hasher hash_function() const;
```

### Return Value

The stored hash function object.

## <a name="insert"></a> insert

Adds elements to the `concurrent_unordered_map` object.

```cpp
std::pair<iterator,
    bool> insert(
    const value_type& value);

iterator insert(
    const_iterator _Where,
    const value_type& value);

template<class _Iterator>
void insert(_Iterator first,
    _Iterator last);

template<class V>
std::pair<iterator,
    bool> insert(
    V&& value);

template<class V>
typename std::enable_if<!std::is_same<const_iterator,
    typename std::remove_reference<V>::type>::value,
    iterator>::type insert(
    const_iterator _Where,
    V&& value);
```

### Parameters

*_Iterator*<br/>
The iterator type used for insertion.

*V*<br/>
The type of the value inserted into the map.

*value*<br/>
The value to be inserted.

*_Where*<br/>
The starting location to search for an insertion point.

*first*<br/>
The beginning of the range to insert.

*last*<br/>
The end of the range to insert.

### Return Value

A pair that contains an iterator and a boolean value. See the Remarks section for more details.

### Remarks

The first member function determines whether an element X exists in the sequence whose key has equivalent ordering to that of `value`. If not, it creates such an element X and initializes it with `value`. The function then determines the iterator `where` that designates X. If an insertion occurred, the function returns `std::pair(where, true)`. Otherwise, it returns `std::pair(where, false)`.

The second member function returns insert( `value`), using `_Where` as a starting place within the controlled sequence to search for the insertion point.

The third member function inserts the sequence of element values from the range [ `first`, `last`).

The last two member functions behave the same as the first two, except that `value` is used to construct the inserted value.

## <a name="key_eq"></a> key_eq

Gets the stored equality comparison function object.

```cpp
key_equal key_eq() const;
```

### Return Value

The stored equality comparison function object.

## <a name="load_factor"></a> load_factor

Computes and returns the current load factor of the container. The load factor is the number of elements in the container divided by the number of buckets.

```cpp
float load_factor() const;
```

### Return Value

The load factor for the container.

## <a name="max_load_factor"></a> max_load_factor

Gets or sets the maximum load factor of the container. The maximum load factor is the largest number of elements than can be in any bucket before the container grows its internal table.

```cpp
float max_load_factor() const;

void max_load_factor(float _Newmax);
```

### Parameters

`_Newmax`

### Return Value

The first member function returns the stored maximum load factor. The second member function does not return a value but throws an [out_of_range](../../../standard-library/out-of-range-class.md) exception if the supplied load factor is invalid..

## <a name="max_size"></a> max_size

Returns the maximum size of the concurrent container, determined by the allocator. This method is concurrency safe.

```cpp
size_type max_size() const;
```

### Return Value

The maximum number of elements that can be inserted into this concurrent container.

### Remarks

This upper bound value may actually be higher than what the container can actually hold.

## <a name="operator_at"></a> operator[]

Finds or inserts an element with the specified key. This method is concurrency-safe.

```cpp
mapped_type& operator[](const key_type& kval);

mapped_type& operator[](key_type&& kval);
```

### Parameters

*KVal*<br/>
The key value to

find or insert.

### Return Value

A reference to the data value of the found or inserted element.

### Remarks

If the argument key value is not found, then it is inserted along with the default value of the data type.

`operator[]` may be used to insert elements into a map `m` using `m[key] = DataValue;`, where `DataValue` is the value of the `mapped_type` of the element with a key value of `key`.

When using `operator[]` to insert elements, the returned reference does not indicate whether an insertion is changing a pre-existing element or creating a new one. The member functions `find` and [insert](#insert) can be used to determine whether an element with a specified key is already present before an insertion.

## <a name="operator_eq"></a> operator=

Assigns the contents of another `concurrent_unordered_map` object to this one. This method is not concurrency-safe.

```cpp
concurrent_unordered_map& operator= (const concurrent_unordered_map& _Umap);

concurrent_unordered_map& operator= (concurrent_unordered_map&& _Umap);
```

### Parameters

*_Umap*<br/>
The source `concurrent_unordered_map` object.

### Return Value

A reference to this `concurrent_unordered_map` object.

### Remarks

After erasing any existing elements a concurrent vector, `operator=` either copies or moves the contents of `_Umap` into the concurrent vector.

## <a name="rehash"></a> rehash

Rebuilds the hash table.

```cpp
void rehash(size_type _Buckets);
```

### Parameters

*_Buckets*<br/>
The desired number of buckets.

### Remarks

The member function alters the number of buckets to be at least `_Buckets` and rebuilds the hash table as needed. The number of buckets must be a power of 2. If not a power of 2, it will be rounded up to the next largest power of 2.

It throws an [out_of_range](../../../standard-library/out-of-range-class.md) exception if the number of buckets is invalid (either 0 or greater than the maximum number of buckets).

## <a name="size"></a> size

Returns the number of elements in this concurrent container. This method is concurrency safe.

```cpp
size_type size() const;
```

### Return Value

The number of items in the container.

### Remarks

In the presence of concurrent inserts, the number of elements in the concurrent container may change immediately after calling this function, before the return value is even read.

## <a name="swap"></a> swap

Swaps the contents of two `concurrent_unordered_map` objects. This method is not concurrency-safe.

```cpp
void swap(concurrent_unordered_map& _Umap);
```

### Parameters

*_Umap*<br/>
The `concurrent_unordered_map` object to swap with.

## <a name="unsafe_begin"></a> unsafe_begin

Returns an iterator to the first element in this container for a specific bucket.

```cpp
local_iterator unsafe_begin(size_type _Bucket);

const_local_iterator unsafe_begin(size_type _Bucket) const;
```

### Parameters

*_Bucket*<br/>
The bucket index.

### Return Value

An iterator pointing to the beginning of the bucket.

## <a name="unsafe_bucket"></a> unsafe_bucket

Returns the bucket index that a specific key maps to in this container.

```cpp
size_type unsafe_bucket(const key_type& KVal) const;
```

### Parameters

*KVal*<br/>
The element key being searched for.

### Return Value

The bucket index for the key in this container.

## <a name="unsafe_bucket_count"></a> unsafe_bucket_count

Returns the current number of buckets in this container.

```cpp
size_type unsafe_bucket_count() const;
```

### Return Value

The current number of buckets in this container.

## <a name="unsafe_bucket_size"></a> unsafe_bucket_size

Returns the number of items in a specific bucket of this container.

```cpp
size_type unsafe_bucket_size(size_type _Bucket);
```

### Parameters

*_Bucket*<br/>
The bucket to search for.

### Return Value

The current number of buckets in this container.

## <a name="unsafe_cbegin"></a> unsafe_cbegin

Returns an iterator to the first element in this container for a specific bucket.

```cpp
const_local_iterator unsafe_cbegin(size_type _Bucket) const;
```

### Parameters

*_Bucket*<br/>
The bucket index.

### Return Value

An iterator pointing to the beginning of the bucket.

## <a name="unsafe_cend"></a> unsafe_cend

Returns an iterator to the location succeeding the last element in a specific bucket.

```cpp
const_local_iterator unsafe_cend(size_type _Bucket) const;
```

### Parameters

*_Bucket*<br/>
The bucket index.

### Return Value

An iterator pointing to the beginning of the bucket.

## <a name="unsafe_end"></a> unsafe_end

Returns an iterator to the last element in this container for a specific bucket.

```cpp
local_iterator unsafe_end(size_type _Bucket);

const_local_iterator unsafe_end(size_type _Bucket) const;
```

### Parameters

*_Bucket*<br/>
The bucket index.

### Return Value

An iterator pointing to the end of the bucket.

## <a name="unsafe_erase"></a> unsafe_erase

Removes elements from the `concurrent_unordered_map` at specified positions. This method is not concurrency-safe.

```cpp
iterator unsafe_erase(
    const_iterator _Where);

iterator unsafe_erase(
    const_iterator _Begin,
    const_iterator _End);

size_type unsafe_erase(
    const key_type& KVal);
```

### Parameters

*_Where*<br/>
The iterator position to erase from.

*_Begin*<br/>
The position of the first element in the range of elements to be erased.

*_End*<br/>
The position of the first element beyond the range of elements to be erased.

*KVal*<br/>
The key value to erase.

### Return Value

The first two member functions return an iterator that designates the first element remaining beyond any elements removed, or `concurrent_unordered_map::end`() if no such element exists. The third member function returns the number of elements it removes.

### Remarks

The first member function removes the element of the controlled sequence pointed to by `_Where`. The second member function removes the elements in the range [ `_Begin`, `_End`).

The third member function removes the elements in the range delimited by `concurrent_unordered_map::equal_range`(KVal).

## <a name="unsafe_max_bucket_count"></a> unsafe_max_bucket_count

Returns the maximum number of buckets in this container.

```cpp
size_type unsafe_max_bucket_count() const;
```

### Return Value

The maximum number of buckets in this container.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md)
