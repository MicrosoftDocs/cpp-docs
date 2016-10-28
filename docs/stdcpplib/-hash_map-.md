---
title: "&lt;hash_map&gt;"
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
  - "std.<hash_map>"
  - "<hash_map>"
  - "std::<hash_map>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_map header"
ms.assetid: 0765708a-a668-42a2-9800-654c857bdcc2
caps.latest.revision: 26
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
# &lt;hash_map&gt;
> [!NOTE]
>  This header is obsolete. The alternative is [<unordered_map>](../stdcpplib/-unordered_map-.md).  
  
 Defines the container template classes hash_map and hash_multimap and their supporting templates.  
  
 In Visual C++ .NET 2003, members of the <hash_map> and <hash_set> header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [stdext Namespace](../stdcpplib/stdext-namespace.md) for more information.  
  
## Syntax  
  
```  
#include <hash_map>  
  
```  
  
### Operators  
  
|Hash_map version|Hash_multimap version|Description|  
|-----------------------|----------------------------|-----------------|  
|[operator!= (hash_map)](../stdcpplib/-hash_map--operators.md#operator_neq__hash_map_)|[operator!= (hash_multimap)](../stdcpplib/-hash_map--operators.md#operator_neq)|Tests if the hash_map or hash_multimap object on the left side of the operator is not equal to the hash_map or hash_multimap object on the right side.|  
|[operator== (hash_map)](assetId:///f933cb1c-934d-43f5-aa9e-0b325eb95b85)|[operator== (hash_multimap)](assetId:///3fa378b1-0250-4e3f-a130-dc14103fc5e9)|Tests if the hash_map or hash_multimap object on the left side of the operator is equal to the hash_map or hash_multimap object on the right side.|  
  
### Specialized Template Functions  
  
|Hash_map version|Hash_multimap version|Description|  
|-----------------------|----------------------------|-----------------|  
|[swap (hash_map)](../stdcpplib/hash_map-class.md#hash_map__swap)|[swap (hash_multimap)](../stdcpplib/hash_multimap-class.md#hash_multimap__swap)|Exchanges the elements of two hash_maps or hash_multimaps.|  
  
### Classes  
  
|||  
|-|-|  
|[hash_compare Class](../stdcpplib/hash_compare-class.md)|Describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default **Traits** parameter object to order and hash the elements they contain.|  
|[value_compare Class](../stdcpplib/value_compare-class.md)|Provides a function object that can compare the elements of a hash_map by comparing the values of their keys to determine their relative order in the hash_map.|  
|[hash_map Class](../stdcpplib/hash_map-class.md)|Used for the storage and fast retrieval of data from a collection in which each element is a pair that has a sort key whose value is unique and an associated data value.|  
|[hash_multimap Class](../stdcpplib/hash_multimap-class.md)|Used for the storage and fast retrieval of data from a collection in which each element is a pair that has a sort key whose value need not be unique and an associated data value.|  
  
## Requirements  
 **Header:** <hash_map>  
  
 **Namespace:** stdext  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

