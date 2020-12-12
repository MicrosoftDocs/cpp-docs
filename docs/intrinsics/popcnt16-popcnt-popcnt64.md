---
description: "Learn more about: __popcnt16, __popcnt, __popcnt64"
title: "__popcnt16, __popcnt, __popcnt64"
ms.date: "09/02/2019"
f1_keywords: ["__popcnt64", "__popcnt", "__popcnt16"]
helpviewer_keywords: ["popcnt instruction", "__popcnt16", "__popcnt64", "__popcnt"]
ms.assetid: e525b236-adc8-42df-9b9b-8b7d8c245d3b
---
# __popcnt16, __popcnt, __popcnt64

**Microsoft Specific**

Counts the number of `1` bits (population count) in a 16-, 32-, or 64-bit unsigned integer.

## Syntax

```C
unsigned short __popcnt16(
   unsigned short value
);
unsigned int __popcnt(
   unsigned int value
);
unsigned __int64 __popcnt64(
   unsigned __int64 value
);
```

### Parameters

*value*\
[in] The 16-, 32-, or 64-bit unsigned integer for which we want the population count.

## Return value

The number of `1` bits in the *value* parameter.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__popcnt16`|Advanced Bit Manipulation|
|`__popcnt`|Advanced Bit Manipulation|
|`__popcnt64`|Advanced Bit Manipulation in 64-bit mode.|

**Header file** \<intrin.h>

## Remarks

Each of the intrinsics generates the `popcnt` instruction. In 32-bit mode, there are no 64-bit general-purpose registers, so 64-bit `popcnt` isn't supported.

To determine hardware support for the `popcnt` instruction, call the `__cpuid` intrinsic with `InfoType=0x00000001` and check bit 23 of `CPUInfo[2] (ECX)`. This bit is 1 if the instruction is supported, and 0 otherwise. If you run code that uses these intrinsics on hardware that doesn't support the `popcnt` instruction, the results are unpredictable.

## Example

```cpp
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
    usr = __popcnt16(us[i]);
    cout << "__popcnt16(0x" << hex << us[i] << ") = " << dec << usr << endl;
  }

  for (int i=0; i<4; i++) {
    uir = __popcnt(ui[i]);
    cout << "__popcnt(0x" << hex << ui[i] << ") = " << dec << uir << endl;
  }
}
```

```Output
__popcnt16(0x0) = 0
__popcnt16(0xff) = 8
__popcnt16(0xffff) = 16
__popcnt(0x0) = 0
__popcnt(0xff) = 8
__popcnt(0xffff) = 16
__popcnt(0xffffffff) = 32
```

**END Microsoft Specific**

Portions Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
