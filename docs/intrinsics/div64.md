---
title: "_div64"
ms.date: "04/17/2019"
f1_keywords: ["_div64"]
helpviewer_keywords: ["_div64 intrinsic"]
---
# _div64

**Microsoft specific**

Divides a 64-bit integer *dividend* by a 32-bit integer *divisor*. Stores the remainder in the 32-bit integer pointed to by *remainder*, and returns the 32 bits of the quotient.

This intrinsic is new in Visual Studio 2019.

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

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_div64`|x86, x64|\<immintrin.h>|

**END Microsoft specific**

## See also

[_udiv64](../intrinsics/udiv64.md) \
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
