---
title: "CCRTAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCRTAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCRTAllocator class"
ms.assetid: 3e1b8cb0-859a-41ab-8e93-6f0b5ceca49d
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
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
# CCRTAllocator Class
This class provides methods for managing memory using CRT memory routines.  
  
## Syntax  
  
```
class ATL::CCRTAllocator
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCRTAllocator::Allocate](#ccrtallocator__allocate)|(Static) Call this method to allocate memory.|  
|[CCRTAllocator::Free](#ccrtallocator__free)|(Static) Call this method to free memory.|  
|[CCRTAllocator::Reallocate](#ccrtallocator__reallocate)|(Static) Call this method to reallocate memory.|  
  
## Remarks  
 This class is used by [CHeapPtr](../../atl/reference/cheapptr-class.md) to provide the CRT memory allocation routines. The counterpart class, [CComAllocator](../../atl/reference/ccomallocator-class.md), provides the same methods using COM routines.  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="ccrtallocator__allocate"></a>  CCRTAllocator::Allocate  
 Call this static function to allocate memory.  
  
```
static __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### Parameters  
 `nBytes`  
 The number of bytes to allocate.  
  
### Return Value  
 Returns a void pointer to the allocated space, or NULL if there is insufficient memory available.  
  
### Remarks  
 Allocates memory. See [malloc](../../c-runtime-library/reference/malloc.md) for more details.  
  
##  <a name="ccrtallocator__free"></a>  CCRTAllocator::Free  
 Call this static function to free memory.  
  
```
static void Free(void* p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to the allocated memory.  
  
### Remarks  
 Frees the allocated memory. See [free](../../c-runtime-library/reference/free.md) for more details.  
  
##  <a name="ccrtallocator__reallocate"></a>  CCRTAllocator::Reallocate  
 Call this static function to reallocate memory.  
  
```
static __declspec(allocator) void* Reallocate(
    void* p,  size_t nBytes) throw();
```  
  
### Parameters  
 `p`  
 Pointer to the allocated memory.  
  
 `nBytes`  
 The number of bytes to reallocate.  
  
### Return Value  
 Returns a void pointer to the allocated space, or NULL if there is insufficient memory.  
  
### Remarks  
 Resizes the amount of allocated memory. See [realloc](../../c-runtime-library/reference/realloc.md) for more details.  
  
## See Also  
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CComAllocator Class](../../atl/reference/ccomallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
