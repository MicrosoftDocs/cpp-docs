---
title: "unordered_multiset Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::unordered_multiset"
  - "std::tr1::unordered_multiset"
  - "unordered_multiset"
  - "std.tr1.unordered_multiset"
  - "unordered_set/std::tr1::unordered_multiset"
  - "tr1.unordered_multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unordered_multiset class [TR1]"
  - "unordered_multiset class"
ms.assetid: 70c8dfc5-492a-4af2-84f5-1aa9cb04b71c
caps.latest.revision: 24
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
# unordered_multiset Class
The template class describes an object that controls a varying-length sequence of elements of type `const Key`. The sequence is weakly ordered by a hash function, which partitions the sequence into an ordered set of subsequences called buckets. Within each bucket a comparison function determines whether any pair of elements has equivalent ordering. Each element serves as both a sort key and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations that can be independent of the number of elements in the sequence (constant time), at least when all buckets are of roughly equal length. In the worst case, when all of the elements are in one bucket, the number of operations is proportional to the number of elements in the sequence (linear time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.  
  
## Syntax  
  
```  
template <class Key,  
    class Hash = std::hash<Key>,  
    class Pred = std::equal_to<Key>,  
    class Alloc = std::allocator<Key>>  
class unordered_multiset;  
```  
  
#### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Key`|The key type.|  
|`Hash`|The hash function object type.|  
|`Pred`|The equality comparison function object type.|  
|`Alloc`|The allocator class.|  
  
## Members  
  
|||  
|-|-|  
|Type Definition|Description|  
|[unordered_multiset::allocator_type](#unordered_multiset__allocator_type)|The type of an allocator for managing storage.|  
|[unordered_multiset::const_iterator](#unordered_multiset__const_iterator)|The type of a constant iterator for the controlled sequence.|  
|[unordered_multiset::const_local_iterator](#unordered_multiset__const_local_iterator)|The type of a constant bucket iterator for the controlled sequence.|  
|[unordered_multiset::const_pointer](#unordered_multiset__const_pointer)|The type of a constant pointer to an element.|  
|[unordered_multiset::const_reference](#unordered_multiset__const_reference)|The type of a constant reference to an element.|  
|[unordered_multiset::difference_type](#unordered_multiset__difference_type)|The type of a signed distance between two elements.|  
|[unordered_multiset::hasher](#unordered_multiset__hasher)|The type of the hash function.|  
|[unordered_multiset::iterator](#unordered_multiset__iterator)|The type of an iterator for the controlled sequence.|  
|[unordered_multiset::key_equal](#unordered_multiset__key_equal)|The type of the comparison function.|  
|[unordered_multiset::key_type](#unordered_multiset__key_type)|The type of an ordering key.|  
|[unordered_multiset::local_iterator](#unordered_multiset__local_iterator)|The type of a bucket iterator for the controlled sequence.|  
|[unordered_multiset::pointer](#unordered_multiset__pointer)|The type of a pointer to an element.|  
|[unordered_multiset::reference](#unordered_multiset__reference)|The type of a reference to an element.|  
|[unordered_multiset::size_type](#unordered_multiset__size_type)|The type of an unsigned distance between two elements.|  
|[unordered_multiset::value_type](#unordered_multiset__value_type)|The type of an element.|  
  
|||  
|-|-|  
|Member Function|Description|  
|[unordered_multiset::begin](#unordered_multiset__begin)|Designates the beginning of the controlled sequence.|  
|[unordered_multiset::bucket](#unordered_multiset__bucket)|Gets the bucket number for a key value.|  
|[unordered_multiset::bucket_count](#unordered_multiset__bucket_count)|Gets the number of buckets.|  
|[unordered_multiset::bucket_size](#unordered_multiset__bucket_size)|Gets the size of a bucket.|  
|[unordered_multiset::cbegin](#unordered_multiset__cbegin)|Designates the beginning of the controlled sequence.|  
|[unordered_multiset::cend](#unordered_multiset__cend)|Designates the end of the controlled sequence.|  
|[unordered_multiset::clear](#unordered_multiset__clear)|Removes all elements.|  
|[unordered_multiset::count](#unordered_multiset__count)|Finds the number of elements matching a specified key.|  
|[unordered_multiset::emplace](#unordered_multiset__emplace)|Adds an element constructed in place.|  
|[unordered_multiset::emplace_hint](#unordered_multiset__emplace_hint)|Adds an element constructed in place, with hint.|  
|[unordered_multiset::empty](#unordered_multiset__empty)|Tests whether no elements are present.|  
|[unordered_multiset::end](#unordered_multiset__end)|Designates the end of the controlled sequence.|  
|[unordered_multiset::equal_range](#unordered_multiset__equal_range)|Finds range that matches a specified key.|  
|[unordered_multiset::erase](#unordered_multiset__erase)|Removes elements at specified positions.|  
|[unordered_multiset::find](#unordered_multiset__find)|Finds an element that matches a specified key.|  
|[unordered_multiset::get_allocator](#unordered_multiset__get_allocator)|Gets the stored allocator object.|  
|[unordered_multiset::hash_function](#unordered_multiset__hash_function)|Gets the stored hash function object.|  
|[unordered_multiset::insert](#unordered_multiset__insert)|Adds elements.|  
|[unordered_multiset::key_eq](#unordered_multiset__key_eq)|Gets the stored comparison function object.|  
|[unordered_multiset::load_factor](#unordered_multiset__load_factor)|Counts the average elements per bucket.|  
|[unordered_multiset::max_bucket_count](#unordered_multiset__max_bucket_count)|Gets the maximum number of buckets.|  
|[unordered_multiset::max_load_factor](#unordered_multiset__max_load_factor)|Gets or sets the maximum elements per bucket.|  
|[unordered_multiset::max_size](#unordered_multiset__max_size)|Gets the maximum size of the controlled sequence.|  
|[unordered_multiset::rehash](#unordered_multiset__rehash)|Rebuilds the hash table.|  
|[unordered_multiset::size](#unordered_multiset__size)|Counts the number of elements.|  
|[unordered_multiset::swap](#unordered_multiset__swap)|Swaps the contents of two containers.|  
|[unordered_multiset::unordered_multiset](#unordered_multiset__unordered_multiset)|Constructs a container object.|  
  
|||  
|-|-|  
|Operator|Description|  
|[unordered_multiset::operator=](#unordered_multiset__operator_eq)|Copies a hash table.|  
  
## Remarks  
 The object orders the sequence it controls by calling two stored objects, a comparison function object of type [unordered_multiset::key_equal](#unordered_multiset__key_equal) and a hash function object of type [unordered_multiset::hasher](#unordered_multiset__hasher). You access the first stored object by calling the member function [unordered_multiset::key_eq](#unordered_multiset__key_eq)`()`; and you access the second stored object by calling the member function [unordered_multiset::hash_function](#unordered_multiset__hash_function)`()`. Specifically, for all values `X` and `Y` of type `Key`, the call `key_eq()(X, Y)` returns true only if the two argument values have equivalent ordering; the call `hash_function()(keyval)` yields a distribution of values of type `size_t`. Unlike template class [unordered_set Class](../standard-library/unordered-set-class.md), an object of template class `unordered_multiset` does not ensure that `key_eq()(X, Y)` is always false for any two elements of the controlled sequence. (Keys need not be unique.)  
  
 The object also stores a maximum load factor, which specifies the maximum desired average number of elements per bucket. If inserting an element causes [unordered_multiset::load_factor](#unordered_multiset__load_factor)`()` to exceed the maximum load factor, the container increases the number of buckets and rebuilds the hash table as needed.  
  
 The actual order of elements in the controlled sequence depends on the hash function, the comparison function, the order of insertion, the maximum load factor, and the current number of buckets. You cannot in general predict the order of elements in the controlled sequence. You can always be assured, however, that any subset of elements that have equivalent ordering are adjacent in the controlled sequence.  
  
 The object allocates and frees storage for the sequence it controls through a stored allocator object of type [unordered_multiset::allocator_type](#unordered_multiset__allocator_type). Such an allocator object must have the same external interface as an object of template class `allocator`. Note that the stored allocator object is not copied when the container object is assigned.  
  
## Requirements  
 **Header:** <unordered_set>  
  
 **Namespace:** std  
  
##  <a name="unordered_multiset__allocator_type"></a>  unordered_multiset::allocator_type  
 The type of an allocator for managing storage.  
  
```  
typedef Alloc allocator_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Alloc`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_allocator_type.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__begin"></a>  unordered_multiset::begin  
 Designates the beginning of the controlled sequence or a bucket.  
  
```  
iterator begin();

const_iterator begin() const;

 
local_iterator begin(size_type nbucket);

const_local_iterator begin(size_type nbucket) const;
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`nbucket`|The bucket number.|  
  
### Remarks  
 The first two member functions return a forward iterator that points at the first element of the sequence (or just beyond the end of an empty sequence). The last two member functions return a forward iterator that points at the first element of bucket `nbucket` (or just beyond the end of an empty bucket).  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_begin.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// inspect first two items " [c] [b]"   
    Myset::iterator it2 = c1.begin();   
    std::cout << " [" << *it2 << "]";   
    ++it2;   
    std::cout << " [" << *it2 << "]";   
    std::cout << std::endl;   
  
// inspect bucket containing 'a'   
    Myset::const_local_iterator lit = c1.begin(c1.bucket('a'));   
    std::cout << " [" << *lit << "]";   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[c] [b]  
[a]  
```  
  
##  <a name="unordered_multiset__bucket"></a>  unordered_multiset::bucket  
 Gets the bucket number for a key value.  
  
```  
size_type bucket(const Key& keyval) const;
```  
  
### Parameters  
 keyval  
 The key value to map.  
  
### Remarks  
 The member function returns the bucket number currently corresponding to the key value `keyval`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_bucket.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__bucket_count"></a>  unordered_multiset::bucket_count  
 Gets the number of buckets.  
  
```  
size_type bucket_count() const;
```  
  
### Remarks  
 The member function returns the current number of buckets.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_bucket_count.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__bucket_size"></a>  unordered_multiset::bucket_size  
 Gets the size of a bucket  
  
```  
size_type bucket_size(size_type nbucket) const;
```  
  
### Parameters  
 `nbucket`  
 The bucket number.  
  
### Remarks  
 The member functions returns the size of bucket number `nbucket`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_bucket_size.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__cbegin"></a>  unordered_multiset::cbegin  
 Returns a `const` iterator that addresses the first element in the range.  
  
```  
const_iterator cbegin() const;
```  
  
### Return Value  
 A `const` forward-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).  
  
### Remarks  
 With the return value of `cbegin`, the elements in the range cannot be modified.  
  
 You can use this member function in place of the `begin()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- `const`) container of any kind that supports `begin()` and `cbegin()`.  
  
```cpp  
 
auto i1 = Container.begin();
// i1 is Container<T>::iterator   
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator  
```  
  
##  <a name="unordered_multiset__cend"></a>  unordered_multiset::cend  
 Returns a `const` iterator that addresses the location just beyond the last element in a range.  
  
```  
const_iterator cend() const;
```  
  
### Return Value  
 A `const` forward-access iterator that points just beyond the end of the range.  
  
### Remarks  
 `cend` is used to test whether an iterator has passed the end of its range.  
  
 You can use this member function in place of the `end()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- `const`) container of any kind that supports `end()` and `cend()`.  
  
```cpp  
 
auto i1 = Container.end();
// i1 is Container<T>::iterator   
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator  
```  
  
 The value returned by `cend` should not be dereferenced.  
  
##  <a name="unordered_multiset__clear"></a>  unordered_multiset::clear  
 Removes all elements.  
  
```  
void clear();
```  
  
### Remarks  
 The member function calls [unordered_multiset::erase](#unordered_multiset__erase)`(` [unordered_multiset::begin](#unordered_multiset__begin)`(),` [unordered_multiset::end](#unordered_multiset__end)`())`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_clear.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// clear the container and reinspect   
    c1.clear();   
    std::cout << "size == " << c1.size() << std::endl;   
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;   
    std::cout << std::endl;   
  
    c1.insert('d');   
    c1.insert('e');   
  
// display contents " [e] [d]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__const_iterator"></a>  unordered_multiset::const_iterator  
 The type of a constant iterator for the controlled sequence.  
  
```  
typedef T1 const_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant forward iterator for the controlled sequence. It is described here as a synonym for the implementation-defined type `T1`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_const_iterator.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="unordered_multiset__const_local_iterator"></a>  unordered_multiset::const_local_iterator  
 The type of a constant bucket iterator for the controlled sequence.  
  
```  
typedef T5 const_local_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant forward iterator for a bucket. It is described here as a synonym for the implementation-defined type `T5`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_const_local_iterator.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// inspect bucket containing 'a'   
    Myset::const_local_iterator lit = c1.begin(c1.bucket('a'));   
    std::cout << " [" << *lit << "]";   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[a]  
```  
  
##  <a name="unordered_multiset__const_pointer"></a>  unordered_multiset::const_pointer  
 The type of a constant pointer to an element.  
  
```  
typedef Alloc::const_pointer const_pointer;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant pointer to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_const_pointer.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   
        Myset::const_pointer p = &*it;   
        std::cout << " [" << *p << "]";   
        }   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="unordered_multiset__const_reference"></a>  unordered_multiset::const_reference  
 The type of a constant reference to an element.  
  
```  
typedef Alloc::const_reference const_reference;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant reference to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_const_reference.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   
        Myset::const_reference ref = *it;   
        std::cout << " [" << ref << "]";   
        }   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="unordered_multiset__count"></a>  unordered_multiset::count  
 Finds the number of elements matching a specified key.  
  
```  
size_type count(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 Key value to search for.  
  
### Remarks  
 The member function returns the number of elements in the range delimited by [unordered_multiset::equal_range](#unordered_multiset__equal_range)`(keyval)`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_count.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__difference_type"></a>  unordered_multiset::difference_type  
 The type of a signed distance between two elements.  
  
```  
typedef T3 difference_type;  
```  
  
### Remarks  
 The signed integer type describes an object that can represent the difference between the addresses of any two elements in the controlled sequence. It is described here as a synonym for the implementation-defined type `T3`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_difference_type.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// compute positive difference   
    Myset::difference_type diff = 0;   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        ++diff;   
    std::cout << "end()-begin() == " << diff << std::endl;   
  
// compute negative difference   
    diff = 0;   
    for (Myset::const_iterator it = c1.end();   
        it != c1.begin(); --it)   
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
  
##  <a name="unordered_multiset__emplace"></a>  unordered_multiset::emplace  
 Inserts an element constructed in place (no copy or move operations are performed).  
  
```  
template <class... Args>  
iterator emplace(Args&&... args);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`args`|The arguments forwarded to construct an element to be inserted into the unordered_multiset.|  
  
### Return Value  
 An iterator to the newly inserted element.  
  
### Remarks  
 No references to container elements are invalidated by this function, but it may invalidate all iterators to the container.  
  
 During the insertion, if an exception is thrown but does not occur in the container's hash function, the container is not modified. If the exception is thrown in the hash function, the result is undefined.  
  
 For a code example, see [multiset::emplace](../standard-library/multiset-class.md#multiset__emplace).  
  
##  <a name="unordered_multiset__emplace_hint"></a>  unordered_multiset::emplace_hint  
 Inserts an element constructed in place (no copy or move operations are performed), with a placement hint.  
  
```  
template <class... Args>  
iterator emplace_hint(
    const_iterator where,  
    Args&&... args);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`args`|The arguments forwarded to construct an element to be inserted into the unordered_multiset.|  
|`where`|A hint regarding the place to start searching for the correct point of insertion.|  
  
### Return Value  
 An iterator to the newly inserted element.  
  
### Remarks  
 No references to container elements are invalidated by this function, but it may invalidate all iterators to the container.  
  
 During the insertion, if an exception is thrown but does not occur in the container's hash function, the container is not modified. If the exception is thrown in the hash function, the result is undefined.  
  
 For a code example, see [set::emplace_hint](../standard-library/set-class.md#set__emplace_hint).  
  
##  <a name="unordered_multiset__empty"></a>  unordered_multiset::empty  
 Tests whether no elements are present.  
  
```  
bool empty() const;
```  
  
### Remarks  
 The member function returns true for an empty controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_empty.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// clear the container and reinspect   
    c1.clear();   
    std::cout << "size == " << c1.size() << std::endl;   
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;   
    std::cout << std::endl;   
  
    c1.insert('d');   
    c1.insert('e');   
  
// display contents " [e] [d]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__end"></a>  unordered_multiset::end  
 Designates the end of the controlled sequence.  
  
```  
iterator end();
const_iterator end() const;

 
    local_iterator end(size_type nbucket);
const_local_iterator end(size_type nbucket) const;
```  
  
### Parameters  
 `nbucket`  
 The bucket number.  
  
### Remarks  
 The first two member functions return a forward iterator that points just beyond the end of the sequence. The last two member functions return a forward iterator that points just beyond the end of bucket `nbucket`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_end.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// inspect last two items " [a] [b]"   
    Myset::iterator it2 = c1.end();   
    --it2;   
    std::cout << " [" << *it2 << "]";   
    --it2;   
    std::cout << " [" << *it2 << "]";   
    std::cout << std::endl;   
  
// inspect bucket containing 'a'   
    Myset::const_local_iterator lit = c1.end(c1.bucket('a'));   
    --lit;   
    std::cout << " [" << *lit << "]";   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[a] [b]  
[a]  
```  
  
##  <a name="unordered_multiset__equal_range"></a>  unordered_multiset::equal_range  
 Finds range that matches a specified key.  
  
```  
std::pair<iterator, iterator>  
    equal_range(const Key& keyval);

std::pair<const_iterator, const_iterator>  
    equal_range(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 Key value to search for.  
  
### Remarks  
 The member function returns a pair of iterators `X` such that `[X.first, X.second)` delimits just those elements of the controlled sequence that have equivalent ordering with `keyval`. If no such elements exist, both iterators are `end()`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_equal_range.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// display results of failed search   
    std::pair<Myset::iterator, Myset::iterator> pair1 =   
        c1.equal_range('x');   
    std::cout << "equal_range('x'):";   
    for (; pair1.first != pair1.second; ++pair1.first)   
        std::cout << " [" << *pair1.first << "]";   
    std::cout << std::endl;   
  
// display results of successful search   
    pair1 = c1.equal_range('b');   
    std::cout << "equal_range('b'):";   
    for (; pair1.first != pair1.second; ++pair1.first)   
        std::cout << " [" << *pair1.first << "]";   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
 [c] [b] [a]  
equal_range('x'):  
equal_range('b'): [b]  
```  
  
##  <a name="unordered_multiset__erase"></a>  unordered_multiset::erase  
 Removes an element or a range of elements in a unordered_multiset from specified positions or removes elements that match a specified key.  
  
```  
iterator erase(
    const_iterator Where);

iterator erase(
    const_iterator First,  
    const_iterator Last);

size_type erase(
    const key_type& Key);
```  
  
### Parameters  
 `Where`  
 Position of the element to be removed.  
  
 `First`  
 Position of the first element to be removed.  
  
 `Last`  
 Position just beyond the last element to be removed.  
  
 `Key`  
 The key value of the elements to be removed.  
  
### Return Value  
 For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or an element that is the end of the unordered_multiset if no such element exists.  
  
 For the third member function, returns the number of elements that have been removed from the unordered_multiset.  
  
### Remarks  
 For a code example, see [set::erase](../standard-library/set-class.md#set__erase).  
  
##  <a name="unordered_multiset__find"></a>  unordered_multiset::find  
 Finds an element that matches a specified key.  
  
```  
const_iterator find(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 Key value to search for.  
  
### Remarks  
 The member function returns [unordered_multiset::equal_range](#unordered_multiset__equal_range)`(keyval).first`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_find.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// try to find and fail   
    std::cout << "find('A') == "   
        << std::boolalpha << (c1.find('A') != c1.end()) << std::endl;   
  
// try to find and succeed   
    Myset::iterator it = c1.find('b');   
    std::cout << "find('b') == "   
        << std::boolalpha << (it != c1.end())   
        << ": [" << *it << "]" << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
 [c] [b] [a]  
find('A') == false  
find('b') == true: [b]  
```  
  
##  <a name="unordered_multiset__get_allocator"></a>  unordered_multiset::get_allocator  
 Gets the stored allocator object.  
  
```  
Alloc get_allocator() const;
```  
  
### Remarks  
 The member function returns the stored allocator object.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_get_allocator.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__hash_function"></a>  unordered_multiset::hash_function  
 Gets the stored hash function object.  
  
```  
Hash hash_function() const;
```  
  
### Remarks  
 The member function returns the stored hash function object.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_hash_function.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__hasher"></a>  unordered_multiset::hasher  
 The type of the hash function.  
  
```  
typedef Hash hasher;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Hash`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_hasher.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__insert"></a>  unordered_multiset::insert  
 Inserts an element or a range of elements into an unordered_multiset.  
  
```  
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
  
|||  
|-|-|  
|Parameter|Description|  
|`Val`|The value of an element to be inserted into the unordered_multiset.|  
|`Where`|The place to start searching for the correct point of insertion.|  
|`ValTy`|Template parameter that specifies the argument type that the unordered_multiset can use to construct an element of [value_type](../standard-library/map-class.md#map__value_type), and perfect-forwards `Val` as an argument.|  
|`First`|The position of the first element to be copied.|  
|`Last`|The position just beyond the last element to be copied.|  
|`InputIterator`|Template function argument that meets the requirements of an [input iterator](../standard-library/input-iterator-tag-struct.md) that points to elements of a type that can be used to construct [value_type](../standard-library/map-class.md#map__value_type) objects.|  
|`IList`|The [initializer_list](../standard-library/initializer-list.md) from which to copy the elements.|  
  
### Return Value  
 The single-element-insert member functions, (1) and (2), return an iterator to the position where the new element was inserted into the unordered_multiset.  
  
 The single-element-with-hint member functions, (3) and (4), return an iterator that points to the position where the new element was inserted into the unordered_multiset.  
  
### Remarks  
 No pointers or references are invalidated by this function, but it may invalidate all iterators to the container.  
  
 During the insertion of just one element, if an exception is thrown but does not occur in the container's hash function, the container's state is not modified. If the exception is thrown in the hash function, the result is undefined. During the insertion of multiple elements, if an exception is thrown, the container is left in an unspecified but valid state.  
  
 The [value_type](../standard-library/map-class.md#map__value_type) of a container is a typedef that belongs to the container, and, for set, `unordered_multiset<V>::value_type` is type `const V`.  
  
 The range member function (5) inserts the sequence of element values into an unordered_multiset that corresponds to each element addressed by an iterator in the range `[First, Last)`; therefore, `Last` does not get inserted. The container member function `end()` refers to the position just after the last element in the container—for example, the statement `m.insert(v.begin(), v.end());` inserts all elements of `v` into `m`.  
  
 The initializer list member function (6) uses an [initializer_list](../standard-library/initializer-list.md) to copy elements into the unordered_multiset.  
  
 For insertion of an element constructed in place—that is, no copy or move operations are performed—see [unordered_multiset::emplace](#unordered_multiset__emplace) and [unordered_multiset::emplace_hint](#unordered_multiset__emplace_hint).  
  
 For a code example, see [multiset::insert](../standard-library/multiset-class.md#multiset__insert).  
  
##  <a name="unordered_multiset__iterator"></a>  unordered_multiset::iterator  
 A type that provides a constant [forward iterator](../standard-library/forward-iterator-tag-struct.md) that can read elements in an unordered_multiset.  
  
```  
typedef implementation-defined iterator;  
```  
  
### Example  
  See the example for [begin](../standard-library/multiset-class.md#multiset__begin) for an example of how to declare and use an **iterator**.  
  
##  <a name="unordered_multiset__key_eq"></a>  unordered_multiset::key_eq  
 Gets the stored comparison function object.  
  
```  
Pred key_eq() const;
```  
  
### Remarks  
 The member function returns the stored comparison function object.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_key_eq.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__key_equal"></a>  unordered_multiset::key_equal  
 The type of the comparison function.  
  
```  
typedef Pred key_equal;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Pred`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_key_equal.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__key_type"></a>  unordered_multiset::key_type  
 The type of an ordering key.  
  
```  
typedef Key key_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Key`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_key_type.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// add a value and reinspect   
    Myset::key_type key = 'd';   
    Myset::value_type val = key;   
    c1.insert(val);   
  
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[d] [c] [b] [a]  
```  
  
##  <a name="unordered_multiset__load_factor"></a>  unordered_multiset::load_factor  
 Counts the average elements per bucket.  
  
```  
float load_factor() const;
```  
  
### Remarks  
 The member function returns `(float)`[unordered_multiset::size](#unordered_multiset__size)`() / (float)`[unordered_multiset::bucket_count](#unordered_multiset__bucket_count)`()`, the average number of elements per bucket.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_load_factor.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__local_iterator"></a>  unordered_multiset::local_iterator  
 The type of a bucket iterator.  
  
```  
typedef T4 local_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a forward iterator for a bucket. It is described here as a synonym for the implementation-defined type `T4`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_local_iterator.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// inspect bucket containing 'a'   
    Myset::local_iterator lit = c1.begin(c1.bucket('a'));   
    std::cout << " [" << *lit << "]";   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[a]  
```  
  
##  <a name="unordered_multiset__max_bucket_count"></a>  unordered_multiset::max_bucket_count  
 Gets the maximum number of buckets.  
  
```  
size_type max_bucket_count() const;
```  
  
### Remarks  
 The member function returns the maximum number of buckets currently permitted.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_max_bucket_count.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__max_load_factor"></a>  unordered_multiset::max_load_factor  
 Gets or sets the maximum elements per bucket.  
  
```  
float max_load_factor() const;

 
void max_load_factor(float factor);
```  
  
### Parameters  
 `factor`  
 The new maximum load factor.  
  
### Remarks  
 The first member function returns the stored maximum load factor. The second member function replaces the stored maximum load factor with `factor`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_max_load_factor.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__max_size"></a>  unordered_multiset::max_size  
 Gets the maximum size of the controlled sequence.  
  
```  
size_type max_size() const;
```  
  
### Remarks  
 The member function returns the length of the longest sequence that the object can control.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_max_size.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__operator_eq"></a>  unordered_multiset::operator=  
 Copies a hash table.  
  
```  
unordered_multiset& operator=(const unordered_multiset& right);

unordered_multiset& operator=(unordered_multiset&& right);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` right`|The [unordered_multiset](../standard-library/unordered-multiset-class.md) being copied into the `unordered_multiset`.|  
  
### Remarks  
 After erasing any existing elements in an `unordered_multiset`, `operator=` either copies or moves the contents of ` right` into the `unordered_multiset`.  
  
### Example  
  
```cpp  
// unordered_multiset_operator_as.cpp  
// compile with: /EHsc  
#include <unordered_set>  
#include <iostream>  
  
int main( )  
   {  
   using namespace std;  
   unordered_multiset<int> v1, v2, v3;  
   unordered_multiset<int>::iterator iter;  
  
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
  
##  <a name="unordered_multiset__pointer"></a>  unordered_multiset::pointer  
 The type of a pointer to an element.  
  
```  
typedef Alloc::pointer pointer;  
```  
  
### Remarks  
 The type describes an object that can serve as a pointer to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_pointer.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   
        Myset::key_type key = *it;   
        Myset::pointer p = &key;   
        std::cout << " [" << *p << "]";   
        }   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="unordered_multiset__reference"></a>  unordered_multiset::reference  
 The type of a reference to an element.  
  
```  
typedef Alloc::reference reference;  
```  
  
### Remarks  
 The type describes an object that can serve as a reference to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_reference.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   
        Myset::key_type key = *it;   
        Myset::reference ref = key;   
        std::cout << " [" << ref << "]";   
        }   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
```  
  
##  <a name="unordered_multiset__rehash"></a>  unordered_multiset::rehash  
 Rebuilds the hash table.  
  
```  
void rehash(size_type nbuckets);
```  
  
### Parameters  
 `nbuckets`  
 The requested number of buckets.  
  
### Remarks  
 The member function alters the number of buckets to be at least `nbuckets` and rebuilds the hash table as needed.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_rehash.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__size"></a>  unordered_multiset::size  
 Counts the number of elements.  
  
```  
size_type size() const;
```  
  
### Remarks  
 The member function returns the length of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_size.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// clear the container and reinspect   
    c1.clear();   
    std::cout << "size == " << c1.size() << std::endl;   
    std::cout << "empty() == " << std::boolalpha << c1.empty() << std::endl;   
    std::cout << std::endl;   
  
    c1.insert('d');   
    c1.insert('e');   
  
// display contents " [e] [d]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
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
  
##  <a name="unordered_multiset__size_type"></a>  unordered_multiset::size_type  
 The type of an unsigned distance between two elements.  
  
```  
typedef T2 size_type;  
```  
  
### Remarks  
 The unsigned integer type describes an object that can represent the length of any controlled sequence. It is described here as a synonym for the implementation-defined type `T2`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_size_type.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
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
  
##  <a name="unordered_multiset__swap"></a>  unordered_multiset::swap  
 Swaps the contents of two containers.  
  
```  
void swap(unordered_multiset& right);
```  
  
### Parameters  
 `right`  
 The container to swap with.  
  
### Remarks  
 The member function swaps the controlled sequences between `*this` and `right`. If [unordered_multiset::get_allocator](#unordered_multiset__get_allocator)`() == right.get_allocator()`, it does so in constant time, it throws an exception only as a result of copying the stored traits object of type `Tr`, and it invalidates no references, pointers, or iterators that designate elements in the two controlled sequences. Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_swap.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
    Myset c2;   
  
    c2.insert('d');   
    c2.insert('e');   
    c2.insert('f');   
  
    c1.swap(c2);   
  
// display contents " [f] [e] [d]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
    swap(c1, c2);   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[f] [e] [d]  
[c] [b] [a]  
```  
  
##  <a name="unordered_multiset__unordered_multiset"></a>  unordered_multiset::unordered_multiset  
 Constructs a container object.  
  
```  
unordered_multiset(
    const unordered_multiset& Right);

explicit unordered_multiset(
    size_type Bucket_count = N0,  
    const Hash& Hash = Hash(),  
    const Comp& Comp = Comp(),  
    const Allocator& Al = Alloc());

unordered_multiset(
    unordered_multiset&& Right);

unordered_set(
    initializer_list<Type> IList);

unordered_set(
    initializer_list<Typ> IList,  
    size_type Bucket_count);

unordered_set(
    initializer_list<Type> IList,   
    size_type Bucket_count,   
    const Hash& Hash);

unordered_set(
    initializer_list<Type> IList,   
    size_type Bucket_count,   
    const Hash& Hash,   
    const Key& Key);

unordered_set(
    initializer_list<Type> IList,   
    size_type Bucket_count,   
    const Hash& Hash,   
    const Key& Key,   
    const Allocator& Al);

template <class InputIterator>  
unordered_multiset(
 InputIterator First,   
    InputIterator Last,  
    size_type Bucket_count = N0,  
    const Hash& Hash = Hash(),  
    const Comp& Comp = Comp(),  
    const Allocator& Al = Alloc());
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`InputIterator`|The iterator type.|  
|`Al`|The allocator object to store.|  
|`Comp`|The comparison function object to store.|  
|`Hash`|The hash function object to store.|  
|`Bucket_count`|The minimum number of buckets.|  
|`Right`|The container to copy.|  
|`IList`|The initializer_list from which to copy.|  
  
### Remarks  
 The first constructor specifies a copy of the sequence controlled by `Right`. The second constructor specifies an empty controlled sequence. The third constructor inserts the sequence of element values `[First, Last)`. The fourth constructor specifies a copy of the sequence by moving `Right`.  
  
 All constructors also initialize several stored values. For the copy constructor, the values are obtained from `Right`. Otherwise:  
  
 The minimum number of buckets is the argument `Bucket_count`, if present; otherwise it is a default value described here as the implementation-defined value `N0`.  
  
 The hash function object is the argument `Hash`, if present; otherwise it is `Hash()`.  
  
 The comparison function object is the argument `Comp`, if present; otherwise it is `Comp()`.  
  
 The allocator object is the argument `Al`, if present; otherwise, it is `Alloc()`.  
  
##  <a name="unordered_multiset__value_type"></a>  unordered_multiset::value_type  
 The type of an element.  
  
```  
typedef Key value_type;  
```  
  
### Remarks  
 The type describes an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_set__unordered_multiset_value_type.cpp   
// compile with: /EHsc   
#include <unordered_set>   
#include <iostream>   
  
typedef std::unordered_multiset<char> Myset;   
int main()   
    {   
    Myset c1;   
  
    c1.insert('a');   
    c1.insert('b');   
    c1.insert('c');   
  
// display contents " [c] [b] [a]"   
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
// add a value and reinspect   
    Myset::key_type key = 'd';   
    Myset::value_type val = key;   
    c1.insert(val);   
  
    for (Myset::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << *it << "]";   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
[c] [b] [a]  
[d] [c] [b] [a]  
```  
  
## See Also  
 [<unordered_set>](../standard-library/unordered-set.md)   
 [Containers](../cpp/containers-modern-cpp.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)

