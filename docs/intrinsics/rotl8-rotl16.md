---
description: "Learn more about: _rotl8, _rotl16"
title: "_rotl8, _rotl16"
ms.date: "09/02/2019"
f1_keywords: ["_rotl8", "_rotl16"]
helpviewer_keywords: ["_rotl8 intrinsic", "_rotl16 intrinsic"]
ms.assetid: 8c519ab6-aef9-4f07-a387-daee8408368f
---
# _rotl8, _rotl16

**Microsoft Specific**

Rotate the input values to the left to the most significant bit (MSB) by a specified number of bit positions.

## Syntax

```C
unsigned char _rotl8(
   unsigned char value,
   unsigned char shift
);
unsigned short _rotl16(
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
|`_rotl8`|x86, ARM, x64, ARM64|
|`_rotl16`|x86, ARM, x64, ARM64|

**Header file** \<intrin.h>

## Remarks

Unlike a left-shift operation, when executing a left rotation, the high-order bits that fall off the high end are moved into the least significant bit positions.

## Example

```cpp
// rotl.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_rotl8, _rotl16)

int main()
{
    unsigned char c = 'A', c1, c2;

    for (int i = 0; i < 8; i++)
    {
       printf_s("Rotating 0x%x left by %d bits gives 0x%x\n", c,
               i, _rotl8(c, i));
    }

    unsigned short s = 0x12;
    int nBit = 10;

    printf_s("Rotating unsigned short 0x%x left by %d bits gives 0x%x\n",
            s, nBit, _rotl16(s, nBit));
}
```

```Output
Rotating 0x41 left by 0 bits gives 0x41
Rotating 0x41 left by 1 bits gives 0x82
Rotating 0x41 left by 2 bits gives 0x5
Rotating 0x41 left by 3 bits gives 0xa
Rotating 0x41 left by 4 bits gives 0x14
Rotating 0x41 left by 5 bits gives 0x28
Rotating 0x41 left by 6 bits gives 0x50
Rotating 0x41 left by 7 bits gives 0xa0
Rotating unsigned short 0x12 left by 10 bits gives 0x4800
```

**END Microsoft Specific**

## See also

[_rotr8, _rotr16](../intrinsics/rotr8-rotr16.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
