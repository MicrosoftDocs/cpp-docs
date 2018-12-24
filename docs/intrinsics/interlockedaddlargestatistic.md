---
title: "_InterlockedAddLargeStatistic"
ms.date: "11/04/2016"
f1_keywords: ["_InterlockedAddLargeStatistic", "_InterlockedAddLargeStatistic_cpp"]
helpviewer_keywords: ["_InterlockedAddLargeStatistic intrinsic", "InterlockedAddLargeStatistic intrinsic"]
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
---
# _InterlockedAddLargeStatistic

**Microsoft Specific**

Performs an interlocked addition in which the first operand is a 64-bit value.

## Syntax

```
long _InterlockedAddLargeStatistic(
   __int64 volatile * Addend,
   long Value
);
```

#### Parameters

*Addend*<br/>
[in, out] A pointer to the first operand to the add operation. The value pointed to is replaced by the result of the addition.

*Value*<br/>
[in] The second operand; value to add to the first operand.

## Return Value

The value of the second operand.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_InterlockedAddLargeStatistic`|x86|

**Header file** \<intrin.h>

## Remarks

This intrinsic is not atomic because it is implemented as two separate locked instructions. An atomic 64-bit read that occurs on another thread during the execution of this intrinsic could result in an inconsistent value being read.

This function behaves as a read-write barrier. For more information, see [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)<br/>
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
