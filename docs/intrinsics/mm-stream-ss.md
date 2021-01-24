---
description: "Learn more about: _mm_stream_ss"
title: "_mm_stream_ss"
ms.date: "09/02/2019"
f1_keywords: ["_mm_stream_ss"]
helpviewer_keywords: ["movntss instruction", "_mm_stream_ss intrinsic"]
ms.assetid: c53dffe9-0dfe-4063-85d3-e8987b870fce
---
# _mm_stream_ss

**Microsoft Specific**

Writes 32-bit data to a memory location without polluting the caches.

## Syntax

```C
void _mm_stream_ss(
   float * Destination,
   __m128 Source
);
```

### Parameters

*Destination*\
[out] A pointer to the location where the source data is written.

*Source*\
[in] A 128-bit number that contains the **`float`** value to be written in its bottom 32 bits.

## Return value

None.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_stream_ss`|SSE4a|

**Header file** \<intrin.h>

## Remarks

The intrinsic generates the `movntss` instruction. To determine hardware support for this instruction, call the `__cpuid` intrinsic with `InfoType=0x80000001` and check bit 6 of `CPUInfo[2] (ECX)`. This bit is 1 when the instruction is supported, and 0 otherwise.

If you run code that uses the `_mm_stream_ss` intrinsic on hardware that doesn't support the `movntss` instruction, the results are unpredictable.

## Example

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

int main()
{
    __m128 vals;
    float f[4];

    f[0] = -1.;
    f[1] = -2.;
    f[2] = -3.;
    f[3] = -4.;
    vals.m128_f32[0] = 0.;
    vals.m128_f32[1] = 1.;
    vals.m128_f32[2] = 2.;
    vals.m128_f32[3] = 3.;
    _mm_stream_ss(&f[3], vals);
    cout << "f[0] = " << f[0] << ", f[1] = " << f[1] << endl;
    cout << "f[1] = " << f[1] << ", f[3] = " << f[3] << endl;
}
```

```Output
f[0] = -1, f[1] = -2
f[2] = -3, f[3] = 3
```

**END Microsoft Specific**

Portions Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See also

[_mm_stream_sd](../intrinsics/mm-stream-sd.md)\
[_mm_stream_ps](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_stream_ps)\
[_mm_store_ss](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_store_ss)\
[_mm_sfence](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#text=_mm_sfence)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
