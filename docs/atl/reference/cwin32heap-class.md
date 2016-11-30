---
title: "CWin32Heap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CWin32Heap"
  - "ATL.CWin32Heap"
  - "CWin32Heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWin32Heap class"
ms.assetid: 69176022-ed98-4e3b-96d8-116b0c58ac95
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
# CWin32Heap Class
This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 heap allocation functions.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CWin32Heap : public IAtlMemMgr
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWin32Heap::CWin32Heap](#cwin32heap__cwin32heap)|The constructor.|  
|[CWin32Heap::~CWin32Heap](#cwin32heap___dtorcwin32heap)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWin32Heap::Allocate](#cwin32heap__allocate)|Allocates a block of memory from the heap object.|  
|[CWin32Heap::Attach](#cwin32heap__attach)|Attaches the heap object to an existing heap.|  
|[CWin32Heap::Detach](#cwin32heap__detach)|Detaches the heap object from an existing heap.|  
|[CWin32Heap::Free](#cwin32heap__free)|Frees memory previously allocated from the heap.|  
|[CWin32Heap::GetSize](#cwin32heap__getsize)|Returns the size of a memory block allocated from the heap object.|  
|[CWin32Heap::Reallocate](#cwin32heap__reallocate)|Reallocates a block of memory from the heap object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWin32Heap::m_bOwnHeap](#cwin32heap__m_bownheap)|A flag used to determine current ownership of the heap handle.|  
|[CWin32Heap::m_hHeap](#cwin32heap__m_hheap)|Handle to the heap object.|  
  
## Remarks  
 `CWin32Heap` implements memory allocation methods using the Win32 heap allocation functions, including [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597) and [HeapFree](http://msdn.microsoft.com/library/windows/desktop/aa366701). Unlike other Heap classes, `CWin32Heap` requires a valid heap handle to be provided before memory is allocated: the other classes default to using the process heap. The handle can be supplied to the constructor or to the [CWin32Heap::Attach](#cwin32heap__attach) method. See the [CWin32Heap::CWin32Heap](#cwin32heap__cwin32heap) method for more details.  
  
## Example  
 See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Inheritance Hierarchy  
 `IAtlMemMgr`  
  
 `CWin32Heap`  
  
## Requirements  
 **Header:** atlmem.h  
  
##  <a name="cwin32heap__allocate"></a>  CWin32Heap::Allocate  
 Allocates a block of memory from the heap object.  
  
```
virtual __declspec(allocator) void* Allocate(size_t   nBytes) throw();
```  
  
### Parameters  
 `nBytes`  
 The requested number of bytes in the new memory block.  
  
### Return Value  
 Returns a pointer to the newly allocated memory block.  
  
### Remarks  
 Call [CWin32Heap::Free](#cwin32heap__free) or [CWin32Heap::Reallocate](#cwin32heap__reallocate) to free the memory allocated by this method.  
  
 Implemented using [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597).  
  
##  <a name="cwin32heap__attach"></a>  CWin32Heap::Attach  
 Attaches the heap object to an existing heap.  
  
```
void Attach(
    HANDLE hHeap,
    bool bTakeOwnership) throw();
```  
  
### Parameters  
 `hHeap`  
 An existing heap handle.  
  
 `bTakeOwnership`  
 A flag indicating if the `CWin32Heap` object is to take ownership over the resources of the heap.  
  
### Remarks  
 If `bTakeOwnership` is TRUE, the `CWin32Heap` object is responsible for deleting the heap handle.  
  
##  <a name="cwin32heap__cwin32heap"></a>  CWin32Heap::CWin32Heap  
 The constructor.  
  
```
CWin32Heap() throw();
CWin32Heap(
 HANDLE  hHeap) throw();
CWin32Heap(
 DWORD  dwFlags,
    size_t nInitialSize,
    size_t nMaxSize = 0);
```  
  
### Parameters  
 `hHeap`  
 An existing heap object.  
  
 `dwFlags`  
 Flags used in creating the heap.  
  
 *nInitialSize*  
 The initial size of the heap.  
  
 `nMaxSize`  
 The maximum size of the heap.  
  
### Remarks  
 Before allocating memory, it is necessary to provide the `CWin32Heap` object with a valid heap handle. The simplest way to achieve this is to use the process heap:  
  
 [!code-cpp[NVC_ATL_Utilities#92](../../atl/codesnippet/cpp/cwin32heap-class_1.cpp)]  
  
 It is also possible to supply an existing heap handle to the constructor, in which case the new object does not take over ownership of the heap. The original heap handle will still be valid when the `CWin32Heap` object is deleted.  
  
 An existing heap can also be attached to the new object, using [CWin32Heap::Attach](#cwin32heap__attach).  
  
 If a heap is required where operations are all performed from a single thread, the best way is to create the object as follows:  
  
 [!code-cpp[NVC_ATL_Utilities#93](../../atl/codesnippet/cpp/cwin32heap-class_2.cpp)]  
  
 The parameter **HEAP_NO_SERIALIZE** specifies that mutual exclusion will not be used when the heap functions allocate and free memory, with an according increase in performance.  
  
 The third parameter defaults to 0, which allows the heap to grow as required. See [HeapCreate](http://msdn.microsoft.com/library/windows/desktop/aa366599\(v=vs.85\).aspx) for an explanation of the memory sizes and flags.  
  
##  <a name="cwin32heap___dtorcwin32heap"></a>  CWin32Heap::~CWin32Heap  
 The destructor.  
  
```
~CWin32Heap() throw();
```  
  
### Remarks  
 Destroys the heap handle if the `CWin32Heap` object has ownership of the heap.  
  
##  <a name="cwin32heap__detach"></a>  CWin32Heap::Detach  
 Detaches the heap object from an existing heap.  
  
```
HANDLE Detach() throw();
```  
  
### Return Value  
 Returns the handle to the heap to which the object was previously attached.  
  
##  <a name="cwin32heap__free"></a>  CWin32Heap::Free  
 Frees memory previously allocated from the heap by [CWin32Heap::Allocate](#cwin32heap__allocate) or [CWin32Heap::Reallocate](#cwin32heap__reallocate).  
  
```
virtual void Free(void* p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to the block of memory to free. NULL is a valid value and does nothing.  
  
##  <a name="cwin32heap__getsize"></a>  CWin32Heap::GetSize  
 Returns the size of a memory block allocated from the heap object.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### Parameters  
 `p`  
 Pointer to the memory block whose size the method will obtain. This is a pointer returned by [CWin32Heap::Allocate](#cwin32heap__allocate) or [CWin32Heap::Reallocate](#cwin32heap__reallocate).  
  
### Return Value  
 Returns the size, in bytes, of the allocated memory block.  
  
##  <a name="cwin32heap__m_bownheap"></a>  CWin32Heap::m_bOwnHeap  
 A flag used to determine current ownership of the heap handle stored in [m_hHeap](#cwin32heap__m_hheap).  
  
```
bool m_bOwnHeap;
```  
  
##  <a name="cwin32heap__m_hheap"></a>  CWin32Heap::m_hHeap  
 Handle to the heap object.  
  
```
HANDLE m_hHeap;
```  
  
### Remarks  
 A variable used to store a handle to the heap object.  
  
##  <a name="cwin32heap__reallocate"></a>  CWin32Heap::Reallocate  
 Reallocates a block of memory from the heap object.  
  
```
virtual __declspec(allocator) void* Reallocate(
    void* p,
    size_t nBytes) throw();
```  
  
### Parameters  
 `p`  
 Pointer to the block of memory to reallocate.  
  
 `nBytes`  
 The new size in bytes of the allocated block. The block can be made larger or smaller.  
  
### Return Value  
 Returns a pointer to the newly allocated memory block.  
  
### Remarks  
 If `p` is NULL, it's assumed that the memory block has not yet been allocated and [CWin32Heap::Allocate](#cwin32heap__allocate) is called, with an argument of `nBytes`.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)
