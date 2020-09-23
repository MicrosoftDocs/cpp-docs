---
title: "_InterlockedIncrement intrinsic functions"
description: "Microsoft C/C++ compiler intrinsic functions for interlocked increment."
ms.date: 09/03/2020
f1_keywords: ["_InterlockedIncrement_acq", "_InterlockedIncrement16_rel_cpp", "_InterlockedIncrement16_cpp", "_InterlockedIncrement64_rel", "_InterlockedIncrement_rel", "_InterlockedIncrement64_nf", "_InterlockedIncrement16_acq_cpp", "_InterlockedIncrement_rel_cpp", "_InterlockedIncrement64", "_InterlockedIncrement64_rel_cpp", "_InterlockedIncrement16_nf", "_InterlockedIncrement16_rel", "_InterlockedIncrement16_acq", "_InterlockedIncrement_nf", "_InterlockedIncrement_acq_cpp", "_InterlockedIncrement64_cpp", "_InterlockedIncrement64_acq_cpp", "_InterlockedIncrement", "_InterlockedIncrement_cpp", "_InterlockedIncrement64_acq", "_InterlockedIncrement16"]
helpviewer_keywords: ["_InterlockedIncrement64_rel intrinsic", "_InterlockedIncrement16_rel intrinsic", "InterlockedIncrement64_acq intrinsic", "_InterlockedIncrement16 intrinsic", "_InterlockedIncrement16_acq intrinsic", "_InterlockedIncrement_nf intrinsic", "_InterlockedIncrement_rel intrinsic", "_InterlockedIncrement64_nf intrinsic", "InterlockedIncrement_rel intrinsic", "InterlockedIncrement_acq intrinsic", "_InterlockedIncrement64_acq intrinsic", "_InterlockedIncrement16_nf intrinsic", "_InterlockedIncrement intrinsic", "_InterlockedIncrement64 intrinsic", "InterlockedIncrement64_rel intrinsic", "InterlockedIncrement64 intrinsic", "InterlockedIncrement16 intrinsic", "_InterlockedIncrement_acq intrinsic", "InterlockedIncrement intrinsic"]
ms.assetid: 37700615-f372-438b-bcef-d76e11839482
---
# `_InterlockedIncrement` intrinsic functions

Provide compiler intrinsic support for the Win32 Windows SDK [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement) function. The `_InterlockedIncrement` intrinsic functions are **Microsoft-specific**.

## Syntax

```C
long _InterlockedIncrement(
   long volatile * lpAddend
);
long _InterlockedIncrement_acq(
   long volatile * lpAddend
);
long _InterlockedIncrement_rel(
   long volatile * lpAddend
);
long _InterlockedIncrement_nf(
   long volatile * lpAddend
);
short _InterlockedIncrement16(
   short volatile * lpAddend
);
short _InterlockedIncrement16_acq(
   short volatile * lpAddend
);
short _InterlockedIncrement16_rel(
   short volatile * lpAddend
);
short _InterlockedIncrement16_nf (
   short volatile * lpAddend
);
__int64 _InterlockedIncrement64(
   __int64 volatile * lpAddend
);
__int64 _InterlockedIncrement64_acq(
   __int64 volatile * lpAddend
);
__int64 _InterlockedIncrement64_rel(
   __int64 volatile * lpAddend
);
__int64 _InterlockedIncrement64_nf(
   __int64 volatile * lpAddend
);
```

### Parameters

*lpAddend*\
[in, out] Pointer to the variable to be incremented.

## Return value

The return value is the resulting incremented value.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedIncrement`, `_InterlockedIncrement16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedIncrement64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedIncrement_acq`, `_InterlockedIncrement_rel`, `_InterlockedIncrement_nf`, `_InterlockedIncrement16_acq`, `_InterlockedIncrement16_rel`, `_InterlockedIncrement16_nf`, `_InterlockedIncrement64_acq`, `_InterlockedIncrement64_rel`, `_InterlockedIncrement64_nf`|ARM, ARM64|\<intrin.h>|

## Remarks

There are several variations on `_InterlockedIncrement` that vary based on the data types they involve and whether processor-specific acquire or release semantics is used.

While the `_InterlockedIncrement` function operates on 32-bit integer values, `_InterlockedIncrement16` operates on 16-bit integer values and `_InterlockedIncrement64` operates on 64-bit integer values.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The intrinsic with an `_nf` ("no fence") suffix doesn't act as a memory barrier.

The variable pointed to by the `lpAddend` parameter must be aligned on a 32-bit boundary; otherwise, this function fails on multiprocessor x86 systems and any non-x86 systems. For more information, see [align](../cpp/align-cpp.md).

The Win32 function is declared in `Wdm.h` or `Ntddk.h`.

These routines are only available as intrinsics.

## Example

For a sample of how to use `_InterlockedIncrement`, see [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
