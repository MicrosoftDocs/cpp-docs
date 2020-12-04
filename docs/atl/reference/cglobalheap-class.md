---
description: "Learn more about: CGlobalHeap Class"
title: "CGlobalHeap Class"
ms.date: "11/04/2016"
f1_keywords: ["CGlobalHeap", "ATLMEM/ATL::CGlobalHeap", "ATLMEM/ATL::CGlobalHeap::Allocate", "ATLMEM/ATL::CGlobalHeap::Free", "ATLMEM/ATL::CGlobalHeap::GetSize", "ATLMEM/ATL::CGlobalHeap::Reallocate"]
helpviewer_keywords: ["CGlobalHeap class"]
ms.assetid: e348d838-3aa7-4bee-a1b3-cd000c99f834
---
# CGlobalHeap Class

This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 global heap functions.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CGlobalHeap : public IAtlMemMgr
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CGlobalHeap::Allocate](#allocate)|Call this method to allocate a block of memory.|
|[CGlobalHeap::Free](#free)|Call this method to free a block of memory allocated by this memory manager.|
|[CGlobalHeap::GetSize](#getsize)|Call this method to get the allocated size of a memory block allocated by this memory manager.|
|[CGlobalHeap::Reallocate](#reallocate)|Call this method to reallocate memory allocated by this memory manager.|

## Remarks

`CGlobalHeap` implements memory allocation functions using the Win32 global heap functions.

> [!NOTE]
> The global heap functions are slower than other memory management functions and do not provide as many features. Therefore, new applications should use the [heap functions](/windows/win32/Memory/heap-functions). These are available in the [CWin32Heap](../../atl/reference/cwin32heap-class.md) class. Global functions are still used by DDE and the clipboard functions.

## Example

See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## Inheritance Hierarchy

`IAtlMemMgr`

`CGlobalHeap`

## Requirements

**Header:** atlmem.h

## <a name="allocate"></a> CGlobalHeap::Allocate

Call this method to allocate a block of memory.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### Parameters

*nBytes*<br/>
The requested number of bytes in the new memory block.

### Return Value

Returns a pointer to the start of the newly allocated memory block.

### Remarks

Call [CGlobalHeap::Free](#free) or [CGlobalHeap::Reallocate](#reallocate) to free the memory allocated by this method.

Implemented using [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) with a flag parameter of GMEM_FIXED.

## <a name="free"></a> CGlobalHeap::Free

Call this method to free a block of memory allocated by this memory manager.

```
virtual void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.

### Remarks

Implemented using [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree).

## <a name="getsize"></a> CGlobalHeap::GetSize

Call this method to get the allocated size of a memory block allocated by this memory manager.

```
virtual size_t GetSize(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager.

### Return Value

Returns the size of the allocated memory block in bytes.

### Remarks

Implemented using [GlobalSize](/windows/win32/api/winbase/nf-winbase-globalsize).

## <a name="reallocate"></a> CGlobalHeap::Reallocate

Call this method to reallocate memory allocated by this memory manager.

```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager.

*nBytes*<br/>
The requested number of bytes in the new memory block.

### Return Value

Returns a pointer to the start of the newly allocated memory block.

### Remarks

Call [CGlobalHeap::Free](#free) to free the memory allocated by this method.

Implemented using [GlobalReAlloc](/windows/win32/api/winbase/nf-winbase-globalrealloc).

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComHeap Class](../../atl/reference/ccomheap-class.md)<br/>
[CWin32Heap Class](../../atl/reference/cwin32heap-class.md)<br/>
[CLocalHeap Class](../../atl/reference/clocalheap-class.md)<br/>
[CCRTHeap Class](../../atl/reference/ccrtheap-class.md)<br/>
[IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)
