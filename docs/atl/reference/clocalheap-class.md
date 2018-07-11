---
title: "CLocalHeap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CLocalHeap", "ATLMEM/ATL::CLocalHeap", "ATLMEM/ATL::CLocalHeap::Allocate", "ATLMEM/ATL::CLocalHeap::Free", "ATLMEM/ATL::CLocalHeap::GetSize", "ATLMEM/ATL::CLocalHeap::Reallocate"]
dev_langs: ["C++"]
helpviewer_keywords: ["CLocalHeap class"]
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CLocalHeap Class
This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 local heap functions.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CLocalHeap : public IAtlMemMgr
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CLocalHeap::Allocate](#allocate)|Call this method to allocate a block of memory.|  
|[CLocalHeap::Free](#free)|Call this method to free a block of memory allocated by this memory manager.|  
|[CLocalHeap::GetSize](#getsize)|Call this method to get the allocated size of a memory block allocated by this memory manager.|  
|[CLocalHeap::Reallocate](#reallocate)|Call this method to reallocate memory allocated by this memory manager.|  
  
## Remarks  
 `CLocalHeap` implements memory allocation functions using the Win32 local heap functions.  
  
> [!NOTE]
>  The local heap functions are slower than other memory management functions and do not provide as many features. Therefore, new applications should use the [heap functions](http://msdn.microsoft.com/library/windows/desktop/aa366711). These are available in the [CWin32Heap](../../atl/reference/cwin32heap-class.md) class.  
  
## Example  
 See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CLocalHeap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="allocate"></a>  CLocalHeap::Allocate  
 Call this method to allocate a block of memory.  
  
```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### Parameters  
 *nBytes*  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CLocalHeap::Free](#free) or [CLocalHeap::Reallocate](#reallocate) to free the memory allocated by this method.  
  
 Implemented using [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723) with a flag parameter of LMEM_FIXED.  
  
##  <a name="free"></a>  CLocalHeap::Free  
 Call this method to free a block of memory allocated by this memory manager.  
  
```
virtual void Free(void* p) throw();
```  
  
### Parameters  
 *p*  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730).  
  
##  <a name="getsize"></a>  CLocalHeap::GetSize  
 Call this method to get the allocated size of a memory block allocated by this memory manager.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### Parameters  
 *p*  
 Pointer to memory previously allocated by this memory manager.  
  
### Return Value  
 Returns the size of the allocated memory block in bytes.  
  
### Remarks  
 Implemented using [LocalSize](http://msdn.microsoft.com/library/windows/desktop/aa366745).  
  
##  <a name="reallocate"></a>  CLocalHeap::Reallocate  
 Call this method to reallocate memory allocated by this memory manager.  
  
```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### Parameters  
 *p*  
 Pointer to memory previously allocated by this memory manager.  
  
 *nBytes*  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CLocalHeap::Free](#free) to free the memory allocated by this method.  
  
 Implemented using [LocalReAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366742).  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)
