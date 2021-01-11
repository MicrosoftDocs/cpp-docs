---
description: "Learn more about: CLocalHeap Class"
title: "CLocalHeap Class"
ms.date: "11/04/2016"
f1_keywords: ["CLocalHeap", "ATLMEM/ATL::CLocalHeap", "ATLMEM/ATL::CLocalHeap::Allocate", "ATLMEM/ATL::CLocalHeap::Free", "ATLMEM/ATL::CLocalHeap::GetSize", "ATLMEM/ATL::CLocalHeap::Reallocate"]
helpviewer_keywords: ["CLocalHeap class"]
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
---
# CLocalHeap Class

This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the Win32 local heap functions.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

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
> The local heap functions are slower than other memory management functions and do not provide as many features. Therefore, new applications should use the [heap functions](/windows/win32/Memory/heap-functions). These are available in the [CWin32Heap](../../atl/reference/cwin32heap-class.md) class.

## Example

See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## Inheritance Hierarchy

`IAtlMemMgr`

`CLocalHeap`

## Requirements

**Header:** atlmem.h

## <a name="allocate"></a> CLocalHeap::Allocate

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

Call [CLocalHeap::Free](#free) or [CLocalHeap::Reallocate](#reallocate) to free the memory allocated by this method.

Implemented using [LocalAlloc](/windows/win32/api/winbase/nf-winbase-localalloc) with a flag parameter of LMEM_FIXED.

## <a name="free"></a> CLocalHeap::Free

Call this method to free a block of memory allocated by this memory manager.

```
virtual void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.

### Remarks

Implemented using [LocalFree](/windows/win32/api/winbase/nf-winbase-localfree).

## <a name="getsize"></a> CLocalHeap::GetSize

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

Implemented using [LocalSize](/windows/win32/api/winbase/nf-winbase-localsize).

## <a name="reallocate"></a> CLocalHeap::Reallocate

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

Call [CLocalHeap::Free](#free) to free the memory allocated by this method.

Implemented using [LocalReAlloc](/windows/win32/api/winbase/nf-winbase-localrealloc).

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComHeap Class](../../atl/reference/ccomheap-class.md)<br/>
[CWin32Heap Class](../../atl/reference/cwin32heap-class.md)<br/>
[CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)<br/>
[CCRTHeap Class](../../atl/reference/ccrtheap-class.md)<br/>
[IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)
