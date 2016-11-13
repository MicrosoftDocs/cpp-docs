---
title: "cache_freelist Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext.cache_freelist"
  - "allocators/stdext::cache_freelist"
  - "stdext::cache_freelist"
  - "cache_freelist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cache_freelist class"
ms.assetid: 840694de-36ba-470f-8dae-2b723d5a8cd9
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# cache_freelist Class
Defines a [block allocator](../standard-library/allocators-header.md) that allocates and deallocates memory blocks of a single size.  
  
## Syntax  
  
```
template <std::size_t Sz, class Max>  
class cache_freelist
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Sz`|The number of elements in the array to be allocated.|  
|`Max`|The max class representing the maximum size of the free list. This can be [max_fixed_size](../standard-library/max-fixed-size-class.md), [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), or [max_variable_size](../standard-library/max-variable-size-class.md).|  
  
## Remarks  
 The cache_freelist template class maintains a free list of memory blocks of size `Sz`. When the free list is full it uses `operator delete` to deallocate memory blocks. When the free list is empty it uses `operator new` to allocate new memory blocks. The maximum size of the free list is determined by the class max class passed in the `Max` parameter.  
  
 Each memory block holds `Sz` bytes of usable memory and the data that `operator new` and `operator delete` require.  
  
### Constructors  
  
|||  
|-|-|  
|[cache_freelist](#cache_freelist__cache_freelist)|Constructs an object of type `cache_freelist`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#cache_freelist__allocate)|Allocates a block of memory.|  
|[deallocate](#cache_freelist__deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="cache_freelist__allocate"></a>  cache_freelist::allocate  
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
  
##  <a name="cache_freelist__cache_freelist"></a>  cache_freelist::cache_freelist  
 Constructs an object of type `cache_freelist`.  
  
```
cache_freelist();
```  
  
### Remarks  
  
##  <a name="cache_freelist__deallocate"></a>  cache_freelist::deallocate  
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
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



