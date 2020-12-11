---
description: "Learn more about: max_fixed_size Class"
title: "max_fixed_size Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::max_fixed_size", "allocators/stdext::max_fixed_size::allocated", "allocators/stdext::max_fixed_size::deallocated", "allocators/stdext::max_fixed_size::full", "allocators/stdext::max_fixed_size::released", "allocators/stdext::max_fixed_size::saved"]
helpviewer_keywords: ["stdext::max_fixed_size", "stdext::max_fixed_size [C++], allocated", "stdext::max_fixed_size [C++], deallocated", "stdext::max_fixed_size [C++], full", "stdext::max_fixed_size [C++], released", "stdext::max_fixed_size [C++], saved"]
ms.assetid: 8c8f4588-37e9-4579-8168-ba3553800914
---
# max_fixed_size Class

Describes a [max class](../standard-library/allocators-header.md) object that limits a [freelist](../standard-library/freelist-class.md) object to a fixed maximum length.

## Syntax

```cpp
template <std::size_t Max>
class max_fixed_size
```

### Parameters

*Max*\
The max class that determines the maximum number of elements to store in the `freelist`.

### Constructors

|Constructor|Description|
|-|-|
|[max_fixed_size](#max_fixed_size)|Constructs an object of type `max_fixed_size`.|

### Member functions

|Member function|Description|
|-|-|
|[allocated](#allocated)|Increments the count of allocated memory blocks.|
|[deallocated](#deallocated)|Decrements the count of allocated memory blocks.|
|[full](#full)|Returns a value that specifies whether more memory blocks should be added to the free list.|
|[released](#released)|Decrements the count of memory blocks on the free list.|
|[saved](#saved)|Increments the count of memory blocks on the free list.|

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## <a name="allocated"></a> max_fixed_size::allocated

Increments the count of allocated memory blocks.

```cpp
void allocated(std::size_t _Nx = 1);
```

### Parameters

*_Nx*\
The increment value.

### Remarks

The member function does nothing. This member function is called after each successful call by `cache_freelist::allocate` to operator **`new`**. The argument *_Nx* is the number of memory blocks in the chunk allocated by operator **`new`**.

## <a name="deallocated"></a> max_fixed_size::deallocated

Decrements the count of allocated memory blocks.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### Parameters

*_Nx*\
The increment value.

### Remarks

The member function does nothing. This member function is called after each call by `cache_freelist::deallocate` to operator **`delete`**. The argument *_Nx* is the number of memory blocks in the chunk deallocated by operator **`delete`**.

## <a name="full"></a> max_fixed_size::full

Returns a value that specifies whether more memory blocks should be added to the free list.

```cpp
bool full();
```

### Return Value

**`true`** if `Max <= _Nblocks`; otherwise, **`false`**.

### Remarks

This member function is called by `cache_freelist::deallocate`. If the call returns **`true`**, `deallocate` puts the memory block on the free list; if it returns false, `deallocate` calls operator **`delete`** to deallocate the block.

## <a name="max_fixed_size"></a> max_fixed_size::max_fixed_size

Constructs an object of type `max_fixed_size`.

```cpp
max_fixed_size();
```

### Remarks

This constructor initializes the stored value `_Nblocks` to zero.

## <a name="released"></a> max_fixed_size::released

Decrements the count of memory blocks on the free list.

```cpp
void released();
```

### Remarks

Decrements the stored value `_Nblocks`. The `released` member function of the current [max class](../standard-library/allocators-header.md) is called by `cache_freelist::allocate` whenever it removes a memory block from the free list.

## <a name="saved"></a> max_fixed_size::saved

Increments the count of memory blocks on the free list.

```cpp
void saved();
```

### Remarks

This member function increments the stored value `_Nblocks`. This member function is called by `cache_freelist::deallocate` whenever it puts a memory block on the free list.

## See also

[\<allocators>](../standard-library/allocators-header.md)
