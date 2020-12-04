---
description: "Learn more about: _InterlockedCompareExchange128 intrinsic functions"
title: "_InterlockedCompareExchange128 intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedCompareExchange128_cpp", "_InterlockedCompareExchange128", "_InterlockedCompareExchange128_acq", "_InterlockedCompareExchange128_nf", "_InterlockedCompareExchange128_np", "_InterlockedCompareExchange128_rel"]
helpviewer_keywords: ["cmpxchg16b instruction", "_InterlockedCompareExchange128 intrinsic"]
ms.assetid: f05918fc-716a-4f6d-b746-1456d6b96c56
---
# _InterlockedCompareExchange128 intrinsic functions

**Microsoft Specific**

Performs a 128-bit interlocked compare and exchange.

## Syntax

```C
unsigned char _InterlockedCompareExchange128(
   __int64 volatile * Destination,
   __int64 ExchangeHigh,
   __int64 ExchangeLow,
   __int64 * ComparandResult
);
unsigned char _InterlockedCompareExchange128_acq(
   __int64 volatile * Destination,
   __int64 ExchangeHigh,
   __int64 ExchangeLow,
   __int64 * ComparandResult
);
unsigned char _InterlockedCompareExchange128_nf(
   __int64 volatile * Destination,
   __int64 ExchangeHigh,
   __int64 ExchangeLow,
   __int64 * ComparandResult
);
unsigned char _InterlockedCompareExchange128_np(
   __int64 volatile * Destination,
   __int64 ExchangeHigh,
   __int64 ExchangeLow,
   __int64 * ComparandResult
);
unsigned char _InterlockedCompareExchange128_rel(
   __int64 volatile * Destination,
   __int64 ExchangeHigh,
   __int64 ExchangeLow,
   __int64 * ComparandResult
);
```

### Parameters

*Destination*\
[in, out] Pointer to the destination, which is an array of two 64-bit integers considered as a 128-bit field. The destination data must be 16-byte aligned to avoid a general protection fault.

*ExchangeHigh*\
[in] A 64-bit integer that may be exchanged with the high part of the destination.

*ExchangeLow*\
[in] A 64-bit integer that may be exchanged with the low part of the destination.

*ComparandResult*\
[in, out] Pointer to an array of two 64-bit integers (considered as a 128-bit field) to compare with the destination.  On output, this array is overwritten with the original value of the destination.

## Return value

1 if the 128-bit comparand equals the original value of the destination. `ExchangeHigh` and `ExchangeLow` overwrite the 128-bit destination.

0 if the comparand doesn't equal the original value of the destination. The value of the destination is unchanged, and the value of the comparand is overwritten with the value of the destination.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_InterlockedCompareExchange128`|x64, ARM64|
|`_InterlockedCompareExchange128_acq`, `_InterlockedCompareExchange128_nf`, `_InterlockedCompareExchange128_rel`|ARM64|
|`_InterlockedCompareExchange128_np`|x64|

**Header file** \<intrin.h>

## Remarks

The `_InterlockedCompareExchange128` intrinsic generates the `cmpxchg16b` instruction (with the `lock` prefix) to perform a 128-bit locked compare and exchange. Early versions of AMD 64-bit hardware don't support this instruction. To check for hardware support for the `cmpxchg16b` instruction, call the `__cpuid` intrinsic with `InfoType=0x00000001 (standard function 1)`. Bit 13 of `CPUInfo[2]` (ECX) is 1 if the instruction is supported.

> [!NOTE]
> The value of `ComparandResult` is always overwritten. After the `lock` instruction, this intrinsic immediately copies the initial value of `Destination` to `ComparandResult`. For this reason, `ComparandResult` and `Destination` should point to separate memory locations to avoid unexpected behavior.

Although you can use `_InterlockedCompareExchange128` for low-level thread synchronization, you don't need to synchronize over 128 bits if you can use smaller synchronization functions (such as the other `_InterlockedCompareExchange` intrinsics) instead. Use `_InterlockedCompareExchange128` if you want atomic access to a 128-bit value in memory.

If you run code that uses the intrinsic on hardware that doesn't support the `cmpxchg16b` instruction, the results are unpredictable.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes for acquire and release semantics, such as at the beginning and end of a critical section. The ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

The intrinsics with an `_np` ("no prefetch") suffix prevent a possible prefetch operation from being inserted by the compiler.

This routine is available only as an intrinsic.

## Example

This example uses `_InterlockedCompareExchange128` to replace the high word of an array of two 64-bit integers with the sum of its high and low words and to increment the low word. The access to the `BigInt.Int` array is atomic, but this example uses a single thread and ignores the locking for simplicity.

```cpp
// cmpxchg16b.c
// processor: x64
// compile with: /EHsc /O2
#include <stdio.h>
#include <intrin.h>

typedef struct _LARGE_INTEGER_128 {
    __int64 Int[2];
} LARGE_INTEGER_128, *PLARGE_INTEGER_128;

volatile LARGE_INTEGER_128 BigInt;

// This AtomicOp() function atomically performs:
//   BigInt.Int[1] += BigInt.Int[0]
//   BigInt.Int[0] += 1
void AtomicOp ()
{
    LARGE_INTEGER_128 Comparand;
    Comparand.Int[0] = BigInt.Int[0];
    Comparand.Int[1] = BigInt.Int[1];
    do {
        ; // nothing
    } while (_InterlockedCompareExchange128(BigInt.Int,
                                            Comparand.Int[0] + Comparand.Int[1],
                                            Comparand.Int[0] + 1,
                                            Comparand.Int) == 0);
}

// In a real application, several threads contend for the value
// of BigInt.
// Here we focus on the compare and exchange for simplicity.
int main(void)
{
   BigInt.Int[1] = 23;
   BigInt.Int[0] = 11;
   AtomicOp();
   printf("BigInt.Int[1] = %d, BigInt.Int[0] = %d\n",
      BigInt.Int[1],BigInt.Int[0]);
}
```

```Output
BigInt.Int[1] = 34, BigInt.Int[0] = 12
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[_InterlockedCompareExchange intrinsic functions](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
