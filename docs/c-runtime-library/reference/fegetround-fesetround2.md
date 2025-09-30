---
description: "Learn more about: fegetround, fesetround"
title: "fegetround, fesetround"
ms.date: "04/05/2018"
api_name: ["fegetround", "fesetround"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fegetround", "fesetround", "fenv/fegetround", "fenv/fesetround"]
helpviewer_keywords: ["fegetround function", "fesetround function"]
---
# `fegetround`, `fesetround`

Gets or sets the current floating-point rounding mode.

## Syntax

```C
int fegetround(void);
int fesetround(int round_mode);
```

### Parameters

*`round_mode`*\
The rounding mode to set, as one of the floating-point rounding macros. If the value isn't equal to one of the floating-point rounding macros, the rounding mode isn't changed.

## Return value

On success, **`fegetround`** returns the rounding mode as one of the floating point rounding macro values. It returns a negative value if the current rounding mode can't be determined.

On success, **`fesetround`** returns 0. Otherwise, a non-zero value is returned.

## Remarks

Floating-point operations can use one of several rounding modes. These modes control which direction the results of floating-point operations are rounded toward when the results are stored. Here are the names and behaviors of the floating-point rounding macros defined in \<fenv.h>:

| Macro | Description |
|---|---|
| `FE_DOWNWARD` | Round towards negative infinity. |
| `FE_TONEAREST` | Round towards the nearest. |
| `FE_TOWARDZERO` | Round towards zero. |
| `FE_UPWARD` | Round towards positive infinity. |

The default behavior of `FE_TONEAREST` is to round results midway between representable values toward the nearest value with an even (0) least significant bit.

The current rounding mode affects these operations:

- String conversions.
- The results of floating-point arithmetic operators outside of constant expressions.
- The library rounding functions, such as `rint` and `nearbyint`.
- Return values from standard library mathematical functions.

The current rounding mode doesn't affect these operations:

- The `trunc`, `ceil`, `floor`, and `lround` library functions.
- Floating-point to integer implicit casts and conversions, which always round towards zero.
- The results of floating-point arithmetic operators in constant expressions, which always round to the nearest value.

To use these functions, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [`fenv_access`](../../preprocessor/fenv-access.md).

> [!IMPORTANT]  
> Prior to Windows 10 version 14393, `fenv.h` defined `FE_UPWARD = 0x0100` and `FE_DOWNWARD = 0x0200`. In Windows version 14393, this header was updated to address a bug in which some APIs would interpret `FE_UPWARD` as `FE_DOWNWARD`, and vice-versa. Starting in Windows version 14393, `FE_UPWARD = 0x0200` and `FE_DOWNWARD = 0x0100`, reversing their previous values.
> If you compiled your app against an old Windows SDK version (this issue depends on SDK version, not OS version or VS version) you might encounter this issue. Update your app to target the latest Windows SDK so that the definitions of `FE_UPWARD` and `FE_DOWNWARD` are consistent with the Windows implementation. If you can't update your app to target a later Windows SDK, you can define `FE_UPWARD` as `0x0100` and `FE_DOWNWARD` as `0x0200` in your code.

## Requirements

| Function | C header | C++ header |
|---|---|---|
| **`fegetround`**, **`fesetround`** | `<fenv.h>` | `<cfenv>` |

For more information, see [Compatibility](../compatibility.md).

## See also

[Alphabetical function reference](crt-alphabetical-function-reference.md)\
[`nearbyint`, `nearbyintf`, `nearbyintl`](nearbyint-nearbyintf-nearbyintl1.md)\
[`rint`, `rintf`, `rintl`](rint-rintf-rintl.md)\
[`lrint`, `lrintf`, `lrintl`, `llrint`, `llrintf`, `llrintl`](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)
