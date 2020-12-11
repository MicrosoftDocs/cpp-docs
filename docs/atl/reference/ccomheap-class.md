---
description: "Learn more about: CComHeap Class"
title: "CComHeap Class"
ms.date: "11/04/2016"
f1_keywords: ["CComHeap", "ATLCOMMEM/ATL::CComHeap", "ATLCOMMEM/ATL::CComHeap::Allocate", "ATLCOMMEM/ATL::CComHeap::Free", "ATLCOMMEM/ATL::CComHeap::GetSize", "ATLCOMMEM/ATL::CComHeap::Reallocate"]
helpviewer_keywords: ["CComHeap class"]
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
---
# CComHeap Class

This class implements [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) using the COM memory allocation functions.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CComHeap : public IAtlMemMgr
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComHeap::Allocate](#allocate)|Call this method to allocate a block of memory.|
|[CComHeap::Free](#free)|Call this method to free a block of memory allocated by this memory manager.|
|[CComHeap::GetSize](#getsize)|Call this method to get the allocated size of a memory block allocated by this memory manager.|
|[CComHeap::Reallocate](#reallocate)|Call this method to reallocate memory allocated by this memory manager.|

## Remarks

`CComHeap` implements memory allocation functions using the COM allocation functions, including [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc), [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree), [IMalloc::GetSize](/windows/win32/api/objidlbase/nf-objidlbase-imalloc-getsize), and [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc). The maximum amount of memory that can be allocated is equal to INT_MAX (2147483647) bytes.

## Example

See the example for [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## Inheritance Hierarchy

`IAtlMemMgr`

`CComHeap`

## Requirements

**Header:** ATLComMem.h

## <a name="allocate"></a> CComHeap::Allocate

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

Call [CComHeap::Free](#free) or [CComHeap::Reallocate](#reallocate) to free the memory allocated by this method.

Implemented using [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc).

## <a name="free"></a> CComHeap::Free

Call this method to free a block of memory allocated by this memory manager.

```
virtual void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager. NULL is a valid value and does nothing.

### Remarks

Implemented using [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree).

## <a name="getsize"></a> CComHeap::GetSize

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

Implemented using [IMalloc::GetSize](/windows/win32/api/objidlbase/nf-objidlbase-imalloc-getsize).

## <a name="reallocate"></a> CComHeap::Reallocate

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

Call [CComHeap::Free](#free) to free the memory allocated by this method.

Implemented using [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc).

## See also

[DynamicConsumer Sample](../../overview/visual-cpp-samples.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[CWin32Heap Class](../../atl/reference/cwin32heap-class.md)<br/>
[CLocalHeap Class](../../atl/reference/clocalheap-class.md)<br/>
[CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)<br/>
[CCRTHeap Class](../../atl/reference/ccrtheap-class.md)<br/>
[IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)
