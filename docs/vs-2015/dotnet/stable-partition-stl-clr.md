---
title: "stable_partition (STL-CLR) | Microsoft Docs"
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
  - "cliext::stable_partition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stable_partition function [STL/CLR]"
ms.assetid: b82c194c-ae38-4afb-b255-a95a4c2b3101
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# stable_partition (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [stable_partition (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/stable-partition-stl-clr).  
  
  
Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it, preserving the relative order of equivalent elements.  
  
## Syntax  
  
```  
template<class _BidIt, class _Pr> inline  
    _BidIt stable_partition(_BidIt _First, _BidIt _Last, _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `stable_partition`. For more information, see [stable_partition](http://msdn.microsoft.com/library/224e97bf-b752-4c10-aa8c-95031dd535de).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

