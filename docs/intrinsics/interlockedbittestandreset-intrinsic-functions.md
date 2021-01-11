---
description: "Learn more about: _interlockedbittestandreset intrinsic functions"
title: "_interlockedbittestandreset intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_interlockedbittestandreset_rel", "_interlockedbittestandreset64", "_interlockedbittestandreset64_acq", "_interlockedbittestandreset64_nf", "_interlockedbittestandreset64_rel", "_interlockedbittestandreset64_HLERelease", "_interlockedbittestandreset_HLERelease", "_interlockedbittestandreset_HLEAcquire", "_interlockedbittestandreset_acq", "_interlockedbittestandreset_cpp", "_interlockedbittestandreset_nf", "_interlockedbittestandreset64_cpp", "_interlockedbittestandreset64_HLEAcquire", "_interlockedbittestandreset"]
helpviewer_keywords: ["lock_btr instruction", "_interlockedbittestandreset64 intrinsic", "_interlockedbittestandreset intrinsic"]
ms.assetid: 9bbb1442-f2e9-4dc2-b0da-97f3de3493b9
---
# _interlockedbittestandreset intrinsic functions

**Microsoft Specific**

Generates an instruction to set bit `b` of the address `a` to zero and return its original value.

## Syntax

```C
unsigned char _interlockedbittestandreset(
   long *a,
   long b
);
unsigned char _interlockedbittestandreset_acq(
   long *a,
   long b
);
unsigned char _interlockedbittestandreset_HLEAcquire(
   long *a,
   long b
);
unsigned char _interlockedbittestandreset_HLERelease(
   long *a,
   long b
);
unsigned char _interlockedbittestandreset_nf(
   long *a,
   long b
);
unsigned char _interlockedbittestandreset_rel(
   long *a,
   long b
);
unsigned char _interlockedbittestandreset64(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandreset64_acq(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandreset64_nf(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandreset64_rel(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandreset64_HLEAcquire(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandreset64_HLERelease(
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

The original value of the bit at the position specified by `b`.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_interlockedbittestandreset`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_interlockedbittestandreset_acq`, `_interlockedbittestandreset_nf`, `_interlockedbittestandreset_rel`|ARM, ARM64|\<intrin.h>|
|`_interlockedbittestandreset64_acq`, `_interlockedbittestandreset64_nf`, `_interlockedbittestandreset64_rel`|ARM64|\<intrin.h>|
|`_interlockedbittestandreset_HLEAcquire`, `_interlockedbittestandreset_HLERelease`|x86, x64|\<immintrin.h>|
|`_interlockedbittestandreset64`|x64, ARM64|\<intrin.h>|
|`_interlockedbittestandreset64_HLEAcquire`, `_interlockedbittestandreset64_HLERelease`|x64|\<immintrin.h>|

## Remarks

On x86 and x64 processors, these intrinsics use the `lock btr` instruction, that reads and sets the specified bit to zero in an atomic operation.

On ARM processors, use the intrinsics with `_acq` and `_rel` suffixes for acquire and release semantics, such as at the beginning and end of a critical section. The ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

On Intel processors that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on processors that don't support HLE, the hint is ignored.

These routines are only available as intrinsics.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
