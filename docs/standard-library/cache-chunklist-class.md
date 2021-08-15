---
description: "Learn more about: cache_chunklist Class"
title: "cache_chunklist Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::cache_chunklist", "allocators/stdext::cache_chunklist::allocate", "allocators/stdext::cache_chunklist::deallocate"]
helpviewer_keywords: ["stdext::cache_chunklist", "stdext::cache_chunklist [C++], allocate", "stdext::cache_chunklist [C++], deallocate"]
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
---
# cache_chunklist Class

Defines a [block allocator](../standard-library/allocators-header.md) that allocates and deallocates memory blocks of a single size.

## Syntax

```cpp
template <std::size_t Sz, std::size_t Nelts = 20>
class cache_chunklist
```

### Parameters

*Sz*\
The number of elements in the array to be allocated.

## Remarks

This class template uses **operator new** to allocate chunks of raw memory, suballocating blocks to allocate storage for a memory block when needed; it stores deallocated memory blocks in a separate free list for each chunk, and uses **operator delete** to deallocate a chunk when none of its memory blocks is in use.

Each memory block holds *Sz* bytes of usable memory and a pointer to the chunk that it belongs to. Each chunk holds `Nelts` memory blocks, three pointers, an int and the data that **operator new** and **operator delete** require.

### Constructors

|Constructor|Description|
|-|-|
|[cache_chunklist](#cache_chunklist)|Constructs an object of type `cache_chunklist`.|

### Member functions

|Member function|Description|
|-|-|
|[allocate](#allocate)|Allocates a block of memory.|
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## <a name="allocate"></a> cache_chunklist::allocate

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

## <a name="cache_chunklist"></a> cache_chunklist::cache_chunklist

Constructs an object of type `cache_chunklist`.

```cpp
cache_chunklist();
```

### Remarks

## <a name="deallocate"></a> cache_chunklist::deallocate

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
