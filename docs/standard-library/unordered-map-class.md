---
title: "unordered_map Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::unordered_map"
  - "std.tr1.unordered_map"
  - "tr1.unordered_map"
  - "tr1::unordered_map"
  - "unordered_map"
  - "unordered_map/std::tr1::unordered_map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unordered_map class"
  - "unordered_map class [TR1]"
ms.assetid: 7cf7cfa1-16e7-461c-a9b2-3b8d8ec24e0d
caps.latest.revision: 20
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
# unordered_map Class
The template class describes an object that controls a varying-length sequence of elements of type `std::pair<const Key, Ty>`. The sequence is weakly ordered by a hash function, which partitions the sequence into an ordered set of subsequences called buckets. Within each bucket a comparison function determines whether any pair of elements has equivalent ordering. Each element stores two objects, a sort key and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations that can be independent of the number of elements in the sequence (constant time), at least when all buckets are of roughly equal length. In the worst case, when all of the elements are in one bucket, the number of operations is proportional to the number of elements in the sequence (linear time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.  
  
## Syntax  
  
```  
template <class Key,  
    class Ty,  
    class Hash = std::hash<Key>,  
    class Pred = std::equal_to<Key>,  
    class Alloc = std::allocator<std::pair<const Key, Ty>>>  
class unordered_map;  
```  
  
#### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Key`|The key type.|  
|`Ty`|The mapped type.|  
|`Hash`|The hash function object type.|  
|`Pred`|The equality comparison function object type.|  
|`Alloc`|The allocator class.|  
  
## Members  
  
|||  
|-|-|  
|Type Definition|Description|  
|[unordered_map::allocator_type](#unordered_map__allocator_type)|The type of an allocator for managing storage.|  
|[unordered_map::const_iterator](#unordered_map__const_iterator)|The type of a constant iterator for the controlled sequence.|  
|[unordered_map::const_local_iterator](#unordered_map__const_local_iterator)|The type of a constant bucket iterator for the controlled sequence.|  
|[unordered_map::const_pointer](#unordered_map__const_pointer)|The type of a constant pointer to an element.|  
|[unordered_map::const_reference](#unordered_map__const_reference)|The type of a constant reference to an element.|  
|[unordered_map::difference_type](#unordered_map__difference_type)|The type of a signed distance between two elements.|  
|[unordered_map::hasher](#unordered_map__hasher)|The type of the hash function.|  
|[unordered_map::iterator](#unordered_map__iterator)|The type of an iterator for the controlled sequence.|  
|[unordered_map::key_equal](#unordered_map__key_equal)|The type of the comparison function.|  
|[unordered_map::key_type](#unordered_map__key_type)|The type of an ordering key.|  
|[unordered_map::local_iterator](#unordered_map__local_iterator)|The type of a bucket iterator for the controlled sequence.|  
|[unordered_map::mapped_type](#unordered_map__mapped_type)|The type of a mapped value associated with each key.|  
|[unordered_map::pointer](#unordered_map__pointer)|The type of a pointer to an element.|  
|[unordered_map::reference](#unordered_map__reference)|The type of a reference to an element.|  
|[unordered_map::size_type](#unordered_map__size_type)|The type of an unsigned distance between two elements.|  
|[unordered_map::value_type](#unordered_map__value_type)|The type of an element.|  
  
|||  
|-|-|  
|Member Function|Description|  
|[unordered_map::at](#unordered_map__at)|Finds an element with the specified key.|  
|[unordered_map::begin](#unordered_map__begin)|Designates the beginning of the controlled sequence.|  
|[unordered_map::bucket](#unordered_map__bucket)|Gets the bucket number for a key value.|  
|[unordered_map::bucket_count](#unordered_map__bucket_count)|Gets the number of buckets.|  
|[unordered_map::bucket_size](#unordered_map__bucket_size)|Gets the size of a bucket.|  
|[unordered_map::cbegin](#unordered_map__cbegin)|Designates the beginning of the controlled sequence.|  
|[unordered_map::cend](#unordered_map__cend)|Designates the end of the controlled sequence.|  
|[unordered_map::clear](#unordered_map__clear)|Removes all elements.|  
|[unordered_map::count](#unordered_map__count)|Finds the number of elements matching a specified key.|  
|[unordered_map::emplace](#unordered_map__emplace)|Adds an element constructed in place.|  
|[unordered_map::emplace_hint](#unordered_map__emplace_hint)|Adds an element constructed in place, with hint.|  
|[unordered_map::empty](#unordered_map__empty)|Tests whether no elements are present.|  
|[unordered_map::end](#unordered_map__end)|Designates the end of the controlled sequence.|  
|[unordered_map::equal_range](#unordered_map__equal_range)|Finds range that matches a specified key.|  
|[unordered_map::erase](#unordered_map__erase)|Removes elements at specified positions.|  
|[unordered_map::find](#unordered_map__find)|Finds an element that matches a specified key.|  
|[unordered_map::get_allocator](#unordered_map__get_allocator)|Gets the stored allocator object.|  
|[unordered_map::hash_function](#unordered_map__hash_function)|Gets the stored hash function object.|  
|[unordered_map::insert](#unordered_map__insert)|Adds elements.|  
|[unordered_map::key_eq](#unordered_map__key_eq)|Gets the stored comparison function object.|  
|[unordered_map::load_factor](#unordered_map__load_factor)|Counts the average elements per bucket.|  
|[unordered_map::max_bucket_count](#unordered_map__max_bucket_count)|Gets the maximum number of buckets.|  
|[unordered_map::max_load_factor](#unordered_map__max_load_factor)|Gets or sets the maximum elements per bucket.|  
|[unordered_map::max_size](#unordered_map__max_size)|Gets the maximum size of the controlled sequence.|  
|[unordered_map::rehash](#unordered_map__rehash)|Rebuilds the hash table.|  
|[unordered_map::size](#unordered_map__size)|Counts the number of elements.|  
|[unordered_map::swap](#unordered_map__swap)|Swaps the contents of two containers.|  
|[unordered_map::unordered_map](#unordered_map__unordered_map)|Constructs a container object.|  
  
|||  
|-|-|  
|Operator|Description|  
|[unordered_map::operator[]](#unordered_map__operator_at)|Finds or inserts an element with the specified key.|  
|[unordered_map::operator=](#unordered_map__operator_eq)|Copies a hash table.|  
  
## Remarks  
 The object orders the sequence it controls by calling two stored objects, a comparison function object of type [unordered_map::key_equal](#unordered_map__key_equal) and a hash function object of type [unordered_map::hasher](#unordered_map__hasher). You access the first stored object by calling the member function [unordered_map::key_eq](#unordered_map__key_eq)`()`; and you access the second stored object by calling the member function [unordered_map::hash_function](#unordered_map__hash_function)`()`. Specifically, for all values `X` and `Y` of type `Key`, the call `key_eq()(X, Y)` returns true only if the two argument values have equivalent ordering; the call `hash_function()(keyval)` yields a distribution of values of type `size_t`. Unlike template class [unordered_multimap Class](../standard-library/unordered-multimap-class.md), an object of template class `unordered_map` ensures that `key_eq()(X, Y)` is always false for any two elements of the controlled sequence. (Keys are unique.)  
  
 The object also stores a maximum load factor, which specifies the maximum desired average number of elements per bucket. If inserting an element causes [unordered_map::load_factor](#unordered_map__load_factor)`()` to exceed the maximum load factor, the container increases the number of buckets and rebuilds the hash table as needed.  
  
 The actual order of elements in the controlled sequence depends on the hash function, the comparison function, the order of insertion, the maximum load factor, and the current number of buckets. You cannot in general predict the order of elements in the controlled sequence. You can always be assured, however, that any subset of elements that have equivalent ordering are adjacent in the controlled sequence.  
  
 The object allocates and frees storage for the sequence it controls through a stored allocator object of type [unordered_map::allocator_type](#unordered_map__allocator_type). Such an allocator object must have the same external interface as an object of template class `allocator`. Note that the stored allocator object is not copied when the container object is assigned.  
  
## Requirements  
 **Header:** <unordered_map>  
  
 **Namespace:** std  
  
##  <a name="unordered_map__allocator_type"></a>  unordered_map::allocator_type  
 The type of an allocator for managing storage.  
  
```  
typedef Alloc allocator_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Alloc`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_allocator_type.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__at"></a>  unordered_map::at  
 Finds an element in a unordered_map with a specified key value.  
  
```  
Ty& at(const Key& key);
const Ty& at(const Key& key) const;
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` key`|The key value to find.|  
  
### Return Value  
 A reference to the data value of the element found.  
  
### Remarks  
 If the argument key value is not found, then the function throws an object of class `out_of_range`.  
  
### Example  
  
```cpp  
// unordered_map_at.cpp  
// compile with: /EHsc  
#include <unordered_map>  
#include <iostream>  
  
typedef std::unordered_map<char, int> Mymap;   
typedef std::unordered_map<char, int> Mymap;
int main()
{
    Mymap c1;

    c1.insert(Mymap::value_type('a', 1));
    c1.insert(Mymap::value_type('b', 2));
    c1.insert(Mymap::value_type('c', 3));

    // find and show elements  
    std::cout << "c1.at('a') == " << c1.at('a') << std::endl;
    std::cout << "c1.at('b') == " << c1.at('b') << std::endl;
    std::cout << "c1.at('c') == " << c1.at('c') << std::endl;

    return (0);
}  
```  
  
##  <a name="unordered_map__begin"></a>  unordered_map::begin  
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
// std_tr1__unordered_map__unordered_map_begin.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
#typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__bucket"></a>  unordered_map::bucket  
 Gets the bucket number for a key value.  
  
```  
size_type bucket(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 The key value to map.  
  
### Remarks  
 The member function returns the bucket number currently corresponding to the key value `keyval`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_bucket.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__bucket_count"></a>  unordered_map::bucket_count  
 Gets the number of buckets.  
  
```  
size_type bucket_count() const;
```  
  
### Remarks  
 The member function returns the current number of buckets.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_bucket_count.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
[c, 3][b, 2][a, 1]
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
  
##  <a name="unordered_map__bucket_size"></a>  unordered_map::bucket_size  
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
// std_tr1__unordered_map__unordered_map_bucket_size.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__cbegin"></a>  unordered_map::cbegin  
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
  
##  <a name="unordered_map__cend"></a>  unordered_map::cend  
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
  
##  <a name="unordered_map__clear"></a>  unordered_map::clear  
 Removes all elements.  
  
```  
void clear();
```  
  
### Remarks  
 The member function calls [unordered_map::erase](#unordered_map__erase)`(` [unordered_map::begin](#unordered_map__begin)`(),` [unordered_map::end](#unordered_map__end)`())`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_clear.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__const_iterator"></a>  unordered_map::const_iterator  
 The type of a constant iterator for the controlled sequence.  
  
```  
typedef T1 const_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant forward iterator for the controlled sequence. It is described here as a synonym for the implementation-defined type `T1`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_const_iterator.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__const_local_iterator"></a>  unordered_map::const_local_iterator  
 The type of a constant bucket iterator for the controlled sequence.  
  
```  
typedef T5 const_local_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant forward iterator for a bucket. It is described here as a synonym for the implementation-defined type `T5`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_const_local_iterator.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   

typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__const_pointer"></a>  unordered_map::const_pointer  
 The type of a constant pointer to an element.  
  
```  
typedef Alloc::const_pointer const_pointer;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant pointer to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_const_pointer.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   

typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__const_reference"></a>  unordered_map::const_reference  
 The type of a constant reference to an element.  
  
```  
typedef Alloc::const_reference const_reference;  
```  
  
### Remarks  
 The type describes an object that can serve as a constant reference to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_const_reference.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__count"></a>  unordered_map::count  
 Finds the number of elements matching a specified key.  
  
```  
size_type count(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 Key value to search for.  
  
### Remarks  
 The member function returns the number of elements in the range delimited by [unordered_map::equal_range](#unordered_map__equal_range)`(keyval)`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_count.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__difference_type"></a>  unordered_map::difference_type  
 The type of a signed distance between two elements.  
  
```  
typedef T3 difference_type;  
```  
  
### Remarks  
 The signed integer type describes an object that can represent the difference between the addresses of any two elements in the controlled sequence. It is described here as a synonym for the implementation-defined type `T3`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_difference_type.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__emplace"></a>  unordered_map::emplace  
 Inserts an element constructed in place (no copy or move operations are performed) into an unordered_map.  
  
```  
template <class... Args>  
pair<iterator, bool>  emplace( Args&&... args);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`args`|The arguments forwarded to construct an element to be inserted into the unordered_map unless it already contains an element whose value is equivalently ordered.|  
  
### Return Value  
 A `pair` whose `bool` component returns true if an insertion was made and false if the `unordered_map` already contained an element whose key had an equivalent value in the ordering, and whose iterator component returns the address where a new element was inserted or where the element was already located.  
  
 To access the iterator component of a pair `pr` returned by this member function, use `pr.first`, and to dereference it, use `*(pr.first)`. To access the `bool` component of a pair `pr` returned by this member function, use `pr.second`.  
  
### Remarks  
 No iterators or references are invalidated by this function.  
  
 During the insertion, if an exception is thrown but does not occur in the container's hash function, the container is not modified. If the exception is thrown in the hash function, the result is undefined.  
  
 For a code example, see [map::emplace](../standard-library/map-class.md#map__emplace).  
  
##  <a name="unordered_map__emplace_hint"></a>  unordered_map::emplace_hint  
 Inserts an element constructed in place (no copy or move operations are performed), with a placement hint.  
  
```  
template <class... Args>  
iterator emplace_hint(const_iterator where, Args&&... args);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`args`|The arguments forwarded to construct an element to be inserted into the unordered_map unless the unordered_map already contains that element or, more generally, unless it already contains an element whose key is equivalently ordered.|  
|`where`|A hint regarding the place to start searching for the correct point of insertion.|  
  
### Return Value  
 An iterator to the newly inserted element.  
  
 If the insertion failed because the element already exists, returns an iterator to the existing element.  
  
### Remarks  
 No references are invalidated by this function.  
  
 During the insertion, if an exception is thrown but does not occur in the container's hash function, the container is not modified. If the exception is thrown in the hash function, the result is undefined.  
  
 The [value_type](../standard-library/map-class.md#map__value_type) of an element is a pair, so that the value of an element will be an ordered pair with the first component equal to the key value and the second component equal to the data value of the element.  
  
 For a code example, see [map::emplace_hint](../standard-library/map-class.md#map__emplace_hint).  
  
##  <a name="unordered_map__empty"></a>  unordered_map::empty  
 Tests whether no elements are present.  
  
```  
bool empty() const;
```  
  
### Remarks  
 The member function returns true for an empty controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_empty.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__end"></a>  unordered_map::end  
 Designates the end of the controlled sequence.  
  
```  
iterator end();
const_iterator end() const; 
local_iterator end(size_type nbucket);
const_local_iterator end(size_type nbucket) const;
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`nbucket`|The bucket number.|  
  
### Remarks  
 The first two member functions return a forward iterator that points just beyond the end of the sequence. The last two member functions return a forward iterator that points just beyond the end of bucket `nbucket`.  
  
##  <a name="unordered_map__equal_range"></a>  unordered_map::equal_range  
 Finds range that matches a specified key.  
  
```  
std::pair<iterator, iterator>  equal_range(const Key& keyval);
std::pair<const_iterator, const_iterator>  equal_range(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 Key value to search for.  
  
### Remarks  
 The member function returns a pair of iterators `X` such that `[X.first, X.second)` delimits just those elements of the controlled sequence that have equivalent ordering with `keyval`. If no such elements exist, both iterators are `end()`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_equal_range.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__erase"></a>  unordered_map::erase  
 Removes an element or a range of elements in a unordered_map from specified positions or removes elements that match a specified key.  
  
```  
iterator erase(const_iterator Where);
iterator erase(const_iterator First, const_iterator Last);
size_type erase(const key_type& Key);
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
 For the first two member functions, a bidirectional iterator that designates the first element remaining beyond any elements removed, or an element that is the end of the map if no such element exists.  
  
 For the third member function, returns the number of elements that have been removed from the unordered_map.  
  
### Remarks  
 For a code example, see [map::erase](../standard-library/map-class.md#map__erase).  
  
##  <a name="unordered_map__find"></a>  unordered_map::find  
 Finds an element that matches a specified key.  
  
```  
const_iterator find(const Key& keyval) const;
```  
  
### Parameters  
 `keyval`  
 Key value to search for.  
  
### Remarks  
 The member function returns [unordered_map::equal_range](#unordered_map__equal_range)`(keyval).first`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_find.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__get_allocator"></a>  unordered_map::get_allocator  
 Gets the stored allocator object.  
  
```  
Alloc get_allocator() const;
```  
  
### Remarks  
 The member function returns the stored allocator object.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_get_allocator.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__hash_function"></a>  unordered_map::hash_function  
 Gets the stored hash function object.  
  
```  
Hash hash_function() const;
```  
  
### Remarks  
 The member function returns the stored hash function object.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_hash_function.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__hasher"></a>  unordered_map::hasher  
 The type of the hash function.  
  
```  
typedef Hash hasher;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Hash`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_hasher.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
##  <a name="unordered_map__insert"></a>  unordered_map::insert  
 Inserts an element or a range of elements into an unordered_map.  
  
```  
// (1) single element  
pair<iterator, bool> insert(    const value_type& Val);

 
// (2) single element, perfect forwarded  
template <class ValTy>  
pair<iterator, bool>  
insert(    ValTy&& Val);

 
// (3) single element with hint  
iterator insert(    const_iterator Where,  
    const value_type& Val);

 
// (4) single element, perfect forwarded, with hint  
template <class ValTy>  
iterator insert(    const_iterator Where,  
    ValTy&& Val);

 
// (5) range   
template <class InputIterator>   
void insert(InputIterator First,  
    InputIterator Last);

 
// (6) initializer list  
void insert(initializer_list<value_type>  
IList);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Val`|The value of an element to be inserted into the unordered_map unless it already contains an element whose key is equivalently ordered.|  
|`Where`|The place to start searching for the correct point of insertion.|  
|`ValTy`|Template parameter that specifies the argument type that the unordered_map can use to construct an element of [value_type](../standard-library/map-class.md#map__value_type), and perfect-forwards `Val` as an argument.|  
|`First`|The position of the first element to be copied.|  
|`Last`|The position just beyond the last element to be copied.|  
|`InputIterator`|Template function argument that meets the requirements of an [input iterator](../standard-library/input-iterator-tag-struct.md) that points to elements of a type that can be used to construct [value_type](../standard-library/map-class.md#map__value_type) objects.|  
|`IList`|The [initializer_list](../standard-library/initializer-list.md) from which to copy the elements.|  
  
### Return Value  
 The single-element member functions, (1) and (2), return a [pair](../standard-library/pair-structure.md) whose `bool` component is true if an insertion was made, and false if the unordered_map already contained an element whose key had an equivalent value in the ordering. The iterator component of the return-value pair points to the newly inserted element if the `bool` component is true, or to the existing element if the `bool` component is false.  
  
 The single-element-with-hint member functions, (3) and (4), return an iterator that points to the position where the new element was inserted into the unordered_map or, if an element with an equivalent key already exists, to the existing element.  
  
### Remarks  
 No iterators, pointers, or references are invalidated by this function.  
  
 During the insertion of just one element, if an exception is thrown but does not occur in the container's hash function, the container's state is not modified. If the exception is thrown in the hash function, the result is undefined. During the insertion of multiple elements, if an exception is thrown, the container is left in an unspecified but valid state.  
  
 To access the iterator component of a `pair``pr` that's returned by the single-element member functions, use `pr.first`; to dereference the iterator within the returned pair, use `*pr.first`, giving you an element. To access the `bool` component, use `pr.second`. For an example, see the sample code later in this article.  
  
 The [value_type](../standard-library/map-class.md#map__value_type) of a container is a typedef that belongs to the container, and for map, `map<K, V>::value_type` is `pair<const K, V>`. The value of an element is an ordered pair in which the first component is equal to the key value and the second component is equal to the data value of the element.  
  
 The range member function (5) inserts the sequence of element values into an unordered_map that corresponds to each element addressed by an iterator in the range `[First, Last)`; therefore, `Last` does not get inserted. The container member function `end()` refers to the position just after the last element in the container—for example, the statement `m.insert(v.begin(), v.end());` attempts to insert all elements of `v` into `m`. Only elements that have unique values in the range are inserted; duplicates are ignored. To observe which elements are rejected, use the single-element versions of `insert`.  
  
 The initializer list member function (6) uses an [initializer_list](../standard-library/initializer-list.md) to copy elements into the unordered_map.  
  
 For insertion of an element constructed in place—that is, no copy or move operations are performed—see [unordered_map::emplace](#unordered_map__emplace) and [unordered_map::emplace_hint](#unordered_map__emplace_hint).  
  
 For a code example, see [map::insert](../standard-library/map-class.md#map__insert).  
  
##  <a name="unordered_map__iterator"></a>  unordered_map::iterator  
 The type of an iterator for the controlled sequence.  
  
```  
typedef T0 iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a forward iterator for the controlled sequence. It is described here as a synonym for the implementation-defined type `T0`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_iterator.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__key_eq"></a>  unordered_map::key_eq  
 Gets the stored comparison function object.  
  
```  
Pred key_eq() const;
```  
  
### Remarks  
 The member function returns the stored comparison function object.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_key_eq.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__key_equal"></a>  unordered_map::key_equal  
 The type of the comparison function.  
  
```  
typedef Pred key_equal;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Pred`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_key_equal.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__key_type"></a>  unordered_map::key_type  
 The type of an ordering key.  
  
```  
typedef Key key_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Key`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_key_type.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__load_factor"></a>  unordered_map::load_factor  
 Counts the average elements per bucket.  
  
```  
float load_factor() const;
```  
  
### Remarks  
 The member function returns `(float)`[unordered_map::size](#unordered_map__size)`() / (float)`[unordered_map::bucket_count](#unordered_map__bucket_count)`()`, the average number of elements per bucket.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_load_factor.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__local_iterator"></a>  unordered_map::local_iterator  
 The type of a bucket iterator.  
  
```  
typedef T4 local_iterator;  
```  
  
### Remarks  
 The type describes an object that can serve as a forward iterator for a bucket. It is described here as a synonym for the implementation-defined type `T4`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_local_iterator.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__mapped_type"></a>  unordered_map::mapped_type  
 The type of a mapped value associated with each key.  
  
```  
typedef Ty mapped_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Ty`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_mapped_type.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__max_bucket_count"></a>  unordered_map::max_bucket_count  
 Gets the maximum number of buckets.  
  
```  
size_type max_bucket_count() const;
```  
  
### Remarks  
 The member function returns the maximum number of buckets currently permitted.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_max_bucket_count.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__max_load_factor"></a>  unordered_map::max_load_factor  
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
// std_tr1__unordered_map__unordered_map_max_load_factor.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__max_size"></a>  unordered_map::max_size  
 Gets the maximum size of the controlled sequence.  
  
```  
size_type max_size() const;
```  
  
### Remarks  
 The member function returns the length of the longest sequence that the object can control.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_max_size.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__operator_at"></a>  unordered_map::operator[]  
 Finds or inserts an element with the specified key.  
  
```  
Ty& operator[](const Key& keyval);

Ty& operator[](Key&& keyval);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|`Keyval`|The key value to find or insert.|  
  
### Return Value  
 A reference to the data value of the inserted element.  
  
### Remarks  
 If the argument key value is not found, then it is inserted along with the default value of the data type.  
  
 `operator[]` may be used to insert elements into a map *m* using *m*[_ *Key*] = `DataValue`; where `DataValue` is the value of the `mapped_type` of the element with a key value of \_ *Key*.  
  
 When using `operator[]` to insert elements, the returned reference does not indicate whether an insertion is changing a pre-existing element or creating a new one. The member functions [find](../standard-library/map-class.md#map__find) and [insert](../standard-library/map-class.md#map__insert) can be used to determine whether an element with a specified key is already present before an insertion.  
  
### Example  
  
```cpp  
// std__unordered_map__unordered_map_operator_sub.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
#include <string>  
  
typedef std::unordered_map<char, int> Mymap;   
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
    std::cout << "c1['A'] == " << c1['A'] << std::endl;   
  
// try to find and succeed   
    std::cout << "c1['a'] == " << c1['a'] << std::endl;   
  
// redisplay contents   
    for (Mymap::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " [" << it->first << ", " << it->second << "]";   
    std::cout << std::endl;   
  
// insert by moving key  
    std::tr1::unordered_map<string, int> c2;  
    std::string str("abc");  
    std::cout << "c2[std::move(str)] == " << c2[std::move(str)] << std::endl;  
    std::cout << "c2["abc"] == " << c2["abc"] << std::endl;  
  
    return (0);   
    }  
  
```  
  
```Output  
 [c, 3] [b, 2] [a, 1]  
c1['A'] == 0  
c1['a'] == 1  
 [c, 3] [b, 2] [A, 0] [a, 1]  
c2[move(str)] == 0  
c2["abc"] == 1  
```  
  
### Remarks  
 The member function determines the iterator `where` as the return value of [unordered_map::insert](#unordered_map__insert)`(` [unordered_map::value_type](#unordered_map__value_type)`(keyval, Ty())`. (It inserts an element with the specified key if no such element exists.) It then returns a reference to `(*where).second`.  
  
##  <a name="unordered_map__operator_eq"></a>  unordered_map::operator=  
 Replaces the elements of this unordered_map using the elements from another unordered_map.  
  
```  
unordered_map& operator=(const unordered_map& right);

unordered_map& operator=(unordered_map&& right);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|` right`|The unordered_map that the operator function assigns content from.|  
  
### Remarks  
 The first version copies all of the elements from ` right` to this unordered_map.  
  
 The second version moves all of the elements from ` right` to this unordered_map.  
  
 Any elements that are in this unordered_map before `operator`= executes are discarded.  
  
### Example  
  
```cpp  
// unordered_map_operator_as.cpp  
// compile with: /EHsc  
#include <unordered_map>  
#include <iostream>  
  
int main( )  
   {  
   using namespace std;  
   unordered_map<int, int> v1, v2, v3;  
   unordered_map<int, int>::iterator iter;  
  
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
  
##  <a name="unordered_map__pointer"></a>  unordered_map::pointer  
 The type of a pointer to an element.  
  
```  
typedef Alloc::pointer pointer;  
```  
  
### Remarks  
 The type describes an object that can serve as a pointer to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_pointer.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__reference"></a>  unordered_map::reference  
 The type of a reference to an element.  
  
```  
typedef Alloc::reference reference;  
```  
  
### Remarks  
 The type describes an object that can serve as a reference to an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_reference.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__rehash"></a>  unordered_map::rehash  
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
// std_tr1__unordered_map__unordered_map_rehash.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__size"></a>  unordered_map::size  
 Counts the number of elements.  
  
```  
size_type size() const;
```  
  
### Remarks  
 The member function returns the length of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_size.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__size_type"></a>  unordered_map::size_type  
 The type of an unsigned distance between two elements.  
  
```  
typedef T2 size_type;  
```  
  
### Remarks  
 The unsigned integer type describes an object that can represent the length of any controlled sequence. It is described here as a synonym for the implementation-defined type `T2`.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_size_type.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__swap"></a>  unordered_map::swap  
 Swaps the contents of two containers.  
  
```  
void swap(unordered_map& right);
```  
  
### Parameters  
 `right`  
 The container to swap with.  
  
### Remarks  
 The member function swaps the controlled sequences between `*this` and `right`. If [unordered_map::get_allocator](#unordered_map__get_allocator)`() == right.get_allocator()`, it does so in constant time, it throws an exception only as a result of copying the stored traits object of type `Tr`, and it invalidates no references, pointers, or iterators that designate elements in the two controlled sequences. Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_swap.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;   
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
  
##  <a name="unordered_map__unordered_map"></a>  unordered_map::unordered_map  
 Constructs a container object.  
  
```  
unordered_map(const unordered_map& Right);

explicit unordered_map(
    size_type Bucket_count = N0,  
    const Hash& Hash = Hash(),  
    const Comp& Comp = Comp(),  
    const Allocator& Al = Allocator());

unordered_map(unordered_map&& Right);
unordered_map(initializer_list<Type> IList);
unordered_map(initializer_list<Type> IList, size_type Bucket_count);

unordered_map(
    initializer_list<Type> IList,   
    size_type Bucket_count,   
    const Hash& Hash);

unordered_map(
    initializer_list<Type> IList,   
    size_type Bucket_count,   
    const Hash& Hash,  
    KeyEqual& equal);

unordered_map(
    initializer_list<Type> IList,   
    size_type Bucket_count,  
    const Hash& Hash,  
    KeyEqual& Equal  
    const Allocator& Al);

template <class InIt>  
unordered_map(
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
|`Al`|The allocator object to store.|  
|`Comp`|The comparison function object to store.|  
|`Hash`|The hash function object to store.|  
|`Bucket_count`|The minimum number of buckets.|  
|`Right`|The container to copy.|  
|`First`||  
|`Last`||  
|`IList`|The initializer_list that contains the elements to be copied.|  
  
### Remarks  
 The first constructor specifies a copy of the sequence controlled by `right`. The second constructor specifies an empty controlled sequence. The third constructor inserts the sequence of element values `[first, last)`. The fourth constructor specifies a copy of the sequence by moving `right`.  
  
 All constructors also initialize several stored values. For the copy constructor, the values are obtained from `Right`. Otherwise:  
  
 the minimum number of buckets is the argument `Bucket_count`, if present; otherwise it is a default value described here as the implementation-defined value `N0`.  
  
 the hash function object is the argument `Hash`, if present; otherwise it is `Hash()`.  
  
 The comparison function object is the argument `Comp`, if present; otherwise it is `Pred()`.  
  
 The allocator object is the argument `Al`, if present; otherwise, it is `Alloc()`.  
  
### Example  
  
```cpp  
// std__unordered_map__unordered_map_construct.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
#include <initializer_list>  
  
using namespace std;  
  
using Mymap = unordered_map<char, int>;  
  
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
        tr1::hash<char>(),  
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
        tr1::hash<char>(),  
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
    cout << endl;  
  
    // Construct with an initializer_list  
    unordered_map<int, char> c5({ { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } });  
    for (const auto& c : c5) {  
        cout << " [" << c.first << ", " << c.second << "]";  
    }  
    cout << endl;  
  
    // Initializer_list plus size  
    unordered_map<int, char> c6({ { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } }, 4);  
    for (const auto& c : c1) {  
        cout << " [" << c.first << ", " << c.second << "]";  
    }  
    cout << endl;  
    cout << endl;  
  
    // Initializer_list plus size and hash  
    unordered_map<int, char, tr1::hash<char>> c7(  
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },   
        4,   
        tr1::hash<char>()  
    );  
  
    for (const auto& c : c1) {  
        cout << " [" << c.first << ", " << c.second << "]";  
    }  
    cout << endl;  
  
    // Initializer_list plus size, hash, and key_equal  
    unordered_map<int, char, tr1::hash<char>, equal_to<char>> c8(  
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },   
        4,   
        tr1::hash<char>(),   
        equal_to<char>()  
    );  
  
    for (const auto& c : c1) {  
        cout << " [" << c.first << ", " << c.second << "]";  
    }  
    cout << endl;  
  
    // Initializer_list plus size, hash, key_equal, and allocator  
    unordered_map<int, char, tr1::hash<char>, equal_to<char>> c9(  
        { { 5, 'g' }, { 6, 'h' }, { 7, 'i' }, { 8, 'j' } },  
        4,  
        tr1::hash<char>(),  
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
[a, 1] [b, 2] [c, 3] [d, 4] [e, 5] [f, 6] [a, 1] [b, 2] [c, 3] [a, 1] [b, 2] [c, 3] [5, g] [6, h] [7, i] [8, j] [5, g] [6, h] [7, i] [8, j] [5, g] [6, h] [7, i] [8, j] [5, g] [6, h] [7, i] [8, j] [5, g] [6, h] [7, i] [8, j]  
```  
  
##  <a name="unordered_map__value_type"></a>  unordered_map::value_type  
 The type of an element.  
  
```  
typedef std::pair<const Key, Ty> value_type;  
```  
  
### Remarks  
 The type describes an element of the controlled sequence.  
  
### Example  
  
```cpp  
// std_tr1__unordered_map__unordered_map_value_type.cpp   
// compile with: /EHsc   
#include <unordered_map>   
#include <iostream>   
  
typedef std::unordered_map<char, int> Mymap;
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
  
## See Also  
 [<unordered_map>](../standard-library/unordered-map.md)   
 [Containers](../cpp/containers-modern-cpp.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)

