---
title: "lower_bound (STL-CLR) | Microsoft Docs"
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
  - "cliext::lower_bound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lower_bound function [STL/CLR]"
ms.assetid: 841b70b5-1f54-4ecf-8faa-7dda32a24c54
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# lower_bound (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [lower_bound (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/lower-bound-stl-clr).  
  
  
Finds the position of the first element in an ordered range that has a value less than or equivalent to a specified value, where the ordering criterion may be specified by a binary predicate.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Ty> inline  
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
template<class _FwdIt, class _Ty, class _Pr> inline  
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last,  
        const _Ty% _Val, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `lower_bound`. For more information, see [lower_bound](http://msdn.microsoft.com/library/bf1b020c-f97a-4e2b-85f4-c09f6a0da1c4).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

