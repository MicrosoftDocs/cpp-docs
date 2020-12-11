---
description: "Learn more about: sync_shared Class"
title: "sync_shared Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::sync_shared", "allocators/stdext::sync_shared::allocate", "allocators/stdext::sync_shared::deallocate", "allocators/stdext::sync_shared::equals"]
helpviewer_keywords: ["stdext::sync_shared", "stdext::sync_shared [C++], allocate", "stdext::sync_shared [C++], deallocate", "stdext::sync_shared [C++], equals"]
ms.assetid: cab3af9e-3d1a-4f2c-8580-0f89e5687d8e
---
# sync_shared Class

Describes a [synchronization filter](../standard-library/allocators-header.md) that uses a mutex to control access to a cache object that is shared by all allocators.

## Syntax

```cpp
template <class Cache>
class sync_shared
```

### Parameters

*Cache*\
The type of cache associated with the synchronization filter. It can be [`cache_chunklist`](../standard-library/cache-chunklist-class.md), [`cache_freelist`](../standard-library/cache-freelist-class.md), or [`cache_suballoc`](../standard-library/cache-suballoc-class.md).

### Member functions

|Member function|Description|
|-|-|
|[allocate](#allocate)|Allocates a block of memory.|
|[deallocate](#deallocate)|Frees a specified number of objects from storage beginning at a specified position.|
|[equals](#equals)|Compares two caches for equality.|

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## <a name="allocate"></a> sync_shared::allocate

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

The member function locks the mutex, calls `cache.allocate(count)`, unlocks the mutex, and returns the result of the earlier call to `cache.allocate(count)`. `cache` represents the current cache object.

## <a name="deallocate"></a> sync_shared::deallocate

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

This member function locks the mutex, calls `cache.deallocate(ptr, count)`, where `cache` represents the cache object, and then unlocks the mutex.

## <a name="equals"></a> sync_shared::equals

Compares two caches for equality.

```cpp
bool equals(const sync_shared<Cache>& Other) const;
```

### Parameters

*Cache*\
The type of cache associated with the synchronization filter.

*Other*\
The cache to compare for equality.

### Return Value

**`true`** if the result of `cache.equals(Other.cache)`, where `cache` represents the cache object, is **`true`**; otherwise, **`false`**.

### Remarks

## See also

[\<allocators>](../standard-library/allocators-header.md)
