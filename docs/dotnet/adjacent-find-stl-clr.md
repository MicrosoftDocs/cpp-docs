---
title: "adjacent_find (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cliext::adjacent_find"]
dev_langs: ["C++"]
helpviewer_keywords: ["adjacent_find function"]
ms.assetid: 48bf57ea-b128-4d16-97c5-01d8a378369f
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "dotnet"]
---
# adjacent_find (STL/CLR)
Searches for two adjacent elements that are either equal or satisfy a specified condition.  
  
## Syntax  
  
```  
template<class _FwdIt> inline  
    _FwdIt adjacent_find(_FwdIt _First, _FwdIt _Last);  
template<class _FwdIt, class _Pr> inline  
    _FwdIt adjacent_find(_FwdIt _First, _FwdIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `adjacent_find`. For more information, see [adjacent_find](../standard-library/algorithm-functions.md#adjacent_find).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)