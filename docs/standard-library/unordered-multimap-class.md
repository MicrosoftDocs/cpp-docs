---
title: "unordered_multimap Class"
description: "API overview for the C++ Standard Library container class `unordered_multimap`."
ms.date: "9/9/2020"
f1_keywords: ["unordered_map/std::unordered_multimap", "unordered_map/std::unordered_multimap::allocator_type", "unordered_map/std::unordered_multimap::const_iterator", "unordered_map/std::unordered_multimap::const_local_iterator", "unordered_map/std::unordered_multimap::const_pointer", "unordered_map/std::unordered_multimap::const_reference", "unordered_map/std::unordered_multimap::difference_type", "unordered_map/std::unordered_multimap::hasher", "unordered_map/std::unordered_multimap::iterator", "unordered_map/std::unordered_multimap::key_equal", "unordered_map/std::unordered_multimap::key_type", "unordered_map/std::unordered_multimap::local_iterator", "unordered_map/std::unordered_multimap::mapped_type", "unordered_map/std::unordered_multimap::pointer", "unordered_map/std::unordered_multimap::reference", "unordered_map/std::unordered_multimap::size_type", "unordered_map/std::unordered_multimap::value_type", "unordered_map/std::unordered_multimap::begin", "unordered_map/std::unordered_multimap::bucket", "unordered_map/std::unordered_multimap::bucket_count", "unordered_map/std::unordered_multimap::bucket_size", "unordered_map/std::unordered_multimap::cbegin", "unordered_map/std::unordered_multimap::cend", "unordered_map/std::unordered_multimap::clear",
"unordered_map/std::unordered_multimap::contains",  "unordered_map/std::unordered_multimap::count", "unordered_map/std::unordered_multimap::emplace", "unordered_map/std::unordered_multimap::emplace_hint", "unordered_map/std::unordered_multimap::empty", "unordered_map/std::unordered_multimap::end", "unordered_map/std::unordered_multimap::equal_range", "unordered_map/std::unordered_multimap::erase", "unordered_map/std::unordered_multimap::find", "unordered_map/std::unordered_multimap::get_allocator", "unordered_map/std::unordered_multimap::hash", "unordered_map/std::unordered_multimap::insert", "unordered_map/std::unordered_multimap::key_eq", "unordered_map/std::unordered_multimap::load_factor", "unordered_map/std::unordered_multimap::max_bucket_count", "unordered_map/std::unordered_multimap::max_load_factor", "unordered_map/std::unordered_multimap::max_size", "unordered_map/std::unordered_multimap::rehash", "unordered_map/std::unordered_multimap::size", "unordered_map/std::unordered_multimap::swap", "unordered_map/std::unordered_multimap::unordered_multimap", "unordered_map/std::unordered_multimap::operator=", "unordered_map/std::unordered_multimap::hash_function"]
helpviewer_keywords: ["std::unordered_multimap", "std::unordered_multimap::allocator_type", "std::unordered_multimap::const_iterator", "std::unordered_multimap::const_local_iterator", "std::unordered_multimap::const_pointer", "std::unordered_multimap::const_reference", "std::unordered_multimap::difference_type", "std::unordered_multimap::hasher", "std::unordered_multimap::iterator", "std::unordered_multimap::key_equal", "std::unordered_multimap::key_type", "std::unordered_multimap::local_iterator", "std::unordered_multimap::mapped_type", "std::unordered_multimap::pointer", "std::unordered_multimap::reference", "std::unordered_multimap::size_type", "std::unordered_multimap::value_type", "std::unordered_multimap::begin", "std::unordered_multimap::bucket", "std::unordered_multimap::bucket_count", "std::unordered_multimap::bucket_size", "std::unordered_multimap::cbegin", "std::unordered_multimap::cend", "std::unordered_multimap::clear",
"std::unordered_multimap::contains",
"std::unordered_multimap::count", "std::unordered_multimap::emplace", "std::unordered_multimap::emplace_hint", "std::unordered_multimap::empty", "std::unordered_multimap::end", "std::unordered_multimap::equal_range", "std::unordered_multimap::erase", "std::unordered_multimap::find", "std::unordered_multimap::get_allocator", "std::unordered_multimap::hash", "std::unordered_multimap::insert", "std::unordered_multimap::key_eq", "std::unordered_multimap::load_factor", "std::unordered_multimap::max_bucket_count", "std::unordered_multimap::max_load_factor", "std::unordered_multimap::max_size", "std::unordered_multimap::rehash", "std::unordered_multimap::size", "std::unordered_multimap::swap", "std::unordered_multimap::unordered_multimap", "std::unordered_multimap::operator=", "std::unordered_multimap::allocator_type", "std::unordered_multimap::const_iterator", "std::unordered_multimap::const_local_iterator", "std::unordered_multimap::const_pointer", "std::unordered_multimap::const_reference", "std::unordered_multimap::difference_type", "std::unordered_multimap::hasher", "std::unordered_multimap::iterator", "std::unordered_multimap::key_equal", "std::unordered_multimap::key_type", "std::unordered_multimap::local_iterator", "std::unordered_multimap::mapped_type", "std::unordered_multimap::pointer", "std::unordered_multimap::reference", "std::unordered_multimap::size_type", "std::unordered_multimap::value_type", "std::unordered_multimap::begin", "std::unordered_multimap::bucket", "std::unordered_multimap::bucket_count", "std::unordered_multimap::bucket_size", "std::unordered_multimap::cbegin", "std::unordered_multimap::cend", "std::unordered_multimap::clear", "std::unordered_multimap::count", "std::unordered_multimap::emplace", "std::unordered_multimap::emplace_hint", "std::unordered_multimap::empty", "std::unordered_multimap::end", "std::unordered_multimap::equal_range", "std::unordered_multimap::erase", "std::unordered_multimap::find", "std::unordered_multimap::get_allocator", "std::unordered_multimap::hash_function", "std::unordered_multimap::insert", "std::unordered_multimap::key_eq", "std::unordered_multimap::load_factor", "std::unordered_multimap::max_bucket_count", "std::unordered_multimap::max_load_factor", "std::unordered_multimap::max_size", "std::unordered_multimap::rehash", "std::unordered_multimap::size", "std::unordered_multimap::swap"]
ms.assetid: 4baead6c-5870-4b85-940f-a47d6b891c27
---
# unordered_multimap Class

The class template describes an object that controls a varying-length sequence of elements of type `std::pair<const Key, Ty>`. The sequence is weakly ordered by a hash function, which partitions the sequence into an ordered set of subsequences called buckets. Within each bucket a comparison function determines whether any pair of elements has equivalent ordering. Each element stores two objects, a sort key and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations that can be independent of the number of elements in the sequence (constant time), at least when all buckets are of roughly equal length. In the worst case, when all of the elements are in one bucket, the number of operations is proportional to the number of elements in the sequence (linear time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.

## Syntax

```cpp
template <class Key,
    class Ty,
    class Hash = std::hash<Key>,
    class Pred = std::equal_to<Key>,
    class Alloc = std::allocator<Key>>
class unordered_multimap;
```

### Parameters

*Key*\
The key type.

*Ty*\
The mapped type.

*Hash*\
The hash function object type.

*Pred*\
The equality comparison function object type.

*Alloc*\
The allocator class.

## Members

|Type Definition|Description|
|-|-|
|[allocator_type](#allocator_type)|The type of an allocator for managing storage.|
|[const_iterator](#const_iterator)|The type of a constant iterator for the controlled sequence.|
|[const_local_iterator](#const_local_iterator)|The type of a constant bucket iterator for the controlled sequence.|
|[const_pointer](#const_pointer)|The type of a constant pointer to an element.|
|[const_reference](#const_reference)|The type of a constant reference to an element.|
|[difference_type](#difference_type)|The type of a signed distance between two elements.|
|[hasher](#hasher)|The type of the hash function.|
|[iterator](#iterator)|The type of an iterator for the controlled sequence.|
|[key_equal](#key_equal)|The type of the comparison function.|
|[key_type](#key_type)|The type of an ordering key.|
|[local_iterator](#local_iterator)|The type of a bucket iterator for the controlled sequence.|
|[mapped_type](#mapped_type)|The type of a mapped value associated with each key.|
|[pointer](#pointer)|The type of a pointer to an element.|
|[reference](#reference)|The type of a reference to an element.|
|[size_type](#size_type)|The type of an unsigned distance between two elements.|
|[value_type](#value_type)|The type of an element.|

|Member Function|Description|
|-|-|
|[begin](#begin)|Designates the beginning of the controlled sequence.|
|[bucket](#bucket)|Gets the bucket number for a key value.|
|[bucket_count](#bucket_count)|Gets the number of buckets.|
|[bucket_size](#bucket_size)|Gets the size of a bucket.|
|[cbegin](#cbegin)|Designates the beginning of the controlled sequence.|
|[cend](#cend)|Designates the end of the controlled sequence.|
|[clear](#clear)|Removes all elements.|
|[contains](#contains)<sup>C++20</sup>|Checks if there is an element with the specified key in the `unordered_multimap`.|
|[count](#count)|Finds the number of elements matching a specified key.|
|[emplace](#emplace)|Adds an element constructed in place.|
|[emplace_hint](#emplace_hint)|Adds an element constructed in place, with hint.|
|[empty](#empty)|Tests whether no elements are present.|
|[end](#end)|Designates the end of the controlled sequence.|
|[equal_range](#equal_range)|Finds range that matches a specified key.|
|[erase](#erase)|Removes elements at specified positions.|
|[find](#find)|Finds an element that matches a specified key.|
|[get_allocator](#get_allocator)|Gets the stored allocator object.|
|[hash_function](#hash)|Gets the stored hash function object.|
|[insert](#insert)|Adds elements.|
|[key_eq](#key_eq)|Gets the stored comparison function object.|
|[load_factor](#load_factor)|Counts the average elements per bucket.|
|[max_bucket_count](#max_bucket_count)|Gets the maximum number of buckets.|
|[max_load_factor](#max_load_factor)|Gets or sets the maximum elements per bucket.|
|[max_size](#max_size)|Gets the maximum size of the controlled sequence.|
|[rehash](#rehash)|Rebuilds the hash table.|
|[size](#size)|Counts the number of elements.|
|[swap](#swap)|Swaps the contents of two containers.|
|[unordered_multimap](#unordered_multimap)|Constructs a container object.|

|Operator|Description|
|-|-|
|[unordered_multimap::operator=](#op_eq)|Copies a hash table.|

## Remarks

The object orders the sequence it controls by calling two stored objects, a comparison function object of type [unordered_multimap::key_equal](#key_equal) and a hash function object of type [unordered_multimap::hasher](#hasher). You access the first stored object by calling the member function [unordered_multimap::key_eq](#key_eq)`()`; and you access the second stored object by calling the member function [unordered_multimap::hash_function](#hash)`()`. Specifically, for all values `X` and `Y` of type `Key`, the call `key_eq()(X, Y)` returns true only if the two argument values have equivalent ordering; the call `hash_function()(keyval)` yields a distribution of values of type `size_t`. Unlike class template [unordered_map Class](../standard-library/unordered-map-class.md), an object of type `unordered_multimap` does not ensure that `key_eq()(X, Y)` is always false for any two elements of the controlled sequence. (Keys need not be unique.)

The object also stores a maximum load factor, which specifies the maximum desired average number of elements per bucket. If inserting an element causes [unordered_multimap::load_factor](#load_factor)`()` to exceed the maximum load factor, the container increases the number of buckets and rebuilds the hash table as needed.

The actual order of elements in the controlled sequence depends on the hash function, the comparison function, the order of insertion, the maximum load factor, and the current number of buckets. You cannot in general predict the order of elements in the controlled sequence. You can always be assured, however, that any subset of elements that have equivalent ordering are adjacent in the controlled sequence.

The object allocates and frees storage for the sequence it controls through a stored allocator object of type [unordered_multimap::allocator_type](#allocator_type). Such an allocator object must have the same external interface as an object of type `allocator`. Note that the stored allocator object is not copied when the container object is assigned.

## Requirements

**Header:** \<unordered_map>

**Namespace:** std

## <a name="allocator_type"></a> unordered_multimap::allocator_type

The type of an allocator for managing storage.

```cpp
typedef Alloc allocator_type;
```

### Remarks

The type is a synonym for the template parameter `Alloc`.

### Example

```cpp
// std__unordered_map__unordered_multimap_allocator_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
    {
    Mymap c1;

    Mymap::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
    }
```

```Output
al == std::allocator() is true
```

## <a name="begin"></a> unordered_multimap::begin

Designates the beginning of the controlled sequence or a bucket.

```cpp
iterator begin();

const_iterator begin() const;

local_iterator begin(size_type nbucket);

const_local_iterator begin(size_type nbucket) const;
```

### Parameters

*nbucket*\
The bucket number.

### Remarks

The first two member functions return a forward iterator that points at the first element of the sequence (or just beyond the end of an empty sequence). The last two member functions return a forward iterator that points at the first element of bucket *nbucket* (or just beyond the end of an empty bucket).

### Example

```cpp
// std__unordered_map__unordered_multimap_begin.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect first two items " [c 3] [b 2]"
    Mymap::iterator it2 = c1.begin();
    std::cout << " [" << it2->first << ", " << it2->second << "]";
    ++it2;
    std::cout << " [" << it2->first << ", " << it2->second << "]";
    std::cout << std::endl;

// inspect bucket containing 'a'
    Mymap::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[c, 3] [b, 2]
[a, 1]
```

## <a name="bucket"></a> unordered_multimap::bucket

Gets the bucket number for a key value.

```cpp
size_type bucket(const Key& keyval) const;
```

### Parameters

*keyval*\
The key value to map.

### Remarks

The member function returns the bucket number currently corresponding to the key value *keyval*.

### Example

```cpp
// std__unordered_map__unordered_multimap_bucket.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// display buckets for keys
    Mymap::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
        << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="bucket_count"></a> unordered_multimap::bucket_count

Gets the number of buckets.

```cpp
size_type bucket_count() const;
```

### Remarks

The member function returns the current number of buckets.

### Example

```cpp
// std__unordered_map__unordered_multimap_bucket_count.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_bucket_count() == 128
max_load_factor() == 0.1
```

## <a name="bucket_size"></a> unordered_multimap::bucket_size

Gets the size of a bucket

```cpp
size_type bucket_size(size_type nbucket) const;
```

### Parameters

*nbucket*\
The bucket number.

### Remarks

The member functions returns the size of bucket number *nbucket*.

### Example

```cpp
// std__unordered_map__unordered_multimap_bucket_size.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// display buckets for keys
    Mymap::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
        << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="cbegin"></a> unordered_multimap::cbegin

Returns a **`const`** iterator that addresses the first element in the range.

```cpp
const_iterator cbegin() const;
```

### Return Value

A **`const`** forward-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).

### Remarks

With the return value of `cbegin`, the elements in the range cannot be modified.

You can use this member function in place of the `begin()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **`const`**) container of any kind that supports `begin()` and `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a> unordered_multimap::cend

Returns a **`const`** iterator that addresses the location just beyond the last element in a range.

```cpp
const_iterator cend() const;
```

### Return Value

A **`const`** forward-access iterator that points just beyond the end of the range.

### Remarks

`cend` is used to test whether an iterator has passed the end of its range.

You can use this member function in place of the `end()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **`const`**) container of any kind that supports `end()` and `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

The value returned by `cend` should not be dereferenced.

## <a name="clear"></a> unordered_multimap::clear

Removes all elements.

```cpp
void clear();
```

### Remarks

The member function calls [unordered_multimap::erase](#erase)`(` [unordered_multimap::begin](#begin)`(),` [unordered_multimap::end](#end)`())`.

### Example

```cpp
// std__unordered_map__unordered_multimap_clear.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert(Mymap::value_type('d', 4));
    c1.insert(Mymap::value_type('e', 5));

// display contents " [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
size == 0
empty() == true

[e, 5] [d, 4]
size == 2
empty() == false
```

## <a name="const_iterator"></a> unordered_multimap::const_iterator

The type of a constant iterator for the controlled sequence.

```cpp
typedef T1 const_iterator;
```

### Remarks

The type describes an object that can serve as a constant forward iterator for the controlled sequence. It is described here as a synonym for the implementation-defined type `T1`.

### Example

```cpp
// std__unordered_map__unordered_multimap_const_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="const_local_iterator"></a> unordered_multimap::const_local_iterator

The type of a constant bucket iterator for the controlled sequence.

```cpp
typedef T5 const_local_iterator;
```

### Remarks

The type describes an object that can serve as a constant forward iterator for a bucket. It is described here as a synonym for the implementation-defined type `T5`.

### Example

```cpp
// std__unordered_map__unordered_multimap_const_local_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect bucket containing 'a'
    Mymap::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[a, 1]
```

## <a name="const_pointer"></a> unordered_multimap::const_pointer

The type of a constant pointer to an element.

```cpp
typedef Alloc::const_pointer const_pointer;
```

### Remarks

The type describes an object that can serve as a constant pointer to an element of the controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_const_pointer.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Mymap::const_pointer p = &*it;
        std::cout << " [" << p->first << ", " << p->second << "]";
        }
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="const_reference"></a> unordered_multimap::const_reference

The type of a constant reference to an element.

```cpp
typedef Alloc::const_reference const_reference;
```

### Remarks

The type describes an object that can serve as a constant reference to an element of the controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_const_reference.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Mymap::const_reference ref = *it;
        std::cout << " [" << ref.first << ", " << ref.second << "]";
        }
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="contains"></a> unordered_multimap::contains

Checks if there is an element with the specified key in the `unordered_multimap`.

```cpp
bool contains(const Key& key) const;
template<class K> bool contains(const K& key) const;
```

### Parameters

*K*\
The type of the key.

*key*\
The element's key value to look for.

### Return Value

`true` if the element is found in the container; `false` otherwise.

### Remarks

`contains()` is new in C++20. To use it, specify the [/std:c++20](../build/reference/std-specify-language-standard-version.md) or later compiler option.

`template<class K> bool contains(const K& key) const` only participates in overload resolution if `key_compare` is transparent.

### Example

```cpp
// Requires /std:c++20 or /std:c++latest
#include <unordered_map>
#include <iostream>

int main()
{
    std::unordered_multimap<int, bool> theUnorderedMultimap = {{0, false}, {1,true}};

    std::cout << std::boolalpha; // so booleans show as 'true' or 'false'
    std::cout << theUnorderedMultimap.contains(1) << '\n';
    std::cout << theUnorderedMultimap.contains(2) << '\n';

    return 0;
}
```

```Output
true
false
```

## <a name="count"></a> unordered_multimap::count

Finds the number of elements matching a specified key.

```cpp
size_type count(const Key& keyval) const;
```

### Parameters

*keyval*\
Key value to search for.

### Remarks

The member function returns the number of elements in the range delimited by [unordered_multimap::equal_range](#equal_range)`(keyval)`.

### Example

```cpp
// std__unordered_map__unordered_multimap_count.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "count('A') == " << c1.count('A') << std::endl;
    std::cout << "count('b') == " << c1.count('b') << std::endl;
    std::cout << "count('C') == " << c1.count('C') << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
count('A') == 0
count('b') == 1
count('C') == 0
```

## <a name="difference_type"></a> unordered_multimap::difference_type

The type of a signed distance between two elements.

```cpp
typedef T3 difference_type;
```

### Remarks

The signed integer type describes an object that can represent the difference between the addresses of any two elements in the controlled sequence. It is described here as a synonym for the implementation-defined type `T3`.

### Example

```cpp
// std__unordered_map__unordered_multimap_difference_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// compute positive difference
    Mymap::difference_type diff = 0;
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        ++diff;
    std::cout << "end()-begin() == " << diff << std::endl;

// compute negative difference
    diff = 0;
    for (Mymap::const_iterator it = c1.end();
        it != c1.begin(); --it)
        --diff;
    std::cout << "begin()-end() == " << diff << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
end()-begin() == 3
begin()-end() == -3
```

## <a name="emplace"></a> unordered_multimap::emplace

Inserts an element constructed in place (no copy or move operations are performed), with a placement hint.

```cpp
template <class... Args>
iterator emplace(Args&&... args);
```

### Parameters

*args*\
The arguments forwarded to construct an element to be inserted into the `unordered_multimap`.

### Return Value

An iterator to the newly inserted element.

### Remarks

No references to container elements are invalidated by this function, but it may invalidate all iterators to the container.

The [value_type](../standard-library/map-class.md#value_type) of an element is a pair, so that the value of an element will be an ordered pair with the first component equal to the key value and the second component equal to the data value of the element.

During the insertion, if an exception is thrown but does not occur in the container's hash function, the container is not modified. If the exception is thrown in the hash function, the result is undefined.

For a code example, see [multimap::emplace](../standard-library/multimap-class.md#emplace).

## <a name="emplace_hint"></a> unordered_multimap::emplace_hint

Inserts an element constructed in place (no copy or move operations are performed), with a placement hint.

```cpp
template <class... Args>
iterator emplace_hint(
    const_iterator where,
    Args&&... args);
```

### Parameters

*args*\
The arguments forwarded to construct an element to be inserted into the unordered.

*where*\
A hint regarding the place to start searching for the correct point of insertion.

### Return Value

An iterator to the newly inserted element.

### Remarks

No references to container elements are invalidated by this function, but it may invalidate all iterators to the container.

During the insertion, if an exception is thrown but does not occur in the container's hash function, the container is not modified. If the exception is thrown in the hash function, the result is undefined.

The [value_type](../standard-library/map-class.md#value_type) of an element is a pair, so that the value of an element will be an ordered pair with the first component equal to the key value and the second component equal to the data value of the element.

For a code example, see [map::emplace_hint](../standard-library/map-class.md#emplace_hint).

## <a name="empty"></a> unordered_multimap::empty

Tests whether no elements are present.

```cpp
bool empty() const;
```

### Remarks

The member function returns true for an empty controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_empty.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert(Mymap::value_type('d', 4));
    c1.insert(Mymap::value_type('e', 5));

// display contents " [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
size == 0
empty() == true

[e, 5] [d, 4]
size == 2
empty() == false
```

## <a name="end"></a> unordered_multimap::end

Designates the end of the controlled sequence.

```cpp
iterator end();

const_iterator end() const;

local_iterator end(size_type nbucket);

const_local_iterator end(size_type nbucket) const;
```

### Parameters

*nbucket*\
The bucket number.

### Remarks

The first two member functions return a forward iterator that points just beyond the end of the sequence. The last two member functions return a forward iterator that points just beyond the end of bucket *nbucket*.

### Example

```cpp
// std__unordered_map__unordered_multimap_end.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect last two items " [a 1] [b 2]"
    Mymap::iterator it2 = c1.end();
    --it2;
    std::cout << " [" << it2->first << ", " << it2->second << "]";
    --it2;
    std::cout << " [" << it2->first << ", " << it2->second << "]";
    std::cout << std::endl;

// inspect bucket containing 'a'
    Mymap::const_local_iterator lit = c1.end(c1.bucket('a'));
    --lit;
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[a, 1] [b, 2]
[a, 1]
```

## <a name="equal_range"></a> unordered_multimap::equal_range

Finds range that matches a specified key.

```cpp
std::pair<iterator, iterator>
    equal_range(const Key& keyval);

std::pair<const_iterator, const_iterator>
    equal_range(const Key& keyval) const;
```

### Parameters

*keyval*\
Key value to search for.

### Remarks

The member function returns a pair of iterators `X` such that `[X.first, X.second)` delimits just those elements of the controlled sequence that have equivalent ordering with *keyval*. If no such elements exist, both iterators are `end()`.

### Example

```cpp
// std__unordered_map__unordered_multimap_equal_range.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// display results of failed search
    std::pair<Mymap::iterator, Mymap::iterator> pair1 =
        c1.equal_range('x');
    std::cout << "equal_range('x'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << " [" << pair1.first->first
            << ", " << pair1.first->second << "]";
    std::cout << std::endl;

// display results of successful search
    pair1 = c1.equal_range('b');
    std::cout << "equal_range('b'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << " [" << pair1.first->first
            << ", " << pair1.first->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
equal_range('x'):
equal_range('b'): [b, 2]
```

## <a name="erase"></a> unordered_multimap::erase

Removes an element or a range of elements in a unordered_multimap from specified positions or removes elements that match a specified key.

```cpp
iterator erase(
    const_iterator Where);

iterator erase(
    const_iterator First,
    const_iterator Last);

size_type erase(
    const key_type& Key);
```

### Parameters

*Where*\
Position of the element to be removed.

*First*\
Position of the first element to be removed.

*Last*\
Position just beyond the last element to be removed.

*Key*\
The key value of the elements to be removed.

### Return Value

For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or an element that is the end of the map if no such element exists.

For the third member function, returns the number of elements that have been removed from the unordered_multimap.

### Remarks

For a code example, see [map::erase](../standard-library/map-class.md#erase).

## <a name="find"></a> unordered_multimap::find

Finds an element that matches a specified key.

```cpp
const_iterator find(const Key& keyval) const;
```

### Parameters

*keyval*\
Key value to search for.

### Remarks

The member function returns [unordered_multimap::equal_range](#equal_range)`(keyval).first`.

### Example

```cpp
// std__unordered_map__unordered_multimap_find.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// try to find and fail
    std::cout << "find('A') == "
        << std::boolalpha << (c1.find('A') != c1.end()) << std::endl;

// try to find and succeed
    Mymap::iterator it = c1.find('b');
    std::cout << "find('b') == "
        << std::boolalpha << (it != c1.end())
        << ": [" << it->first << ", " << it->second << "]" << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
find('A') == false
find('b') == true: [b, 2]
```

## <a name="get_allocator"></a> unordered_multimap::get_allocator

Gets the stored allocator object.

```cpp
Alloc get_allocator() const;
```

### Remarks

The member function returns the stored allocator object.

### Example

```cpp
// std__unordered_map__unordered_multimap_get_allocator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
    {
    Mymap c1;

    Mymap::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
        << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
    }
```

```Output
al == std::allocator() is true
```

## <a name="hash"></a> unordered_multimap::hash_function

Gets the stored hash function object.

```cpp
Hash hash_function() const;
```

### Remarks

The member function returns the stored hash function object.

### Example

```cpp
// std__unordered_map__unordered_multimap_hash_function.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    Mymap::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
    }
```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="hasher"></a> unordered_multimap::hasher

The type of the hash function.

```cpp
typedef Hash hasher;
```

### Remarks

The type is a synonym for the template parameter `Hash`.

### Example

```cpp
// std__unordered_map__unordered_multimap_hasher.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    Mymap::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
    }
```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="insert"></a> unordered_multimap::insert

Inserts an element or a range of elements into an unordered_multimap.

```cpp
// (1) single element
pair<iterator, bool> insert(
    const value_type& Val);

// (2) single element, perfect forwarded
template <class ValTy>
pair<iterator, bool>
insert(
    ValTy&& Val);

// (3) single element with hint
iterator insert(
    const_iterator Where,
    const value_type& Val);

// (4) single element, perfect forwarded, with hint
template <class ValTy>
iterator insert(
    const_iterator Where,
    ValTy&& Val);

// (5) range
template <class InputIterator>
void insert(
    InputIterator First,
    InputIterator Last);

// (6) initializer list
void insert(
    initializer_list<value_type>
IList);
```

### Parameters

*Val*\
The value of an element to be inserted into the unordered_multimap.

*Where*\
The place to start searching for the correct point of insertion.

*ValTy*\
Template parameter that specifies the argument type that the unordered_multimap can use to construct an element of [value_type](../standard-library/map-class.md#value_type), and perfect-forwards *Val* as an argument.

*First*\
The position of the first element to be copied.

*Last*\
The position just beyond the last element to be copied.

*InputIterator*\
Template function argument that meets the requirements of an [input iterator](../standard-library/input-iterator-tag-struct.md) that points to elements of a type that can be used to construct [value_type](../standard-library/map-class.md#value_type) objects.

*IList*\
The [initializer_list](../standard-library/initializer-list.md) from which to copy the elements.

### Return Value

The single-element-insert member functions, (1) and (2), return an iterator to the position where the new element was inserted into the unordered_multimap.

The single-element-with-hint member functions, (3) and (4), return an iterator that points to the position where the new element was inserted into the unordered_multimap.

### Remarks

No pointers or references are invalidated by this function, but it may invalidate all iterators to the container.

During the insertion of just one element, if an exception is thrown but does not occur in the container's hash function, the container's state is not modified. If the exception is thrown in the hash function, the result is undefined. During the insertion of multiple elements, if an exception is thrown, the container is left in an unspecified but valid state.

The [value_type](../standard-library/map-class.md#value_type) of a container is a typedef that belongs to the container, and for map, `map<K, V>::value_type` is `pair<const K, V>`. The value of an element is an ordered pair in which the first component is equal to the key value and the second component is equal to the data value of the element.

The range member function (5) inserts the sequence of element values into an unordered_multimap that corresponds to each element addressed by an iterator in the range `[First, Last)`; therefore, *Last* does not get inserted. The container member function `end()` refers to the position just after the last element in the container—for example, the statement `m.insert(v.begin(), v.end());` inserts all elements of `v` into `m`.

The initializer list member function (6) uses an [initializer_list](../standard-library/initializer-list.md) to copy elements into the unordered_multimap.

For insertion of an element constructed in place—that is, no copy or move operations are performed—see [unordered_multimap::emplace](#emplace) and [unordered_multimap::emplace_hint](#emplace_hint).

For a code example, see [multimap::insert](../standard-library/multiset-class.md#insert).

## <a name="iterator"></a> unordered_multimap::iterator

The type of an iterator for the controlled sequence.

```cpp
typedef T0 iterator;
```

### Remarks

The type describes an object that can serve as a forward iterator for the controlled sequence. It is described here as a synonym for the implementation-defined type `T0`.

### Example

```cpp
// std__unordered_map__unordered_multimap_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="key_eq"></a> unordered_multimap::key_eq

Gets the stored comparison function object.

```cpp
Pred key_eq() const;
```

### Remarks

The member function returns the stored comparison function object.

### Example

```cpp
// std__unordered_map__unordered_multimap_key_eq.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    Mymap::key_equal cmpfn = c1.key_eq();
    std::cout << "cmpfn('a', 'a') == "
        << std::boolalpha << cmpfn('a', 'a') << std::endl;
    std::cout << "cmpfn('a', 'b') == "
        << std::boolalpha << cmpfn('a', 'b') << std::endl;

    return (0);
    }
```

```Output
cmpfn('a', 'a') == true
cmpfn('a', 'b') == false
```

## <a name="key_equal"></a> unordered_multimap::key_equal

The type of the comparison function.

```cpp
typedef Pred key_equal;
```

### Remarks

The type is a synonym for the template parameter `Pred`.

### Example

```cpp
// std__unordered_map__unordered_multimap_key_equal.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    Mymap::key_equal cmpfn = c1.key_eq();
    std::cout << "cmpfn('a', 'a') == "
        << std::boolalpha << cmpfn('a', 'a') << std::endl;
    std::cout << "cmpfn('a', 'b') == "
        << std::boolalpha << cmpfn('a', 'b') << std::endl;

    return (0);
    }
```

```Output
cmpfn('a', 'a') == true
cmpfn('a', 'b') == false
```

## <a name="key_type"></a> unordered_multimap::key_type

The type of an ordering key.

```cpp
typedef Key key_type;
```

### Remarks

The type is a synonym for the template parameter `Key`.

### Example

```cpp
// std__unordered_map__unordered_multimap_key_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// add a value and reinspect
    Mymap::key_type key = 'd';
    Mymap::mapped_type mapped = 4;
    Mymap::value_type val = Mymap::value_type(key, mapped);
    c1.insert(val);

    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[d, 4] [c, 3] [b, 2] [a, 1]
```

## <a name="load_factor"></a> unordered_multimap::load_factor

Counts the average elements per bucket.

```cpp
float load_factor() const;
```

### Remarks

The member function returns `(float)`[unordered_multimap::size](#size)`() / (float)`[unordered_multimap::bucket_count](#bucket_count)`()`, the average number of elements per bucket.

### Example

```cpp
// std__unordered_map__unordered_multimap_load_factor.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
    }
```

## <a name="local_iterator"></a> unordered_multimap::local_iterator

The type of a bucket iterator.

```cpp
typedef T4 local_iterator;
```

### Remarks

The type describes an object that can serve as a forward iterator for a bucket. It is described here as a synonym for the implementation-defined type `T4`.

### Example

```cpp
// std__unordered_map__unordered_multimap_local_iterator.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect bucket containing 'a'
    Mymap::local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << " [" << lit->first << ", " << lit->second << "]";

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[a, 1]
```

## <a name="mapped_type"></a> unordered_multimap::mapped_type

The type of a mapped value associated with each key.

```cpp
typedef Ty mapped_type;
```

### Remarks

The type is a synonym for the template parameter `Ty`.

### Example

```cpp
// std__unordered_map__unordered_multimap_mapped_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// add a value and reinspect
    Mymap::key_type key = 'd';
    Mymap::mapped_type mapped = 4;
    Mymap::value_type val = Mymap::value_type(key, mapped);
    c1.insert(val);

    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[d, 4] [c, 3] [b, 2] [a, 1]
```

## <a name="max_bucket_count"></a> unordered_multimap::max_bucket_count

Gets the maximum number of buckets.

```cpp
size_type max_bucket_count() const;
```

### Remarks

The member function returns the maximum number of buckets currently permitted.

### Example

```cpp
// std__unordered_map__unordered_multimap_max_bucket_count.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_bucket_count() == 128
max_load_factor() == 0.1
```

## <a name="max_load_factor"></a> unordered_multimap::max_load_factor

Gets or sets the maximum elements per bucket.

```cpp
float max_load_factor() const;

void max_load_factor(float factor);
```

### Parameters

*factor*\
The new maximum load factor.

### Remarks

The first member function returns the stored maximum load factor. The second member function replaces the stored maximum load factor with *factor*.

### Example

```cpp
// std__unordered_map__unordered_multimap_max_load_factor.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_bucket_count() == "
        << c1.max_bucket_count() << std::endl;
    std::cout << "max_load_factor() == "
        << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_bucket_count() == 8
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_bucket_count() == 128
max_load_factor() == 0.1
```

## <a name="max_size"></a> unordered_multimap::max_size

Gets the maximum size of the controlled sequence.

```cpp
size_type max_size() const;
```

### Remarks

The member function returns the length of the longest sequence that the object can control.

### Example

```cpp
// std__unordered_map__unordered_multimap_max_size.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    std::cout << "max_size() == " << c1.max_size() << std::endl;

    return (0);
    }
```

```Output
max_size() == 536870911
```

## <a name="op_eq"></a> unordered_multimap::operator=

Copies a hash table.

```cpp
unordered_multimap& operator=(const unordered_multimap& right);

unordered_multimap& operator=(unordered_multimap&& right);
```

### Parameters

*right*\
The `unordered_multimap` being copied into the `unordered_multimap`.

### Remarks

After erasing any existing elements in a unordered_multimap, `operator=` either copies or moves the contents of *right* into the unordered_multimap.

### Example

```cpp
// unordered_multimap_operator_as.cpp
// compile with: /EHsc
#include <unordered_multimap>
#include <iostream>

int main( )
   {
   using namespace std;
   unordered_multimap<int, int> v1, v2, v3;
   unordered_multimap<int, int>::iterator iter;

   v1.insert(pair<int, int>(1, 10));

   cout << "v1 = " ;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << iter->second << " ";
   cout << endl;

   v2 = v1;
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter->second << " ";
   cout << endl;

// move v1 into v2
   v2.clear();
   v2 = move(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter->second << " ";
   cout << endl;
   }
```

## <a name="pointer"></a> unordered_multimap::pointer

The type of a pointer to an element.

```cpp
typedef Alloc::pointer pointer;
```

### Remarks

The type describes an object that can serve as a pointer to an element of the controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_pointer.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Mymap::pointer p = &*it;
        std::cout << " [" << p->first << ", " << p->second << "]";
        }
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="reference"></a> unordered_multimap::reference

The type of a reference to an element.

```cpp
typedef Alloc::reference reference;
```

### Remarks

The type describes an object that can serve as a reference to an element of the controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_reference.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::iterator it = c1.begin();
        it != c1.end(); ++it)
        {
        Mymap::reference ref = *it;
        std::cout << " [" << ref.first << ", " << ref.second << "]";
        }
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
```

## <a name="rehash"></a> unordered_multimap::rehash

Rebuilds the hash table.

```cpp
void rehash(size_type nbuckets);
```

### Parameters

*nbuckets*\
The requested number of buckets.

### Remarks

The member function alters the number of buckets to be at least *nbuckets* and rebuilds the hash table as needed.

### Example

```cpp
// std__unordered_map__unordered_multimap_rehash.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// inspect current parameters
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// change max_load_factor and redisplay
    c1.max_load_factor(0.10f);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;
    std::cout << std::endl;

// rehash and redisplay
    c1.rehash(100);
    std::cout << "bucket_count() == " << c1.bucket_count() << std::endl;
    std::cout << "load_factor() == " << c1.load_factor() << std::endl;
    std::cout << "max_load_factor() == " << c1.max_load_factor() << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
bucket_count() == 8
load_factor() == 0.375
max_load_factor() == 4

bucket_count() == 8
load_factor() == 0.375
max_load_factor() == 0.1

bucket_count() == 128
load_factor() == 0.0234375
max_load_factor() == 0.1
```

## <a name="size"></a> unordered_multimap::size

Counts the number of elements.

```cpp
size_type size() const;
```

### Remarks

The member function returns the length of the controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_size.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert(Mymap::value_type('d', 4));
    c1.insert(Mymap::value_type('e', 5));

// display contents " [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
size == 0
empty() == true

[e, 5] [d, 4]
size == 2
empty() == false
```

## <a name="size_type"></a> unordered_multimap::size_type

The type of an unsigned distance between two elements.

```cpp
typedef T2 size_type;
```

### Remarks

The unsigned integer type describes an object that can represent the length of any controlled sequence. It is described here as a synonym for the implementation-defined type `T2`.

### Example

```cpp
// std__unordered_map__unordered_multimap_size_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;
    Mymap::size_type sz = c1.size();

    std::cout << "size == " << sz << std::endl;

    return (0);
    }
```

```Output
size == 0
```

## <a name="swap"></a> unordered_multimap::swap

Swaps the contents of two containers.

```cpp
void swap(unordered_multimap& right);
```

### Parameters

*right*\
The container to swap with.

### Remarks

The member function swaps the controlled sequences between **`*this`** and *right*. If [unordered_multimap::get_allocator](#get_allocator)`() == right.get_allocator()`, it does so in constant time, it throws an exception only as a result of copying the stored traits object of type `Tr`, and it invalidates no references, pointers, or iterators that designate elements in the two controlled sequences. Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.

### Example

```cpp
// std__unordered_map__unordered_multimap_swap.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    Mymap c2;

    c2.insert(Mymap::value_type('d', 4));
    c2.insert(Mymap::value_type('e', 5));
    c2.insert(Mymap::value_type('f', 6));

    c1.swap(c2);

// display contents " [f 6] [e 5] [d 4]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    swap(c1, c2);

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[f, 6] [e, 5] [d, 4]
[c, 3] [b, 2] [a, 1]
```

## <a name="unordered_multimap"></a> unordered_multimap::unordered_multimap

Constructs a container object.

```cpp
unordered_multimap(
    const unordered_multimap& Right);

explicit unordered_multimap(
    size_type Bucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Pred(),
    const Allocator& Al = Alloc());

unordered_multimap(
    unordered_multimap&& Right);

unordered_multimap(
    initializer_list<Type> IList);

unordered_multimap(
    initializer_list<Type> IList,
    size_type Bucket_count);

unordered_multimap(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash);

unordered_multimap(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash,
    const Key& Key);

unordered_multimap(
    initializer_list<Type> IList,
    size_type Bucket_count,
    const Hash& Hash,
    const Key& Key,
    const Allocator& Al);

template <class InputIterator>
unordered_multimap(
    InputIterator first,
    InputIterator last,
    size_type Bucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Pred(),
    const Allocator& Al = Alloc());
```

### Parameters

*InputIterator*\
The iterator type.

*Al*\
The allocator object to store.

*Comp*\
The comparison function object to store.

*Hash*\
The hash function object to store.

*Bucket_count*\
The minimum number of buckets.

*Right*\
The container to copy.

*IList*\
The initializer_list from which to copy the elements.

### Remarks

The first constructor specifies a copy of the sequence controlled by *Right*. The second constructor specifies an empty controlled sequence. The third constructor. specifies a copy of the sequence by moving *Right*. The fourth, fifth, sixth, seventh, and eighth constructors use an initializer_list for the members. The ninth constructor inserts the sequence of element values `[First, Last)`.

All constructors also initialize several stored values. For the copy constructor, the values are obtained from *Right*. Otherwise:

The minimum number of buckets is the argument *Bucket_count*, if present; otherwise it is a default value described here as the implementation-defined value `N0`.

The hash function object is the argument *Hash*, if present; otherwise it is `Hash()`.

The comparison function object is the argument *Comp*, if present; otherwise it is `Pred()`.

The allocator object is the argument *Al*, if present; otherwise, it is `Alloc()`.

### Example

```cpp
// std__unordered_map__unordered_multimap_construct.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

using namespace std;

using  Mymap = unordered_multimap<char, int> ;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // display contents " [c 3] [b 2] [a 1]"
    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    Mymap c2(8,
        hash<char>(),
        equal_to<char>(),
        allocator<pair<const char, int> >());

    c2.insert(Mymap::value_type('d', 4));
    c2.insert(Mymap::value_type('e', 5));
    c2.insert(Mymap::value_type('f', 6));

    // display contents " [f 6] [e 5] [d 4]"
    for (const auto& c : c2) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    Mymap c3(c1.begin(),
        c1.end(),
        8,
        hash<char>(),
        equal_to<char>(),
        allocator<pair<const char, int> >());

    // display contents " [c 3] [b 2] [a 1]"
    for (const auto& c : c3) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    Mymap c4(move(c3));

    // display contents " [c 3] [b 2] [a 1]"
    for (const auto& c : c4) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Construct with an initializer_list
    unordered_multimap<int, char> c5({ { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } });
    for (const auto& c : c5) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size
    unordered_multimap<int, char> c6({ { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } }, 4);
    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size and hash
    unordered_multimap<int, char, hash<char>> c7(
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },
        4,
        hash<char>()
    );

    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size, hash, and key_equal
    unordered_multimap<int, char, hash<char>, equal_to<char>> c8(
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },
        4,
        hash<char>(),
        equal_to<char>()
    );

    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;

    // Initializer_list plus size, hash, key_equal, and allocator
    unordered_multimap<int, char, hash<char>, equal_to<char>> c9(
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },
        4,
        hash<char>(),
        equal_to<char>(),
        allocator<pair<const char, int> >()
    );

    for (const auto& c : c1) {
        cout << " [" << c.first << ", " << c.second << "]";
    }
    cout << endl;
}
```

```Output
[a, 1] [b, 2] [c, 3] [d, 4] [e, 5] [f, 6] [a, 1] [b, 2] [c, 3] [a, 1] [b, 2] [c, 3] [5, g] [6, h] [7, i] [8, j] [a, 1] [b, 2] [c, 3] [a, 1] [b, 2] [c, 3] [a, 1] [b, 2] [c, 3] [a, 1] [b, 2] [c, 3] [c, 3] [b, 2] [a, 1]
[f, 6] [e, 5] [d, 4]
[c, 3] [b, 2] [a, 1]
[c, 3] [b, 2] [a, 1]
```

## <a name="value_type"></a> unordered_multimap::value_type

The type of an element.

```cpp
typedef std::pair<const Key, Ty> value_type;
```

### Remarks

The type describes an element of the controlled sequence.

### Example

```cpp
// std__unordered_map__unordered_multimap_value_type.cpp
// compile with: /EHsc
#include <unordered_map>
#include <iostream>

typedef std::unordered_multimap<char, int> Mymap;
int main()
    {
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

// display contents " [c 3] [b 2] [a 1]"
    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

// add a value and reinspect
    Mymap::key_type key = 'd';
    Mymap::mapped_type mapped = 4;
    Mymap::value_type val = Mymap::value_type(key, mapped);
    c1.insert(val);

    for (Mymap::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " [" << it->first << ", " << it->second << "]";
    std::cout << std::endl;

    return (0);
    }
```

```Output
[c, 3] [b, 2] [a, 1]
[d, 4] [c, 3] [b, 2] [a, 1]
```

## See also

[<unordered_map>](../standard-library/unordered-map.md)\
[Containers](./stl-containers.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
