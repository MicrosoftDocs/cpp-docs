---
title: "_set_printf_count_output | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_set_printf_count_output"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["set_printf_count_output", "_set_printf_count_output"]
dev_langs: ["C++"]
helpviewer_keywords: ["%n format", "set_printf_count_output function", "_set_printf_count_output function"]
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _set_printf_count_output

Enable or disable support of the `%n` format in [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)-family functions.

## Syntax

```
int _set_printf_count_output(
   int enable
);
```

### Parameters

`enable`
A non-zero value to enable `%n` support, 0 to disable `%n` support.

## Property Value/Return Value

The state of `%n` support before calling this function: non-zero if `%n` support was enabled, 0 if it was disabled.

## Remarks

Because of security reasons, support for the `%n` format specifier is disabled by default in `printf` and all its variants. If `%n` is encountered in a `printf` format specification, the default behavior is to invoke the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Calling `_set_printf_count_output` with a non-zero argument will cause `printf`-family functions to interpret `%n` as described in [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_set_printf_count_output`|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## Example

```C
// crt_set_printf_count_output.c
#include <stdio.h>

int main()
{
   int e;
   int i;
   e = _set_printf_count_output( 1 );
   printf( "%%n support was %sabled.\n",
        e ? "en" : "dis" );
   printf( "%%n support is now %sabled.\n",
        _get_printf_count_output() ? "en" : "dis" );
   printf( "12345%n6789\n", &i ); // %n format should set i to 5
   printf( "i = %d\n", i );
}
```

```Output
%n support was disabled.
%n support is now enabled.
123456789
i = 5
```

## See Also

[_get_printf_count_output](../../c-runtime-library/reference/get-printf-count-output.md)