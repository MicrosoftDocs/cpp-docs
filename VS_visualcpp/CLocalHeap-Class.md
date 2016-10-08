---
title: "CLocalHeap Class"
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
ms.topic: reference
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
caps.latest.revision: 14
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
# CLocalHeap Class
This class implements [IAtlMemMgr](../VS_visualcpp/IAtlMemMgr-Class.md) using the Win32 local heap functions.  
  
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
>  The local heap functions are slower than other memory management functions and do not provide as many features. Therefore, new applications should use the [heap functions](http://msdn.microsoft.com/library/windows/desktop/aa366711). These are available in the [CWin32Heap](../VS_visualcpp/CWin32Heap-Class.md) class.  
  
## Example  
 See the example for [IAtlMemMgr](../VS_visualcpp/IAtlMemMgr-Class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CLocalHeap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="clocalheap__allocate"></a>  CLocalHeap::Allocate  
 Call this method to allocate a block of memory.  
  
```  
  
virtual __declspec(allocator) void* Allocate(  
      size_t  nBytes  
   ) throw( );  
  
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
  
virtual void Free(  
      void*  p  
   ) throw( );  
  
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730).  
  
##  <a name="clocalheap__getsize"></a>  CLocalHeap::GetSize  
 Call this method to get the allocated size of a memory block allocated by this memory manager.  
  
```  
  
virtual size_t GetSize(  
      void*  p  
   ) throw( );  
  
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
      void*  p,  
      size_t  nBytes  
   ) throw( );  
  
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
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [CComHeap Class](../VS_visualcpp/CComHeap-Class.md)   
 [CWin32Heap Class](../VS_visualcpp/CWin32Heap-Class.md)   
 [CGlobalHeap Class](../VS_visualcpp/CGlobalHeap-Class.md)   
 [CCRTHeap Class](../VS_visualcpp/CCRTHeap-Class.md)   
 [IAtlMemMgr Class](../VS_visualcpp/IAtlMemMgr-Class.md)