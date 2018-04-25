---
title: "allocator_variable_size Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["allocators/stdext::allocator_variable_size", "allocators/stdext::allocators::allocator_variable_size", "stdext::allocators::allocator_variable_size"]
dev_langs: ["C++"]
helpviewer_keywords: ["stdext::allocator_variable_size", "stdext::allocators [C++], allocator_variable_size"]
ms.assetid: c3aa4105-ae45-4385-bbbe-9f23060478cb
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# allocator_variable_size Class

Describes an object that manages storage allocation and freeing for objects of type `Type` using a cache of type [cache_freelist](../standard-library/cache-freelist-class.md) with a length managed by [max_variable_size](../standard-library/max-variable-size-class.md).

## Syntax

```cpp
template <class Type>
class allocator_variable_size;
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|`Type`|The type of elements allocated by the allocator.|

## Remarks

The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_variable_size), SYNC_DEFAULT, allocator_variable_size);`

## Requirements

**Header:** \<allocators>

**Namespace:** stdext

## See also

[\<allocators>](../standard-library/allocators-header.md)<br/>
