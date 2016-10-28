---
title: "&lt;set&gt;"
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
  - "std.<set>"
  - "std::<set>"
  - "<set>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set header"
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
caps.latest.revision: 19
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
|[operator!= (set)](../stdcpplib/-set--operators.md#operator_neq)|[operator!= (multiset)](../stdcpplib/-set--operators.md#operator_neq)|Tests if the set or multiset object on the left side of the operator is not equal to the set or multiset object on the right side.|  
|[operator< (set)](../stdcpplib/-set--operators.md#operator_lt_)|[operator< (multiset)](../stdcpplib/-set--operators.md#operator_lt_)|Tests if the set or multiset object on the left side of the operator is less than the set or multiset object on the right side.|  
|[operator<= (set)](../stdcpplib/-set--operators.md#operator_lt__eq)|[operator\<= (multiset)](../stdcpplib/-set--operators.md#operator_lt__eq)|Tests if the set or multiset object on the left side of the operator is less than or equal to the set or multiset object on the right side.|  
|[operator== (set)](../stdcpplib/-set--operators.md#operator_eq_eq)|[operator== (multiset)](../stdcpplib/-set--operators.md#operator_eq_eq)|Tests if the set or multiset object on the left side of the operator is equal to the set or multiset object on the right side.|  
|[operator> (set)](../stdcpplib/-set--operators.md#operator_gt_)|[operator> (multiset)](../stdcpplib/-set--operators.md#operator_gt_)|Tests if the set or multiset object on the left side of the operator is greater than the set or multiset object on the right side.|  
|[operator>= (set)](../stdcpplib/-set--operators.md#operator_gt__eq)|[operator>= (multiset)](../stdcpplib/-set--operators.md#operator_gt__eq)|Tests if the set or multiset object on the left side of the operator is greater than or equal to the set or multiset object on the right side.|  
  
### Specialized Template Functions  
  
|Set version|Multiset version|Description|  
|-----------------|----------------------|-----------------|  
|[swap](../stdcpplib/-set--functions.md#swap)|[swap](../stdcpplib/-set--functions.md#swap)|Exchanges the elements of two sets or multisets.|  
  
### Classes  
  
|||  
|-|-|  
|[set Class](../stdcpplib/set-class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values according to which the data is automatically ordered.|  
|[multiset Class](../stdcpplib/multiset-class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained need not be unique and in which they serve as the key values according to which the data is automatically ordered.|  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

