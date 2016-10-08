---
title: "sync_none Class"
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
ms.assetid: f7473cee-14f3-4fe1-88bc-68cd085e59e1
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# sync_none Class
Describes a [synchronization filter](../VS_visualcpp/-allocators-.md) that provides no synchronization.  
  
## Syntax  
  
```  
template <class Cache> class sync_none  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache associated with the synchronization filter. This can be [cache_chunklist](../VS_visualcpp/cache_chunklist-Class.md), [cache_freelist](../VS_visualcpp/cache_freelist-Class.md), or [cache_suballoc](../VS_visualcpp/cache_suballoc-Class.md).|  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#sync_none__allocate)|Allocates a block of memory.|  
|[deallocate](#sync_none__deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
|[equals](#sync_none__equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** <allocators\>  
  
 **Namespace:** stdext  
  
##  <a name="sync_none__allocate"></a>  sync_none::allocate  
 Allocates a block of memory.  
  
```  
void *allocate(std::size_t _Count);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Count`|The number of elements in the array to be allocated.|  
  
### Remarks  
 The member function returns `cache.allocate(_Count)`, where `cache` is the cache object.  
  
##  <a name="sync_none__deallocate"></a>  sync_none::deallocate  
 Frees a specified number of objects from storage beginning at a specified position.  
  
```  
void deallocate(void* _Ptr, std::size_t _Count);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Ptr`|A pointer to the first object to be deallocated from storage.|  
|`_Count`|The number of objects to be deallocated from storage.|  
  
### Remarks  
 The member function calls `cache.deallocate(_Ptr, _Count)`, where `cache` represents the cache object.  
  
##  <a name="sync_none__equals"></a>  sync_none::equals  
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
 The member function always returns `true`.  
  
### Remarks  
  
## See Also  
 [<allocators\>](../VS_visualcpp/-allocators-.md)