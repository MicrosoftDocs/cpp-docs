---
title: "rts_alloc Class"
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
  - "stdext::rts_alloc"
  - "allocators/stdext::rts_alloc"
  - "rts_alloc"
  - "stdext.rts_alloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rts_alloc class"
ms.assetid: ab41bffa-83d1-4a1c-87b9-5707d516931f
caps.latest.revision: 18
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
# rts_alloc Class
The rts_alloc template class describes a [filter](../stdcpplib/-allocators-.md) that holds an array of cache instances and determines which instance to use for allocation and deallocation at runtime instead of at compile time.  
  
## Syntax  
  
```
template <class Cache> class rts_alloc
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache instances contained in the array. This can be [cache_chunklist Class](../stdcpplib/cache_chunklist-class.md), [cache_freelist](../stdcpplib/cache_freelist-class.md), or [cache_suballoc](../stdcpplib/cache_suballoc-class.md).|  
  
## Remarks  
 This template class holds multiple block allocator instances and determines which instance to use for allocation or deallocation at runtime instead of at compile time. It is used with compilers that cannot compile rebind.  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#rts_alloc__allocate)|Allocates a block of memory.|  
|[deallocate](#rts_alloc__deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
|[equals](#rts_alloc__equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="rts_alloc__allocate"></a>  rts_alloc::allocate  
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
  
##  <a name="rts_alloc__deallocate"></a>  rts_alloc::deallocate  
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
  
##  <a name="rts_alloc__equals"></a>  rts_alloc::equals  
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
 [ALLOCATOR_DECL](../stdcpplib/-allocators--functions.md#allocator_decl)   
 [\<allocators>](../stdcpplib/-allocators-.md)

