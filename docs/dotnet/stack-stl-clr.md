---
title: "stack (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
|[stack::const_reference (STL/CLR)](../dotnet/stack-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[stack::container_type (STL/CLR)](../dotnet/stack-container-type-stl-clr.md)|The type of the underlying container.|  
|[stack::difference_type (STL/CLR)](../dotnet/stack-difference-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[stack::generic_container (STL/CLR)](../dotnet/stack-generic-container-stl-clr.md)|The type of the generic interface for the container adapter.|  
|[stack::generic_value (STL/CLR)](../dotnet/stack-generic-value-stl-clr.md)|The type of an element for the generic interface for the container adapter.|  
|[stack::reference (STL/CLR)](../dotnet/stack-reference-stl-clr.md)|The type of a reference to an element.|  
|[stack::size_type (STL/CLR)](../dotnet/stack-size-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[stack::value_type (STL/CLR)](../dotnet/stack-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[stack::assign (STL/CLR)](../dotnet/stack-assign-stl-clr.md)|Replaces all elements.|  
|[stack::empty (STL/CLR)](../dotnet/stack-empty-stl-clr.md)|Tests whether no elements are present.|  
|[stack::get_container (STL/CLR)](../dotnet/stack-get-container-stl-clr.md)|Accesses the underlying container.|  
|[stack::pop (STL/CLR)](../dotnet/stack-pop-stl-clr.md)|Removes the last element.|  
|[stack::push (STL/CLR)](../dotnet/stack-push-stl-clr.md)|Adds a new last element.|  
|[stack::size (STL/CLR)](../dotnet/stack-size-stl-clr.md)|Counts the number of elements.|  
|[stack::stack (STL/CLR)](../dotnet/stack-stack-stl-clr.md)|Constructs a container object.|  
|[stack::top (STL/CLR)](../dotnet/stack-top-stl-clr.md)|Accesses the last element.|  
|[stack::to_array (STL/CLR)](../dotnet/stack-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
  
|Property|Description|  
|--------------|-----------------|  
|[stack::top_item (STL/CLR)](../dotnet/stack-top-item-stl-clr.md)|Accesses the last element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[stack::operator= (STL/CLR)](../dotnet/stack-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
|[operator!= (stack) (STL/CLR)](../dotnet/operator-inequality-stack-stl-clr.md)|Determines if a `stack` object is not equal to another `stack` object.|  
|[operator< (stack) (STL/CLR)](../dotnet/operator-less-than-stack-stl-clr.md)|Determines if a `stack` object is less than another `stack` object.|  
|[operator<= (stack) (STL/CLR)](../dotnet/operator-less-or-equal-stack-stl-clr.md)|Determines if a `stack` object is less than or equal to another `stack` object.|  
|[operator== (stack) (STL/CLR)](../dotnet/operator-equality-stack-stl-clr.md)|Determines if a `stack` object is equal to another `stack` object.|  
|[operator> (stack) (STL/CLR)](../dotnet/operator-greater-than-stack-stl-clr.md)|Determines if a `stack` object is greater than another `stack` object.|  
|[operator>= (stack) (STL/CLR)](../dotnet/operator-greater-or-equal-stack-stl-clr.md)|Determines if a `stack` object is greater than or equal to another `stack` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicate an object.|  
|IStack\<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. The object restricts access to pushing and popping just the last element, implementing a last-in first-out queue (also known as a LIFO queue, or stack).  
  
## Requirements  
 **Header:** \<cliext/stack>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [list (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [queue (STL/CLR)](../dotnet/queue-stl-clr.md)   
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)