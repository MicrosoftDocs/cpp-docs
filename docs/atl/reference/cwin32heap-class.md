---
description: "Learn more about: CWin32Heap Class"
title: "CWin32Heap Class"
ms.date: "11/04/2016"
f1_keywords: ["CWin32Heap", "ATLMEM/ATL::CWin32Heap", "ATLMEM/ATL::CWin32Heap::CWin32Heap", "ATLMEM/ATL::CWin32Heap::Allocate", "ATLMEM/ATL::CWin32Heap::Attach", "ATLMEM/ATL::CWin32Heap::Detach", "ATLMEM/ATL::CWin32Heap::Free", "ATLMEM/ATL::CWin32Heap::GetSize", "ATLMEM/ATL::CWin32Heap::Reallocate", "ATLMEM/ATL::CWin32Heap::m_bOwnHeap", "ATLMEM/ATL::CWin32Heap::m_hHeap"]
helpviewer_keywords: ["CWin32Heap class"]
ms.assetid: 69176022-ed98-4e3b-96d8-116b0c58ac95
---
# CWin32Heap Class

This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 heap allocation functions.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CWin32Heap : public IAtlMemMgr
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWin32Heap::CWin32Heap](#cwin32heap)|The constructor.|
|[CWin32Heap::~CWin32Heap](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWin32Heap::Allocate](#allocate)|Allocates a block of memory from the heap object.|
|[CWin32Heap::Attach](#attach)|Attaches the heap object to an existing heap.|
|[CWin32Heap::Detach](#detach)|Detaches the heap object from an existing heap.|
|[CWin32Heap::Free](#free)|Frees memory previously allocated from the heap.|
|[CWin32Heap::GetSize](#getsize)|Returns the size of a memory block allocated from the heap object.|
|[CWin32Heap::Reallocate](#reallocate)|Reallocates a block of memory from the heap object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CWin32Heap::m_bOwnHeap](#m_bownheap)|A flag used to determine current ownership of the heap handle.|
|[CWin32Heap::m_hHeap](#m_hheap)|Handle to the heap object.|

## Remarks

`CWin32Heap` implements memory allocation methods using the Win32 heap allocation functions, including [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc) and [HeapFree](/windows/win32/api/heapapi/nf-heapapi-heapfree). Unlike other Heap classes, `CWin32Heap` requires a valid heap handle to be provided before memory is allocated: the other classes default to using the process heap. The handle can be supplied to the constructor or to the [CWin32Heap::Attach](#attach) method. See the [CWin32Heap::CWin32Heap](#cwin32heap) method for more details.

## Example

See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## Inheritance Hierarchy

`IAtlMemMgr`

`CWin32Heap`

## Requirements

**Header:** atlmem.h

## <a name="allocate"></a> CWin32Heap::Allocate

Allocates a block of memory from the heap object.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### Parameters

*nBytes*<br/>
The requested number of bytes in the new memory block.

### Return Value

Returns a pointer to the newly allocated memory block.

### Remarks

Call [CWin32Heap::Free](#free) or [CWin32Heap::Reallocate](#reallocate) to free the memory allocated by this method.

Implemented using [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc).

## <a name="attach"></a> CWin32Heap::Attach

Attaches the heap object to an existing heap.

```cpp
void Attach(HANDLE hHeap, bool bTakeOwnership) throw();
```

### Parameters

*hHeap*<br/>
An existing heap handle.

*bTakeOwnership*<br/>
A flag indicating if the `CWin32Heap` object is to take ownership over the resources of the heap.

### Remarks

If *bTakeOwnership* is TRUE, the `CWin32Heap` object is responsible for deleting the heap handle.

## <a name="cwin32heap"></a> CWin32Heap::CWin32Heap

The constructor.

```
CWin32Heap() throw();
CWin32Heap( HANDLE  hHeap) throw();
CWin32Heap(
    DWORD  dwFlags,
    size_t nInitialSize,
    size_t nMaxSize = 0);
```

### Parameters

*hHeap*<br/>
An existing heap object.

*dwFlags*<br/>
Flags used in creating the heap.

*nInitialSize*<br/>
The initial size of the heap.

*nMaxSize*<br/>
The maximum size of the heap.

### Remarks

Before allocating memory, it is necessary to provide the `CWin32Heap` object with a valid heap handle. The simplest way to achieve this is to use the process heap:

[!code-cpp[NVC_ATL_Utilities#92](../../atl/codesnippet/cpp/cwin32heap-class_1.cpp)]

It is also possible to supply an existing heap handle to the constructor, in which case the new object does not take over ownership of the heap. The original heap handle will still be valid when the `CWin32Heap` object is deleted.

An existing heap can also be attached to the new object, using [CWin32Heap::Attach](#attach).

If a heap is required where operations are all performed from a single thread, the best way is to create the object as follows:

[!code-cpp[NVC_ATL_Utilities#93](../../atl/codesnippet/cpp/cwin32heap-class_2.cpp)]

The parameter HEAP_NO_SERIALIZE specifies that mutual exclusion will not be used when the heap functions allocate and free memory, with an according increase in performance.

The third parameter defaults to 0, which allows the heap to grow as required. See [HeapCreate](/windows/win32/api/heapapi/nf-heapapi-heapcreate) for an explanation of the memory sizes and flags.

## <a name="dtor"></a> CWin32Heap::~CWin32Heap

The destructor.

```
~CWin32Heap() throw();
```

### Remarks

Destroys the heap handle if the `CWin32Heap` object has ownership of the heap.

## <a name="detach"></a> CWin32Heap::Detach

Detaches the heap object from an existing heap.

```
HANDLE Detach() throw();
```

### Return Value

Returns the handle to the heap to which the object was previously attached.

## <a name="free"></a> CWin32Heap::Free

Frees memory previously allocated from the heap by [CWin32Heap::Allocate](#allocate) or [CWin32Heap::Reallocate](#reallocate).

```
virtual void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to the block of memory to free. NULL is a valid value and does nothing.

## <a name="getsize"></a> CWin32Heap::GetSize

Returns the size of a memory block allocated from the heap object.

```
virtual size_t GetSize(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to the memory block whose size the method will obtain. This is a pointer returned by [CWin32Heap::Allocate](#allocate) or [CWin32Heap::Reallocate](#reallocate).

### Return Value

Returns the size, in bytes, of the allocated memory block.

## <a name="m_bownheap"></a> CWin32Heap::m_bOwnHeap

A flag used to determine current ownership of the heap handle stored in [m_hHeap](#m_hheap).

```
bool m_bOwnHeap;
```

## <a name="m_hheap"></a> CWin32Heap::m_hHeap

Handle to the heap object.

```
HANDLE m_hHeap;
```

### Remarks

A variable used to store a handle to the heap object.

## <a name="reallocate"></a> CWin32Heap::Reallocate

Reallocates a block of memory from the heap object.

```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### Parameters

*p*<br/>
Pointer to the block of memory to reallocate.

*nBytes*<br/>
The new size in bytes of the allocated block. The block can be made larger or smaller.

### Return Value

Returns a pointer to the newly allocated memory block.

### Remarks

If *p* is NULL, it's assumed that the memory block has not yet been allocated and [CWin32Heap::Allocate](#allocate) is called, with an argument of *nBytes*.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)<br/>
[CLocalHeap Class](../../atl/reference/clocalheap-class.md)<br/>
[CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)<br/>
[CCRTHeap Class](../../atl/reference/ccrtheap-class.md)<br/>
[CComHeap Class](../../atl/reference/ccomheap-class.md)
