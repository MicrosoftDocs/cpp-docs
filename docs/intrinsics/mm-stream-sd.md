---
title: "_mm_stream_sd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_mm_stream_sd"]
dev_langs: ["C++"]
helpviewer_keywords: ["_mm_stream_sd intrinsic", "movntsd instruction"]
ms.assetid: 2b4bea5e-e64e-45fa-9afc-88a2e4b82cfc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _mm_stream_sd

**Microsoft Specific**

Writes 64-bit data to a memory location without polluting the caches.

## Syntax

```
void _mm_stream_sd(
   double * Dest,
   __m128d Source
);
```

#### Parameters

*Dest*<br/>
[out] A pointer to the location where the source data will be written.

*Source*<br/>
[in] A 128-bit value containing the `double` value to be written in its bottom 64 bits..

## Return Value

None.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_stream_sd`|SSE4a|

**Header file** \<intrin.h>

## Remarks

This intrinsic generates the `movntsd` instruction. To determine hardware support for this instruction, call the `__cpuid` intrinsic with `InfoType=0x80000001` and check bit 6 of `CPUInfo[2] (ECX)`. This bit is 1 if the hardware supports this instruction, and 0 otherwise.

If you run code that uses the `_mm_stream_sd` intrinsic on hardware that does not support the `movntsd` instruction, the results are unpredictable.

## Example

```
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

int main()
{
    __m128d vals;
    double d[2];

    d[0] = -1.;
    d[1] = -2.;
    vals.m128d_f64[0] = 0.;
    vals.m128d_f64[1] = 1.;
    _mm_stream_sd(&d[1], vals);
    cout << "d[0] = " << d[0] << ", d[1] = " << d[1] << endl;
}

```

```Output
d[0] = -1, d[1] = 1
```

**END Microsoft Specific**

Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See Also

[_mm_stream_ss](../intrinsics/mm-stream-ss.md)<br/>
[_mm_store_sd](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_sd)<br/>
[_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)