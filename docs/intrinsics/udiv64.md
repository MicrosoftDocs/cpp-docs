---
description: "Learn more about: _udiv64"
title: "_udiv64"
ms.date: "09/02/2019"
f1_keywords: ["_udiv64"]
helpviewer_keywords: ["_udiv64 intrinsic"]
---
# _udiv64

The `_udiv64` intrinsic divides a 64-bit unsigned integer by a 32-bit unsigned integer. The return value holds the quotient, and the intrinsic returns the remainder through a pointer parameter. `_udiv64` is **Microsoft-specific**.

## Syntax

```C
unsigned int _udiv64(
   unsigned __int64 dividend,
   unsigned int divisor,
   unsigned int* remainder
);
```

### Parameters

*dividend*\
[in] The 64-bit unsigned integer to divide.

*divisor*\
[in] The 32-bit unsigned integer to divide by.

*remainder*\
[out] The 32-bit unsigned integer remainder.

## Return value

The 32 bits of the quotient.

## Remarks

The `_udiv64` intrinsic divides *dividend* by *divisor*. It stores the remainder in the 32-bit unsigned integer pointed to by *remainder*, and returns the 32 bits of the quotient.

The `_udiv64` intrinsic is available starting in Visual Studio 2019 RTM.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_udiv64`|x86, x64|\<immintrin.h>|

## See also

[_div64](div64.md) \
[Compiler intrinsics](compiler-intrinsics.md)
