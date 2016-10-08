---
title: "CCRTHeap Class"
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
ms.assetid: 321bd6c5-1856-4ff7-8590-95044a1209f7
caps.latest.revision: 13
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
# CCRTHeap Class
This class implements [IAtlMemMgr](../VS_visualcpp/IAtlMemMgr-Class.md) using the CRT heap functions.  
  
## Syntax  
  
```  
class CCRTHeap : public IAtlMemMgr  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCRTHeap::Allocate](../Topic/CCRTHeap::Allocate.md)|Call this method to allocate a block of memory.|  
|[CCRTHeap::Free](../Topic/CCRTHeap::Free.md)|Call this method to free a block of memory allocated by this memory manager.|  
|[CCRTHeap::GetSize](../Topic/CCRTHeap::GetSize.md)|Call this method to get the allocated size of a memory block allocated by this memory manager.|  
|[CCRTHeap::Reallocate](../Topic/CCRTHeap::Reallocate.md)|Call this method to reallocate memory allocated by this memory manager.|  
  
## Remarks  
 `CCRTHeap` implements memory allocation functions using the CRT heap functions, including [malloc](../VS_visualcpp/malloc.md), [free](../VS_visualcpp/free.md), [realloc](../VS_visualcpp/realloc.md), and [_msize](../VS_visualcpp/_msize.md).  
  
## Example  
 See the example for [IAtlMemMgr](../VS_visualcpp/IAtlMemMgr-Class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CCRTHeap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="ccrtheap__allocate"></a>  CCRTHeap::Allocate  
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
 Call [CCRTHeap::Free](../Topic/CCRTHeap::Free.md) or [CCRTHeap::Reallocate](../Topic/CCRTHeap::Reallocate.md) to free the memory allocated by this method.  
  
 Implemented using [malloc](../VS_visualcpp/malloc.md).  
  
##  <a name="ccrtheap__free"></a>  CCRTHeap::Free  
 Call this method to free a block of memory allocated by this memory manager.  
  
```  
virtual void Free(    void* p ) throw();  
```  
  
### Parameters  
 `p`  
 Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.  
  
### Remarks  
 Implemented using [free](../VS_visualcpp/free.md).  
  
##  <a name="ccrtheap__getsize"></a>  CCRTHeap::GetSize  
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
 Implemented using [_msize](../VS_visualcpp/_msize.md).  
  
##  <a name="ccrtheap__reallocate"></a>  CCRTHeap::Reallocate  
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
 Call [CCRTHeap::Free](../Topic/CCRTHeap::Free.md) to free the memory allocated by this method. Implemented using [realloc](../VS_visualcpp/realloc.md).  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [CComHeap Class](../VS_visualcpp/CComHeap-Class.md)   
 [CWin32Heap Class](../VS_visualcpp/CWin32Heap-Class.md)   
 [CLocalHeap Class](../VS_visualcpp/CLocalHeap-Class.md)   
 [CGlobalHeap Class](../VS_visualcpp/CGlobalHeap-Class.md)   
 [IAtlMemMgr Class](../VS_visualcpp/IAtlMemMgr-Class.md)