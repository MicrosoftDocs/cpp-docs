---
title: "set (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/set> header [STL/CLR]"
  - "<set> header [STL/CLR]"
  - "set class [STL/CLR]"
ms.assetid: 27d3628c-741a-43a7-bef1-5085536f679e
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
# set (STL/CLR)
The template class describes an object that controls a varying-length sequence of elements that has bidirectional access. You use the container `set` to manage a sequence of elements as a (nearly) balanced ordered tree of nodes, each storing one element.  
  
 In the description below, `GValue` is the same as `GKey`, which in turn is the same as `Key` unless the latter is a ref type, in which case it is `Key^`.  
  
## Syntax  
  
```  
template<typename Key>  
    ref class set  
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
|[set::const_iterator (STL/CLR)](../dotnet/set-const-iterator-stl-clr.md)|The type of a constant iterator for the controlled sequence.|  
|[set::const_reference (STL/CLR)](../dotnet/set-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[set::const_reverse_iterator (STL/CLR)](../dotnet/set-const-reverse-iterator-stl-clr.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[set::difference_type (STL/CLR)](../dotnet/set-difference-type-stl-clr.md)|The type of a (possibly signed) distance between two elements.|  
|[set::generic_container (STL/CLR)](../dotnet/set-generic-container-stl-clr.md)|The type of the generic interface for the container.|  
|[set::generic_iterator (STL/CLR)](../dotnet/set-generic-iterator-stl-clr.md)|The type of an iterator for the generic interface for the container.|  
|[set::generic_reverse_iterator (STL/CLR)](../dotnet/set-generic-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the generic interface for the container.|  
|[set::generic_value (STL/CLR)](../dotnet/set-generic-value-stl-clr.md)|The type of an element for the generic interface for the container.|  
|[set::iterator (STL/CLR)](../dotnet/set-iterator-stl-clr.md)|The type of an iterator for the controlled sequence.|  
|[set::key_compare (STL/CLR)](../dotnet/set-key-compare-stl-clr.md)|The ordering delegate for two keys.|  
|[set::key_type (STL/CLR)](../dotnet/set-key-type-stl-clr.md)|The type of an ordering key.|  
|[set::reference (STL/CLR)](../dotnet/set-reference-stl-clr.md)|The type of a reference to an element.|  
|[set::reverse_iterator (STL/CLR)](../dotnet/set-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the controlled sequence.|  
|[set::size_type (STL/CLR)](../dotnet/set-size-type-stl-clr.md)|The type of a (non-negative) distance between two elements.|  
|[set::value_compare (STL/CLR)](../dotnet/set-value-compare-stl-clr.md)|The ordering delegate for two element values.|  
|[set::value_type (STL/CLR)](../dotnet/set-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[set::begin (STL/CLR)](../dotnet/set-begin-stl-clr.md)|Designates the beginning of the controlled sequence.|  
|[set::clear (STL/CLR)](../dotnet/set-clear-stl-clr.md)|Removes all elements.|  
|[set::count (STL/CLR)](../dotnet/set-count-stl-clr.md)|Counts elements matching a specified key.|  
|[set::empty (STL/CLR)](../dotnet/set-empty-stl-clr.md)|Tests whether no elements are present.|  
|[set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)|Designates the end of the controlled sequence.|  
|[set::equal_range (STL/CLR)](../dotnet/set-equal-range-stl-clr.md)|Finds range that matches a specified key.|  
|[set::erase (STL/CLR)](../dotnet/set-erase-stl-clr.md)|Removes elements at specified positions.|  
|[set::find (STL/CLR)](../dotnet/set-find-stl-clr.md)|Finds an element that matches a specified key.|  
|[set::insert (STL/CLR)](../dotnet/set-insert-stl-clr.md)|Adds elements.|  
|[set::key_comp (STL/CLR)](../dotnet/set-key-comp-stl-clr.md)|Copies the ordering delegate for two keys.|  
|[set::lower_bound (STL/CLR)](../dotnet/set-lower-bound-stl-clr.md)|Finds beginning of range that matches a specified key.|  
|[set::make_value (STL/CLR)](../dotnet/set-make-value-stl-clr.md)|Constructs a value object.|  
|[set::rbegin (STL/CLR)](../dotnet/set-rbegin-stl-clr.md)|Designates the beginning of the reversed controlled sequence.|  
|[set::rend (STL/CLR)](../dotnet/set-rend-stl-clr.md)|Designates the end of the reversed controlled sequence.|  
|[set::set (STL/CLR)](../dotnet/set-set-stl-clr.md)|Constructs a container object.|  
|[set::size (STL/CLR)](../dotnet/set-size-stl-clr.md)|Counts the number of elements.|  
|[set::swap (STL/CLR)](../dotnet/set-swap-stl-clr.md)|Swaps the contents of two containers.|  
|[set::to_array (STL/CLR)](../dotnet/set-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
|[set::upper_bound (STL/CLR)](../dotnet/set-upper-bound-stl-clr.md)|Finds end of range that matches a specified key.|  
|[set::value_comp (STL/CLR)](../dotnet/set-value-comp-stl-clr.md)|Copies the ordering delegate for two element values.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[set::operator= (STL/CLR)](../dotnet/set-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
|[operator!= (set) (STL/CLR)](../dotnet/operator-inequality-set-stl-clr.md)|Determines if a `set` object is not equal to another `set` object.|  
|[operator< (set) (STL/CLR)](../dotnet/operator-less-than-set-stl-clr.md)|Determines if a `set` object is less than another `set` object.|  
|[operator<= (set) (STL/CLR)](../dotnet/operator-less-or-equal-set-stl-clr.md)|Determines if a `set` object is less than or equal to another `set` object.|  
|[operator== (set) (STL/CLR)](../dotnet/operator-equality-set-stl-clr.md)|Determines if a `set` object is equal to another `set` object.|  
|[operator> (set) (STL/CLR)](../dotnet/operator-greater-than-set-stl-clr.md)|Determines if a `set` object is greater than another `set` object.|  
|[operator>= (set) (STL/CLR)](../dotnet/operator-greater-or-equal-set-stl-clr.md)|Determines if a `set` object is greater than or equal to another `set` object.|  
  
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
  
 The object orders the sequence it controls by calling a stored delegate object of type [set::key_compare (STL/CLR)](../dotnet/set-key-compare-stl-clr.md). You can specify the stored delegate object when you construct the set; if you specify no delegate object, the default is the comparison `operator<(key_type, key_type)`. You access this stored object by calling the member function [set::key_comp (STL/CLR)](../dotnet/set-key-comp-stl-clr.md)`()`.  
  
 Such a delegate object must impose a strict weak ordering on keys of type [set::key_type (STL/CLR)](../dotnet/set-key-type-stl-clr.md). That means, for any two keys `X` and `Y`:  
  
 `key_comp()(X, Y)` returns the same Boolean result on every call.  
  
 If `key_comp()(X, Y)` is true, then `key_comp()(Y, X)` must be false.  
  
 If `key_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.  
  
 If `!key_comp()(X, Y) && !key_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.  
  
 For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.) Unlike template class [set](../dotnet/set-stl-clr.md), an object of template class `set` does not require that keys for all elements are unique. (Two or more keys can have equivalent ordering.)  
  
 Each element serves as both a ey and a value. The sequence is represented in a way that permits lookup, insertion, and removal of an arbitrary element with a number of operations proportional to the logarithm of the number of elements in the sequence (logarithmic time). Moreover, inserting an element invalidates no iterators, and removing an element invalidates only those iterators which point at the removed element.  
  
 A set supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a set iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.  
  
 Note that you cannot refer to a set element directly given its numerical position -- that requires a random-access iterator.  
  
 A set iterator stores a handle to its associated set node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A set iterator remains valid so long as its associated set node is associated with some set. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [map (STL/CLR)](../dotnet/map-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [set](../dotnet/set-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)