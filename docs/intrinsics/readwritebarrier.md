---
description: "Learn more about: _ReadWriteBarrier"
title: "_ReadWriteBarrier"
ms.date: "09/02/2019"
f1_keywords: ["_ReadWriteBarrier"]
helpviewer_keywords: ["ReadWriteBarrier intrinsic", "_ReadWriteBarrier intrinsic"]
ms.assetid: dd9f58b5-8bb6-494e-bb0f-9fe184f3908d
---
# _ReadWriteBarrier

**Microsoft Specific**

Limits the compiler optimizations that can reorder memory accesses across the point of the call.

> [!CAUTION]
> The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) and [std::atomic\<T>](../standard-library/atomic.md), which are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.

## Syntax

```C
void _ReadWriteBarrier(void);
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_ReadWriteBarrier`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The `_ReadWriteBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory accesses across the point of the call.

**END Microsoft Specific**

## See also

[_ReadBarrier](../intrinsics/readbarrier.md)\
[_WriteBarrier](../intrinsics/writebarrier.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
