---
title: "multiset (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/set> header [STL/CLR]"
  - "<set> header [STL/CLR]"
  - "multiset class [STL/CLR]"
ms.assetid: 7c46e2b4-cd88-49b7-a9e6-63ad5ae7feb5
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
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
# multiset (STL/CLR)
The template class describes an object that controls a varying-length sequence of elements that has bidirectional access. You use the container `multiset` to manage a sequence of elements as a (nearly) balanced ordered tree of nodes, each storing one element.  
  
 In the description below, `GValue` is the same as `GKey`, which in turn is the same as `Key` unless the latter is a ref type, in which case it is `Key^`.  
  
## Syntax  
  
```  
template<typename Key>  
    ref class multiset  
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
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[multiset::const_iterator (STL/CLR)](../dotnet/multiset-const-iterator-stl-clr.md)|The type of a constant iterator for the controlled sequence.|  
|[multiset::const_reference (STL/CLR)](../dotnet/multiset-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[multiset::const_reverse_iterator (STL/CLR)](../dotnet/multiset-const-reverse-iterator-stl-clr.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[multiset::difference_type (STL/CLR)](../dotnet/multiset-difference-type-stl-clr.md)|The type of a (possibly signed) distance between two elements.|  
|[multiset::generic_container (STL/CLR)](../dotnet/multiset-generic-container-stl-clr.md)|The type of the generic interface for the container.|  
|[multiset::generic_iterator (STL/CLR)](../dotnet/multiset-generic-iterator-stl-clr.md)|The type of an iterator for the generic interface for the container.|  
|[multiset::generic_reverse_iterator (STL/CLR)](../dotnet/multiset-generic-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the generic interface for the container.|  
|[multiset::generic_value (STL/CLR)](../dotnet/multiset-generic-value-stl-clr.md)|The type of an element for the generic interface for the container.|  
|[multiset::iterator (STL/CLR)](../dotnet/multiset-iterator-stl-clr.md)|The type of an iterator for the controlled sequence.|  
|[multiset::key_compare (STL/CLR)](../dotnet/multiset-key-compare-stl-clr.md)|The ordering delegate for two keys.|  
|[multiset::key_type (STL/CLR)](../dotnet/multiset-key-type-stl-clr.md)|The type of an ordering key.|  
|[multiset::reference (STL/CLR)](../dotnet/multiset-reference-stl-clr.md)|The type of a reference to an element.|  
|[multiset::reverse_iterator (STL/CLR)](../dotnet/multiset-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the controlled sequence.|  
|[multiset::size_type (STL/CLR)](../dotnet/multiset-size-type-stl-clr.md)|The type of a (non-negative) distance between two elements.|  
|[multiset::value_compare (STL/CLR)](../dotnet/multiset-value-compare-stl-clr.md)|The ordering delegate for two element values.|  
|[multiset::value_type (STL/CLR)](../dotnet/multiset-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[multiset::begin (STL/CLR)](../dotnet/multiset-begin-stl-clr.md)|Designates the beginning of the controlled sequence.|  
|[multiset::clear (STL/CLR)](../dotnet/multiset-clear-stl-clr.md)|Removes all elements.|  
|[multiset::count (STL/CLR)](../dotnet/multiset-count-stl-clr.md)|Counts elements matching a specified key.|  
|[multiset::empty (STL/CLR)](../dotnet/multiset-empty-stl-clr.md)|Tests whether no elements are present.|  
|[multiset::end (STL/CLR)](../dotnet/multiset-end-stl-clr.md)|Designates the end of the controlled sequence.|  
|[multiset::equal_range (STL/CLR)](../dotnet/multiset-equal-range-stl-clr.md)|Finds range that matches a specified key.|  
|[multiset::erase (STL/CLR)](../dotnet/multiset-erase-stl-clr.md)|Removes elements at specified positions.|  
|[multiset::find (STL/CLR)](../dotnet/multiset-find-stl-clr.md)|Finds an element that matches a specified key.|  
|[multiset::insert (STL/CLR)](../dotnet/multiset-insert-stl-clr.md)|Adds elements.|  
|[multiset::key_comp (STL/CLR)](../dotnet/multiset-key-comp-stl-clr.md)|Copies the ordering delegate for two keys.|  
|[multiset::lower_bound (STL/CLR)](../dotnet/multiset-lower-bound-stl-clr.md)|Finds beginning of range that matches a specified key.|  
|[multiset::make_value (STL/CLR)](../dotnet/multiset-make-value-stl-clr.md)|Constructs a value object.|  
|[multiset::multiset (STL/CLR)](../dotnet/multiset-multiset-stl-clr.md)|Constructs a container object.|  
|[multiset::rbegin (STL/CLR)](../dotnet/multiset-rbegin-stl-clr.md)|Designates the beginning of the reversed controlled sequence.|  
|[multiset::rend (STL/CLR)](../dotnet/multiset-rend-stl-clr.md)|Designates the end of the reversed controlled sequence.|  
|[multiset::size (STL/CLR)](../dotnet/multiset-size-stl-clr.md)|Counts the number of elements.|  
|[multiset::swap (STL/CLR)](../dotnet/multiset-swap-stl-clr.md)|Swaps the contents of two containers.|  
|[multiset::to_array (STL/CLR)](../dotnet/multiset-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
|[multiset::upper_bound (STL/CLR)](../dotnet/multiset-upper-bound-stl-clr.md)|Finds end of range that matches a specified key.|  
|[multiset::value_comp (STL/CLR)](../dotnet/multiset-value-comp-stl-clr.md)|Copies the ordering delegate for two element values.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[multiset::operator= (STL/CLR)](../dotnet/multiset-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
|[operator!= (multiset) (STL/CLR)](../dotnet/operator-inequality-multiset-stl-clr.md)|Determines if a `multiset` object is not equal to another `multiset` object.|  
|[operator< (multiset) (STL/CLR)](../dotnet/operator-less-than-multiset-stl-clr.md)|Determines if a `multiset` object is less than another `multiset` object.|  
|[operator<= (multiset) (STL/CLR)](../dotnet/operator-less-or-equal-multiset-stl-clr.md)|Determines if a `multiset` object is less than or equal to another `multiset` object.|  
|[operator== (multiset) (STL/CLR)](../dotnet/operator-equality-multiset-stl-clr.md)|Determines if a `multiset` object is equal to another `multiset` object.|  
|[operator> (multiset) (STL/CLR)](../dotnet/operator-greater-than-multiset-stl-clr.md)|Determines if a `multiset` object is greater than another `multiset` object.|  
|[operator>= (multiset) (STL/CLR)](../dotnet/operator-greater-or-equal-multiset-stl-clr.md)|Determines if a `multiset` object is greater than or equal to another `multiset` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable>|Sequence through elements.|  
|<xref:System.Collections.ICollection>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection%601>|Maintain group of typed elements.|  
|ITree\<Key, Value>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls as individual nodes. It inserts elements into a (nearly) balanced tree that it keeps ordered by altering the links between nodes, never by copying the contents of one node to another. That means you can insert and remove elements freely without disturbing remaining elements.  
  
 The object orders the sequence it controls by calling a stored delegate object of type [multiset::key_compare (STL/CLR)](../dotnet/multiset-key-compare-stl-clr.md). You can specify the stored delegate object when you construct the multiset; if you specify no delegate object, the default is the comparison `operator<(key_type, key_type)`. You access this stored object by calling the member function [multiset::key_comp (STL/CLR)](../dotnet/multiset-key-comp-stl-clr.md)`()`.  
  
 Such a delegate object must impose a strict weak ordering on keys of type [multiset::key_type (STL/CLR)](../dotnet/multiset-key-type-stl-clr.md). That means, for any two keys `X` and `Y`:  
  
 `key_comp()(X, Y)` returns the same Boolean result on every call.  
  
 If `key_comp()(X, Y)` is true, then `key_comp()(Y, X)` must be false.  
  
 If `key_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.  
  
 If `!key_comp()(X, Y) && !key_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.  
  
 For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.) Unlike template class [set (STL/CLR)](../dotnet/set-stl-clr.md), an object of template class `multiset` does not require that keys for all elements are unique. (Two or more keys can have equivalent ordering.)  
  
 Each element serves as both a ey and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations proportional to the logarithm of the number of elements in the sequence (logarithmic time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.  
  
 A multiset supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [multiset::end (STL/CLR)](../dotnet/multiset-end-stl-clr.md)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a multiset iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.  
  
 Note that you cannot refer to a multiset element directly given its numerical position -- that requires a random-access iterator.  
  
 A multiset iterator stores a handle to its associated multiset node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A multiset iterator remains valid so long as its associated multiset node is associated with some multiset. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [map (STL/CLR)](../dotnet/map-stl-clr.md)   
 [multiset](../dotnet/multiset-stl-clr.md)   
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)