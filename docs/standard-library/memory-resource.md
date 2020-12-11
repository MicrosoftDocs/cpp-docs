---
description: "Learn more about: &lt;memory_resource&gt;"
title: "&lt;memory_resource&gt;"
ms.date: "04/04/2019"
f1_keywords: ["<memory_resource>"]
helpviewer_keywords: ["memory_resource header"]
---
# &lt;memory_resource&gt;

Defines the container class template memory_resource and its supporting templates.

## Syntax

```cpp
#include <memory_resource>
```

## Members

### Operators

|Name|Description|
|-|-|
|[operator!=](../standard-library/memory-resource-operators.md#op_neq)|Tests if the memory_resource object on the left side of the operator is not equal to the memory_resource object on the right side.|
|[operator==](../standard-library/memory-resource-operators.md#op_eq_eq)|Tests if the memory_resource object on the left side of the operator is equal to the memory_resource object on the right side.|

### Specialized Template Functions

|Name|Description|
|-|-|
|[polymorphic_allocator](../standard-library/memory-resource-functions.md#poly_alloc)||

### Functions

|Name|Description|
|-|-|
|[get_default_resource](../standard-library/memory-resource-functions.md#get_default)||
|[new_delete_resource](../standard-library/memory-resource-functions.md#new_delete)||
|[null_memory_resource](../standard-library/memory-resource-functions.md#null_memory)||
|[set_default_resource](../standard-library/memory-resource-functions.md#set_default)||

### Classes and Structs

|Name|Description|
|-|-|
|[memory_resource Class](../standard-library/memory-resource-class.md)||
|[monotonic_buffer_resource Class](../standard-library/monotonic-buffer-resource-class.md)||
|[pool_options Struct](../standard-library/pool-options-structure.md)||
|[synchronized_pool_resource Class](../standard-library/synchronized-pool-resource-class.md)||
|[unsynchronized_pool_resource Class](../standard-library/unsynchronized-pool-resource-class.md)||

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
