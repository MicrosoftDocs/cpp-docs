---
title: "&lt;hash_set&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<hash_set>"
  - "std.<hash_set>"
  - "std::<hash_set>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_set header"
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# &lt;hash_set&gt;
> [!NOTE]
>  This header is obsolete. The alternative is [<unordered_set>](../standard-library/unordered-set.md).  
  
 Defines the container template classes hash_set and hash_multiset and their supporting templates.  
  
## Syntax  
  
```  
#include <hash_set>  
  
```  
  
## Remarks  
  
### Operators  
  
|Hash_set version|Hash_multiset version|Description|  
|-----------------------|----------------------------|-----------------|  
|[operator!= (hash_set)](../standard-library/hash-set-operators.md#operator_neq)|[operator!= (hash_multiset)](../standard-library/hash-set-operators.md#operator_neq__hash_multiset_)|Tests if the hash_set or hash_multiset object on the left side of the operator is not equal to the hash_set or hash_multiset object on the right side.|  
|[operator== (hash_set)](http://msdn.microsoft.com/en-us/791b95bd-f917-4716-aea6-add50badbfac)|[operator== (hash_multiset)](http://msdn.microsoft.com/en-us/cfa9aa0c-d5f6-403a-9441-35c2a4cee0fb)|Tests if the hash_set or hash_multiset object on the left side of the operator is equal to the hash_set or hash_multiset object on the right side.|  
  
### Specialized Template Functions  
  
|Hash_set version|Hash_multiset version|Description|  
|-----------------------|----------------------------|-----------------|  
|[swap (hash_set)](../standard-library/hash-set-functions.md#swap)|[swap (hash_multiset)](../standard-library/hash-set-functions.md#swap__hash_multiset_)|Exchanges the elements of two hash_sets or hash_multisets.|  
  
### Classes  
  
|||  
|-|-|  
|[hash_compare Class](../standard-library/hash-compare-class.md)|Describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default **Traits** parameter object to order and hash the elements they contain.|  
|[hash_set Class](../standard-library/hash-set-class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|  
|[hash_multiset Class](../standard-library/hash-multiset-class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)



