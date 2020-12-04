---
description: "Learn more about: C++ Standard Library Containers"
title: "C++ Standard Library Containers"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ Standard Library, class template containers", "containers, C++ Standard Library"]
ms.assetid: 8e915ca1-19ba-4f0d-93c8-e2c3bfd638eb
---
# C++ Standard Library Containers

The Standard Library provides various type-safe containers for storing collections of related objects. The containers are class templates. When you declare a container variable, you specify the type of the elements that the container will hold. Containers can be constructed with initializer lists. They have member functions for adding and removing elements and doing other operations.

You iterate over the elements in a container, and access the individual elements by using [iterators](../standard-library/iterators.md). You can use iterators explicitly by using their member functions and operators and global functions. You can also use them implicitly, for example by using a range-for loop. Iterators for all C++ Standard Library containers have a common interface but each container defines its own specialized iterators.

Containers can be divided into three categories: sequence containers, associative containers, and container adapters.

## <a name="sequence_containers"></a> Sequence Containers

Sequence containers maintain the ordering of inserted elements that you specify.

A `vector` container behaves like an array, but can automatically grow as required. It is random access and contiguously stored, and length is highly flexible. For these reasons and more, `vector` is the preferred sequence container for most applications. When in doubt as to what kind of sequence container to use, start by using a vector! For more information, see [vector Class](../standard-library/vector-class.md).

An `array` container has some of the strengths of `vector`, but the length isn't as flexible. For more information, see [array Class](../standard-library/array-class-stl.md).

A `deque` (double-ended queue) container allows for fast insertions and deletions at the beginning and end of the container. It shares the random-access and flexible-length advantages of `vector`, but isn't contiguous. For more information, see [deque Class](../standard-library/deque-class.md).

A `list` container is a doubly linked list that enables bidirectional access, fast insertions, and fast deletions anywhere in the container, but you can't randomly access an element in the container. For more information, see [list Class](../standard-library/list-class.md).

A `forward_list` container is a singly linked list—the forward-access version of `list`. For more information, see [forward_list Class](../standard-library/forward-list-class.md).

## Associative Containers

In associative containers, elements are inserted in a pre-defined order—for example, as sorted ascending. Unordered associative containers are also available. The associative containers can be grouped into two subsets: maps and sets.

A `map`, sometimes referred to as a dictionary, consists of a key/value pair. The key is used to order the sequence, and the value is associated with that key. For example, a `map` might contain keys that represent every unique word in a text and corresponding values that represent the number of times that each word appears in the text. The unordered version of `map` is `unordered_map`. For more information, see [map Class](../standard-library/map-class.md) and [unordered_map Class](../standard-library/unordered-map-class.md).

A `set` is just an ascending container of unique elements—the value is also the key. The unordered version of `set` is `unordered_set`. For more information, see [set Class](../standard-library/set-class.md) and [unordered_set Class](../standard-library/unordered-set-class.md).

Both `map` and `set` only allow one instance of a key or element to be inserted into the container. If multiple instances of elements are required, use `multimap` or `multiset`. The unordered versions are `unordered_multimap` and `unordered_multiset`. For more information, see [multimap Class](../standard-library/multimap-class.md), [unordered_multimap Class](../standard-library/unordered-multimap-class.md), [multiset Class](../standard-library/multiset-class.md), and [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Ordered maps and sets support bi-directional iterators, and their unordered counterparts support forward iterators. For more information, see [Iterators](../standard-library/iterators.md).

### Heterogeneous Lookup in Associative Containers (C++14)

The ordered associative containers (map, multimap, set, and multiset) now support heterogeneous lookup, which means that you're no longer required to pass the exact same object type as the key or element in member functions such as `find()` and `lower_bound()`. Instead, you can pass any type for which an overloaded `operator<` is defined that enables comparison to the key type.

Heterogenous lookup is enabled on an opt-in basis when you specify the `std::less<>` or `std::greater<>` "diamond functor" comparator when declaring the container variable, as shown here:

```cpp
std::set<BigObject, std::less<>> myNewSet;
```

If you use the default comparator, then the container behaves exactly as it did in C++11 and earlier.

The following example shows how to overload `operator<` to enable users of a `std::set` to do lookups simply by passing in a small string that can be compared to each object's `BigObject::id` member.

```cpp
#include <set>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

class BigObject
{
public:
    string id;
    explicit BigObject(const string& s) : id(s) {}
    bool operator< (const BigObject& other) const
    {
        return this->id < other.id;
    }

    // Other members....
};

inline bool operator<(const string& otherId, const BigObject& obj)
{
    return otherId < obj.id;
}

inline bool operator<(const BigObject& obj, const string& otherId)
{
    return obj.id < otherId;
}

int main()
{
    // Use C++14 brace-init syntax to invoke BigObject(string).
    // The s suffix invokes string ctor. It is a C++14 user-defined
    // literal defined in <string>
    BigObject b1{ "42F"s };
    BigObject b2{ "52F"s };
    BigObject b3{ "62F"s };
    set<BigObject, less<>> myNewSet; // C++14
    myNewSet.insert(b1);
    myNewSet.insert(b2);
    myNewSet.insert(b3);
    auto it = myNewSet.find(string("62F"));
    if (it != myNewSet.end())
        cout << "myNewSet element = " << it->id << endl;
    else
        cout << "element not found " << endl;

    // Keep console open in debug mode:
    cout << endl << "Press Enter to exit.";
    string s;
    getline(cin, s);
    return 0;
}

//Output: myNewSet element = 62F
```

The following member functions in map, multimap, set, and multiset have been overloaded to support heterogeneous lookup:

1. find

1. count

1. lower_bound

1. upper_bound

1. equal_range

## Container Adapters

A container adapter is a variation of a sequence or associative container that restricts the interface for simplicity and clarity. Container adapters don't support iterators.

A `queue` container follows FIFO (first in, first out) semantics. The first element *pushed*—that is, inserted into the queue—is the first to be *popped*—that is, removed from the queue. For more information, see [queue Class](../standard-library/queue-class.md).

A `priority_queue` container is organized such that the element that has the highest value is always first in the queue. For more information, see [priority_queue Class](../standard-library/priority-queue-class.md).

A `stack` container follows LIFO (last in, first out) semantics. The last element pushed on the stack is the first element popped. For more information, see [stack Class](../standard-library/stack-class.md).

Because container adapters don't support iterators, they can't be used with the C++ Standard Library algorithms. For more information, see [Algorithms](../standard-library/algorithms.md).

## Requirements for Container Elements

In general, elements inserted into a C++ Standard Library container can be of just about any object type if they are copyable. Movable-only elements—for example, those such as `vector<unique_ptr<T>>` that are created by using `unique_ptr<>` will work as long as you don't call member functions that attempt to copy them.

The destructor isn't permitted to throw an exception.

Ordered associative containers—described earlier in this article—must have a public comparison operator defined. (By default, the operator is `operator<`, but even types that don't work with `operator<` are supported.

Some operations on containers might also require a public default constructor and a public equivalence operator. For example, the unordered associative containers require support for equality and hashing.

## Accessing Container Elements

The elements of containers are accessed by using iterators. For more information, see [Iterators](../standard-library/iterators.md).

> [!NOTE]
> You can also use [range-based for loops](../cpp/range-based-for-statement-cpp.md) to iterate over C++ Standard Library collections.

## Comparing containers

All containers overload the operator== for comparing two containers of the same type that have the same element type. You can use == to compare a vector\<string> to another vector\<string>, but you can't use it to compare a vector\<string> to a list\<string> or a vector\<string> to a vector\<char*>.  In C++98/03, you can use [std::equal](algorithm-functions.md#equal) or [std::mismatch](algorithm-functions.md#mismatch) to compare dissimilar container types and/or element types. In C++11, you can also use [std::is_permutation](algorithm-functions.md#is_permutation). But in all these cases the functions assume the containers are the same length. If the second range is shorter than the first, then undefined behavior results. If the second range is longer, results can still be incorrect because the comparison never continues past the end of the first range.

### Comparing dissimilar containers (C++14)

In C++14 and later, you can compare dissimilar containers and/or dissimilar elements types by using one of the `std::equal`, `std::mismatch`, or `std::is_permutation` function overloads that take two complete ranges. These overloads enable you to compare containers with different lengths. These overloads are much less susceptible to user error, and are optimized to return false in constant time when containers of dissimilar lengths are compared. Therefore, we recommend you use these overloads unless you have a clear reason not to, or you're using a [std::list](../standard-library/list-class.md) container, which does not benefit from the dual-range optimizations.

## See also

[Parallel Containers](../parallel/concrt/parallel-containers-and-objects.md)\
[\<sample container>](../standard-library/sample-container.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
