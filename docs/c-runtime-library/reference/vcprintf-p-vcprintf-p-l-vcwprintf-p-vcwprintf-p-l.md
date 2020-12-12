---
description: "Learn more about: _vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l"
title: "_vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l"
ms.date: "11/04/2016"
api_name: ["_vcprintf_p", "_vcwprintf_p_l", "_vcprintf_p_l", "_vcwprintf_p"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vcwprintf_p", "vcprintf_p_l", "_vcprintf_p", "_vcprintf_p_l", "vcwprintf_p_l", "vcprintf_p", "_vcwprintf_p", "_vcwprintf_p_l"]
helpviewer_keywords: ["_vtcprintf_p_l function", "vcprintf_p_l function", "_vcprintf_p_l function", "vtcprintf_p_l function", "vcprintf_p function", "_vcwprintf_p function", "_vcprintf_p function", "vcwprintf_p function", "vcwprintf_p_l function", "vtcprintf_p function", "_vcwprintf_p_l function", "_vtcprintf_p function"]
ms.assetid: 611024cc-90e7-41db-8e85-145ca95012b1
---
# _vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l

Writes formatted output to the console by using a pointer to a list of arguments, and supports positional parameters in the format string.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _vcprintf_p(
   const char* format,
   va_list argptr
);
int _vcprintf_p_l(
   const char* format,
   locale_t locale,
   va_list argptr
);
int _vcwprintf_p(
   const wchar_t* format,
   va_list argptr
);
int _vcwprintf_p_l(
   const wchar_t* format,
   locale_t locale,
   va_list argptr
);
```

### Parameters

*format*<br/>
The format specification.

*argptr*<br/>
A pointer to a list of arguments.

*locale*<br/>
The locale to use.

For more information, see [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

The number of characters that are written, or a negative value if an output error occurs. If *format* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and -1 is returned.

## Remarks

Each of these functions takes a pointer to an argument list, and then uses the **_putch** function to format and write the given data to the console. (**_vcwprintf_p** uses **_putwch** instead of **_putch**. **_vcwprintf_p** is the wide-character version of **_vcprintf_p**. It takes a wide-character string as an argument.)

The versions of these functions that have the **_l** suffix are identical except that they use the locale parameter that's passed in instead of the current locale.

Each *argument* (if any) is converted and is output according to the corresponding format specification in *format*. The format specification supports positional parameters so that you can specify the order in which the arguments are used in the format string. For more information, see [printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md).

These functions do not translate line-feed characters into carriage return-line feed (CR-LF) combinations when they are output.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

These functions validate the input pointer and the format string. If *format* or *argument* is **NULL**, or if the format string contains invalid formatting characters, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_vtcprintf_p**|**_vcprintf_p**|**_vcprintf_p**|**_vcwprintf_p**|
|**_vtcprintf_p_l**|**_vcprintf_p_l**|**_vcprintf_p_l**|**_vcwprintf_p_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_vcprintf_p**, **_vcprintf_p_l**|\<conio.h> and \<stdarg.h>|
|**_vcwprintf_p**, **_vcwprintf_p_l**|\<conio.h> and \<stdarg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_vcprintf_p.c
// compile with: /c
#include <conio.h>
#include <stdarg.h>

// An error formatting function that's used to print to the console.
int eprintf(const char* format, ...)
{
   va_list args;
   va_start(args, format);
   int result = _vcprintf_p(format, args);
   va_end(args);
   return result;
}

int main()
{
   int n = eprintf("parameter 2 = %2$d; parameter 1 = %1$s\r\n",
      "one", 222);
   _cprintf_s("%d characters printed\r\n");
}
```

```Output
parameter 2 = 222; parameter 1 = one
38 characters printed
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
[printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md)<br/>
