---
title: "rts_alloc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["allocators/stdext::rts_alloc", "allocators/stdext::rts_alloc::allocate", "allocators/stdext::rts_alloc::deallocate", "allocators/stdext::rts_alloc::equals"]
dev_langs: ["C++"]
helpviewer_keywords: ["stdext::rts_alloc", "stdext::rts_alloc [C++], allocate", "stdext::rts_alloc [C++], deallocate", "stdext::rts_alloc [C++], equals"]
ms.assetid: ab41bffa-83d1-4a1c-87b9-5707d516931f
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# rts_alloc Class
The rts_alloc template class describes a [filter](../standard-library/allocators-header.md) that holds an array of cache instances and determines which instance to use for allocation and deallocation at runtime instead of at compile time.  
  
## Syntax  
  
```
template <class Cache>  
class rts_alloc
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache instances contained in the array. This can be [cache_chunklist Class](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md), or [cache_suballoc](../standard-library/cache-suballoc-class.md).|  
  
## Remarks  
 This template class holds multiple block allocator instances and determines which instance to use for allocation or deallocation at runtime instead of at compile time. It is used with compilers that cannot compile rebind.  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#allocate)|Allocates a block of memory.|  
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
|[equals](#equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="allocate"></a>  rts_alloc::allocate  
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
 The member function returns `caches[_IDX].allocate(count)`, where the index `_IDX` is determined by the requested block size `count`, or, if `count` is too large, it returns `operator new(count)`. `cache`, which represents the cache object.  
  
##  <a name="deallocate"></a>  rts_alloc::deallocate  
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
 The member function calls `caches[_IDX].deallocate(ptr, count)`, where the index `_IDX` is determined by the requested block size `count`, or, if `count` is too large, it returns `operator delete(ptr)`.  
  
##  <a name="equals"></a>  rts_alloc::equals  
 Compares two caches for equality.  
  
```
bool equals(const sync<_Cache>& _Other) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Cache`|The cache object associated with the filter.|  
|`_Other`|The cache object to compare for equality.|  
  
### Remarks  
 `true` if the result of `caches[0].equals(other.caches[0])`; otherwise, `false`. `caches` represents the array of cache objects.  
  
## See Also  
 [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)   
 [\<allocators>](../standard-library/allocators-header.md)



