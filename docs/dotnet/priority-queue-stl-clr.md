---
title: "priority_queue (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::priority_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "priority_queue class [STL/CLR]"
  - "<queue> header [STL/CLR]"
  - "<cliext/queue> header [STL/CLR]"
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
caps.latest.revision: 16
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
# priority_queue (STL/CLR)
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
|[priority_queue::const_reference (STL/CLR)](../dotnet/priority-queue-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[priority_queue::container_type (STL/CLR)](../dotnet/priority-queue-container-type-stl-clr.md)|The type of the underlying container.|  
|[priority_queue::difference_type (STL/CLR)](../dotnet/priority-queue-difference-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[priority_queue::generic_container (STL/CLR)](../dotnet/priority-queue-generic-container-stl-clr.md)|The type of the generic interface for the container adapter.|  
|[priority_queue::generic_value (STL/CLR)](../dotnet/priority-queue-generic-value-stl-clr.md)|The type of an element for the generic interface for the container adapter.|  
|[priority_queue::reference (STL/CLR)](../dotnet/priority-queue-reference-stl-clr.md)|The type of a reference to an element.|  
|[priority_queue::size_type (STL/CLR)](../dotnet/priority-queue-size-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[priority_queue::value_compare (STL/CLR)](../dotnet/priority-queue-value-compare-stl-clr.md)|The ordering delegate for two elements.|  
|[priority_queue::value_type (STL/CLR)](../dotnet/priority-queue-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[priority_queue::assign (STL/CLR)](../dotnet/priority-queue-assign-stl-clr.md)|Replaces all elements.|  
|[priority_queue::empty (STL/CLR)](../dotnet/priority-queue-empty-stl-clr.md)|Tests whether no elements are present.|  
|[priority_queue::get_container (STL/CLR)](../dotnet/priority-queue-get-container-stl-clr.md)|Accesses the underlying container.|  
|[priority_queue::pop (STL/CLR)](../dotnet/priority-queue-pop-stl-clr.md)|Removes the hghest-priority element.|  
|[priority_queue::priority_queue (STL/CLR)](../dotnet/priority-queue-priority-queue-stl-clr.md)|Constructs a container object.|  
|[priority_queue::push (STL/CLR)](../dotnet/priority-queue-push-stl-clr.md)|Adds a new element.|  
|[priority_queue::size (STL/CLR)](../dotnet/priority-queue-size-stl-clr.md)|Counts the number of elements.|  
|[priority_queue::top (STL/CLR)](../dotnet/priority-queue-top-stl-clr.md)|Accesses the highest-priority element.|  
|[priority_queue::to_array (STL/CLR)](../dotnet/priority-queue-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
|[priority_queue::value_comp (STL/CLR)](../dotnet/priority-queue-value-comp-stl-clr.md)|Copies the ordering delegate for two elements.|  
  
|Property|Description|  
|--------------|-----------------|  
|[priority_queue::top_item (STL/CLR)](../dotnet/priority-queue-top-item-stl-clr.md)|Accesses the highest-priority element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[priority_queue::operator= (STL/CLR)](../dotnet/priority-queue-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicate an object.|  
|IPriorityQueue\<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. It keeps the sequence ordered as a heap, with the highest-priority element (the top element) readily accessible and removable. The object restricts access to pushing new elements and popping just the highest-priority element, implementing a priority queue.  
  
 The object orders the sequence it controls by calling a stored delegate object of type [priority_queue::value_compare (STL/CLR)](../dotnet/priority-queue-value-compare-stl-clr.md). You can specify the stored delegate object when you construct the priority_queue; if you specify no delegate object, the default is the comparison `operator<(value_type, value_type)`. You access this stored object by calling the member function [priority_queue::value_comp (STL/CLR)](../dotnet/priority-queue-value-comp-stl-clr.md)`()`.  
  
 Such a delegate object must impose a strict weak ordering on values of type [priority_queue::value_type (STL/CLR)](../dotnet/priority-queue-value-type-stl-clr.md). That means, for any two keys `X` and `Y`:  
  
 `value_comp()(X, Y)` returns the same Boolean result on every call.  
  
 If `value_comp()(X, Y)` is true, then `value_comp()(Y, X)` must be false.  
  
 If `value_comp()(X, Y)` is true, then `X` is said to be ordered before `Y`.  
  
 If `!value_comp()(X, Y) && !value_comp()(Y, X)` is true, then `X` and `Y` are said to have equivalent ordering.  
  
 For any element `X` that precedes `Y` in the controlled sequence, `key_comp()(Y, X)` is false. (For the default delegate object, keys never decrease in value.)  
  
 The highest priority element is thus one of the elements which is not ordered before any other element.  
  
 Since the underlying container keeps elements ordered as a heap:  
  
 The container must support random-access iterators.  
  
 Elements with equivalent ordering may be popped in a different order than they were pushed. (The ordering is not stable.)  
  
 Thus, candidates for the underlying container include [deque (STL/CLR)](../dotnet/deque-stl-clr.md) and [vector (STL/CLR)](../dotnet/vector-stl-clr.md).  
  
## Requirements  
 **Header:** \<cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [queue (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)