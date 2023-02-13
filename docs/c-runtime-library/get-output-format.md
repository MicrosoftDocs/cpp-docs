---
description: "Learn more about: _get_output_format"
title: "_get_output_format"
ms.date: "11/04/2016"
api_name: ["_get_output_format"]
api_location: ["msvcr110_clr0400.dll", "msvcr100.dll", "msvcr80.dll", "msvcrt.dll", "msvcr90.dll", "msvcr120.dll", "msvcr110.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_output_format", "_get_output_format"]
helpviewer_keywords: ["output formatting", "get_output_format function", "_get_output_format function"]
ms.assetid: 0ce42f3b-3479-41c4-bcbf-1d21f7ee37e7
---
# `_get_output_format`

Gets the current value of the output format flag.

> [!IMPORTANT]
> This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.

## Syntax

```C
unsigned int _get_output_format();
```

## Return value

The current value of the output format flag.

## Remarks

The output format flag controls features of formatted I/O. The flag has two possible values: 0 and `_TWO_DIGIT_EXPONENT`. If `_TWO_DIGIT_EXPONENT` is set, the floating point number is printed with only two digits in the exponent unless a third digit is required by the size of the exponent. If the flag is zero, the floating point output displays three digits of exponent, using zeroes if necessary to pad the value to three digits.

## Requirements

| Routine | Required header |
|---|---|
| **`_get_output_format`** | \<stdio.h> |

For more compatibility information, see [Compatibility](./compatibility.md) in the Introduction.

## See also

[Format specification syntax: `printf` and `wprintf` functions](./format-specification-syntax-printf-and-wprintf-functions.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](./reference/printf-printf-l-wprintf-wprintf-l.md)\
[`printf_s`, `_printf_s_l`, `wprintf_s`, `_wprintf_s_l`](./reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)\
[`_set_output_format`](./set-output-format.md)
