---
description: "Learn more about: _InterlockedXor intrinsic functions"
title: "_InterlockedXor intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedXor_nf", "_InterlockedXor_np", "_InterlockedXor64_HLERelease", "_InterlockedXor8_acq", "_InterlockedXor64_acq", "_InterlockedXor64_rel", "_InterlockedXor64_nf", "_InterlockedXor_acq", "_InterlockedXor16", "_InterlockedXor64_np", "_InterlockedXor64", "_InterlockedXor_HLEAcquire", "_InterlockedXor_HLERelease", "_InterlockedXor_cpp", "_InterlockedXor16_rel", "_InterlockedXor8_rel", "_InterlockedXor8", "_InterlockedXor64_HLEAcquire", "_InterlockedXor16_nf", "_InterlockedXor16_acq", "_InterlockedXor16_np", "_InterlockedXor8_fn", "_InterlockedXor8_np", "_InterlockedXor64_cpp", "_InterlockedXor_rel", "_InterlockedXor"]
helpviewer_keywords: ["InterlockedXor intrinsic", "_InterlockedXor64 intrinsic", "InterlockedXor64 intrinsic", "_InterlockedXor intrinsic"]
ms.assetid: faef1796-cb5a-4430-b1e2-9d5eaf9b4a91
---
# _InterlockedXor intrinsic functions

**Microsoft Specific**

Perform an atomic bitwise exclusive or (XOR) operation on a variable shared by multiple threads.

## Syntax

```C
long _InterlockedXor(
   long volatile * Value,
   long Mask
);
long _InterlockedXor_acq(
   long volatile * Value,
   long Mask
);
long _InterlockedXor_HLEAcquire(
   long volatile * Value,
   long Mask
);
long _InterlockedXor_HLERelease(
   long volatile * Value,
   long Mask
);
long _InterlockedXor_nf(
   long volatile * Value,
   long Mask
);
long _InterlockedXor_np(
   long volatile * Value,
   long Mask
);
long _InterlockedXor_rel(
   long volatile * Value,
   long Mask
);
char _InterlockedXor8(
   char volatile * Value,
   char Mask
);
char _InterlockedXor8_acq(
   char volatile * Value,
   char Mask
);
char _InterlockedXor8_nf(
   char volatile * Value,
   char Mask
);
char _InterlockedXor8_np(
   char volatile * Value,
   char Mask
);
char _InterlockedXor8_rel(
   char volatile * Value,
   char Mask
);
short _InterlockedXor16(
   short volatile * Value,
   short Mask
);
short _InterlockedXor16_acq(
   short volatile * Value,
   short Mask
);
short _InterlockedXor16_nf (
   short volatile * Value,
   short Mask
);
short _InterlockedXor16_np (
   short volatile * Value,
   short Mask
);
short _InterlockedXor16_rel(
   short volatile * Value,
   short Mask
);
__int64 _InterlockedXor64(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedXor64_acq(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedXor64_HLEAcquire(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedXor64_HLERelease(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedXor64_nf(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedXor64_np(
   __int64 volatile * Value,
   __int64 Mask
);
__int64 _InterlockedXor64_rel(
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

The original value of the first operand.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedXor`, `_InterlockedXor8`, `_InterlockedXor16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedXor64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedXor_acq`, `_InterlockedXor_nf`, `_InterlockedXor_rel`, `_InterlockedXor8_acq`, `_InterlockedXor8_nf`, `_InterlockedXor8_rel`, `_InterlockedXor16_acq`, `_InterlockedXor16_nf`, `_InterlockedXor16_rel`, `_InterlockedXor64_acq`, `_InterlockedXor64_nf`, `_InterlockedXor64_rel`,|ARM, ARM64|\<intrin.h>|
|`_InterlockedXor_np`, `_InterlockedXor8_np`, `_InterlockedXor16_np`, `_InterlockedXor64_np`|x64|\<intrin.h>|
|`_InterlockedXor_HLEAcquire`, `_InterlockedXor_HLERelease`|x86, x64|\<immintrin.h>|
|`_InterlockedXor64_HLEAcquire`, `_InterlockedXor64_HLERelease`|x64|\<immintrin.h>|

## Remarks

The number in the name of each function specifies the bit size of the arguments.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

The intrinsics with an `_np` ("no prefetch") suffix prevent a possible prefetch operation from being inserted by the compiler.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that don't support HLE, the hint is ignored.

## Example

```cpp
// _InterLockedXor.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_InterlockedXor)

int main()
{
        long data1 = 0xFF00FF00;
        long data2 = 0x00FFFF00;
        long retval;
        retval = _InterlockedXor(&data1, data2);
        printf_s("0x%x 0x%x 0x%x", data1, data2, retval);
}
```

```Output
0xffff0000 0xffff00 0xff00ff00
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
