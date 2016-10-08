---
title: "&lt;hash_set&gt;"
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
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# &lt;hash_set&gt;
> [!NOTE]
>  This header is obsolete. The alternative is [<unordered_set>](../VS_visualcpp/-unordered_set-.md).  
  
 Defines the container template classes hash_set and hash_multiset and their supporting templates.  
  
## Syntax  
  
```  
#include <hash_set>  
  
```  
  
## Remarks  
  
### Operators  
  
|Hash_set version|Hash_multiset version|Description|  
|-----------------------|----------------------------|-----------------|  
|[operator!= (hash_set)](../VS_visualcpp/-hash_set--operators.md#operator_neq)|[operator!= (hash_multiset)](../VS_visualcpp/-hash_set--operators.md#operator_neq__hash_multiset_)|Tests if the hash_set or hash_multiset object on the left side of the operator is not equal to the hash_set or hash_multiset object on the right side.|  
|[operator== (hash_set)](assetId:///791b95bd-f917-4716-aea6-add50badbfac)|[operator== (hash_multiset)](assetId:///cfa9aa0c-d5f6-403a-9441-35c2a4cee0fb)|Tests if the hash_set or hash_multiset object on the left side of the operator is equal to the hash_set or hash_multiset object on the right side.|  
  
### Specialized Template Functions  
  
|Hash_set version|Hash_multiset version|Description|  
|-----------------------|----------------------------|-----------------|  
|[swap (hash_set)](../VS_visualcpp/-hash_set--functions.md#swap)|[swap (hash_multiset)](../VS_visualcpp/-hash_set--functions.md#swap__hash_multiset_)|Exchanges the elements of two hash_sets or hash_multisets.|  
  
### Classes  
  
|||  
|-|-|  
|[hash_compare Class](../VS_visualcpp/hash_compare-Class.md)|Describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default **Traits** parameter object to order and hash the elements they contain.|  
|[hash_set Class](../VS_visualcpp/hash_set-Class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|  
|[hash_multiset Class](../VS_visualcpp/hash_multiset-Class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)