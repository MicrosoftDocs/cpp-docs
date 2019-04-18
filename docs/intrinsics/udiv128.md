---
title: "_udiv128"
ms.date: "11/04/2016"
f1_keywords: ["_udiv128"]
helpviewer_keywords: ["_udiv128 intrinsic"]
ms.assetid: 13684df3-3ac7-467c-b258-a0e93bc490b5
---
# _udiv128

**Microsoft Specific**

Divides a 128-bit unsigned integer with the upper 64 bits in `HighDividend` and lower 64 bits in `LowDividend` by a 64-bit unsigned integer and stores the remainder in the 64-bit unsigned integer pointed to by `Remainder` and returns the 64 bits of the quotient.

## Syntax

```
unsigned __int64 _udiv128(
   unsigned __int64 HighDividend,
   unsigned __int64 LowDividend,
   unsigned __int64 Divisor,
   unsigned __int64 *Remainder
);
```

#### Parameters

*HighDividend*<br/>
[in] The high 64 bits of the dividend.

*LowDividend*<br/>
[in] The low 64 bits of the dividend.

*Multiplicand*<br/>
[in] The 64-bit integer to divide by.

*Remainder*<br/>
[out] The 64-bit integer bits of the remainder.

## Return Value

The 64 bits of the quotient.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_udiv128`|x64|\<immintrin.h>|

**END Microsoft Specific**

## See also

[_div128](../intrinsics/div128.md)
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
