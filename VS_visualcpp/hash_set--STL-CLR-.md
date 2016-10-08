---
title: "hash_set (STL-CLR)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: hash_set (STL/CLR)
ms.assetid: d110e356-ba3e-4e52-9e2d-d997bf975c96
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# hash_set (STL-CLR)
The template class describes an object that controls a varying-length sequence of elements that has bidirectional access. You use the container `hash_set` to manage a sequence of elements as a hash table, each table entry storing a bidirectional linked list of nodes, and each node storing one element. The value of each element is used as a key, for ordering the sequence.  
  
 In the description below, `GValue` is the same as `GKey`, which in turn is the same as `Key` unless the latter is a ref type, in which case it is `Key^`.  
  
## Syntax  
  
```  
template<typename Key>  
    ref class hash_set  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IHash<Gkey, GValue>  
    { ..... };  
```  
  
#### Parameters  
 Key  
 The type of the key component of an element in the controlled sequence.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[hash_set::const_iterator (STL/CLR)](../VS_visualcpp/hash_set--const_iterator--STL-CLR-.md)|The type of a constant iterator for the controlled sequence.|  
|[hash_set::const_reference (STL/CLR)](../VS_visualcpp/hash_set--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[hash_set::const_reverse_iterator (STL/CLR)](../VS_visualcpp/hash_set--const_reverse_iterator--STL-CLR-.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[hash_set::difference_type (STL/CLR)](../VS_visualcpp/hash_set--difference_type--STL-CLR-.md)|The type of a (possibly signed) distance between two elements.|  
|[hash_set::generic_container (STL/CLR)](../VS_visualcpp/hash_set--generic_container--STL-CLR-.md)|The type of the generic interface for the container.|  
|[hash_set::generic_iterator (STL/CLR)](../VS_visualcpp/hash_set--generic_iterator--STL-CLR-.md)|The type of an iterator for the generic interface for the container.|  
|[hash_set::generic_reverse_iterator (STL/CLR)](../VS_visualcpp/hash_set--generic_reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the generic interface for the container.|  
|[hash_set::generic_value (STL/CLR)](../VS_visualcpp/hash_set--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container.|  
|[hash_set::hasher (STL/CLR)](../VS_visualcpp/hash_set--hasher--STL-CLR-.md)|The hashing delegate for a key.|  
|[hash_set::iterator (STL/CLR)](../VS_visualcpp/hash_set--iterator--STL-CLR-.md)|The type of an iterator for the controlled sequence.|  
|[hash_set::key_compare (STL/CLR)](../VS_visualcpp/hash_set--key_compare--STL-CLR-.md)|The ordering delegate for two keys.|  
|[hash_set::key_type (STL/CLR)](../VS_visualcpp/hash_set--key_type--STL-CLR-.md)|The type of an ordering key.|  
|[hash_set::reference (STL/CLR)](../VS_visualcpp/hash_set--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[hash_set::reverse_iterator (STL/CLR)](../VS_visualcpp/hash_set--reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the controlled sequence.|  
|[hash_set::size_type (STL/CLR)](../VS_visualcpp/hash_set--size_type--STL-CLR-.md)|The type of a (non-negative) distance between two elements.|  
|[hash_set::value_compare (STL/CLR)](../VS_visualcpp/hash_set--value_compare--STL-CLR-.md)|The ordering delegate for two element values.|  
|[hash_set::value_type (STL/CLR)](../VS_visualcpp/hash_set--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[hash_set::begin (STL/CLR)](../VS_visualcpp/hash_set--begin--STL-CLR-.md)|Designates the beginning of the controlled sequence.|  
|[hash_set::bucket_count (STL/CLR)](../VS_visualcpp/hash_set--bucket_count--STL-CLR-.md)|Counts the number of buckets.|  
|[hash_set::clear (STL/CLR)](../VS_visualcpp/hash_set--clear--STL-CLR-.md)|Removes all elements.|  
|[hash_set::count (STL/CLR)](../VS_visualcpp/hash_set--count--STL-CLR-.md)|Counts elements matching a specified key.|  
|[hash_set::empty (STL/CLR)](../VS_visualcpp/hash_set--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[hash_set::end (STL/CLR)](../VS_visualcpp/hash_set--end--STL-CLR-.md)|Designates the end of the controlled sequence.|  
|[hash_set::equal_range (STL/CLR)](../VS_visualcpp/hash_set--equal_range--STL-CLR-.md)|Finds range that matches a specified key.|  
|[hash_set::erase (STL/CLR)](../VS_visualcpp/hash_set--erase--STL-CLR-.md)|Removes elements at specified positions.|  
|[hash_set::find (STL/CLR)](../VS_visualcpp/hash_set--find--STL-CLR-.md)|Finds an element that matches a specified key.|  
|[hash_set::hash_delegate (STL/CLR)](../VS_visualcpp/hash_set--hash_delegate--STL-CLR-.md)|Copies the hashing delegate for a key.|  
|[hash_set::hash_set (STL/CLR)](../VS_visualcpp/hash_set--hash_set--STL-CLR-.md)|Constructs a container object.|  
|[hash_set::insert (STL/CLR)](../VS_visualcpp/hash_set--insert--STL-CLR-.md)|Adds elements.|  
|[hash_set::key_comp (STL/CLR)](../VS_visualcpp/hash_set--key_comp--STL-CLR-.md)|Copies the ordering delegate for two keys.|  
|[hash_set::load_factor (STL/CLR)](../VS_visualcpp/hash_set--load_factor--STL-CLR-.md)|Counts the average elements per bucket.|  
|[hash_set::lower_bound (STL/CLR)](../VS_visualcpp/hash_set--lower_bound--STL-CLR-.md)|Finds beginning of range that matches a specified key.|  
|[hash_set::make_value (STL/CLR)](../VS_visualcpp/hash_set--make_value--STL-CLR-.md)|Constructs a value object.|  
|[hash_set::max_load_factor (STL/CLR)](../VS_visualcpp/hash_set--max_load_factor--STL-CLR-.md)|Gets or sets the maximum elements per bucket.|  
|[hash_set::rbegin (STL/CLR)](../VS_visualcpp/hash_set--rbegin--STL-CLR-.md)|Designates the beginning of the reversed controlled sequence.|  
|[hash_set::rehash (STL/CLR)](../VS_visualcpp/hash_set--rehash--STL-CLR-.md)|Rebuilds the hash table.|  
|[hash_set::rend (STL/CLR)](../VS_visualcpp/hash_set--rend--STL-CLR-.md)|Designates the end of the reversed controlled sequence.|  
|[hash_set::size (STL/CLR)](../VS_visualcpp/hash_set--size--STL-CLR-.md)|Counts the number of elements.|  
|[hash_set::swap (STL/CLR)](../VS_visualcpp/hash_set--swap--STL-CLR-.md)|Swaps the contents of two containers.|  
|[hash_set::to_array (STL/CLR)](../VS_visualcpp/hash_set--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
|[hash_set::upper_bound (STL/CLR)](../VS_visualcpp/hash_set--upper_bound--STL-CLR-.md)|Finds end of range that matches a specified key.|  
|[hash_set::value_comp (STL/CLR)](../VS_visualcpp/hash_set--value_comp--STL-CLR-.md)|Copies the ordering delegate for two element values.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[hash_set::operator= (STL/CLR)](../VS_visualcpp/hash_set--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable?qualifyHint=False>|Sequence through elements.|  
|<xref:System.Collections.ICollection?qualifyHint=False>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable`1?qualifyHint=False>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection`1?qualifyHint=False>|Maintain group of typed elements.|  
|IHash<Key, Value>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls as individual nodes in a bidirectional linked list. To speed access, the object also maintains a varying-length array of pointers into the list (the hash table), effectively managing the whole list as a sequence of sublists, or buckets. It inserts elements into a bucket that it keeps ordered by altering the links between nodes, never by copying the contents of one node to another. That means you can insert and remove elements freely without disturbing remaining elements.  
  
 The object orders each bucket it controls by calling a stored delegate object of type [hash_set::key_compare (STL/CLR)](../VS_visualcpp/hash_set--key_compare--STL-CLR-.md). You can specify the stored delegate object when you construct the hash_set; if you specify no delegate object, the default is the comparison `operator<=(key_type, key_type)`.  
  
 You access the stored delegate object by calling the member function [hash_set::key_comp (STL/CLR)](../VS_visualcpp/hash_set--key_comp--STL-CLR-.md)`()`. Such a delegate object must define equivalent ordering between keys of type [hash_set::key_type (STL/CLR)](../VS_visualcpp/hash_set--key_type--STL-CLR-.md). That means, for any two keys `X` and `Y`:  
  
 `key_comp()(X, Y)` returns the same Boolean result on every call.  
  
 If `key_comp()(X, Y) && key_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.  
  
 Any ordering rule that behaves like `operator<=(key_type, key_type)`, `operator>=(key_type, key_type)` or `operator==(key_type, key_type)` defines eqivalent ordering.  
  
 Note that the container ensures only that elements whose keys have equivalent ordering (and which hash to the same integer value) are adjacent within a bucket. Unlike template class [hash_multiset (STL/CLR)](../VS_visualcpp/hash_multiset--STL-CLR-.md), an object of template class `hash_set` ensures that keys for all elements are unique. (No two keys have equivalent ordering.)  
  
 The object determines which bucket should contain a given ordering key by calling a stored delegate object of type [hash_set::hasher (STL/CLR)](../VS_visualcpp/hash_set--hasher--STL-CLR-.md). You access this stored object by calling the member function [hash_set::hash_delegate (STL/CLR)](../VS_visualcpp/hash_set--hash_delegate--STL-CLR-.md)`()` to obtain an integer value that depends on the key value. You can specify the stored delegate object when you construct the hash_set; if you specify no delegate object, the default is the function `System::Object::hash_value(key_type)`. That means, for any keys `X` and `Y`:  
  
 `hash_delegate()(X)` returns the same integer result on every call.  
  
 If `X` and `Y` have equivalent ordering, then `hash_delegate()(X)` should return the same integer result as `hash_delegate()(Y)`.  
  
 Each element serves as both a key and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations that is independent of the number of elements in the sequence (constant time) -- at least in the best of cases. Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.  
  
 If hashed values are not uniformly distributed, however, a hash table can degenerate. In the extreme -- for a hash function that always returns the same value -- lookup, insertion, and removal are proportional to the number of elements in the sequence (linear time). The container endeavors to choose a reasonable hash function, mean bucket size, and hash-table size (total number of buckets), but you can override any or all of these choices. See, for example, the functions [hash_set::max_load_factor (STL/CLR)](../VS_visualcpp/hash_set--max_load_factor--STL-CLR-.md) and [hash_set::rehash (STL/CLR)](../VS_visualcpp/hash_set--rehash--STL-CLR-.md).  
  
 A hash_set supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [hash_set::end (STL/CLR)](../VS_visualcpp/hash_set--end--STL-CLR-.md)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a hash_set iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.  
  
 Note that you cannot refer to a hash_set element directly given its numerical position -- that requires a random-access iterator.  
  
 A hash_set iterator stores a handle to its associated hash_set node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A hash_set iterator remains valid so long as its associated hash_set node is associated with some hash_set. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** <cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../VS_visualcpp/hash_map--STL-CLR-.md)   
 [hash_set](../VS_visualcpp/hash_set--STL-CLR-.md)   
 [hash_set](../VS_visualcpp/hash_set--STL-CLR-.md)   
 [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)   
 [set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)   
 [set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)   
 [set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)