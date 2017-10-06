---
title: "&lt;set&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["<set>"]
dev_langs: ["C++"]
helpviewer_keywords: ["set header"]
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
|[operator!= (set)](../standard-library/set-operators.md#op_neq)|[operator!= (multiset)](../standard-library/set-operators.md#op_neq)|Tests if the set or multiset object on the left side of the operator is not equal to the set or multiset object on the right side.|  
|[operator< (set)](../standard-library/set-operators.md#op_lt)|[operator< (multiset)](../standard-library/set-operators.md#op_lt_multiset)|Tests if the set or multiset object on the left side of the operator is less than the set or multiset object on the right side.|  
|[operator<= (set)](../standard-library/set-operators.md#op_lt_eq)|[operator\<= (multiset)](../standard-library/set-operators.md#op_lt_eq_multiset)|Tests if the set or multiset object on the left side of the operator is less than or equal to the set or multiset object on the right side.|  
|[operator== (set)](../standard-library/set-operators.md#op_eq_eq)|[operator== (multiset)](../standard-library/set-operators.md#op_eq_eq_multiset)|Tests if the set or multiset object on the left side of the operator is equal to the set or multiset object on the right side.|  
|[operator> (set)](../standard-library/set-operators.md#op_gt)|[operator> (multiset)](../standard-library/set-operators.md#op_gt_multiset)|Tests if the set or multiset object on the left side of the operator is greater than the set or multiset object on the right side.|  
|[operator>= (set)](../standard-library/set-operators.md#op_gt_eq)|[operator>= (multiset)](../standard-library/set-operators.md#op_gt_eq_multiset)|Tests if the set or multiset object on the left side of the operator is greater than or equal to the set or multiset object on the right side.|  
  
### Specialized Template Functions  
  
|Set version|Multiset version|Description|  
|-----------------|----------------------|-----------------|  
|[swap](../standard-library/set-functions.md#swap)|[swap (multiset)](../standard-library/set-functions.md#swap_multiset)|Exchanges the elements of two sets or multisets.|  
  
### Classes  
  
|||  
|-|-|  
|[set Class](../standard-library/set-class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values according to which the data is automatically ordered.|  
|[multiset Class](../standard-library/multiset-class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained need not be unique and in which they serve as the key values according to which the data is automatically ordered.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



