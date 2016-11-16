---
title: "min (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::min"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "min function [STL/CLR]"
ms.assetid: 7a2c82d1-424c-48a9-a944-adcf95511aef
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
# min (STL/CLR)
Compares two objects and returns the lesser of the two, where the ordering criterion may be specified by a binary predicate.  
  
## Syntax  
  
```  
template<class _Ty> inline  
    const _Ty min(const _Ty% _Left, const _Ty% _Right);  
template<class _Ty, class _Pr> inline  
    const _Ty min(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `min`. For more information, see [min](http://msdn.microsoft.com/Library/636d6d14-3957-43c0-a197-653afa45e2d7).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)