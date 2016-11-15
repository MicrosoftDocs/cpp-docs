---
title: "Sample Container Members | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "container classes"
ms.assetid: dc5a1998-a31b-4adf-b888-8abe5b87a4e0
caps.latest.revision: 9
author: "corob-msft"
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
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
## Reference  
  
## Typedefs  
  
|||  
|-|-|  
|[const_iterator](../standard-library/container-class-const-iterator.md)|Describes an object that can serve as a constant iterator for the controlled sequence.|  
|[const_reference](../standard-library/container-class-const-reference.md)|Describes an object that can serve as a constant reference to an element of the controlled sequence.|  
|[const_reverse_iterator](../standard-library/container-class-const-reverse-iterator.md)|Describes an object that can serve as a constant reverse iterator for the controlled sequence.|  
|[difference_type](../standard-library/container-class-difference-type.md)|Describes an object that can represent the difference between the addresses of any two elements in the controlled sequence.|  
|[iterator](../standard-library/container-class-iterator.md)|Describes an object that can serve as an iterator for the controlled sequence.|  
|[reference](../standard-library/container-class-reference.md)|Describes an object that can serve as a reference to an element of the controlled sequence.|  
|[reverse_iterator](../standard-library/container-class-reverse-iterator.md)|Describes an object that can serve as a reverse iterator for the controlled sequence.|  
|[size_type](../standard-library/container-class-size-type.md)|Describes an object that can represent the length of any controlled sequence.|  
|[value_type](../standard-library/container-class-value-type.md)|Acts a synonym for the template parameter **Ty**.|  
  
## Member Functions  
  
|||  
|-|-|  
|[begin](../standard-library/container-class-begin.md)|Returns an iterator that points at the first element of the sequence (or just beyond the end of an empty sequence).|  
|[clear](../standard-library/container-class-clear.md)|Calls [erase](../standard-library/container-class-erase.md)( [begin](../standard-library/container-class-begin.md), [end](../standard-library/container-class-end.md)).|  
|[empty](../standard-library/container-class-empty.md)|Returns **true** for an empty controlled sequence.|  
|[end](../standard-library/container-class-end.md)|Returns an iterator that points just beyond the end of the sequence.|  
|[erase](../standard-library/container-class-erase.md)|Erases an element.|  
|[max_size](../standard-library/container-class-max-size.md)|Returns the length of the longest sequence that the object can control, in constant time regardless of the length of the controlled sequence.|  
|[rbegin](../standard-library/container-class-rbegin.md)|Returns a reverse iterator that points just beyond the end of the controlled sequence, designating the beginning of the reverse sequence.|  
|[rend](../standard-library/container-class-rend.md)|The member function returns a reverse iterator that points at the first element of the sequence (or just beyond the end of an empty sequence), designating the end of the reverse sequence.|  
|[size](../standard-library/container-class-size.md)|Returns the length of the controlled sequence, in constant time regardless of the length of the controlled sequence.|  
|[swap](../standard-library/container-class-swap.md)
