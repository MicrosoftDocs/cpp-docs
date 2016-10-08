---
title: "operator== Operator (C++ AMP)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0da8fcf1-cd05-4b4b-9c34-4afaeb9a5980
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# operator== Operator (C++ AMP)
Determines whether the specified arguments are equal.  
  
## Syntax  
  
```  
template <  
    int _Rank,  
    template <int> class _Tuple_type  
>  
bool operator= = (  
    const _Tuple_type< _Rank>& _Lhs,  
    const _Tuple_type< _Rank>& _Rhs ) restrict(amp);  
```  
  
#### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 One of the tuples to compare.  
  
 `_Rhs`  
 One of the tuples to compare.  
  
## Return Value  
 `true` if the tuples are equal; otherwise, `false`.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)