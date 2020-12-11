---
description: "Learn more about: _InterlockedExchangePointer intrinsic functions"
title: "_InterlockedExchangePointer intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedExchangePointer_cpp", "_InterlockedExchangePointer_rel", "_InterlockedExchangePointer_nf", "_InterlockedExchangePointer_HLERelease", "_InterlockedExchangePointer_acq", "_InterlockedExchangePointer", "_InterlockedExchangePointer_acq_cpp", "_InterlockedExchangePointer_HLEAcquire"]
helpviewer_keywords: ["_InterlockedExchangePointer_rel intrinsic", "_InterlockedExchangePointer_HLERelease intrinsic", "_InterlockedExchangePointer intrinsic", "_InterlockedExchangePointer_nf intrinsic", "_InterlockedExchangePointer_acq intrinsic", "_InterlockedExchangePointer_HLEAcquire intrinsic", "InterlockedExchangePointer_acq intrinsic", "InterlockedExchangePointer intrinsic"]
ms.assetid: 0eaca0b0-d79e-406b-892d-b3b462c50bbb
---
# _InterlockedExchangePointer intrinsic functions

**Microsoft Specific**

Performs an atomic exchange operation, which copies the address passed in as the second argument into the first argument, and returns the original address of the first.

## Syntax

```C
void * _InterlockedExchangePointer(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_acq(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_rel(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_nf(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_HLEAcquire(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_HLERelease(
   void * volatile * Target,
   void * Value
);
```

### Parameters

*Target*\
[in, out] Pointer to the pointer to the value to exchange. The function sets the value to *Value* and returns its previous value.

*Value*\
[in] Value to be exchanged with the value pointed to by *Target*.

## Return value

The function returns the initial value pointed to by *Target*.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedExchangePointer`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedExchangePointer_acq`, `_InterlockedExchangePointer_rel`, `_InterlockedExchangePointer_nf`|ARM, ARM64|\<intrin.h>|
|`_InterlockedExchangePointer_HLEAcquire`, `_InterlockedExchangePointer_HLERelease`|x64|\<immintrin.h>|

On the x86 architecture, `_InterlockedExchangePointer` is a macro that calls `_InterlockedExchange`.

## Remarks

On a 64-bit system, the parameters are 64 bits and must be aligned on 64-bit boundaries. Otherwise, the function fails. On a 32-bit system, the parameters are 32 bits and must be aligned on 32-bit boundaries. For more information, see [align](../cpp/align-cpp.md).

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The intrinsic with an `_nf` ("no fence") suffix doesn't act as a memory barrier.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that don't support HLE, the hint is ignored.

These routines are only available as intrinsics.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
