---
description: "Learn more about: allocator_suballoc Class"
title: "allocator_suballoc Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::allocators::allocator_suballoc", "allocators/stdext::allocator_suballoc"]
helpviewer_keywords: ["allocator_suballoc class"]
ms.assetid: 50c6a5c0-d00d-4276-9285-d908fd4f6483
---
# allocator_suballoc Class

Describes an object that manages storage allocation and freeing for objects of type *Type* using a cache of type [cache_suballoc](cache-suballoc-class.md).

## Syntax

```cpp
template <class Type>
class allocator_suballoc;
```

### Parameters

*Type*\
The type of elements allocated by the allocator.

## Remarks

The [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passes this class as the *name* parameter in the following statement: `ALLOCATOR_DECL(CACHE_SUBALLOC, SYNC_DEFAULT, allocator_suballoc);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](allocators-header.md)
