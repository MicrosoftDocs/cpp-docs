---
description: "Learn more about: freelist Class"
title: "freelist Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::freelist", "allocators/stdext::freelist::pop", "allocators/stdext::freelist::push"]
helpviewer_keywords: ["stdext::freelist", "stdext::freelist [C++], pop", "stdext::freelist [C++], push"]
ms.assetid: 8ad7e35c-4c80-4479-8ede-1a2497b06d71
---
# freelist Class

Manages a list of memory blocks.

## Syntax

```cpp
template <std::size_t Sz, class Max>
class freelist : public Max
```

### Parameters

*Sz*\
The number of elements in the array to be allocated.

*Max*\
The max class representing the maximum number of elements to be stored in the free list. The max class can be [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md), or [max_variable_size](../standard-library/max-variable-size-class.md).

## Remarks

This class template manages a list of memory blocks of size *Sz* with the maximum length of the list determined by the max class passed in *Max*.

### Constructors

|Constructor|Description|
|-|-|
|[freelist](#freelist)|Constructs an object of type `freelist`.|

### Member functions

|Member function|Description|
|-|-|
|[pop](#pop)|Removes the first memory block from the free list.|
|[push](#push)|Adds a memory block to the list.|

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## <a name="freelist"></a> freelist::freelist

Constructs an object of type `freelist`.

```cpp
freelist();
```

### Remarks

## <a name="pop"></a> freelist::pop

Removes the first memory block from the free list.

```cpp
void *pop();
```

### Return Value

Returns a pointer to the memory block removed from the list.

### Remarks

The member function returns NULL if the list is empty. Otherwise, it removes the first memory block from the list.

## <a name="push"></a> freelist::push

Adds a memory block to the list.

```cpp
bool push(void* ptr);
```

### Parameters

*ptr*\
A pointer to the memory block to be added to the free list.

### Return Value

**`true`** if the `full` function of the max class returns **`false`**; otherwise, the `push` function returns **`false`**.

### Remarks

If the `full` function of the max class returns **`false`**, this member function adds the memory block pointed to by *ptr* to the head of the list.

## See also

[\<allocators>](../standard-library/allocators-header.md)
