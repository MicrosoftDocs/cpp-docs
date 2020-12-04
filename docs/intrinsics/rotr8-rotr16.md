---
description: "Learn more about: _rotr8, _rotr16"
title: "_rotr8, _rotr16"
ms.date: "09/02/2019"
f1_keywords: ["_rotr16", "_rotr8"]
helpviewer_keywords: ["_rotr8 intrinsic", "_rotr16 intrinsic"]
ms.assetid: dfbd2c82-82b4-427a-ad52-51609027ebff
---
# _rotr8, _rotr16

**Microsoft Specific**

Rotate the input values to the right to the least significant bit (LSB) by a specified number of bit positions.

## Syntax

```C
unsigned char _rotr8(
   unsigned char value,
   unsigned char shift
);
unsigned short _rotr16(
   unsigned short value,
   unsigned char shift
);
```

### Parameters

*value*\
[in] The value to rotate.

*shift*\
[in] The number of bits to rotate.

## Return value

The rotated value.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_rotr8`|x86, ARM, x64, ARM64|
|`_rotr16`|x86, ARM, x64, ARM64|

**Header file** \<intrin.h>

## Remarks

Unlike a right-shift operation, when executing a right rotation, the low-order bits that fall off the low end are moved into the high-order bit positions.

## Example

```cpp
// rotr.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_rotr8, _rotr16)

int main()
{
    unsigned char c = 'A', c1, c2;

    for (int i = 0; i < 8; i++)
    {
       printf_s("Rotating 0x%x right by %d bits gives 0x%x\n", c,
                i, _rotr8(c, i));
    }

    unsigned short s = 0x12;
    int nBit = 10;

    printf_s("Rotating unsigned short 0x%x right by %d bits "
             "gives 0x%x\n",
            s, nBit, _rotr16(s, nBit));
}
```

```Output
Rotating 0x41 right by 0 bits gives 0x41
Rotating 0x41 right by 1 bits gives 0xa0
Rotating 0x41 right by 2 bits gives 0x50
Rotating 0x41 right by 3 bits gives 0x28
Rotating 0x41 right by 4 bits gives 0x14
Rotating 0x41 right by 5 bits gives 0xa
Rotating 0x41 right by 6 bits gives 0x5
Rotating 0x41 right by 7 bits gives 0x82
Rotating unsigned short 0x12 right by 10 bits gives 0x480
```

**END Microsoft Specific**

## See also

[_rotl8, _rotl16](../intrinsics/rotl8-rotl16.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
