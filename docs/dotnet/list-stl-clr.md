---
title: "list (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<cliext/list> header [STL/CLR]"
  - "list class [STL/CLR]"
  - "<list> header [STL/CLR]"
ms.assetid: a70c45c8-a257-4f6b-8434-b27ff6685bac
caps.latest.revision: 17
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
# list (STL/CLR)
The template class describes an object that controls a varying-length sequence of elements that has bidirectional access. You use the container `list` to manage a sequence of elements as a bidirectional linked list of nodes, each storing one element.  
  
 In the description below, `GValue` is the same as `Value` unless the latter is a ref type, in which case it is `Value^`.  
  
## Syntax  
  
```  
template<typename Value>  
    ref class list  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        Microsoft::VisualC::StlClr::IList<GValue>  
    { ..... };  
```  
  
#### Parameters  
 Value  
 The type of an element in the controlled sequence.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[list::const_iterator (STL/CLR)](../dotnet/list-const-iterator-stl-clr.md)|The type of a constant iterator for the controlled sequence.|  
|[list::const_reference (STL/CLR)](../dotnet/list-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[list::const_reverse_iterator (STL/CLR)](../dotnet/list-const-reverse-iterator-stl-clr.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[list::difference_type (STL/CLR)](../dotnet/list-difference-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[list::generic_container (STL/CLR)](../dotnet/list-generic-container-stl-clr.md)|The type of the generic interface for the container.|  
|[list::generic_iterator (STL/CLR)](../dotnet/list-generic-iterator-stl-clr.md)|The type of an iterator for the generic interface for the container.|  
|[list::generic_reverse_iterator (STL/CLR)](../dotnet/list-generic-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the generic interface for the container.|  
|[list::generic_value (STL/CLR)](../dotnet/list-generic-value-stl-clr.md)|The type of an element for the generic interface for the container.|  
|[list::iterator (STL/CLR)](../dotnet/list-iterator-stl-clr.md)|The type of an iterator for the controlled sequence.|  
|[list::reference (STL/CLR)](../dotnet/list-reference-stl-clr.md)|The type of a reference to an element.|  
|[list::reverse_iterator (STL/CLR)](../dotnet/list-reverse-iterator-stl-clr.md)|The type of a reverse iterator for the controlled sequence.|  
|[list::size_type (STL/CLR)](../dotnet/list-size-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[list::value_type (STL/CLR)](../dotnet/list-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[list::assign (STL/CLR)](../dotnet/list-assign-stl-clr.md)|Replaces all elements.|  
|[list::back (STL/CLR)](../dotnet/list-back-stl-clr.md)|Accesses the last element.|  
|[list::begin (STL/CLR)](../dotnet/list-begin-stl-clr.md)|Designates the beginning of the controlled sequence.|  
|[list::clear (STL/CLR)](../dotnet/list-clear-stl-clr.md)|Removes all elements.|  
|[list::empty (STL/CLR)](../dotnet/list-empty-stl-clr.md)|Tests whether no elements are present.|  
|[list::end (STL/CLR)](../dotnet/list-end-stl-clr.md)|Designates the end of the controlled sequence.|  
|[list::erase (STL/CLR)](../dotnet/list-erase-stl-clr.md)|Removes elements at specified positions.|  
|[list::front (STL/CLR)](../dotnet/list-front-stl-clr.md)|Accesses the first element.|  
|[list::insert (STL/CLR)](../dotnet/list-insert-stl-clr.md)|Adds elements at a specified position.|  
|[list::list (STL/CLR)](../dotnet/list-list-stl-clr.md)|Constructs a container object.|  
|[list::merge (STL/CLR)](../dotnet/list-merge-stl-clr.md)|Merges two ordered controlled sequences.|  
|[list::pop_back (STL/CLR)](../dotnet/list-pop-back-stl-clr.md)|Removes the last element.|  
|[list::pop_front (STL/CLR)](../dotnet/list-pop-front-stl-clr.md)|Removes the first element.|  
|[list::push_back (STL/CLR)](../dotnet/list-push-back-stl-clr.md)|Adds a new last element.|  
|[list::push_front (STL/CLR)](../dotnet/list-push-front-stl-clr.md)|Adds a new first element.|  
|[list::rbegin (STL/CLR)](../dotnet/list-rbegin-stl-clr.md)|Designates the beginning of the reversed controlled sequence.|  
|[list::remove (STL/CLR)](../dotnet/list-remove-stl-clr.md)|Removes an element with a specified value.|  
|[list::remove_if (STL/CLR)](../dotnet/list-remove-if-stl-clr.md)|Removes elements that pass a specified test.|  
|[list::rend (STL/CLR)](../dotnet/list-rend-stl-clr.md)|Designates the end of the reversed controlled sequence.|  
|[list::resize (STL/CLR)](../dotnet/list-resize-stl-clr.md)|Changes the number of elements.|  
|[list::reverse (STL/CLR)](../dotnet/list-reverse-stl-clr.md)|Reverses the controlled sequence.|  
|[list::size (STL/CLR)](../dotnet/list-size-stl-clr.md)|Counts the number of elements.|  
|[list::sort (STL/CLR)](../dotnet/list-sort-stl-clr.md)|Orders the controlled sequence.|  
|[list::splice (STL/CLR)](../dotnet/list-splice-stl-clr.md)|Restitches links between nodes.|  
|[list::swap (STL/CLR)](../dotnet/list-swap-stl-clr.md)|Swaps the contents of two containers.|  
|[list::to_array (STL/CLR)](../dotnet/list-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
|[list::unique (STL/CLR)](../dotnet/list-unique-stl-clr.md)|Removes adjacent elements that pass a specified test.|  
  
|Property|Description|  
|--------------|-----------------|  
|[list::back_item (STL/CLR)](../dotnet/list-back-item-stl-clr.md)|Accesses the last element.|  
|[list::front_item (STL/CLR)](../dotnet/list-front-item-stl-clr.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[list::operator= (STL/CLR)](../dotnet/list-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
|[operator!= (list) (STL/CLR)](../dotnet/operator-inequality-list-stl-clr.md)|Determines if a `list` object is not equal to another `list` object.|  
|[operator< (list) (STL/CLR)](../dotnet/operator-less-than-list-stl-clr.md)|Determines if a `list` object is less than another `list` object.|  
|[operator<= (list) (STL/CLR)](../dotnet/operator-less-or-equal-list-stl-clr.md)|Determines if a `list` object is less than or equal to another `list` object.|  
|[operator== (list) (STL/CLR)](../dotnet/operator-equality-list-stl-clr.md)|Determines if a `list` object is equal to another `list` object.|  
|[operator> (list) (STL/CLR)](../dotnet/operator-greater-than-list-stl-clr.md)|Determines if a `list` object is greater than another `list` object.|  
|[operator>= (list) (STL/CLR)](../dotnet/operator-greater-or-equal-list-stl-clr.md)|Determines if a `list` object is greater than or equal to another `list` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable>|Sequence through elements.|  
|<xref:System.Collections.ICollection>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection%601>|Maintain group of typed elements.|  
|IList\<Value>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls as individual nodes in a bidirectional link list. It rearranges elements by altering the links between nodes, never by copying the contents of one node to another. That means you can insert and remove elements freely without disturbing remaining elements. Thus, a list is a good candidate for the underlying container for template class [queue (STL/CLR)](../dotnet/queue-stl-clr.md) or template class [stack (STL/CLR)](../dotnet/stack-stl-clr.md).  
  
 A `list` object supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [list::end (STL/CLR)](../dotnet/list-end-stl-clr.md)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a list iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.  
  
 Note that you cannot refer to a list element directly given its numerical position -- that requires a random-access iterator. So a list is `not` usable as the underlying container for template class [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).  
  
 A list iterator stores a handle to its associated list node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A list iterator remains valid so long as its associated list node is associated with some list. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [queue (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)