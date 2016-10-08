---
title: "sync_per_container Class"
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
ms.assetid: 0b4b2904-b668-4d94-a422-d4f919cbffab
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
# sync_per_container Class
Describes a [synchronization filter](../VS_visualcpp/-allocators-.md) that provides a separate cache object for each allocator object.  
  
## Syntax  
  
```  
template <class Cache> class sync_per_container  
    : public Cache  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Cache`|The type of cache associated with the synchronization filter. This can be [cache_chunklist](../VS_visualcpp/cache_chunklist-Class.md), [cache_freelist](../VS_visualcpp/cache_freelist-Class.md), or [cache_suballoc](../VS_visualcpp/cache_suballoc-Class.md).|  
  
### Member Functions  
  
|||  
|-|-|  
|[equals](#sync_per_container__equals)|Compares two caches for equality.|  
  
## Requirements  
 **Header:** <allocators\>  
  
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
 [<allocators\>](../VS_visualcpp/-allocators-.md)