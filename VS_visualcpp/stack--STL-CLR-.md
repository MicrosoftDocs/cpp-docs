---
title: "stack (STL-CLR)"
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
H1: stack (STL/CLR)
ms.assetid: 6ee96b9f-8a33-4cf7-b7e0-6535c24bdefb
caps.latest.revision: 14
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
# stack (STL-CLR)
The template class describes an object that controls a varying-length sequence of elements that has last-in first-out access. You use the container adapter `stack` to manage an underlying container as a push-down stack.  
  
 In the description below, `GValue` is the same as `Value` unless the latter is a ref type, in which case it is `Value^`. Similarly, `GContainer` is the same as `Container` unless the latter is a ref type, in which case it is `Container^`.  
  
## Syntax  
  
```  
template<typename Value,  
    typename Container>  
    ref class stack  
        :   public  
        System::ICloneable,  
        Microsoft::VisualC::StlClr::IStack<GValue, GContainer>  
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
|[stack::const_reference (STL/CLR)](../VS_visualcpp/stack--const_reference--STL-CLR-.md)|The type of a constant reference to an element.|  
|[stack::container_type (STL/CLR)](../VS_visualcpp/stack--container_type--STL-CLR-.md)|The type of the underlying container.|  
|[stack::difference_type (STL/CLR)](../VS_visualcpp/stack--difference_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[stack::generic_container (STL/CLR)](../VS_visualcpp/stack--generic_container--STL-CLR-.md)|The type of the generic interface for the container adapter.|  
|[stack::generic_value (STL/CLR)](../VS_visualcpp/stack--generic_value--STL-CLR-.md)|The type of an element for the generic interface for the container adapter.|  
|[stack::reference (STL/CLR)](../VS_visualcpp/stack--reference--STL-CLR-.md)|The type of a reference to an element.|  
|[stack::size_type (STL/CLR)](../VS_visualcpp/stack--size_type--STL-CLR-.md)|The type of a signed distance between two elements.|  
|[stack::value_type (STL/CLR)](../VS_visualcpp/stack--value_type--STL-CLR-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[stack::assign (STL/CLR)](../VS_visualcpp/stack--assign--STL-CLR-.md)|Replaces all elements.|  
|[stack::empty (STL/CLR)](../VS_visualcpp/stack--empty--STL-CLR-.md)|Tests whether no elements are present.|  
|[stack::get_container (STL/CLR)](../VS_visualcpp/stack--get_container--STL-CLR-.md)|Accesses the underlying container.|  
|[stack::pop (STL/CLR)](../VS_visualcpp/stack--pop--STL-CLR-.md)|Removes the last element.|  
|[stack::push (STL/CLR)](../VS_visualcpp/stack--push--STL-CLR-.md)|Adds a new last element.|  
|[stack::size (STL/CLR)](../VS_visualcpp/stack--size--STL-CLR-.md)|Counts the number of elements.|  
|[stack::stack (STL/CLR)](../VS_visualcpp/stack--stack--STL-CLR-.md)|Constructs a container object.|  
|[stack::top (STL/CLR)](../VS_visualcpp/stack--top--STL-CLR-.md)|Accesses the last element.|  
|[stack::to_array (STL/CLR)](../VS_visualcpp/stack--to_array--STL-CLR-.md)|Copies the controlled sequence to a new array.|  
  
|Property|Description|  
|--------------|-----------------|  
|[stack::top_item (STL/CLR)](../VS_visualcpp/stack--top_item--STL-CLR-.md)|Accesses the last element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[stack::operator= (STL/CLR)](../VS_visualcpp/stack--operator=--STL-CLR-.md)|Replaces the controlled sequence.|  
|[operator!= (stack) (STL/CLR)](../VS_visualcpp/operator!=--stack---STL-CLR-.md)|Determines if a `stack` object is not equal to another `stack` object.|  
|[operator< (stack) (STL/CLR)](../VS_visualcpp/operator---stack---STL-CLR-.md)|Determines if a `stack` object is less than another `stack` object.|  
|[operator<= (stack) (STL/CLR)](../VS_visualcpp/operator-=--stack---STL-CLR-.md)|Determines if a `stack` object is less than or equal to another `stack` object.|  
|[operator== (stack) (STL/CLR)](../VS_visualcpp/operator==--stack---STL-CLR-.md)|Determines if a `stack` object is equal to another `stack` object.|  
|[operator> (stack) (STL/CLR)](../VS_visualcpp/operator---stack---STL-CLR-.md)|Determines if a `stack` object is greater than another `stack` object.|  
|[operator>= (stack) (STL/CLR)](../VS_visualcpp/operator-=--stack---STL-CLR-.md)|Determines if a `stack` object is greater than or equal to another `stack` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable?qualifyHint=False>|Duplicate an object.|  
|IStack<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. The object restricts access to pushing and popping just the last element, implementing a last-in first-out queue (also known as a LIFO queue, or stack).  
  
## Requirements  
 **Header:** <cliext/stack>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)   
 [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)   
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [STL/CLR Library Reference](../VS_visualcpp/STL-CLR-Library-Reference.md)