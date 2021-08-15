---
description: "Learn more about: hash_multiset Class"
title: "hash_multiset Class"
ms.date: "11/04/2016"
f1_keywords: ["hash_set/stdext::hash_multiset", "hash_set/stdext::hash_multiset::allocator_type", "hash_set/stdext::hash_multiset::const_iterator", "hash_set/stdext::hash_multiset::const_pointer", "hash_set/stdext::hash_multiset::const_reference", "hash_set/stdext::hash_multiset::const_reverse_iterator", "hash_set/stdext::hash_multiset::difference_type", "hash_set/stdext::hash_multiset::iterator", "hash_set/stdext::hash_multiset::key_compare", "hash_set/stdext::hash_multiset::key_type", "hash_set/stdext::hash_multiset::pointer", "hash_set/stdext::hash_multiset::reference", "hash_set/stdext::hash_multiset::reverse_iterator", "hash_set/stdext::hash_multiset::size_type", "hash_set/stdext::hash_multiset::value_compare", "hash_set/stdext::hash_multiset::value_type", "hash_set/stdext::hash_multiset::begin", "hash_set/stdext::hash_multiset::cbegin", "hash_set/stdext::hash_multiset::cend", "hash_set/stdext::hash_multiset::clear", "hash_set/stdext::hash_multiset::count", "hash_set/stdext::hash_multiset::crbegin", "hash_set/stdext::hash_multiset::crend", "hash_set/stdext::hash_multiset::emplace", "hash_set/stdext::hash_multiset::emplace_hint", "hash_set/stdext::hash_multiset::empty", "hash_set/stdext::hash_multiset::end", "hash_set/stdext::hash_multiset::equal_range", "hash_set/stdext::hash_multiset::erase", "hash_set/stdext::hash_multiset::find", "hash_set/stdext::hash_multiset::get_allocator", "hash_set/stdext::hash_multiset::insert", "hash_set/stdext::hash_multiset::key_comp", "hash_set/stdext::hash_multiset::lower_bound", "hash_set/stdext::hash_multiset::max_size", "hash_set/stdext::hash_multiset::rbegin", "hash_set/stdext::hash_multiset::rend", "hash_set/stdext::hash_multiset::size", "hash_set/stdext::hash_multiset::swap", "hash_set/stdext::hash_multiset::upper_bound", "hash_set/stdext::hash_multiset::value_comp"]
helpviewer_keywords: ["stdext::hash_multiset", "stdext::hash_multiset::allocator_type", "stdext::hash_multiset::const_iterator", "stdext::hash_multiset::const_pointer", "stdext::hash_multiset::const_reference", "stdext::hash_multiset::const_reverse_iterator", "stdext::hash_multiset::difference_type", "stdext::hash_multiset::iterator", "stdext::hash_multiset::key_compare", "stdext::hash_multiset::key_type", "stdext::hash_multiset::pointer", "stdext::hash_multiset::reference", "stdext::hash_multiset::reverse_iterator", "stdext::hash_multiset::size_type", "stdext::hash_multiset::value_compare", "stdext::hash_multiset::value_type", "stdext::hash_multiset::begin", "stdext::hash_multiset::cbegin", "stdext::hash_multiset::cend", "stdext::hash_multiset::clear", "stdext::hash_multiset::count", "stdext::hash_multiset::crbegin", "stdext::hash_multiset::crend", "stdext::hash_multiset::emplace", "stdext::hash_multiset::emplace_hint", "stdext::hash_multiset::empty", "stdext::hash_multiset::end", "stdext::hash_multiset::equal_range", "stdext::hash_multiset::erase", "stdext::hash_multiset::find", "stdext::hash_multiset::get_allocator", "stdext::hash_multiset::insert", "stdext::hash_multiset::key_comp", "stdext::hash_multiset::lower_bound", "stdext::hash_multiset::max_size", "stdext::hash_multiset::rbegin", "stdext::hash_multiset::rend", "stdext::hash_multiset::size", "stdext::hash_multiset::swap", "stdext::hash_multiset::upper_bound", "stdext::hash_multiset::value_comp"]
ms.assetid: 0580397a-a76e-40ad-aea2-5c6f3a9d0a21
---
# hash_multiset Class

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

The container class hash_multiset is an extension of the C++ Standard Library and is used for the storage and fast retrieval of data from a collection in which the values of the elements contained serve as the key values and are not required to be unique.

## Syntax

```cpp
template <class Key, class Traits =hash_compare<Key, less <Key>>, class Allocator =allocator <Key>>
class hash_multiset
```

### Parameters

*Key*\
The element data type to be stored in the hash_multiset.

*Traits*\
The type which includes two function objects, one of class compare that is a binary predicate able to compare two element values as sort keys to determine their relative order and a hash function that is a unary predicate mapping key values of the elements to unsigned integers of type `size_t`. This argument is optional, and the `hash_compare<Key, less<Key> >` is the default value.

*Allocator*\
The type that represents the stored allocator object that encapsulates details about the hash_multiset's allocation and deallocation of memory. This argument is optional, and the default value is `allocator<Key>`.

## Remarks

The hash_multiset is:

- An associative container, which a variable size container that supports the efficient retrieval of element values based on an associated key value. Further, it is a simple associative container because its element values are its key values.

- Reversible, because it provides a bidirectional iterator to access its elements.

- Hashed, because its elements are grouped into buckets based on the value of a hash function applied to the key values of the elements.

- Unique in the sense that each of its elements must have a unique key. Because hash_multiset is also a simple associative container, its elements are also unique.

- A class template because the functionality it provides is generic and so independent of the specific type of data contained as elements or keys. The data types to be used for elements and keys are, instead, specified as parameters in the class template along with the comparison function and allocator.

The main advantage of hashing over sorting is greater efficiency: a successful hashing performs insertions, deletions, and finds in constant average time as compared with a time proportional to the logarithm of the number of elements in the container for sorting techniques. The value of an element in a set may not be changed directly. Instead, you must delete old values and insert elements with new values.

The choice of container type should be based in general on the type of searching and inserting required by the application. Hashed associative containers are optimized for the operations of lookup, insertion and removal. The member functions that explicitly support these operations are efficient when used with a well-designed hash function, performing them in a time that is on average constant and not dependent on the number of elements in the container. A well-designed hash function produces a uniform distribution of hashed values and minimizes the number of collisions, where a collision is said to occur when distinct key values are mapped into the same hashed value. In the worst case, with the worst possible hash function, the number of operations is proportional to the number of elements in the sequence (linear time).

The hash_multiset should be the associative container of choice when the conditions associating the values with their keys are satisfies by the application. The elements of a hash_multiset may be multiple and serve as their own sort keys, so keys are not unique. A model for this type of structure is an ordered list of, say, words in which the words may occur more than once. Had multiple occurrences of the words not been allowed, then a hash_set would have been the appropriate container structure. If unique definitions were attached as values to the list of unique keywords, then a hash_map would be an appropriate structure to contain this data. If instead the definitions were not unique, then a hash_multimap would be the container of choice.

The hash_multiset orders the sequence it controls by calling a stored hash traits object of type [value_compare](#value_compare). This stored object may be accessed by calling the member function [key_comp](#key_comp). Such a function object must behave the same as an object of class `hash_compare<Key, less<Key> >`. Specifically, for all values *Key* of type `Key`, the call `Trait(Key)` yields a distribution of values of type `size_t`.

In general, the elements need be merely less than comparable to establish this order: so that, given any two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. On a more technical note, the comparison function is a binary predicate that induces a strict weak ordering in the standard mathematical sense. A binary predicate *f*( *x*, *y*) is a function object that has two argument objects x and y and a return value of true or false. An ordering imposed on a hash_multiset is a strict weak ordering if the binary predicate is irreflexive, antisymmetric, and transitive and if equivalence is transitive, where two objects x and y are defined to be equivalent when both *f*( *x*, *y*) and *f*( *y*, *x*) are false. If the stronger condition of equality between keys replaces that of equivalence, then the ordering becomes total (in the sense that all the elements are ordered with respect to each other) and the keys matched will be indiscernible from each other.

The actual order of elements in the controlled sequence depends on the hash function, the ordering function, and the current size of the hash table stored in the container object. You cannot determine the current size of the hash table, so you cannot in general predict the order of elements in the controlled sequence. Inserting elements invalidates no iterators, and removing elements invalidates only those iterators that had specifically pointed at the removed elements.

The iterator provided by the hash_multiset class is a bidirectional iterator, but the class member functions insert and hash_multiset have versions that take as template parameters a weaker input iterator, whose functionality requirements are more minimal than those guaranteed by the class of bidirectional iterators. The different iterator concepts form a family related by refinements in their functionality. Each iterator concept has its own hash_multiset of requirements, and the algorithms that work with them must limit their assumptions to the requirements provided by that type of iterator. It may be assumed that an input iterator may be dereferenced to refer to some object and that it may be incremented to the next iterator in the sequence. This is a minimal hash_multiset of functionality, but it is enough to be able to talk meaningfully about a range of iterators [ `first`, `last`) in the context of the class member functions.

### Constructors

|Constructor|Description|
|-|-|
|[hash_multiset](#hash_multiset)|Constructs a `hash_multiset` that is empty or that is a copy of all or part of some other `hash_multiset`.|

### Typedefs

|Type name|Description|
|-|-|
|[allocator_type](#allocator_type)|A type that represents the `allocator` class for the `hash_multiset` object.|
|[const_iterator](#const_iterator)|A type that provides a bidirectional iterator that can read a **`const`** element in the `hash_multiset`.|
|[const_pointer](#const_pointer)|A type that provides a pointer to a **`const`** element in a `hash_multiset`.|
|[const_reference](#const_reference)|A type that provides a reference to a **`const`** element stored in a `hash_multiset` for reading and performing **`const`** operations.|
|[const_reverse_iterator](#const_reverse_iterator)|A type that provides a bidirectional iterator that can read any **`const`** element in the `hash_multiset`.|
|[difference_type](#difference_type)|A signed integer type that provides the difference between two iterators that address elements within the same `hash_multiset`.|
|[iterator](#iterator)|A type that provides a bidirectional iterator that can read or modify any element in a `hash_multiset`.|
|[key_compare](#key_compare)|A type that provides a function object that can compare two sort keys to determine the relative order of two elements in the `hash_multiset`.|
|[key_type](#key_type)|A type that describes an object stored as an element of a `hash_set` in its capacity as sort key.|
|[pointer](#pointer)|A type that provides a pointer to an element in a `hash_multiset`.|
|[reference](#reference)|A type that provides a reference to an element stored in a `hash_multiset`.|
|[reverse_iterator](#reverse_iterator)|A type that provides a bidirectional iterator that can read or modify an element in a reversed `hash_multiset`.|
|[size_type](#size_type)|An unsigned integer type that can represent the number of elements in a `hash_multiset`.|
|[value_compare](#value_compare)|A type that provides two function objects, a binary predicate of class compare that can compare two element values of a `hash_multiset` to determine their relative order and a unary predicate that hashes the elements.|
|[value_type](#value_type)|A type that describes an object stored as an element of a `hash_multiset` in its capacity as a value.|

### Member functions

|Member function|Description|
|-|-|
|[begin](#begin)|Returns an iterator that addresses the first element in the `hash_multiset`.|
|[cbegin](#cbegin)|Returns a const iterator addressing the first element in the `hash_multiset`.|
|[cend](#cend)|Returns a const iterator that addresses the location succeeding the last element in a `hash_multiset`.|
|[clear](#clear)|Erases all the elements of a `hash_multiset`.|
|[count](#count)|Returns the number of elements in a `hash_multiset` whose key matches a parameter-specified key|
|[crbegin](#crbegin)|Returns a const iterator addressing the first element in a reversed `hash_multiset`.|
|[crend](#crend)|Returns a const iterator that addresses the location succeeding the last element in a reversed `hash_multiset`.|
|[emplace](#emplace)|Inserts an element constructed in place into a `hash_multiset`.|
|[emplace_hint](#emplace_hint)|Inserts an element constructed in place into a `hash_multiset`, with a placement hint.|
|[empty](#empty)|Tests if a `hash_multiset` is empty.|
|[end](#end)|Returns an iterator that addresses the location succeeding the last element in a `hash_multiset`.|
|[equal_range](#equal_range)|Returns a pair of iterators respectively to the first element in a `hash_multiset` with a key that is greater than a specified key and to the first element in the `hash_multiset` with a key that is equal to or greater than the key.|
|[erase](#erase)|Removes an element or a range of elements in a `hash_multiset` from specified positions or removes elements that match a specified key.|
|[find](#find)|Returns an iterator addressing the location of an element in a `hash_multiset` that has a key equivalent to a specified key.|
|[get_allocator](#get_allocator)|Returns a copy of the `allocator` object used to construct the `hash_multiset`.|
|[insert](#insert)|Inserts an element or a range of elements into a `hash_multiset`.|
|[key_comp](#key_compare)|Retrieves a copy of the comparison object used to order keys in a `hash_multiset`.|
|[lower_bound](#lower_bound)|Returns an iterator to the first element in a `hash_multiset` with a key that is equal to or greater than a specified key.|
|[max_size](#max_size)|Returns the maximum length of the `hash_multiset`.|
|[rbegin](#rbegin)|Returns an iterator addressing the first element in a reversed `hash_multiset`.|
|[rend](#rend)|Returns an iterator that addresses the location succeeding the last element in a reversed `hash_multiset`.|
|[size](#size)|Returns the number of elements in the `hash_multiset`.|
|[swap](#swap)|Exchanges the elements of two `hash_multiset`s.|
|[upper_bound](#upper_bound)|Returns an iterator to the first element in a `hash_multiset` that with a key that is equal to or greater than a specified key.|
|[value_comp](#value_comp)|Retrieves a copy of the hash traits object used to hash and order element key values in a `hash_multiset`.|

### Operators

|Operator|Description|
|-|-|
|[hash_multiset::operator=](#op_eq)|Replaces the elements of the hash_multiset with a copy of another hash_multiset.|

## Requirements

**Header:** \<hash_set>

**Namespace:** stdext

## <a name="allocator_type"></a> hash_multiset::allocator_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that represents the allocator class for the hash_multiset object.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;
```

### Example

See example for [get_allocator](#get_allocator) for an example using `allocator_type`

## <a name="begin"></a> hash_multiset::begin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator that addresses the first element in the hash_multiset.

```cpp
const_iterator begin() const;

iterator begin();
```

### Return Value

A bidirectional iterator addressing the first element in the hash_multiset or the location succeeding an empty hash_multiset.

### Remarks

If the return value of `begin` is assigned to a `const_iterator`, the elements in the hash_multiset object cannot be modified. If the return value of `begin` is assigned to an `iterator`, the elements in the hash_multiset object can be modified.

### Example

```cpp
// hash_multiset_begin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;
   hash_multiset <int>::const_iterator hms1_cIter;

   hms1.insert( 1 );
   hms1.insert( 2 );
   hms1.insert( 3 );

   hms1_Iter = hms1.begin( );
   cout << "The first element of hms1 is " << *hms1_Iter << endl;

   hms1_Iter = hms1.begin( );
   hms1.erase( hms1_Iter );

   // The following 2 lines would err because the iterator is const
   // hms1_cIter = hms1.begin( );
   // hms1.erase( hms1_cIter );

   hms1_cIter = hms1.begin( );
   cout << "The first element of hms1 is now " << *hms1_cIter << endl;
}
```

```Output
The first element of hms1 is 1
The first element of hms1 is now 2
```

## <a name="cbegin"></a> hash_multiset::cbegin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns a const iterator that addresses the first element in the hash_multiset.

```cpp
const_iterator cbegin() const;
```

### Return Value

A const bidirectional iterator addressing the first element in the [hash_multiset](../standard-library/hash-multiset-class.md) or the location succeeding an empty `hash_multiset`.

### Remarks

With the return value of `cbegin`, the elements in the `hash_multiset` object cannot be modified.

### Example

```cpp
// hash_multiset_cbegin.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int>::const_iterator hs1_cIter;

   hs1.insert( 1 );
   hs1.insert( 2 );
   hs1.insert( 3 );

   hs1_cIter = hs1.cbegin( );
   cout << "The first element of hs1 is " << *hs1_cIter << endl;
}
```

```Output
The first element of hs1 is 1
```

## <a name="cend"></a> hash_multiset::cend

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns a const iterator that addresses the location succeeding the last element in a hash_multiset.

```cpp
const_iterator cend() const;
```

### Return Value

A const bidirectional iterator that addresses the location succeeding the last element in a [hash_multiset](../standard-library/hash-multiset-class.md). If the `hash_multiset` is empty, then `hash_multiset::cend == hash_multiset::begin`.

### Remarks

`cend` is used to test whether an iterator has reached the end of its `hash_multiset`. The value returned by `cend` should not be dereferenced.

### Example

```cpp
// hash_multiset_cend.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int> :: const_iterator hs1_cIter;

   hs1.insert( 1 );
   hs1.insert( 2 );
   hs1.insert( 3 );

   hs1_cIter = hs1.cend( );
   hs1_cIter--;
   cout << "The last element of hs1 is " << *hs1_cIter << endl;
}
```

```Output
The last element of hs1 is 3
```

## <a name="clear"></a> hash_multiset::clear

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Erases all the elements of a hash_multiset.

```cpp
void clear();
```

### Remarks

### Example

```cpp
// hash_multiset_clear.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;

   hms1.insert( 1 );
   hms1.insert( 2 );

   cout << "The size of the hash_multiset is initially " << hms1.size( )
        << "." << endl;

   hms1.clear( );
   cout << "The size of the hash_multiset after clearing is "
        << hms1.size( ) << "." << endl;
}
```

```Output
The size of the hash_multiset is initially 2.
The size of the hash_multiset after clearing is 0.
```

## <a name="const_iterator"></a> hash_multiset::const_iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a bidirectional iterator that can read a **`const`** element in the hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;
```

### Remarks

A type `const_iterator` cannot be used to modify the value of an element.

### Example

See example for [begin](#begin) for an example using `const_iterator`.

## <a name="const_pointer"></a> hash_multiset::const_pointer

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a pointer to a **`const`** element in a hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_pointer const_pointer;
```

### Remarks

A type `const_pointer` cannot be used to modify the value of an element.

In most cases, a [const_iterator](#const_iterator) should be used to access the elements in a **`const`** hash_multiset object.

## <a name="const_reference"></a> hash_multiset::const_reference

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a reference to a **`const`** element stored in a hash_multiset for reading and performing **`const`** operations.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_reference const_reference;
```

### Remarks

### Example

```cpp
// hash_multiset_const_reference.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;

   hms1.insert( 10 );
   hms1.insert( 20 );

   // Declare and initialize a const_reference &Ref1
   // to the 1st element
   const int &Ref1 = *hms1.begin( );

   cout << "The first element in the hash_multiset is "
        << Ref1 << "." << endl;

   // The following line would cause an error because the
   // const_reference cannot be used to modify the hash_multiset
   // Ref1 = Ref1 + 5;
}
```

```Output
The first element in the hash_multiset is 10.
```

## <a name="const_reverse_iterator"></a> hash_multiset::const_reverse_iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a bidirectional iterator that can read any **`const`** element in the hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse_iterator const_reverse_iterator;
```

### Remarks

A type `const_reverse_iterator` cannot modify the value of an element and is use to iterate through the hash_multiset in reverse.

### Example

See the example for [rend](#rend) for an example of how to declare and use the `const_reverse_iterator`.

## <a name="count"></a> hash_multiset::count

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns the number of elements in a hash_multiset whose key matches a parameter-specified key.

```cpp
size_type count(const Key& key) const;
```

### Parameters

*key*\
The key of the elements to be matched from the hash_multiset.

### Return Value

The number of elements in the hash_multiset with the parameter-specified key.

### Remarks

The member function returns the number of elements in the following range:

\[ lower_bound(*key*), upper_bound(*key*) ).

### Example

The following example demonstrates the use of the hash_multiset::count member function.

```cpp
// hash_multiset_count.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_multiset<int> hms1;
    hash_multiset<int>::size_type i;

    hms1.insert(1);
    hms1.insert(1);

    // Keys do not need to be unique in hash_multiset,
    // so duplicates may exist.
    i = hms1.count(1);
    cout << "The number of elements in hms1 with a sort key of 1 is: "
         << i << "." << endl;

    i = hms1.count(2);
    cout << "The number of elements in hms1 with a sort key of 2 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in hms1 with a sort key of 1 is: 2.
The number of elements in hms1 with a sort key of 2 is: 0.
```

## <a name="crbegin"></a> hash_multiset::crbegin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns a const iterator addressing the first element in a reversed hash_multiset.

```cpp
const_reverse_iterator crbegin() const;
```

### Return Value

A const reverse bidirectional iterator addressing the first element in a reversed [hash_multiset](../standard-library/hash-multiset-class.md) or addressing what had been the last element in the unreversed `hash_multiset`.

### Remarks

`crbegin` is used with a reversed `hash_multiset` just as [hash_multiset::begin](#begin) is used with a `hash_multiset`.

With the return value of `crbegin`, the `hash_multiset` object cannot be modified.

`crbegin` can be used to iterate through a `hash_multiset` backwards.

### Example

```cpp
// hash_multiset_crbegin.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_crIter = hs1.crbegin( );
   cout << "The first element in the reversed hash_multiset is "
        << *hs1_crIter << "." << endl;
}
```

```Output
The first element in the reversed hash_multiset is 30.
```

## <a name="crend"></a> hash_multiset::crend

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns a const iterator that addresses the location succeeding the last element in a reversed hash_multiset.

```cpp
const_reverse_iterator crend() const;
```

### Return Value

A const reverse bidirectional iterator that addresses the location succeeding the last element in a reversed [hash_multiset](../standard-library/hash-multiset-class.md) (the location that had preceded the first element in the unreversed `hash_multiset`).

### Remarks

`crend` is used with a reversed `hash_multiset` just as [hash_multiset::end](#end) is used with a `hash_multiset`.

With the return value of `crend`, the `hash_multiset` object cannot be modified.

`crend` can be used to test to whether a reverse iterator has reached the end of its hash_multiset.

### Example

```cpp
// hash_multiset_crend.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1;
   hash_multiset <int>::const_reverse_iterator hs1_crIter;

   hs1.insert( 10 );
   hs1.insert( 20 );
   hs1.insert( 30 );

   hs1_crIter = hs1.crend( );
   hs1_crIter--;
   cout << "The last element in the reversed hash_multiset is "
        << *hs1_crIter << "." << endl;
}
```

```Output
The last element in the reversed hash_multiset is 10.
```

## <a name="difference_type"></a> hash_multiset::difference_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A signed integer type that provides the difference between two iterators that address elements within the same hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::difference_type difference_type;
```

### Remarks

The `difference_type` is the type returned when subtracting or incrementing through iterators of the container. The `difference_type` is typically used to represent the number of elements in the range [ `first`, `last`) between the iterators `first` and `last`, includes the element pointed to by `first` and the range of elements up to, but not including, the element pointed to by `last`.

Note that although `difference_type` is available for all iterators that satisfy the requirements of an input iterator, which includes the class of bidirectional iterators supported by reversible containers such as set. Subtraction between iterators is only supported by random-access iterators provided by a random-access container such as vector or deque.

### Example

```cpp
// hash_multiset_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_set>
#include <algorithm>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter, hms1_bIter, hms1_eIter;

   hms1.insert( 20 );
   hms1.insert( 10 );

   // hash_multiset elements need not be unique
   hms1.insert( 20 );

   hms1_bIter = hms1.begin( );
   hms1_eIter = hms1.end( );

   hash_multiset <int>::difference_type   df_typ5, df_typ10,
        df_typ20;

   df_typ5 = count( hms1_bIter, hms1_eIter, 5 );
   df_typ10 = count( hms1_bIter, hms1_eIter, 10 );
   df_typ20 = count( hms1_bIter, hms1_eIter, 20 );

   // The keys & hence the elements of a hash_multiset
   // need not be unique and may occur multiple times
   cout << "The number '5' occurs " << df_typ5
        << " times in hash_multiset hms1.\n";
   cout << "The number '10' occurs " << df_typ10
        << " times in hash_multiset hms1.\n";
   cout << "The number '20' occurs " << df_typ20
        << " times in hash_multiset hms1.\n";

   // Count the number of elements in a hash_multiset
   hash_multiset <int>::difference_type  df_count = 0;
   hms1_Iter = hms1.begin( );
   while ( hms1_Iter != hms1_eIter)
   {
      df_count++;
      hms1_Iter++;
   }

   cout << "The number of elements in the hash_multiset hms1 is "
        << df_count << "." << endl;
}
```

```Output
The number '5' occurs 0 times in hash_multiset hms1.
The number '10' occurs 1 times in hash_multiset hms1.
The number '20' occurs 2 times in hash_multiset hms1.
The number of elements in the hash_multiset hms1 is 3.
```

## <a name="emplace"></a> hash_multiset::emplace

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Inserts an element constructed in place into a hash_multiset.

```cpp
template <class ValTy>
iterator insert(ValTy&& val);
```

### Parameters

*val*\
The value of an element to be inserted into the [hash_multiset](../standard-library/hash-multiset-class.md) unless the `hash_multiset` already contains that element or, more generally, an element whose key is equivalently ordered.

### Return Value

The `emplace` member function returns an iterator that points to the position where the new element was inserted.

### Remarks

### Example

```cpp
// hash_multiset_emplace.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset<string> hms3;
   string str1("a");

   hms3.emplace(move(str1));
   cout << "After the emplace insertion, hms3 contains "
      << *hms3.begin() << "." << endl;
}
```

```Output
After the emplace insertion, hms3 contains a.
```

## <a name="emplace_hint"></a> hash_multiset::emplace_hint

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Inserts an element constructed in place into a hash_multiset, with a placement hint.

```cpp
template <class ValTy>
iterator insert(
    const_iterator where,
    ValTy&& val);
```

### Parameters

*val*\
The value of an element to be inserted into the [hash_multiset](../standard-library/hash-multiset-class.md) unless the `hash_multiset` already contains that element or, more generally, an element whose key is equivalently ordered.

*where*\
The place to start searching for the correct point of insertion. (Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows *where*.)

### Return Value

The [hash_multiset::emplace](#emplace) member function returns an iterator that points to the position where the new element was inserted into the `hash_multiset`.

### Remarks

Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows *where*.

### Example

```cpp
// hash_multiset_emplace_hint.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset<string> hms1;
   string str1("a");

   hms1.insert(hms1.begin(), move(str1));
   cout << "After the emplace insertion, hms1 contains "
      << *hms1.begin() << "." << endl;
}
```

```Output
After the emplace insertion, hms1 contains a.
```

## <a name="empty"></a> hash_multiset::empty

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Tests if a hash_multiset is empty.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the hash_multiset is empty; **`false`** if the hash_multiset is nonempty.

### Remarks

### Example

```cpp
// hash_multiset_empty.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1, hms2;
   hms1.insert ( 1 );

   if ( hms1.empty( ) )
      cout << "The hash_multiset hms1 is empty." << endl;
   else
      cout << "The hash_multiset hms1 is not empty." << endl;

   if ( hms2.empty( ) )
      cout << "The hash_multiset hms2 is empty." << endl;
   else
      cout << "The hash_multiset hms2 is not empty." << endl;
}
```

```Output
The hash_multiset hms1 is not empty.
The hash_multiset hms2 is empty.
```

## <a name="end"></a> hash_multiset::end

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator that addresses the location succeeding the last element in a hash_multiset.

```cpp
const_iterator end() const;

iterator end();
```

### Return Value

A bidirectional iterator that addresses the location succeeding the last element in a hash_multiset. If the hash_multiset is empty, then hash_multiset::end == hash_multiset::begin.

### Remarks

`end` is used to test whether an iterator has reached the end of its hash_multiset. The value returned by `end` should not be dereferenced.

### Example

```cpp
// hash_multiset_end.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: iterator hms1_Iter;
   hash_multiset <int> :: const_iterator hms1_cIter;

   hms1.insert( 1 );
   hms1.insert( 2 );
   hms1.insert( 3 );

   hms1_Iter = hms1.end( );
   hms1_Iter--;
   cout << "The last element of hms1 is " << *hms1_Iter << endl;

   hms1.erase( hms1_Iter );

   // The following 3 lines would err because the iterator is const
   // hms1_cIter = hms1.end( );
   // hms1_cIter--;
   // hms1.erase( hms1_cIter );

   hms1_cIter = hms1.end( );
   hms1_cIter--;
   cout << "The last element of hms1 is now " << *hms1_cIter << endl;
}
```

```Output
The last element of hms1 is 3
The last element of hms1 is now 2
```

## <a name="equal_range"></a> hash_multiset::equal_range

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns a pair of iterators respectively to the first element in a hash_multiset with a key that is greater than a specified key and to the first element in the hash_multiset with a key that is equal to or greater than the key.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### Parameters

*key*\
The argument key to be compared with the sort key of an element from the hash_multiset being searched.

### Return Value

A pair of iterators where the first is the [lower_bound](#lower_bound) of the key and the second is the [upper_bound](#upper_bound) of the key.

To access the first iterator of a pair `pr` returned by the member function, use `pr`. **first** and to dereference the lower bound iterator, use \*( `pr`. **first**). To access the second iterator of a pair `pr` returned by the member function, use `pr`. **second** and to dereference the upper bound iterator, use \*( `pr`. **second**).

### Example

```cpp
// hash_multiset_equal_range.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef hash_multiset<int> IntHSet;
   IntHSet hms1;
   hash_multiset <int> :: const_iterator hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   pair <IntHSet::const_iterator, IntHSet::const_iterator> p1, p2;
   p1 = hms1.equal_range( 20 );

   cout << "The upper bound of the element with "
        << "a key of 20\nin the hash_multiset hms1 is: "
        << *(p1.second) << "." << endl;

   cout << "The lower bound of the element with "
        << "a key of 20\nin the hash_multiset hms1 is: "
        << *(p1.first) << "." << endl;

   // Compare the upper_bound called directly
   hms1_RcIter = hms1.upper_bound( 20 );
   cout << "A direct call of upper_bound( 20 ) gives "
        << *hms1_RcIter << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 20 )." << endl;

   p2 = hms1.equal_range( 40 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == hms1.end( ) )
      && ( p2.second == hms1.end( ) ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "with a key less than 40." << endl;
   else
      cout << "The element of hash_multiset hms1"
           << "with a key >= 40 is: "
           << *(p1.first) << "." << endl;
}
```

```Output
The upper bound of the element with a key of 20
in the hash_multiset hms1 is: 30.
The lower bound of the element with a key of 20
in the hash_multiset hms1 is: 20.
A direct call of upper_bound( 20 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 20 ).
The hash_multiset hms1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a> hash_multiset::erase

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Removes an element or a range of elements in a hash_multiset from specified positions or removes elements that match a specified key.

```cpp
iterator erase(iterator where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```

### Parameters

*where*\
Position of the element to be removed from the hash_multiset.

*first*\
Position of the first element removed from the hash_multiset.

*last*\
Position just beyond the last element removed from the hash_multiset.

*key*\
The key of the elements to be removed from the hash_multiset.

### Return Value

For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or a pointer to the end of the hash_multiset if no such element exists. For the third member function, the number of elements that have been removed from the hash_multiset.

### Remarks

The member functions never throw an exception.

### Example

The following example demonstrates the use of the hash_multiset::erase member function.

```cpp
// hash_multiset_erase.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_multiset<int> hms1, hms2, hms3;
    hash_multiset<int> :: iterator pIter, Iter1, Iter2;
    int i;
    hash_multiset<int>::size_type n;

    for (i = 1; i < 5; i++)
    {
        hms1.insert(i);
        hms2.insert(i * i);
        hms3.insert(i - 1);
    }

    // The 1st member function removes an element at a given position
    Iter1 = ++hms1.begin();
    hms1.erase(Iter1);

    cout << "After the 2nd element is deleted,\n"
         << "the hash_multiset hms1 is:" ;
    for (pIter = hms1.begin(); pIter != hms1.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 2nd member function removes elements
    // in the range [ first,  last)
    Iter1 = ++hms2.begin();
    Iter2 = --hms2.end();
    hms2.erase(Iter1, Iter2);

    cout << "After the middle two elements are deleted,\n"
         << "the hash_multiset hms2 is:" ;
    for (pIter = hms2.begin(); pIter != hms2.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 3rd member function removes elements with a given  key
    n = hms3.erase(2);

    cout << "After the element with a key of 2 is deleted,\n"
         << "the hash_multiset hms3 is:" ;
    for (pIter = hms3.begin(); pIter != hms3.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;

    // The 3rd member function returns the number of elements removed
    cout << "The number of elements removed from hms3 is: "
         << n << "." << endl;

    // The dereferenced iterator can also be used to specify a key
    Iter1 = ++hms3.begin();
    hms3.erase(Iter1);

    cout << "After another element with a key "
         << "equal to that of the 2nd element\n"
         << "is deleted, the hash_multiset hms3 is:" ;
    for (pIter = hms3.begin(); pIter != hms3.end(); pIter++)
        cout << " " << *pIter;
    cout << "." << endl;
}
```

```Output
After the 2nd element is deleted,
the hash_multiset hms1 is: 1 3 4.
After the middle two elements are deleted,
the hash_multiset hms2 is: 16 4.
After the element with a key of 2 is deleted,
the hash_multiset hms3 is: 0 1 3.
The number of elements removed from hms3 is: 1.
After another element with a key equal to that of the 2nd element
is deleted, the hash_multiset hms3 is: 0 3.
```

## <a name="find"></a> hash_multiset::find

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator addressing the location of an element in a hash_multiset that has a key equivalent to a specified key.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### Parameters

*key*\
The argument key to be matched by the sort key of an element from the hash_multiset being searched.

### Return Value

An [iterator](#iterator) or [const_iterator](#const_iterator) that addresses the location of an element equivalent to a specified key or that addresses the location succeeding the last element in the hash_multiset if no match is found for the key.

### Remarks

The member function returns an iterator that addresses an element in the hash_multiset whose sort key is `equivalent` to the argument key under a binary predicate that induces an ordering based on a less-than comparability relation.

If the return value of `find` is assigned to a `const_iterator`, the hash_multiset object cannot be modified. If the return value of `find` is assigned to an `iterator`, the hash_multiset object can be modified.

### Example

```cpp
// hash_multiset_find.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: const_iterator hms1_AcIter, hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_RcIter = hms1.find( 20 );
   cout << "The element of hash_multiset hms1 with a key of 20 is: "
        << *hms1_RcIter << "." << endl;

   hms1_RcIter = hms1.find( 40 );

   // If no match is found for the key, end( ) is returned
   if ( hms1_RcIter == hms1.end( ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of hash_multiset hms1 with a key of 40 is: "
           << *hms1_RcIter << "." << endl;

   // The element at a specific location in the hash_multiset can be found
   // by using a dereferenced iterator addressing the location
   hms1_AcIter = hms1.end( );
   hms1_AcIter--;
   hms1_RcIter = hms1.find( *hms1_AcIter );
   cout << "The element of hms1 with a key matching "
        << "that of the last element is: "
        << *hms1_RcIter << "." << endl;
}
```

```Output
The element of hash_multiset hms1 with a key of 20 is: 20.
The hash_multiset hms1 doesn't have an element with a key of 40.
The element of hms1 with a key matching that of the last element is: 30.
```

## <a name="get_allocator"></a> hash_multiset::get_allocator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns a copy of the allocator object used to construct the hash_multiset.

```cpp
Allocator get_allocator() const;
```

### Return Value

The allocator used by the hash_multiset to manage memory, which is the class's template parameter `Allocator`.

For more information on `Allocator`, see the Remarks section of the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

### Remarks

Allocators for the hash_multiset class specify how the class manages storage. The default allocators supplied with C++ Standard Library container classes are sufficient for most programming needs. Writing and using your own allocator class is an advanced C++ topic.

### Example

```cpp
// hash_multiset_get_allocator.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   // The following lines declare objects
   // that use the default allocator.
   hash_multiset <int, hash_compare <int, less<int> > > hms1;
   hash_multiset <int, hash_compare <int, greater<int> > > hms2;
   hash_multiset <double, hash_compare <double,
      less<double> >, allocator<double> > hms3;

   hash_multiset <int, hash_compare <int,
      greater<int> > >::allocator_type hms2_Alloc;
   hash_multiset <double>::allocator_type hms3_Alloc;
   hms2_Alloc = hms2.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << hms1.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << hms3.max_size( ) <<  "." << endl;

   // The following lines create a hash_multiset hms4
   // with the allocator of hash_multiset hms1.
   hash_multiset <int>::allocator_type hms4_Alloc;
   hash_multiset <int> hms4;
   hms4_Alloc = hms2.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated by the other
   if( hms2_Alloc == hms4_Alloc )
   {
      cout << "The allocators are interchangeable."
           << endl;
   }
   else
   {
      cout << "The allocators are not interchangeable."
           << endl;
   }
}
```

## <a name="hash_multiset"></a> hash_multiset::hash_multiset

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Constructs a `hash_multiset` that is empty or that is a copy of all or part of some other `hash_multiset`.

```cpp
hash_multiset();

explicit hash_multiset(
    const Traits& Comp);

hash_multiset(
    const Traits& Comp,
    const Allocator& Al);

hash_multiset(
    const hash_multiset<Key, Traits, Allocator>& Right);

hash_multiset(
    hash_multiset&& Right
};
hash_multiset (initializer_list<Type> IList);

hash_multiset(
    initializer_list<Tu[e> IList, const Compare& Comp):
hash_multiset(
    initializer_list<Type> IList, const Compare& Comp, const Allocator& Al);

template <class InputIterator>
hash_multiset(
    InputIterator first,
    InputIterator last);

template <class InputIterator>
hash_multiset(
    InputIterator first,
    InputIterator last,
    const Traits& Comp);

template <class InputIterator>
hash_multiset(
    InputIterator first,
    InputIterator last,
    const Traits& Comp,
    const Allocator& Al);
```

### Parameters

*Al*\
The storage allocator class to be used for this `hash_multiset` object, which defaults to `Allocator`.

*Comp*\
The comparison function of type `const Traits` used to order the elements in the `hash_multiset`, which defaults to `hash_compare`.

*Right*\
The `hash_multiset` of which the constructed `hash_multiset` is to be a copy.

*first*\
The position of the first element in the range of elements to be copied.

*last*\
The position of the first element beyond the range of elements to be copied.

*IList*\
The initializer_list that contains the elements to be copied.

### Remarks

All constructors store a type of allocator object that manages memory storage for the `hash_multiset` and that can later be returned by calling [hash_multiset::get_allocator](#get_allocator). The allocator parameter is often omitted in the class declarations and preprocessing macros used to substitute alternative allocators.

All constructors initialize their hash_multisets.

All constructors store a function object of type `Traits` that is used to establish an order among the keys of the `hash_multiset` and that can later be returned by calling [hash_multiset::key_comp](#key_comp). For more information on `Traits` see the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

The first three constructors specify an empty initial `hash_multiset`, the second specifying the type of comparison function (*Comp*) to be used in establishing the order of the elements and the third explicitly specifying the allocator type (*Al*) to be used. The keyword **`explicit`** suppresses certain kinds of automatic type conversion.

The fourth constructor moves the `hash_multiset` `Right`.

The fifth, sixth, and seventh constructors use an initializer_list.

The last three constructors copy the range [ `first`, `last`) of a `hash_multiset` with increasing explicitness in specifying the type of comparison function of class Compare and allocator.

The actual order of elements in a hashed set container depends on the hash function, the ordering function and the current size of the hash table and cannot, in general, be predicted as it could with the set container, where it was determined by the ordering function alone.

## <a name="insert"></a> hash_multiset::insert

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Inserts an element or a range of elements into a hash_multiset.

```cpp
iterator insert(
    const Type& value);

iterator insert(
    iterator where,
    const Type& Al);

void insert(
    initializer_list<Type> IList);

iterator insert(
    const Type& value);

iterator insert(
    Iterator where,
    const Type& value);

template <class InputIterator>
void insert(
    InputIterator first,
    InputIterator last);

template <class ValTy>
iterator insert(
    ValTy&& value);

template <class ValTy>
iterator insert(
    const_iterator where,
    ValTy&& value);
```

### Parameters

*value*\
The value of an element to be inserted into the hash_multiset unless the hash_multiset already contains that element or, more generally, an element whose key is equivalently ordered.

*where*\
The place to start searching for the correct point of insertion. (Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows *where*.)

*first*\
The position of the first element to be copied from a hash_multiset.

*last*\
The position just beyond the last element to be copied from a hash_multiset.

*IList*\
The initializer_list that contains the elements to copy.

### Return Value

The first two insert member functions return an iterator that points to the position where the new element was inserted.

The next three member functions use an initializer_list.

The third member function inserts the sequence of element values into a hash_multiset corresponding to each element addressed by an iterator of in the range [ `first`, `last`) of a specified hash_multiset.

### Remarks

Insertion can occur in amortized constant time for the hint version of insert, instead of logarithmic time, if the insertion point immediately follows *where*.

## <a name="iterator"></a> hash_multiset::iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a bidirectional iterator that can read or modify any element in a hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;
```

### Remarks

A type `iterator` can be used to modify the value of an element.

### Example

See example for [begin](#begin) for an example of how to declare and use `iterator`.

## <a name="key_comp"></a> hash_multiset::key_comp

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Retrieves a copy of the comparison object used to order keys in a hash_multiset.

```cpp
key_compare key_comp() const;
```

### Return Value

Returns the hash_multiset template parameter *Traits*, which contains function objects that are used to hash and to order the elements of the container.

For more information on *Traits* see the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

### Remarks

The stored object defines a member function:

`bool operator<(const Key& _xVal, const Key& _yVal);`

which returns **`true`** if `_xVal` precedes and is not equal to `_yVal` in the sort order.

Note that both [key_compare](#key_compare) and [value_compare](#value_compare) are synonyms for the template parameter *Traits*. Both types are provided for the hash_multiset and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.

### Example

```cpp
// hash_multiset_key_comp.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multiset <int, hash_compare < int, less<int> > >hms1;
   hash_multiset<int, hash_compare < int, less<int> > >::key_compare kc1
          = hms1.key_comp( ) ;
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true, "
           << "where kc1 is the function object of hms1."
           << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false "
           << "where kc1 is the function object of hms1."
        << endl;
   }

   hash_multiset <int, hash_compare < int, greater<int> > > hms2;
   hash_multiset<int, hash_compare < int, greater<int> > >::key_compare
         kc2 = hms2.key_comp( ) ;
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true, "
           << "where kc2 is the function object of hms2."
           << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false, "
           << "where kc2 is the function object of hms2."
           << endl;
   }
}
```

## <a name="key_compare"></a> hash_multiset::key_compare

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides two function objects, a binary predicate of class compare that can compare two element values of a hash_multiset to determine their relative order and a unary predicate that hashes the elements.

```cpp
typedef Traits key_compare;
```

### Remarks

`key_compare` is a synonym for the template parameter *Traits*.

For more information on *Traits* see the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

Note that both `key_compare` and value_compare are synonyms for the template parameter *Traits*. Both types are provided for the hash_set and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.

### Example

See example for [key_comp](#key_comp) for an example of how to declare and use `key_compare`.

## <a name="key_type"></a> hash_multiset::key_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a function object that can compare sort keys to determine the relative order of two elements in the hash_multiset.

```cpp
typedef Key key_type;
```

### Remarks

`key_type` is a synonym for the template parameter *Key*.

Note that both `key_type` and [value_type](../standard-library/hash-set-class.md#value_type) are synonyms for the template parameter *Key*. Both types are provided for the set and multiset classes, where they are identical, for compatibility with the map and multimap classes, where they are distinct.

For more information on *Key*, see the Remarks section of the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

### Example

See example for [value_type](#value_type) for an example of how to declare and use `key_type`.

## <a name="lower_bound"></a> hash_multiset::lower_bound

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator to the first element in a hash_multiset with a key that is equal to or greater than a specified key.

```cpp
const_iterator lower_bound(const Key& key) const;

iterator lower_bound(const Key& key);
```

### Parameters

*key*\
The argument key to be compared with the sort key of an element from the hash_multiset being searched.

### Return Value

An [iterator](#iterator) or [const_iterator](#const_iterator) that addresses the location of the first element in a hash_multiset with a key that is equal to or greater than the argument key, or that addresses the location succeeding the last element in the hash_multiset if no match is found for the key.

### Remarks

### Example

```cpp
// hash_multiset_lower_bound.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main() {
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: const_iterator hms1_AcIter, hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_RcIter = hms1.lower_bound( 20 );
   cout << "The element of hash_multiset hms1 with a key of 20 is: "
        << *hms1_RcIter << "." << endl;

   hms1_RcIter = hms1.lower_bound( 40 );

   // If no match is found for the key, end( ) is returned
   if ( hms1_RcIter == hms1.end( ) )
      cout << "The hash_multiset hms1 doesn't have an element "
           << "with a key of 40." << endl;
   else
      cout << "The element of hash_multiset hms1 with a key of 40 is: "
           << *hms1_RcIter << "." << endl;

   // An element at a specific location in the hash_multiset can be found
   // by using a dereferenced iterator that addresses the location
   hms1_AcIter = hms1.end( );
   hms1_AcIter--;
   hms1_RcIter = hms1.lower_bound( *hms1_AcIter );
   cout << "The element of hms1 with a key matching "
        << "that of the last element is: "
        << *hms1_RcIter << "." << endl;
}
```

## <a name="max_size"></a> hash_multiset::max_size

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns the maximum length of the hash_multiset.

```cpp
size_type max_size() const;
```

### Return Value

The maximum possible length of the hash_multiset.

### Remarks

### Example

```cpp
// hash_multiset_max_size.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::size_type i;

   i = hms1.max_size( );
   cout << "The maximum possible length "
        << "of the hash_multiset is " << i << "." << endl;
}
```

## <a name="op_eq"></a> hash_multiset::operator=

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Replaces the elements of the hash_multiset with a copy of another hash_multiset.

```cpp
hash_multiset& operator=(const hash_multiset& right);

hash_multiset& operator=(hash_multiset&& right);
```

### Parameters

*right*\
The [hash_multiset](../standard-library/hash-multiset-class.md) being copied into the `hash_multiset`.

### Remarks

After erasing any existing elements in a `hash_multiset`, `operator=` either copies or moves the contents of *right* into the `hash_multiset`.

### Example

```cpp
// hash_multiset_operator_as.cpp
// compile with: /EHsc
#include <hash_multiset>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset<int> v1, v2, v3;
   hash_multiset<int>::iterator iter;

   v1.insert(10);

   cout << "v1 = " ;
   for (iter = v1.begin(); iter != v1.end(); iter++)
      cout << iter << " ";
   cout << endl;

   v2 = v1;
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter << " ";
   cout << endl;

// move v1 into v2
   v2.clear();
   v2 = move(v1);
   cout << "v2 = ";
   for (iter = v2.begin(); iter != v2.end(); iter++)
      cout << iter << " ";
   cout << endl;
}
```

## <a name="pointer"></a> hash_multiset::pointer

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a pointer to an element in a hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::pointer pointer;
```

### Remarks

A type `pointer` can be used to modify the value of an element.

In most cases, an [iterator](#iterator) should be used to access the elements in a multiset object.

## <a name="rbegin"></a> hash_multiset::rbegin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator addressing the first element in a reversed hash_multiset.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### Return Value

A reverse bidirectional iterator addressing the first element in a reversed hash_multiset or addressing what had been the last element in the unreversed hash_multiset.

### Remarks

`rbegin` is used with a reversed hash_multiset just as [begin](#begin) is used with a hash_multiset.

If the return value of `rbegin` is assigned to a `const_reverse_iterator`, then the hash_multiset object cannot be modified. If the return value of `rbegin` is assigned to a `reverse_iterator`, then the hash_multiset object can be modified.

`rbegin` can be used to iterate through a hash_multiset backwards.

### Example

```cpp
// hash_multiset_rbegin.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;
   hash_multiset <int>::reverse_iterator hms1_rIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_rIter = hms1.rbegin( );
   cout << "The first element in the reversed hash_multiset is "
        << *hms1_rIter << "." << endl;

   // begin can be used to start an iteration
   // through a hash_multiset in a forward order
   cout << "The hash_multiset is: ";
   for ( hms1_Iter = hms1.begin( ) ; hms1_Iter != hms1.end( );
         hms1_Iter++ )
      cout << *hms1_Iter << " ";
   cout << endl;

   // rbegin can be used to start an iteration
   // through a hash_multiset in a reverse order
   cout << "The reversed hash_multiset is: ";
   for ( hms1_rIter = hms1.rbegin( ) ; hms1_rIter != hms1.rend( );
         hms1_rIter++ )
      cout << *hms1_rIter << " ";
   cout << endl;

   // A hash_multiset element can be erased by dereferencing to its key
   hms1_rIter = hms1.rbegin( );
   hms1.erase ( *hms1_rIter );

   hms1_rIter = hms1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed hash_multiset is "<< *hms1_rIter << "."
        << endl;
}
```

```Output
The first element in the reversed hash_multiset is 30.
The hash_multiset is: 10 20 30
The reversed hash_multiset is: 30 20 10
After the erasure, the first element in the reversed hash_multiset is 20.
```

## <a name="reference"></a> hash_multiset::reference

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a reference to an element stored in a hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::reference reference;
```

### Remarks

### Example

```cpp
// hash_multiset_reference.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;

   hms1.insert( 10 );
   hms1.insert( 20 );

   // Declare and initialize a reference &Ref1 to the 1st element
   int &Ref1 = *hms1.begin( );

   cout << "The first element in the hash_multiset is "
        << Ref1 << "." << endl;

   // The value of the 1st element of the hash_multiset can be
   // changed by operating on its (non const) reference
   Ref1 = Ref1 + 5;

   cout << "The first element in the hash_multiset is now "
        << *hms1.begin() << "." << endl;
}
```

```Output
The first element in the hash_multiset is 10.
The first element in the hash_multiset is now 15.
```

## <a name="rend"></a> hash_multiset::rend

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator that addresses the location succeeding the last element in a reversed hash_multiset.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### Return Value

A reverse bidirectional iterator that addresses the location succeeding the last element in a reversed hash_multiset (the location that had preceded the first element in the unreversed hash_multiset).

### Remarks

`rend` is used with a reversed hash_multiset just as [end](#end) is used with a hash_multiset.

If the return value of `rend` is assigned to a `const_reverse_iterator`, then the hash_multiset object cannot be modified. If the return value of `rend` is assigned to a `reverse_iterator`, then the hash_multiset object can be modified. The value returned by `rend` should not be dereferenced.

`rend` can be used to test to whether a reverse iterator has reached the end of its hash_multiset.

### Example

```cpp
// hash_multiset_rend.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;
   hash_multiset <int>::reverse_iterator hms1_rIter;
   hash_multiset <int>::const_reverse_iterator hms1_crIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_rIter = hms1.rend( );
   hms1_rIter--;
   cout << "The last element in the reversed hash_multiset is "
        << *hms1_rIter << "." << endl;

   // end can be used to terminate an iteration
   // through a hash_multiset in a forward order
   cout << "The hash_multiset is: ";
   for ( hms1_Iter = hms1.begin( ) ; hms1_Iter != hms1.end( );
         hms1_Iter++ )
      cout << *hms1_Iter << " ";
   cout << "." << endl;

   // rend can be used to terminate an iteration
   // through a hash_multiset in a reverse order
   cout << "The reversed hash_multiset is: ";
   for ( hms1_rIter = hms1.rbegin( ) ; hms1_rIter != hms1.rend( );
         hms1_rIter++ )
      cout << *hms1_rIter << " ";
   cout << "." << endl;

   hms1_rIter = hms1.rend( );
   hms1_rIter--;
   hms1.erase ( *hms1_rIter );

   hms1_rIter = hms1.rend( );
   hms1_rIter--;
   cout << "After the erasure, the last element in the "
        << "reversed hash_multiset is " << *hms1_rIter << "."
        << endl;
}
```

```Output
The last element in the reversed hash_multiset is 10.
The hash_multiset is: 10 20 30 .
The reversed hash_multiset is: 30 20 10 .
After the erasure, the last element in the reversed hash_multiset is 20.
```

## <a name="reverse_iterator"></a> hash_multiset::reverse_iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides a bidirectional iterator that can read or modify an element in a reversed hash_multiset.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;
```

### Remarks

A type `reverse_iterator` is use to iterate through the hash_multiset in reverse.

### Example

See example for [rbegin](#rbegin) for an example of how to declare and use `reverse_iterator`.

## <a name="size"></a> hash_multiset::size

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns the number of elements in the hash_multiset.

```cpp
size_type size() const;
```

### Return Value

The current length of the hash_multiset.

### Remarks

### Example

```cpp
// hash_multiset_size.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: size_type i;

   hms1.insert( 1 );
   i = hms1.size( );
   cout << "The hash_multiset length is " << i << "." << endl;

   hms1.insert( 2 );
   i = hms1.size( );
   cout << "The hash_multiset length is now " << i << "." << endl;
}
```

```Output
The hash_multiset length is 1.
The hash_multiset length is now 2.
```

## <a name="size_type"></a> hash_multiset::size_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

An unsigned integer type that can represent the number of elements in a hash_multiset.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::size_type size_type;
```

### Remarks

### Example

See example for [size](#size) for an example of how to declare and use `size_type`

## <a name="swap"></a> hash_multiset::swap

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Exchanges the elements of two hash_multisets.

```cpp
void swap(hash_multiset& right);
```

### Parameters

*right*\
The argument hash_multiset providing the elements to be swapped with the target hash_multiset.

### Remarks

The member function invalidates no references, pointers, or iterators that designate elements in the two hash_multisets whose elements are being exchanged.

### Example

```cpp
// hash_multiset_swap.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1, hms2, hms3;
   hash_multiset <int>::iterator hms1_Iter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );
   hms2.insert( 100 );
   hms2.insert( 200 );
   hms3.insert( 300 );

   cout << "The original hash_multiset hms1 is:";
   for ( hms1_Iter = hms1.begin( ); hms1_Iter != hms1.end( );
         hms1_Iter++ )
         cout << " " << *hms1_Iter;
   cout   << "." << endl;

   // This is the member function version of swap
   hms1.swap( hms2 );

   cout << "After swapping with hms2, list hms1 is:";
   for ( hms1_Iter = hms1.begin( ); hms1_Iter != hms1.end( );
         hms1_Iter++ )
         cout << " " << *hms1_Iter;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( hms1, hms3 );

   cout << "After swapping with hms3, list hms1 is:";
   for ( hms1_Iter = hms1.begin( ); hms1_Iter != hms1.end( );
         hms1_Iter++ )
         cout << " " << *hms1_Iter;
   cout   << "." << endl;
}
```

```Output
The original hash_multiset hms1 is: 10 20 30.
After swapping with hms2, list hms1 is: 200 100.
After swapping with hms3, list hms1 is: 300.
```

## <a name="upper_bound"></a> hash_multiset::upper_bound

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Returns an iterator to the first element in a hash_multiset with a key that is greater than a specified key.

```cpp
const_iterator upper_bound(const Key& key) const;

iterator upper_bound(const Key& key);
```

### Parameters

*key*\
The argument key to be compared with the sort key of an element from the hash_multiset being searched.

### Return Value

An [iterator](#iterator) or [const_iterator](#const_iterator) that addresses the location of the first element in a hash_multiset with a key greater than the argument key, or that addresses the location succeeding the last element in the hash_multiset if no match is found for the key.

### Remarks

### Example

```cpp
// hash_multiset_upper_bound.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int> :: const_iterator hms1_AcIter, hms1_RcIter;

   hms1.insert( 10 );
   hms1.insert( 20 );
   hms1.insert( 30 );

   hms1_RcIter = hms1.upper_bound( 20 );
   cout << "The first element of hash_multiset hms1" << endl
        << "with a key greater than 20 is: "
        << *hms1_RcIter << "." << endl;

   hms1_RcIter = hms1.upper_bound( 30 );

   // If no match is found for the key, end( ) is returned
   if ( hms1_RcIter == hms1.end( ) )
      cout << "The hash_multiset hms1 doesn't have an element\n"
           << "with a key greater than 30." << endl;
   else
      cout << "The element of hash_multiset hms1"
           << "with a key > 40 is: "
           << *hms1_RcIter << "." << endl;

   // An element at a specific location in the hash_multiset can be
   // found by using a dereferenced iterator addressing the location
   hms1_AcIter = hms1.begin( );
   hms1_RcIter = hms1.upper_bound( *hms1_AcIter );
   cout << "The first element of hms1 with a key greater than "
        << endl << "that of the initial element of hms1 is: "
        << *hms1_RcIter << "." << endl;
}
```

```Output
The first element of hash_multiset hms1
with a key greater than 20 is: 30.
The hash_multiset hms1 doesn't have an element
with a key greater than 30.
The first element of hms1 with a key greater than
that of the initial element of hms1 is: 20.
```

## <a name="value_comp"></a> hash_multiset::value_comp

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

Retrieves a copy of the comparison object used to order element values in a hash_multiset.

```cpp
value_compare value_comp() const;
```

### Return Value

Returns the hash_multiset template parameter *Traits*, which contains function objects that are used to hash and to order elements of the container.

For more information on *Traits* see the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

### Remarks

The stored object defines a member function:

**bool operator**( **constKey&**`_xVal`, **const Key&** *_yVal*);

which returns **`true`** if `_xVal` precedes and is not equal to `_yVal` in the sort order.

Note that both [key_compare](#key_compare) and [value_compare](#value_compare) are synonyms for the template parameter *Traits*. Both types are provided for the hash_multiset and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.

### Example

```cpp
// hash_multiset_value_comp.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_multiset <int, hash_compare < int, less<int> > > hms1;
   hash_multiset <int, hash_compare < int, less<int> > >::value_compare
      vc1 = hms1.value_comp( );
   bool result1 = vc1( 2, 3 );
   if( result1 == true )
   {
      cout << "vc1( 2,3 ) returns value of true, "
           << "where vc1 is the function object of hms1."
           << endl;
   }
   else
   {
      cout << "vc1( 2,3 ) returns value of false, "
           << "where vc1 is the function object of hms1."
           << endl;
   }

   hash_multiset <int, hash_compare < int, greater<int> > > hms2;
   hash_multiset<int, hash_compare < int, greater<int> > >::
           value_compare vc2 = hms2.value_comp( );
   bool result2 = vc2( 2, 3 );
   if( result2 == true )
   {
      cout << "vc2( 2,3 ) returns value of true, "
           << "where vc2 is the function object of hms2."
           << endl;
   }
   else
   {
      cout << "vc2( 2,3 ) returns value of false, "
           << "where vc2 is the function object of hms2."
           << endl;
   }
}
```

```Output
vc1( 2,3 ) returns value of true, where vc1 is the function object of hms1.
vc2( 2,3 ) returns value of false, where vc2 is the function object of hms2.
```

## <a name="value_compare"></a> hash_multiset::value_compare

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that provides two function objects, a binary predicate of class compare that can compare two element values of a hash_multiset to determine their relative order and a unary predicate that hashes the elements.

```cpp
typedef key_compare value_compare;
```

### Remarks

`value_compare` is a synonym for the template parameter *Traits*.

For more information on *Traits* see the [hash_multiset Class](../standard-library/hash-multiset-class.md) topic.

Note that both [key_compare](#key_compare) and `value_compare` are synonyms for the template parameter *Traits*. Both types are provided for the classes set and multiset, where they are identical, for compatibility with the classes map and multimap, where they are distinct.

### Example

See example for [value_comp](#value_comp) for an example of how to declare and use `value_compare`.

## <a name="value_type"></a> hash_multiset::value_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multiset Class](../standard-library/unordered-multiset-class.md).

A type that describes an object stored as an element as a hash_multiset in its capacity as a value.

```cpp
typedef Key value_type;
```

### Example

```cpp
// hash_multiset_value_type.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hms1;
   hash_multiset <int>::iterator hms1_Iter;

   // Declare value_type
   hash_multiset <int> :: value_type hmsvt_Int;

   hmsvt_Int = 10;   // Initialize value_type

   // Declare key_type
   hash_multiset <int> :: key_type hmskt_Int;
   hmskt_Int = 20;             // Initialize key_type

   hms1.insert( hmsvt_Int );         // Insert value into s1
   hms1.insert( hmskt_Int );         // Insert key into s1

   // A hash_multiset accepts key_types or value_types as elements
   cout << "The hash_multiset has elements:";
   for ( hms1_Iter = hms1.begin() ; hms1_Iter != hms1.end( );
         hms1_Iter++)
      cout << " " << *hms1_Iter;
      cout << "." << endl;
}
```

```Output
The hash_multiset has elements: 10 20.
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
