---
title: "_udiv128"
ms.date: "04/17/2019"
f1_keywords: ["_udiv128"]
helpviewer_keywords: ["_udiv128 intrinsic"]
---
# _udiv128

**Microsoft specific**

Divides a 128-bit unsigned integer with the upper 64 bits in *highDividend* and lower 64 bits in *lowDividend* by a 64-bit unsigned integer *divisor*. Stores the remainder in the 64-bit unsigned integer pointed to by *remainder*, and returns the 64 bits of the quotient.

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

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_udiv128`|x64|\<immintrin.h>|

**END Microsoft specific**

## See also

[_div128](../intrinsics/div128.md) \
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
