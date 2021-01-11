---
description: "Learn more about: _interlockedbittestandset intrinsic functions"
title: "_interlockedbittestandset intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_interlockedbittestandset_cpp", "_interlockedbittestandset_HLEAcquire", "_interlockedbittestandset64", "_interlockedbittestandset64_acq", "_interlockedbittestandset64_nf", "_interlockedbittestandset64_rel", "_interlockedbittestandset", "_interlockedbittestandset_rel", "_interlockedbittestandset64_HLEAcquire", "_interlockedbittestandset_HLERelease", "_interlockedbittestandset_acq", "_interlockedbittestandset_nf", "_interlockedbittestandset64_cpp", "_interlockedbittestandset64_HLERelease"]
helpviewer_keywords: ["_interlockedbittestandset intrinsic", "_interlockedbittestandset64 intrinsic", "lock_bts instruction"]
ms.assetid: b1b7e334-53ea-48cf-ba60-5fa3ef51a1fc
---
# _interlockedbittestandset intrinsic functions

**Microsoft Specific**

Generate an instruction to examine bit `b` of the address `a` and return its current value before setting it to 1.

## Syntax

```C
unsigned char _interlockedbittestandset(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_acq(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_HLEAcquire(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_HLERelease(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_nf(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_rel(
   long *a,
   long b
);
unsigned char _interlockedbittestandset64(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_acq(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_nf(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_rel(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_HLEAcquire(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_HLERelease(
   __int64 *a,
   __int64 b
);
```

### Parameters

*a*\
[in] A pointer to the memory to examine.

*b*\
[in] The bit position to test.

## Return value

The value of the bit at position `b` before it's set.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_interlockedbittestandset`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_interlockedbittestandset_acq`, `_interlockedbittestandset_nf`, `_interlockedbittestandset_rel`|ARM, ARM64|\<intrin.h>|
|`_interlockedbittestandset64_acq`, `_interlockedbittestandset64_nf`, `_interlockedbittestandset64_rel`|ARM64|\<intrin.h>|
|`_interlockedbittestandset_HLEAcquire`, `_interlockedbittestandset_HLERelease`|x86, x64|\<immintrin.h>|
|`_interlockedbittestandset64`|x64, ARM64|\<intrin.h>|
|`_interlockedbittestandset64_HLEAcquire`, `_interlockedbittestandset64_HLERelease`|x64|\<immintrin.h>|

## Remarks

On x86 and x64 processors, these intrinsics use the `lock bts` instruction to read and set the specified bit to 1. The operation is atomic.

On ARM and ARM64 processors, use the intrinsics with `_acq` and `_rel` suffixes for acquire and release semantics, such as at the beginning and end of a critical section. The ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

On Intel processors that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on processors that don't support HLE, the hint is ignored.

These routines are only available as intrinsics.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
