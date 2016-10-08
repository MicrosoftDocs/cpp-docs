---
title: "deque (STL-CLR)"
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
H1: deque (STL/CLR)
ms.assetid: dd669da3-3c0e-45e9-8596-f6b483720941
caps.latest.revision: 22
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
# deque (STL-CLR)
The template class describes an object that controls a varying-length sequence of elements that has random access. You use the container `deque` to manage a sequence of elements that looks like a contiguous block of storage, but which can grow or shrink at either end without the need to copy any remaining elements. Thus it can implement efficiently a `double-ended queue`. (Hence the name.)  
  
 In the description below, `GValue` is the same as `Value` unless the latter is a ref type, in which case it is `Value^`.  
  
## Syntax  
  
```  
template<typename Value>  
    ref class deque  
        :   public  
        System::ICloneable,  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<GValue>,  
        System::Collections::Generic::ICollection<GValue>,  
        System::Collections::Generic::IList<GValue>,  
        Microsoft::VisualC::StlClr::IDeque<GValue>  
    { ..... };  
```  
  
#### Parameters  
 GValue  
 The generic type of an element in the controlled sequence.  
  
 Value  
 The type of an element in the controlled sequence.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[deque::const_iterator (STL/CLR)](../VS_visualcpp/deque--const_iterator--STL-CLR-.md)|The type of a constant iterator for the controlled sequence.|  
|[deque::const_reference (STL/CLR)](../VS_visualcpp/deque--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[deque::const_reverse_iterator (STL/CLR)](../VS_visualcpp/deque--const_reverse_iterator--STL-CLR-.md)|The type of a constant reverse iterator for the controlled sequence.|  
|[deque::difference_type (STL/CLR)](../VS_visualcpp/deque--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[deque::generic_container (STL/CLR)](../VS_visualcpp/deque--generic_container--STL-CLR-.md)|The type of the generic interface for the container.|  
|[deque::generic_iterator (STL/CLR)](../VS_visualcpp/deque--generic_iterator--STL-CLR-.md)|The type of an iterator for the generic interface for the container.|  
|[deque::generic_reverse_iterator (STL/CLR)](../VS_visualcpp/deque--generic_reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the generic interface for the container.|  
|[deque::generic_value (STL/CLR)](../VS_visualcpp/deque--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container.|  
|[deque::iterator (STL/CLR)](../VS_visualcpp/deque--iterator--STL-CLR-.md)|The type of an iterator for the controlled sequence.|  
|[deque::reference (STL/CLR)](../VS_visualcpp/deque--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[deque::reverse_iterator (STL/CLR)](../VS_visualcpp/deque--reverse_iterator--STL-CLR-.md)|The type of a reverse iterator for the controlled sequence.|  
|[deque::size_type (STL/CLR)](../VS_visualcpp/deque--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[deque::value_type (STL/CLR)](../VS_visualcpp/deque--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[deque::assign (STL/CLR)](../VS_visualcpp/deque--assign--STL-CLR-.md)|Replaces all elements.|  
|[deque::at (STL/CLR)](../VS_visualcpp/deque--at--STL-CLR-.md)|Accesses an element at a specified position.|  
|[deque::back (STL/CLR)](../VS_visualcpp/deque--back--STL-CLR-.md)|Accesses the last element.|  
|[deque::begin (STL/CLR)](../VS_visualcpp/deque--begin--STL-CLR-.md)|Designates the beginning of the controlled sequence.|  
|[deque::clear (STL/CLR)](../VS_visualcpp/deque--clear--STL-CLR-.md)|Removes all elements.|  
|[deque::deque (STL/CLR)](../VS_visualcpp/deque--deque--STL-CLR-.md)|Constructs a container object.|  
|[deque::empty (STL/CLR)](../VS_visualcpp/deque--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[deque::end (STL/CLR)](../VS_visualcpp/deque--end--STL-CLR-.md)|Designates the end of the controlled sequence.|  
|[deque::erase (STL/CLR)](../VS_visualcpp/deque--erase--STL-CLR-.md)|Removes elements at specified positions.|  
|[deque::front (STL/CLR)](../VS_visualcpp/deque--front--STL-CLR-.md)|Accesses the first element.|  
|[deque::insert (STL/CLR)](../VS_visualcpp/deque--insert--STL-CLR-.md)|Adds elements at a specified position.|  
|[deque::pop_back (STL/CLR)](../VS_visualcpp/deque--pop_back--STL-CLR-.md)|Removes the last element.|  
|[deque::pop_front (STL/CLR)](../VS_visualcpp/deque--pop_front--STL-CLR-.md)|Removes the first element.|  
|[deque::push_back (STL/CLR)](../VS_visualcpp/deque--push_back--STL-CLR-.md)|Adds a new last element.|  
|[deque::push_front (STL/CLR)](../VS_visualcpp/deque--push_front--STL-CLR-.md)|Adds a new first element.|  
|[deque::rbegin (STL/CLR)](../VS_visualcpp/deque--rbegin--STL-CLR-.md)|Designates the beginning of the reversed controlled sequence.|  
|[deque::rend (STL/CLR)](../VS_visualcpp/deque--rend--STL-CLR-.md)|Designates the end of the reversed controlled sequence.|  
|[deque::resize (STL/CLR)](../VS_visualcpp/deque--resize--STL-CLR-.md)|Changes the number of elements.|  
|[deque::size (STL/CLR)](../VS_visualcpp/deque--size--STL-CLR-.md)|Counts the number of elements.|  
|[deque::swap (STL/CLR)](../VS_visualcpp/deque--swap--STL-CLR-.md)|Swaps the contents of two containers.|  
|[deque::to_array (STL/CLR)](../VS_visualcpp/deque--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
  
|Property|Description|  
|--------------|-----------------|  
|[deque::back_item (STL/CLR)](../VS_visualcpp/deque--back_item--STL-CLR-.md)|Accesses the last element.|  
|[deque::front_item (STL/CLR)](../VS_visualcpp/deque--front_item--STL-CLR-.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[deque::operator!= (STL/CLR)](../VS_visualcpp/deque--operator!=--STL-CLR-.md)|Determines if two `deque` objects are not equal.|  
|[deque::operator(STL/CLR)](../VS_visualcpp/deque--operator-STL-CLR-.md)|Accesses an element at a specified position.|  
|[operator< (deque) (STL/CLR)](../VS_visualcpp/operator---deque---STL-CLR-.md)|Determines if a `deque` object is less than another `deque` object.|  
|[operator<= (deque) (STL/CLR)](../VS_visualcpp/operator-=--deque---STL-CLR-.md)|Determines if a `deque` object is less than or equal to another `deque` object.|  
|[operator= (deque) (STL/CLR)](../VS_visualcpp/operator=--deque---STL-CLR-.md)|Replaces the controlled sequence.|  
|[operator== (deque) (STL/CLR)](../VS_visualcpp/operator==--deque---STL-CLR-.md)|Determines if a `deque` object is equal to another `deque` object.|  
|[operator> (deque) (STL/CLR)](../VS_visualcpp/operator---deque---STL-CLR-.md)|Determines if a `deque` object is greater than another `deque` object.|  
|[operator>= (deque) (STL/CLR)](../VS_visualcpp/operator-=--deque---STL-CLR-.md)|Determines if a `deque` object is greater than or equal to another `deque` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|<xref:System.Collections.IEnumerable?qualifyHint=False>|Sequence through elements.|  
|<xref:System.Collections.ICollection?qualifyHint=False>|Maintain group of elements.|  
|<xref:System.Collections.Generic.IEnumerable`1?qualifyHint=False>|Sequence through typed elements.|  
|<xref:System.Collections.Generic.ICollection`1?qualifyHint=False>|Maintain group of typed elements.|  
|<xref:System.Collections.Generic.IList`1?qualifyHint=False>|Maintain ordered group of typed elements.|  
|IDeque<Value\>|Maintain generic container.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through a stored array of handles that designate blocks of `Value` elements. The array grows on demand. Growth occurs in such a way that the cost of either prepending or appending a new element is constant time, and no remaining elements are disturbed. You can also remove an element at either end in constant time, and without disturbing remaining elements. Thus, a deque is a good candidate for the underlying container for template class [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md) or template class [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md).  
  
 A `deque` object supports random-access iterators, which means you can refer to an element directly given its numerical position, counting from zero for the first (front) element, to [deque::size (STL/CLR)](../VS_visualcpp/deque--size--STL-CLR-.md)`() - 1` for the last (back) element. It also means that a deque is a good candidate for the underlying container for template class [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md).  
  
 A deque iterator stores a handle to its associated deque object, along with the bias of the element it designates. You can use iterators only with their associated container objects. The bias of a deque element is `not` necessarily the same as its position. The first element inserted has bias zero, the next appended element has bias 1, but the next prepended element has bias -1.  
  
 Inserting or erasing elements at either end does `not` alter the value of an element stored at any valid bias. Inserting or erasing an interior element, however, `can` change the element value stored at a given bias, so the value designated by an iterator can also change. (The container may have to copy elements up or down to create a hole before an insert or to fill a hole after an erase.) Nevertheless, a deque iterator remains valid so long as its bias designates a valid element. Moreover, a valid iterator remains dereferencable -- you can use it to access or alter the element value it designates -- so long as its bias is not equal to the bias for the iterator returned by `end()`.  
  
 Erasing or removing an element calls the destructor for its stored value. Destroying the container erases all elements. Thus, a container whose element type is a ref class ensures that no elements outlive the container. Note, however, that a container of handles does `not` destroy its elements.  
  
## Requirements  
 **Header:** <cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)   
 [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)   
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)   
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)