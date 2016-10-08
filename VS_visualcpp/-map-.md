---
title: "&lt;map&gt;"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
caps.latest.revision: 18
manager: ghogen
translation.priority.mt: 
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
|[operator!= (map)](../VS_visualcpp/-map--operators.md#operator_neq)|[operator!= (multimap)](../VS_visualcpp/-map--operators.md#operator_neq)|Tests if the map or multimap object on the left side of the operator is not equal to the map or multimap object on the right side.|  
|[operator< (map)](../VS_visualcpp/-map--operators.md#operator_eq_eq)|[operator< (multimap)](../VS_visualcpp/-map--operators.md#operator_eq_eq)|Tests if the map or multimap object on the left side of the operator is less than the map or multimap object on the right side.|  
|[operator<= (map)](../VS_visualcpp/-map--operators.md#operator_lt_)|[operator<= (multimap)](../VS_visualcpp/-map--operators.md#operator_lt_)|Tests if the map or multimap object on the left side of the operator is less than or equal to the map or multimap object on the right side.|  
|[operator== (map)](../VS_visualcpp/-map--operators.md#operator_lt__eq)|[operator== (multimap)](../VS_visualcpp/-map--operators.md#operator_lt__eq)|Tests if the map or multimap object on the left side of the operator is equal to the map or multimap object on the right side.|  
|[operator> (map)](../VS_visualcpp/-map--operators.md#operator_gt_)|[operator> (multimap)](../VS_visualcpp/-map--operators.md#operator_gt_)|Tests if the map or multimap object on the left side of the operator is greater than the map or multimap object on the right side.|  
|[operator>= (map)](../VS_visualcpp/-map--operators.md#operator_gt__eq)|[operator>= (multimap)](../VS_visualcpp/-map--operators.md#operator_gt__eq)|Tests if the map or multimap object on the left side of the operator is greater than or equal to the map or multimap object on the right side.|  
  
### Specialized Template Functions  
  
|Map version|Multimap version|Description|  
|-----------------|----------------------|-----------------|  
|[swap (map)](../VS_visualcpp/-map--functions.md#swap)|[swap (multimap)](../VS_visualcpp/-map--functions.md#swap)|Exchanges the elements of two maps or multimaps.|  
  
### Classes  
  
|||  
|-|-|  
|[value_compare Class](../VS_visualcpp/value_compare-Class---map--.md)|Provides a function object that can compare the elements of a map by comparing the values of their keys to determine their relative order in the map.|  
|[map Class](../VS_visualcpp/map-Class.md)|Used for the storage and retrieval of data from a collection in which the each of the elements has a unique key with which the data is automatically ordered.|  
|[multimap Class](../VS_visualcpp/multimap-Class.md)|Used for the storage and retrieval of data from a collection in which the each of the elements has a key with which the data is automatically ordered and the keys do not need to have unique values.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)