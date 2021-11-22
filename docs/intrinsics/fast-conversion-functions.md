---
description: "Learn more about: Fast floating-point conversion functions"
title: "Fast conversion functions"
ms.date: 11/18/2021
f1_keywords: ["intrin/_cvt_dtoi_fast", "intrin/_cvt_dtoll_fast", "intrin/_cvt_dtoui_fast", "intrin/_cvt_dtoull_fast", "intrin/_cvt_ftoi_fast", "intrin/_cvt_ftoll_fast", "intrin/_cvt_ftoui_fast", "intrin/_cvt_ftoull_fast"]
helpviewer_keywords: ["_cvt_dtoi_fast", "_cvt_dtoll_fast", "_cvt_dtoui_fast", "_cvt_dtoull_fast", "_cvt_ftoi_fast", "_cvt_ftoll_fast", "_cvt_ftoui_fast", "_cvt_ftoull_fast"]
---
# Fast floating-point conversion functions

**Microsoft Specific**

Fast conversion functions between floating-point types and integral types.

## Syntax

```C
int _cvt_ftoi_fast(float value);
long long _cvt_ftoll_fast(float value);
unsigned _cvt_ftoui_fast(float value);
unsigned long long _cvt_ftoull_fast(float value);
int _cvt_dtoi_fast(double value);
long long _cvt_dtoll_fast(double value);
unsigned _cvt_dtoui_fast(double value);
unsigned long long _cvt_dtoull_fast(double value);
```

### Parameters

*`value`*\
[in] A floating-point value to convert.

## Return value

The integer-typed result of the conversion.

## Requirements

**Header**: \<intrin.h>

**Architecture**: x86, x64

## Remarks

These intrinsics are fast conversion functions that execute as quickly as possible for valid conversions. As in Standard C++, fast conversions aren't fully defined. They may generate different values or exceptions for invalid conversions. The results depend on the target platform, compiler options, and context. These functions can be useful for handling values that have already been range-checked. Or, for values generated in a way that can never cause an invalid conversion.

The fast conversion intrinsics are available starting in Visual Studio 2022.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Saturation floating-point conversion functions](saturation-conversion-functions.md)\
[Sentinel floating-point conversion functions](sentinel-conversion-functions.md)
