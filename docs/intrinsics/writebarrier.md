---
description: "Learn more about: _WriteBarrier"
title: "_WriteBarrier"
ms.date: "09/02/2019"
f1_keywords: ["_WriteBarrier"]
helpviewer_keywords: ["WriteBarrier intrinsic", "_WriteBarrier intrinsic"]
ms.assetid: a5ffdad9-0ca1-4eb7-b2f3-0f092c4bf4b5
---
# _WriteBarrier

**Microsoft Specific**

Limits the compiler optimizations that can reorder memory access operations across the point of the call.

> [!CAUTION]
> The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) and [std::atomic\<T>](../standard-library/atomic.md), which are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.

## Syntax

```C
void _WriteBarrier(void);
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_WriteBarrier`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The `_WriteBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory access operations across the point of the call.

**END Microsoft Specific**

## See also

[_ReadBarrier](../intrinsics/readbarrier.md)\
[_ReadWriteBarrier](../intrinsics/readwritebarrier.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
