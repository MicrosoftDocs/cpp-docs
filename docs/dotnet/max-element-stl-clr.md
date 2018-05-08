---
title: "max_element (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["cliext::max_element"]
dev_langs: ["C++"]
helpviewer_keywords: ["max_element function [STL/CLR]"]
ms.assetid: c6274bae-1216-4285-b395-254280253dae
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# max_element (STL/CLR)
Finds the first occurrence of largest element in a specified range where the ordering criterion may be specified by a binary predicate.  
  
## Syntax  
  
```  
template<class _FwdIt> inline  
    _FwdIt max_element(_FwdIt _First, _FwdIt _Last);  
template<class _FwdIt, class _Pr> inline  
    _FwdIt max_element(_FwdIt _First, _FwdIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `max_element`. For more information, see [max_element](../standard-library/algorithm-functions.md#max_element).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)