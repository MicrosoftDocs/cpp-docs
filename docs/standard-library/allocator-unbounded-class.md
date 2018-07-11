---
title: "allocator_unbounded Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["allocators/stdext::allocator_unbounded", "allocators/stdext::allocators::allocator_unbounded"]
dev_langs: ["C++"]
helpviewer_keywords: ["allocator_unbounded class"]
ms.assetid: facbaea1-b320-4d99-96da-039b2642f352
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# allocator_unbounded Class

Describes an object that manages storage allocation and freeing for objects of type *Type* using a cache of type [cache_freelist](../standard-library/cache-freelist-class.md) with a length managed by [max_unbounded](../standard-library/max-unbounded-class.md).

## Syntax

```cpp
template <class Type>
class allocator_unbounded;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*Type*|The type of elements allocated by the allocator.|

## Remarks

The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the *name* parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](../standard-library/allocators-header.md)<br/>
