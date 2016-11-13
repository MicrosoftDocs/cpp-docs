---
title: "queue (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<queue> header [STL/CLR]"
  - "queue class [STL/CLR]"
  - "<cliext/queue> header [STL/CLR]"
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
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
# queue (STL/CLR)
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
|[queue::const_reference (STL/CLR)](../dotnet/queue-const-reference-stl-clr.md)|The type of a constant reference to an element.|  
|[queue::container_type (STL/CLR)](../dotnet/queue-container-type-stl-clr.md)|The type of the underlying container.|  
|[queue::difference_type (STL/CLR)](../dotnet/queue-difference-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[queue::generic_container (STL/CLR)](../dotnet/queue-generic-container-stl-clr.md)|The type of the generic interface for the container adapter.|  
|[queue::generic_value (STL/CLR)](../dotnet/queue-generic-value-stl-clr.md)|The type of an element for the generic interface for the container adapter.|  
|[queue::reference (STL/CLR)](../dotnet/queue-reference-stl-clr.md)|The type of a reference to an element.|  
|[queue::size_type (STL/CLR)](../dotnet/queue-size-type-stl-clr.md)|The type of a signed distance between two elements.|  
|[queue::value_type (STL/CLR)](../dotnet/queue-value-type-stl-clr.md)|The type of an element.|  
  
|Member Function|Description|  
|---------------------|-----------------|  
|[queue::assign (STL/CLR)](../dotnet/queue-assign-stl-clr.md)|Replaces all elements.|  
|[queue::back (STL/CLR)](../dotnet/queue-back-stl-clr.md)|Accesses the last element.|  
|[queue::empty (STL/CLR)](../dotnet/queue-empty-stl-clr.md)|Tests whether no elements are present.|  
|[queue::front (STL/CLR)](../dotnet/queue-front-stl-clr.md)|Accesses the first element.|  
|[queue::get_container (STL/CLR)](../dotnet/queue-get-container-stl-clr.md)|Accesses the underlying container.|  
|[queue::pop (STL/CLR)](../dotnet/queue-pop-stl-clr.md)|Removes the first element.|  
|[queue::push (STL/CLR)](../dotnet/queue-push-stl-clr.md)|Adds a new last element.|  
|[queue::queue (STL/CLR)](../dotnet/queue-queue-stl-clr.md)|Constructs a container object.|  
|[queue::size (STL/CLR)](../dotnet/queue-size-stl-clr.md)|Counts the number of elements.|  
|[queue::to_array (STL/CLR)](../dotnet/queue-to-array-stl-clr.md)|Copies the controlled sequence to a new array.|  
  
|Property|Description|  
|--------------|-----------------|  
|[queue::back_item (STL/CLR)](../dotnet/queue-back-item-stl-clr.md)|Accesses the last element.|  
|[queue::front_item (STL/CLR)](../dotnet/queue-front-item-stl-clr.md)|Accesses the first element.|  
  
|Operator|Description|  
|--------------|-----------------|  
|[queue::operator= (STL/CLR)](../dotnet/queue-operator-assign-stl-clr.md)|Replaces the controlled sequence.|  
|[operator!= (queue) (STL/CLR)](../dotnet/operator-inequality-queue-stl-clr.md)|Determines if a `queue` object is not equal to another `queue` object.|  
|[operator< (queue) (STL/CLR)](../dotnet/operator-less-than-queue-stl-clr.md)|Determines if a `queue` object is less than another `queue` object.|  
|[operator<= (queue) (STL/CLR)](../dotnet/operator-less-or-equal-queue-stl-clr.md)|Determines if a `queue` object is less than or equal to another `queue` object.|  
|[operator== (queue) (STL/CLR)](../dotnet/operator-equality-queue-stl-clr.md)|Determines if a `queue` object is equal to another `queue` object.|  
|[operator> (queue) (STL/CLR)](../dotnet/operator-greater-than-queue-stl-clr.md)|Determines if a `queue` object is greater than another `queue` object.|  
|[operator>= (queue) (STL/CLR)](../dotnet/operator-greater-or-equal-queue-stl-clr.md)|Determines if a `queue` object is greater than or equal to another `queue` object.|  
  
## Interfaces  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.ICloneable>|Duplicate an object.|  
|IQueue\<Value, Container>|Maintain generic container adapter.|  
  
## Remarks  
 The object allocates and frees storage for the sequence it controls through an underlying container, of type `Container`, that stores `Value` elements and grows on demand. The object restricts access to just pushing the first element and popping the last element, implementing a first-in first-out queue (also known as a FIFO queue, or simply a queue).  
  
## Requirements  
 **Header:** \<cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [list (STL/CLR)](../dotnet/list-stl-clr.md)   
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)