---
title: "partial_sum (STL-CLR)"
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
H1: partial_sum (STL/CLR)
ms.assetid: 845badae-8519-4ac8-9ea7-2b921bac7c51
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
# partial_sum (STL-CLR)
Computes a series of sums in an input range from the first element through the `i`th element and stores the result of each such sum in `i`th element of a destination range or computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.  
  
## Syntax  
  
```  
template<class _InIt, class _OutIt> inline  
    _OutIt partial_sum(_InIt _First, _InIt _Last, _OutIt _Dest);  
template<class _InIt, class _OutIt, class _Fn2> inline  
    _OutIt partial_sum(_InIt _First, _InIt _Last,  
        _OutIt _Dest, _Fn2 _Func);  
```  
  
## Remarks  
 This function behaves the same as the STL numeric function `partial_sum`. For more information, see [partial_sum](../Topic/partial_sum.md).  
  
## Requirements  
 **Header:** <cliext/numeric>  
  
 **Namespace:** cliext  
  
## See Also  
 [numeric (STL/CLR)](../VS_visualcpp/numeric--STL-CLR-.md)