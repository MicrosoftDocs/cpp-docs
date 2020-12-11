---
description: "Learn more about: _udiv128"
title: "_udiv128"
ms.date: "04/17/2019"
f1_keywords: ["_udiv128"]
helpviewer_keywords: ["_udiv128 intrinsic"]
---
# _udiv128

The `_udiv128` intrinsic divides a 128-bit unsigned integer by a 64-bit unsigned integer. The return value holds the quotient, and the intrinsic returns the remainder through a pointer parameter. `_udiv128` is **Microsoft-specific**.

## Syntax

```C
unsigned __int64 _udiv128(
   unsigned __int64 highDividend,
   unsigned __int64 lowDividend,
   unsigned __int64 divisor,
   unsigned __int64 *remainder
);
```

### Parameters

*highDividend* \
[in] The high 64 bits of the dividend.

*lowDividend* \
[in] The low 64 bits of the dividend.

*divisor* \
[in] The 64-bit integer to divide by.

*remainder* \
[out] The 64-bit integer bits of the remainder.

## Return value

The 64 bits of the quotient.

## Remarks

Pass the upper 64 bits of the 128-bit dividend in *highDividend*, and the lower 64 bits in *lowDividend*. The intrinsic divides this value by *divisor*. It stores the remainder in the 64-bit unsigned integer pointed to by *remainder*, and returns the 64 bits of the quotient.

The `_udiv128` intrinsic is available starting in Visual Studio 2019 RTM.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_udiv128`|x64|\<immintrin.h>|

## See also

[_div128](div128.md) \
[Compiler intrinsics](compiler-intrinsics.md)
