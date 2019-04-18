---
title: "_udiv64"
ms.date: "11/04/2016"
f1_keywords: ["_udiv64"]
helpviewer_keywords: ["_udiv64 intrinsic"]
ms.assetid: d241b53a-e6f7-4af1-9f6e-84e149158f03
---
# _udiv64

**Microsoft Specific**

Divides a 64-bit unsigned integer by a 32-bit unsigned integer and stores the remainder in the 32-bit unsigned integer pointed to by `Remainder` and returns the 32 bits of the quotient.

## Syntax

```
unsigned int _umul64(
   unsigned __int64 Dividend,
   unsigned int Divisor,
   unsigned int* Remainder
);
```

#### Parameters

*Dividend*<br/>
[in] The 64-bit integer to divide.

*Divisor*<br/>
[in] The 32-bit integer to divide by.

*Remainder*<br/>
[out] The 32-bit integer bits of the remainder.

## Return Value

The high 64 bits of the 128-bit result of the multiplication.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_udiv64`|x86, x64|\<immintrin.h>|

**END Microsoft Specific**

## See also

[_div64](../intrinsics/div64.md)
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
