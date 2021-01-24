---
description: "Learn more about: _mm_insert_si64, _mm_inserti_si64"
title: "_mm_insert_si64, _mm_inserti_si64"
ms.date: "09/02/2019"
f1_keywords: ["_mm_inserti_si64", "_mm_insert_si64"]
helpviewer_keywords: ["insertq instruction", "_mm_insert_si64 intrinsic", "_mm_inserti_si64 intrinsic"]
ms.assetid: 897a4b36-8b08-4b00-a18f-7850f5732d7d
---
# _mm_insert_si64, _mm_inserti_si64

**Microsoft Specific**

Generates the `insertq` instruction to insert bits from its second operand into its first operand.

## Syntax

```C
__m128i _mm_insert_si64(
   __m128i Source1,
   __m128i Source2
);
__m128i _mm_inserti_si64(
   __m128i Source1,
   __m128i Source2
   int Length,
   int Index
);
```

### Parameters

*Source1*\
[in] A 128-bit field that has input data in its lower 64 bits, into which a field will be inserted.

*Source2*\
[in] A 128-bit field that has the data to insert in its low bits.  For `_mm_insert_si64`, also contains a field descriptor in its high bits.

*Length*\
[in] An integer constant that specifies the length of the field to insert.

*Index*\
[in] An integer constant that specifies the index of the least significant bit of the field into which data will be inserted.

## Return value

A 128-bit field, whose lower 64 bits contain the original low 64 bits of *Source1*, with the specified bit field replaced by the low bits of *Source2*. The upper 64 bits of the return value are undefined.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_insert_si64`|SSE4a|
|`_mm_inserti_si64`|SSE4a|

**Header file** \<intrin.h>

## Remarks

These intrinsics generate the `insertq` instruction to insert bits from *Source2* into *Source1*. There are two versions: `_mm_inserti_si64`, is the immediate version, and `_mm_insert_si64` is the non-immediate one. Each version extracts a bit field of a given length from Source2 and inserts it into Source1.  The extracted bits are the least significant bits of Source2.  The field Source1 into which these bits will be inserted is defined by the length and the index of its least significant bit.  The values of the length and index are taken mod 64, so both -1 and 127 are interpreted as 63. If the sum of the (reduced) bit index and (reduced) field length is larger than 64, the results are undefined. A value of zero for field length is interpreted as 64. If the field length and bit index are both zero, bits 63:0 of *Source2* are inserted into *Source1*. If the field length is zero, but the bit index is non-zero, the results are undefined.

In a call to _mm_insert_si64, the field length is contained in bits 77:72 of Source2 and the index in bits 69:64.

If you call `_mm_inserti_si64` with arguments that the compiler can't determine to be integer constants, the compiler generates code to pack those values into an XMM register and to call `_mm_insert_si64`.

To determine hardware support for the `insertq` instruction, call the `__cpuid` intrinsic with `InfoType=0x80000001` and check bit 6 of `CPUInfo[2] (ECX)`. This bit is 1 if the instruction is supported, and 0 otherwise. If you run code that uses the intrinsic on hardware that doesn't support the `insertq` instruction, the results are unpredictable.

## Example

```cpp
// Compile this sample with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

union {
    __m128i m;
    unsigned __int64 ui64[2];
} source1, source2, source3, result1, result2, result3;

int
main()
{

    __int64 mask;

    source1.ui64[0] = 0xffffffffffffffffll;
    source2.ui64[0] = 0xfedcba9876543210ll;
    source2.ui64[1] = 0xc10;
    source3.ui64[0] = source2.ui64[0];

    result1.m = _mm_insert_si64 (source1.m, source2.m);
    result2.m = _mm_inserti_si64(source1.m, source3.m, 16, 12);
    mask = 0xffff << 12;
    mask = ~mask;
    result3.ui64[0] = (source1.ui64[0] & mask) |
                      ((source2.ui64[0] & 0xffff) << 12);

    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;
    cout << "result2 = 0x" << result2.ui64[0] << endl;
    cout << "result3 = 0x" << result3.ui64[0] << endl;

}
```

```Output
result1 = 0xfffffffff3210fff
result2 = 0xfffffffff3210fff
result3 = 0xfffffffff3210fff
```

**END Microsoft Specific**

Portions Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See also

[_mm_extract_si64, _mm_extracti_si64](../intrinsics/mm-extract-si64-mm-extracti-si64.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
