---
title: "CGlobalHeap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CGlobalHeap"
  - "ATL::CGlobalHeap"
  - "CGlobalHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGlobalHeap class"
ms.assetid: e348d838-3aa7-4bee-a1b3-cd000c99f834
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
# CGlobalHeap Class
This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 global heap functions.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CGlobalHeap : public IAtlMemMgr
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CGlobalHeap::Allocate](#cglobalheap__allocate)|Call this method to allocate a block of memory.|  
|[CGlobalHeap::Free](#cglobalheap__free)|Call this method to free a block of memory allocated by this memory manager.|  
|[CGlobalHeap::GetSize](#cglobalheap__getsize)|Call this method to get the allocated size of a memory block allocated by this memory manager.|  
|[CGlobalHeap::Reallocate](#cglobalheap__reallocate)|Call this method to reallocate memory allocated by this memory manager.|  
  
## Remarks  
 `CGlobalHeap` implements memory allocation functions using the Win32 global heap functions.  
  
> [!NOTE]
>  The global heap functions are slower than other memory management functions and do not provide as many features. Therefore, new applications should use the [heap functions](http://msdn.microsoft.com/library/windows/desktop/aa366711). These are available in the [CWin32Heap](../../atl/reference/cwin32heap-class.md) class. Global functions are still used by DDE and the clipboard functions.  
  
## Example  
 See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CGlobalHeap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="cglobalheap__allocate"></a>  CGlobalHeap::Allocate  
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
 Call [CGlobalHeap::Free](#cglobalheap__free) or [CGlobalHeap::Reallocate](#cglobalheap__reallocate) to free the memory allocated by this method.  
  
 Implemented using [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) with a flag parameter of **GMEM_FIXED**.  
  
##  <a name="cglobalheap__free"></a>  CGlobalHeap::Free  
 Call this method to free a block of memory allocated by this memory manager.  
  
```
virtual void Free(void* p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579).  
  
##  <a name="cglobalheap__getsize"></a>  CGlobalHeap::GetSize  
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
 Implemented using [GlobalSize](http://msdn.microsoft.com/library/windows/desktop/aa366593).  
  
##  <a name="cglobalheap__reallocate"></a>  CGlobalHeap::Reallocate  
 Call this method to reallocate memory allocated by this memory manager.  
  
```
virtual __declspec(allocator) void* Reallocate(
    void* p,  size_t nBytes) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CGlobalHeap::Free](#cglobalheap__free) to free the memory allocated by this method.  
  
 Implemented using [GlobalReAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366590).  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)
