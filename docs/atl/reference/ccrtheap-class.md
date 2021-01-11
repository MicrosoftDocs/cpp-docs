---
description: "Learn more about: CCRTHeap Class"
title: "CCRTHeap Class"
ms.date: "11/04/2016"
f1_keywords: ["CCRTHeap", "ATLMEM/ATL::CCRTHeap", "ATLMEM/ATL::CCRTHeap::Allocate", "ATLMEM/ATL::CCRTHeap::Free", "ATLMEM/ATL::CCRTHeap::GetSize", "ATLMEM/ATL::CCRTHeap::Reallocate"]
helpviewer_keywords: ["CCRTHeap class"]
ms.assetid: 321bd6c5-1856-4ff7-8590-95044a1209f7
---
# CCRTHeap Class

This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the CRT heap functions.

## Syntax

```
class CCRTHeap : public IAtlMemMgr
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CCRTHeap::Allocate](#allocate)|Call this method to allocate a block of memory.|
|[CCRTHeap::Free](#free)|Call this method to free a block of memory allocated by this memory manager.|
|[CCRTHeap::GetSize](#getsize)|Call this method to get the allocated size of a memory block allocated by this memory manager.|
|[CCRTHeap::Reallocate](#reallocate)|Call this method to reallocate memory allocated by this memory manager.|

## Remarks

`CCRTHeap` implements memory allocation functions using the CRT heap functions, including [malloc](../../c-runtime-library/reference/malloc.md), [free](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md), and [_msize](../../c-runtime-library/reference/msize.md).

## Example

See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## Inheritance Hierarchy

`IAtlMemMgr`

`CCRTHeap`

## Requirements

**Header:** atlmem.h

## <a name="allocate"></a> CCRTHeap::Allocate

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

Call [CCRTHeap::Free](#free) or [CCRTHeap::Reallocate](#reallocate) to free the memory allocated by this method.

Implemented using [malloc](../../c-runtime-library/reference/malloc.md).

## <a name="free"></a> CCRTHeap::Free

Call this method to free a block of memory allocated by this memory manager.

```
virtual void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.

### Remarks

Implemented using [free](../../c-runtime-library/reference/free.md).

## <a name="getsize"></a> CCRTHeap::GetSize

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

Implemented using [_msize](../../c-runtime-library/reference/msize.md).

## <a name="reallocate"></a> CCRTHeap::Reallocate

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

Call [CCRTHeap::Free](#free) to free the memory allocated by this method. Implemented using [realloc](../../c-runtime-library/reference/realloc.md).

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComHeap Class](../../atl/reference/ccomheap-class.md)<br/>
[CWin32Heap Class](../../atl/reference/cwin32heap-class.md)<br/>
[CLocalHeap Class](../../atl/reference/clocalheap-class.md)<br/>
[CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)<br/>
[IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)
