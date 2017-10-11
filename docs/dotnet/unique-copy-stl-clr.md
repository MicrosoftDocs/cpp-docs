---
title: "unique_copy (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cliext::unique_copy"]
dev_langs: ["C++"]
helpviewer_keywords: ["unique_copy function [STL/CLR]"]
ms.assetid: 37aa5b06-42c5-420d-94c5-00f00ad26471
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# unique_copy (STL/CLR)
Copies elements from a source range into a destination range except for the duplicate elements that are adjacent to each other.  
  
## Syntax  
  
```  
template<class _InIt, class _OutIt> inline  
    _OutIt unique_copy(_InIt _First, _InIt _Last, _OutIt _Dest);  
template<class _InIt, class _OutIt, class _Pr> inline  
    _OutIt unique_copy(_InIt _First, _InIt _Last, _OutIt _Dest,  
        _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `unique_copy`. For more information, see [unique_copy](../standard-library/algorithm-functions.md#unique_copy).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)