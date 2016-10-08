---
title: "queue (STL-CLR)"
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
H1: queue (STL/CLR)
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
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
# queue (STL-CLR)
The template class describes an object that controls a varying-length sequence of elements that has first-in first-out access. You use the container adapter `queue` to manage an underlying container as a queue.  
  
 In the description below, `GValue` is the same as `Value` unless the latter is a ref type, in which case it is `Value^`. Similarly, `GContainer` is the same as `Container` unless the latter is a ref type, in which case it is `Container^`.  
  
## Syntax  
  
```  
template<typename Value,  
    typename Container>  
    ref class queue  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IQueue<GValue, GContainer>  
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
|[queue::const_reference (STL/CLR)](../VS_visualcpp/queue--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[queue::container_type (STL/CLR)](../VS_visualcpp/queue--container_type--STL-CLR-.md)|The type of the underlying container.|  
|[queue::difference_type (STL/CLR)](../VS_visualcpp/queue--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[queue::generic_container (STL/CLR)](../VS_visualcpp/queue--generic_container--STL-CLR-.md)|The type of the generic interface for the container adapter.|  
|[queue::generic_value (STL/CLR)](../VS_visualcpp/queue--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container adapter.|  
|[queue::reference (STL/CLR)](../VS_visualcpp/queue--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[queue::size_type (STL/CLR)](../VS_visualcpp/queue--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[queue::value_type (STL/CLR)](../VS_visualcpp/queue--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[queue::assign (STL/CLR)](../VS_visualcpp/queue--assign--STL-CLR-.md)|Replaces all elements.|  
|[queue::back (STL/CLR)](../VS_visualcpp/queue--back--STL-CLR-.md)|Accesses the last element.|  
|[queue::empty (STL/CLR)](../VS_visualcpp/queue--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[queue::front (STL/CLR)](../VS_visualcpp/queue--front--STL-CLR-.md)|Accesses the first element.|  
|[queue::get_container (STL/CLR)](../VS_visualcpp/queue--get_container--STL-CLR-.md)|Accesses the underlying container.|  
|[queue::pop (STL/CLR)](../VS_visualcpp/queue--pop--STL-CLR-.md)|Removes the first element.|  
|[queue::push (STL/CLR)](../VS_visualcpp/queue--push--STL-CLR-.md)|Adds a new last element.|  
|[queue::queue (STL/CLR)](../VS_visualcpp/queue--queue--STL-CLR-.md)|Constructs a container object.|  
|[queue::size (STL/CLR)](../VS_visualcpp/queue--size--STL-CLR-.md)|Counts the number of elements.|  
|[queue::to_array (STL/CLR)](../VS_visualcpp/queue--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
  
|Property|Description|  
|--------------|-----------------|  
|[queue::back_item (STL/CLR)](../VS_visualcpp/queue--back_item--STL-CLR-.md)|Accesses the last element.|  
|[queue::front_item (STL/CLR)](../VS_visualcpp/queue--front_item--STL-CLR-.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[queue::operator= (STL/CLR)](../VS_visualcpp/queue--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
|[operator!= (queue) (STL/CLR)](../VS_visualcpp/operator!=--queue---STL-CLR-.md)|Determines if a `queue` object is not equal to another `queue` object.|  
|[operator< (queue) (STL/CLR)](../VS_visualcpp/operator---queue---STL-CLR-.md)|Determines if a `queue` object is less than another `queue` object.|  
|[operator<= (queue) (STL/CLR)](../VS_visualcpp/operator-=--queue---STL-CLR-.md)|Determines if a `queue` object is less than or equal to another `queue` object.|  
|[operator== (queue) (STL/CLR)](../VS_visualcpp/operator==--queue---STL-CLR-.md)|Determines if a `queue` object is equal to another `queue` object.|  
|[operator> (queue) (STL/CLR)](../VS_visualcpp/operator---queue---STL-CLR-.md)|Determines if a `queue` object is greater than another `queue` object.|  
|[operator>= (queue) (STL/CLR)](../VS_visualcpp/operator-=--queue---STL-CLR-.md)|Determines if a `queue` object is greater than or equal to another `queue` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|IQueue<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. The object restricts access to just pushing the first element and popping the last element, implementing a first-in first-out queue (also known as a FIFO queue, or simply a queue).  
  
## Requirements  
 **Header:** <cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)   
 [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)   
 [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)   
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)