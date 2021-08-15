---
description: "Learn more about: allocator_chunklist Class"
title: "allocator_chunklist Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::allocator_chunklist", "allocators/stdext::allocators::allocator_chunklist"]
helpviewer_keywords: ["stdext::allocator_chunklist", "stdext::allocators [C++], allocator_chunklist"]
ms.assetid: ea72ed0a-dfdb-4c8b-8096-e4baf567b80f
---
# allocator_chunklist Class

Describes an object that manages storage allocation and freeing for objects using a cache of type [cache_chunklist](cache-chunklist-class.md).

## Syntax

```cpp
template <class Type>
class allocator_chunklist;
```

### Parameters

*Type*\
The type of elements allocated by the allocator.

## Remarks

The [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passes this class as the *name* parameter in the following statement: `ALLOCATOR_DECL(CACHE_CHUNKLIST, SYNC_DEFAULT, allocator_chunklist);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](allocators-header.md)
