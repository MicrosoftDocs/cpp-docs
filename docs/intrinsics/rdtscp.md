---
title: "__rdtscp"
ms.date: "11/04/2016"
f1_keywords: ["__rdtscp"]
helpviewer_keywords: ["rdtscp intrinsic", "__rdtscp intrinsic", "rdtscp instruction"]
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
---
# __rdtscp

**Microsoft Specific**

Generates the `rdtscp` instruction, writes `TSC_AUX[31:0`] to memory, and returns the 64-bit Time Stamp Counter (`TSC)` result.

## Syntax

```
unsigned __int64 __rdtscp(
   unsigned int * Aux
);
```

#### Parameters

*Aux*<br/>
[out] Pointer to a location that will contain the contents of the machine-specific register `TSC_AUX[31:0]`.

## Return Value

A 64-bit unsigned integer tick count.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__rdtscp`|AMD NPT Family 0Fh or later versions|

**Header file** \<intrin.h>

## Remarks

This intrinsic generates the `rdtscp` instruction. To determine hardware support for this instruction, call the `__cpuid` intrinsic with `InfoType=0x80000001` and check bit 27 of `CPUInfo[3] (EDX)`. This bit is 1 if the instruction is supported, and 0 otherwise.  If you run code that uses this intrinsic on hardware that does not support the `rdtscp` instruction, the results are unpredictable.

> [!CAUTION]
>  Unlike `rdtsc`, `rdtscp` is a serializing instruction; nevertheless, the compiler can move code around this intrinsic.

The interpretation of the TSC value in this generation of hardware differs from that in earlier versions of x64.  See hardware manuals for more information.

The meaning of the value in `TSC_AUX[31:0]` depends on the operating system.

## Example

```
#include <intrin.h>
#include <stdio.h>
int main()
{
unsigned __int64 i;
unsigned int ui;
i = __rdtscp(&ui);
printf_s("%I64d ticks\n", i);
printf_s("TSC_AUX was %x\n", ui);
}
```

```Output
3363423610155519 ticks
TSC_AUX was 0
```

**END Microsoft Specific**

Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See Also

[__rdtsc](../intrinsics/rdtsc.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)