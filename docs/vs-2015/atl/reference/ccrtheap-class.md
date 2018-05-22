---
title: "CCRTHeap Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CCRTHeap"
  - "ATL.CCRTHeap"
  - "CCRTHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCRTHeap class"
ms.assetid: 321bd6c5-1856-4ff7-8590-95044a1209f7
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCRTHeap Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CCRTHeap Class](https://docs.microsoft.com/cpp/atl/reference/ccrtheap-class).  
  
  
This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the CRT heap functions.  
  
## Syntax  
  
```
class CCRTHeap : public IAtlMemMgr
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCRTHeap::Allocate](#ccrtheap__allocate)|Call this method to allocate a block of memory.|  
|[CCRTHeap::Free](#ccrtheap__free)|Call this method to free a block of memory allocated by this memory manager.|  
|[CCRTHeap::GetSize](#ccrtheap__getsize)|Call this method to get the allocated size of a memory block allocated by this memory manager.|  
|[CCRTHeap::Reallocate](#ccrtheap__reallocate)|Call this method to reallocate memory allocated by this memory manager.|  
  
## Remarks  
 `CCRTHeap` implements memory allocation functions using the CRT heap functions, including [malloc](../../c-runtime-library/reference/malloc.md), [free](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md), and [_msize](../../c-runtime-library/reference/msize.md).  
  
## Example  
 See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CCRTHeap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="ccrtheap__allocate"></a>  CCRTHeap::Allocate  
 Call this method to allocate a block of memory.  
  
```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### Parameters  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CCRTHeap::Free](#ccrtheap__free) or [CCRTHeap::Reallocate](#ccrtheap__reallocate) to free the memory allocated by this method.  
  
 Implemented using [malloc](../../c-runtime-library/reference/malloc.md).  
  
##  <a name="ccrtheap__free"></a>  CCRTHeap::Free  
 Call this method to free a block of memory allocated by this memory manager.  
  
```
virtual void Free(void* p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [free](../../c-runtime-library/reference/free.md).  
  
##  <a name="ccrtheap__getsize"></a>  CCRTHeap::GetSize  
 Call this method to get the allocated size of a memory block allocated by this memory manager.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
### Return Value  
 Returns the size of the allocated memory block in bytes.  
  
### Remarks  
 Implemented using [_msize](../../c-runtime-library/reference/msize.md).  
  
##  <a name="ccrtheap__reallocate"></a>  CCRTHeap::Reallocate  
 Call this method to reallocate memory allocated by this memory manager.  
  
```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CCRTHeap::Free](#ccrtheap__free) to free the memory allocated by this method. Implemented using [realloc](../../c-runtime-library/reference/realloc.md).  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)








