---
title: "fill (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cliext::fill"]
dev_langs: ["C++"]
helpviewer_keywords: ["fill function"]
ms.assetid: eb67241c-9bb3-497e-bec6-639900c60758
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "dotnet"]
---
# fill (STL/CLR)
Assigns the same new value to every element in a specified range.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Ty> inline  
    void fill(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `fill`. For more information, see [fill](../standard-library/algorithm-functions.md#fill).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)