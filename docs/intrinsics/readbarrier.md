---
description: "Learn more about: _ReadBarrier"
title: "_ReadBarrier"
ms.date: "09/02/2019"
f1_keywords: ["_ReadBarrier"]
helpviewer_keywords: ["_ReadBarrier intrinsic"]
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
---
# _ReadBarrier

**Microsoft Specific**

Limits the compiler optimizations that can reorder memory access operations across the point of the call.

> [!CAUTION]
> The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) and [std::atomic\<T>](../standard-library/atomic.md) that are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.

## Syntax

```C
void _ReadBarrier(void);
```

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_ReadBarrier`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The `_ReadBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory access operations across the point of the call.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
