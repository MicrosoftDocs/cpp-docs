---
title: "sort_heap (STL-CLR) | Microsoft Docs"
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
  - "cliext::sort_heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sort_heap function [STL/CLR]"
ms.assetid: a8fa6b76-90cd-413b-9c5b-f65b93d4bbed
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# sort_heap (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [sort_heap (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/sort-heap-stl-clr).  
  
  
Converts a heap into a sorted range.  
  
## Syntax  
  
```  
template<class _RanIt> inline  
    void sort_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void sort_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `sort_heap`. For more information, see [sort_heap](http://msdn.microsoft.com/library/4a16b2ef-a1b4-4c80-823b-3e4bf06b2481).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

