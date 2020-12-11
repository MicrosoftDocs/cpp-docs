---
description: "Learn more about: `allocator`"
title: "allocator"
ms.date: "03/21/2019"
f1_keywords: ["allocator_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], allocator", "allocator __declspec keyword"]
---
# `allocator`

**Microsoft Specific**

The **`allocator`** declaration specifier can be applied to custom memory-allocation functions to make the allocations visible via Event Tracing for Windows (ETW).

## Syntax

> **`__declspec(allocator)`**

## Remarks

The native memory profiler in Visual Studio works by collecting allocation ETW event data emitted by during runtime. Allocators in the CRT and Windows SDK have been annotated at the source level so that their allocation data can be captured. If you are writing your own allocators, then any functions that return a pointer to newly allocated heap memory can be decorated with `__declspec(allocator)`, as seen in this example for myMalloc:

```cpp
__declspec(allocator) void* myMalloc(size_t size)
```

For more information, see [Measure memory usage in Visual Studio](/visualstudio/profiling/memory-usage) and [Custom native ETW heap events](/visualstudio/profiling/custom-native-etw-heap-events).

**END Microsoft Specific**
