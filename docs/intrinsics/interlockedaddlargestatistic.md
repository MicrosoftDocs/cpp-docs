---
description: "Learn more about: _InterlockedAddLargeStatistic"
title: "_InterlockedAddLargeStatistic"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedAddLargeStatistic", "_InterlockedAddLargeStatistic_cpp"]
helpviewer_keywords: ["_InterlockedAddLargeStatistic intrinsic", "InterlockedAddLargeStatistic intrinsic"]
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
---
# _InterlockedAddLargeStatistic

**Microsoft Specific**

Performs an interlocked addition in which the first operand is a 64-bit value.

## Syntax

```C
long _InterlockedAddLargeStatistic(
   __int64 volatile * Addend,
   long Value
);
```

### Parameters

*Addend*\
[in, out] A pointer to the first operand to the add operation. The value pointed to is replaced by the result of the addition.

*Value*\
[in] The second operand; value to add to the first operand.

## Return value

The value of the second operand.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_InterlockedAddLargeStatistic`|x86|

**Header file** \<intrin.h>

## Remarks

The `_InterlockedAddLargeStatistic` intrinsic isn't atomic, because it's implemented as two separate locked instructions. An atomic 64-bit read that occurs on another thread during the execution of the intrinsic could result in a read of an inconsistent value.

`_InterlockedAddLargeStatistic` behaves as a read-write barrier. For more information, see [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
