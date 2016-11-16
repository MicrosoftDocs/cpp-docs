---
title: "sync_per_thread Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext::sync_per_thread"
  - "sync_per_thread"
  - "allocators/stdext::sync_per_thread"
  - "stdext.sync_per_thread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sync_per_thread class"
ms.assetid: 47bf75f8-5b02-4760-b1d3-3099d08fe14c
caps.latest.revision: 19
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
# sync_per_thread Class
Describes a [synchronization filter](../standard-library/allocators-header.md) that provides a separate cache object for each thread.  
  
## Syntax  
  
```
template <class Cache>  
class sync_per_thread
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache associated with the synchronization filter. This can be [cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md), or [cache_suballoc](../standard-library/cache-suballoc-class.md).|  
  
## Remarks  
 Allocators that use `sync_per_thread` can compare equal even though blocks allocated in one thread cannot be deallocated from another thread. When using one of these allocators memory blocks allocated in one thread should not be made visible to other threads. In practice this means that a container that uses one of these allocators should only be accessed by a single thread.  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#sync_per_thread__allocate)|Allocates a block of memory.|  
|[deallocate](#sync_per_thread__deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
|[equals](#sync_per_thread__equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="sync_per_thread__allocate"></a>  sync_per_thread::allocate  
 Allocates a block of memory.  
  
```
void *allocate(std::size_t count);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`count`|The number of elements in the array to be allocated.|  
  
### Remarks  
 The member function returns the result of a call to `cache::allocate(count)` on the cache object belonging to the current thread. If no cache object has been allocated for the current thread, it first allocates one.  
  
##  <a name="sync_per_thread__deallocate"></a>  sync_per_thread::deallocate  
 Frees a specified number of objects from storage beginning at a specified position.  
  
```
void deallocate(void* ptr, std::size_t count);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the first object to be deallocated from storage.|  
|`count`|The number of objects to be deallocated from storage.|  
  
### Remarks  
 The member function calls `deallocate` on the cache object belonging to the current thread. If no cache object has been allocated for the current thread, it first allocates one.  
  
##  <a name="sync_per_thread__equals"></a>  sync_per_thread::equals  
 Compares two caches for equality.  
  
```
bool equals(const sync<Cache>& Other) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The cache object of the synchronization filter.|  
|`Other`|The cache object to compare for equality.|  
  
### Return Value  
 `false` if no cache object has been allocated for this object or for `Other` in the current thread. Otherwise it returns the result of applying `operator==` to the two cache objects.  
  
### Remarks  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



