---
title: "set_symmetric_difference (STL-CLR) | Microsoft Docs"
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
  - "cliext::set_symmetric_difference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set_symmetric_difference function [STL/CLR]"
ms.assetid: 4d8997c7-038e-42a8-86d4-81d714ed3775
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# set_symmetric_difference (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [set_symmetric_difference (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/set-symmetric-difference-stl-clr).  
  
  
Unites all of the elements that belong to one, but not both, of the sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.  
  
## Syntax  
  
```  
template<class _InIt1, class _InIt2, class _OutIt> inline  
    _OutIt set_symmetric_difference(_InIt1 _First1, _InIt1 _Last1,  
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);  
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline  
    _OutIt set_symmetric_difference(_InIt1 _First1, _InIt1 _Last1,  
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `set_symmetric_difference`. For more information, see [set_symmetric_difference](http://msdn.microsoft.com/library/39c673df-ea67-4336-a60e-8729e69e2ee4).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

