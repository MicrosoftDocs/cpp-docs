---
description: "Learn more about: _div64"
title: "_div64"
ms.date: "09/02/2019"
f1_keywords: ["_div64"]
helpviewer_keywords: ["_div64 intrinsic"]
---
# _div64

The `_div64` intrinsic divides a 64-bit integer by a 32-bit integer. The return value holds the quotient, and the intrinsic returns the remainder through a pointer parameter. `_div64` is **Microsoft-specific**.

## Syntax

```C
int _div64(
   __int64 dividend,
   int divisor,
   int* remainder
);
```

### Parameters

*dividend* \
[in] The 64-bit integer to divide.

*divisor* \
[in] The 32-bit integer to divide by.

*remainder* \
[out] The 32-bit integer bits of the remainder.

## Return value

The 32 bits of the quotient.

## Remarks

The `_div64` intrinsic divides *dividend* by *divisor*. It stores the remainder in the 32-bit integer pointed to by *remainder*, and returns the 32 bits of the quotient.

The `_div64` intrinsic is available starting in Visual Studio 2019 RTM.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_div64`|x86, x64|\<immintrin.h>|

## See also

[_udiv64](udiv64.md) \
[Compiler intrinsics](compiler-intrinsics.md)
