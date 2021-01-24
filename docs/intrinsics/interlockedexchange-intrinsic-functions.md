---
description: "Learn more about: _InterlockedExchange intrinsic functions"
title: "_InterlockedExchange intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedExchange_rel", "_InterlockedExchange8_nf", "_InterlockedExchange_acq_cpp", "_InterlockedExchange_nf", "_InterlockedExchange64_nf", "_InterlockedExchange_HLEAcquire", "_InterlockedExchange_cpp", "_InterlockedExchange64_acq_cpp", "_InterlockedExchange64_acq", "_InterlockedExchange64_HLERelease", "_InterlockedExchange8_acq", "_InterlockedExchange16_acq", "_InterlockedExchange", "_InterlockedExchange64_HLEAcquire", "_InterlockedExchange8", "_InterlockedExchange64_rel", "_InterlockedExchange_acq", "_InterlockedExchange16", "_InterlockedExchange16_rel", "_InterlockedExchange16_nf", "_InterlockedExchange64", "_InterlockedExchange_HLERelease", "_InterlockedExchange64_cpp", "_InterlockedExchange8_rel"]
helpviewer_keywords: ["_InterlockedExchange8", "_InterlockedExchange64 intrinsic", "_InterlockedExchange_acq intrinsic", "InterlockedExchange64 intrinsic", "_InterlockedExchange64_acq intrinsic", "InterlockedExchange64_acq intrinsic", "_InterlockedExchange16_acq", "_InterlockedExchange8_acq", "_InterlockedExchange16", "_InterlockedExchange8_rel", "InterlockedExchange_acq intrinsic", "InterlockedExchange intrinsic", "_InterlockedExchange16_rel", "_InterlockedExchange16_nf", "_InterlockedExchange intrinsic", "_InterlockedExchange8_nf"]
ms.assetid: be2f232a-6301-462a-a92b-fcdeb8b0f209
---
# _InterlockedExchange intrinsic functions

**Microsoft Specific**

Generates an atomic instruction to set a specified value.

## Syntax

```C
long _InterlockedExchange(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_acq(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_HLEAcquire(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_HLERelease(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_nf(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_rel(
   long volatile * Target,
   long Value
);
char _InterlockedExchange8(
   char volatile * Target,
   char Value
);
char _InterlockedExchange8_acq(
   char volatile * Target,
   char Value
);
char _InterlockedExchange8_nf(
   char volatile * Target,
   char Value
);
char _InterlockedExchange8_rel(
   char volatile * Target,
   char Value
);
short _InterlockedExchange16(
   short volatile * Target,
   short Value
);
short _InterlockedExchange16_acq(
   short volatile * Target,
   short Value
);
short _InterlockedExchange16_nf(
   short volatile * Target,
   short Value
);
short _InterlockedExchange16_rel(
   short volatile * Target,
   short Value
);
__int64 _InterlockedExchange64(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_acq(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_HLEAcquire(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_HLERelease(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_nf(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_rel(
   __int64 volatile * Target,
   __int64 Value
);
```

### Parameters

*Target*\
[in, out] Pointer to the value to be exchanged. The function sets this variable to `Value` and returns its prior value.

*Value*\
[in] Value to be exchanged with the value pointed to by `Target`.

## Return value

Returns the initial value pointed to by `Target`.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedExchange`, `_InterlockedExchange8`, `_InterlockedExchange16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedExchange64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedExchange_acq`, `_InterlockedExchange_nf`, `_InterlockedExchange_rel`, `_InterlockedExchange8_acq`, `_InterlockedExchange8_nf`, `_InterlockedExchange8_rel`, `_InterlockedExchange16_acq`, `_InterlockedExchange16_nf`, `_InterlockedExchange16_rel`, `_InterlockedExchange64_acq`, `_InterlockedExchange64_nf`, `_InterlockedExchange64_rel`,|ARM, ARM64|\<intrin.h>|
|`_InterlockedExchange_HLEAcquire`, `_InterlockedExchange_HLERelease`|x86, x64|\<immintrin.h>|
|`_InterlockedExchange64_HLEAcquire`, `_InterlockedExchange64_HLERelease`|x64|\<immintrin.h>|

## Remarks

`_InterlockedExchange` provides compiler intrinsic support for the Win32 Windows SDK [InterlockedExchange](/windows/win32/api/winnt/nf-winnt-interlockedexchange) function.

There are several variations on `_InterlockedExchange` that vary based on the data types they involve and whether processor-specific acquire or release semantics is used.

While the `_InterlockedExchange` function operates on 32-bit integer values, `_InterlockedExchange8` operates on 8-bit integer values, `_InterlockedExchange16` operates on 16-bit integer values, and `_InterlockedExchange64` operates on 64-bit integer values.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes for acquire and release semantics, such as at the beginning and end of a critical section. The intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that do not support HLE, the hint is ignored.

These routines are only available as intrinsics.

## Example

For a sample of how to use `_InterlockedExchange`, see [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
