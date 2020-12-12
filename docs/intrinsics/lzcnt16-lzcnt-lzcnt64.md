---
description: "Learn more about: __lzcnt16, __lzcnt, __lzcnt64"
title: "__lzcnt16, __lzcnt, __lzcnt64"
ms.date: "09/02/2019"
f1_keywords: ["__lzcnt64", "__lzcnt16", "__lzcnt"]
helpviewer_keywords: ["__lzcnt intrinsic", "lzcnt instruction", "lzcnt16 intrinsic", "lzcnt intrinsic", "__lzcnt16 intrinsic", "lzcnt64 intrinsic", "__lzcnt64 intrinsic"]
ms.assetid: 412113e7-052e-46e5-8bfa-d5ad72abc10e
---
# __lzcnt16, __lzcnt, __lzcnt64

**Microsoft Specific**

Counts the number of leading zeros in a 16-, 32-, or 64-bit integer.

## Syntax

```C
unsigned short __lzcnt16(
   unsigned short value
);
unsigned int __lzcnt(
   unsigned int value
);
unsigned __int64 __lzcnt64(
   unsigned __int64 value
);
```

### Parameters

*value*\
[in] The 16-, 32-, or 64-bit unsigned integer to scan for leading zeros.

## Return value

The number of leading zero bits in the `value` parameter. If `value` is zero, the return value is the size of the input operand (16, 32, or 64). If the most significant bit of `value` is one, the return value is zero.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__lzcnt16`|AMD: Advanced Bit Manipulation (ABM)<br /><br /> Intel: Haswell|
|`__lzcnt`|AMD: Advanced Bit Manipulation (ABM)<br /><br /> Intel: Haswell|
|`__lzcnt64`|AMD: Advanced Bit Manipulation (ABM) in 64-bit mode.<br /><br /> Intel: Haswell|

**Header file** \<intrin.h>

## Remarks

Each of the intrinsics generates the `lzcnt` instruction.  The size of the value that the `lzcnt` instruction returns is the same as the size of its argument.  In 32-bit mode, there are no 64-bit general-purpose registers, so the 64-bit `lzcnt` isn't supported.

To determine hardware support for the `lzcnt` instruction, call the `__cpuid` intrinsic with `InfoType=0x80000001` and check bit 5 of `CPUInfo[2] (ECX)`. This bit will be 1 if the instruction is supported, and 0 otherwise. If you run code that uses the intrinsic on hardware that doesn't support the `lzcnt` instruction, the results are unpredictable.

On Intel processors that don't support the `lzcnt` instruction, the instruction byte encoding is executed as `bsr` (bit scan reverse). If code portability is a concern, consider use of the `_BitScanReverse` intrinsic instead. For more information, see [_BitScanReverse, _BitScanReverse64](../intrinsics/bitscanreverse-bitscanreverse64.md).

## Example

```cpp
// Compile this test with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

int main()
{
  unsigned short us[3] = {0, 0xFF, 0xFFFF};
  unsigned short usr;
  unsigned int   ui[4] = {0, 0xFF, 0xFFFF, 0xFFFFFFFF};
  unsigned int   uir;

  for (int i=0; i<3; i++) {
    usr = __lzcnt16(us[i]);
    cout << "__lzcnt16(0x" << hex << us[i] << ") = " << dec << usr << endl;
  }

  for (int i=0; i<4; i++) {
    uir = __lzcnt(ui[i]);
    cout << "__lzcnt(0x" << hex << ui[i] << ") = " << dec << uir << endl;
  }
}
```

```Output
__lzcnt16(0x0) = 16
__lzcnt16(0xff) = 8
__lzcnt16(0xffff) = 0
__lzcnt(0x0) = 32
__lzcnt(0xff) = 24
__lzcnt(0xffff) = 16
__lzcnt(0xffffffff) = 0
```

**END Microsoft Specific**

Portions of this content are Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
