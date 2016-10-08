---
title: "list (STL-CLR)"
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
H1: list (STL/CLR)
ms.assetid: a70c45c8-a257-4f6b-8434-b27ff6685bac
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
# list (STL-CLR)
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
|[list::const_iterator (STL/CLR)](../VS_visualcpp/list--const_iterator--STL-CLR-.md)|The type of a constant iterator for the controlled sequence.|  
|[list::const_reference (STL/CLR)](../VS_visualcpp/list--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[list::const_reverse_iterator (STL/CLR)](../VS_visualcpp/list--const_reverse_iterator--STL-CLR-.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[list::difference_type (STL/CLR)](../VS_visualcpp/list--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[list::generic_container (STL/CLR)](../VS_visualcpp/list--generic_container--STL-CLR-.md)|The type of the generic interface for the container.|  
|[list::generic_iterator (STL/CLR)](../VS_visualcpp/list--generic_iterator--STL-CLR-.md)|The type of an iterator for the generic interface for the container.|  
|[list::generic_reverse_iterator (STL/CLR)](../VS_visualcpp/list--generic_reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the generic interface for the container.|  
|[list::generic_value (STL/CLR)](../VS_visualcpp/list--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container.|  
|[list::iterator (STL/CLR)](../VS_visualcpp/list--iterator--STL-CLR-.md)|The type of an iterator for the controlled sequence.|  
|[list::reference (STL/CLR)](../VS_visualcpp/list--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[list::reverse_iterator (STL/CLR)](../VS_visualcpp/list--reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the controlled sequence.|  
|[list::size_type (STL/CLR)](../VS_visualcpp/list--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[list::value_type (STL/CLR)](../VS_visualcpp/list--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[list::assign (STL/CLR)](../VS_visualcpp/list--assign--STL-CLR-.md)|Replaces all elements.|  
|[list::back (STL/CLR)](../VS_visualcpp/list--back--STL-CLR-.md)|Accesses the last element.|  
|[list::begin (STL/CLR)](../VS_visualcpp/list--begin--STL-CLR-.md)|Designates the beginning of the controlled sequence.|  
|[list::clear (STL/CLR)](../VS_visualcpp/list--clear--STL-CLR-.md)|Removes all elements.|  
|[list::empty (STL/CLR)](../VS_visualcpp/list--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[list::end (STL/CLR)](../VS_visualcpp/list--end--STL-CLR-.md)|Designates the end of the controlled sequence.|  
|[list::erase (STL/CLR)](../VS_visualcpp/list--erase--STL-CLR-.md)|Removes elements at specified positions.|  
|[list::front (STL/CLR)](../VS_visualcpp/list--front--STL-CLR-.md)|Accesses the first element.|  
|[list::insert (STL/CLR)](../VS_visualcpp/list--insert--STL-CLR-.md)|Adds elements at a specified position.|  
|[list::list (STL/CLR)](../VS_visualcpp/list--list--STL-CLR-.md)|Constructs a container object.|  
|[list::merge (STL/CLR)](../VS_visualcpp/list--merge--STL-CLR-.md)|Merges two ordered controlled sequences.|  
|[list::pop_back (STL/CLR)](../VS_visualcpp/list--pop_back--STL-CLR-.md)|Removes the last element.|  
|[list::pop_front (STL/CLR)](../VS_visualcpp/list--pop_front--STL-CLR-.md)|Removes the first element.|  
|[list::push_back (STL/CLR)](../VS_visualcpp/list--push_back--STL-CLR-.md)|Adds a new last element.|  
|[list::push_front (STL/CLR)](../VS_visualcpp/list--push_front--STL-CLR-.md)|Adds a new first element.|  
|[list::rbegin (STL/CLR)](../VS_visualcpp/list--rbegin--STL-CLR-.md)|Designates the beginning of the reversed controlled sequence.|  
|[list::remove (STL/CLR)](../VS_visualcpp/list--remove--STL-CLR-.md)|Removes an element with a specified value.|  
|[list::remove_if (STL/CLR)](../VS_visualcpp/list--remove_if--STL-CLR-.md)|Removes elements that pass a specified test.|  
|[list::rend (STL/CLR)](../VS_visualcpp/list--rend--STL-CLR-.md)|Designates the end of the reversed controlled sequence.|  
|[list::resize (STL/CLR)](../VS_visualcpp/list--resize--STL-CLR-.md)|Changes the number of elements.|  
|[list::reverse (STL/CLR)](../VS_visualcpp/list--reverse--STL-CLR-.md)|Reverses the controlled sequence.|  
|[list::size (STL/CLR)](../VS_visualcpp/list--size--STL-CLR-.md)|Counts the number of elements.|  
|[list::sort (STL/CLR)](../VS_visualcpp/list--sort--STL-CLR-.md)|Orders the controlled sequence.|  
|[list::splice (STL/CLR)](../VS_visualcpp/list--splice--STL-CLR-.md)|Restitches links between nodes.|  
|[list::swap (STL/CLR)](../VS_visualcpp/list--swap--STL-CLR-.md)|Swaps the contents of two containers.|  
|[list::to_array (STL/CLR)](../VS_visualcpp/list--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
|[list::unique (STL/CLR)](../VS_visualcpp/list--unique--STL-CLR-.md)|Removes adjacent elements that pass a specified test.|  
  
|Property|Description|  
|--------------|-----------------|  
|[list::back_item (STL/CLR)](../VS_visualcpp/list--back_item--STL-CLR-.md)|Accesses the last element.|  
|[list::front_item (STL/CLR)](../VS_visualcpp/list--front_item--STL-CLR-.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[list::operator= (STL/CLR)](../VS_visualcpp/list--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
|[operator!= (list) (STL/CLR)](../VS_visualcpp/operator!=--list---STL-CLR-.md)|Determines if a `list` object is not equal to another `list` object.|  
|[operator< (list) (STL/CLR)](../VS_visualcpp/operator---list---STL-CLR-.md)|Determines if a `list` object is less than another `list` object.|  
|[operator<= (list) (STL/CLR)](../VS_visualcpp/operator-=--list---STL-CLR-.md)|Determines if a `list` object is less than or equal to another `list` object.|  
|[operator== (list) (STL/CLR)](../VS_visualcpp/operator==--list---STL-CLR-.md)|Determines if a `list` object is equal to another `list` object.|  
|[operator> (list) (STL/CLR)](../VS_visualcpp/operator---list---STL-CLR-.md)|Determines if a `list` object is greater than another `list` object.|  
|[operator>= (list) (STL/CLR)](../VS_visualcpp/operator-=--list---STL-CLR-.md)|Determines if a `list` object is greater than or equal to another `list` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable?qualifyHint=False>|Sequence through elements.|  
|<xref:System.Collections.ICollection?qualifyHint=False>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable`1?qualifyHint=False>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection`1?qualifyHint=False>|Maintain group of typed elements.|  
|IList<Value\>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls as individual nodes in a bidirectional link list. It rearranges elements by altering the links between nodes, never by copying the contents of one node to another. That means you can insert and remove elements freely without disturbing remaining elements. Thus, a list is a good candidate for the underlying container for template class [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md) or template class [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md).  
  
 A `list` object supports bidirectional iterators, which means you can step to adjacent elements given an iterator that designates an element in the controlled sequence. A special head node corresponds to the iterator returned by [list::end (STL/CLR)](../VS_visualcpp/list--end--STL-CLR-.md)`()`. You can decrement this iterator to reach the last element in the controlled sequence, if present. You can increment a list iterator to reach the head node, and it will then compare equal to `end()`. But you cannot dereference the iterator returned by `end()`.  
  
 Note that you cannot refer to a list element directly given its numerical position -- that requires a random-access iterator. So a list is `not` usable as the underlying container for template class [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md).  
  
 A list iterator stores a handle to its associated list node, which in turn stores a handle to its associated container. You can use iterators only with their associated container objects. A list iterator remains valid so long as its associated list node is associated with some list. Moreover, a valid iterator is dereferencable -- you can use it to access or alter the element value it designates -- so long as it is not equal to `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** <cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)   
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)   
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)