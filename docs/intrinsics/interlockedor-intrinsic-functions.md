---
description: "Learn more about: _InterlockedOr intrinsic functions"
title: "_InterlockedOr intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedOr8_nf", "_InterlockedOr_HLEAcquire", "_InterlockedOr16_nf", "_InterlockedOr64", "_InterlockedOr8_np", "_InterlockedOr64_cpp", "_InterlockedOr8_acq", "_InterlockedOr_nf", "_InterlockedOr64_acq", "_InterlockedOr_np", "_InterlockedOr8", "_InterlockedOr", "_InterlockedOr64_np", "_InterlockedOr_acq", "_InterlockedOr64_HLERelease", "_InterlockedOr16_np", "_InterlockedOr_cpp", "_InterlockedOr8_rel", "_InterlockedOr64_rel", "_InterlockedOr16_acq", "_InterlockedOr_rel", "_InterlockedOr16_rel", "_InterlockedOr_HLERelease", "_InterlockedOr64_HLEAcquire", "_InterlockedOr16", "_InterlockedOr64_nf"]
helpviewer_keywords: ["_InterlockedOr_acq intrinsic", "InterlockedOr64 intrinsic", "_InterlockedOr_nf intrinsic", "_InterlockedOr intrinsic", "_InterlockedOr64_HLERelease intrinsic", "_InterlockedOr8_rel intrinsic", "_InterlockedOr8_np intrinsic", "_InterlockedOr64_nf intrinsic", "_InterlockedOr_HLERelease intrinsic", "_InterlockedOr16_np intrinsic", "InterlockedOr intrinsic", "_InterlockedOr8_nf intrinsic", "_InterlockedOr16_nf intrinsic", "_InterlockedOr8_acq intrinsic", "_InterlockedOr64 intrinsic", "_InterlockedOr16 intrinsic", "_InterlockedOr64_acq intrinsic", "_InterlockedOr64_HLEAcquire intrinsic", "_InterlockedOr_np intrinsic", "_InterlockedOr64_rel intrinsic", "_InterlockedOr64_np intrinsic", "_InterlockedOr_rel intrinsic", "_InterlockedOr8 intrinsic", "_InterlockedOr16_acq intrinsic", "_InterlockedOr16_rel intrinsic", "_InterlockedOr_HLEAcquire intrinsic"]
ms.assetid: 5f265240-7af8-44b7-b952-19f3a9c56186
---
# _InterlockedOr intrinsic functions

**Microsoft Specific**

Perform an atomic bitwise or operation on a variable shared by multiple threads.

## Syntax

```C
long _InterlockedOr(
   long volatile * Value,
   long Mask
);
long _InterlockedOr_acq(
   long volatile * Value,
   long Mask
);
long _InterlockedOr_HLEAcquire(
   long volatile * Value,
   long Mask
);
long _InterlockedOr_HLERelease(
   long volatile * Value,
   long Mask
);
long _InterlockedOr_nf(
   long volatile * Value,
   long Mask
);
long _InterlockedOr_np(
   long volatile * Value,
   long Mask
);
long _InterlockedOr_rel(
   long volatile * Value,
   long Mask
);
char _InterlockedOr8(
   char volatile * Value,
   long Mask
);
char _InterlockedOr8_acq(
   char volatile * Value,
   char Mask
);
char _InterlockedOr8_nf(
   char volatile * Value,
   char Mask
);
char _InterlockedOr8_np(
   char volatile * Value,
   char Mask
);
char _InterlockedOr8_rel(
   char volatile * Value,
   char Mask
);
short _InterlockedOr16(
   short volatile * Value,
   short Mask
);
short _InterlockedOr16_acq(
   short volatile * Value,
   short Mask
);
short _InterlockedOr16_nf(
   short volatile * Value,
   short Mask
);
short _InterlockedOr16_np(
   short volatile * Value,
   short Mask
);
short _InterlockedOr16_rel(
   short volatile * Value,
   short Mask
);
__int64 _InterlockedOr64(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedOr64_acq(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedOr64_HLEAcquire(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedOr64_HLERelease(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedOr64_nf(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedOr64_np(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedOr64_rel(
   __int64 volatile * Value,
   __int64 Mask
);
```

### Parameters

*Value*\
[in, out] A pointer to the first operand, to be replaced by the result.

*Mask*\
[in] The second operand.

## Return value

The original value pointed to by the first parameter.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedOr`, `_InterlockedOr8`, `_InterlockedOr16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedOr64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedOr_acq`, `_InterlockedOr_nf`, `_InterlockedOr_rel`, `_InterlockedOr8_acq`, `_InterlockedOr8_nf`, `_InterlockedOr8_rel`, `_InterlockedOr16_acq`, `_InterlockedOr16_nf`, `_InterlockedOr16_rel`, `_InterlockedOr64_acq`, `_InterlockedOr64_nf`, `_InterlockedOr64_rel`|ARM, ARM64|\<intrin.h>|
|`_InterlockedOr_np`, `_InterlockedOr8_np`, `_InterlockedOr16_np`, `_InterlockedOr64_np`|x64|\<intrin.h>|
|`_InterlockedOr_HLEAcquire`, `_InterlockedOr_HLERelease`|x86, x64|\<immintrin.h>|
|`_InterlockedOr64_HLEAcquire`, `_InterlockedOr64_HLERelease`|x64|\<immintrin.h>|

## Remarks

The number in the name of each function specifies the bit size of the arguments.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

The intrinsics with an `_np` ("no prefetch") suffix prevent a possible prefetch operation from being inserted by the compiler.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that don't support HLE, the hint is ignored.

## Example

```cpp
// _InterlockedOr.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_InterlockedOr)

int main()
{
        long data1 = 0xFF00FF00;
        long data2 = 0x00FFFF00;
        long retval;
        retval = _InterlockedOr(&data1, data2);
        printf_s("0x%x 0x%x 0x%x", data1, data2, retval);
}
```

```Output
0xffffff00 0xffff00 0xff00ff00
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
