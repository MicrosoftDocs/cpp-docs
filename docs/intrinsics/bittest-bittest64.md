---
description: "Learn more about: _bittest, _bittest64"
title: "_bittest, _bittest64"
ms.date: "09/02/2019"
f1_keywords: ["_bittest64", "_bittest_cpp", "_bittest64_cpp", "_bittest"]
helpviewer_keywords: ["_bittest intrinsic", "_bittest64 intrinsic", "bt instruction"]
ms.assetid: 15e62afb-abea-4ee7-a6b1-13efa2034937
---
# _bittest, _bittest64

**Microsoft Specific**

Generates the `bt` instruction, which examines the bit in position `b` of address `a`, and returns the value of that bit.

## Syntax

```C
unsigned char _bittest(
   long const *a,
   long b
);
unsigned char _bittest64(
   __int64 const *a,
   __int64 b
);
```

### Parameters

*a*\
[in] A pointer to the memory to examine.

*b*\
[in] The bit position to test.

### Return value

The bit at the position specified.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_bittest`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_bittest64`|ARM64, x64|\<intrin.h>|

## Remarks

This routine is only available as an intrinsic.

## Example

```cpp
// bittest.cpp
// processor: x86, ARM, x64

#include <stdio.h>
#include <intrin.h>

long num = 78002;

int main()
{
    unsigned char bits[32];
    long nBit;

    printf_s("Number: %d\n", num);

    for (nBit = 0; nBit < 31; nBit++)
    {
        bits[nBit] = _bittest(&num, nBit);
    }

    printf_s("Binary representation:\n");
    while (nBit--)
    {
        if (bits[nBit])
            printf_s("1");
        else
            printf_s("0");
    }
}
```

```Output
Number: 78002
Binary representation:
0000000000000010011000010110010
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
