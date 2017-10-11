---
title: "mismatch (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cliext::mismatch"]
dev_langs: ["C++"]
helpviewer_keywords: ["mismatch function [STL/CLR]"]
ms.assetid: 77876875-44bb-4476-afd9-390da4eaac16
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# mismatch (STL/CLR)
Compares two ranges element by element either for equality or equivalent in a sense specified by a binary predicate and locates the first position where a difference occurs.  
  
## Syntax  
  
```  
template<class _InIt1, class _InIt2> inline  
    _PAIR_TYPE(_InIt1)  
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);  
template<class _InIt1, class _InIt2, class _Pr> inline  
    _PAIR_TYPE(_InIt1)  
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,  
            _Pr _Pred);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library function `mismatch`. For more information, see [mismatch](../standard-library/algorithm-functions.md#mismatch).  
  
## Requirements  
 **Header:** \<cliext/algorithm>  
  
 **Namespace:** cliext  
  
## See Also  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)