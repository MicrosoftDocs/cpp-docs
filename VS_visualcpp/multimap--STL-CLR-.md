---
title: "multimap (STL-CLR)"
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
H1: multimap (STL/CLR)
ms.assetid: 3dfe329d-a078-462a-b050-7999ce6110ad
caps.latest.revision: 17
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
# multimap (STL-CLR)
The template class describes an object that controls a varying-length sequence of elements that has bidirectional access. You use the container `multimap` to manage a sequence of elements as a (nearly) balanced ordered tree of nodes, each storing one element. An element consists of a key, for ordering the sequence, and a mapped value, which goes along for the ride.  
  
 In the description below, `GValue` is the same as:  
  
 `Microsoft::VisualC::StlClr::GenericPair<GKey, GMapped>`  
  
 where:  
  
 `GKey` is the same as `Key` unless the latter is a ref type, in which case it is `Key^`  
  
 `GMapped` is the same as `Mapped` unless the latter is a ref type, in which case it is `Mapped^`  
  
## Syntax  
  
```  
template<typename Key,  
    typename Mapped>  
    ref class multimap  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::ITree<Gkey, GValue>  
    { ..... };  
```  
  
#### Parameters  
 Key  
 The type of the key component of an element in the controlled sequence.  
  
 Mapped  
 The type of the additional component of an element in the controlled sequence.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[multimap::const_iterator (STL/CLR)](../VS_visualcpp/multimap--const_iterator--STL-CLR-.md)|The type of a constant iterator for the controlled sequence.|  
|[multimap::const_reference (STL/CLR)](../VS_visualcpp/multimap--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[multimap::const_reverse_iterator (STL/CLR)](../VS_visualcpp/multimap--const_reverse_iterator--STL-CLR-.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[multimap::difference_type (STL/CLR)](../VS_visualcpp/multimap--difference_type--STL-CLR-.md)|The type of a (possibly signed) distance between two elements.|  
|[multimap::generic_container (STL/CLR)](../VS_visualcpp/multimap--generic_container--STL-CLR-.md)|The type of the generic interface for the container.|  
|[multimap::generic_iterator (STL/CLR)](../VS_visualcpp/multimap--generic_iterator--STL-CLR-.md)|The type of an iterator for the generic interface for the container.|  
|[multimap::generic_reverse_iterator (STL/CLR)](../VS_visualcpp/multimap--generic_reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the generic interface for the container.|  
|[multimap::generic_value (STL/CLR)](../VS_visualcpp/multimap--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container.|  
|[multimap::iterator (STL/CLR)](../VS_visualcpp/multimap--iterator--STL-CLR-.md)|The type of an iterator for the controlled sequence.|  
|[multimap::key_compare (STL/CLR)](../VS_visualcpp/multimap--key_compare--STL-CLR-.md)|The ordering delegate for two keys.|  
|[multimap::key_type (STL/CLR)](../VS_visualcpp/multimap--key_type--STL-CLR-.md)|The type of an ordering key.|  
|[multimap::mapped_type (STL/CLR)](../VS_visualcpp/multimap--mapped_type--STL-CLR-.md)|The type of the mapped value associated with each key.|  
|[multimap::reference (STL/CLR)](../VS_visualcpp/multimap--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[multimap::reverse_iterator (STL/CLR)](../VS_visualcpp/multimap--reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the controlled sequence.|  
|[multimap::size_type (STL/CLR)](../VS_visualcpp/multimap--size_type--STL-CLR-.md)|The type of a (non-negative) distance between two elements.|  
|[multimap::value_compare (STL/CLR)](../VS_visualcpp/multimap--value_compare--STL-CLR-.md)|The ordering delegate for two element values.|  
|[multimap::value_type (STL/CLR)](../VS_visualcpp/multimap--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[multimap::begin (STL/CLR)](../VS_visualcpp/multimap--begin--STL-CLR-.md)|Designates the beginning of the controlled sequence.|  
|[multimap::clear (STL/CLR)](../VS_visualcpp/multimap--clear--STL-CLR-.md)|Removes all elements.|  
|[multimap::count (STL/CLR)](../VS_visualcpp/multimap--count--STL-CLR-.md)|Counts elements matching a specified key.|  
|[multimap::empty (STL/CLR)](../VS_visualcpp/multimap--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[multimap::end (STL/CLR)](../VS_visualcpp/multimap--end--STL-CLR-.md)|Designates the end of the controlled sequence.|  
|[multimap::equal_range (STL/CLR)](../VS_visualcpp/multimap--equal_range--STL-CLR-.md)|Finds range that matches a specified key.|  
|[multimap::erase (STL/CLR)](../VS_visualcpp/multimap--erase--STL-CLR-.md)|Removes elements at specified positions.|  
|[multimap::find (STL/CLR)](../VS_visualcpp/multimap--find--STL-CLR-.md)|Finds an element that matches a specified key.|  
|[multimap::insert (STL/CLR)](../VS_visualcpp/multimap--insert--STL-CLR-.md)|Adds elements.|  
|[multimap::key_comp (STL/CLR)](../VS_visualcpp/multimap--key_comp--STL-CLR-.md)|Copies the ordering delegate for two keys.|  
|[multimap::lower_bound (STL/CLR)](../VS_visualcpp/multimap--lower_bound--STL-CLR-.md)|Finds beginning of range that matches a specified key.|  
|[multimap::make_value (STL/CLR)](../VS_visualcpp/multimap--make_value--STL-CLR-.md)|Constructs a value object.|  
|[multimap::multimap (STL/CLR)](../VS_visualcpp/multimap--multimap--STL-CLR-.md)|Constructs a container object.|  
|[multimap::rbegin (STL/CLR)](../VS_visualcpp/multimap--rbegin--STL-CLR-.md)|Designates the beginning of the reversed controlled sequence.|  
|[multimap::rend (STL/CLR)](../VS_visualcpp/multimap--rend--STL-CLR-.md)|Designates the end of the reversed controlled sequence.|  
|[multimap::size (STL/CLR)](../VS_visualcpp/multimap--size--STL-CLR-.md)|Counts the number of elements.|  
|[multimap::swap (STL/CLR)](../VS_visualcpp/multimap--swap--STL-CLR-.md)|Swaps the contents of two containers.|  
|[multimap::to_array (STL/CLR)](../VS_visualcpp/multimap--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
|[multimap::upper_bound (STL/CLR)](../VS_visualcpp/multimap--upper_bound--STL-CLR-.md)|Finds end of range that matches a specified key.|  
|[multimap::value_comp (STL/CLR)](../VS_visualcpp/multimap--value_comp--STL-CLR-.md)|Copies the ordering delegate for two element values.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[multimap::operator= (STL/CLR)](../VS_visualcpp/multimap--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
|[operator!= (multimap) (STL/CLR)](../VS_visualcpp/operator!=--multimap---STL-CLR-.md)|Determines if a `multimap` object is not equal to another `multimap` object.|  
|[operator< (multimap) (STL/CLR)](../VS_visualcpp/operator---multimap---STL-CLR-.md)|Determines if a `multimap` object is less than another `multimap` object.|  
|[operator<= (multimap) (STL/CLR)](../VS_visualcpp/operator-=--multimap---STL-CLR-.md)|Determines if a `multimap` object is less than or equal to another `multimap` object.|  
|[operator== (multimap) (STL/CLR)](../VS_visualcpp/operator==--multimap---STL-LR-.md)|Determines if a `multimap` object is equal to another `multimap` object.|  
|[operator> (multimap) (STL/CLR)](../VS_visualcpp/operator---multimap---STL-CLR-.md)|Determines if a `multimap` object is greater than another `multimap` object.|  
|[operator>= (multimap) (STL/CLR)](../VS_visualcpp/operator-=--multimap---STL-CLR-.md)|Determines if a `multimap` object is greater than or equal to another `multimap` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable?qualifyHint=False>|Sequence through elements.|  
|<xref:System.Collections.ICollection?qualifyHint=False>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable`1?qualifyHint=False>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection`1?qualifyHint=False>|Maintain group of typed elements.|  
|ITree<Key, Value>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls as individual nodes. It inserts elements into a (nearly) balanced tree that it keeps ordered by altering the links between nodes, never by copying the contents of one node to another. That means you can insert and remove elements freely without disturbing remaining elements.  
  
 The object orders the sequence it controls by calling a stored delegate object of type [multimap::key_compare (STL/CLR)](../VS_visualcpp/multimap--key_compare--STL-CLR-.md). You can specify the stored delegate object when you construct the multimap; if you specify no delegate object, the default is the comparison `operator<(key_type, key_type)`. You access this stored object by calling the member function [multimap::key_comp (STL/CLR)](../VS_visualcpp/multimap--key_comp--STL-CLR-.md)`()`.  
  
 Such a delegate object must impose a strict weak ordering on keys of type [multimap::key_type (STL/CLR)](../VS_visualcpp/multimap--key_type--STL-CLR-.md). That means, for any two keys `X` and `Y`:  
  
 `key_comp()(X, Y)` returns the same Boolean result on every call.  
  
 If `key_comp()(X, Y)` is true, then `key_comp()(Y, X)` must be false.  
  
 If `key_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.  
  
 If `!key_comp()(X, Y) && !key_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.  
  
 For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.) Unlike template class [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md), an object of template class `multimap` does not require that keys for all elements are unique. (Two or more keys can have equivalent ordering.)  
  
 Each element contains a separate key and a mapped value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations proportional to the logarithm of the number of elements in the sequence (logarithmic time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.  
  
 A multimap supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [multimap::end (STL/CLR)](../VS_visualcpp/multimap--end--STL-CLR-.md)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a multimap iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.  
  
 Note that you cannot refer to a multimap element directly given its numerical position -- that requires a random-access iterator.  
  
 A multimap iterator stores a handle to its associated multimap node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A multimap iterator remains valid so long as its associated multimap node is associated with some multimap. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** <cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../VS_visualcpp/hash_map--STL-CLR-.md)   
 [hash_multimap (STL/CLR)](../VS_visualcpp/hash_multimap--STL-CLR-.md)   
 [hash_multiset (STL/CLR)](../VS_visualcpp/hash_multiset--STL-CLR-.md)   
 [hash_set (STL/CLR)](../VS_visualcpp/hash_set--STL-CLR-.md)   
 [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)   
 [multiset (STL/CLR)](../VS_visualcpp/multiset--STL-CLR-.md)   
 [set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)