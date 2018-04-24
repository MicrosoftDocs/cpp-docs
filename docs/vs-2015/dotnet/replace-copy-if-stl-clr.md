---
title: "replace_copy_if (STL-CLR) | Microsoft Docs"
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
  - "cliext::replace_copy_if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "replace_copy_if function [STL/CLR]"
ms.assetid: 60edf9b8-34e6-4d94-a611-363ef7b7fb80
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# replace_copy_if (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [replace_copy_if (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/replace-copy-if-stl-clr).  
  
  
Examines each element in a source range and replaces it if it satisfies a specified predicate while copying the result into a new destination range.  
  
## Syntax  
  
```  
template<class _InIt, class _OutIt, class _Pr, class _Ty> inline  
    _OutIt replace_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,  
        _Pr _Pred, const _Ty% _Val);  
```  
  
## Remarks  
 This function behaves the same as the STL function `replace_copy_if`. For more information, see [replace_copy_if](http://msdn.microsoft.com/library/3541f157-b8e0-4f83-bfdf-3e786ed26a3b).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

