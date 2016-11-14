---
title: "sync_per_container Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext.sync_per_container"
  - "sync_per_container"
  - "stdext::sync_per_container"
  - "allocators/stdext::sync_per_container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sync_per_container class"
ms.assetid: 0b4b2904-b668-4d94-a422-d4f919cbffab
caps.latest.revision: 21
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
# sync_per_container Class
Describes a [synchronization filter](../standard-library/allocators-header.md) that provides a separate cache object for each allocator object.  
  
## Syntax  
  
```
template <class Cache>  
class sync_per_container
 : public Cache
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache associated with the synchronization filter. This can be [cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md), or [cache_suballoc](../standard-library/cache-suballoc-class.md).|  
  
### Member Functions  
  
|||  
|-|-|  
|[equals](#sync_per_container__equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="sync_per_container__equals"></a>  sync_per_container::equals  
 Compares two caches for equality.  
  
```
bool equals(const sync_per_container<Cache>& Other) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The cache object of the synchronization filter.|  
|`Other`|The cache object to compare for equality.|  
  
### Return Value  
 The member function always returns `false`.  
  
### Remarks  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



