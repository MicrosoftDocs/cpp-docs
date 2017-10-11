---
title: "swap_ranges (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cliext::swap_ranges"]
dev_langs: ["C++"]
helpviewer_keywords: ["swap_ranges function [STL/CLR]"]
ms.assetid: 3fb39a84-b088-48f1-8bb7-2bbe68b048a9
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# swap_ranges (STL/CLR)
Exchanges the elements of one range with the elements of another, equal sized range.  
  
## Syntax  
  
```  
template<class _FwdIt1, class _FwdIt2> inline  
    _FwdIt2 swap_ranges(_FwdIt1 _First1, _FwdIt1 _Last1,  
        _FwdIt2 _First2);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `swap_ranges`. For more information, see [swap_ranges](../standard-library/algorithm-functions.md#swap_ranges).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)