---
title: "Sample Container Members"
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
ms.topic: article
ms.assetid: dc5a1998-a31b-4adf-b888-8abe5b87a4e0
caps.latest.revision: 8
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
# Sample Container Members
> [!NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../VS_visualcpp/STL-Containers.md).  
  
## Reference  
  
## Typedefs  
  
|||  
|-|-|  
|[const_iterator](../VS_visualcpp/Container-Class--const_iterator.md)|Describes an object that can serve as a constant iterator for the controlled sequence.|  
|[const_reference](../VS_visualcpp/Container-Class--const_reference.md)|Describes an object that can serve as a constant reference to an element of the controlled sequence.|  
|[const_reverse_iterator](../VS_visualcpp/Container-Class--const_reverse_iterator.md)|Describes an object that can serve as a constant reverse iterator for the controlled sequence.|  
|[difference_type](../VS_visualcpp/Container-Class--difference_type.md)|Describes an object that can represent the difference between the addresses of any two elements in the controlled sequence.|  
|[iterator](../VS_visualcpp/Container-Class--iterator.md)|Describes an object that can serve as an iterator for the controlled sequence.|  
|[reference](../VS_visualcpp/Container-Class--reference.md)|Describes an object that can serve as a reference to an element of the controlled sequence.|  
|[reverse_iterator](../VS_visualcpp/Container-Class--reverse_iterator.md)|Describes an object that can serve as a reverse iterator for the controlled sequence.|  
|[size_type](../VS_visualcpp/Container-Class--size_type.md)|Describes an object that can represent the length of any controlled sequence.|  
|[value_type](../VS_visualcpp/Container-Class--value_type.md)|Acts a synonym for the template parameter **Ty**.|  
  
## Member Functions  
  
|||  
|-|-|  
|[begin](../VS_visualcpp/Container-Class--begin.md)|Returns an iterator that points at the first element of the sequence (or just beyond the end of an empty sequence).|  
|[clear](../VS_visualcpp/Container-Class--clear.md)|Calls [erase](../VS_visualcpp/Container-Class--erase.md)( [begin](../VS_visualcpp/Container-Class--begin.md), [end](../VS_visualcpp/Container-Class--end.md)).|  
|[empty](../VS_visualcpp/Container-Class--empty.md)|Returns **true** for an empty controlled sequence.|  
|[end](../VS_visualcpp/Container-Class--end.md)|Returns an iterator that points just beyond the end of the sequence.|  
|[erase](../VS_visualcpp/Container-Class--erase.md)|Erases an element.|  
|[max_size](../VS_visualcpp/Container-Class--max_size.md)|Returns the length of the longest sequence that the object can control, in constant time regardless of the length of the controlled sequence.|  
|[rbegin](../VS_visualcpp/Container-Class--rbegin.md)|Returns a reverse iterator that points just beyond the end of the controlled sequence, designating the beginning of the reverse sequence.|  
|[rend](../VS_visualcpp/Container-Class--rend.md)|The member function returns a reverse iterator that points at the first element of the sequence (or just beyond the end of an empty sequence), designating the end of the reverse sequence.|  
|[size](../VS_visualcpp/Container-Class--size.md)|Returns the length of the controlled sequence, in constant time regardless of the length of the controlled sequence.|  
|[swap](../VS_visualcpp/Container-Class--swap.md)|Swaps the controlled sequences between **\*this** and `_Right`.|