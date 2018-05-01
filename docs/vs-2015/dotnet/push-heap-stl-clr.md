---
title: "push_heap (STL-CLR) | Microsoft Docs"
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
  - "cliext::push_heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "push_heap function [STL/CLR]"
ms.assetid: 184fe1d9-5f75-4c11-adbb-84b6b5c8ecd3
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# push_heap (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [push_heap (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/push-heap-stl-clr).  
  
  
Adds an element that is at the end of a range to an existing heap consisting of the prior elements in the range.  
  
## Syntax  
  
```  
template<class _RanIt> inline  
    void push_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void push_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `push_heap`. For more information, see [push_heap](http://msdn.microsoft.com/library/451cfdac-1021-42f9-abdd-ea2e35ceb8ba).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

