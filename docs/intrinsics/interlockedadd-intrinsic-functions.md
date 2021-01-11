---
description: "Learn more about: _InterlockedAdd intrinsic functions"
title: "_InterlockedAdd intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedAdd64_acq_cpp", "_InterlockedAdd64_acq", "_InterlockedAdd_acq", "_InterlockedAdd_nf", "_InterlockedAdd64_rel", "_InterlockedAdd64", "_InterlockedAdd_cpp", "_InterlockedAdd_rel_cpp", "_InterlockedAdd_rel", "_InterlockedAdd64_rel_cpp", "_InterlockedAdd64_cpp", "_InterlockedAdd_acq_cpp", "_InterlockedAdd64_nf", "_InterlockedAdd"]
helpviewer_keywords: ["_InterlockedAdd_nf intrinsic", "_InterlockedAdd_rel intrinsic", "_InterlockedAdd intrinsic", "_InterlockedAdd64 intrinsic", "_InterlockedAdd64_acq intrinsic", "_InterlockedAdd64_nf intrinsic", "_InterlockedAdd_acq intrinsic", "_InterlockedAdd64_rel intrinsic"]
ms.assetid: 3d319603-ea9c-4fdd-ae61-e52430ccc3b1
---
# _InterlockedAdd intrinsic functions

**Microsoft Specific**

These functions perform an atomic addition, which makes sure that the operation completes successfully when more than one thread has access to a shared variable.

## Syntax

```C
long _InterlockedAdd(
   long volatile * Addend,
   long Value
);
long _InterlockedAdd_acq(
   long volatile * Addend,
   long Value
);
long _InterlockedAdd_nf(
   long volatile * Addend,
   long Value
);
long _InterlockedAdd_rel(
   long volatile * Addend,
   long Value
);
__int64 _InterlockedAdd64(
   __int64 volatile * Addend,
   __int64 Value
);
__int64 _InterlockedAdd64_acq(
   __int64 volatile * Addend,
   __int64 Value
);
__int64 _InterlockedAdd64_nf (
   __int64 volatile * Addend,
   __int64 Value
);
__int64 _InterlockedAdd64_rel(
   __int64 volatile * Addend,
   __int64 Value
);
```

### Parameters

*Addend*\
[in, out] Pointer to the integer to be added to; replaced by the result of the addition.

*Value*\
[in] The value to add.

## Return value

Both functions return the result of the addition.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_InterlockedAdd`|ARM, ARM64|
|`_InterlockedAdd_acq`|ARM, ARM64|
|`_InterlockedAdd_nf`|ARM, ARM64|
|`_InterlockedAdd_rel`|ARM, ARM64|
|`_InterlockedAdd64`|ARM, ARM64|
|`_InterlockedAdd64_acq`|ARM, ARM64|
|`_InterlockedAdd64_nf`|ARM, ARM64|
|`_InterlockedAdd64_rel`|ARM, ARM64|

**Header file** \<intrin.h>

## Remarks

The versions of these functions with the `_acq` or `_rel` suffixes perform an interlocked addition following acquire or release semantics. *Acquire semantics* means that the result of the operation is made visible to all threads and processors before any later memory reads and writes. Acquire is useful when entering a critical section. *Release semantics* means that all memory reads and writes are forced to be made visible to all threads and processors before the result of the operation is made visible itself. Release is useful when leaving a critical section. The intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

These routines are only available as intrinsics.

## Example: `_InterlockedAdd`

```cpp
// interlockedadd.cpp
// Compile with: /Oi /EHsc
// processor: ARM
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_InterlockedAdd)

int main()
{
        long data1 = 0xFF00FF00;
        long data2 = 0x00FF0000;
        long retval;
        retval = _InterlockedAdd(&data1, data2);
        printf("0x%x 0x%x 0x%x", data1, data2, retval);
}
```

## Output: `_InterlockedAdd`

```Output
0xffffff00 0xff0000 0xffffff00
```

## Example: `_InterlockedAdd64`

```cpp
// interlockedadd64.cpp
// compile with: /Oi /EHsc
// processor: ARM
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(_InterlockedAdd64)

int main()
{
        __int64 data1 = 0x0000FF0000000000;
        __int64 data2 = 0x00FF0000FFFFFFFF;
        __int64 retval;
        cout << hex << data1 << " + " << data2 << " = " ;
        retval = _InterlockedAdd64(&data1, data2);
        cout << data1 << endl;
        cout << "Return value: " << retval << endl;
}
```

## Output: `_InterlockedAdd64`

```Output
ff0000000000 + ff0000ffffffff = ffff00ffffffff
Return value: ffff00ffffffff
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
