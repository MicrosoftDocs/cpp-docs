---
title: "allocator_fixed_size Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["allocators/stdext::allocators::allocator_fixed_size", "allocators/stdext::allocator_fixed_size", "stdext::allocators::allocator_fixed_size"]
dev_langs: ["C++"]
helpviewer_keywords: ["stdext::allocators [C++], allocator_fixed_size", "stdext::allocator_fixed_size"]
ms.assetid: 138f3ef8-b0b3-49c3-9486-58f2213c172f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# allocator_fixed_size Class

Describes an object that manages storage allocation and freeing for objects of type *Type* using a cache of type [cache_freelist](../standard-library/cache-freelist-class.md) with a length managed by [max_fixed_size](../standard-library/max-fixed-size-class.md).

## Syntax

```cpp
template <class Type>
class allocator_fixed_size;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*Type*|The type of elements allocated by the allocator.|

## Remarks

The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the *name* parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_fixed_size<10>), SYNC_DEFAULT, allocator_fixed_size);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](../standard-library/allocators-header.md)<br/>
