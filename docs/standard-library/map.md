---
title: "&lt;map&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<map>"
  - "std.<map>"
  - "<map>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "map header"
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# &lt;map&gt;
Defines the container template classes map and multimap and their supporting templates.  
  
## Syntax  
  
```  
#include <map>  
  
```  
  
## Members  
  
### Operators  
  
|Map version|Multimap version|Description|  
|-----------------|----------------------|-----------------|  
|[operator!= (map)](../standard-library/map-operators.md#operator_neq)|[operator!= (multimap)](../standard-library/map-operators.md#operator_neq)|Tests if the map or multimap object on the left side of the operator is not equal to the map or multimap object on the right side.|  
|[operator< (map)](../standard-library/map-operators.md#operator_eq_eq)|[operator< (multimap)](../standard-library/map-operators.md#operator_eq_eq)|Tests if the map or multimap object on the left side of the operator is less than the map or multimap object on the right side.|  
|[operator<= (map)](../standard-library/map-operators.md#operator_lt_)|[operator\<= (multimap)](../standard-library/map-operators.md#operator_lt_)|Tests if the map or multimap object on the left side of the operator is less than or equal to the map or multimap object on the right side.|  
|[operator== (map)](../standard-library/map-operators.md#operator_lt__eq)|[operator== (multimap)](../standard-library/map-operators.md#operator_lt__eq)|Tests if the map or multimap object on the left side of the operator is equal to the map or multimap object on the right side.|  
|[operator> (map)](../standard-library/map-operators.md#operator_gt_)|[operator> (multimap)](../standard-library/map-operators.md#operator_gt_)|Tests if the map or multimap object on the left side of the operator is greater than the map or multimap object on the right side.|  
|[operator>= (map)](../standard-library/map-operators.md#operator_gt__eq)|[operator>= (multimap)](../standard-library/map-operators.md#operator_gt__eq)|Tests if the map or multimap object on the left side of the operator is greater than or equal to the map or multimap object on the right side.|  
  
### Specialized Template Functions  
  
|Map version|Multimap version|Description|  
|-----------------|----------------------|-----------------|  
|[swap (map)](../standard-library/map-functions.md#swap)|[swap (multimap)](../standard-library/map-functions.md#swap)|Exchanges the elements of two maps or multimaps.|  
  
### Classes  
  
|||  
|-|-|  
|[value_compare Class](../standard-library/value-compare-class-map.md)|Provides a function object that can compare the elements of a map by comparing the values of their keys to determine their relative order in the map.|  
|[map Class](../standard-library/map-class.md)|Used for the storage and retrieval of data from a collection in which the each of the elements has a unique key with which the data is automatically ordered.|  
|[multimap Class](../standard-library/multimap-class.md)|Used for the storage and retrieval of data from a collection in which the each of the elements has a key with which the data is automatically ordered and the keys do not need to have unique values.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



