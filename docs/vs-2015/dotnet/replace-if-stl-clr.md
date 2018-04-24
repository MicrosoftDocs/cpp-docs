---
title: "replace_if (STL-CLR) | Microsoft Docs"
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
  - "cliext::replace_if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "replace_if function [STL/CLR]"
ms.assetid: 485ed698-551f-4808-8562-9e32b151786d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# replace_if (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [replace_if (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/replace-if-stl-clr).  
  
  
Examines each element in a range and replaces it if it satisfies a specified predicate.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Pr, class _Ty> inline  
    void replace_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred,  
        const _Ty% _Val);  
```  
  
## Remarks  
 This function behaves the same as the STL function `replace_if`. For more information, see [replace_if](http://msdn.microsoft.com/library/3d01105a-046d-42aa-9dc9-a6b1c53ec802).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

