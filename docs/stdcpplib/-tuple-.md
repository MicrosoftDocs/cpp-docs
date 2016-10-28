---
title: "&lt;tuple&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "<tuple>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tuple header [TR1]"
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
caps.latest.revision: 18
ms.author: "corob"
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
# &lt;tuple&gt;
Defines a template `tuple` whose instances hold objects of varying types.  
  
## Syntax  
  
```  
#include <tuple>  
```  
  
### Classes  
  
|||  
|-|-|  
|tuple|Wraps a fixed-length sequence of elements.|  
|[tuple_element Class](../stdcpplib/tuple_element-class--tuple-.md)|Wraps the type of a `tuple` element.|  
|[tuple_size Class](../stdcpplib/tuple_size-class--tuple-.md)|Wraps `tuple` element count.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](../stdcpplib/-tuple--operators.md#operator_eq_eq)|Comparison of `tuple` objects, equal|  
|[operator!=](../stdcpplib/-tuple--operators.md#operator_neq)|Comparison of `tuple` objects, not equal|  
|[operator<](../stdcpplib/-tuple--operators.md#operator_lt_)|Comparison of `tuple` objects, less than|  
|[operator<=](../stdcpplib/-tuple--operators.md#operator_lt__eq)|Comparison of `tuple` objects, less than or equal|  
|[operator>](../stdcpplib/-tuple--operators.md#operator_gt_)|Comparison of `tuple` objects, greater than|  
|[operator>=](../stdcpplib/-tuple--operators.md#operator_gt__eq)|Comparison of `tuple` objects, greater than or equal|  
  
### Functions  
  
|||  
|-|-|  
|[get](../stdcpplib/-tuple--functions.md#get_function)|Gets an element from a `tuple` object.|  
|[make_tuple](../stdcpplib/-tuple--functions.md#make_tuple_function)|Makes a `tuple` from element values.|  
|[tie](../stdcpplib/-tuple--functions.md#tie_function)|Makes a `tuple` from element references.|  
  
## See Also  
 [\<array>](../stdcpplib/-array-.md)