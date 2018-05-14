---
title: "sort_heap (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["cliext::sort_heap"]
dev_langs: ["C++"]
helpviewer_keywords: ["sort_heap function [STL/CLR]"]
ms.assetid: a8fa6b76-90cd-413b-9c5b-f65b93d4bbed
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# sort_heap (STL/CLR)
Converts a heap into a sorted range.  
  
## Syntax  
  
```  
template<class _RanIt> inline  
    void sort_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void sort_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `sort_heap`. For more information, see [sort_heap](../standard-library/algorithm-functions.md#sort_heap).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)