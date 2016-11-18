---
title: "hash_set Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "hash_set/stdext::hash_set"
  - "std::hash_set"
  - "std.hash_set"
  - "stdext::hash_set"
  - "hash_set"
  - "stdext.hash_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_set class"
ms.assetid: c765c06e-cbb6-48c2-93ca-d15468eb28d7
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
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
# hash_set Class
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 The container class hash_set is an extension of the Standard Template Library (STL) and is used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.  
  
## Syntax  
  
```  
template <class Key,   
    class Traits=hash_compare<Key, less<Key>>,   
    class Allocator=allocator<Key>>  
class hash_set  
```  
  
#### Parameters  
 `Key`  
 The element data type to be stored in the hash_set.  
  
 `Traits`  
 The type which includes two function objects, one of class compare that is a binary predicate able to compare two element values as sort keys to determine their relative order and a hash function that is a unary predicate mapping key values of the elements to unsigned integers of type **size_t**. This argument is optional, and the `hash_compare`*<Key,* **less***\<Key> >* is the default value.  
  
 `Allocator`  
 The type that represents the stored allocator object that encapsulates details about the hash_set's allocation and deallocation of memory. This argument is optional, and the default value is **allocator***\<Key>.*  
  
## Remarks  
 The hash_set is:  
  
-   An associative container, which a variable size container that supports the efficient retrieval of element values based on an associated key value. Further, it is a simple associative container because its element values are its key values.  
  
-   Reversible, because it provides a bidirectional iterator to access its elements.  
  
-   Hashed, because its elements are grouped into buckets based on the value of a hash function applied to the key values of the elements.  
  
-   Unique in the sense that each of its elements must have a unique key. Because hash_set is also a simple associative container, its elements are also unique.  
  
-   A template class because the functionality it provides is generic and so independent of the specific type of data contained as elements or keys. The data types to be used for elements and keys are, instead, specified as parameters in the class template along with the comparison function and allocator.  
  
 The main advantage of hashing over sorting is greater efficiency; a successful hashing performs insertions, deletions, and finds in constant average time as compared with a time proportional to the logarithm of the number of elements in the container for sorting techniques. The value of an element in a set may not be changed directly. Instead, you must delete old values and insert elements with new values.  
  
 The choice of container type should be based in general on the type of searching and inserting required by the application. Hashed associative containers are optimized for the operations of lookup, insertion and removal. The member functions that explicitly support these operations are efficient when used with a well-designed hash function, performing them in a time that is on average constant and not dependent on the number of elements in the container. A well-designed hash function produces a uniform distribution of hashed values and minimizes the number of collisions, where a collision is said to occur when distinct key values are mapped into the same hashed value. In the worst case, with the worst possible hash function, the number of operations is proportional to the number of elements in the sequence (linear time).  
  
 The hash_set should be the associative container of choice when the conditions associating the values with their keys are satisfied by the application. The elements of a hash_set are unique and serve as their own sort keys. A model for this type of structure is an ordered list of, say, words in which the words may occur only once. If multiple occurrences of the words were allowed, then a hash_multiset would be the appropriate container structure. If values need to be attached to a list of unique key words, then a hash_map would be an appropriate structure to contain this data. If instead the keys are not unique, then a hash_multimap would be the container of choice.  
  
 The hash_set orders the sequence it controls by calling a stored hash **Traits** object of type [value_compare](#hash_set__value_compare). This stored object may be accessed by calling the member function [key_comp](#hash_set__key_comp). Such a function object must behave the same as an object of class *hash_compare<Key, less\<Key> >.* Specifically, for all values ` key` of type Key, the call Trait( ` key` ) yields a distribution of values of type size_t.  
  
 In general, the elements need be merely less than comparable to establish this order: so that, given any two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the non-equivalent elements. On a more technical note, the comparison function is a binary predicate that induces a strict weak ordering in the standard mathematical sense. A binary predicate *f*( *x*, *y*) is a function object that has two argument objects x and y and a return value of true or false. An ordering imposed on a hash_set is a strict weak ordering if the binary predicate is irreflexive, antisymmetric, and transitive and if equivalence is transitive, where two objects *x* and *y* are defined to be equivalent when both *f*( *x*, *y*) and *f*( *y*, *x*) are false. If the stronger condition of equality between keys replaces that of equivalence, then the ordering becomes total (in the sense that all the elements are ordered with respect to each other) and the keys matched will be indiscernible from each other.  
  
 The actual order of elements in the controlled sequence depends on the hash function, the ordering function, and the current size of the hash table stored in the container object. You cannot determine the current size of the hash table, so you cannot in general predict the order of elements in the controlled sequence. Inserting elements invalidates no iterators, and removing elements invalidates only those iterators that had specifically pointed at the removed elements.  
  
 The iterator provided by the hash_set class is a bidirectional iterator, but the class member functions [insert](#hash_set__insert) and [hash_set](#hash_set__hash_set) have versions that take as template parameters a weaker input iterator, whose functionality requirements are more minimal than those guaranteed by the class of bidirectional iterators. The different iterator concepts form a family related by refinements in their functionality. Each iterator concept has its own set of requirements, and the algorithms that work with them must limit their assumptions to the requirements provided by that type of iterator. It may be assumed that an input iterator may be dereferenced to refer to some object and that it may be incremented to the next iterator in the sequence. This is a minimal set of functionality, but it is enough to be able to talk meaningfully about a range of iterators [ ` first`, ` last`) in the context of the class member functions.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Constructors  
  
|||  
|-|-|  
|[hash_set](#hash_set__hash_set)|Constructs a `hash_set` that is empty or that is a copy of all or part of some other `hash_set`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[allocator_type](#hash_set__allocator_type)|A type that represents the `allocator` class for the `hash_set` object.|  
|[const_iterator](#hash_set__const_iterator)|A type that provides a bidirectional iterator that can read a `const` element in the `hash_set`.|  
|[const_pointer](#hash_set__const_pointer)|A type that provides a pointer to a `const` element in a `hash_set`.|  
|[const_reference](#hash_set__const_reference)|A type that provides a reference to a `const` element stored in a `hash_set` for reading and performing `const` operations.|  
|[const_reverse_iterator](#hash_set__const_reverse_iterator)|A type that provides a bidirectional iterator that can read any `const` element in the `hash_set`.|  
|[difference_type](#hash_set__difference_type)|A signed integer type that can be used to represent the number of elements of a `hash_set` in a range between elements pointed to by iterators.|  
|[iterator](#hash_set__iterator)|A type that provides a bidirectional iterator that can read or modify any element in a `hash_set`.|  
|[key_compare](#hash_set__key_compare)|A type that provides a function object that can compare two sort keys to determine the relative order of two elements in the `hash_set`.|  
|[key_type](#hash_set__key_type)|A type that describes an object stored as an element of a `hash_set` in its capacity as sort key.|  
|[pointer](#hash_set__pointer)|A type that provides a pointer to an element in a `hash_set`.|  
|[reference](#hash_set__reference)|A type that provides a reference to an element stored in a `hash_set`.|  
|[reverse_iterator](#hash_set__reverse_iterator)|A type that provides a bidirectional iterator that can read or modify an element in a reversed `hash_set`.|  
|[size_type](#hash_set__size_type)|An unsigned integer type that can represent the number of elements in a `hash_set`.|  
|[value_compare](#hash_set__value_compare)|A type that provides two function objects, a binary predicate of class compare that can compare two element values of a `hash_set` to determine their relative order and a unary predicate that hashes the elements.|  
|[value_type](#hash_set__value_type)|A type that describes an object stored as an element of a `hash_set` in its capacity as a value.|  
  
### Member Functions  
  
|||  
|-|-|  
|[begin](#hash_set__begin)|Returns an iterator that addresses the first element in the `hash_set`.|  
|[hash_set::cbegin](#hash_set__cbegin)|Returns a const iterator addressing the first element in the `hash_set`.|  
|[hash_set::cend](#hash_set__cend)|Returns a const iterator that addresses the location succeeding the last element in a `hash_set`.|  
|[clear](#hash_set__clear)|Erases all the elements of a `hash_set`.|  
|[count](#hash_set__count)|Returns the number of elements in a `hash_set` whose key matches a parameter-specified key.|  
|[hash_set::crbegin](#hash_set__crbegin)|Returns a const iterator addressing the first element in a reversed `hash_set`.|  
|[hash_set::crend](#hash_set__crend)|Returns a const iterator that addresses the location succeeding the last element in a reversed `hash_set`.|  
|[hash_set::emplace](#hash_set__emplace)|Inserts an element constructed in place into a `hash_set`.|  
|[hash_set::emplace_hint](#hash_set__emplace_hint)|Inserts an element constructed in place into a `hash_set`, with a placement hint.|  
|[empty](#hash_set__empty)|Tests if a `hash_set` is empty.|  
|[end](#hash_set__end)|Returns an iterator that addresses the location succeeding the last element in a `hash_set`.|  
|[equal_range](#hash_set__equal_range)|Returns a pair of iterators respectively to the first element in a `hash_set` with a key that is greater than a specified key and to the first element in the `hash_set` with a key that is equal to or greater than the key.|  
|[erase](#hash_set__erase)|Removes an element or a range of elements in a `hash_set` from specified positions or removes elements that match a specified key.|  
|[find](#hash_set__find)|Returns an iterator addressing the location of an element in a `hash_set` that has a key equivalent to a specified key.|  
|[get_allocator](#hash_set__get_allocator)|Returns a copy of the `allocator` object used to construct the `hash_set`.|  
|[insert](#hash_set__insert)|Inserts an element or a range of elements into a `hash_set`.|  
|[key_comp](#hash_set__key_comp)|Retrieves a copy of the comparison object used to order keys in a `hash_set`.|  
|[lower_bound](#hash_set__lower_bound)|Returns an iterator to the first element in a `hash_set` with a key that is equal to or greater than a specified key.|  
|[max_size](#hash_set__max_size)|Returns the maximum length of the `hash_set`.|  
|[rbegin](#hash_set__rbegin)|Returns an iterator addressing the first element in a reversed `hash_set`.|  
|[rend](#hash_set__rend)|Returns an iterator that addresses the location succeeding the last element in a reversed `hash_set`.|  
|[size](#hash_set__size)|Returns the number of elements in the `hash_set`.|  
|[swap](#hash_set__swap)|Exchanges the elements of two `hash_set`s.|  
|[upper_bound](#hash_set__upper_bound)|Returns an iterator to the first element in a `hash_set` that with a key that is equal to or greater than a specified key.|  
|[value_comp](#hash_set__value_comp)|Retrieves a copy of the hash traits object used to hash and order element key values in a `hash_set`.|  
  
### Operators  
  
|||  
|-|-|  
|[hash_set::operator=](#hash_set__operator_eq)|Replaces the elements of a `hash_set` with a copy of another `hash_set`.|  
  
## Requirements  
 **Header:** <hash_set>  
  
 **Namespace:** stdext  
  
##  <a name="hash_set__allocator_type"></a>  hash_set::allocator_type  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that represents the allocator class for the hash_set object.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::allocator_type allocator_type;  
```  
  
### Remarks  
 **allocator_type** is a synonym for the template parameter `Allocator`.  
  
 For more information on `Allocator`, see the Remarks section of the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See example for [get_allocator](#hash_set__get_allocator) for an example that uses `allocator_type`.  
  
##  <a name="hash_set__begin"></a>  hash_set::begin  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator that addresses the first element in the hash_set.  
  
```  
const_iterator begin() const;

iterator begin();
```  
  
### Return Value  
 A bidirectional iterator addressing the first element in the hash_set or the location succeeding an empty hash_set.  
  
### Remarks  
 If the return value of **begin** is assigned to a `const_iterator`, the elements in the hash_set object cannot be modified. If the return value of **begin** is assigned to an **iterator**, the elements in the hash_set object can be modified.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_begin.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::iterator hs1_Iter;  
   hash_set <int>::const_iterator hs1_cIter;  
  
   hs1.insert( 1 );  
   hs1.insert( 2 );  
   hs1.insert( 3 );  
  
   hs1_Iter = hs1.begin( );  
   cout << "The first element of hs1 is " << *hs1_Iter << endl;  
  
   hs1_Iter = hs1.begin( );  
   hs1.erase( hs1_Iter );  
  
   // The following 2 lines would err because the iterator is const  
   // hs1_cIter = hs1.begin( );  
   // hs1.erase( hs1_cIter );  
  
   hs1_cIter = hs1.begin( );  
   cout << "The first element of hs1 is now " << *hs1_cIter << endl;  
}  
```  
  
```Output  
The first element of hs1 is 1  
The first element of hs1 is now 2  
```  
  
##  <a name="hash_set__cbegin"></a>  hash_set::cbegin  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns a const iterator that addresses the first element in the hash_set.  
  
```  
const_iterator cbegin() const;
```  
  
### Return Value  
 A const bidirectional iterator addressing the first element in the [hash_set](../standard-library/hash-set-class.md) or the location succeeding an empty `hash_set`.  
  
### Remarks  
 With the return value of `cbegin`, the elements in the `hash_set` object cannot be modified.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_cbegin.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::const_iterator hs1_cIter;  
  
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
  
##  <a name="hash_set__cend"></a>  hash_set::cend  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns a const iterator that addresses the location succeeding the last element in a hash_set.  
  
```  
const_iterator cend() const;
```  
  
### Return Value  
 A const bidirectional iterator that addresses the location succeeding the last element in a [hash_set](../standard-library/hash-set-class.md). If the `hash_set` is empty, then `hash_set::cend == hash_set::begin`.  
  
### Remarks  
 `cend` is used to test whether an iterator has reached the end of its `hash_set`. The value returned by `cend` should not be dereferenced.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_cend.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int> :: const_iterator hs1_cIter;  
  
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
  
##  <a name="hash_set__clear"></a>  hash_set::clear  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Erases all the elements of a hash_set.  
  
```  
void clear();
```  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_clear.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
  
   hs1.insert( 1 );  
   hs1.insert( 2 );  
  
   cout << "The size of the hash_set is initially " << hs1.size( )  
        << "." << endl;  
  
   hs1.clear( );  
   cout << "The size of the hash_set after clearing is "   
        << hs1.size( ) << "." << endl;  
}  
```  
  
```Output  
The size of the hash_set is initially 2.  
The size of the hash_set after clearing is 0.  
```  
  
##  <a name="hash_set__const_iterator"></a>  hash_set::const_iterator  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a bidirectional iterator that can read a **const** element in the hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_iterator const_iterator;  
```  
  
### Remarks  
 A type `const_iterator` cannot be used to modify the value of an element.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See example for [begin](#hash_set__begin) for an example that uses `const_iterator`.  
  
##  <a name="hash_set__const_pointer"></a>  hash_set::const_pointer  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a pointer to a **const** element in a hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_pointer const_pointer;  
```  
  
### Remarks  
 A type `const_pointer` cannot be used to modify the value of an element.  
  
 In most cases, a [const_iterator](#hash_set__const_iterator) should be used to access the elements in a **const** hash_set object.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
##  <a name="hash_set__const_reference"></a>  hash_set::const_reference  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a reference to a **const** element stored in a hash_set for reading and performing **const** operations.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reference const_reference;  
```  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_const_ref.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
  
   // Declare and initialize a const_reference &Ref1   
   // to the 1st element  
   const int &Ref1 = *hs1.begin( );  
  
   cout << "The first element in the hash_set is "  
        << Ref1 << "." << endl;  
  
   // The following line would cause an error because the   
   // const_reference cannot be used to modify the hash_set  
   // Ref1 = Ref1 + 5;  
}  
```  
  
```Output  
The first element in the hash_set is 10.  
```  
  
##  <a name="hash_set__const_reverse_iterator"></a>  hash_set::const_reverse_iterator  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a bidirectional iterator that can read any **const** element in the hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::const_reverse_iterator const_reverse_iterator;  
```  
  
### Remarks  
 A type `const_reverse_iterator` cannot modify the value of an element and is use to iterate through the hash_set in reverse.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [rend](#hash_set__rend) for an example of how to declare and use the `const_reverse_iterator`  
  
##  <a name="hash_set__count"></a>  hash_set::count  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns the number of elements in a hash_set whose key matches a parameter-specified key.  
  
```  
size_type count(const Key& key) const;
```  
  
### Parameters  
 ` key`  
 The key of the elements to be matched from the hash_set.  
  
### Return Value  
 1 if the hash_set contains an element whose sort key matches the parameter key.  
  
 0 if the hash_set does not contain an element with a matching key.  
  
### Remarks  
 The member function returns the number of elements in the following range:  
  
 [ **lower_bound** (_ *Key* ), **upper_bound** (\_ *Key* ) ).  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  The following example demonstrates the use of the hash_set::count member function.  
  
```  
// hash_set_count.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
    using namespace std;  
    using namespace stdext;  
    hash_set<int> hs1;  
    hash_set<int>::size_type i;  
  
    hs1.insert(1);  
    hs1.insert(1);  
  
    // Keys must be unique in hash_set, so duplicates are ignored.  
    i = hs1.count(1);  
    cout << "The number of elements in hs1 with a sort key of 1 is: "  
         << i << "." << endl;  
  
    i = hs1.count(2);  
    cout << "The number of elements in hs1 with a sort key of 2 is: "  
         << i << "." << endl;  
}  
```  
  
```Output  
The number of elements in hs1 with a sort key of 1 is: 1.  
The number of elements in hs1 with a sort key of 2 is: 0.  
```  
  
##  <a name="hash_set__crbegin"></a>  hash_set::crbegin  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns a const iterator addressing the first element in a reversed hash_set.  
  
```  
const_reverse_iterator crbegin() const;
```  
  
### Return Value  
 A const reverse bidirectional iterator addressing the first element in a reversed [hash_set](../standard-library/hash-set-class.md) or addressing what had been the last element in the unreversed `hash_set`.  
  
### Remarks  
 `crbegin` is used with a reversed hash_set just as [hash_set::begin](#hash_set__begin) is used with a hash_set.  
  
 With the return value of `crbegin`, the `hash_set` object cannot be modified.  
  
 `crbegin` can be used to iterate through a `hash_set` backwards.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_crbegin.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::const_reverse_iterator hs1_crIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_crIter = hs1.crbegin( );  
   cout << "The first element in the reversed hash_set is "  
        << *hs1_crIter << "." << endl;  
}  
```  
  
```Output  
The first element in the reversed hash_set is 30.  
```  
  
##  <a name="hash_set__crend"></a>  hash_set::crend  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns a const iterator that addresses the location succeeding the last element in a reversed hash_set.  
  
```  
const_reverse_iterator crend() const;
```  
  
### Return Value  
 A const reverse bidirectional iterator that addresses the location succeeding the last element in a reversed [hash_set](../standard-library/hash-set-class.md) (the location that had preceded the first element in the unreversed `hash_set`).  
  
### Remarks  
 `crend` is used with a reversed `hash_set` just as [hash_set::end](#hash_set__end) is used with a `hash_set`.  
  
 With the return value of `crend`, the `hash_set` object cannot be modified.  
  
 `crend` can be used to test to whether a reverse iterator has reached the end of its `hash_set`.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_crend.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::const_reverse_iterator hs1_crIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_crIter = hs1.crend( );  
   hs1_crIter--;  
   cout << "The last element in the reversed hash_set is "  
        << *hs1_crIter << "." << endl;  
}  
```  
  
```Output  
The last element in the reversed hash_set is 10.  
```  
  
##  <a name="hash_set__difference_type"></a>  hash_set::difference_type  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A signed integer type that can be used to represent the number of elements of a hash_set in a range between elements pointed to by iterators.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::difference_type difference_type;  
```  
  
### Remarks  
 The `difference_type` is the type returned when subtracting or incrementing through iterators of the container. The `difference_type` is typically used to represent the number of elements in the range [ ` first`, ` last`) between the iterators ` first` and ` last`, includes the element pointed to by ` first` and the range of elements up to, but not including, the element pointed to by ` last`.  
  
 Note that although `difference_type` is available for all iterators that satisfy the requirements of an input iterator, which includes the class of bidirectional iterators supported by reversible containers such as set, subtraction between iterators is only supported by random-access iterators provided by a random access container, such as vector or deque.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_diff_type.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <hash_set>  
#include <algorithm>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
  
   hash_set <int> hs1;  
   hash_set <int>::iterator hs1_Iter, hs1_bIter, hs1_eIter;  
  
   hs1.insert( 20 );  
   hs1.insert( 10 );  
   hs1.insert( 20 );   // Won't insert as hash_set elements are unique  
  
   hs1_bIter = hs1.begin( );  
   hs1_eIter = hs1.end( );  
  
   hash_set <int>::difference_type   df_typ5, df_typ10, df_typ20;  
  
   df_typ5 = count( hs1_bIter, hs1_eIter, 5 );  
   df_typ10 = count( hs1_bIter, hs1_eIter, 10 );  
   df_typ20 = count( hs1_bIter, hs1_eIter, 20 );  
  
   // The keys, and hence the elements, of a hash_set are unique,  
   // so there is at most one of a given value  
   cout << "The number '5' occurs " << df_typ5  
        << " times in hash_set hs1.\n";  
   cout << "The number '10' occurs " << df_typ10  
        << " times in hash_set hs1.\n";  
   cout << "The number '20' occurs " << df_typ20  
        << " times in hash_set hs1.\n";  
  
   // Count the number of elements in a hash_set  
   hash_set <int>::difference_type  df_count = 0;  
   hs1_Iter = hs1.begin( );  
   while ( hs1_Iter != hs1_eIter)  
   {  
      df_count++;  
      hs1_Iter++;  
   }  
  
   cout << "The number of elements in the hash_set hs1 is: "   
        << df_count << "." << endl;  
}  
```  
  
```Output  
The number '5' occurs 0 times in hash_set hs1.  
The number '10' occurs 1 times in hash_set hs1.  
The number '20' occurs 1 times in hash_set hs1.  
The number of elements in the hash_set hs1 is: 2.  
```  
  
##  <a name="hash_set__emplace"></a>  hash_set::emplace  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Inserts an element constructed in place into a hash_set.  
  
```  
template <class ValTy>  
pair <iterator, bool>  
emplace(
    ValTy&& val);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` val`|The value of an element to be inserted into the [hash_set](../standard-library/hash-set-class.md) unless the `hash_set` already contains that element or, more generally, an element whose key is equivalently ordered.|  
  
### Return Value  
 The `emplace` member function returns a pair whose `bool` component returns `true` if an insertion was make and `false` if the `hash_set` already contained an element whose key had an equivalent value in the ordering, and whose iterator component returns the address where a new element was inserted or where the element was already located.  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_emplace.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
#include <string>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set<string> hs3;  
   string str1("a");  
  
   hs3.emplace(move(str1));  
   cout << "After the emplace insertion, hs3 contains "  
      << *hs3.begin() << "." << endl;  
}  
```  
  
```Output  
After the emplace insertion, hs3 contains a.  
```  
  
##  <a name="hash_set__emplace_hint"></a>  hash_set::emplace_hint  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Inserts an element constructed in place into a hash_set.  
  
```  
template <class ValTy>  
iterator emplace(
    const_iterator _Where,  
    ValTy&& val);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` val`|The value of an element to be inserted into the [hash_set](../standard-library/hash-set-class.md) unless the `hash_set` already contains that element or, more generally, an element whose key is equivalently ordered.|  
|`_Where`|The place to start searching for the correct point of insertion. (Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows `_Where`.)|  
  
### Return Value  
 The [hash_set::emplace](#hash_set__emplace) member function returns an iterator that points to the position where the new element was inserted into the `hash_set`, or where the existing element with equivalent ordering is located.  
  
### Remarks  
 Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows `_Where`.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_emplace_hint.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
#include <string>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set<string> hs3;  
   string str1("a");  
  
   hs3.insert(hs3.begin(), move(str1));  
   cout << "After the emplace insertion, hs3 contains "  
      << *hs3.begin() << "." << endl;  
}  
```  
  
```Output  
After the emplace insertion, hs3 contains a.  
```  
  
##  <a name="hash_set__empty"></a>  hash_set::empty  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Tests if a hash_set is empty.  
  
```  
bool empty() const;
```  
  
### Return Value  
 **true** if the hash_set is empty; **false** if the hash_set is nonempty.  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_empty.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1, hs2;  
   hs1.insert ( 1 );  
  
   if ( hs1.empty( ) )  
      cout << "The hash_set hs1 is empty." << endl;  
   else  
      cout << "The hash_set hs1 is not empty." << endl;  
  
   if ( hs2.empty( ) )  
      cout << "The hash_set hs2 is empty." << endl;  
   else  
      cout << "The hash_set hs2 is not empty." << endl;  
}  
```  
  
```Output  
The hash_set hs1 is not empty.  
The hash_set hs2 is empty.  
```  
  
##  <a name="hash_set__end"></a>  hash_set::end  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator that addresses the location succeeding the last element in a hash_set.  
  
```  
const_iterator end() const;

iterator end();
```  
  
### Return Value  
 A bidirectional iterator that addresses the location succeeding the last element in a hash_set. If the hash_set is empty, then hash_set::end == hash_set::begin.  
  
### Remarks  
 **end** is used to test whether an iterator has reached the end of its hash_set. The value returned by **end** should not be dereferenced.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_end.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int> :: iterator hs1_Iter;  
   hash_set <int> :: const_iterator hs1_cIter;  
  
   hs1.insert( 1 );  
   hs1.insert( 2 );  
   hs1.insert( 3 );  
  
   hs1_Iter = hs1.end( );  
   hs1_Iter--;  
   cout << "The last element of hs1 is " << *hs1_Iter << endl;  
  
   hs1.erase( hs1_Iter );  
  
   // The following 3 lines would err because the iterator is const:  
   // hs1_cIter = hs1.end( );  
   // hs1_cIter--;  
   // hs1.erase( hs1_cIter );  
  
   hs1_cIter = hs1.end( );  
   hs1_cIter--;  
   cout << "The last element of hs1 is now " << *hs1_cIter << endl;  
}  
```  
  
```Output  
The last element of hs1 is 3  
The last element of hs1 is now 2  
```  
  
##  <a name="hash_set__equal_range"></a>  hash_set::equal_range  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns a pair of iterators respectively to the first element in a hash set with a key that is equal to a specified key and to the first element in the hash set with a key that is greater than the key.  
  
```  
pair <const_iterator, const_iterator> equal_range (const Key& key) const;

pair <iterator, iterator> equal_range (const Key& key);
```  
  
### Parameters  
 ` key`  
 The argument key to be compared with the sort key of an element from the hash_set being searched.  
  
### Return Value  
 A pair of iterators where the first is the [lower_bound](../standard-library/set-class.md#set__lower_bound) of the key and the second is the [upper_bound](../standard-library/set-class.md#set__upper_bound) of the key.  
  
 To access the first iterator of a pair pr returned by the member function, use `pr`. **first**, and to dereference the lower bound iterator, use \*( `pr`. **first**). To access the second iterator of a pair `pr` returned by the member function, use `pr`. **second**, and to dereference the upper bound iterator, use \*( `pr`. **second**).  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_equal_range.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;   
   using namespace stdext;  
   typedef hash_set<int> IntHSet;  
   IntHSet hs1;  
   hash_set <int> :: const_iterator hs1_RcIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   pair <IntHSet::const_iterator, IntHSet::const_iterator> p1, p2;  
   p1 = hs1.equal_range( 20 );  
  
   cout << "The upper bound of the element with "  
        << "a key of 20 in the hash_set hs1 is: "  
        << *(p1.second) << "." << endl;  
  
   cout << "The lower bound of the element with "  
        << "a key of 20 in the hash_set hs1 is: "  
        << *(p1.first) << "." << endl;  
  
   // Compare the upper_bound called directly   
   hs1_RcIter = hs1.upper_bound( 20 );  
   cout << "A direct call of upper_bound( 20 ) gives "  
        << *hs1_RcIter << "," << endl  
        << "matching the 2nd element of the pair"  
        << " returned by equal_range( 20 )." << endl;  
  
   p2 = hs1.equal_range( 40 );  
  
   // If no match is found for the key,  
   // both elements of the pair return end( )  
   if ( ( p2.first == hs1.end( ) ) && ( p2.second == hs1.end( ) ) )  
      cout << "The hash_set hs1 doesn't have an element "  
           << "with a key greater than or equal to 40." << endl;  
   else  
      cout << "The element of hash_set hs1 with a key >= 40 is: "  
           << *(p1.first) << "." << endl;  
}  
```  
  
```Output  
The upper bound of the element with a key of 20 in the hash_set hs1 is: 30.  
The lower bound of the element with a key of 20 in the hash_set hs1 is: 20.  
A direct call of upper_bound( 20 ) gives 30,  
matching the 2nd element of the pair returned by equal_range( 20 ).  
The hash_set hs1 doesn't have an element with a key greater than or equal to 40.  
```  
  
##  <a name="hash_set__erase"></a>  hash_set::erase  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Removes an element or a range of elements in a hash_set from specified positions or removes elements that match a specified key.  
  
```  
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);

size_type erase(const key_type& key);
```  
  
### Parameters  
 `_Where`  
 Position of the element to be removed from the hash_set.  
  
 ` first`  
 Position of the first element removed from the hash_set.  
  
 ` last`  
 Position just beyond the last element removed from the hash_set.  
  
 ` key`  
 The key of the elements to be removed from the hash_set.  
  
### Return Value  
 For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or a pointer to the end of the hash_set if no such element exists. For the third member function, the number of elements that have been removed from the hash_set.  
  
### Remarks  
 The member functions never throw an exception.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  The following example demonstrates the use of the hash_set::erase member function.  
  
```  
// hash_set_erase.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    using namespace stdext;  
    hash_set<int> hs1, hs2, hs3;  
    hash_set<int>::iterator pIter, Iter1, Iter2;  
    int i;  
    hash_set<int>::size_type n;  
  
    for (i = 1; i < 5; i++)  
    {  
        hs1.insert (i);  
        hs2.insert (i * i);  
        hs3.insert (i - 1);  
    }  
  
    // The 1st member function removes an element at a given position  
    Iter1 = ++hs1.begin();  
    hs1.erase(Iter1);  
  
    cout << "After the 2nd element is deleted, the hash_set hs1 is:";  
    for (pIter = hs1.begin(); pIter != hs1.end(); pIter++)  
        cout << " " << *pIter;  
    cout << "." << endl;  
  
    // The 2nd member function removes elements  
    // in the range [ first,  last)  
    Iter1 = ++hs2.begin();  
    Iter2 = --hs2.end();  
    hs2.erase(Iter1, Iter2);  
  
    cout << "After the middle two elements are deleted, "  
         << "the hash_set hs2 is:";  
    for (pIter = hs2.begin(); pIter != hs2.end(); pIter++)  
        cout << " " << *pIter;  
    cout << "." << endl;  
  
    // The 3rd member function removes elements with a given  key  
    n = hs3.erase(2);  
  
    cout << "After the element with a key of 2 is deleted, "  
         << "the hash_set hs3 is:";  
    for (pIter = hs3.begin(); pIter != hs3.end(); pIter++)  
        cout << " " << *pIter;  
    cout << "." << endl;  
  
    // The 3rd member function returns the number of elements removed  
    cout << "The number of elements removed from hs3 is: "  
         << n << "." << endl;  
  
    // The dereferenced iterator can also be used to specify a key  
    Iter1 = ++hs3.begin();  
    hs3.erase(Iter1);  
  
    cout << "After another element (unique for hash_set) with a key "  
         << endl;  
    cout  << "equal to that of the 2nd element is deleted, "  
          << "the hash_set hs3 is:";  
    for (pIter = hs3.begin(); pIter != hs3.end(); pIter++)  
        cout << " " << *pIter;  
    cout << "." << endl;  
}  
```  
  
```Output  
After the 2nd element is deleted, the hash_set hs1 is: 1 3 4.  
After the middle two elements are deleted, the hash_set hs2 is: 16 4.  
After the element with a key of 2 is deleted, the hash_set hs3 is: 0 1 3.  
The number of elements removed from hs3 is: 1.  
After another element (unique for hash_set) with a key   
equal to that of the 2nd element is deleted, the hash_set hs3 is: 0 3.  
```  
  
##  <a name="hash_set__find"></a>  hash_set::find  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator addressing the location of an element in a hash_set that has a key equivalent to a specified key.  
  
```  
iterator find(const Key& key);

const_iterator find(const Key& key) const;
```  
  
### Parameters  
 ` key`  
 The argument key to be matched by the sort key of an element from the hash_set being searched.  
  
### Return Value  
 An **iterator** or `const_iterator` that addresses the location of an element equivalent to a specified key or that addresses the location succeeding the last element in the hash_set if no match is found for the key.  
  
### Remarks  
 The member function returns an iterator that addresses an element in the hash_set whose sort key is **equivalent** to the argument key under a binary predicate that induces an ordering based on a less-than comparability relation.  
  
 If the return value of **find** is assigned to a `const_iterator`, the hash_set object cannot be modified. If the return value of **find** is assigned to an **iterator**, the hash_set object can be modified.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_find.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int> :: const_iterator hs1_AcIter, hs1_RcIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_RcIter = hs1.find( 20 );  
   cout << "The element of hash_set hs1 with a key of 20 is: "  
        << *hs1_RcIter << "." << endl;  
  
   hs1_RcIter = hs1.find( 40 );  
  
   // If no match is found for the key, end( ) is returned  
   if ( hs1_RcIter == hs1.end( ) )  
      cout << "The hash_set hs1 doesn't have an element "  
           << "with a key of 40." << endl;  
   else  
      cout << "The element of hash_set hs1 with a key of 40 is: "  
           << *hs1_RcIter << "." << endl;  
  
   // The element at a specific location in the hash_set can be found   
   // by using a dereferenced iterator addressing the location  
   hs1_AcIter = hs1.end( );  
   hs1_AcIter--;  
   hs1_RcIter = hs1.find( *hs1_AcIter );  
   cout << "The element of hs1 with a key matching "  
        << "that of the last element is: "  
        << *hs1_RcIter << "." << endl;  
}  
```  
  
```Output  
The element of hash_set hs1 with a key of 20 is: 20.  
The hash_set hs1 doesn't have an element with a key of 40.  
The element of hs1 with a key matching that of the last element is: 30.  
```  
  
##  <a name="hash_set__get_allocator"></a>  hash_set::get_allocator  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns a copy of the allocator object used to construct the hash_set.  
  
```  
Allocator get_allocator() const;
```  
  
### Return Value  
 The allocator used by the hash_set to manage memory, which is the template parameter `Allocator`.  
  
 For more information on `Allocator`, see the Remarks section of the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
### Remarks  
 Allocators for the hash_set class specify how the class manages storage. The default allocators supplied with STL container classes is sufficient for most programming needs. Writing and using your own allocator class is an advanced C++ topic.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_get_allocator.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
  
   // The following lines declare objects  
   // that use the default allocator.  
   hash_set <int, hash_compare <int, less<int> > > hs1;  
   hash_set <int,  hash_compare <int, greater<int> > > hs2;  
   hash_set <double, hash_compare <double,  
      less<double> >, allocator<double> > hs3;  
  
   hash_set <int, hash_compare <int,  
      greater<int> > >::allocator_type hs2_Alloc;  
   hash_set <double>::allocator_type hs3_Alloc;  
   hs2_Alloc = hs2.get_allocator( );  
  
   cout << "The number of integers that can be allocated"  
        << endl << "before free memory is exhausted: "  
        << hs1.max_size( ) << "." << endl;  
  
   cout << "The number of doubles that can be allocated"  
        << endl << "before free memory is exhausted: "  
        << hs3.max_size( ) <<  "." << endl;  
  
   // The following lines create a hash_set hs4  
   // with the allocator of hash_set hs1.  
   hash_set <int>::allocator_type hs4_Alloc;  
   hash_set <int> hs4;  
   hs4_Alloc = hs2.get_allocator( );  
  
   // Two allocators are interchangeable if  
   // storage allocated from each can be  
   // deallocated by the other  
   if( hs2_Alloc == hs4_Alloc )  
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
  
##  <a name="hash_set__hash_set"></a>  hash_set::hash_set  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Constructs a `hash_set` that is empty or that is a copy of all or part of some other `hash_set`.  
  
```  
hash_set();

explicit hash_set(
    const Traits& Comp);

hash_set(
    const Traits& Comp,  
    const Allocator& Al);

hash_set(
    const hash_set<Key, Traits, Allocator>& Right);

hash_set(
    hash_set&& Right);

hash_set(
    initializer_list<Type> IList);

hash_set(
    initializer_list<Type> IList,   
    const Compare& Comp);

hash_set(
    initializer_list<value_type> IList,   
    const Compare& Comp,   
    const Allocator& Al);

template <class InputIterator>  
hash_set(
 InputIterator First,  
    InputIterator Last);

template <class InputIterator>  
hash_set(
 InputIterator First,  
    InputIterator Last,  
    const Traits& Comp);

template <class InputIterator>  
hash_set(
 InputIterator First,  
    InputIterator Last,  
    const Traits& Comp,  
    const Allocator& Al);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Al`|The storage allocator class to be used for this `hash_set` object, which defaults to `Allocator`.|  
|`Comp`|The comparison function of type `const Traits` used to order the elements in the `hash_set`, which defaults to `hash_compare`.|  
|`Right`|The `hash_set` of which the constructed `hash_set` is to be a copy.|  
|`First`|The position of the first element in the range of elements to be copied.|  
|`Last`|The position of the first element beyond the range of elements to be copied.|  
  
### Remarks  
 All constructors store a type of allocator object that manages memory storage for the `hash_set` and that can later be returned by calling [hash_set::get_allocator](#hash_set__get_allocator). The allocator parameter is often omitted in the class declarations and preprocessing macros used to substitute alternative allocators.  
  
 All constructors initialize their hash_sets.  
  
 All constructors store a function object of type `Traits` that is used to establish an order among the keys of the `hash_set` and that can later be returned by calling [hash_set::key_comp](#hash_set__key_comp). For more information on `Traits` see the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
 The first constructor creates an empty initial `hash_set` The second specifies the type of comparison function ( `Comp`) to be used in establishing the order of the elements, and the third explicitly specifies the allocator type ( `Al`) to be used. The key word `explicit` suppresses certain kinds of automatic type conversion.  
  
 The fourth and fifth constructors specify a copy of the `hash_set``Right`.  
  
 The last sixth, seventh, and eighth constructors use an initializer_list for the elements.  
  
 The last constructors copy the range [ `First`, `Last`) of a `hash_set` with increasing explicitness in specifying the type of comparison function of class Traits and allocator.  
  
 The eighth constructor moves the `hash_set``Right`.  
  
 The actual order of elements in a `hash_set` container depends on the hash function, the ordering function and the current size of the hash table and cannot, in general, be predicted as it could with the set container, where it was determined by the ordering function alone.  
  
##  <a name="hash_set__insert"></a>  hash_set::insert  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Inserts an element or a range of elements into a `hash_set`.  
  
```  
pair<iterator, bool> insert(
    const value_type& Val);

iterator insert(
    iterator Where,  
    const value_type& Val);

void insert(
    initializer_list<value_type> IList)  
template <class InputIterator>  
void insert(
    InputIterator First,  
    InputIterator Last);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Val`|The value of an element to be inserted into the `hash_set` unless the `hash_set` already contains that element or, more generally, an element whose key is equivalently ordered.|  
|`Where`|The place to start searching for the correct point of insertion. (Insertion can occur in amortized constant time, instead of logarithmic time, if the insertion point immediately follows `_Where`.)|  
|`First`|The position of the first element to be copied from a `hash_set`.|  
|`Last`|The position just beyond the last element to be copied from a `hash_set`.|  
|`IList`|The initializer_list from which to copy the elements.|  
  
### Return Value  
 The first `insert` member function returns a pair whose `bool` component returns `true` if an insertion was make and `false` if the `hash_set` already contained an element whose key had an equivalent value in the ordering, and whose iterator component returns the address where a new element was inserted or where the element was already located.  
  
 To access the iterator component of a pair `pr` returned by this member function, use `pr.first` and to dereference it, use `*(pr.first)`. To access the `bool` component of a pair `pr` returned by this member function, use `pr.second`, and to dereference it, use `*(pr.second)`.  
  
 The second `insert` member function returns an iterator that points to the position where the new element was inserted into the `hash_set`.  
  
### Remarks  
 The third member function inserts the elements in an initializer_list.  
  
 The third member function inserts the sequence of element values into a `hash_set` corresponding to each element addressed by an iterator of in the range [ `First`, `Last`) of a specified `hash_set`.  
  
##  <a name="hash_set__iterator"></a>  hash_set::iterator  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a bidirectional iterator that can read or modify any element in a hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::iterator iterator;  
```  
  
### Remarks  
 A type **iterator** can be used to modify the value of an element.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [begin](#hash_set__begin) for an example of how to declare and use **iterator**.  
  
##  <a name="hash_set__key_comp"></a>  hash_set::key_comp  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Retrieves a copy of the hash traits object used to hash and order element key values in a hash_set.  
  
```  
key_compare key_comp() const;
```  
  
### Return Value  
 Returns the function object that a hash_set uses to order its elements, which is the template parameter `Traits`.  
  
 For more information on `Traits` see the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
### Remarks  
 The stored object defines the member function:  
  
 **bool operator**( **const Key&** _ *xVal*, **const Key&** \_ `yVal`);  
  
 which returns **true** if `_xVal` precedes and is not equal to `_yVal` in the sort order.  
  
 Note that both [key_compare](#hash_set__key_compare) and [value_compare](#hash_set__value_compare) are synonyms for the template parameter **Traits**. Both types are provided for the hash_set and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_key_comp.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
  
   hash_set <int, hash_compare < int, less<int> > >hs1;  
   hash_set<int, hash_compare < int, less<int> > >::key_compare kc1  
          = hs1.key_comp( ) ;  
   bool result1 = kc1( 2, 3 ) ;  
   if( result1 == true )  
   {  
      cout << "kc1( 2,3 ) returns value of true, "  
           << "where kc1 is the function object of hs1."  
           << endl;  
   }  
   else  
   {  
      cout << "kc1( 2,3 ) returns value of false "  
           << "where kc1 is the function object of hs1."  
        << endl;  
   }  
  
   hash_set <int, hash_compare < int, greater<int> > > hs2;  
   hash_set<int, hash_compare < int, greater<int> > >::key_compare  
         kc2 = hs2.key_comp( ) ;  
   bool result2 = kc2( 2, 3 ) ;  
   if(result2 == true)  
   {  
      cout << "kc2( 2,3 ) returns value of true, "  
           << "where kc2 is the function object of hs2."  
           << endl;  
   }  
   else  
   {  
      cout << "kc2( 2,3 ) returns value of false, "  
           << "where kc2 is the function object of hs2."  
           << endl;  
   }  
}  
```  
  
##  <a name="hash_set__key_compare"></a>  hash_set::key_compare  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a function object that can compare two sort keys to determine the relative order of two elements in the hash_set.  
  
```  
typedef Traits key_compare;  
```  
  
### Remarks  
 `key_compare` is a synonym for the template parameter `Traits`.  
  
 For more information on `Traits` see the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
 Note that both `key_compare` and [value_compare](#hash_set__value_compare) are synonyms for the template parameter **Traits**. Both types are provided for the set and multiset classes, where they are identical, for compatibility with the map and multimap classes, where they are distinct.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [key_comp](#hash_set__key_comp) for an example of how to declare and use `key_compare`.  
  
##  <a name="hash_set__key_type"></a>  hash_set::key_type  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that describes an object stored as an element of a hash_set in its capacity as sort key.  
  
```  
typedef Key key_type;  
```  
  
### Remarks  
 **key_type** is a synonym for the template parameter `Key`.  
  
 For more information on `Key`, see the Remarks section of the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
 Note that both `key_type` and [value_type](#hash_set__value_type) are synonyms for the template parameter **Key**. Both types are provided for the hash_set and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [value_type](#hash_set__value_type) for an example of how to declare and use `key_type`.  
  
##  <a name="hash_set__lower_bound"></a>  hash_set::lower_bound  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator to the first element in a hash_set with a key that is equal to or greater than a specified key.  
  
```  
const_iterator lower_bound(const Key& key) const;

iterator lower_bound(const Key& key);
```  
  
### Parameters  
 ` key`  
 The argument key to be compared with the sort key of an element from the hash_set being searched.  
  
### Return Value  
 An **iterator** or `const_iterator` that addresses the location of an element in a hash_set that with a key that is equal to or greater than the argument key or that addresses the location succeeding the last element in the hash_set if no match is found for the key.  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_lower_bound.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int> :: const_iterator hs1_AcIter, hs1_RcIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_RcIter = hs1.lower_bound( 20 );  
   cout << "The element of hash_set hs1 with a key of 20 is: "  
        << *hs1_RcIter << "." << endl;  
  
   hs1_RcIter = hs1.lower_bound( 40 );  
  
   // If no match is found for the key, end( ) is returned  
   if ( hs1_RcIter == hs1.end( ) )  
      cout << "The hash_set hs1 doesn't have an element "  
           << "with a key of 40." << endl;  
   else  
      cout << "The element of hash_set hs1 with a key of 40 is: "  
           << *hs1_RcIter << "." << endl;  
  
   // An element at a specific location in the hash_set can be found   
   // by using a dereferenced iterator that addresses the location  
   hs1_AcIter = hs1.end( );  
   hs1_AcIter--;  
   hs1_RcIter = hs1.lower_bound( *hs1_AcIter );  
   cout << "The element of hs1 with a key matching "  
        << "that of the last element is: "  
        << *hs1_RcIter << "." << endl;  
}  
```  
  
```Output  
The element of hash_set hs1 with a key of 20 is: 20.  
The hash_set hs1 doesn't have an element with a key of 40.  
The element of hs1 with a key matching that of the last element is: 30.  
```  
  
##  <a name="hash_set__max_size"></a>  hash_set::max_size  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns the maximum length of the hash_set.  
  
```  
size_type max_size() const;
```  
  
### Return Value  
 The maximum possible length of the hash_set.  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_max_size.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::size_type i;  
  
   i = hs1.max_size( );  
   cout << "The maximum possible length "  
        << "of the hash_set is " << i << "." << endl;  
}  
```  
  
##  <a name="hash_set__operator_eq"></a>  hash_set::operator=  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Replaces the elements of the hash_set with a copy of another hash_set.  
  
```  
hash_set& operator=(const hash_set& right);

hash_set& operator=(hash_set&& right);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` right`|The [hash_set](../standard-library/hash-set-class.md) being copied into the `hash_set`.|  
  
### Remarks  
 After erasing any existing elements in a `hash_set`, `operator=` either copies or moves the contents of ` right` into the `hash_set`.  
  
### Example  
  
```cpp  
// hash_set_operator_as.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set<int> v1, v2, v3;  
   hash_set<int>::iterator iter;  
  
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
  
##  <a name="hash_set__pointer"></a>  hash_set::pointer  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a pointer to an element in a hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::pointer pointer;  
```  
  
### Remarks  
 A type **pointer** can be used to modify the value of an element.  
  
 In most cases, an [iterator](#hash_set__iterator) should be used to access the elements in a hash_set object.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
##  <a name="hash_set__rbegin"></a>  hash_set::rbegin  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator addressing the first element in a reversed hash_set.  
  
```  
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```  
  
### Return Value  
 A reverse bidirectional iterator addressing the first element in a reversed hash_set or addressing what had been the last element in the unreversed hash_set.  
  
### Remarks  
 `rbegin` is used with a reversed hash_set just as [begin](#hash_set__begin) is used with a hash_set.  
  
 If the return value of `rbegin` is assigned to a `const_reverse_iterator`, then the hash_set object cannot be modified. If the return value of `rbegin` is assigned to a `reverse_iterator`, then the hash_set object can be modified.  
  
 `rbegin` can be used to iterate through a hash_set backwards.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_rbegin.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::iterator hs1_Iter;  
   hash_set <int>::reverse_iterator hs1_rIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_rIter = hs1.rbegin( );  
   cout << "The first element in the reversed hash_set is "  
        << *hs1_rIter << "." << endl;  
  
   // begin can be used to start an iteration   
   // throught a hash_set in a forward order  
   cout << "The hash_set is: ";  
   for ( hs1_Iter = hs1.begin( ) ; hs1_Iter != hs1.end( );  
         hs1_Iter++ )  
      cout << *hs1_Iter << " ";  
   cout << endl;  
  
   // rbegin can be used to start an iteration   
   // throught a hash_set in a reverse order  
   cout << "The reversed hash_set is: ";  
   for ( hs1_rIter = hs1.rbegin( ) ; hs1_rIter != hs1.rend( );  
         hs1_rIter++ )  
      cout << *hs1_rIter << " ";  
   cout << endl;  
  
   // A hash_set element can be erased by dereferencing to its key   
   hs1_rIter = hs1.rbegin( );  
   hs1.erase ( *hs1_rIter );  
  
   hs1_rIter = hs1.rbegin( );  
   cout << "After the erasure, the first element "  
        << "in the reversed hash_set is "<< *hs1_rIter << "."  
        << endl;  
}  
```  
  
```Output  
The first element in the reversed hash_set is 30.  
The hash_set is: 10 20 30   
The reversed hash_set is: 30 20 10   
After the erasure, the first element in the reversed hash_set is 20.  
```  
  
##  <a name="hash_set__reference"></a>  hash_set::reference  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a reference to an element stored in a hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reference reference;  
```  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_reference.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
  
   // Declare and initialize a reference &Ref1 to the 1st element  
   int &Ref1 = *hs1.begin( );  
  
   cout << "The first element in the hash_set is "  
        << Ref1 << "." << endl;  
  
   // The value of the 1st element of the hash_set can be changed  
   // by operating on its (non-const) reference  
   Ref1 = Ref1 + 5;  
  
   cout << "The first element in the hash_set is now "  
        << *hs1.begin() << "." << endl;  
}  
```  
  
```Output  
The first element in the hash_set is 10.  
The first element in the hash_set is now 15.  
```  
  
##  <a name="hash_set__rend"></a>  hash_set::rend  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator that addresses the location succeeding the last element in a reversed hash_set.  
  
```  
const_reverse_iterator rend() const;

reverse_iterator rend();
```  
  
### Return Value  
 A reverse bidirectional iterator that addresses the location succeeding the last element in a reversed hash_set (the location that had preceded the first element in the unreversed hash_set).  
  
### Remarks  
 `rend` is used with a reversed hash_set just as [end](#hash_set__end) is used with a hash_set.  
  
 If the return value of `rend` is assigned to a `const_reverse_iterator`, then the hash_set object cannot be modified. If the return value of `rend` is assigned to a `reverse_iterator`, then the hash_set object can be modified. The value returned by `rend` should not be dereferenced.  
  
 `rend` can be used to test to whether a reverse iterator has reached the end of its hash_set.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_rend.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::iterator hs1_Iter;  
   hash_set <int>::reverse_iterator hs1_rIter;  
   hash_set <int>::const_reverse_iterator hs1_crIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_rIter = hs1.rend( );  
   hs1_rIter--;  
   cout << "The last element in the reversed hash_set is "  
        << *hs1_rIter << "." << endl;  
  
   // end can be used to terminate an iteration   
   // throught a hash_set in a forward order  
   cout << "The hash_set is: ";  
   for ( hs1_Iter = hs1.begin( ) ; hs1_Iter != hs1.end( );  
         hs1_Iter++ )  
      cout << *hs1_Iter << " ";  
   cout << "." << endl;  
  
   // rend can be used to terminate an iteration   
   // through a hash_set in a reverse order  
   cout << "The reversed hash_set is: ";  
   for ( hs1_rIter = hs1.rbegin( ) ; hs1_rIter != hs1.rend( );  
         hs1_rIter++ )  
      cout << *hs1_rIter << " ";  
   cout << "." << endl;  
  
   hs1_rIter = hs1.rend( );  
   hs1_rIter--;  
   hs1.erase ( *hs1_rIter );  
  
   hs1_rIter = hs1.rend( );  
   hs1_rIter--;  
   cout << "After the erasure, the last element in the "  
        << "reversed hash_set is " << *hs1_rIter << "."  
        << endl;  
}  
```  
  
```Output  
The last element in the reversed hash_set is 10.  
The hash_set is: 10 20 30 .  
The reversed hash_set is: 30 20 10 .  
After the erasure, the last element in the reversed hash_set is 20.  
```  
  
##  <a name="hash_set__reverse_iterator"></a>  hash_set::reverse_iterator  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides a bidirectional iterator that can read or modify an element in a reversed hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::reverse_iterator reverse_iterator;  
```  
  
### Remarks  
 A type `reverse_iterator` is use to iterate through the hash_set in reverse.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [rbegin](#hash_set__rbegin) for an example of how to declare and use `reverse_iterator`.  
  
##  <a name="hash_set__size"></a>  hash_set::size  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns the number of elements in the hash_set.  
  
```  
size_type size() const;
```  
  
### Return Value  
 The current length of the hash_set.  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_size.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int> :: size_type i;  
  
   hs1.insert( 1 );  
   i = hs1.size( );  
   cout << "The hash_set length is " << i << "." << endl;  
  
   hs1.insert( 2 );  
   i = hs1.size( );  
   cout << "The hash_set length is now " << i << "." << endl;  
}  
```  
  
```Output  
The hash_set length is 1.  
The hash_set length is now 2.  
```  
  
##  <a name="hash_set__size_type"></a>  hash_set::size_type  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 An unsigned integer type that can represent the number of elements in a hash_set.  
  
```  
typedef list<typename Traits::value_type, typename Traits::allocator_type>::size_type size_type;  
```  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [size](#hash_set__size) for an example of how to declare and use `size_type`  
  
##  <a name="hash_set__swap"></a>  hash_set::swap  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Exchanges the elements of two hash_sets.  
  
```  
void swap(hash_set& right);
```  
  
### Parameters  
 ` right`  
 The argument hash_set providing the elements to be swapped with the target hash_set.  
  
### Remarks  
 The member function invalidates no references, pointers, or iterators that designate elements in the two hash_sets whose elements are being exchanged.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_swap.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1, hs2, hs3;  
   hash_set <int>::iterator hs1_Iter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
   hs2.insert( 100 );  
   hs2.insert( 200 );  
   hs3.insert( 300 );  
  
   cout << "The original hash_set hs1 is:";  
   for ( hs1_Iter = hs1.begin( ); hs1_Iter != hs1.end( );  
         hs1_Iter++ )  
         cout << " " << *hs1_Iter;  
   cout   << "." << endl;  
  
   // This is the member function version of swap  
   hs1.swap( hs2 );  
  
   cout << "After swapping with hs2, list hs1 is:";  
   for ( hs1_Iter = hs1.begin( ); hs1_Iter != hs1.end( );  
         hs1_Iter++ )  
         cout << " " << *hs1_Iter;  
   cout  << "." << endl;  
  
   // This is the specialized template version of swap  
   swap( hs1, hs3 );  
  
   cout << "After swapping with hs3, list hs1 is:";  
   for ( hs1_Iter = hs1.begin( ); hs1_Iter != hs1.end( );  
         hs1_Iter++ )  
         cout << " " << *hs1_Iter;  
   cout   << "." << endl;  
}  
```  
  
```Output  
The original hash_set hs1 is: 10 20 30.  
After swapping with hs2, list hs1 is: 200 100.  
After swapping with hs3, list hs1 is: 300.  
```  
  
##  <a name="hash_set__upper_bound"></a>  hash_set::upper_bound  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Returns an iterator to the first element in a hash_set that with a key that is greater than a specified key.  
  
```  
const_iterator upper_bound(const Key& key) const;

iterator upper_bound(const Key& key);
```  
  
### Parameters  
 ` key`  
 The argument key to be compared with the sort key of an element from the hash_set being searched.  
  
### Return Value  
 An **iterator** or `const_iterator` that addresses the location of an element in a hash_set that with a key that is equal to or greater than the argument key, or that addresses the location succeeding the last element in the hash_set if no match is found for the key.  
  
### Remarks  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_upper_bound.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int> :: const_iterator hs1_AcIter, hs1_RcIter;  
  
   hs1.insert( 10 );  
   hs1.insert( 20 );  
   hs1.insert( 30 );  
  
   hs1_RcIter = hs1.upper_bound( 20 );  
   cout << "The first element of hash_set hs1 with a key greater "  
        << "than 20 is: " << *hs1_RcIter << "." << endl;  
  
   hs1_RcIter = hs1.upper_bound( 30 );  
  
   // If no match is found for the key, end( ) is returned  
   if ( hs1_RcIter == hs1.end( ) )  
      cout << "The hash_set hs1 doesn't have an element "  
           << "with a key greater than 30." << endl;  
   else  
      cout << "The element of hash_set hs1 with a key > 40 is: "  
           << *hs1_RcIter << "." << endl;  
  
   // An element at a specific location in the hash_set can be found  
   // by using a dereferenced iterator addressing the location  
   hs1_AcIter = hs1.begin( );  
   hs1_RcIter = hs1.upper_bound( *hs1_AcIter );  
   cout << "The first element of hs1 with a key greater than "  
        << endl << "that of the initial element of hs1 is: "  
        << *hs1_RcIter << "." << endl;  
}  
```  
  
```Output  
The first element of hash_set hs1 with a key greater than 20 is: 30.  
The hash_set hs1 doesn't have an element with a key greater than 30.  
The first element of hs1 with a key greater than   
that of the initial element of hs1 is: 20.  
```  
  
##  <a name="hash_set__value_comp"></a>  hash_set::value_comp  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 Retrieves a copy of the comparison object used to order element values in a hash_set.  
  
```  
value_compare value_comp() const;
```  
  
### Return Value  
 Returns the function object that a hash_set uses to order its elements, which is the template parameter `Compare`.  
  
 For more information on `Compare`, see the Remarks section of the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
### Remarks  
 The stored object defines the member function:  
  
 **bool operator**( **const Key&** _ *xVal*, **const Key&** \_ `yVal`);  
  
 which returns **true** if `_xVal` precedes and is not equal to `_yVal` in the sort order.  
  
 Note that both [value_compare](../standard-library/set-class.md#set__value_compare) and [key_compare](../standard-library/set-class.md#set__key_compare) are synonyms for the template parameter `Compare`. Both types are provided for the hash_set and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  
```cpp  
// hash_set_value_comp.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
  
   hash_set <int, hash_compare < int, less<int> > > hs1;  
   hash_set <int, hash_compare < int, less<int> >  >::value_compare  
      vc1 = hs1.value_comp( );  
   bool result1 = vc1( 2, 3 );  
   if( result1 == true )  
   {  
      cout << "vc1( 2,3 ) returns value of true, "  
           << "where vc1 is the function object of hs1."  
           << endl;  
   }  
   else  
   {  
      cout << "vc1( 2,3 ) returns value of false, "  
           << "where vc1 is the function object of hs1."  
           << endl;  
   }  
  
   hash_set <int, hash_compare < int, greater<int> > > hs2;  
   hash_set<int, hash_compare < int, greater<int> > >::value_compare  
      vc2 = hs2.value_comp( );  
   bool result2 = vc2( 2, 3 );  
   if( result2 == true )  
   {  
      cout << "vc2( 2,3 ) returns value of true, "  
           << "where vc2 is the function object of hs2."  
           << endl;  
   }  
   else  
   {  
      cout << "vc2( 2,3 ) returns value of false, "  
           << "where vc2 is the function object of hs2."  
           << endl;  
   }  
}  
```  
  
##  <a name="hash_set__value_compare"></a>  hash_set::value_compare  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that provides two function objects, a binary predicate of class compare that can compare two element values of a hash_set to determine their relative order and a unary predicate that hashes the elements.  
  
```  
typedef key_compare value_compare;  
```  
  
### Remarks  
 **value_compare** is a synonym for the template parameter `Traits`.  
  
 For more information on `Traits` see the [hash_set Class](../standard-library/hash-set-class.md) topic.  
  
 Note that both [key_compare](#hash_set__key_compare) and **value_compare** are synonyms for the template parameter **Traits**. Both types are provided for the hash_set and hash_multiset classes, where they are identical, for compatibility with the hash_map and hash_multimap classes, where they are distinct.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
### Example  
  See the example for [value_comp](#hash_set__value_comp) for an example of how to declare and use `value_compare`.  
  
##  <a name="hash_set__value_type"></a>  hash_set::value_type  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).  
  
 A type that describes an object stored as an element of a hash_set in its capacity as a value.  
  
```  
typedef Key value_type;  
```  
  
### Example  
  
```cpp  
// hash_set_value_type.cpp  
// compile with: /EHsc  
#include <hash_set>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_set <int> hs1;  
   hash_set <int>::iterator hs1_Iter;  
  
   hash_set <int> :: value_type hsvt_Int;   // Declare value_type  
   hsvt_Int = 10;             // Initialize value_type  
  
   hash_set <int> :: key_type hskt_Int;   // Declare key_type  
   hskt_Int = 20;             // Initialize key_type  
  
   hs1.insert( hsvt_Int );         // Insert value into hs1  
   hs1.insert( hskt_Int );         // Insert key into hs1  
  
   // A hash_set accepts key_types or value_types as elements  
   cout << "The hash_set has elements:";  
   for ( hs1_Iter = hs1.begin( ) ; hs1_Iter != hs1.end( ); hs1_Iter++)  
      cout << " " << *hs1_Iter;  
   cout << "." << endl;  
}  
```  
  
```Output  
The hash_set has elements: 10 20.  
```  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)

