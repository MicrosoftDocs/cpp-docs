---
title: "_udiv64"
ms.date: "04/17/2019"
f1_keywords: ["_udiv64"]
helpviewer_keywords: ["_udiv64 intrinsic"]
---
# _udiv64

**Microsoft specific**

Divides a 64-bit unsigned integer *dividend* by a 32-bit unsigned integer *divisor*. Stores the remainder in the 32-bit unsigned integer pointed to by *remainder*, and returns the 32 bits of the quotient.

This intrinsic is new in Visual Studio 2019.

## Syntax

```C
unsigned int _umul64(
   unsigned __int64 dividend,
   unsigned int divisor,
   unsigned int* remainder
);
```

#### Parameters

*dividend*<br/>
[in] The 64-bit integer to divide.

*divisor*<br/>
[in] The 32-bit integer to divide by.

*remainder*<br/>
[out] The 32-bit integer bits of the remainder.

## Return value

The 32 bits of the quotient.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_udiv64`|x86, x64|\<immintrin.h>|

**END Microsoft specific**

## See also

[_div64](../intrinsics/div64.md) \
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
