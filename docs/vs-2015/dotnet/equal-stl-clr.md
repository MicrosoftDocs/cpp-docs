---
title: "equal (STL-CLR) | Microsoft Docs"
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
  - "cliext::equal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "equal function [STL/CLR]"
ms.assetid: 7f271666-2198-4e33-8e03-8b73b376c724
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# equal (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [equal (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/equal-stl-clr).  
  
  
Compares two ranges element by element either for equality or equivalence in a sense specified by a binary predicate.  
  
## Syntax  
  
```  
template<class _InIt1, class _InIt2> inline  
    bool equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);  
template<class _InIt1, class _InIt2, class _Pr> inline  
    bool equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,  
        _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the STL function `equal`. For more information, see [equal](http://msdn.microsoft.com/library/56533afd-b696-40a0-8fa9-d366539e49ae).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)

