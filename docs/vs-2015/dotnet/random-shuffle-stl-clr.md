---
title: "random_shuffle (STL-CLR) | Microsoft Docs"
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
  - "cliext::random_shuffle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "random_shuffle function [STL/CLR]"
ms.assetid: 0f9d93e2-f50f-40e6-bbe4-2ca3231a895e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# random_shuffle (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [random_shuffle (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/random-shuffle-stl-clr).  
  
  
Rearranges a sequence of `N` elements in a range into one of `N`! possible arrangements selected at random.  
  
## Syntax  
  
```  
template<class _RanIt> inline  
    void random_shuffle(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Fn1> inline  
    void random_shuffle(_RanIt _First, _RanIt _Last, _Fn1% _Func);  
```  
  
## Remarks  
 This function behaves the same as the STL function `random_shuffle`. For more information, see [random_shuffle](http://msdn.microsoft.com/library/066a5fb1-9568-4e96-8ab9-854041d7f9d8).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

