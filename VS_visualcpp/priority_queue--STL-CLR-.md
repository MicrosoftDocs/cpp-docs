---
title: "priority_queue (STL-CLR)"
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
H1: priority_queue (STL/CLR)
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
caps.latest.revision: 16
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
# priority_queue (STL-CLR)
The template class describes an object that controls a varying-length ordered sequence of elements that has limited access. You use the container adapter `priority_queue` to manage an underlying container as a priority queue.  
  
 In the description below, `GValue` is the same as `Value` unless the latter is a ref type, in which case it is `Value^`. Similarly, `GContainer` is the same as `Container` unless the latter is a ref type, in which case it is `Container^`.  
  
## Syntax  
  
```  
template<typename Value,  
    typename Container>  
    ref class priority_queue  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IPriorityQueue<GValue, GContainer>  
    { ..... };  
```  
  
#### Parameters  
 Value  
 The type of an element in the controlled sequence.  
  
 Container  
 The type of the underlying container.  
  
## Members  
  
|Type Definition|Description|  
|---------------------|-----------------|  
|[priority_queue::const_reference (STL/CLR)](../VS_visualcpp/priority_queue--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[priority_queue::container_type (STL/CLR)](../VS_visualcpp/priority_queue--container_type--STL-CLR-.md)|The type of the underlying container.|  
|[priority_queue::difference_type (STL/CLR)](../VS_visualcpp/priority_queue--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[priority_queue::generic_container (STL/CLR)](../VS_visualcpp/priority_queue--generic_container--STL-CLR-.md)|The type of the generic interface for the container adapter.|  
|[priority_queue::generic_value (STL/CLR)](../VS_visualcpp/priority_queue--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container adapter.|  
|[priority_queue::reference (STL/CLR)](../VS_visualcpp/priority_queue--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[priority_queue::size_type (STL/CLR)](../VS_visualcpp/priority_queue--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[priority_queue::value_compare (STL/CLR)](../VS_visualcpp/priority_queue--value_compare--STL-CLR-.md)|The ordering delegate for two elements.|  
|[priority_queue::value_type (STL/CLR)](../VS_visualcpp/priority_queue--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[priority_queue::assign (STL/CLR)](../VS_visualcpp/priority_queue--assign--STL-CLR-.md)|Replaces all elements.|  
|[priority_queue::empty (STL/CLR)](../VS_visualcpp/priority_queue--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[priority_queue::get_container (STL/CLR)](../VS_visualcpp/priority_queue--get_container--STL-CLR-.md)|Accesses the underlying container.|  
|[priority_queue::pop (STL/CLR)](../VS_visualcpp/priority_queue--pop--STL-CLR-.md)|Removes the hghest-priority element.|  
|[priority_queue::priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--priority_queue--STL-CLR-.md)|Constructs a container object.|  
|[priority_queue::push (STL/CLR)](../VS_visualcpp/priority_queue--push--STL-CLR-.md)|Adds a new element.|  
|[priority_queue::size (STL/CLR)](../VS_visualcpp/priority_queue--size--STL-CLR-.md)|Counts the number of elements.|  
|[priority_queue::top (STL/CLR)](../VS_visualcpp/priority_queue--top--STL-CLR-.md)|Accesses the highest-priority element.|  
|[priority_queue::to_array (STL/CLR)](../VS_visualcpp/priority_queue--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
|[priority_queue::value_comp (STL/CLR)](../VS_visualcpp/priority_queue--value_comp--STL-CLR-.md)|Copies the ordering delegate for two elements.|  
  
|Property|Description|  
|--------------|-----------------|  
|[priority_queue::top_item (STL/CLR)](../VS_visualcpp/priority_queue--top_item--STL-CLR-.md)|Accesses the highest-priority element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[priority_queue::operator= (STL/CLR)](../VS_visualcpp/priority_queue--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|IPriorityQueue<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. It keeps the sequence ordered as a heap, with the highest-priority element (the top element) readily accessible and removable. The object restricts access to pushing new elements and popping just the highest-priority element, implementing a priority queue.  
  
 The object orders the sequence it controls by calling a stored delegate object of type [priority_queue::value_compare (STL/CLR)](../VS_visualcpp/priority_queue--value_compare--STL-CLR-.md). You can specify the stored delegate object when you construct the priority_queue; if you specify no delegate object, the default is the comparison `operator<(value_type, value_type)`. You access this stored object by calling the member function [priority_queue::value_comp (STL/CLR)](../VS_visualcpp/priority_queue--value_comp--STL-CLR-.md)`()`.  
  
 Such a delegate object must impose a strict weak ordering on values of type [priority_queue::value_type (STL/CLR)](../VS_visualcpp/priority_queue--value_type--STL-CLR-.md). That means, for any two keys `X` and `Y`:  
  
 `value_comp()(X, Y)` returns the same Boolean result on every call.  
  
 If `value_comp()(X, Y)` is true, then `value_comp()(Y, X)` must be false.  
  
 If `value_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.  
  
 If `!value_comp()(X, Y) && !value_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.  
  
 For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.)  
  
 The highest priority element is thus one of the elements which is not ordered before any other element.  
  
 Since the underlying container keeps elements ordered as a heap:  
  
 The container must support random-access iterators.  
  
 Elements with equivalent ordering may be popped in a different order than they were pushed. (The ordering is not stable.)  
  
 Thus, candidates for the underlying container include [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md) and [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md).  
  
## Requirements  
 **Header:** <cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)   
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)