---
title: "cache_chunklist Class"
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
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
caps.latest.revision: 15
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
# cache_chunklist Class
Defines a [block allocator](../VS_visualcpp/-allocators-.md) that allocates and deallocates memory blocks of a single size.  
  
## Syntax  
  
```  
template <std::size_t Sz, std::size_t Nelts = 20> class cache_chunklist  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Sz`|The number of elements in the array to be allocated.|  
  
## Remarks  
 This template class uses `operator new` to allocate chunks of raw memory, suballocating blocks to allocate storage for a memory block when needed; it stores deallocated memory blocks in a separate free list for each chunk, and uses `operator delete` to deallocate a chunk when none of its memory blocks is in use.  
  
 Each memory block holds `Sz` bytes of usable memory and a pointer to the chunk that it belongs to. Each chunk holds `Nelts` memory blocks, three pointers, an int and the data that `operator new` and `operator delete` require.  
  
### Constructors  
  
|||  
|-|-|  
|[cache_chunklist](#cache_chunklist__cache_chunklist)|Constructs an object of type `cache_chunklist`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[allocate](#cache_chunklist__allocate)|Allocates a block of memory.|  
|[deallocate](#cache_chunklist__deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
  
## Requirements  
 **Header:** <allocators\>  
  
 **Namespace:** stdext  
  
##  <a name="cache_chunklist__allocate"></a>  cache_chunklist::allocate  
 Allocates a block of memory.  
  
```  
void *allocate(std::size_t _Count);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Count`|The number of elements in the array to be allocated.|  
  
### Return Value  
 A pointer to the allocated object.  
  
### Remarks  
  
##  <a name="cache_chunklist__cache_chunklist"></a>  cache_chunklist::cache_chunklist  
 Constructs an object of type `cache_chunklist`.  
  
```  
cache_chunklist();  
```  
  
### Remarks  
  
##  <a name="cache_chunklist__deallocate"></a>  cache_chunklist::deallocate  
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
  
## See Also  
 [<allocators\>](../VS_visualcpp/-allocators-.md)