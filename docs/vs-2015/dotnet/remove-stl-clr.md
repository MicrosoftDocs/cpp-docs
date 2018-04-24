---
title: "remove (STL-CLR) | Microsoft Docs"
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
  - "cliext::remove"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove function [STL/CLR]"
ms.assetid: 85a11883-3e25-49aa-b4a0-b2cffd6dc110
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# remove (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [remove (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/remove-stl-clr).  
  
  
Eliminates a specified value from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Ty> inline  
    _FwdIt remove(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
```  
  
## Remarks  
 This function behaves the same as the STL function `remove`. For more information, see [remove](http://msdn.microsoft.com/library/77e2585c-441e-448d-bd1d-c893d1356ed8).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

