---
title: "remove_if (STL-CLR)"
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
H1: remove_if (STL/CLR)
ms.assetid: de501d3f-965b-4a99-b833-f6fa303fbcdc
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
# remove_if (STL-CLR)
Eliminates elements that satisfy a predicate from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Pr> inline  
    _FwdIt remove_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `remove_if`. For more information, see [remove_if](../Topic/remove_if.md).  
  
## Requirements  
 **Header:** <cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../VS_visualcpp/algorithm--STL-CLR-.md)