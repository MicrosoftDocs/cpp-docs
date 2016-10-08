---
title: "&lt;set&gt;"
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
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
caps.latest.revision: 18
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
# &lt;set&gt;
Defines the container template classes set and multiset and their supporting templates.  
  
## Syntax  
  
```  
#include <set>  
  
```  
  
## Members  
  
### Operators  
  
|Set version|Multiset version|Description|  
|-----------------|----------------------|-----------------|  
|[operator!= (set)](../VS_visualcpp/-set--operators.md#operator_neq)|[operator!= (multiset)](../VS_visualcpp/-set--operators.md#operator_neq)|Tests if the set or multiset object on the left side of the operator is not equal to the set or multiset object on the right side.|  
|[operator< (set)](../VS_visualcpp/-set--operators.md#operator_lt_)|[operator< (multiset)](../VS_visualcpp/-set--operators.md#operator_lt_)|Tests if the set or multiset object on the left side of the operator is less than the set or multiset object on the right side.|  
|[operator<= (set)](../VS_visualcpp/-set--operators.md#operator_lt__eq)|[operator<= (multiset)](../VS_visualcpp/-set--operators.md#operator_lt__eq)|Tests if the set or multiset object on the left side of the operator is less than or equal to the set or multiset object on the right side.|  
|[operator== (set)](../VS_visualcpp/-set--operators.md#operator_eq_eq)|[operator== (multiset)](../VS_visualcpp/-set--operators.md#operator_eq_eq)|Tests if the set or multiset object on the left side of the operator is equal to the set or multiset object on the right side.|  
|[operator> (set)](../VS_visualcpp/-set--operators.md#operator_gt_)|[operator> (multiset)](../VS_visualcpp/-set--operators.md#operator_gt_)|Tests if the set or multiset object on the left side of the operator is greater than the set or multiset object on the right side.|  
|[operator>= (set)](../VS_visualcpp/-set--operators.md#operator_gt__eq)|[operator>= (multiset)](../VS_visualcpp/-set--operators.md#operator_gt__eq)|Tests if the set or multiset object on the left side of the operator is greater than or equal to the set or multiset object on the right side.|  
  
### Specialized Template Functions  
  
|Set version|Multiset version|Description|  
|-----------------|----------------------|-----------------|  
|[swap](../VS_visualcpp/-set--functions.md#swap)|[swap](../VS_visualcpp/-set--functions.md#swap)|Exchanges the elements of two sets or multisets.|  
  
### Classes  
  
|||  
|-|-|  
|[set Class](../VS_visualcpp/set-Class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values according to which the data is automatically ordered.|  
|[multiset Class](../VS_visualcpp/multiset-Class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained need not be unique and in which they serve as the key values according to which the data is automatically ordered.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)