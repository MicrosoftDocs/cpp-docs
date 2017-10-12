---
title: "sync_shared Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["allocators/stdext::sync_shared", "allocators/stdext::sync_shared::allocate", "allocators/stdext::sync_shared::deallocate", "allocators/stdext::sync_shared::equals"]
dev_langs: ["C++"]
helpviewer_keywords: ["stdext::sync_shared", "stdext::sync_shared [C++], allocate", "stdext::sync_shared [C++], deallocate", "stdext::sync_shared [C++], equals"]
ms.assetid: cab3af9e-3d1a-4f2c-8580-0f89e5687d8e
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# sync_shared Class
Describes a [synchronization filter](../standard-library/allocators-header.md) that uses a mutex to control access to a cache object that is shared by all allocators.  
  
## Syntax  
  
```
template <class Cache>  
class sync_shared
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache associated with the synchronization filter. This can be [cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md), or [cache_suballoc](../standard-library/cache-suballoc-class.md).|  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#allocate)|Allocates a block of memory.|  
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
|[equals](#equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="allocate"></a>  sync_shared::allocate  
 Allocates a block of memory.  
  
```
void *allocate(std::size_t count);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`count`|The number of elements in the array to be allocated.|  
  
### Return Value  
 A pointer to the allocated object.  
  
### Remarks  
 The member function locks the mutex, calls `cache.allocate(count)`, unlocks the mutex, and returns the result of the earlier call to `cache.allocate(count)`. `cache` represents the current cache object.  
  
##  <a name="deallocate"></a>  sync_shared::deallocate  
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
 This member function locks the mutex, calls `cache.deallocate(ptr, count)`, where `cache` represents the cache object, and then unlocks the mutex.  
  
##  <a name="equals"></a>  sync_shared::equals  
 Compares two caches for equality.  
  
```
bool equals(const sync_shared<Cache>& Other) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache associated with the synchronization filter.|  
|`Other`|The cache to compare for equality.|  
  
### Return Value  
 `true` if the result of `cache.equals(Other.cache)`, where `cache` represents the cache object, is `true`; otherwise, `false`.  
  
### Remarks  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



