---
title: "stack (STL-CLR)"
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
  - "cliext::stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<stack> header [STL/CLR]"
  - "<cliext/stack> header [STL/CLR]"
  - "stack class [STL/CLR]"
ms.assetid: 6ee96b9f-8a33-4cf7-b7e0-6535c24bdefb
caps.latest.revision: 14
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
# stack (STL/CLR)
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
|[stack::const_reference (STL/CLR)](../cli/stack--const_reference--stl-clr-.md)|The type of a constant reference to an element.|  
|[stack::container_type (STL/CLR)](../cli/stack--container_type--stl-clr-.md)|The type of the underlying container.|  
|[stack::difference_type (STL/CLR)](../cli/stack--difference_type--stl-clr-.md)|The type of a signed distance between two elements.|  
|[stack::generic_container (STL/CLR)](../cli/stack--generic_container--stl-clr-.md)|The type of the generic interface for the container adapter.|  
|[stack::generic_value (STL/CLR)](../cli/stack--generic_value--stl-clr-.md)|The type of an element for the generic interface for the container adapter.|  
|[stack::reference (STL/CLR)](../cli/stack--reference--stl-clr-.md)|The type of a reference to an element.|  
|[stack::size_type (STL/CLR)](../cli/stack--size_type--stl-clr-.md)|The type of a signed distance between two elements.|  
|[stack::value_type (STL/CLR)](../cli/stack--value_type--stl-clr-.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[stack::assign (STL/CLR)](../cli/stack--assign--stl-clr-.md)|Replaces all elements.|  
|[stack::empty (STL/CLR)](../cli/stack--empty--stl-clr-.md)|Tests whether no elements are present.|  
|[stack::get_container (STL/CLR)](../cli/stack--get_container--stl-clr-.md)|Accesses the underlying container.|  
|[stack::pop (STL/CLR)](../cli/stack--pop--stl-clr-.md)|Removes the last element.|  
|[stack::push (STL/CLR)](../cli/stack--push--stl-clr-.md)|Adds a new last element.|  
|[stack::size (STL/CLR)](../cli/stack--size--stl-clr-.md)|Counts the number of elements.|  
|[stack::stack (STL/CLR)](../cli/stack--stack--stl-clr-.md)|Constructs a container object.|  
|[stack::top (STL/CLR)](../cli/stack--top--stl-clr-.md)|Accesses the last element.|  
|[stack::to_array (STL/CLR)](../cli/stack--to_array--stl-clr-.md)|Copies the controlled sequence to a new array.|  
  
|Property|Description|  
|--------------|-----------------|  
|[stack::top_item (STL/CLR)](../cli/stack--top_item--stl-clr-.md)|Accesses the last element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[stack::operator= (STL/CLR)](../cli/stack--operator=--stl-clr-.md)|Replaces the controlled sequence.|  
|[operator!= (stack) (STL/CLR)](../cli/operator!=--stack---stl-clr-.md)|Determines if a `stack` object is not equal to another `stack` object.|  
|[operator< (stack) (STL/CLR)](../cli/operator---stack---stl-clr-.md)|Determines if a `stack` object is less than another `stack` object.|  
|[operator<= (stack) (STL/CLR)](../cli/operator-=--stack---stl-clr-.md)|Determines if a `stack` object is less than or equal to another `stack` object.|  
|[operator== (stack) (STL/CLR)](../cli/operator==--stack---stl-clr-.md)|Determines if a `stack` object is equal to another `stack` object.|  
|[operator> (stack) (STL/CLR)](../cli/operator---stack---stl-clr-.md)|Determines if a `stack` object is greater than another `stack` object.|  
|[operator>= (stack) (STL/CLR)](../cli/operator-=--stack---stl-clr-.md)|Determines if a `stack` object is greater than or equal to another `stack` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|\<xref:System.ICloneable>|Duplicate an object.|  
|IStack\<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. The object restricts access to pushing and popping just the last element, implementing a last-in first-out queue (also known as a LIFO queue, or stack).  
  
## Requirements  
 **Header:** \<cliext/stack>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../cli/deque--stl-clr-.md)   
 [list (STL/CLR)](../cli/list--stl-clr-.md)   
 [priority_queue (STL/CLR)](../cli/priority_queue--stl-clr-.md)   
 [queue (STL/CLR)](../cli/queue--stl-clr-.md)   
 [vector (STL/CLR)](../cli/vector--stl-clr-.md)   
 [STL/CLR Library Reference](../cli/stl-clr-library-reference.md)