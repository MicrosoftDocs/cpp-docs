---
title: "replace (STL-CLR) | Microsoft Docs"
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
  - "cliext::replace"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "replace function [STL/CLR]"
ms.assetid: 3792abca-8d73-476a-8540-c5f739aa48c2
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# replace (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [replace (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/replace-stl-clr).  
  
  
Examines each element in a range and replaces it if it matches a specified value.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Ty> inline  
    void replace(_FwdIt _First, _FwdIt _Last,  
        const _Ty% _Oldval, const _Ty% _Newval);  
```  
  
## Remarks  
 This function behaves the same as the STL function `replace`. For more information, see [replace](http://msdn.microsoft.com/library/8324dd0c-f3f7-4035-9fbe-654010366149).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

