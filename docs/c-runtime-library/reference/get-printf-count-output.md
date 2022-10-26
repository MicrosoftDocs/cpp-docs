---
description: "Learn more about: _get_printf_count_output"
title: "_get_printf_count_output"
ms.date: "3/9/2021"
api_name: ["_get_printf_count_output"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_printf_count_output", "_get_printf_count_output"]
helpviewer_keywords: ["%n format", "get_printf_count_output function", "_get_printf_count_output function"]
---
# `_get_printf_count_output`

Indicates whether [`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)-family functions support the **%n** format.

## Syntax

```C
int _get_printf_count_output();
```

## Return value

Non-zero if **`%n`** is supported; 0 if **`%n`** isn't supported.

## Remarks

If **`%n`** isn't supported (the default), any **`%n`** found in the format string of one of the `printf` functions invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If **`%n`** support is enabled (see [`_set_printf_count_output`](set-printf-count-output.md)), then **`%n`** behaves as described in [Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md).

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_get_printf_count_output`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`_set_printf_count_output`](set-printf-count-output.md).

## See also

[`_set_printf_count_output`](set-printf-count-output.md)
