---
title: "CLocalHeap Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "ATL.CLocalHeap"
  - "ATL::CLocalHeap"
  - "CLocalHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLocalHeap class"
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
caps.latest.revision: 15
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
# CLocalHeap Class
This class implements [IAtlMemMgr](../atl/iatlmemmgr-class.md) using the Win32 local heap functions.  
  
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
|[CLocalHeap::Allocate](../Topic/CLocalHeap::Allocate.md)|Call this method to allocate a block of memory.|  
|[CLocalHeap::Free](../Topic/CLocalHeap::Free.md)|Call this method to free a block of memory allocated by this memory manager.|  
|[CLocalHeap::GetSize](../Topic/CLocalHeap::GetSize.md)|Call this method to get the allocated size of a memory block allocated by this memory manager.|  
|[CLocalHeap::Reallocate](../Topic/CLocalHeap::Reallocate.md)|Call this method to reallocate memory allocated by this memory manager.|  
  
## Remarks  
 `CLocalHeap` implements memory allocation functions using the Win32 local heap functions.  
  
> [!NOTE]
>  The local heap functions are slower than other memory management functions and do not provide as many features. Therefore, new applications should use the [heap functions](http://msdn.microsoft.com/library/windows/desktop/aa366711). These are available in the [CWin32Heap](../atl/cwin32heap-class.md) class.  
  
## Example  
 See the example for [IAtlMemMgr](../atl/iatlmemmgr-class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CLocalHeap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="clocalheap__allocate"></a>  CLocalHeap::Allocate  
 Call this method to allocate a block of memory.  
  
```
virtual __declspec(allocator) void* Allocate(size_t   nBytes) throw();
```  
  
### Parameters  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CLocalHeap::Free](../Topic/CLocalHeap::Free.md) or [CLocalHeap::Reallocate](../Topic/CLocalHeap::Reallocate.md) to free the memory allocated by this method.  
  
 Implemented using [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723) with a flag parameter of **LMEM_FIXED**.  
  
##  <a name="clocalheap__free"></a>  CLocalHeap::Free  
 Call this method to free a block of memory allocated by this memory manager.  
  
```
virtual void Free(void*   p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730).  
  
##  <a name="clocalheap__getsize"></a>  CLocalHeap::GetSize  
 Call this method to get the allocated size of a memory block allocated by this memory manager.  
  
```
virtual size_t GetSize(void*   p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
### Return Value  
 Returns the size of the allocated memory block in bytes.  
  
### Remarks  
 Implemented using [LocalSize](http://msdn.microsoft.com/library/windows/desktop/aa366745).  
  
##  <a name="clocalheap__reallocate"></a>  CLocalHeap::Reallocate  
 Call this method to reallocate memory allocated by this memory manager.  
  
```
virtual __declspec(allocator) void* Reallocate(
    void*   p,
    size_t   nBytes) throw();
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CLocalHeap::Free](../Topic/CLocalHeap::Free.md) to free the memory allocated by this method.  
  
 Implemented using [LocalReAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366742).  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)   
 [CComHeap Class](../atl/ccomheap-class.md)   
 [CWin32Heap Class](../atl/cwin32heap-class.md)   
 [CGlobalHeap Class](../atl/cglobalheap-class.md)   
 [CCRTHeap Class](../atl/ccrtheap-class.md)   
 [IAtlMemMgr Class](../atl/iatlmemmgr-class.md)

