---
title: "CComHeap Class"
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
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
caps.latest.revision: 16
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
# CComHeap Class
This class implements [IAtlMemMgr](../VS_visualcpp/IAtlMemMgr-Class.md) using the COM memory allocation functions.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
class CComHeap : public IAtlMemMgr  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComHeap::Allocate](../Topic/CComHeap::Allocate.md)|Call this method to allocate a block of memory.|  
|[CComHeap::Free](../Topic/CComHeap::Free.md)|Call this method to free a block of memory allocated by this memory manager.|  
|[CComHeap::GetSize](../Topic/CComHeap::GetSize.md)|Call this method to get the allocated size of a memory block allocated by this memory manager.|  
|[CComHeap::Reallocate](../Topic/CComHeap::Reallocate.md)|Call this method to reallocate memory allocated by this memory manager.|  
  
## Remarks  
 `CComHeap` implements memory allocation functions using the COM allocation functions, including [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722), [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226), and [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280). The maximum amount of memory that can be allocated is equal to **INT_MAX** (2147483647) bytes.  
  
## Example  
 See the example for [IAtlMemMgr](../VS_visualcpp/IAtlMemMgr-Class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CComHeap`  
  
## Requirements  
 **Header:** ATLComMem.h  
  
##  <a name="ccomheap__allocate"></a>  CComHeap::Allocate  
 Call this method to allocate a block of memory.  
  
```  
virtual __declspec(allocator) void* Allocate(    size_t nBytes ) throw();  
```  
  
### Parameters  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CComHeap::Free](../Topic/CComHeap::Free.md) or [CComHeap::Reallocate](../Topic/CComHeap::Reallocate.md) to free the memory allocated by this method.  
  
 Implemented using [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727).  
  
##  <a name="ccomheap__free"></a>  CComHeap::Free  
 Call this method to free a block of memory allocated by this memory manager.  
  
```  
virtual void Free(    void* p ) throw();  
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722).  
  
##  <a name="ccomheap__getsize"></a>  CComHeap::GetSize  
 Call this method to get the allocated size of a memory block allocated by this memory manager.  
  
```  
virtual size_t GetSize(    void* p ) throw();  
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
### Return Value  
 Returns the size of the allocated memory block in bytes.  
  
### Remarks  
 Implemented using [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226).  
  
##  <a name="ccomheap__reallocate"></a>  CComHeap::Reallocate  
 Call this method to reallocate memory allocated by this memory manager.  
  
```  
virtual __declspec(allocator) void* Reallocate(  
    void* p,  
    size_t nBytes ) throw();  
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager.  
  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the start of the newly allocated memory block.  
  
### Remarks  
 Call [CComHeap::Free](../Topic/CComHeap::Free.md) to free the memory allocated by this method.  
  
 Implemented using [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280).  
  
## See Also  
 [DynamicConsumer Sample](../VS_visualcpp/Visual-C---Samples.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [CWin32Heap Class](../VS_visualcpp/CWin32Heap-Class.md)   
 [CLocalHeap Class](../VS_visualcpp/CLocalHeap-Class.md)   
 [CGlobalHeap Class](../VS_visualcpp/CGlobalHeap-Class.md)   
 [CCRTHeap Class](../VS_visualcpp/CCRTHeap-Class.md)   
 [IAtlMemMgr Class](../VS_visualcpp/IAtlMemMgr-Class.md)