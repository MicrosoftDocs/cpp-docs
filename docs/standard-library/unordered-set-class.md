---
title: "unordered_set Class"
description: "API reference for the C++ Standard Library container class `unordered_set`, which is used to store and retrieve data from an unordered collection."
ms.date: "9/9/2020"
f1_keywords: ["unordered_set/std::unordered_set", "unordered_set/std::unordered_set::allocator_type", "unordered_set/std::unordered_set::const_iterator", "unordered_set/std::unordered_set::const_local_iterator", "unordered_set/std::unordered_set::const_pointer", "unordered_set/std::unordered_set::const_reference", "unordered_set/std::unordered_set::difference_type", "unordered_set/std::unordered_set::hasher", "unordered_set/std::unordered_set::iterator", "unordered_set/std::unordered_set::key_equal", "unordered_set/std::unordered_set::key_type", "unordered_set/std::unordered_set::local_iterator", "unordered_set/std::unordered_set::pointer", "unordered_set/std::unordered_set::reference", "unordered_set/std::unordered_set::size_type", "unordered_set/std::unordered_set::value_type", "unordered_set/std::unordered_set::begin", "unordered_set/std::unordered_set::bucket", "unordered_set/std::unordered_set::bucket_count", "unordered_set/std::unordered_set::bucket_size", "unordered_set/std::unordered_set::cbegin", "unordered_set/std::unordered_set::cend", "unordered_set/std::unordered_set::clear", "unordered_set/std::unordered_set::count", "unordered_set/std::unordered_set::contains", "unordered_set/std::unordered_set::emplace", "unordered_set/std::unordered_set::emplace_hint", "unordered_set/std::unordered_set::empty", "unordered_set/std::unordered_set::end", "unordered_set/std::unordered_set::equal_range", "unordered_set/std::unordered_set::erase", "unordered_set/std::unordered_set::find", "unordered_set/std::unordered_set::get_allocator", "unordered_set/std::unordered_set::hash", "unordered_set/std::unordered_set::insert", "unordered_set/std::unordered_set::key_eq", "unordered_set/std::unordered_set::load_factor", "unordered_set/std::unordered_set::max_bucket_count", "unordered_set/std::unordered_set::max_load_factor", "unordered_set/std::unordered_set::max_size", "unordered_set/std::unordered_set::rehash", "unordered_set/std::unordered_set::size", "unordered_set/std::unordered_set::swap", "unordered_set/std::unordered_set::unordered_set", "unordered_set/std::unordered_set::operator=", "unordered_set/std::unordered_set::hash_function"]
helpviewer_keywords: ["std::unordered_set", "std::unordered_set::allocator_type", "std::unordered_set::const_iterator", "std::unordered_set::const_local_iterator", "std::unordered_set::const_pointer", "std::unordered_set::const_reference", "std::unordered_set::difference_type", "std::unordered_set::hasher", "std::unordered_set::iterator", "std::unordered_set::key_equal", "std::unordered_set::key_type", "std::unordered_set::local_iterator", "std::unordered_set::pointer", "std::unordered_set::reference", "std::unordered_set::size_type", "std::unordered_set::value_type", "std::unordered_set::begin", "std::unordered_set::bucket", "std::unordered_set::bucket_count", "std::unordered_set::bucket_size", "std::unordered_set::cbegin", "std::unordered_set::cend", "std::unordered_set::clear", "std::unordered_set::contains", "std::unordered_set::count", "std::unordered_set::emplace", "std::unordered_set::emplace_hint", "std::unordered_set::empty", "std::unordered_set::end", "std::unordered_set::equal_range", "std::unordered_set::erase", "std::unordered_set::find", "std::unordered_set::get_allocator", "std::unordered_set::hash", "std::unordered_set::insert", "std::unordered_set::key_eq", "std::unordered_set::load_factor", "std::unordered_set::max_bucket_count", "std::unordered_set::max_load_factor", "std::unordered_set::max_size", "std::unordered_set::rehash", "std::unordered_set::size", "std::unordered_set::swap", "std::unordered_set::unordered_set", "std::unordered_set::operator=", "std::unordered_set::allocator_type", "std::unordered_set::const_iterator", "std::unordered_set::const_local_iterator", "std::unordered_set::const_pointer", "std::unordered_set::const_reference", "std::unordered_set::difference_type", "std::unordered_set::hasher", "std::unordered_set::iterator", "std::unordered_set::key_equal", "std::unordered_set::key_type", "std::unordered_set::local_iterator", "std::unordered_set::pointer", "std::unordered_set::reference", "std::unordered_set::size_type", "std::unordered_set::value_type", "std::unordered_set::begin", "std::unordered_set::bucket", "std::unordered_set::bucket_count", "std::unordered_set::bucket_size", "std::unordered_set::cbegin", "std::unordered_set::cend", "std::unordered_set::clear", "std::unordered_set::count", "std::unordered_set::emplace", "std::unordered_set::emplace_hint", "std::unordered_set::empty", "std::unordered_set::end", "std::unordered_set::equal_range", "std::unordered_set::erase", "std::unordered_set::find", "std::unordered_set::get_allocator", "std::unordered_set::hash_function", "std::unordered_set::insert", "std::unordered_set::key_eq", "std::unordered_set::load_factor", "std::unordered_set::max_bucket_count", "std::unordered_set::max_load_factor", "std::unordered_set::max_size", "std::unordered_set::rehash", "std::unordered_set::size", "std::unordered_set::swap"]
---
# `unordered_set` Class

The class template describes an object that controls a varying-length sequence of elements of type `const Key`. The sequence is weakly ordered by a hash function, which partitions the sequence into an ordered set of subsequences called buckets. Within each bucket, a comparison function determines whether any pair of elements has equivalent ordering. Each element serves as both a sort key and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations that can be independent of the number of elements in the sequence (constant time), at least when all buckets are of roughly equal length. In the worst case, when all of the elements are in one bucket, the number of operations is proportional to the number of elements in the sequence (linear time). Inserting an element invalidates no iterators, and removing an element invalidates only those iterators that point at the removed element.

## Syntax

```cpp
template <
   class Key,
   class Hash = std::hash<Key>,
   class Pred = std::equal_to<Key>,
   class Alloc = std::allocator<Key>>
class unordered_set;
```

### Parameters

*`Key`*\
The key type.

*`Hash`*\
The hash function object type.

*`Pred`*\
The equality comparison function object type.

*`Alloc`*\
The allocator class.

## Members

### Typedefs

|Name|Description|
|-|-|
|[`allocator_type`](#allocator_type)|The type of an allocator for managing storage.|
|[`const_iterator`](#const_iterator)|The type of a constant iterator for the controlled sequence.|
|[`const_local_iterator`](#const_local_iterator)|The type of a constant bucket iterator for the controlled sequence.|
|[`const_pointer`](#const_pointer)|The type of a constant pointer to an element.|
|[`const_reference`](#const_reference)|The type of a constant reference to an element.|
|[`difference_type`](#difference_type)|The type of a signed distance between two elements.|
|[`hasher`](#hasher)|The type of the hash function.|
|[`iterator`](#iterator)|The type of an iterator for the controlled sequence.|
|[`key_equal`](#key_equal)|The type of the comparison function.|
|[`key_type`](#key_type)|The type of an ordering key.|
|[`local_iterator`](#local_iterator)|The type of a bucket iterator for the controlled sequence.|
|[`pointer`](#pointer)|The type of a pointer to an element.|
|[`reference`](#reference)|The type of a reference to an element.|
|[`size_type`](#size_type)|The type of an unsigned distance between two elements.|
|[`value_type`](#value_type)|The type of an element.|

### Functions

|Name|Description|
|-|-|
|[`begin`](#begin)|Designates the beginning of the controlled sequence.|
|[`bucket`](#bucket)|Gets the bucket number for a key value.|
|[`bucket_count`](#bucket_count)|Gets the number of buckets.|
|[`bucket_size`](#bucket_size)|Gets the size of a bucket.|
|[`cbegin`](#cbegin)|Designates the beginning of the controlled sequence.|
|[`cend`](#cend)|Designates the end of the controlled sequence.|
|[`clear`](#clear)|Removes all elements.|
|[`contains`](#contains)<sup>C++20</sup>|Check if there's an element with the specified key in the `unordered_set`.|
|[`count`](#count)|Finds the number of elements matching a specified key.|
|[`emplace`](#emplace)|Adds an element constructed in place.|
|[`emplace_hint`](#emplace_hint)|Adds an element constructed in place, with hint.|
|[`empty`](#empty)|Tests whether no elements are present.|
|[`end`](#end)|Designates the end of the controlled sequence.|
|[`equal_range`](#equal_range)|Finds range that matches a specified key.|
|[`erase`](#erase)|Removes elements at specified positions.|
|[`find`](#find)|Finds an element that matches a specified key.|
|[`get_allocator`](#get_allocator)|Gets the stored allocator object.|
|[`hash_function`](#hash)|Gets the stored hash function object.|
|[`insert`](#insert)|Adds elements.|
|[`key_eq`](#key_eq)|Gets the stored comparison function object.|
|[`load_factor`](#load_factor)|Counts the average elements per bucket.|
|[`max_bucket_count`](#max_bucket_count)|Gets the maximum number of buckets.|
|[`max_load_factor`](#max_load_factor)|Gets or sets the maximum elements per bucket.|
|[`max_size`](#max_size)|Gets the maximum size of the controlled sequence.|
|[`rehash`](#rehash)|Rebuilds the hash table.|
|[`size`](#size)|Counts the number of elements.|
|[`swap`](#swap)|Swaps the contents of two containers.|
|[`unordered_set`](#unordered_set)|Constructs a container object.|

### Operators

|Name|Description|
|-|-|
|[`unordered_set::operator=`](#op_eq)|Copies a hash table.|

## Remarks

The object orders the sequence it controls by calling two stored objects, a comparison function object of type [`unordered_set::key_equal`](#key_equal) and a hash function object of type [`unordered_set::hasher`](#hasher). You access the first stored object by calling the member function [`unordered_set::key_eq`](#key_eq)`()`; and you access the second stored object by calling the member function [`unordered_set::hash_function`](#hash)`()`. Specifically, for all values `X` and `Y` of type `Key`, the call `key_eq()(X, Y)` returns true only if the two argument values have equivalent ordering; the call `hash_function()(keyval)` yields a distribution of values of type `size_t`. Unlike class template [`unordered_multiset` Class](../standard-library/unordered-multiset-class.md), an object of type `unordered_set` ensures that `key_eq()(X, Y)` is always false for any two elements of the controlled sequence. (Keys are unique.)

The object also stores a maximum load factor, which specifies the maximum desired average number of elements per bucket. If inserting an element causes [`unordered_set::load_factor`](#load_factor)`()` to exceed the maximum load factor, the container increases the number of buckets and rebuilds the hash table as needed.

The actual order of elements in the controlled sequence depends on the hash function, the comparison function, the order of insertion, the maximum load factor, and the current number of buckets. You can't in general predict the order of elements in the controlled sequence. You can always be assured, however, that any subset of elements that have equivalent ordering are adjacent in the controlled sequence.

The object allocates and frees storage for the sequence it controls through a stored allocator object of type [`unordered_set::allocator_type`](#allocator_type). Such an allocator object must have the same external interface as an object of type `allocator`. The stored allocator object isn't copied when the container object is assigned.

## <a name="allocator_type"></a> `unordered_set::allocator_type`

The type of an allocator for managing storage.

```cpp
typedef Alloc allocator_type;
```

### Remarks

The type is a synonym for the template parameter `Alloc`.

### Example

```cpp
// std__unordered_set__unordered_set_allocator_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
{
    Myset c1;

    Myset::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
    << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
}
```

```Output
al == std::allocator() is true
```

## <a name="begin"></a> `begin`

Designates the beginning of the controlled sequence or a bucket.

```cpp
iterator begin();

const_iterator begin() const;

local_iterator begin(size_type nbucket);

const_local_iterator begin(size_type nbucket) const;
```

### Parameters

*`nbucket`*\
The bucket number.

### Remarks

The first two member functions return a forward iterator that points at the first element of the sequence (or just beyond the end of an empty sequence). The last two member functions return a forward iterator that points at the first element of bucket *`nbucket`* (or just beyond the end of an empty bucket).

### Example

```cpp
// unordered_set_begin.cpp
// compile using: cl.exe /EHsc /nologo /W4 /MTd
#include <unordered_set>
#include <iostream>

using namespace std;

typedef unordered_set<char> MySet;

int main()
{
    MySet c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents using range-based for
    for (auto it : c1) {
    cout << "[" << it << "] ";
    }

    cout << endl;

    // display contents using explicit for
    for (MySet::const_iterator it = c1.begin(); it != c1.end(); ++it) {
        cout << "[" << *it << "] ";
    }

    cout << std::endl;

    // display first two items
    MySet::iterator it2 = c1.begin();
    cout << "[" << *it2 << "] ";
    ++it2;
    cout << "[" << *it2 << "] ";
    cout << endl;

    // display bucket containing 'a'
    MySet::const_local_iterator lit = c1.begin(c1.bucket('a'));
    cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[a] [b] [c]
[a] [b] [c]
[a] [b]
[a]
```

## <a name="bucket"></a> `bucket`

Gets the bucket number for a key value.

```cpp
size_type bucket(const Key& keyval) const;
```

### Parameters

*`keyval`*\
The key value to map.

### Remarks

The member function returns the bucket number currently corresponding to the key value *`keyval`*.

### Example

```cpp
// std__unordered_set__unordered_set_bucket.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // display buckets for keys
    Myset::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
    << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="bucket_count"></a> `bucket_count`

Gets the number of buckets.

```cpp
size_type bucket_count() const;
```

### Remarks

The member function returns the current number of buckets.

### Example

```cpp
// std__unordered_set__unordered_set_bucket_count.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
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
[c] [b] [a]
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

## <a name="bucket_size"></a> `bucket_size`

Gets the size of a bucket

```cpp
size_type bucket_size(size_type nbucket) const;
```

### Parameters

*`nbucket`*\
The bucket number.

### Remarks

The member functions returns the size of bucket number *`nbucket`*.

### Example

```cpp
// std__unordered_set__unordered_set_bucket_size.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // display buckets for keys
    Myset::size_type bs = c1.bucket('a');
    std::cout << "bucket('a') == " << bs << std::endl;
    std::cout << "bucket_size(" << bs << ") == " << c1.bucket_size(bs)
    << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
bucket('a') == 7
bucket_size(7) == 1
```

## <a name="cbegin"></a> `cbegin`

Returns a **`const`** iterator that addresses the first element in the range.

```cpp
const_iterator cbegin() const;
```

### Return Value

A **`const`** forward-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).

### Remarks

With the return value of `cbegin`, the elements in the range can't be modified.

You can use this member function in place of the `begin()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [`auto`](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **`const`**) container of any kind that supports `begin()` and `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 isContainer<T>::iterator
auto i2 = Container.cbegin();

// i2 isContainer<T>::const_iterator
```

## <a name="cend"></a> `cend`

Returns a **`const`** iterator that addresses the location just beyond the last element in a range.

```cpp
const_iterator cend() const;
```

### Return Value

A **`const`** forward-access iterator that points just beyond the end of the range.

### Remarks

`cend` is used to test whether an iterator has passed the end of its range.

You can use this member function in place of the `end()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [`auto`](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **`const`**) container of any kind that supports `end()` and `cend()`.

```cpp
auto i1 = Container.end();
// i1 isContainer<T>::iterator
auto i2 = Container.cend();

// i2 isContainer<T>::const_iterator
```

The value returned by `cend` shouldn't be dereferenced.

## <a name="clear"></a> `clear`

Removes all elements.

```cpp
void clear();
```

### Remarks

The member function calls `unordered_set::erase( unordered_set::begin()`, `unordered_set::end())`. For more information, see [`unordered_set::erase`](#erase), [`unordered_set::begin`](#begin), and [`unordered_set::end`](#end).

### Example

```cpp
// std__unordered_set__unordered_set_clear.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert('d');
    c1.insert('e');

    // display contents "[e] [d] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
size == 0
empty() == true
[e] [d]
size == 2
empty() == false
```

## <a name="const_iterator"></a> `const_iterator`

The type of a constant iterator for the controlled sequence.

```cpp
typedef T1 const_iterator;
```

### Remarks

The type describes an object that can serve as a constant forward iterator for the controlled sequence. It's described here as a synonym for the implementation-defined type `T1`.

### Example

```cpp
// std__unordered_set__unordered_set_const_iterator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
    std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="const_local_iterator"></a> `const_local_iterator`

The type of a constant bucket iterator for the controlled sequence.

```cpp
typedef T5 const_local_iterator;
```

### Remarks

The type describes an object that can serve as a constant forward iterator for a bucket. It's described here as a synonym for the implementation-defined type `T5`.

### Example

```cpp
// std__unordered_set__unordered_set_const_local_iterator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::const_local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[a]
```

## <a name="const_pointer"></a> `const_pointer`

The type of a constant pointer to an element.

```cpp
typedef Alloc::const_pointer const_pointer;
```

### Remarks

The type describes an object that can serve as a constant pointer to an element of the controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_const_pointer.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
    {
        Myset::const_pointer p = &*it;
        std::cout << "[" << *p << "] ";
    }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="const_reference"></a> `const_reference`

The type of a constant reference to an element.

```cpp
typedef Alloc::const_reference const_reference;
```

### Remarks

The type describes an object that can serve as a constant reference to an element of the controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_const_reference.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
    {
        Myset::const_reference ref = *it;
        std::cout << "[" << ref << "] ";
    }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="contains"></a> `contains`

Checks if there's an element with the specified key in the `unordered_set`.

```cpp
bool contains(const Key& key) const;
template<class K> bool contains(const K& key) const;
```

### Parameters

*`K`*\
The type of the key.

*`Key`*\
The element's key value to look for.

### Return Value

`true` if the element is found in the container; `false` otherwise.

### Remarks

`contains()` is new in C++20. To use it, specify the [/std:c++20](../build/reference/std-specify-language-standard-version.md) or later compiler option.

`template<class K> bool contains(const K& key) const` only participates in overload resolution if `key_compare` is transparent.

### Example

```cpp
// Requires /std:c++20 or /std:c++latest
#include <unordered_set>
#include <iostream>

int main()
{
    std::unordered_set<int> theUnorderedSet = { 1, 2 };

    std::cout << std::boolalpha; // so booleans show as 'true' or 'false'
    std::cout << theUnorderedSet.contains(2) << '\n';
    std::cout << theUnorderedSet.contains(3) << '\n';

    return 0;
}
```

```Output
true
false
```

## <a name="count"></a> `count`

Finds the number of elements matching a specified key.

```cpp
size_type count(const Key& keyval) const;
```

### Parameters

*`keyval`*\
Key value to search for.

### Remarks

The member function returns the number of elements in the range delimited by [`unordered_set::equal_range`](#equal_range)`(keyval)`.

### Example

```cpp
// std__unordered_set__unordered_set_count.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "count('A') == " << c1.count('A') << std::endl;
    std::cout << "count('b') == " << c1.count('b') << std::endl;
    std::cout << "count('C') == " << c1.count('C') << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
count('A') == 0
count('b') == 1
count('C') == 0
```

## <a name="difference_type"></a> `difference_type`

The type of a signed distance between two elements.

```cpp
typedef T3 difference_type;
```

### Remarks

The signed integer type describes an object that can represent the difference between the addresses of any two elements in the controlled sequence. It's described here as a synonym for the implementation-defined type `T3`.

### Example

```cpp
// std__unordered_set__unordered_set_difference_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // compute positive difference
    Myset::difference_type diff = 0;
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    std::cout << "end()-begin() == " << diff << std::endl;

    // compute negative difference
    diff = 0;
    for (Myset::const_iterator it = c1.end(); it != c1.begin(); --it)
        --diff;
    std::cout << "begin()-end() == " << diff << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
end()-begin() == 3
begin()-end() == -3
```

## <a name="emplace"></a> `emplace`

Inserts an element constructed in place (no copy or move operations are performed).

```cpp
template <class... Args>
pair<iterator, bool>
emplace(
Args&&... args);
```

### Parameters

*`args`*\
The arguments forwarded to construct an element to be inserted into the `unordered_set` unless it already contains an element whose value is equivalently ordered.

### Return Value

A `pair` whose **`bool`** component returns true if an insertion was made and false if the `unordered_set` already contained an element whose key had an equivalent value in the ordering, and whose iterator component returns the address where a new element was inserted or where the element was already located.

To access the iterator component of a pair `pr` returned by this member function, use `pr.first`, and to dereference it, use `*(pr.first)`. To access the **`bool`** component of a pair `pr` returned by this member function, use `pr.second`.

### Remarks

No iterators or references are invalidated by this function.

During the insertion, if an exception is thrown but doesn't occur in the container's hash function, the container isn't modified. If the exception is thrown in the hash function, the result is undefined.

For a code example, see [`set::emplace`](../standard-library/set-class.md#emplace).

## <a name="emplace_hint"></a> `emplace_hint`

Inserts an element constructed in place (no copy or move operations are performed), with a placement hint.

```cpp
template <class... Args>
iterator emplace_hint(
const_iteratorwhere,
Args&&... args);
```

### Parameters

*`args`*\
The arguments forwarded to construct an element to be inserted into the `unordered_set` unless the `unordered_set` already contains that element or, more generally, unless it already contains an element whose key is equivalently ordered.

*`where`*\
A hint about the place to start searching for the correct point of insertion.

### Return Value

An iterator to the newly inserted element.

If the insertion failed because the element already exists, returns an iterator to the existing element.

### Remarks

No iterators or references are invalidated by this function.

During the insertion, if an exception is thrown but doesn't occur in the container's hash function, the container isn't modified. If the exception is thrown in the hash function, the result is undefined.

For a code example, see [`set::emplace_hint`](../standard-library/set-class.md#emplace_hint).

## <a name="empty"></a> `empty`

Tests whether no elements are present.

```cpp
bool empty() const;
```

### Remarks

The member function returns true for an empty controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_empty.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert('d');
    c1.insert('e');

    // display contents "[e] [d] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
size == 0
empty() == true
[e] [d]
size == 2
empty() == false
```

## <a name="end"></a> `end`

Designates the end of the controlled sequence.

```cpp
iterator end();

const_iterator end() const;

local_iterator end(size_type nbucket);

const_local_iterator end(size_type nbucket) const;
```

### Parameters

*`nbucket`*\
The bucket number.

### Remarks

The first two member functions return a forward iterator that points just beyond the end of the sequence. The last two member functions return a forward iterator that points just beyond the end of bucket *`nbucket`*.

### Example

```cpp
// std__unordered_set__unordered_set_end.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect last two items "[a] [b] "
    Myset::iterator it2 = c1.end();
    --it2;
    std::cout << "[" << *it2 << "] ";
    --it2;
    std::cout << "[" << *it2 << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::const_local_iterator lit = c1.end(c1.bucket('a'));
    --lit;
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[a] [b]
[a]
```

## <a name="equal_range"></a> `equal_range`

Finds range that matches a specified key.

```cpp
std::pair<iterator, iterator>
equal_range(const Key& keyval);

std::pair<const_iterator, const_iterator>
equal_range(const Key& keyval) const;
```

### Parameters

*`keyval`*\
Key value to search for.

### Remarks

The member function returns a pair of iterators `X` such that`[X.first, X.second)` delimits just those elements of the controlled sequence that have equivalent ordering with *`keyval`*. If no such elements exist, both iterators are `end()`.

### Example

```cpp
// std__unordered_set__unordered_set_equal_range.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // display results of failed search
    std::pair<Myset::iterator, Myset::iterator> pair1 =
    c1.equal_range('x');
    std::cout << "equal_range('x'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << "[" << *pair1.first << "] ";
    std::cout << std::endl;

    // display results of successful search
    pair1 = c1.equal_range('b');
    std::cout << "equal_range('b'):";
    for (; pair1.first != pair1.second; ++pair1.first)
        std::cout << "[" << *pair1.first << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
equal_range('x'):
equal_range('b'): [b]
```

## <a name="erase"></a> `erase`

Removes an element or a range of elements in a `unordered_set` from specified positions or removes elements that match a specified key.

```cpp
iterator erase(const_iterator Where);

iterator erase(const_iterator First, const_iterator Last);

size_type erase(const key_type& Key);
```

### Parameters

*`Where`*\
Position of the element to be removed.

*`First`*\
Position of the first element to be removed.

*`Last`*\
Position just beyond the last element to be removed.

*`Key`*\
The key value of the elements to be removed.

### Return Value

For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or an element that is the end of the `unordered_set` if no such element exists.

For the third member function, returns the number of elements that have been removed from the `unordered_set`.

### Remarks

For a code example, see [set::erase](../standard-library/set-class.md#erase).

## <a name="find"></a> `find`

Finds an element that matches a specified key.

```cpp
const_iterator find(const Key& keyval) const;
```

### Parameters

*`keyval`*\
Key value to search for.

### Remarks

The member function returns [`unordered_set::equal_range`](#equal_range)`(keyval).first`.

### Example

```cpp
// std__unordered_set__unordered_set_find.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // try to find and fail
    std::cout << "find('A') == "
    << std::boolalpha << (c1.find('A') != c1.end()) << std::endl;

    // try to find and succeed
    Myset::iterator it = c1.find('b');
    std::cout << "find('b') == "
    << std::boolalpha << (it != c1.end())
    << ": [" << *it << "] " << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
find('A') == false
find('b') == true: [b]
```

## <a name="get_allocator"></a> `get_allocator`

Gets the stored allocator object.

```cpp
Alloc get_allocator() const;
```

### Remarks

The member function returns the stored allocator object.

### Example

```cpp
// std__unordered_set__unordered_set_get_allocator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
typedef std::allocator<std::pair<const char, int> > Myalloc;
int main()
{
    Myset c1;

    Myset::allocator_type al = c1.get_allocator();
    std::cout << "al == std::allocator() is "
    << std::boolalpha << (al == Myalloc()) << std::endl;

    return (0);
}
```

```Output
al == std::allocator() is true
```

## <a name="hash"></a> `hash_function`

Gets the stored hash function object.

```cpp
Hash hash_function() const;
```

### Remarks

The member function returns the stored hash function object.

### Example

```cpp
// std__unordered_set__unordered_set_hash_function.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    Myset::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
}
```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="hasher"></a> `hasher`

The type of the hash function.

```cpp
typedef Hash hasher;
```

### Remarks

The type is a synonym for the template parameter `Hash`.

### Example

```cpp
// std__unordered_set__unordered_set_hasher.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    Myset::hasher hfn = c1.hash_function();
    std::cout << "hfn('a') == " << hfn('a') << std::endl;
    std::cout << "hfn('b') == " << hfn('b') << std::endl;

    return (0);
}
```

```Output
hfn('a') == 1630279
hfn('b') == 1647086
```

## <a name="insert"></a> `insert`

Inserts an element or a range of elements into an `unordered_set`.

```cpp
// (1) single element
pair<iterator, bool> insert(const value_type& Val);

// (2) single element, perfect forwarded
template <class ValTy>
pair<iterator, bool> insert(ValTy&& Val);

// (3) single element with hint
iterator insert(const_iterator Where, const value_type& Val);

// (4) single element, perfect forwarded, with hint
template <class ValTy>
iterator insert(const_iterator Where, ValTy&& Val);

// (5) range
template <class InputIterator>
void insert(InputIterator First, InputIterator Last);

// (6) initializer list
void insert(initializer_list<value_type> IList);
```

### Parameters

*`Val`*\
The value of an element to be inserted into the `unordered_set` unless it already contains an element whose key is equivalently ordered.

*`Where`*\
The place to start searching for the correct point of insertion.

*`ValTy`*\
Template parameter that specifies the argument type that the `unordered_set` can use to construct an element of [`value_type`](../standard-library/map-class.md#value_type), and perfect-forwards *`Val`* as an argument.

*`First`*\
The position of the first element to be copied.

*`Last`*\
The position just beyond the last element to be copied.

*`InputIterator`*\
Template function argument that meets the requirements of an [input iterator](../standard-library/input-iterator-tag-struct.md) that points to elements of a type that can be used to construct [`value_type`](../standard-library/map-class.md#value_type) objects.

*`IList`*\
The [`initializer_list`](../standard-library/initializer-list.md) from which to copy the elements.

### Return Value

The single-element member functions, (1) and (2), return a [`pair`](../standard-library/pair-structure.md) whose **`bool`** component is true if an insertion was made, and false if the `unordered_set` already contained an element whose key had an equivalent value in the ordering. The iterator component of the return-value pair points to the newly inserted element if the **`bool`** component is `true`, or to the existing element if the **`bool`** component is `false`.

The single-element-with-hint member functions, (3) and (4), return an iterator that points to the position where the new element was inserted into the `unordered_set` or, if an element with an equivalent key already exists, to the existing element.

### Remarks

No iterators, pointers, or references are invalidated by this function.

During the insertion of just one element, if an exception is thrown but doesn't occur in the container's hash function, the container's state isn't modified. If the exception is thrown in the hash function, the result is undefined. During the insertion of multiple elements, if an exception is thrown, the container is left in an unspecified but valid state.

To access the iterator component of a `pair` `pr` that's returned by the single-element member functions, use `pr.first`; to dereference the iterator within the returned pair, use`*pr.first`, giving you an element. To access the **`bool`** component, use `pr.second`. For an example, see the sample code later in this article.

The [`value_type`](../standard-library/map-class.md#value_type) of a container is a typedef that belongs to the container, and, for set, `unordered_set<V>::value_type` is type `const V`.

The range member function (5) inserts the sequence of element values into an `unordered_set` that corresponds to each element addressed by an iterator in the range `[First, Last)`; therefore, *`Last`* doesn't get inserted. The container member function `end()` refers to the position just after the last element in the container—for example, the statement `s.insert(v.begin(), v.end());` attempts to insert all elements of `v` into `s`. Only elements that have unique values in the range are inserted; duplicates are ignored. To observe which elements are rejected, use the single-element versions of `insert`.

The initializer list member function (6) uses an [`initializer_list`](../standard-library/initializer-list.md) to copy elements into the `unordered_set`.

For insertion of an element constructed in place—that is, no copy or move operations are performed—see [`set::emplace`](../standard-library/set-class.md#emplace) and [`set::emplace_hint`](../standard-library/set-class.md#emplace_hint).

For a code example, see [`set::insert`](../standard-library/set-class.md#insert).

## <a name="iterator"></a> `iterator`

A type that provides a constant [forward iterator](../standard-library/forward-iterator-tag-struct.md) that can read elements in an unordered_set.

```cpp
typedef implementation-defined iterator;
```

### Example

See the example for [`begin`](../standard-library/set-class.md#begin) for an example of how to declare and use an **iterator**.

## <a name="key_eq"></a> `key_eq`

Gets the stored comparison function object.

```cpp
Pred key_eq() const;
```

### Remarks

The member function returns the stored comparison function object.

### Example

```cpp
// std__unordered_set__unordered_set_key_eq.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    Myset::key_equal cmpfn = c1.key_eq();
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

## <a name="key_equal"></a> `key_equal`

The type of the comparison function.

```cpp
typedef Pred key_equal;
```

### Remarks

The type is a synonym for the template parameter `Pred`.

### Example

```cpp
// std__unordered_set__unordered_set_key_equal.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    Myset::key_equal cmpfn = c1.key_eq();
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

## <a name="key_type"></a> `key_type`

The type of an ordering key.

```cpp
typedef Key key_type;
```

### Remarks

The type is a synonym for the template parameter `Key`.

### Example

```cpp
// std__unordered_set__unordered_set_key_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // add a value and reinspect
    Myset::key_type key = 'd';
    Myset::value_type val = key;
    c1.insert(val);

    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
[d] [c] [b] [a]
```

## <a name="load_factor"></a> `load_factor`

Counts the average elements per bucket.

```cpp
float load_factor() const;
```

### Remarks

The member function returns`(float)`[unordered_set::size](#size)`() / (float)`[unordered_set::bucket_count](#bucket_count)`()`, the average number of elements per bucket.

### Example

```cpp
// std__unordered_set__unordered_set_load_factor.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
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
[c] [b] [a]
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

## <a name="local_iterator"></a> `local_iterator`

The type of a bucket iterator.

```cpp
typedef T4 local_iterator;
```

### Remarks

The type describes an object that can serve as a forward iterator for a bucket. It's described here as a synonym for the implementation-defined type `T4`.

### Example

```cpp
// std__unordered_set__unordered_set_local_iterator.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // inspect bucket containing 'a'
    Myset::local_iterator lit = c1.begin(c1.bucket('a'));
    std::cout << "[" << *lit << "] ";

    return (0);
}
```

```Output
[c] [b] [a]
[a]
```

## <a name="max_bucket_count"></a> `max_bucket_count`

Gets the maximum number of buckets.

```cpp
size_type max_bucket_count() const;
```

### Remarks

The member function returns the maximum number of buckets currently permitted.

### Example

```cpp
// std__unordered_set__unordered_set_max_bucket_count.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
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
[c] [b] [a]
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

## <a name="max_load_factor"></a> `max_load_factor`

Gets or sets the maximum elements per bucket.

```cpp
float max_load_factor() const;

void max_load_factor(float factor);
```

### Parameters

*`factor`*\
The new maximum load factor.

### Remarks

The first member function returns the stored maximum load factor. The second member function replaces the stored maximum load factor with *`factor`*.

### Example

```cpp
// std__unordered_set__unordered_set_max_load_factor.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
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
[c] [b] [a]
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

## <a name="max_size"></a> `max_size`

Gets the maximum size of the controlled sequence.

```cpp
size_type max_size() const;
```

### Remarks

The member function returns the length of the longest sequence that the object can control.

### Example

```cpp
// std__unordered_set__unordered_set_max_size.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    std::cout << "max_size() == " << c1.max_size() << std::endl;

    return (0);
}
```

```Output
max_size() == 4294967295
```

## <a name="op_eq"></a> `operator=`

Copies a hash table.

```cpp
unordered_set& operator=(const unordered_set& right);

unordered_set& operator=(unordered_set&& right);
```

### Parameters

*`right`*\
The [`unordered_set`](../standard-library/unordered-set-class.md) being copied into the `unordered_set`.

### Remarks

After erasing any existing elements in an `unordered_set`, `operator=` either copies or moves the contents of *`right`* into the `unordered_set`.

### Example

```cpp
// unordered_set_operator_as.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

int main( )
{
    using namespace std;
    unordered_set<int> v1, v2, v3;
    unordered_set<int>::iterator iter;

    v1.insert(10);

    cout << "v1 = " ;
    for (iter = v1.begin(); iter != v1.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    v2 = v1;
    cout << "v2 = ";
    for (iter = v2.begin(); iter != v2.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    // move v1 into v2
    v2.clear();
    v2 = move(v1);
    cout << "v2 = ";
    for (iter = v2.begin(); iter != v2.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}
```

## <a name="pointer"></a> `pointer`

The type of a pointer to an element.

```cpp
typedef Alloc::pointer pointer;
```

### Remarks

The type describes an object that can serve as a pointer to an element of the controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_pointer.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
    {
        Myset::key_type key = *it;
        Myset::pointer p = &key;
        std::cout << "[" << *p << "] ";
    }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="reference"></a> `reference`

The type of a reference to an element.

```cpp
typedef Alloc::reference reference;
```

### Remarks

The type describes an object that can serve as a reference to an element of the controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_reference.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
    {
        Myset::key_type key = *it;
        Myset::reference ref = key;
        std::cout << "[" << ref << "] ";
    }
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
```

## <a name="rehash"></a> `rehash`

Rebuilds the hash table.

```cpp
void rehash(size_type nbuckets);
```

### Parameters

*`nbuckets`*\
The requested number of buckets.

### Remarks

The member function alters the number of buckets to be at least *`nbuckets`* and rebuilds the hash table as needed.

### Example

```cpp
// std__unordered_set__unordered_set_rehash.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
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
[c] [b] [a]
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

## <a name="size"></a> `size`

Counts the number of elements.

```cpp
size_type size() const;
```

### Remarks

The member function returns the length of the controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_size.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // clear the container and reinspect
    c1.clear();
    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;
    std::cout << std::endl;

    c1.insert('d');
    c1.insert('e');

    // display contents "[e] [d] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    std::cout << "size == " << c1.size() << std::endl;
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
size == 0
empty() == true

[e] [d]
size == 2
empty() == false
```

## <a name="size_type"></a> `size_type`

The type of an unsigned distance between two elements.

```cpp
typedef T2 size_type;
```

### Remarks

The unsigned integer type describes an object that can represent the length of any controlled sequence. It's described here as a synonym for the implementation-defined type `T2`.

### Example

```cpp
// std__unordered_set__unordered_set_size_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;
    Myset::size_type sz = c1.size();

    std::cout << "size == " << sz << std::endl;

    return (0);
}
```

```Output
size == 0
```

## <a name="swap"></a> `swap`

Swaps the contents of two containers.

```cpp
void swap(unordered_set& right);
```

### Parameters

*`right`*\
The container to swap with.

### Remarks

The member function swaps the controlled sequences between **`*this`** and *`right`*. If [`unordered_set::get_allocator`](#get_allocator)`() == right.get_allocator()`, it does so in constant time, it throws an exception only as a result of copying the stored traits object of type `Tr`, and it invalidates no references, pointers, or iterators that designate elements in the two controlled sequences. Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.

### Example

```cpp
// std__unordered_set__unordered_set_swap.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    Myset c2;

    c2.insert('d');
    c2.insert('e');
    c2.insert('f');

    c1.swap(c2);

    // display contents "[f] [e] [d] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    swap(c1, c2);

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
[f] [e] [d]
[c] [b] [a]
```

## <a name="unordered_set"></a> `unordered_set`

Constructs a container object.

```cpp
unordered_set(const unordered_set& Right);

explicit unordered_set(
    size_typebucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Comp(),
    const Allocator& Al = Alloc());

unordered_set(unordered_set&& Right);

unordered_set(initializer_list<Type> IList);

unordered_set(initializer_list<Type> IList, size_typebucket_count);

unordered_set(
    initializer_list<Type> IList,
    size_typebucket_count,
    const Hash& Hash);

unordered_set(
    initializer_list<Type> IList,
    size_typebucket_count,
    const Hash& Hash,
    const Comp& Comp);

unordered_set(
    initializer_list<Type> IList,
    size_typebucket_count,
    const Hash& Hash,
    const Comp& Comp,
    const Allocator& Al);

template <class InputIterator>
unordered_set(
    InputIteratorfirst,
    InputIteratorlast,
    size_typebucket_count = N0,
    const Hash& Hash = Hash(),
    const Comp& Comp = Comp(),
    const Allocator& Al = Alloc());
```

### Parameters

*`InputIterator`*\
The iterator type.

*`Al`*\
The allocator object to store.

*`Comp`*\
The comparison function object to store.

*`Hash`*\
The hash function object to store.

*`bucket_count`*\
The minimum number of buckets.

*`Right`*\
The container to copy.

*`IList`*\
The `initializer_list` containing the elements to copy.

### Remarks

The first constructor specifies a copy of the sequence controlled by *`Right`*. The second constructor specifies an empty controlled sequence. The third constructor specifies a copy of the sequence by moving *`Right`* The fourth through eighth constructors use an `initializer_list` to specify the elements to copy. The ninth constructor inserts the sequence of element values`[first, last)`.

All constructors also initialize several stored values. For the copy constructor, the values are obtained from *`Right`*. Otherwise:

The minimum number of buckets is the argument *`bucket_count`*, if present; otherwise it's a default value described here as the implementation-defined value `N0`.

The hash function object is the argument *`Hash`*, if present; otherwise it's `Hash()`.

The comparison function object is the argument *`Comp`*, if present; otherwise it's `Comp()`.

The allocator object is the argument *`Al`*, if present; otherwise, it's `Alloc()`.

## <a name="value_type"></a> `value_type`

The type of an element.

```cpp
typedef Key value_type;
```

### Remarks

The type describes an element of the controlled sequence.

### Example

```cpp
// std__unordered_set__unordered_set_value_type.cpp
// compile with: /EHsc
#include <unordered_set>
#include <iostream>

typedef std::unordered_set<char> Myset;
int main()
{
    Myset c1;

    c1.insert('a');
    c1.insert('b');
    c1.insert('c');

    // display contents "[c] [b] [a] "
    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    // add a value and reinspect
    Myset::key_type key = 'd';
    Myset::value_type val = key;
    c1.insert(val);

    for (Myset::const_iterator it = c1.begin(); it != c1.end(); ++it)
        std::cout << "[" << *it << "] ";
    std::cout << std::endl;

    return (0);
}
```

```Output
[c] [b] [a]
[d] [c] [b] [a]
```
