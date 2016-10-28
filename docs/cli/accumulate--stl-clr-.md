---
title: "accumulate (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "cliext::accumulate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accumulate function [STL/CLR]"
ms.assetid: b80e1ef1-1858-4c1d-817b-c42ad1f17a2f
caps.latest.revision: 4
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
# accumulate (STL/CLR)
Computes the sum of all the elements in a specified range including some initial value by computing successive partial sums or computes the result of successive partial results similarly obtained from using a specified binary operation other than the sum.  
  
## Syntax  
  
```  
template<class _InIt, class _Ty> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val);  
template<class _InIt, class _Ty, class _Fn2> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn2 _Func);  
```  
  
## Remarks  
 This function behaves the same as the STL numeric function `accumulate`. For more information, see [accumulate](../Topic/accumulate.md).  
  
## Requirements  
 **Header:** \<cliext/numeric>  
  
 **Namespace:** cliext  
  
## See Also  
 [numeric (STL/CLR)](../cli/numeric--stl-clr-.md)