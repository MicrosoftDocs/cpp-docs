---
description: "Learn more about: __rdtsc"
title: "__rdtsc"
ms.date: "09/02/2019"
f1_keywords: ["__rdtsc"]
helpviewer_keywords: ["__rdtsc intrinsic", "rdtsc instruction", "Read Time Stamp Counter instruction"]
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
---
# __rdtsc

**Microsoft Specific**

Generates the `rdtsc` instruction, which returns the processor time stamp. The processor time stamp records the number of clock cycles since the last reset.

## Syntax

```C
unsigned __int64 __rdtsc();
```

## Return value

A 64-bit unsigned integer representing a tick count.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__rdtsc`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is available only as an intrinsic.

The interpretation of the TSC value in later generations of hardware differs from that in earlier versions of x64. For more information, see the hardware manuals.

## Example

```cpp
// rdtsc.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__rdtsc)

int main()
{
    unsigned __int64 i;
    i = __rdtsc();
    printf_s("%I64d ticks\n", i);
}
```

```Output
3363423610155519 ticks
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
