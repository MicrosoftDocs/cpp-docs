---
description: "Learn more about: allocator_newdel Class"
title: "allocator_newdel Class"
ms.date: "11/04/2016"
f1_keywords: ["allocators/stdext::allocators::allocator_newdel", "allocators/stdext::allocator_newdel", "stdext::allocators::allocator_newdel"]
helpviewer_keywords: ["stdext::allocators [C++], allocator_newdel", "stdext::allocator_newdel"]
ms.assetid: 62666cd2-3afe-49f7-9dd1-9bbbb154da98
---
# allocator_newdel Class

Implements an allocator that uses **operator delete** to deallocate a memory block and **operator new** to allocate a memory block.

## Syntax

```cpp
template <class Type>
class allocator_newdel;
```

### Parameters

*Type*\
The type of elements allocated by the allocator.

## Remarks

The [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passes this class as the *name* parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](allocators-header.md)
