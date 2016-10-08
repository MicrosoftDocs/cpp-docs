---
title: "operator- Operator (C++ AMP)1"
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
H1: operator- Operator (C++ AMP)
ms.assetid: 8a464144-a28a-426b-8875-06a70122ca29
caps.latest.revision: 8
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
# operator- Operator (C++ AMP)1
Computes the component-wise difference between the specified arguments.  
  
## Syntax  
  
```  
template <  
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type< _Rank>  operator-(  
    const _Tuple_type< _Rank>& _Lhs,  
    const _Tuple_type< _Rank>& _Rhs ) restrict(amp,cpu);  
  
template <  
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type< _Rank>  operator-(  
    const _Tuple_type< _Rank>& _Lhs,  
    typename _Tuple_type< _Rank>::value_type _Rhs ) restrict(amp,cpu);  
  
template <  
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type< _Rank>  operator-(  
    typename _Tuple_type< _Rank>::value_type _Lhs,  
    const _Tuple_type< _Rank>& _Rhs ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 The argument to be subtracted from.  
  
 `_Rhs`  
 The argument to subtract.  
  
## Return Value  
 The component-wise difference between the specified arguments.  
  
## Remarks  
 The arguments to this operator are either tuples of the same rank and value type, or one tuple of a given rank and value type together with a scalar argument of the same value type. In both cases, the return type is a tuple of the same rank and value type as the tuple argument. When one of the arguments is a scalar, it is treated as a tuple of the same rank and value type as the other argument in which each element has the same value as the scalar argument.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)