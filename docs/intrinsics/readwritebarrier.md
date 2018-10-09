---
title: "_ReadWriteBarrier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_ReadWriteBarrier"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReadWriteBarrier intrinsic", "_ReadWriteBarrier intrinsic"]
ms.assetid: dd9f58b5-8bb6-494e-bb0f-9fe184f3908d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _ReadWriteBarrier

**Microsoft Specific**

Limits the compiler optimizations that can reorder memory accesses across the point of the call.

> [!CAUTION]
>  The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) and [std::atomic\<T>](../standard-library/atomic.md), which are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.

## Syntax

```
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

## See Also

[_ReadBarrier](../intrinsics/readbarrier.md)<br/>
[_WriteBarrier](../intrinsics/writebarrier.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[Keywords](../cpp/keywords-cpp.md)