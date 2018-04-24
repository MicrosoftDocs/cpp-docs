---
title: "partial_sort_copy (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::partial_sort_copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "partial_sort_copy function [STL/CLR]"
ms.assetid: ed4af83e-7554-4f6d-bf54-c56fa6210fe8
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# partial_sort_copy (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [partial_sort_copy (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/partial-sort-copy-stl-clr).  
  
  
Copies elements from a source range into a destination range where the source elements are ordered by either less than or another specified binary predicate.  
  
## Syntax  
  
```  
template<class _InIt, class _RanIt> inline  
    _RanIt partial_sort_copy(_InIt _First1, _InIt _Last1,  
        _RanIt _First2, _RanIt _Last2);  
template<class _InIt, class _RanIt, class _Pr> inline  
    _RanIt partial_sort_copy(_InIt _First1, _InIt _Last1,  
        _RanIt _First2, _RanIt _Last2, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `partial_sort_copy`. For more information, see [partial_sort_copy](../Topic/partial_sort_copy.md).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

