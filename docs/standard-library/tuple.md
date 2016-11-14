---
title: "&lt;tuple&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<tuple>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tuple header [TR1]"
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
caps.latest.revision: 20
author: "corob-msft"
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
|[tuple](../standard-library/tuple-class.md)|Wraps a fixed-length sequence of elements.|  
|[tuple_element Class](../standard-library/tuple-element-class-tuple.md)|Wraps the type of a `tuple` element.|  
|[tuple_size Class](../standard-library/tuple-size-class-tuple.md)|Wraps `tuple` element count.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](../standard-library/tuple-operators.md#operator_eq_eq)|Comparison of `tuple` objects, equal|  
|[operator!=](../standard-library/tuple-operators.md#operator_neq)|Comparison of `tuple` objects, not equal|  
|[operator<](../standard-library/tuple-operators.md#operator_lt_)|Comparison of `tuple` objects, less than|  
|[operator<=](../standard-library/tuple-operators.md#operator_lt__eq)|Comparison of `tuple` objects, less than or equal|  
|[operator>](../standard-library/tuple-operators.md#operator_gt_)|Comparison of `tuple` objects, greater than|  
|[operator>=](../standard-library/tuple-operators.md#operator_gt__eq)|Comparison of `tuple` objects, greater than or equal|  
  
### Functions  
  
|||  
|-|-|  
|[get](../standard-library/tuple-functions.md#get_function)|Gets an element from a `tuple` object.|  
|[make_tuple](../standard-library/tuple-functions.md#make_tuple_function)|Makes a `tuple` from element values.|  
|[tie](../standard-library/tuple-functions.md#tie_function)|Makes a `tuple` from element references.|  
  
## See Also  
 [\<array>](../standard-library/array.md)

