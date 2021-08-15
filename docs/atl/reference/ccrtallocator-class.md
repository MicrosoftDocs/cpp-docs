---
description: "Learn more about: CCRTAllocator Class"
title: "CCRTAllocator Class"
ms.date: "11/04/2016"
f1_keywords: ["CCRTAllocator", "ATLCORE/ATL::CCRTAllocator", "ATLCORE/ATL::CCRTAllocator::Allocate", "ATLCORE/ATL::CCRTAllocator::Free", "ATLCORE/ATL::CCRTAllocator::Reallocate"]
helpviewer_keywords: ["CCRTAllocator class"]
ms.assetid: 3e1b8cb0-859a-41ab-8e93-6f0b5ceca49d
---
# CCRTAllocator Class

This class provides methods for managing memory using CRT memory routines.

## Syntax

```
class ATL::CCRTAllocator
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CCRTAllocator::Allocate](#allocate)|(Static) Call this method to allocate memory.|
|[CCRTAllocator::Free](#free)|(Static) Call this method to free memory.|
|[CCRTAllocator::Reallocate](#reallocate)|(Static) Call this method to reallocate memory.|

## Remarks

This class is used by [CHeapPtr](../../atl/reference/cheapptr-class.md) to provide the CRT memory allocation routines. The counterpart class, [CComAllocator](../../atl/reference/ccomallocator-class.md), provides the same methods using COM routines.

## Requirements

**Header:** atlcore.h

## <a name="allocate"></a> CCRTAllocator::Allocate

Call this static function to allocate memory.

```
static __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### Parameters

*nBytes*<br/>
The number of bytes to allocate.

### Return Value

Returns a void pointer to the allocated space, or NULL if there is insufficient memory available.

### Remarks

Allocates memory. See [malloc](../../c-runtime-library/reference/malloc.md) for more details.

## <a name="free"></a> CCRTAllocator::Free

Call this static function to free memory.

```
static void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to the allocated memory.

### Remarks

Frees the allocated memory. See [free](../../c-runtime-library/reference/free.md) for more details.

## <a name="reallocate"></a> CCRTAllocator::Reallocate

Call this static function to reallocate memory.

```
static __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### Parameters

*p*<br/>
Pointer to the allocated memory.

*nBytes*<br/>
The number of bytes to reallocate.

### Return Value

Returns a void pointer to the allocated space, or NULL if there is insufficient memory.

### Remarks

Resizes the amount of allocated memory. See [realloc](../../c-runtime-library/reference/realloc.md) for more details.

## See also

[CHeapPtr Class](../../atl/reference/cheapptr-class.md)<br/>
[CComAllocator Class](../../atl/reference/ccomallocator-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
