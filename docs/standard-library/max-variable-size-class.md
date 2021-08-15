---
description: "Learn more about: max_variable_size Class"
title: "max_variable_size Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::max_variable_size", "allocators/stdext::max_variable_size::allocated", "allocators/stdext::max_variable_size::deallocated", "allocators/stdext::max_variable_size::full", "allocators/stdext::max_variable_size::released", "allocators/stdext::max_variable_size::saved"]
helpviewer_keywords: ["stdext::max_variable_size", "stdext::max_variable_size [C++], allocated", "stdext::max_variable_size [C++], deallocated", "stdext::max_variable_size [C++], full", "stdext::max_variable_size [C++], released", "stdext::max_variable_size [C++], saved"]
ms.assetid: 9f2e9df0-4148-4b37-bc30-f8eca0ef86ae
---
# max_variable_size Class

Describes a [max class](../standard-library/allocators-header.md) object that limits a [freelist](../standard-library/freelist-class.md) object to a maximum length that is roughly proportional to the number of allocated memory blocks.

## Syntax

```cpp
class max_variable_size
```

### Constructors

|Constructor|Description|
|-|-|
|[max_variable_size](#max_variable_size)|Constructs an object of type `max_variable_size`.|

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

## <a name="allocated"></a> max_variable_size::allocated

Increments the count of allocated memory blocks.

```cpp
void allocated(std::size_t _Nx = 1);
```

### Parameters

*_Nx*\
The increment value.

### Remarks

This member function adds *_Nx* to the stored value `_Nallocs`. This member function is called after each successful call by `cache_freelist::allocate` to operator **`new`**. The argument *_Nx* is the number of memory blocks in the chunk allocated by operator **`new`**.

## <a name="deallocated"></a> max_variable_size::deallocated

Decrements the count of allocated memory blocks.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### Parameters

*_Nx*\
The increment value.

### Remarks

The member function subtracts *_Nx* from the stored value `_Nallocs`. This member function is called after each call by `cache_freelist::deallocate` to operator **`delete`**. The argument *_Nx* is the number of memory blocks in the chunk deallocated by operator **`delete`**.

## <a name="full"></a> max_variable_size::full

Returns a value that specifies whether more memory blocks should be added to the free list.

```cpp
bool full();
```

### Return Value

**`true`** if `_Nallocs / 16 + 16 <= _Nblocks`.

### Remarks

This member function is called by `cache_freelist::deallocate`. If the call returns **`true`**, `deallocate` puts the memory block on the free list; if it returns false, `deallocate` calls operator **`delete`** to deallocate the block.

## <a name="max_variable_size"></a> max_variable_size::max_variable_size

Constructs an object of type `max_variable_size`.

```cpp
max_variable_size();
```

### Remarks

The constructor initializes the stored values `_Nblocks` and `_Nallocs` to zero.

## <a name="released"></a> max_variable_size::released

Decrements the count of memory blocks on the free list.

```cpp
void released();
```

### Remarks

This member function decrements the stored value `_Nblocks`. The `released` member function of the current max class is called by `cache_freelist::allocate` whenever it removes a memory block from the free list.

## <a name="saved"></a> max_variable_size::saved

Increments the count of memory blocks on the free list.

```cpp
void saved();
```

### Remarks

This member function increments the stored value `_Nblocks`. This member function is called by `cache_freelist::deallocate` whenever it puts a memory block on the free list.

## See also

[\<allocators>](../standard-library/allocators-header.md)
