---
title: "vector (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
|[vector::const_iterator (STL/CLR)](../dotnet/vector-const-iterator-stl-clr.md)|The type of a constant iterator for the controlled sequence.|  
|[vector::const_reference (STL/CLR)](../dotnet/vector-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[vector::const_reverse_iterator (STL/CLR)](../dotnet/vector-const-reverse-iterator-stl-clr.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[vector::difference_type (STL/CLR)](../dotnet/vector-difference-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[vector::generic_container (STL/CLR)](../dotnet/vector-generic-container-stl-clr.md)|The type of the generic interface for the container.|  
|[vector::generic_iterator (STL/CLR)](../dotnet/vector-generic-iterator-stl-clr.md)|The type of an iterator for the generic interface for the container.|  
|[vector::generic_reverse_iterator (STL/CLR)](../dotnet/vector-generic-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the generic interface for the container.|  
|[vector::generic_value (STL/CLR)](../dotnet/vector-generic-value-stl-clr.md)|The type of an element for the generic interface for the container.|  
|[vector::iterator (STL/CLR)](../dotnet/vector-iterator-stl-clr.md)|The type of an iterator for the controlled sequence.|  
|[vector::reference (STL/CLR)](../dotnet/vector-reference-stl-clr.md)|The type of a reference to an element.|  
|[vector::reverse_iterator (STL/CLR)](../dotnet/vector-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the controlled sequence.|  
|[vector::size_type (STL/CLR)](../dotnet/vector-size-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[vector::value_type (STL/CLR)](../dotnet/vector-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[vector::assign (STL/CLR)](../dotnet/vector-assign-stl-clr.md)|Replaces all elements.|  
|[vector::at (STL/CLR)](../dotnet/vector-at-stl-clr.md)|Accesses an element at a specified position.|  
|[vector::back (STL/CLR)](../dotnet/vector-back-stl-clr.md)|Accesses the last element.|  
|[vector::begin (STL/CLR)](../dotnet/vector-begin-stl-clr.md)|Designates the beginning of the controlled sequence.|  
|[vector::capacity (STL/CLR)](../dotnet/vector-capacity-stl-clr.md)|Reports the size of allocated storage for the container.|  
|[vector::clear (STL/CLR)](../dotnet/vector-clear-stl-clr.md)|Removes all elements.|  
|[vector::empty (STL/CLR)](../dotnet/vector-empty-stl-clr.md)|Tests whether no elements are present.|  
|[vector::end (STL/CLR)](../dotnet/vector-end-stl-clr.md)|Designates the end of the controlled sequence.|  
|[vector::erase (STL/CLR)](../dotnet/vector-erase-stl-clr.md)|Removes elements at specified positions.|  
|[vector::front (STL/CLR)](../dotnet/vector-front-stl-clr.md)|Accesses the first element.|  
|[vector::insert (STL/CLR)](../dotnet/vector-insert-stl-clr.md)|Adds elements at a specified position.|  
|[vector::pop_back (STL/CLR)](../dotnet/vector-pop-back-stl-clr.md)|Removes the last element.|  
|[vector::push_back (STL/CLR)](../dotnet/vector-push-back-stl-clr.md)|Adds a new last element.|  
|[vector::rbegin (STL/CLR)](../dotnet/vector-rbegin-stl-clr.md)|Designates the beginning of the reversed controlled sequence.|  
|[vector::rend (STL/CLR)](../dotnet/vector-rend-stl-clr.md)|Designates the end of the reversed controlled sequence.|  
|[vector::reserve (STL/CLR)](../dotnet/vector-reserve-stl-clr.md)|Ensures a minimum growth capacity for the container.|  
|[vector::resize (STL/CLR)](../dotnet/vector-resize-stl-clr.md)|Changes the number of elements.|  
|[vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)|Counts the number of elements.|  
|[vector::swap (STL/CLR)](../dotnet/vector-swap-stl-clr.md)|Swaps the contents of two containers.|  
|[vector::to_array (STL/CLR)](../dotnet/vector-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
|[vector::vector (STL/CLR)](../dotnet/vector-vector-stl-clr.md)|Constructs a container object.|  
  
|Property|Description|  
|--------------|-----------------|  
|[vector::back_item (STL/CLR)](../dotnet/vector-back-item-stl-clr.md)|Accesses the last element.|  
|[vector::front_item (STL/CLR)](../dotnet/vector-front-item-stl-clr.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[vector::operator= (STL/CLR)](../dotnet/vector-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
|[vector::operator(STL/CLR)](../dotnet/vector-operator-stl-clr.md)|Accesses an element at a specified position.|  
|[operator!= (vector) (STL/CLR)](../dotnet/operator-inequality-vector-stl-clr.md)|Determines if a `vector` object is not equal to another `vector` object.|  
|[operator< (vector) (STL/CLR)](../dotnet/operator-less-than-vector-stl-clr.md)|Determines if a `vector` object is less than another `vector` object.|  
|[operator<= (vector) (STL/CLR)](../dotnet/operator-less-or-equal-vector-stl-clr.md)|Determines if a `vector` object is less than or equal to another `vector` object.|  
|[operator== (vector) (STL/CLR)](../dotnet/operator-equality-vector-stl-clr.md)|Determines if a `vector` object is equal to another `vector` object.|  
|[operator> (vector) (STL/CLR)](../dotnet/operator-greater-than-vector-stl-clr.md)|Determines if a `vector` object is greater than another `vector` object.|  
|[operator>= (vector) (STL/CLR)](../dotnet/operator-greater-or-equal-vector-stl-clr.md)|Determines if a `vector` object is greater than or equal to another `vector` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable>|Sequence through elements.|  
|<xref:System.Collections.ICollection>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection%601>|Maintain group of typed elements.|  
|<xref:System.Collections.Generic.IList%601>|Maintain ordered group of typed elements.|  
|IVector<Value\>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through a stored array of `Value` elements, which grows on demand. Growth occurs in such a way that the cost of appending a new element is amortized constant time. In other words, the cost of adding elements at the end does not increase, on average, as the length of the controlled sequence gets larger. Thus, a vector is a good candidate for the underlying container for template class [stack (STL/CLR)](../dotnet/stack-stl-clr.md).  
  
 A `vector` supports random-access iterators, which means you can refer to an element directly given its numerical position, counting from zero for the first (front) element, to [vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)`() - 1` for the last (back) element. It also means that a vector is a good candidate for the underlying container for template class [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).  
  
 A vector iterator stores a handle to its associated vector object, along with the bias of the element it designates. You can use iterators only with their associated container objects. The bias of a vector element is the same as its position.  
  
 Inserting or erasing elements can change the element value stored at a given position, so the value designated by an iterator can also change. (The container may have to copy elements up or down to create a hole before an insert or to fill a hole after an erase.) Nevertheless, a vector iterator remains valid so long as its bias is in the range `[0,` [vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)`()]`. Moreover, a valid iterator remains dereferencable -- you can use it to access or alter the element value it designates -- so long as its bias is not equal to `size()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [list (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [queue (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)