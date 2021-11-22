---
description: "Learn more about: Saturation floating-point conversion functions"
title: "Saturation conversion functions"
ms.date: 11/18/2021
f1_keywords: ["intrin/_cvt_dtoi_sat", "intrin/_cvt_dtoll_sat", "intrin/_cvt_dtoui_sat", "intrin/_cvt_dtoull_sat", "intrin/_cvt_ftoi_sat", "intrin/_cvt_ftoll_sat", "intrin/_cvt_ftoui_sat", "intrin/_cvt_ftoull_sat"]
helpviewer_keywords: ["_cvt_dtoi_sat", "_cvt_dtoll_sat", "_cvt_dtoui_sat", "_cvt_dtoull_sat", "_cvt_ftoi_sat", "_cvt_ftoll_sat", "_cvt_ftoui_sat", "_cvt_ftoull_sat"]
---
# Saturation floating-point conversion functions

**Microsoft Specific**

Conversion functions between floating-point types and integral types that use an ARM processor-compatible saturation strategy.

## Syntax

```C
int _cvt_ftoi_sat(float value);
long long _cvt_ftoll_sat(float value);
unsigned _cvt_ftoui_sat(float value);
unsigned long long _cvt_ftoull_sat(float value);
int _cvt_dtoi_sat(double value);
long long _cvt_dtoll_sat(double value);
unsigned _cvt_dtoui_sat(double value);
unsigned long long _cvt_dtoull_sat(double value);
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

These intrinsics are floating-point to integral type conversion functions that use a *saturation* strategy: Any floating-point value too high to fit in the destination type is mapped to the highest possible destination value. Any value too low to fit maps to the lowest possible value. And if the source value is NaN, zero is returned for the result.

The saturation conversion intrinsics are available starting in Visual Studio 2019 version 16.10.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Fast floating-point conversion functions](fast-conversion-functions.md)\
[Sentinel floating-point conversion functions](sentinel-conversion-functions.md)
