---
description: "Learn more about: cache_suballoc Class"
title: "cache_suballoc Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::cache_suballoc", "allocators/stdext::cache_suballoc::allocate", "allocators/stdext::cache_suballoc::deallocate"]
helpviewer_keywords: ["stdext::cache_suballoc", "stdext::cache_suballoc [C++], allocate", "stdext::cache_suballoc [C++], deallocate"]
ms.assetid: 9ea9c5e9-1dcc-45d0-b3a7-a56a93d88898
---
# cache_suballoc Class

Defines a [block allocator](../standard-library/allocators-header.md) that allocates and deallocates memory blocks of a single size.

## Syntax

```cpp
template <std::size_t Sz, size_t Nelts = 20>
class cache_suballoc
```

### Parameters

*Sz*\
The number of elements in the array to be allocated.

## Remarks

The cache_suballoc class template stores deallocated memory blocks in a free list with unbounded length, using `freelist<sizeof(Type), max_unbounded>`, and suballocates memory blocks from a larger chunk allocated with **operator new** when the free list is empty.

Each chunk holds `Sz * Nelts` bytes of usable memory and the data that **operator new** and **operator delete** require. Allocated chunks are never freed.

### Constructors

|Constructor|Description|
|-|-|
|[cache_suballoc](#cache_suballoc)|Constructs an object of type `cache_suballoc`.|

### Member functions

|Member function|Description|
|-|-|
|[allocate](#allocate)|Allocates a block of memory.|
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## <a name="allocate"></a> cache_suballoc::allocate

Allocates a block of memory.

```cpp
void *allocate(std::size_t count);
```

### Parameters

*count*\
The number of elements in the array to be allocated.

### Return Value

A pointer to the allocated object.

### Remarks

## <a name="cache_suballoc"></a> cache_suballoc::cache_suballoc

Constructs an object of type `cache_suballoc`.

```cpp
cache_suballoc();
```

### Remarks

## <a name="deallocate"></a> cache_suballoc::deallocate

Frees a specified number of objects from storage beginning at a specified position.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### Parameters

*ptr*\
A pointer to the first object to be deallocated from storage.

*count*\
The number of objects to be deallocated from storage.

### Remarks

## See also

[\<allocators>](../standard-library/allocators-header.md)
