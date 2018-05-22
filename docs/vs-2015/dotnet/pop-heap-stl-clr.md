---
title: "pop_heap (STL-CLR) | Microsoft Docs"
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
  - "cliext::pop_heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pop_heap function [STL/CLR]"
ms.assetid: d9bde0ed-2122-4d83-b4b3-f47f6fb3729a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# pop_heap (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [pop_heap (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/pop-heap-stl-clr).  
  
  
Removes the largest element from the front of a heap to the next-to-last position in the range and then forms a new heap from the remaining elements.  
  
## Syntax  
  
```  
template<class _RanIt> inline  
    void pop_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void pop_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `pop_heap`. For more information, see [pop_heap](http://msdn.microsoft.com/library/38f6eea3-d192-4597-aae7-c3ec2e659107).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

