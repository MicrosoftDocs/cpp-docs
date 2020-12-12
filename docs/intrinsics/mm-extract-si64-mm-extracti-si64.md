---
description: "Learn more about: _mm_extract_si64, _mm_extracti_si64"
title: "_mm_extract_si64, _mm_extracti_si64"
ms.date: "09/02/2019"
f1_keywords: ["_mm_extracti_si64", "_mm_extract_si64"]
helpviewer_keywords: ["extrq instruction", "_mm_extracti_si64 intrinsic", "_mm_extract_si64 intrinsic"]
ms.assetid: 459fdd72-cc54-4ee5-bbd5-d2c6067a88e7
---
# _mm_extract_si64, _mm_extracti_si64

**Microsoft Specific**

Generates the `extrq` instruction to extract specified bits from the low 64 bits of its first argument.

## Syntax

```C
__m128i _mm_extract_si64(
   __m128i Source,
   __m128i Descriptor
);
__m128i _mm_extracti_si64(
   __m128i Source,
   int Length,
   int Index
);
```

### Parameters

*Source*\
[in] A 128-bit field with input data in its lower 64 bits.

*Descriptor*\
[in] A 128-bit field that describes the bit field to extract.

*Length*\
[in] An integer that specifies the length of the field to extract.

*Index*\
[in] An integer that specifies the index of the field to extract

## Return value

A 128-bit field with the extracted field in its least significant bits.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_extract_si64`|SSE4a|
|`_mm_extracti_si64`|SSE4a|

**Header file** \<intrin.h>

## Remarks

These intrinsics generate the `extrq` instruction to extract bits from *Source*. There are two versions: `_mm_extracti_si64` is the immediate version, and `_mm_extract_si64` is the non-immediate one. Each version extracts from *Source* a bit field defined by its length and the index of its least significant bit. The values of the length and index are taken mod 64, so both -1 and 127 are interpreted as 63. If the sum of the (reduced) index and (reduced) field length is greater than 64, the results are undefined. A value of zero for field length is interpreted as 64. If the field length and bit index are both zero, bits 63:0 of *Source* are extracted. If the field length is zero but the bit index is non-zero, the results are undefined.

In a call to `_mm_extract_si64`, the *Descriptor* contains the index in bits 13:8 and the field length of the data to be extracted in bits 5:0.

If you call `_mm_extracti_si64` with arguments that the compiler can't determine to be integer constants, the compiler generates code to pack those values into an XMM register (*Descriptor*) and to call `_mm_extract_si64`.

To determine hardware support for the `extrq` instruction, call the `__cpuid` intrinsic with `InfoType=0x80000001` and check bit 6 of `CPUInfo[2] (ECX)`. This bit will be 1 if the instruction is supported, and 0 otherwise. If you run code that uses this intrinsic hardware that doesn't support the `extrq` instruction, the results are unpredictable.

## Example

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

union {
    __m128i m;
    unsigned __int64 ui64[2];
} source, descriptor, result1, result2, result3;

int
main()
{
    source.ui64[0] =     0xfedcba9876543210ll;
    descriptor.ui64[0] = 0x0000000000000b1bll;

    result1.m = _mm_extract_si64 (source.m, descriptor.m);
    result2.m = _mm_extracti_si64(source.m, 27, 11);
    result3.ui64[0] = (source.ui64[0] >> 11) & 0x7ffffff;

    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;
    cout << "result2 = 0x" << result2.ui64[0] << endl;
    cout << "result3 = 0x" << result3.ui64[0] << endl;
}
```

```Output
result1 = 0x30eca86
result2 = 0x30eca86
result3 = 0x30eca86
```

**END Microsoft Specific**

Portions Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See also

[_mm_insert_si64, _mm_inserti_si64](../intrinsics/mm-insert-si64-mm-inserti-si64.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
