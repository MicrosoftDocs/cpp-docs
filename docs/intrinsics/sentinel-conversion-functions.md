---
description: "Learn more about: Sentinel floating-point conversion functions"
title: "Sentinel conversion functions"
ms.date: 11/18/2021
f1_keywords: ["intrin/_cvt_dtoi_sent", "intrin/_cvt_dtoll_sent", "intrin/_cvt_dtoui_sent", "intrin/_cvt_dtoull_sent", "intrin/_cvt_ftoi_sent", "intrin/_cvt_ftoll_sent", "intrin/_cvt_ftoui_sent", "intrin/_cvt_ftoull_sent"]
helpviewer_keywords: ["_cvt_dtoi_sent", "_cvt_dtoll_sent", "_cvt_dtoui_sent", "_cvt_dtoull_sent", "_cvt_ftoi_sent", "_cvt_ftoll_sent", "_cvt_ftoui_sent", "_cvt_ftoull_sent"]
---
# Sentinel floating-point conversion functions

**Microsoft Specific**

Conversion functions between floating-point types and integral types that use an Intel Architecture (IA) AVX-512 compatible sentinel strategy.

## Syntax

```C
int _cvt_ftoi_sent(float value);
long long _cvt_ftoll_sent(float value);
unsigned _cvt_ftoui_sent(float value);
unsigned long long _cvt_ftoull_sent(float value);
int _cvt_dtoi_sent(double value);
long long _cvt_dtoll_sent(double value);
unsigned _cvt_dtoui_sent(double value);
unsigned long long _cvt_dtoull_sent(double value);
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

These intrinsics are floating-point to integral type conversion functions that use a *sentinel* strategy: They return the result value farthest from zero as a proxy sentinel value for NaN. Any invalid conversion returns this sentinel value. The specific sentinel value returned depends on the result type.

| Result type | Sentinel | *`<limits.h>`* constant |
|--|--|
| `int` | -2147483648 (0xFFFFFFFF) | `INT_MIN` |
| `unsigned int` | 4294967295 (0xFFFFFFFF) | `UINT_MAX` |
| `long long` | -9223372036854775808 (0xFFFFFFFF'FFFFFFFF) | `LLONG_MIN` |
| `unsigned long long` | 18446744073709551615 (0xFFFFFFFF'FFFFFFFF) | `ULLONG_MAX` |

The sentinel conversion intrinsics are available starting in Visual Studio 2019 version 16.10.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Fast floating-point conversion functions](fast-conversion-functions.md)\
[Saturation floating-point conversion functions](saturation-conversion-functions.md)
