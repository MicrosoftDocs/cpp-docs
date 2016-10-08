---
title: "vector (STL-CLR)"
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
H1: vector (STL/CLR)
ms.assetid: f90060d5-097a-4e9d-9a26-a634b5b9c6c2
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
# vector (STL-CLR)
The template class describes an object that controls a varying-length sequence of elements that has random access. You use the container `vector` to manage a sequence of elements as a contiguous block of storage. The block is implemented as an array that grows on demand.  
  
 In the description below, `GValue` is the same as `Value` unless the latter is a ref type, in which case it is `Value^`.  
  
## Syntax  
  
```  
template<typename Value>  
    ref class vector  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IVector<GValue>  
    { ..... };  
```  
  
#### Parameters  
 Value  
 The type of an element in the controlled sequence.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[vector::const_iterator (STL/CLR)](../VS_visualcpp/vector--const_iterator--STL-CLR-.md)|The type of a constant iterator for the controlled sequence.|  
|[vector::const_reference (STL/CLR)](../VS_visualcpp/vector--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[vector::const_reverse_iterator (STL/CLR)](../VS_visualcpp/vector--const_reverse_iterator--STL-CLR-.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[vector::difference_type (STL/CLR)](../VS_visualcpp/vector--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[vector::generic_container (STL/CLR)](../VS_visualcpp/vector--generic_container--STL-CLR-.md)|The type of the generic interface for the container.|  
|[vector::generic_iterator (STL/CLR)](../VS_visualcpp/vector--generic_iterator--STL-CLR-.md)|The type of an iterator for the generic interface for the container.|  
|[vector::generic_reverse_iterator (STL/CLR)](../VS_visualcpp/vector--generic_reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the generic interface for the container.|  
|[vector::generic_value (STL/CLR)](../VS_visualcpp/vector--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container.|  
|[vector::iterator (STL/CLR)](../VS_visualcpp/vector--iterator--STL-CLR-.md)|The type of an iterator for the controlled sequence.|  
|[vector::reference (STL/CLR)](../VS_visualcpp/vector--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[vector::reverse_iterator (STL/CLR)](../VS_visualcpp/vector--reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the controlled sequence.|  
|[vector::size_type (STL/CLR)](../VS_visualcpp/vector--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[vector::value_type (STL/CLR)](../VS_visualcpp/vector--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[vector::assign (STL/CLR)](../VS_visualcpp/vector--assign--STL-CLR-.md)|Replaces all elements.|  
|[vector::at (STL/CLR)](../VS_visualcpp/vector--at--STL-CLR-.md)|Accesses an element at a specified position.|  
|[vector::back (STL/CLR)](../VS_visualcpp/vector--back--STL-CLR-.md)|Accesses the last element.|  
|[vector::begin (STL/CLR)](../VS_visualcpp/vector--begin--STL-CLR-.md)|Designates the beginning of the controlled sequence.|  
|[vector::capacity (STL/CLR)](../VS_visualcpp/vector--capacity--STL-CLR-.md)|Reports the size of allocated storage for the container.|  
|[vector::clear (STL/CLR)](../VS_visualcpp/vector--clear--STL-CLR-.md)|Removes all elements.|  
|[vector::empty (STL/CLR)](../VS_visualcpp/vector--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[vector::end (STL/CLR)](../VS_visualcpp/vector--end--STL-CLR-.md)|Designates the end of the controlled sequence.|  
|[vector::erase (STL/CLR)](../VS_visualcpp/vector--erase--STL-CLR-.md)|Removes elements at specified positions.|  
|[vector::front (STL/CLR)](../VS_visualcpp/vector--front--STL-CLR-.md)|Accesses the first element.|  
|[vector::insert (STL/CLR)](../VS_visualcpp/vector--insert--STL-CLR-.md)|Adds elements at a specified position.|  
|[vector::pop_back (STL/CLR)](../VS_visualcpp/vector--pop_back--STL-CLR-.md)|Removes the last element.|  
|[vector::push_back (STL/CLR)](../VS_visualcpp/vector--push_back--STL-CLR-.md)|Adds a new last element.|  
|[vector::rbegin (STL/CLR)](../VS_visualcpp/vector--rbegin--STL-CLR-.md)|Designates the beginning of the reversed controlled sequence.|  
|[vector::rend (STL/CLR)](../VS_visualcpp/vector--rend--STL-CLR-.md)|Designates the end of the reversed controlled sequence.|  
|[vector::reserve (STL/CLR)](../VS_visualcpp/vector--reserve--STL-CLR-.md)|Ensures a minimum growth capacity for the container.|  
|[vector::resize (STL/CLR)](../VS_visualcpp/vector--resize--STL-CLR-.md)|Changes the number of elements.|  
|[vector::size (STL/CLR)](../VS_visualcpp/vector--size--STL-CLR-.md)|Counts the number of elements.|  
|[vector::swap (STL/CLR)](../VS_visualcpp/vector--swap--STL-CLR-.md)|Swaps the contents of two containers.|  
|[vector::to_array (STL/CLR)](../VS_visualcpp/vector--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
|[vector::vector (STL/CLR)](../VS_visualcpp/vector--vector--STL-CLR-.md)|Constructs a container object.|  
  
|Property|Description|  
|--------------|-----------------|  
|[vector::back_item (STL/CLR)](../VS_visualcpp/vector--back_item--STL-CLR-.md)|Accesses the last element.|  
|[vector::front_item (STL/CLR)](../VS_visualcpp/vector--front_item--STL-CLR-.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[vector::operator= (STL/CLR)](../VS_visualcpp/vector--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
|[vector::operator(STL/CLR)](../VS_visualcpp/vector--operator-STL-CLR-.md)|Accesses an element at a specified position.|  
|[operator!= (vector) (STL/CLR)](../VS_visualcpp/operator!=--vector---STL-CLR-.md)|Determines if a `vector` object is not equal to another `vector` object.|  
|[operator< (vector) (STL/CLR)](../VS_visualcpp/operator---vector---STL-CLR-.md)|Determines if a `vector` object is less than another `vector` object.|  
|[operator<= (vector) (STL/CLR)](../VS_visualcpp/operator-=--vector---STL-CLR-.md)|Determines if a `vector` object is less than or equal to another `vector` object.|  
|[operator== (vector) (STL/CLR)](../VS_visualcpp/operator==--vector---STL-CLR-.md)|Determines if a `vector` object is equal to another `vector` object.|  
|[operator> (vector) (STL/CLR)](../VS_visualcpp/operator---vector---STL-CLR-.md)|Determines if a `vector` object is greater than another `vector` object.|  
|[operator>= (vector) (STL/CLR)](../VS_visualcpp/operator-=--vector---STL-CLR-.md)|Determines if a `vector` object is greater than or equal to another `vector` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable?qualifyHint=False>|Sequence through elements.|  
|<xref:System.Collections.ICollection?qualifyHint=False>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable`1?qualifyHint=False>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection`1?qualifyHint=False>|Maintain group of typed elements.|  
|<xref:System.Collections.Generic.IList`1?qualifyHint=False>|Maintain ordered group of typed elements.|  
|IVector<Value\>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through a stored array of `Value` elements, which grows on demand. Growth occurs in such a way that the cost of appending a new element is amortized constant time. In other words, the cost of adding elements at the end does not increase, on average, as the length of the controlled sequence gets larger. Thus, a vector is a good candidate for the underlying container for template class [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md).  
  
 A `vector` supports random-access iterators, which means you can refer to an element directly given its numerical position, counting from zero for the first (front) element, to [vector::size (STL/CLR)](../VS_visualcpp/vector--size--STL-CLR-.md)`() - 1` for the last (back) element. It also means that a vector is a good candidate for the underlying container for template class [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md).  
  
 A vector iterator stores a handle to its associated vector object, along with the bias of the element it designates. You can use iterators only with their associated container objects. The bias of a vector element is the same as its position.  
  
 Inserting or erasing elements can change the element value stored at a given position, so the value designated by an iterator can also change. (The container may have to copy elements up or down to create a hole before an insert or to fill a hole after an erase.) Nevertheless, a vector iterator remains valid so long as its bias is in the range `[0,` [vector::size (STL/CLR)](../VS_visualcpp/vector--size--STL-CLR-.md)`()]`. Moreover, a valid iterator remains dereferencable -- you can use it to access or alter the element value it designates -- so long as its bias is not equal to `size()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** <cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)   
 [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)   
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)