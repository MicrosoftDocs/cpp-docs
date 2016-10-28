---
title: "Sample Container Members"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "container classes"
ms.assetid: dc5a1998-a31b-4adf-b888-8abe5b87a4e0
caps.latest.revision: 8
ms.author: "corob"
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
# Sample Container Members
> [!NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../stdcpplib/stl-containers.md).  
  
## Reference  
  
## Typedefs  
  
|||  
|-|-|  
|[const_iterator](../stdcpplib/container-class--const_iterator.md)|Describes an object that can serve as a constant iterator for the controlled sequence.|  
|[const_reference](../stdcpplib/container-class--const_reference.md)|Describes an object that can serve as a constant reference to an element of the controlled sequence.|  
|[const_reverse_iterator](../stdcpplib/container-class--const_reverse_iterator.md)|Describes an object that can serve as a constant reverse iterator for the controlled sequence.|  
|[difference_type](../stdcpplib/container-class--difference_type.md)|Describes an object that can represent the difference between the addresses of any two elements in the controlled sequence.|  
|[iterator](../stdcpplib/container-class--iterator.md)|Describes an object that can serve as an iterator for the controlled sequence.|  
|[reference](../stdcpplib/container-class--reference.md)|Describes an object that can serve as a reference to an element of the controlled sequence.|  
|[reverse_iterator](../stdcpplib/container-class--reverse_iterator.md)|Describes an object that can serve as a reverse iterator for the controlled sequence.|  
|[size_type](../stdcpplib/container-class--size_type.md)|Describes an object that can represent the length of any controlled sequence.|  
|[value_type](../stdcpplib/container-class--value_type.md)|Acts a synonym for the template parameter **Ty**.|  
  
## Member Functions  
  
|||  
|-|-|  
|[begin](../stdcpplib/container-class--begin.md)|Returns an iterator that points at the first element of the sequence (or just beyond the end of an empty sequence).|  
|[clear](../stdcpplib/container-class--clear.md)|Calls [erase](../stdcpplib/container-class--erase.md)( [begin](../stdcpplib/container-class--begin.md), [end](../stdcpplib/container-class--end.md)).|  
|[empty](../stdcpplib/container-class--empty.md)|Returns **true** for an empty controlled sequence.|  
|[end](../stdcpplib/container-class--end.md)|Returns an iterator that points just beyond the end of the sequence.|  
|[erase](../stdcpplib/container-class--erase.md)|Erases an element.|  
|[max_size](../stdcpplib/container-class--max_size.md)|Returns the length of the longest sequence that the object can control, in constant time regardless of the length of the controlled sequence.|  
|[rbegin](../stdcpplib/container-class--rbegin.md)|Returns a reverse iterator that points just beyond the end of the controlled sequence, designating the beginning of the reverse sequence.|  
|[rend](../stdcpplib/container-class--rend.md)|The member function returns a reverse iterator that points at the first element of the sequence (or just beyond the end of an empty sequence), designating the end of the reverse sequence.|  
|[size](../stdcpplib/container-class--size.md)|Returns the length of the controlled sequence, in constant time regardless of the length of the controlled sequence.|  
|[swap](../stdcpplib/container-class--swap.md)|Swaps the controlled sequences between **\*this** and `_Right`.|