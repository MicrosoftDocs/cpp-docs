---
title: "find_if (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["cliext::find_if"]
dev_langs: ["C++"]
helpviewer_keywords: ["find_if function [STL/CLR]"]
ms.assetid: fd0db2be-a1e1-417e-8eea-653b08c9577e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# find_if (STL/CLR)
Locates the position of the first occurrence of an element in a range that satisfies a specified condition.  
  
## Syntax  
  
```  
template<class _InIt, class _Pr> inline  
    _InIt find_if(_InIt _First, _InIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `find_if`. For more information, see [find_if](../standard-library/algorithm-functions.md#find_if).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)