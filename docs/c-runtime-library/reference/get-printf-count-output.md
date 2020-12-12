---
description: "Learn more about: _get_printf_count_output"
title: "_get_printf_count_output"
ms.date: "11/04/2016"
api_name: ["_get_printf_count_output"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_printf_count_output", "_get_printf_count_output"]
helpviewer_keywords: ["%n format", "get_printf_count_output function", "_get_printf_count_output function"]
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
---
# _get_printf_count_output

Indicates whether [printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)-family functions support the **%n** format.

## Syntax

```C
int _get_printf_count_output();
```

## Return Value

Non-zero if **%n** is supported, 0 if **%n** is not supported.

## Remarks

If **%n** is not supported (the default), encountering **%n** in the format string of any of the **printf** functions will invoke the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If **%n** support is enabled (see [_set_printf_count_output](set-printf-count-output.md)) then **%n** will behave as described in [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_printf_count_output**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_set_printf_count_output](set-printf-count-output.md).

## See also

[_set_printf_count_output](set-printf-count-output.md)<br/>
