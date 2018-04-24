---
title: "rotate_copy (STL-CLR) | Microsoft Docs"
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
  - "cliext::rotate_copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rotate_copy function [STL/CLR]"
ms.assetid: ed697552-130f-474f-9ab6-133332bb2587
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# rotate_copy (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [rotate_copy (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/rotate-copy-stl-clr).  
  
  
Exchanges the elements in two adjacent ranges within a source range and copies the result to a destination range.  
  
## Syntax  
  
```  
template<class _FwdIt, class _OutIt> inline  
    _OutIt rotate_copy(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last,  
        _OutIt _Dest);  
```  
  
## Remarks  
 This function behaves the same as the STL function `rotate_copy`. For more information, see [rotate_copy](http://msdn.microsoft.com/library/06c5bb1d-3b44-4c06-8f39-e926c0829bae).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

