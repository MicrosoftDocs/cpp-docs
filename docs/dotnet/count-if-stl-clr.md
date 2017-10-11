---
title: "count_if (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cliext::count_if"]
dev_langs: ["C++"]
helpviewer_keywords: ["count_if function [STL/CLR]"]
ms.assetid: a8aa149d-20b8-4b3f-917b-1ec66f178a5d
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# count_if (STL/CLR)
Returns the number of elements in a range whose values match a specified condition.  
  
## Syntax  
  
```  
template<class _InIt, class _Pr> inline  
    typename iterator_traits<_InIt>::difference_type  
        count_if(_InIt _First, _InIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `count_if`. For more information, see [count_if](../standard-library/algorithm-functions.md#count_if).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)