---
title: "count_if (STL-CLR)"
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
H1: count_if (STL/CLR)
ms.assetid: a8aa149d-20b8-4b3f-917b-1ec66f178a5d
caps.latest.revision: 4
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
# count_if (STL-CLR)
Returns the number of elements in a range whose values match a specified condition.  
  
## Syntax  
  
```  
template<class _InIt, class _Pr> inline  
    typename iterator_traits<_InIt>::difference_type  
        count_if(_InIt _First, _InIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `count_if`. For more information, see [count_if](../Topic/count_if.md).  
  
## Requirements  
 **Header:** <cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../VS_visualcpp/algorithm--STL-CLR-.md)