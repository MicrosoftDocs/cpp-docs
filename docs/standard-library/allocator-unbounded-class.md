---
description: "Learn more about: allocator_unbounded Class"
title: "allocator_unbounded Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::allocator_unbounded", "allocators/stdext::allocators::allocator_unbounded"]
helpviewer_keywords: ["allocator_unbounded class"]
ms.assetid: facbaea1-b320-4d99-96da-039b2642f352
---
# allocator_unbounded Class

Describes an object that manages storage allocation and freeing for objects of type *Type* using a cache of type [cache_freelist](cache-freelist-class.md) with a length managed by [max_unbounded](max-unbounded-class.md).

## Syntax

```cpp
template <class Type>
class allocator_unbounded;
```

### Parameters

*Type*\
The type of elements allocated by the allocator.

## Remarks

The [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passes this class as the *name* parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](allocators-header.md)
