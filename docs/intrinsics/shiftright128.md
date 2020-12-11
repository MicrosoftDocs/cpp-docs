---
description: "Learn more about: __shiftright128"
title: "__shiftright128"
ms.date: "09/02/2019"
f1_keywords: ["__shiftright128"]
helpviewer_keywords: ["__shiftright128 intrinsic"]
ms.assetid: 5419a6c4-0de1-43fb-b314-4faa5b2d051f
---
# __shiftright128

**Microsoft Specific**

Shifts a 128-bit quantity, represented as two 64-bit quantities `LowPart` and `HighPart`, to the right by a number of bits specified by `Shift` and returns the low 64 bits of the result.

## Syntax

```C
unsigned __int64 __shiftright128(
   unsigned __int64 LowPart,
   unsigned __int64 HighPart,
   unsigned char Shift
);
```

### Parameters

*LowPart*\
[in] The low 64 bits of the 128-bit quantity to shift.

*HighPart*\
[in] The high 64 bits of the 128-bit quantity to shift.

*Shift*\
[in] The number of bits to shift.

## Return value

The low 64 bits of the result.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__shiftright128`|x64|

**Header file** \<intrin.h>

## Remarks

The `Shift` value is always modulo 64 so that, for example, if you call `__shiftright128(0, 1, 64)`, the function will shift the high part `0` bits right and return a low part of `0` and not `1` as might otherwise be expected.

## Example

For an example, see [__shiftleft128](../intrinsics/shiftleft128.md).

**END Microsoft Specific**

## See also

[__shiftleft128](../intrinsics/shiftleft128.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
