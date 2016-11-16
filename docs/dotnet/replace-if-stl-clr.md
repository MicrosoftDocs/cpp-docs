---
title: "replace_if (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# replace_if (STL/CLR)
Examines each element in a range and replaces it if it satisfies a specified predicate.  
  
## Syntax  
  
```  
template<class _FwdIt, class _Pr, class _Ty> inline  
    void replace_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred,  
        const _Ty% _Val);  
```  
  
## Remarks  
 This function behaves the same as the STL function `replace_if`. For more information, see [replace_if](http://msdn.microsoft.com/Library/3d01105a-046d-42aa-9dc9-a6b1c53ec802).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)