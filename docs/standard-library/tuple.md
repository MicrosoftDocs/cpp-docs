---
title: "&lt;tuple&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["<tuple>"]
dev_langs: ["C++"]
helpviewer_keywords: ["tuple header"]
ms.assetid: e4ef5c2d-318b-44f6-8bce-fce4ecd796a3
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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
|[operator==](../standard-library/tuple-operators.md#op_eq_eq)|Comparison of `tuple` objects, equal|  
|[operator!=](../standard-library/tuple-operators.md#op_neq)|Comparison of `tuple` objects, not equal|  
|[operator<](../standard-library/tuple-operators.md#op_lt)|Comparison of `tuple` objects, less than|  
|[operator<=](../standard-library/tuple-operators.md#op_lt_eq)|Comparison of `tuple` objects, less than or equal|  
|[operator>](../standard-library/tuple-operators.md#op_gt)|Comparison of `tuple` objects, greater than|  
|[operator>=](../standard-library/tuple-operators.md#op_gt_eq)|Comparison of `tuple` objects, greater than or equal|  
  
### Functions  
  
|||  
|-|-|  
|[get](../standard-library/tuple-functions.md#get)|Gets an element from a `tuple` object.|  
|[make_tuple](../standard-library/tuple-functions.md#make_tuple)|Makes a `tuple` from element values.|  
|[tie](../standard-library/tuple-functions.md#tie)|Makes a `tuple` from element references.|  
  
## See Also  
 [\<array>](../standard-library/array.md)

