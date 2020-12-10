---
description: "Learn more about: _InterlockedAnd intrinsic functions"
title: "_InterlockedAnd intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedAnd_rel", "_InterlockedAnd_cpp", "_InterlockedAnd8_nf", "_InterlockedAnd", "_InterlockedAnd_HLERelease", "_InterlockedAnd8_np", "_InterlockedAnd16_rel", "_InterlockedAnd64_np", "_InterlockedAnd_np", "_InterlockedAnd64_HLERelease", "_InterlockedAnd64", "_InterlockedAnd64_nf", "_InterlockedAnd64_HLEAcquire", "_InterlockedAnd16", "_InterlockedAnd16_nf", "_InterlockedAnd8", "_InterlockedAnd_HLEAcquire", "_InterlockedAnd_acq", "_InterlockedAnd16_np", "_InterlockedAnd64_cpp", "_InterlockedAnd64_acq", "_InterlockedAnd16_acq", "_InterlockedAnd8_acq", "_InterlockedAnd64_rel", "_InterlockedAnd_nf", "_InterlockedAnd8_rel"]
helpviewer_keywords: ["_InterlockedAnd64_np intrinsic", "_InterlockedAnd intrinsic", "_InterlockedAnd64 intrinsic", "_InterlockedAnd8_rel intrinsic", "InterlockedAnd64 intrinsic", "_InterlockedAnd16_np intrinsic", "_InterlockedAnd64_nf intrinsic", "_InterlockedAnd_nf intrinsic", "_InterlockedAnd_np intrinsic", "_InterlockedAnd64_HLERelease intrinsic", "_InterlockedAnd16_rel intrinsic", "_InterlockedAnd_HLERelease intrinsic", "_InterlockedAnd64_acq intrinsic", "_InterlockedAnd16 intrinsic", "_InterlockedAnd8_nf intrinsic", "_InterlockedAnd64_rel intrinsic", "_InterlockedAnd8_np intrinsic", "_InterlockedAnd_rel intrinsic", "InterlockedAnd intrinsic", "_InterlockedAnd8_acq intrinsic", "_InterlockedAnd_acq intrinsic", "_InterlockedAnd64_HLEAcquire intrinsic", "_InterlockedAnd16_acq intrinsic", "_InterlockedAnd16_nf intrinsic", "_InterlockedAnd8 intrinsic", "_InterlockedAnd_HLEAcquire intrinsic"]
ms.assetid: ad271dc3-42cd-47d0-9f65-30d5cfeb66fc
---
# _InterlockedAnd intrinsic functions

**Microsoft Specific**

Used to perform an atomic bitwise AND operation on a variable shared by multiple threads.

## Syntax

```C
long _InterlockedAnd(
   long volatile * value,
   long mask
);
long _InterlockedAnd_acq(
   long volatile * value,
   long mask
);
long _InterlockedAnd_HLEAcquire(
   long volatile * value,
   long mask
);
long _InterlockedAnd_HLERelease(
   long volatile * value,
   long mask
);
long _InterlockedAnd_nf(
   long volatile * value,
   long mask
);
long _InterlockedAnd_np(
   long volatile * value,
   long mask
);
long _InterlockedAnd_rel(
   long volatile * value,
   long mask
);
char _InterlockedAnd8(
   char volatile * value,
   char mask
);
char _InterlockedAnd8_acq(
   char volatile * value,
   char mask
);
char _InterlockedAnd8_nf(
   char volatile * value,
   char mask
);
char _InterlockedAnd8_np(
   char volatile * value,
   char mask
);
char _InterlockedAnd8_rel(
   char volatile * value,
   char mask
);
short _InterlockedAnd16(
   short volatile * value,
   short mask
);
short _InterlockedAnd16_acq(
   short volatile * value,
   short mask
);
short _InterlockedAnd16_nf(
   short volatile * value,
   short mask
);
short _InterlockedAnd16_np(
   short volatile * value,
   short mask
);
short _InterlockedAnd16_rel(
   short volatile * value,
   short mask
);
__int64 _InterlockedAnd64(
   __int64 volatile* value,
   __int64 mask
);
__int64 _InterlockedAnd64_acq(
   __int64 volatile* value,
   __int64 mask
);
__int64 _InterlockedAnd64_HLEAcquire(
   __int64 volatile* value,
   __int64 mask
);
__int64 _InterlockedAnd64_HLERelease(
   __int64 volatile* value,
   __int64 mask
);
__int64 _InterlockedAnd64_nf(
   __int64 volatile* value,
   __int64 mask
);
__int64 _InterlockedAnd64_np(
   __int64 volatile* value,
   __int64 mask
);
__int64 _InterlockedAnd64_rel(
   __int64 volatile* value,
   __int64 mask
);
```

### Parameters

*value*\
[in, out] A pointer to the first operand, to be replaced by the result.

*mask*\
[in] The second operand.

## Return value

The original value of the first operand.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedAnd`, `_InterlockedAnd8`, `_InterlockedAnd16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedAnd64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedAnd_acq`, `_InterlockedAnd_nf`, `_InterlockedAnd_rel`, `_InterlockedAnd8_acq`, `_InterlockedAnd8_nf`, `_InterlockedAnd8_rel`, `_InterlockedAnd16_acq`, `_InterlockedAnd16_nf`, `_InterlockedAnd16_rel`, `_InterlockedAnd64_acq`, `_InterlockedAnd64_nf`, `_InterlockedAnd64_rel`|ARM, ARM64|\<intrin.h>|
|`_InterlockedAnd_np`, `_InterlockedAnd8_np`, `_InterlockedAnd16_np`, `_InterlockedAnd64_np`|x64|\<intrin.h>|
|`_InterlockedAnd_HLEAcquire`, `_InterlockedAnd_HLERelease`, `_InterlockedAnd64_HLEAcquire`, `_InterlockedAnd64_HLERelease`|x86, x64|\<immintrin.h>|

## Remarks

The number in the name of each function specifies the bit size of the arguments.

On ARM and ARM64 platforms, use the intrinsics with `_acq` and `_rel` suffixes for acquire and release semantics, such as at the beginning and end of a critical section. The intrinsics with an `_nf` ("no fence") suffix do not act as a memory barrier.

The intrinsics with an `_np` ("no prefetch") suffix prevent a possible prefetch operation from being inserted by the compiler.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that do not support HLE, the hint is ignored.

## Example

```cpp
// InterlockedAnd.cpp
// Compile with: /Oi
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_InterlockedAnd)

int main()
{
        long data1 = 0xFF00FF00;
        long data2 = 0x00FFFF00;
        long retval;
        retval = _InterlockedAnd(&data1, data2);
        printf_s("0x%x 0x%x 0x%x", data1, data2, retval);
}
```

```Output
0xff00 0xffff00 0xff00ff00
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
