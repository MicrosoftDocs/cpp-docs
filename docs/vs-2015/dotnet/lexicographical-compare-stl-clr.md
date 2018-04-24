---
title: "lexicographical_compare (STL-CLR) | Microsoft Docs"
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
  - "cliext::lexicographical_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lexicographical_compare function [STL/CLR]"
ms.assetid: 9ec217f3-5523-4f90-a0cc-8fb7dbe4946b
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# lexicographical_compare (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [lexicographical_compare (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/lexicographical-compare-stl-clr).  
  
  
Compares element by element between two sequences to determine which is lesser of the two.  
  
## Syntax  
  
```  
template<class _InIt1, class _InIt2> inline  
    bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,  
        _InIt2 _First2, _InIt2 _Last2);  
template<class _InIt1, class _InIt2, class _Pr> inline  
    bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,  
        _InIt2 _First2, _InIt2 _Last2, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `lexicographical_compare`. For more information, see [lexicographical_compare](../Topic/lexicographical_compare.md).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

