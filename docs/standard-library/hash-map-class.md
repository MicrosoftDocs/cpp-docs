---
description: "Learn more about: hash_map Class"
title: "hash_map Class"
ms.date: "11/04/2016"
f1_keywords: ["hash_map/stdext::hash_map", "hash_map/stdext::hash_map::allocator_type", "hash_map/stdext::hash_map::const_iterator", "hash_map/stdext::hash_map::const_pointer", "hash_map/stdext::hash_map::const_reference", "hash_map/stdext::hash_map::const_reverse_iterator", "hash_map/stdext::hash_map::difference_type", "hash_map/stdext::hash_map::iterator", "hash_map/stdext::hash_map::key_compare", "hash_map/stdext::hash_map::key_type", "hash_map/stdext::hash_map::mapped_type", "hash_map/stdext::hash_map::pointer", "hash_map/stdext::hash_map::reference", "hash_map/stdext::hash_map::reverse_iterator", "hash_map/stdext::hash_map::size_type", "hash_map/stdext::hash_map::value_type", "hash_map/stdext::hash_map::at", "hash_map/stdext::hash_map::begin", "hash_map/stdext::hash_map::cbegin", "hash_map/stdext::hash_map::cend", "hash_map/stdext::hash_map::clear", "hash_map/stdext::hash_map::count", "hash_map/stdext::hash_map::crbegin", "hash_map/stdext::hash_map::crend", "hash_map/stdext::hash_map::emplace", "hash_map/stdext::hash_map::emplace_hint", "hash_map/stdext::hash_map::empty", "hash_map/stdext::hash_map::end", "hash_map/stdext::hash_map::equal_range", "hash_map/stdext::hash_map::erase", "hash_map/stdext::hash_map::find", "hash_map/stdext::hash_map::get_allocator", "hash_map/stdext::hash_map::insert", "hash_map/stdext::hash_map::key_comp", "hash_map/stdext::hash_map::lower_bound", "hash_map/stdext::hash_map::max_size", "hash_map/stdext::hash_map::rbegin", "hash_map/stdext::hash_map::rend", "hash_map/stdext::hash_map::size", "hash_map/stdext::hash_map::swap", "hash_map/stdext::hash_map::upper_bound", "hash_map/stdext::hash_map::value_comp"]
helpviewer_keywords: ["stdext::hash_map", "stdext::hash_map::allocator_type", "stdext::hash_map::const_iterator", "stdext::hash_map::const_pointer", "stdext::hash_map::const_reference", "stdext::hash_map::const_reverse_iterator", "stdext::hash_map::difference_type", "stdext::hash_map::iterator", "stdext::hash_map::key_compare", "stdext::hash_map::key_type", "stdext::hash_map::mapped_type", "stdext::hash_map::pointer", "stdext::hash_map::reference", "stdext::hash_map::reverse_iterator", "stdext::hash_map::size_type", "stdext::hash_map::value_type", "stdext::hash_map::at", "stdext::hash_map::begin", "stdext::hash_map::cbegin", "stdext::hash_map::cend", "stdext::hash_map::clear", "stdext::hash_map::count", "stdext::hash_map::crbegin", "stdext::hash_map::crend", "stdext::hash_map::emplace", "stdext::hash_map::emplace_hint", "stdext::hash_map::empty", "stdext::hash_map::end", "stdext::hash_map::equal_range", "stdext::hash_map::erase", "stdext::hash_map::find", "stdext::hash_map::get_allocator", "stdext::hash_map::insert", "stdext::hash_map::key_comp", "stdext::hash_map::lower_bound", "stdext::hash_map::max_size", "stdext::hash_map::rbegin", "stdext::hash_map::rend", "stdext::hash_map::size", "stdext::hash_map::swap", "stdext::hash_map::upper_bound", "stdext::hash_map::value_comp"]
ms.assetid: 40879dfc-51ba-4a59-9f9e-26208de568a8
---
# hash_map Class

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Stores and retrieves data quickly from a collection in which each element is a pair that has a sort key whose value is unique and an associated data value.

## Syntax

```cpp
template <class Key,
    class Type,
    class Traits=hash_compare<Key, less<Key>>,
    class Allocator=allocator<pair <const Key, Type>>>
class hash_map
```

### Parameters

*Key*\
The key data type to be stored in the hash_map.

*Type*\
The element data type to be stored in the hash_map.

*Traits*\
The type which includes two function objects, one of class compare able to compare two element values as sort keys to determine their relative order and a hash function that is a unary predicate mapping key values of the elements to unsigned integers of type `size_t`. This argument is optional, and hash_compare<`Key`, less<`Key`> > is the default value.

*Allocator*\
The type that represents the stored allocator object that encapsulates details about the hash_map's allocation and deallocation of memory. This argument is optional, and the default value is allocator\<pair <const `Key`, `Type`>>.

## Remarks

The hash_map is:

- An associative container, which a variable size container that supports the efficient retrieval of element values based on an associated key value.

- Reversible, because it provides a bidirectional iterator to access its elements.

- Hashed, because its elements are grouped into buckets based on the value of a hash function applied to the key values of the elements.

- Unique in the sense that each of its elements must have a unique key.

- A pair associative container, because its element data values are distinct from its key values.

- A class template, because the functionality it provides is generic and so independent of the specific type of data contained as elements or keys. The data types to be used for elements and keys are, instead, specified as parameters in the class template along with the comparison function and allocator.

The main advantage of hashing over sorting is greater efficiency; a successful hashing performs insertions, deletions, and finds in constant average time as compared with a time proportional to the logarithm of the number of elements in the container for sorting techniques. The value of an element in a hash_map, but not its associated key value, may be changed directly. Instead, key values associated with old elements must be deleted and new key values associated with new elements inserted.

The choice of container type should be based in general on the type of searching and inserting required by the application. Hashed associative containers are optimized for the operations of lookup, insertion and removal. The member functions that explicitly support these operations are efficient when used with a well-designed hash function, performing them in a time that is on average constant and not dependent on the number of elements in the container. A well-designed hash function produces a uniform distribution of hashed values and minimizes the number of collisions, where a collision is said to occur when distinct key values are mapped into the same hashed value. In the worst case, with the worst possible hash function, the number of operations is proportional to the number of elements in the sequence (linear time).

The hash_map should be the associative container of choice when the conditions associating the values with their keys are satisfied by the application. A model for this type of structure is an ordered list of uniquely occurring keywords with associated string values providing, say, definitions. If, instead, the words had more than one correct definition, so that keys were not unique, then a hash_multimap would be the container of choice. If, on the other hand, just the list of words were being stored, then a hash_set would be the correct container. If multiple occurrences of the words were allowed, then a hash_multiset would be the appropriate container structure.

The hash_map orders the sequence it controls by calling a stored hash *Traits* object of class [value_compare](../standard-library/value-compare-class.md). This stored object may be accessed by calling the member function [key_comp](#key_comp). Such a function object must behave the same as an object of class [hash_compare](../standard-library/hash-compare-class.md)<Key, less\<Key>>. Specifically, for all values *Key* of type *Key*, the call `Traits`( `Key` ) yields a distribution of values of type `size_t`.

In general, the elements need be merely less than comparable to establish this order: so that, given any two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. On a more technical note, the comparison function is a binary predicate that induces a strict weak ordering in the standard mathematical sense. A binary predicate f(x y) is a function object that has two argument objects `x` and `y` and a return value of **`true`** or **`false`**. An ordering imposed on a hash_map is a strict weak ordering if the binary predicate is irreflexive, antisymmetric, and transitive and if equivalence is transitive, where two objects x and y are defined to be equivalent when both f(x, y) and f(y, x) are false. If the stronger condition of equality between keys replaces that of equivalence, then the ordering becomes total (in the sense that all the elements are ordered with respect to each other) and the keys matched will be indiscernible from each other.

The actual order of elements in the controlled sequence depends on the hash function, the ordering function, and the current size of the hash table stored in the container object. You cannot determine the current size of the hash table, so you cannot in general predict the order of elements in the controlled sequence. Inserting elements invalidates no iterators, and removing elements invalidates only those iterators that had specifically pointed at the removed elements.

The iterator provided by the hash_map class is a bidirectional iterator, but the class member functions [insert](#insert) and [hash_map](#hash_map) have versions that take as template parameters a weaker input iterator, whose functionality requirements are more minimal than those guaranteed by the class of bidirectional iterators. The different iterator concepts form a family related by refinements in their functionality. Each iterator concept has its own set of requirements, and the algorithms that work with them must limit their assumptions to the requirements provided by that type of iterator. It may be assumed that an input iterator may be dereferenced to refer to some object and that it may be incremented to the next iterator in the sequence. This is a minimal set of functionality, but it is enough to be able to talk meaningfully about a range of iterators `[First, Last)` in the context of the class member functions.

### Constructors

|Constructor|Description|
|-|-|
|[hash_map](#hash_map)|Constructs a `hash_map` that is empty or that is a copy of all or part of some other `hash_map`.|

### Typedefs

|Type name|Description|
|-|-|
|[allocator_type](#allocator_type)|A type that represents the `allocator` class for the `hash_map` object.|
|[const_iterator](#const_iterator)|A type that provides a bidirectional iterator that can read a **`const`** element in the `hash_map`.|
|[const_pointer](#const_pointer)|A type that provides a pointer to a **`const`** element in a `hash_map`.|
|[const_reference](#const_reference)|A type that provides a reference to a **`const`** element stored in a `hash_map` for reading and performing **`const`** operations.|
|[const_reverse_iterator](#const_reverse_iterator)|A type that provides a bidirectional iterator that can read any **`const`** element in the `hash_map`.|
|[difference_type](#difference_type)|A signed integer type that can be used to represent the number of elements of a `hash_map` in a range between elements pointed to by iterators.|
|[iterator](#iterator)|A type that provides a bidirectional iterator that can read or modify any element in a `hash_map`.|
|[key_compare](#key_compare)|A type that provides a function object that can compare two sort keys to determine the relative order of two elements in the `hash_map`.|
|[key_type](#key_type)|A type describes the sort key object that constitutes each element of the `hash_map`.|
|[mapped_type](#mapped_type)|A type that represents the data type stored in a `hash_map`.|
|[pointer](#pointer)|A type that provides a pointer to an element in a `hash_map`.|
|[reference](#reference)|A type that provides a reference to an element stored in a `hash_map`.|
|[reverse_iterator](#reverse_iterator)|A type that provides a bidirectional iterator that can read or modify an element in a reversed `hash_map`.|
|[size_type](#size_type)|An unsigned integer type that can represent the number of elements in a `hash_map`.|
|[value_type](#value_type)|A type that provides a function object that can compare two elements as sort keys to determine their relative order in the `hash_map`.|

### Member functions

|Member function|Description|
|-|-|
|[at](#at)|Finds an element in a `hash_map` with a specified key value.|
|[begin](#begin)|Returns an iterator addressing the first element in the `hash_map`.|
|[cbegin](#cbegin)|Returns a const iterator addressing the first element in the `hash_map`.|
|[cend](#cend)|Returns a const iterator that addresses the location succeeding the last element in a `hash_map`.|
|[clear](#clear)|Erases all the elements of a `hash_map`.|
|[count](#count)|Returns the number of elements in a `hash_map` whose key matches a parameter-specified key.|
|[crbegin](#crbegin)|Returns a const iterator addressing the first element in a reversed `hash_map`.|
|[crend](#crend)|Returns a const iterator that addresses the location succeeding the last element in a reversed `hash_map`.|
|[emplace](#emplace)|Inserts an element constructed in place into a `hash_map`.|
|[emplace_hint](#emplace_hint)|Inserts an element constructed in place into a `hash_map`, with a placement hint.|
|[empty](#empty)|Tests if a `hash_map` is empty.|
|[end](#end)|Returns an iterator that addresses the location succeeding the last element in a `hash_map`.|
|[equal_range](#equal_range)|Returns a pair of iterators, respectively, to the first element in a `hash_map` with a key that is greater than a specified key and to the first element in the `hash_map` with a key that is equal to or greater than the key.|
|[erase](#erase)|Removes an element or a range of elements in a `hash_map` from specified positions|
|[find](#find)|Returns an iterator addressing the location of an element in a `hash_map` that has a key equivalent to a specified key.|
|[get_allocator](#get_allocator)|Returns a copy of the `allocator` object used to construct the `hash_map`.|
|[insert](#insert)|Inserts an element or a range of elements into a `hash_map`.|
|[key_comp](#key_comp)|Returns an iterator to the first element in a `hash_map` with a key value that is equal to or greater than that of a specified key.|
|[lower_bound](#lower_bound)|Returns an iterator to the first element in a `hash_map` with a key value that is equal to or greater than that of a specified key.|
|[max_size](#max_size)|Returns the maximum length of the `hash_map`.|
|[rbegin](#rbegin)|Returns an iterator addressing the first element in a reversed `hash_map`.|
|[rend](#rend)|Returns an iterator that addresses the location succeeding the last element in a reversed `hash_map`.|
|[size](#size)|Returns the number of elements in the `hash_map`.|
|[swap](#swap)|Exchanges the elements of two `hash_map`s.|
|[upper_bound](#upper_bound)|Returns an iterator to the first element in a `hash_map` that with a key value that is greater than that of a specified key.|
|[value_comp](#value_comp)|Retrieves a copy of the comparison object used to order element values in a `hash_map`.|

### Operators

|Operator|Description|
|-|-|
|[operator&#91;&#93;](#op_at)|Inserts an element into a `hash_map` with a specified key value.|
|[hash_map::operator=](#op_eq)|Replaces the elements of a `hash_map` with a copy of another `hash_map`.|

## Requirements

**Header:** \<hash_map>

**Namespace:** stdext

## <a name="allocator_type"></a> hash_map::allocator_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that represents the allocator class for the hash_map object.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;
```

### Example

See example for [get_allocator](#get_allocator) for an example using `allocator_type`.

## <a name="at"></a> hash_map::at

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Finds an element in a hash_map with a specified key value.

```cpp
Type& at(const Key& key);

const Type& at(const Key& key) const;
```

### Parameters

*key*\
The key value of the element that is to be found.

### Return Value

A reference to the data value of the element found.

### Remarks

If the argument key value is not found, then the function throws an object of class [out_of_range Class](../standard-library/out-of-range-class.md).

### Example

```cpp
// hash_map_at.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_map <int, int> hm1;

   // Insert data values
   hm1.insert ( cInt2Int ( 1, 10 ) );
   hm1.insert ( cInt2Int ( 2, 20 ) );
   hm1.insert ( cInt2Int ( 3, 30 ) );

   cout  << "The values of the mapped elements are:";
   for ( int i = 1 ; i <= hm1.size() ; i++ )
      cout << " " << hm1.at(i);
   cout << "." << endl;
}
```

## <a name="begin"></a> hash_map::begin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator addressing the first element in the hash_map.

```cpp
const_iterator begin() const;

iterator begin();
```

### Return Value

A bidirectional iterator addressing the first element in the hash_map or the location succeeding an empty hash_map.

### Example

```cpp
// hash_map_begin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 0, 0 ) );
   hm1.insert ( Int_Pair ( 1, 1 ) );
   hm1.insert ( Int_Pair ( 2, 4 ) );

   hm1_cIter = hm1.begin ( );
   cout << "The first element of hm1 is "
        << hm1_cIter -> first << "." << endl;

   hm1_Iter = hm1.begin ( );
   hm1.erase ( hm1_Iter );

   // The following 2 lines would err because the iterator is const
   // hm1_cIter = hm1.begin ( );
   // hm1.erase ( hm1_cIter );

   hm1_cIter = hm1.begin( );
   cout << "The first element of hm1 is now "
        << hm1_cIter -> first << "." << endl;
}
```

```Output
The first element of hm1 is 0.
The first element of hm1 is now 1.
```

## <a name="cbegin"></a> hash_map::cbegin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a const iterator addressing the first element in the hash_map.

```cpp
const_iterator cbegin() const;
```

### Return Value

A const bidirectional iterator addressing the first element in the [hash_map](../standard-library/hash-map-class.md) or the location succeeding an empty `hash_map`.

### Example

```cpp
// hash_map_cbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 2, 4 ) );

   hm1_cIter = hm1.cbegin ( );
   cout << "The first element of hm1 is "
        << hm1_cIter -> first << "." << endl;
   }
```

```Output
The first element of hm1 is 2.
```

## <a name="cend"></a> hash_map::cend

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a const iterator that addresses the location succeeding the last element in a hash_map.

```cpp
const_iterator cend() const;
```

### Return Value

A const bidirectional iterator that addresses the location succeeding the last element in a [hash_map](../standard-library/hash-map-class.md). If the `hash_map` is empty, then `hash_map::cend == hash_map::begin`.

### Remarks

`cend` is used to test whether an iterator has reached the end of its `hash_map`.

The value returned by `cend` should not be dereferenced.

### Example

```cpp
// hash_map_cend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_cIter = hm1.cend( );
   hm1_cIter--;
   cout << "The value of last element of hm1 is "
        << hm1_cIter -> second << "." << endl;
   }
```

```Output
The value of last element of hm1 is 30.
```

## <a name="clear"></a> hash_map::clear

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Erases all the elements of a hash_map.

```cpp
void clear();
```

### Remarks

### Example

The following example demonstrates the use of the hash_map::clear member function.

```cpp
// hash_map_clear.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1;
    hash_map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    hm1.insert(Int_Pair(2, 4));

    i = hm1.size();
    cout << "The size of the hash_map is initially "
         << i << "." << endl;

    hm1.clear();
    i = hm1.size();
    cout << "The size of the hash_map after clearing is "
         << i << "." << endl;
}
```

```Output
The size of the hash_map is initially 2.
The size of the hash_map after clearing is 0.
```

## <a name="const_iterator"></a> hash_map::const_iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a bidirectional iterator that can read a **`const`** element in the hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;
```

### Remarks

A type `const_iterator` cannot be used to modify the value of an element.

The `const_iterator` defined by hash_map points to elements that are objects of [value_type](#value_type), that is of type `pair< const Key, Type >`, whose first member is the key to the element and whose second member is the mapped datum held by the element.

To dereference a `const_iterator` `cIter` pointing to an element in a hash_map, use the `->` operator.

To access the value of the key for the element, use `cIter->first`, which is equivalent to `(*cIter).first`. To access the value of the mapped datum for the element, use `cIter->second`, which is equivalent to `(*cIter).second`.

### Example

See example for [begin](#begin) for an example using `const_iterator`.

## <a name="const_pointer"></a> hash_map::const_pointer

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a pointer to a **`const`** element in a hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_pointer const_pointer;
```

### Remarks

A type `const_pointer` cannot be used to modify the value of an element.

In most cases, an [iterator](#iterator) should be used to access the elements in a hash_map object.

## <a name="const_reference"></a> hash_map::const_reference

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a reference to a **`const`** element stored in a hash_map for reading and performing **`const`** operations.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::const_reference const_reference;
```

### Remarks

### Example

```cpp
// hash_map_const_ref.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map<int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( hm1.begin( ) -> first );

   // The following line would cause an error because the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( hm1.begin( ) -> first );

   cout << "The key of the first element in the hash_map is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( hm1.begin( ) -> second );

   cout << "The data value of the first element in the hash_map is "
        << Ref2 << "." << endl;
}
```

```Output
The key of the first element in the hash_map is 1.
The data value of the first element in the hash_map is 10.
```

## <a name="const_reverse_iterator"></a> hash_map::const_reverse_iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a bidirectional iterator that can read any **`const`** element in the hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse)iterator const_reverse_iterator;
```

### Remarks

A type `const_reverse_iterator` cannot modify the value of an element and is use to iterate through the hash_map in reverse.

The `const_reverse_iterator` defined by hash_map points to elements that are objects of [value_type](#value_type), that is of type `pair`\< **const Key, Type**>, whose first member is the key to the element and whose second member is the mapped datum held by the element.

To dereference a `const_reverse_iterator` `crIter` pointing to an element in a hash_map, use the **->** operator.

To access the value of the key for the element, use `crIter` -> **first**, which is equivalent to (\* `crIter`) **.first**. To access the value of the mapped datum for the element, use `crIter` -> **second**, which is equivalent to (\* `crIter`). **first**.

### Example

See the example for [rend](#rend) for an example of how to declare and use the `const_reverse_iterator`.

## <a name="count"></a> hash_map::count

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns the number of elements in a hash_map whose key matches a parameter-specified key.

```cpp
size_type count(const Key& key) const;
```

### Parameters

*key*\
The key value of the elements to be matched from the hash_map.

### Return Value

1 if the hash_map contains an element whose sort key matches the parameter key; 0 if the hash_map doesn't contain an element with a matching key.

### Remarks

The member function returns the number of elements *x* in the range

\[ lower_bound(*key*), upper_bound(*key*) )

which is 0 or 1 in the case of hash_map, which is a unique associative container.

### Example

The following example demonstrates the use of the hash_map::count member function.

```cpp
// hash_map_count.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1;
    hash_map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair (1, 1));
    hm1.insert(Int_Pair (2, 1));
    hm1.insert(Int_Pair (1, 4));
    hm1.insert(Int_Pair (2, 1));

    // Keys must be unique in hash_map, so duplicates are ignored
    i = hm1.count(1);
    cout << "The number of elements in hm1 with a sort key of 1 is: "
         << i << "." << endl;

    i = hm1.count(2);
    cout << "The number of elements in hm1 with a sort key of 2 is: "
         << i << "." << endl;

    i = hm1.count(3);
    cout << "The number of elements in hm1 with a sort key of 3 is: "
         << i << "." << endl;
}
```

```Output
The number of elements in hm1 with a sort key of 1 is: 1.
The number of elements in hm1 with a sort key of 2 is: 1.
The number of elements in hm1 with a sort key of 3 is: 0.
```

## <a name="crbegin"></a> hash_map::crbegin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a const iterator addressing the first element in a reversed hash_map.

```cpp
const_reverse_iterator crbegin() const;
```

### Return Value

A const reverse bidirectional iterator addressing the first element in a reversed [hash_map](../standard-library/hash-map-class.md) or addressing what had been the last element in the unreversed `hash_map`.

### Remarks

`crbegin` is used with a reversed hash_map just as [begin](#begin) is used with a `hash_map`.

With the return value of `crbegin`, the `hash_map` object cannot be modified.

`crbegin` can be used to iterate through a `hash_map` backwards.

### Example

```cpp
// hash_map_crbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_crIter = hm1.crbegin( );
   cout << "The first element of the reversed hash_map hm1 is "
        << hm1_crIter -> first << "." << endl;
}
```

```Output
The first element of the reversed hash_map hm1 is 3.
```

## <a name="crend"></a> hash_map::crend

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a const iterator that addresses the location succeeding the last element in a reversed hash_map.

```cpp
const_reverse_iterator crend() const;
```

### Return Value

A const reverse bidirectional iterator that addresses the location succeeding the last element in a reversed [hash_map](../standard-library/hash-map-class.md) (the location that had preceded the first element in the unreversed `hash_map`).

### Remarks

`crend` is used with a reversed `hash_map` just as [hash_map::end](#end) is used with a `hash_map`.

With the return value of `crend`, the `hash_map` object cannot be modified.

`crend` can be used to test to whether a reverse iterator has reached the end of its `hash_map`.

The value returned by `crend` should not be dereferenced.

### Example

```cpp
// hash_map_crend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_crIter = hm1.crend( );
   hm1_crIter--;
   cout << "The last element of the reversed hash_map hm1 is "
        << hm1_crIter -> first << "." << endl;
}
```

```Output
The last element of the reversed hash_map hm1 is 3.
```

## <a name="difference_type"></a> hash_map::difference_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A signed integer type that can be used to represent the number of elements of a hash_map in a range between elements pointed to by iterators.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::difference_type difference_type;
```

### Example

```cpp
// hash_map_diff_type.cpp
// compile with: /EHsc
#include <iostream>
#include <hash_map>
#include <algorithm>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 3, 20 ) );

   // The following won't insert, because map keys are unique
   hm1.insert ( Int_Pair ( 2, 30 ) );

   hash_map <int, int>::iterator hm1_Iter, hm1_bIter, hm1_eIter;
   hm1_bIter = hm1.begin( );
   hm1_eIter = hm1.end( );

   // Count the number of elements in a hash_map
   hash_map <int, int>::difference_type  df_count = 0;
   hm1_Iter = hm1.begin( );
   while ( hm1_Iter != hm1_eIter)
   {
      df_count++;
      hm1_Iter++;
   }

   cout << "The number of elements in the hash_map hm1 is: "
        << df_count << "." << endl;

   cout  << "The keys of the mapped elements are:";
   for ( hm1_Iter= hm1.begin( ) ; hm1_Iter!= hm1.end( ) ;
         hm1_Iter++)
      cout << " " << hm1_Iter-> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( hm1_Iter= hm1.begin( ) ; hm1_Iter!= hm1.end( ) ;
         hm1_Iter++)
      cout << " " << hm1_Iter-> second;
   cout << "." << endl;
}
```

```Output
The number of elements in the hash_map hm1 is: 3.
The keys of the mapped elements are: 1 2 3.
The values of the mapped elements are: 10 20 20.
```

## <a name="emplace"></a> hash_map::emplace

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Inserts an element constructed in place into a hash_map.

```cpp
template <class ValTy>
pair <iterator, bool>
emplace(
    ValTy&& val);
```

### Parameters

*val*\
The value used to move construct an element to be inserted into the [hash_map](../standard-library/hash-map-class.md) unless the `hash_map` already contains that element (or, more generally, an element whose key is equivalently ordered).

### Return Value

The `emplace` member function returns a pair whose bool component returns true if an insertion was made and false if the `hash_map` already contained an element whose key had an equivalent value in the ordering, and whose iterator component returns the address where a new element was inserted or where the element was already located.

To access the iterator component of a pair `pr` returned by this member function, use `pr.first`, and to dereference it, use `*(pr.first)`. To access the **`bool`** component of a pair `pr` returned by this member function, use `pr.second`, and to dereference it, use `*(pr.second)`.

### Remarks

The [hash_map::value_type](#value_type) of an element is a pair, so that the value of an element will be an ordered pair with the first component equal to the key value and the second component equal to the data value of the element.

### Example

```cpp
// hash_map_emplace.cpp
// compile with: /EHsc
#include<hash_map>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, string> hm1;
    typedef pair<int, string> is1(1, "a");

    hm1.emplace(move(is1));
    cout << "After the emplace insertion, hm1 contains:" << endl
      << " " << hm1.begin()->first
      << " => " << hm1.begin()->second
      << endl;
}
```

```Output
After the emplace insertion, hm1 contains:
1 => a
```

## <a name="emplace_hint"></a> hash_map::emplace_hint

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Inserts an element constructed in place into a hash_map, with a placement hint.

```cpp
template <class ValTy>
iterator emplace_hint(
    const_iterator _Where,
    ValTy&& val);
```

### Parameters

*val*\
The value used to move construct an element to be inserted into the [hash_map](../standard-library/hash-map-class.md) unless the `hash_map` already contains that element (or, more generally, an element whose key is equivalently ordered).

*_Where*\
A hint regarding the place to start searching for the correct point of insertion.

### Return Value

The [hash_multimap::emplace](../standard-library/hash-multimap-class.md#emplace) member function returns an iterator that points to the position where the new element was inserted into the `hash_map`, or where the existing element with equivalent ordering is located.

### Remarks

The [hash_map::value_type](#value_type) of an element is a pair, so that the value of an element will be an ordered pair with the first component equal to the key value and the second component equal to the data value of the element.

Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows *_Where*.

### Example

```cpp
// hash_map_emplace_hint.cpp
// compile with: /EHsc
#include<hash_map>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, string> hm1;
    typedef pair<int, string> is1(1, "a");

    hm1.emplace(hm1.begin(), move(is1));
    cout << "After the emplace, hm1 contains:" << endl
      << " " << hm1.begin()->first
      << " => " << hm1.begin()->second
      << endl;
}
```

```Output
After the emplace insertion, hm1 contains:
1 => a
```

## <a name="empty"></a> hash_map::empty

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Tests if a hash_map is empty.

```cpp
bool empty() const;
```

### Return Value

**`true`** if the hash_map is empty; **`false`** if the hash_map is nonempty.

### Remarks

### Example

```cpp
// hash_map_empty.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2;

   typedef pair <int, int> Int_Pair;
   hm1.insert ( Int_Pair ( 1, 1 ) );

   if ( hm1.empty( ) )
      cout << "The hash_map hm1 is empty." << endl;
   else
      cout << "The hash_map hm1 is not empty." << endl;

   if ( hm2.empty( ) )
      cout << "The hash_map hm2 is empty." << endl;
   else
      cout << "The hash_map hm2 is not empty." << endl;
}
```

```Output
The hash_map hm1 is not empty.
The hash_map hm2 is empty.
```

## <a name="end"></a> hash_map::end

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator that addresses the location succeeding the last element in a hash_map.

```cpp
const_iterator end() const;

iterator end();
```

### Return Value

A bidirectional iterator that addresses the location succeeding the last element in a hash_map. If the hash_map is empty, then hash_map::end == hash_map::begin.

### Remarks

`end` is used to test whether an iterator has reached the end of its hash_map.

The value returned by `end` should not be dereferenced.

### Example

```cpp
// hash_map_end.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: const_iterator hm1_cIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_cIter = hm1.end( );
   hm1_cIter--;
   cout << "The value of last element of hm1 is "
        << hm1_cIter -> second << "." << endl;

   hm1_Iter = hm1.end( );
   hm1_Iter--;
   hm1.erase ( hm1_Iter );

   // The following 2 lines would err because the iterator is const
   // hm1_cIter = hm1.end ( );
   // hm1_cIter--;
   // hm1.erase ( hm1_cIter );

   hm1_cIter = hm1.end( );
   hm1_cIter--;
   cout << "The value of last element of hm1 is now "
        << hm1_cIter -> second << "." << endl;
}
```

```Output
The value of last element of hm1 is 30.
The value of last element of hm1 is now 20.
```

## <a name="equal_range"></a> hash_map::equal_range

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a pair of iterators respectively to the first element in a hash_map with a key that is greater than a specified key and to the first element in the hash_map with a key that is equal to or greater than the key.

```cpp
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```

### Parameters

*key*\
The argument key value to be compared with the sort key of an element from the hash_map being searched.

### Return Value

A pair of iterators such that the first is the [lower_bound](#lower_bound) of the key and the second is the [upper_bound](#upper_bound) of the key.

To access the first iterator of a pair `pr` returned by the member function, use `pr`. **first** and to dereference the lower bound iterator, use \*( `pr`. **first**). To access the second iterator of a pair `pr` returned by the member function, use `pr`. **second** and to dereference the upper bound iterator, use \*( `pr`. **second**).

### Remarks

### Example

```cpp
// hash_map_equal_range.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef hash_map <int, int> IntMap;
   IntMap hm1;
   hash_map <int, int> :: const_iterator hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   pair <IntMap::const_iterator, IntMap::const_iterator> p1, p2;
   p1 = hm1.equal_range( 2 );

   cout << "The lower bound of the element with "
        << "a key of 2 in the hash_map hm1 is: "
        << p1.first -> second << "." << endl;

   cout << "The upper bound of the element with "
        << "a key of 2 in the hash_map hm1 is: "
        << p1.second -> second << "." << endl;

   // Compare the upper_bound called directly
   hm1_RcIter = hm1.upper_bound( 2 );

   cout << "A direct call of upper_bound( 2 ) gives "
        << hm1_RcIter -> second << "," << endl
        << "matching the 2nd element of the pair"
        << " returned by equal_range( 2 )." << endl;

   p2 = hm1.equal_range( 4 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == hm1.end( ) ) && ( p2.second == hm1.end( ) ) )
      cout << "The hash_map hm1 doesn't have an element "
             << "with a key less than 40." << endl;
   else
      cout << "The element of hash_map hm1 with a key >= 40 is: "
           << p1.first -> first << "." << endl;
}
```

```Output
The lower bound of the element with a key of 2 in the hash_map hm1 is: 20.
The upper bound of the element with a key of 2 in the hash_map hm1 is: 30.
A direct call of upper_bound( 2 ) gives 30,
matching the 2nd element of the pair returned by equal_range( 2 ).
The hash_map hm1 doesn't have an element with a key less than 40.
```

## <a name="erase"></a> hash_map::erase

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Removes an element or a range of elements in a hash_map from specified positions or removes elements that match a specified key.

```cpp
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```

### Parameters

*_Where*\
Position of the element to be removed from the hash_map.

*first*\
Position of the first element removed from the hash_map.

*last*\
Position just beyond the last element removed from the hash_map.

*key*\
The key value of the elements to be removed from the hash_map.

### Return Value

For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or a pointer to the end of the hash_map if no such element exists.

For the third member function, returns the number of elements that have been removed from the hash_map.

### Remarks

The member functions never throw an exception.

### Example

The following example demonstrates the use of the hash_map::erase member function.

```cpp
// hash_map_erase.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1, hm2, hm3;
    hash_map<int, int> :: iterator pIter, Iter1, Iter2;
    int i;
    hash_map<int, int>::size_type n;
    typedef pair<int, int> Int_Pair;

    for (i = 1; i < 5; i++)
    {
        hm1.insert(Int_Pair (i, i));
        hm2.insert(Int_Pair (i, i*i));
        hm3.insert(Int_Pair (i, i-1));
    }

    // The 1st member function removes an element at a given position
    Iter1 = ++hm1.begin();
    hm1.erase(Iter1);

    cout << "After the 2nd element is deleted, the hash_map hm1 is:";
    for (pIter = hm1.begin(); pIter != hm1.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 2nd member function removes elements
    // in the range [ first,  last)
    Iter1 = ++hm2.begin();
    Iter2 = --hm2.end();
    hm2.erase(Iter1, Iter2);

    cout << "After the middle two elements are deleted, "
         << "the hash_map hm2 is:";
    for (pIter = hm2.begin(); pIter != hm2.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 3rd member function removes elements with a given  key
    n = hm3.erase(2);

    cout << "After the element with a key of 2 is deleted,\n"
         << "the hash_map hm3 is:";
    for (pIter = hm3.begin(); pIter != hm3.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;

    // The 3rd member function returns the number of elements removed
    cout << "The number of elements removed from hm3 is: "
         << n << "." << endl;

    // The dereferenced iterator can also be used to specify a key
    Iter1 = ++hm3.begin();
    hm3.erase(Iter1);

    cout << "After another element with a key equal to that"
         << endl;
    cout  << "of the 2nd element is deleted, "
          << "the hash_map hm3 is:";
    for (pIter = hm3.begin(); pIter != hm3.end(); pIter++)
        cout << " " << pIter -> second;
    cout << "." << endl;
}
```

```Output
After the 2nd element is deleted, the hash_map hm1 is: 1 3 4.
After the middle two elements are deleted, the hash_map hm2 is: 1 16.
After the element with a key of 2 is deleted,
the hash_map hm3 is: 0 2 3.
The number of elements removed from hm3 is: 1.
After another element with a key equal to that
of the 2nd element is deleted, the hash_map hm3 is: 0 3.
```

## <a name="find"></a> hash_map::find

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator addressing the location of an element in a hash_map that has a key equivalent to a specified key.

```cpp
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```

### Parameters

*key*\
The key value to be matched by the sort key of an element from the hash_map being searched.

### Return Value

An iterator that addresses the location of an element with a specified key, or the location succeeding the last element in the hash_map if no match is found for the key.

### Remarks

`find` returns an iterator that addresses an element in the hash_map whose sort key is equivalent to the argument key under a binary predicate that induces an ordering based on a less than comparability relation.

If the return value of `find` is assigned to a [const_iterator](#const_iterator), the hash_map object cannot be modified. If the return value of `find` is assigned to an [iterator](#iterator), the hash_map object can be modified

### Example

```cpp
// hash_map_find.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.find( 2 );
   cout << "The element of hash_map hm1 with a key of 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   hm1_RcIter = hm1.find( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_map hm1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of hash_map hm1 with a key of 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // The element at a specific location in the hash_map can be found
   // using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.end( );
   hm1_AcIter--;
   hm1_RcIter = hm1.find( hm1_AcIter -> first );
   cout << "The element of hm1 with a key matching "
        << "that of the last element is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The element of hash_map hm1 with a key of 2 is: 20.
The hash_map hm1 doesn't have an element with a key of 4.
The element of hm1 with a key matching that of the last element is: 30.
```

## <a name="get_allocator"></a> hash_map::get_allocator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a copy of the allocator object used to construct the hash_map.

```cpp
Allocator get_allocator() const;
```

### Return Value

The allocator used by the hash_map.

### Remarks

Allocators for the hash_map class specify how the class manages storage. The default allocators supplied with C++ Standard Library container classes are sufficient for most programming needs. Writing and using your own allocator class is an advanced C++ topic.

### Example

```cpp
// hash_map_get_allocator.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int>::allocator_type hm1_Alloc;
   hash_map <int, int>::allocator_type hm2_Alloc;
   hash_map <int, double>::allocator_type hm3_Alloc;
   hash_map <int, int>::allocator_type hm4_Alloc;

   // The following lines declare objects
   // that use the default allocator.
   hash_map <int, int> hm1;
   hash_map <int, int> hm2;
   hash_map <int, double> hm3;

   hm1_Alloc = hm1.get_allocator( );
   hm2_Alloc = hm2.get_allocator( );
   hm3_Alloc = hm3.get_allocator( );

   cout << "The number of integers that can be allocated"
        << endl << "before free memory is exhausted: "
        << hm2.max_size( ) << "." << endl;

   cout << "The number of doubles that can be allocated"
        << endl << "before free memory is exhausted: "
        << hm3.max_size( ) <<  "." << endl;

   // The following line creates a hash_map hm4
   // with the allocator of hash_map hm1.
   hash_map <int, int> hm4( less<int>( ), hm1_Alloc );

   hm4_Alloc = hm4.get_allocator( );

   // Two allocators are interchangeable if
   // storage allocated from each can be
   // deallocated with the other
   if( hm1_Alloc == hm4_Alloc )
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

## <a name="hash_map"></a> hash_map::hash_map

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Constructs a hash_map that is empty or is a copy of all or part of some other hash_map.

```cpp
hash_map();

explicit hash_map(
    const Traits& Comp);

hash_map(
    const Traits& Comp,
    const Allocator& Al);

hash_map(
    const hash_map& Right);

hash_map(
    hash_map&& Right);

hash_map(
    initializer_list<Type> IList);hash_map(initializer_list<Type> IList,
    const key_compare& Comp);

hash_map(
    initializer_list<Type> IList,
    const key_compare& Comp,
    const allocator_type& Al);

template <class InputIterator>
hash_map(
    InputIterator First,
    InputIterator Last);

template <class InputIterator>
hash_map(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp);

template <class InputIterator>
hash_map(
    InputIterator First,
    InputIterator Last,
    const Traits& Comp,
    const Allocator& Al
```

### Parameters

*Al*\
The storage allocator class to be used for this hash_map object, which defaults to `Allocator`.

*Comp*\
The comparison function of type const `Traits` used to order the elements in the hash_map, which defaults to `hash_compare`.

*Right*\
The hash_map of which the constructed map is to be a copy.

*First*\
The position of the first element in the range of elements to be copied.

*Last*\
The position of the first element beyond the range of elements to be copied.

*IList*\
The initializer_list

### Remarks

All constructors store a type of allocator object that manages memory storage for the hash_map and can later be returned by calling [get_allocator](#get_allocator). The allocator parameter is often omitted in the class declarations and preprocessing macros used to substitute alternative allocators.

All constructors initialize their hash_map.

All constructors store a function object of type `Traits` that is used to establish an order among the keys of the hash_map and that can later be returned by calling [key_comp](#key_comp).

The first three constructors specify an empty initial hash_map, in addition, the second specifies the type of comparison function (*Comp*) to be used in establishing the order of the elements and the third explicitly specifies the allocator type (*Al*) to be used. The keyword **`explicit`** suppresses certain kinds of automatic type conversion.

The fourth constructor specifies a copy of the hash_map *Right*.

The next three constructors copy the range `[First, Last)` of a hash_map with increasing explicitness in specifying the type of comparison function of class `Traits` and allocator.

The last constructor moves the hash_map *Right*.

## <a name="insert"></a> hash_map::insert

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Inserts an element or a range of elements into a hash_map.

```cpp
pair <iterator, bool> insert(
    const value_type& val);

iterator insert(
    const_iterator _Where,
    const value_type& val);

template <class InputIterator>
void insert(
    InputIterator first,
    InputIterator last);

template <class ValTy>
pair <iterator, bool>
insert(
    ValTy&& val);

template <class ValTy>
iterator insert(
    const_iterator _Where,
    ValTy&& val);
```

### Parameters

*val*\
The value of an element to be inserted into the hash_map unless the hash_map already contains that element (or, more generally, an element whose key is equivalently ordered).

*_Where*\
A hint regarding the place to start searching for the correct point of insertion.

*first*\
The position of the first element to be copied from a hash_map.

*last*\
The position just beyond the last element to be copied from a hash_map.

### Return Value

The first `insert` member function returns a pair whose bool component returns true if an insertion was made and false if the hash_map already contained an element whose key had an equivalent value in the ordering, and whose iterator component returns the address where a new element was inserted or where the element was already located.

To access the iterator component of a pair `pr` returned by this member function, use `pr`. **first**, and to dereference it, use \*( `pr`. **first**). To access the **`bool`** component of a pair `pr` returned by this member function, use `pr`. **second**, and to dereference it, use \*( `pr`. **second**).

The second `insert` member function, the hint version, returns an iterator that points to the position where the new element was inserted into the hash_map.

The last two `insert` member functions behave the same as the first two, except that they move construct the inserted value.

### Remarks

The [value_type](../standard-library/map-class.md#value_type) of an element is a pair, so that the value of an element will be an ordered pair with the first component equal to the key value and the second component equal to the data value of the element.

Insertion can occur in amortized constant time for the hint version of insert, instead of logarithmic time, if the insertion point immediately follows *_Where*.

The third member function inserts the sequence of element values into a hash_map corresponding to each element addressed by an iterator of in the range *[First, Last)* of a specified set.

### Example

```cpp
// hash_map_insert.cpp
// compile with: /EHsc
#include<hash_map>
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int>::iterator hm1_pIter, hm2_pIter;

    hash_map<int, int> hm1, hm2;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 10));
    hm1.insert(Int_Pair(2, 20));
    hm1.insert(Int_Pair(3, 30));
    hm1.insert(Int_Pair(4, 40));

    cout << "The original elements (Key => Value) of hm1 are:";
    for (hm1_pIter = hm1.begin(); hm1_pIter != hm1.end(); hm1_pIter++)
        cout << endl << " " << hm1_pIter -> first << " => "
             << hm1_pIter->second;
    cout << endl;

    pair< hash_map<int,int>::iterator, bool > pr;
    pr = hm1.insert(Int_Pair(1, 10));

    if (pr.second == true)
    {
        cout << "The element 10 was inserted in hm1 successfully."
            << endl;
    }
    else
    {
        cout << "The element 10 already exists in hm1\n"
            << "with a key value of "
            << "((pr.first) -> first) = " << (pr.first)->first
            << "." << endl;
    }

    // The hint version of insert
    hm1.insert(--hm1.end(), Int_Pair(5, 50));

    cout << "After the insertions, the elements of hm1 are:";
    for (hm1_pIter = hm1.begin(); hm1_pIter != hm1.end(); hm1_pIter++)
        cout << endl << hm1_pIter -> first << " => "
             << hm1_pIter->second;
    cout << endl;

    hm2.insert(Int_Pair(10, 100));

    // The templatized version inserting a range
    hm2.insert( ++hm1.begin(), --hm1.end() );

    cout << "After the insertions, the elements of hm2 are:";
    for (hm2_pIter = hm2.begin(); hm2_pIter != hm2.end(); hm2_pIter++)
        cout << endl << hm2_pIter -> first << " => "
             << hm2_pIter->second;
    cout << endl;

    // The templatized versions move constructing elements
    hash_map<int, string> hm3, hm4;
    pair<int, string> is1(1, "a"), is2(2, "b");

    hm3.insert(move(is1));
    cout << "After the move insertion, hm3 contains:" << endl
      << hm3.begin()->first
      << " => " << hm3.begin()->second
      << endl;

    hm4.insert(hm4.begin(), move(is2));
    cout << "After the move insertion, hm4 contains:" << endl
      << hm4.begin()->first
      << " => " << hm4.begin()->second
      << endl;
}
```

```Output
The original elements (Key => Value) of hm1 are:
1 => 10
2 => 20
3 => 30
4 => 40
The element 10 already exists in hm1
with a key value of ((pr.first) -> first) = 1.
After the insertions, the elements of hm1 are:
1 => 10
2 => 20
3 => 30
4 => 40
5 => 50
After the insertions, the elements of hm2 are:
2 => 20
10 => 100
3 => 30
4 => 40
After the move insertion, hm3 contains:
1 => a
After the move insertion, hm4 contains:
2 => b
```

## <a name="iterator"></a> hash_map::iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a bidirectional iterator that can read or modify any element in a hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;
```

### Remarks

The `iterator` defined by hash_map points to elements that are objects of [value_type](#value_type), that is of type `pair<const Key, Type>`, whose first member is the key to the element and whose second member is the mapped datum held by the element.

To dereference an iterator named `Iter` pointing to an element in a multimap, use the `->` operator.

To access the value of the key for the element, use `Iter->first`, which is equivalent to `(*Iter).first`. To access the value of the mapped datum for the element, use `Iter->second`, which is equivalent to `(*Iter).second`.

A type `iterator` can be used to modify the value of an element.

### Example

See example for [begin](#begin) for an example of how to declare and use the `iterator`.

## <a name="key_comp"></a> hash_map::key_comp

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Retrieves a copy of the comparison object used to order keys in a hash_map.

```cpp
key_compare key_comp() const;
```

### Return Value

Returns the function object that a hash_map uses to order its elements.

### Remarks

The stored object defines the member function

`bool operator( const Key& left, const Key&right );`

that returns **`true`** if `left` precedes and is not equal to `right` in the sort order.

### Example

```cpp
// hash_map_key_comp.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_map <int, int, hash_compare<int, less<int> > > hm1;
   hash_map <int, int, hash_compare<int, less<int> > >::key_compare
      kc1 = hm1.key_comp( ) ;

   // Operator stored in kc1 tests order & returns bool value
   bool result1 = kc1( 2, 3 ) ;
   if( result1 == true )
   {
      cout << "kc1( 2,3 ) returns value of true,"
           << "\n where kc1 is the function object of hm1"
           << " of type key_compare." << endl;
   }
   else
   {
      cout << "kc1( 2,3 ) returns value of false"
           << "\n where kc1 is the function object of hm1"
           << " of type key_compare." << endl;
   }

   hash_map <int, int, hash_compare<int, greater<int> > > hm2;
   hash_map <int, int, hash_compare<int, greater<int> > >
      ::key_compare kc2 = hm2.key_comp( );

   // Operator stored in kc2 tests order & returns bool value
   bool result2 = kc2( 2, 3 ) ;
   if( result2 == true )
   {
      cout << "kc2( 2,3 ) returns value of true,"
           << "\n where kc2 is the function object of hm2"
           << " of type key_compare." << endl;
   }
   else
   {
      cout << "kc2( 2,3 ) returns value of false,"
           << "\n where kc2 is the function object of hm2"
           << " of type key_compare." << endl;
   }
}
```

## <a name="key_compare"></a> hash_map::key_compare

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a function object that can compare two sort keys to determine the relative order of two elements in the map.

```cpp
typedef Traits key_compare;
```

### Remarks

`key_compare` is a synonym for the template parameter `Traits`.

For more information on `Traits` see the [hash_map Class](../standard-library/hash-map-class.md) topic.

### Example

See example for [key_comp](#key_comp) for an example of how to declare and use `key_compare`.

## <a name="key_type"></a> hash_map::key_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type describes the sort key object that constitutes each element of the hash_map.

```cpp
typedef Key key_type;
```

### Remarks

`key_type` is a synonym for the template parameter `Key`.

For more information on `Key`, see the Remarks section of the [hash_map Class](../standard-library/hash-map-class.md) topic.

### Example

See example for [value_type](#value_type) for an example of how to declare and use `key_type`.

## <a name="lower_bound"></a> hash_map::lower_bound

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator to the first element in a hash_map with a key value that is equal to or greater than that of a specified key.

```cpp
iterator lower_bound(const Key& key);

const_iterator lower_bound(const Key& key) const;
```

### Parameters

*key*\
The argument key value to be compared with the sort key of an element from the hash_map being searched.

### Return Value

An [iterator](#iterator) or [const_iterator](#const_iterator) that addresses the location of an element in a hash_map that with a key that is equal to or greater than the argument key, or that addresses the location succeeding the last element in the hash_map if no match is found for the key.

If the return value of `lower_bound` is assigned to a `const_iterator`, the hash_map object cannot be modified. If the return value of `lower_bound` is assigned to a `iterator`, the hash_map object can be modified.

### Remarks

### Example

```cpp
// hash_map_lower_bound.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.lower_bound( 2 );
   cout << "The first element of hash_map hm1 with a key of 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end( ) is returned
   hm1_RcIter = hm1. lower_bound ( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_map hm1 doesn't have an element "
           << "with a key of 4." << endl;
   else
      cout << "The element of hash_map hm1 with a key of 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // An element at a specific location in the hash_map can be
   // found using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.end( );
   hm1_AcIter--;
   hm1_RcIter = hm1. lower_bound ( hm1_AcIter -> first );
   cout << "The element of hm1 with a key matching "
        << "that of the last element is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The first element of hash_map hm1 with a key of 2 is: 20.
The hash_map hm1 doesn't have an element with a key of 4.
The element of hm1 with a key matching that of the last element is: 30.
```

## <a name="mapped_type"></a> hash_map::mapped_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that represents the data type stored in a hash_map.

```cpp
typedef Type mapped_type;
```

### Remarks

The type `mapped_type` is a synonym for the template parameter `Type`.

For more information on `Type` see the [hash_map Class](../standard-library/hash-map-class.md) topic.

### Example

See example for [value_type](#value_type) for an example of how to declare and use `key_type`.

## <a name="max_size"></a> hash_map::max_size

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns the maximum length of the hash_map.

```cpp
size_type max_size() const;
```

### Return Value

The maximum possible length of the hash_map.

### Remarks

### Example

```cpp
// hash_map_max_size.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: size_type i;

   i = hm1.max_size( );
   cout << "The maximum possible length "
        << "of the hash_map is " << i << "."
        << endl << "(Magnitude is machine specific.)";
}
```

## <a name="op_at"></a> hash_map::operator[]

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Inserts an element into a `hash_map` with a specified key value.

```cpp
Type& operator[](const Key& key);

Type& operator[](Key&& key);
```

### Parameters

*key*\
The key value of the element that is to be inserted.

### Return Value

A reference to the data value of the inserted element.

### Remarks

If the argument key value is not found, then it is inserted along with the default value of the data type.

`operator[]` may be used to insert elements into a `hash_map m` using

`m[ key] = DataValue`;

where DataValue is the value of the `mapped_type` of the element with a key value of *key*.

When using `operator[]` to insert elements, the returned reference does not indicate whether an insertion is changing a preexisting element or creating a new one. The member functions [find](../standard-library/map-class.md#find) and [insert](../standard-library/map-class.md#insert) can be used to determine whether an element with a specified key is already present before an insertion.

### Example

```cpp
// hash_map_op_ref.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_map <int, int> hm1;
   hash_map <int, int> :: iterator pIter;

   // Insert a data value of 10 with a key of 1
   // into a hash_map using the operator[] member function
   hm1[ 1 ] = 10;

   // Compare other ways to insert objects into a hash_map
   hm1.insert ( hash_map <int, int> :: value_type ( 2, 20 ) );
   hm1.insert ( cInt2Int ( 3, 30 ) );

   cout  << "The keys of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;

   // If the key already exists, operator[]
   // changes the value of the datum in the element
   hm1[ 2 ] = 40;

   // operator[] will also insert the value of the data
   // type's default constructor if the value is unspecified
   hm1[5];

   cout  << "The keys of the mapped elements are now:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are now:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;

   // operator[] will also insert by moving a key
   hash_map <string, int> hm2;
   string str("a");
   hm2[move(str)] = 1;
   cout << "The moved key is " << hm2.begin()->first
      << ", with value " << hm2.begin()->second << endl;
}
```

## <a name="op_eq"></a> hash_map::operator=

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Replaces the elements of the hash_map with a copy of another hash_map.

```cpp
hash_map& operator=(const hash_map& right);

hash_map& operator=(hash_map&& right);
```

### Parameters

*right*\
The [hash_map Class](../standard-library/hash-map-class.md) being copied into the `hash_map`.

### Remarks

After erasing any existing elements in a `hash_map`, `operator=` either copies or moves the contents of *right* into the `hash_map`.

### Example

```cpp
// hash_map_operator_as.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map<int, int> v1, v2, v3;
   hash_map<int, int>::iterator iter;

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

## <a name="pointer"></a> hash_map::pointer

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a pointer to an element in a hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::pointer pointer;
```

### Remarks

A type `pointer` can be used to modify the value of an element.

In most cases, an [iterator](#iterator) should be used to access the elements in a hash_map object.

## <a name="rbegin"></a> hash_map::rbegin

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator addressing the first element in a reversed hash_map.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```

### Return Value

A reverse bidirectional iterator addressing the first element in a reversed hash_map or addressing what had been the last element in the unreversed hash_map.

### Remarks

`rbegin` is used with a reversed hash_map just as [begin](#begin) is used with a hash_map.

If the return value of `rbegin` is assigned to a [const_reverse_iterator](#const_reverse_iterator), then the hash_map object cannot be modified. If the return value of `rbegin` is assigned to a [reverse_iterator](#reverse_iterator), then the hash_map object can be modified.

`rbegin` can be used to iterate through a hash_map backwards.

### Example

```cpp
// hash_map_rbegin.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: reverse_iterator hm1_rIter;
   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_rIter = hm1.rbegin( );
   cout << "The first element of the reversed hash_map hm1 is "
        << hm1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a hash_map in a forward order
   cout << "The hash_map is: ";
   for ( hm1_Iter = hm1.begin( ) ; hm1_Iter != hm1.end( ); hm1_Iter++)
      cout << hm1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a hash_map in a reverse order
   cout << "The reversed hash_map is: ";
   for ( hm1_rIter = hm1.rbegin( ) ; hm1_rIter != hm1.rend( ); hm1_rIter++)
      cout << hm1_rIter -> first << " ";
      cout << "." << endl;

   // A hash_map element can be erased by dereferencing to its key
   hm1_rIter = hm1.rbegin( );
   hm1.erase ( hm1_rIter -> first );

   hm1_rIter = hm1.rbegin( );
   cout << "After the erasure, the first element "
        << "in the reversed hash_map is "
        << hm1_rIter -> first << "." << endl;
}
```

```Output
The first element of the reversed hash_map hm1 is 3.
The hash_map is: 1 2 3 .
The reversed hash_map is: 3 2 1 .
After the erasure, the first element in the reversed hash_map is 2.
```

## <a name="reference"></a> hash_map::reference

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a reference to an element stored in a hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::reference reference;
```

### Remarks

### Example

```cpp
// hash_map_reference.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );

   // Declare and initialize a const_reference &Ref1
   // to the key of the first element
   const int &Ref1 = ( hm1.begin( ) -> first );

   // The following line would cause an error as the
   // non-const_reference cannot be used to access the key
   // int &Ref1 = ( hm1.begin( ) -> first );

   cout << "The key of first element in the hash_map is "
        << Ref1 << "." << endl;

   // Declare and initialize a reference &Ref2
   // to the data value of the first element
   int &Ref2 = ( hm1.begin( ) -> second );

   cout << "The data value of first element in the hash_map is "
        << Ref2 << "." << endl;

   // The non-const_reference can be used to modify the
   // data value of the first element
   Ref2 = Ref2 + 5;
   cout << "The modified data value of first element is "
        << Ref2 << "." << endl;
}
```

```Output
The key of first element in the hash_map is 1.
The data value of first element in the hash_map is 10.
The modified data value of first element is 15.
```

## <a name="rend"></a> hash_map::rend

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator that addresses the location succeeding the last element in a reversed hash_map.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
```

### Return Value

A reverse bidirectional iterator that addresses the location succeeding the last element in a reversed hash_map (the location that had preceded the first element in the unreversed hash_map).

### Remarks

`rend` is used with a reversed hash_map just as [end](#end) is used with a hash_map.

If the return value of `rend` is assigned to a [const_reverse_iterator](#const_reverse_iterator), then the hash_map object cannot be modified. If the return value of `rend` is assigned to a [reverse_iterator](#reverse_iterator), then the hash_map object can be modified.

`rend` can be used to test to whether a reverse iterator has reached the end of its hash_map.

The value returned by `rend` should not be dereferenced.

### Example

```cpp
// hash_map_rend.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;

   hash_map <int, int> :: iterator hm1_Iter;
   hash_map <int, int> :: reverse_iterator hm1_rIter;
   hash_map <int, int> :: const_reverse_iterator hm1_crIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_rIter = hm1.rend( );
   hm1_rIter--;
   cout << "The last element of the reversed hash_map hm1 is "
        << hm1_rIter -> first << "." << endl;

   // begin can be used to start an iteration
   // through a hash_map in a forward order
   cout << "The hash_map is: ";
   for ( hm1_Iter = hm1.begin( ) ; hm1_Iter != hm1.end( );
   hm1_Iter++)
      cout << hm1_Iter -> first << " ";
      cout << "." << endl;

   // rbegin can be used to start an iteration
   // through a hash_map in a reverse order
   cout << "The reversed hash_map is: ";
   for ( hm1_rIter = hm1.rbegin( ) ; hm1_rIter != hm1.rend( );
      hm1_rIter++)
      cout << hm1_rIter -> first << " ";
      cout << "." << endl;

   // A hash_map element can be erased by dereferencing to its key
   hm1_rIter = --hm1.rend( );
   hm1.erase ( hm1_rIter -> first );

   hm1_rIter = hm1.rend( );
   hm1_rIter--;
   cout << "After the erasure, the last element "
        << "in the reversed hash_map is "
        << hm1_rIter -> first << "." << endl;
}
```

```Output
The last element of the reversed hash_map hm1 is 1.
The hash_map is: 1 2 3 .
The reversed hash_map is: 3 2 1 .
After the erasure, the last element in the reversed hash_map is 2.
```

## <a name="reverse_iterator"></a> hash_map::reverse_iterator

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that provides a bidirectional iterator that can read or modify an element in a reversed hash_map.

```cpp
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;
```

### Remarks

A type `reverse_iterator` cannot modify the value of an element and is use to iterate through the hash_map in reverse.

The `reverse_iterator` defined by hash_map points to elements that are objects of [value_type](#value_type), that is of type **pair\<const Key, Type>**, whose first member is the key to the element and whose second member is the mapped datum held by the element.

To dereference a `reverse_iterator` `rIter` pointing to an element in a hash_map, use the -> operator.

To access the value of the key for the element, use `rIter` -> **first**, which is equivalent to (\* `rIter`). **first**. To access the value of the mapped datum for the element, use `rIter` -> **second**, which is equivalent to (\* `rIter`). **first**.

### Example

See example for [rbegin](#rbegin) for an example of how to declare and use `reverse_iterator`.

## <a name="size"></a> hash_map::size

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns the number of elements in the hash_map.

```cpp
size_type size() const;
```

### Return Value

The current length of the hash_map.

### Remarks

### Example

The following example demonstrates the use of the hash_map::size member function.

```cpp
// hash_map_size.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
    using namespace std;
    using namespace stdext;
    hash_map<int, int> hm1, hm2;
    hash_map<int, int>::size_type i;
    typedef pair<int, int> Int_Pair;

    hm1.insert(Int_Pair(1, 1));
    i = hm1.size();
    cout << "The hash_map length is " << i << "." << endl;

    hm1.insert(Int_Pair(2, 4));
    i = hm1.size();
    cout << "The hash_map length is now " << i << "." << endl;
}
```

```Output
The hash_map length is 1.
The hash_map length is now 2.
```

## <a name="size_type"></a> hash_map::size_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

An unsigned integer type that can represent the number of elements in a hash_map.

```cpp
typedef list<typename _Traits::value_type, typename _Traits::allocator_type>::size_type size_type;
```

### Remarks

### Example

See example for [size](#size) for an example of how to declare and use `size_type`

## <a name="swap"></a> hash_map::swap

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Exchanges the elements of two hash_maps.

```cpp
void swap(hash_map& right);
```

### Parameters

*right*\
The argument hash_map providing the elements to be swapped with the target hash_map.

### Remarks

The member function invalidates no references, pointers, or iterators that designate elements in the two hash_maps whose elements are being exchanged.

### Example

```cpp
// hash_map_swap.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2, hm3;
   hash_map <int, int>::iterator hm1_Iter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );
   hm2.insert ( Int_Pair ( 10, 100 ) );
   hm2.insert ( Int_Pair ( 20, 200 ) );
   hm3.insert ( Int_Pair ( 30, 300 ) );

   cout << "The original hash_map hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout   << "." << endl;

   // This is the member function version of swap
   // hm2 is said to be the argument hash_map;
   // hm1 is said to be the target hash_map
   hm1.swap( hm2 );

   cout << "After swapping with hm2, hash_map hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout  << "." << endl;

   // This is the specialized template version of swap
   swap( hm1, hm3 );

   cout << "After swapping with hm3, hash_map hm1 is:";
   for ( hm1_Iter = hm1.begin( ); hm1_Iter != hm1.end( ); hm1_Iter++ )
      cout << " " << hm1_Iter -> second;
   cout   << "." << endl;
}
```

```Output
The original hash_map hm1 is: 10 20 30.
After swapping with hm2, hash_map hm1 is: 100 200.
After swapping with hm3, hash_map hm1 is: 300.
```

## <a name="upper_bound"></a> hash_map::upper_bound

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns an iterator to the first element in a hash_map that with a key having a value that is greater than that of a specified key.

```cpp
iterator upper_bound(const Key& key);

const_iterator upper_bound(const Key& key) const;
```

### Parameters

*key*\
The argument key value to be compared with the sort key value of an element from the hash_map being searched.

### Return Value

An [iterator](#iterator) or [const_iterator](#const_iterator) that addresses the location of an element in a hash_map that with a key that is greater than the argument key, or that addresses the location succeeding the last element in the hash_map if no match is found for the key.

If the return value is assigned to a `const_iterator`, the hash_map object cannot be modified. If the return value is assigned to an `iterator`, the hash_map object can be modified.

### Remarks

### Example

```cpp
// hash_map_upper_bound.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1;
   hash_map <int, int> :: const_iterator hm1_AcIter, hm1_RcIter;
   typedef pair <int, int> Int_Pair;

   hm1.insert ( Int_Pair ( 1, 10 ) );
   hm1.insert ( Int_Pair ( 2, 20 ) );
   hm1.insert ( Int_Pair ( 3, 30 ) );

   hm1_RcIter = hm1.upper_bound( 2 );
   cout << "The first element of hash_map hm1 with a key "
        << "greater than 2 is: "
        << hm1_RcIter -> second << "." << endl;

   // If no match is found for the key, end is returned
   hm1_RcIter = hm1. upper_bound ( 4 );

   if ( hm1_RcIter == hm1.end( ) )
      cout << "The hash_map hm1 doesn't have an element "
           << "with a key greater than 4." << endl;
   else
      cout << "The element of hash_map hm1 with a key > 4 is: "
           << hm1_RcIter -> second << "." << endl;

   // The element at a specific location in the hash_map can be found
   // using a dereferenced iterator addressing the location
   hm1_AcIter = hm1.begin( );
   hm1_RcIter = hm1. upper_bound ( hm1_AcIter -> first );
   cout << "The 1st element of hm1 with a key greater than that\n"
        << "of the initial element of hm1 is: "
        << hm1_RcIter -> second << "." << endl;
}
```

```Output
The first element of hash_map hm1 with a key greater than 2 is: 30.
The hash_map hm1 doesn't have an element with a key greater than 4.
The 1st element of hm1 with a key greater than that
of the initial element of hm1 is: 20.
```

## <a name="value_comp"></a> hash_map::value_comp

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Returns a function object that determines the order of elements in a hash_map by comparing their key values.

```cpp
value_compare value_comp() const;
```

### Return Value

Returns the comparison function object that a hash_map uses to order its elements.

### Remarks

For a hash_map *m*, if two elements *e1* (*k1*, *d1*) and *e2* (*k2*, *d2*) are objects of type [value_type](#value_type), where *k1* and *k2* are their keys of type [key_type](#key_type) and *d1* and *d2* are their data of type [mapped_type](#mapped_type), then `m.value_comp()(e1, e2)` is equivalent to `m.key_comp()(k1, k2)`. A stored object defines the member function

`bool operator(value_type& left, value_type& right);`

which returns **`true`** if the key value of `left` precedes and is not equal to the key value of `right` in the sort order.

### Example

```cpp
// hash_map_value_comp.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;

   hash_map <int, int, hash_compare<int, less<int> > > hm1;
   hash_map <int, int, hash_compare<int, less<int> > >
   ::value_compare vc1 = hm1.value_comp( );
   pair< hash_map<int,int>::iterator, bool > pr1, pr2;

   pr1= hm1.insert ( hash_map <int, int> :: value_type ( 1, 10 ) );
   pr2= hm1.insert ( hash_map <int, int> :: value_type ( 2, 5 ) );

   if( vc1( *pr1.first, *pr2.first ) == true )
   {
      cout << "The element ( 1,10 ) precedes the element ( 2,5 )."
           << endl;
   }
   else
   {
      cout << "The element ( 1,10 ) does not precede the element ( 2,5 )."
           << endl;
   }

   if( vc1 ( *pr2.first, *pr1.first ) == true )
   {
      cout << "The element ( 2,5 ) precedes the element ( 1,10 )."
           << endl;
   }
   else
   {
      cout << "The element ( 2,5 ) does not precede the element ( 1,10 )."
           << endl;
   }
}
```

## <a name="value_type"></a> hash_map::value_type

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

A type that represents the type of object stored in a hash_map.

```cpp
typedef pair<const Key, Type> value_type;
```

### Remarks

`value_type` is declared to be `pair<const key_type, mapped_type>` and not `pair<key_type, mapped_type>` because the keys of an associative container may not be changed using a nonconstant iterator or reference.

### Example

```cpp
// hash_map_value_type.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   typedef pair <const int, int> cInt2Int;
   hash_map <int, int> hm1;
   hash_map <int, int> :: key_type key1;
   hash_map <int, int> :: mapped_type mapped1;
   hash_map <int, int> :: value_type value1;
   hash_map <int, int> :: iterator pIter;

   // value_type can be used to pass the correct type
   // explicitly to avoid implicit type conversion
   hm1.insert ( hash_map <int, int> :: value_type ( 1, 10 ) );

   // Compare other ways to insert objects into a hash_map
   hm1.insert ( cInt2Int ( 2, 20 ) );
   hm1[ 3 ] = 30;

   // Initializing key1 and mapped1
   key1 = ( hm1.begin( ) -> first );
   mapped1 = ( hm1.begin( ) -> second );

   cout << "The key of first element in the hash_map is "
        << key1 << "." << endl;

   cout << "The data value of first element in the hash_map is "
        << mapped1 << "." << endl;

   // The following line would cause an error because
   // the value_type is not assignable
   // value1 = cInt2Int ( 4, 40 );

   cout  << "The keys of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> first;
   cout << "." << endl;

   cout  << "The values of the mapped elements are:";
   for ( pIter = hm1.begin( ) ; pIter != hm1.end( ) ; pIter++ )
      cout << " " << pIter -> second;
   cout << "." << endl;
}
```

```Output
The key of first element in the hash_map is 1.
The data value of first element in the hash_map is 10.
The keys of the mapped elements are: 1 2 3.
The values of the mapped elements are: 10 20 30.
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
