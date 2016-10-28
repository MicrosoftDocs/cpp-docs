---
title: "vector (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vector class [STL/CLR]"
  - "<cliext/vector> header [STL/CLR]"
  - "<vector> header [STL/CLR]"
ms.assetid: f90060d5-097a-4e9d-9a26-a634b5b9c6c2
caps.latest.revision: 18
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
# vector (STL/CLR)
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
|[vector::const_iterator (STL/CLR)](../cli/vector--const_iterator--stl-clr-.md)|The type of a constant iterator for the controlled sequence.|  
|[vector::const_reference (STL/CLR)](../cli/vector--const_reference--stl-clr-.md)|The type of a constant reference to an element.|  
|[vector::const_reverse_iterator (STL/CLR)](../cli/vector--const_reverse_iterator--stl-clr-.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[vector::difference_type (STL/CLR)](../cli/vector--difference_type--stl-clr-.md)|The type of a signed distance between two elements.|  
|[vector::generic_container (STL/CLR)](../cli/vector--generic_container--stl-clr-.md)|The type of the generic interface for the container.|  
|[vector::generic_iterator (STL/CLR)](../cli/vector--generic_iterator--stl-clr-.md)|The type of an iterator for the generic interface for the container.|  
|[vector::generic_reverse_iterator (STL/CLR)](../cli/vector--generic_reverse_iterator--stl-clr-.md)|The type of a reverse iterator for the generic interface for the container.|  
|[vector::generic_value (STL/CLR)](../cli/vector--generic_value--stl-clr-.md)|The type of an element for the generic interface for the container.|  
|[vector::iterator (STL/CLR)](../cli/vector--iterator--stl-clr-.md)|The type of an iterator for the controlled sequence.|  
|[vector::reference (STL/CLR)](../cli/vector--reference--stl-clr-.md)|The type of a reference to an element.|  
|[vector::reverse_iterator (STL/CLR)](../cli/vector--reverse_iterator--stl-clr-.md)|The type of a reverse iterator for the controlled sequence.|  
|[vector::size_type (STL/CLR)](../cli/vector--size_type--stl-clr-.md)|The type of a signed distance between two elements.|  
|[vector::value_type (STL/CLR)](../cli/vector--value_type--stl-clr-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[vector::assign (STL/CLR)](../cli/vector--assign--stl-clr-.md)|Replaces all elements.|  
|[vector::at (STL/CLR)](../cli/vector--at--stl-clr-.md)|Accesses an element at a specified position.|  
|[vector::back (STL/CLR)](../cli/vector--back--stl-clr-.md)|Accesses the last element.|  
|[vector::begin (STL/CLR)](../cli/vector--begin--stl-clr-.md)|Designates the beginning of the controlled sequence.|  
|[vector::capacity (STL/CLR)](../cli/vector--capacity--stl-clr-.md)|Reports the size of allocated storage for the container.|  
|[vector::clear (STL/CLR)](../cli/vector--clear--stl-clr-.md)|Removes all elements.|  
|[vector::empty (STL/CLR)](../cli/vector--empty--stl-clr-.md)|Tests whether no elements are present.|  
|[vector::end (STL/CLR)](../cli/vector--end--stl-clr-.md)|Designates the end of the controlled sequence.|  
|[vector::erase (STL/CLR)](../cli/vector--erase--stl-clr-.md)|Removes elements at specified positions.|  
|[vector::front (STL/CLR)](../cli/vector--front--stl-clr-.md)|Accesses the first element.|  
|[vector::insert (STL/CLR)](../cli/vector--insert--stl-clr-.md)|Adds elements at a specified position.|  
|[vector::pop_back (STL/CLR)](../cli/vector--pop_back--stl-clr-.md)|Removes the last element.|  
|[vector::push_back (STL/CLR)](../cli/vector--push_back--stl-clr-.md)|Adds a new last element.|  
|[vector::rbegin (STL/CLR)](../cli/vector--rbegin--stl-clr-.md)|Designates the beginning of the reversed controlled sequence.|  
|[vector::rend (STL/CLR)](../cli/vector--rend--stl-clr-.md)|Designates the end of the reversed controlled sequence.|  
|[vector::reserve (STL/CLR)](../cli/vector--reserve--stl-clr-.md)|Ensures a minimum growth capacity for the container.|  
|[vector::resize (STL/CLR)](../cli/vector--resize--stl-clr-.md)|Changes the number of elements.|  
|[vector::size (STL/CLR)](../cli/vector--size--stl-clr-.md)|Counts the number of elements.|  
|[vector::swap (STL/CLR)](../cli/vector--swap--stl-clr-.md)|Swaps the contents of two containers.|  
|[vector::to_array (STL/CLR)](../cli/vector--to_array--stl-clr-.md)|Copies the controlled sequence to a new array.|  
|[vector::vector (STL/CLR)](../cli/vector--vector--stl-clr-.md)|Constructs a container object.|  
  
|Property|Description|  
|--------------|-----------------|  
|[vector::back_item (STL/CLR)](../cli/vector--back_item--stl-clr-.md)|Accesses the last element.|  
|[vector::front_item (STL/CLR)](../cli/vector--front_item--stl-clr-.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[vector::operator= (STL/CLR)](../cli/vector--operator=--stl-clr-.md)|Replaces the controlled sequence.|  
|[vector::operator(STL/CLR)](../cli/vector--operator-stl-clr-.md)|Accesses an element at a specified position.|  
|[operator!= (vector) (STL/CLR)](../cli/operator!=--vector---stl-clr-.md)|Determines if a `vector` object is not equal to another `vector` object.|  
|[operator< (vector) (STL/CLR)](../cli/operator---vector---stl-clr-.md)|Determines if a `vector` object is less than another `vector` object.|  
|[operator<= (vector) (STL/CLR)](../cli/operator-=--vector---stl-clr-.md)|Determines if a `vector` object is less than or equal to another `vector` object.|  
|[operator== (vector) (STL/CLR)](../cli/operator==--vector---stl-clr-.md)|Determines if a `vector` object is equal to another `vector` object.|  
|[operator> (vector) (STL/CLR)](../cli/operator---vector---stl-clr-.md)|Determines if a `vector` object is greater than another `vector` object.|  
|[operator>= (vector) (STL/CLR)](../cli/operator-=--vector---stl-clr-.md)|Determines if a `vector` object is greater than or equal to another `vector` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|\<xref:System.ICloneable>|Duplicate an object.|  
|\<xref:System.Collections.IEnumerable>|Sequence through elements.|  
|\<xref:System.Collections.ICollection>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable`1>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection`1>|Maintain group of typed elements.|  
|<xref:System.Collections.Generic.IList`1>|Maintain ordered group of typed elements.|  
|IVector<Value\>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through a stored array of `Value` elements, which grows on demand. Growth occurs in such a way that the cost of appending a new element is amortized constant time. In other words, the cost of adding elements at the end does not increase, on average, as the length of the controlled sequence gets larger. Thus, a vector is a good candidate for the underlying container for template class [stack (STL/CLR)](../cli/stack--stl-clr-.md).  
  
 A `vector` supports random-access iterators, which means you can refer to an element directly given its numerical position, counting from zero for the first (front) element, to [vector::size (STL/CLR)](../cli/vector--size--stl-clr-.md)`() - 1` for the last (back) element. It also means that a vector is a good candidate for the underlying container for template class [priority_queue (STL/CLR)](../cli/priority_queue--stl-clr-.md).  
  
 A vector iterator stores a handle to its associated vector object, along with the bias of the element it designates. You can use iterators only with their associated container objects. The bias of a vector element is the same as its position.  
  
 Inserting or erasing elements can change the element value stored at a given position, so the value designated by an iterator can also change. (The container may have to copy elements up or down to create a hole before an insert or to fill a hole after an erase.) Nevertheless, a vector iterator remains valid so long as its bias is in the range `[0,` [vector::size (STL/CLR)](../cli/vector--size--stl-clr-.md)`()]`. Moreover, a valid iterator remains dereferencable -- you can use it to access or alter the element value it designates -- so long as its bias is not equal to `size()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../cli/deque--stl-clr-.md)   
 [list (STL/CLR)](../cli/list--stl-clr-.md)   
 [priority_queue (STL/CLR)](../cli/priority_queue--stl-clr-.md)   
 [queue (STL/CLR)](../cli/queue--stl-clr-.md)   
 [stack (STL/CLR)](../cli/stack--stl-clr-.md)   
 [STL/CLR Library Reference](../cli/stl-clr-library-reference.md)