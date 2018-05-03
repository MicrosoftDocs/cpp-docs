---
title: "min (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["cliext::min"]
dev_langs: ["C++"]
helpviewer_keywords: ["min function [STL/CLR]"]
ms.assetid: 7a2c82d1-424c-48a9-a944-adcf95511aef
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# min (STL/CLR)
Compares two objects and returns the lesser of the two, where the ordering criterion may be specified by a binary predicate.  
  
## Syntax  
  
```  
template<class _Ty> inline  
    const _Ty min(const _Ty% _Left, const _Ty% _Right);  
template<class _Ty, class _Pr> inline  
    const _Ty min(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `min`. For more information, see [min](../standard-library/algorithm-functions.md#min).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)