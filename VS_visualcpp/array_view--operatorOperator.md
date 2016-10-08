---
title: "array_view::operatorOperator"
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
ms.assetid: aaad2e89-adc8-429f-8e8d-242d854a3b63
caps.latest.revision: 13
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
# array_view::operatorOperator
Returns the element that is specified by the parameters.  
  
## Syntax  
  
```  
typename details::_Projection_result_type<_Value_type,_Rank>::_Const_result_type operator[] (  
    int _I ) const restrict(amp,cpu);  
  
value_type&  operator[] (  
    const index<_Rank>& _Index ) const restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Index`  
 The index.  
  
 `_I`  
 The index.  
  
## Return Value  
 The value of the element at the index, or an `array_view` projected on the most-significant dimension.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)