---
title: "remove_copy_if (STL-CLR)"
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
H1: remove_copy_if (STL/CLR)
ms.assetid: 5307f5fe-b6bb-4968-8da1-fea84ab96655
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
# remove_copy_if (STL-CLR)
Copies elements from a source range to a destination range, except that satisfying a predicate are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.  
  
## Syntax  
  
```  
template<class _InIt, class _OutIt, class _Pr> inline  
    _OutIt remove_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,  
        _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `remove_copy_if`. For more information, see [remove_copy_if](../Topic/remove_copy_if.md).  
  
## Requirements  
 **Header:** <cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../VS_visualcpp/algorithm--STL-CLR-.md)