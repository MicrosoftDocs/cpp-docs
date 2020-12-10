---
description: "Learn more about: _InterlockedCompareExchangePointer intrinsic functions"
title: "_InterlockedCompareExchangePointer intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedCompareExchangePointer_HLERelease", "_InterlockedCompareExchangePointer_rel", "_InterlockedCompareExchangePointer_acq_cpp", "_InterlockedCompareExchangePointer", "_InterlockedCompareExchangePointer_cpp", "_InterlockedCompareExchangePointer_np", "_InterlockedCompareExchangePointer_rel_cpp", "_InterlockedCompareExchangePointer_HLEAcquire", "_InterlockedCompareExchangePointer_acq", "_InterlockedCompareExchangePointer_nf"]
helpviewer_keywords: ["InterlockedCompareExchangePointer_acq intrinsic", "_InterlockedCompareExchangePointer_rel intrinsic", "_InterlockedCompareExchangePointer_acq intrinsic", "InterlockedCompareExchangePointer_rel intrinsic", "InterlockedCompareExchangePointer intrinsic", "_InterlockedCompareExchangePointer_HLERelease intrinsic", "_InterlockedCompareExchangePointer_HLEAcquire intrinsic", "_InterlockedCompareExchangePointer intrinsic", "_InterlockedCompareExchangePointer_nf intrinsic", "_InterlockedCompareExchangePointer_np intrinsic"]
ms.assetid: 97fde59d-2bf9-42aa-a0fe-a5b6befdd44b
---
# _InterlockedCompareExchangePointer intrinsic functions

**Microsoft Specific**

Performs an atomic operation that stores the `Exchange` address in the `Destination` address if the `Comparand` and the `Destination` address are equal.

## Syntax

```C
void * _InterlockedCompareExchangePointer (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_acq (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_HLEAcquire (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_HLERelease (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_nf (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_np (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
long _InterlockedCompareExchangePointer_rel (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
```

### Parameters

*Destination*\
[in, out] Pointer to a pointer to the destination value. The sign is ignored.

*Exchange*\
[in] Exchange pointer. The sign is ignored.

*Comparand*\
[in] Pointer to compare to destination. The sign is ignored.

## Return value

The return value is the initial value of the destination.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedCompareExchangePointer`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedCompareExchangePointer_acq`, `_InterlockedCompareExchangePointer_nf`, `_InterlockedCompareExchangePointer_rel`|ARM, ARM64|\<iiintrin.h>|
|`_InterlockedCompareExchangePointer_HLEAcquire`, `_InterlockedCompareExchangePointer_HLERelease`|x86, x64|\<immintrin.h>|

## Remarks

`_InterlockedCompareExchangePointer` performs an atomic comparison of the `Destination` address with the `Comparand` address. If the `Destination` address is equal to the `Comparand` address, the `Exchange` address is stored in the address specified by `Destination`. Otherwise, no operation is performed.

`_InterlockedCompareExchangePointer` provides compiler intrinsic support for the Win32 Windows SDK [InterlockedCompareExchangePointer](/windows-hardware/drivers/ddi/content/wdm/nf-wdm-interlockedcompareexchangepointer) function.

For an example of how to use `_InterlockedCompareExchangePointer`, see [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

The intrinsics with an `_np` ("no prefetch") suffix prevent a possible prefetch operation from being inserted by the compiler.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that don't support HLE, the hint is ignored.

These routines are only available as intrinsics.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
