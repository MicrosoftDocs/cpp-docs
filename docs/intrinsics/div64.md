---
title: "_div64"
ms.date: "11/04/2016"
f1_keywords: ["_div64"]
helpviewer_keywords: ["_div64 intrinsic"]
ms.assetid: cd2ab093-9ef6-404d-ac34-0bee033882f3
---
# _div64

**Microsoft Specific**

Divides a 64-bit integer by a 32-bit integer and stores the remainder in the 32-bit integer pointed to by `Remainder` and returns the 32 bits of the quotient.

## Syntax

```
int _div64(
   __int64 Dividend,
   int Divisor,
   int* Remainder
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
|`_div64`|x86, x64|\<immintrin.h>|

**END Microsoft Specific**

## See also

[_udiv64](../intrinsics/udiv64.md)
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
