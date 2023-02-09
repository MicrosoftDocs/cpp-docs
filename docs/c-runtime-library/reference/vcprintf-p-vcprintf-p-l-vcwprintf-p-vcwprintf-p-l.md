---
description: "Learn more about: _vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l"
title: "_vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_vcprintf_p", "_vcwprintf_p_l", "_vcprintf_p_l", "_vcwprintf_p"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CONIO/_vcprintf_p", "CONIO/_vcprintf_p_l", "CORECRT_WCONIO/_vcwprintf_p", "CORECRT_WCONIO/_vcwprintf_p_l", "TCHAR/_vtcprintf_p", "TCHAR/_vtcprintf_p_l", "_vcprintf_p", "_vcprintf_p_l", "_vcwprintf_p", "_vcwprintf_p_l", "_vtcprintf_p", "_vtcprintf_p_l"]
helpviewer_keywords: ["_vtcprintf_p_l function", "vcprintf_p_l function", "_vcprintf_p_l function", "vtcprintf_p_l function", "vcprintf_p function", "_vcwprintf_p function", "_vcprintf_p function", "vcwprintf_p function", "vcwprintf_p_l function", "vtcprintf_p function", "_vcwprintf_p_l function", "_vtcprintf_p function"]
---
# `_vcprintf_p`, `_vcprintf_p_l`, `_vcwprintf_p`, `_vcwprintf_p_l`

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
   _locale_t locale,
   va_list argptr
);
int _vcwprintf_p(
   const wchar_t* format,
   va_list argptr
);
int _vcwprintf_p_l(
   const wchar_t* format,
   _locale_t locale,
   va_list argptr
);
```

### Parameters

*`format`*\
The format specification.

*`argptr`*\
A pointer to a list of arguments.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

The number of characters that are written, or a negative value if an output error occurs. If *`format`* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL`, and -1 is returned.

## Remarks

Each of these functions takes a pointer to an argument list, and then uses the `_putch` function to format and write the given data to the console. (**`_vcwprintf_p`** uses `_putwch` instead of `_putch`. **`_vcwprintf_p`** is the wide-character version of **`_vcprintf_p`**. It takes a wide-character string as an argument.)

The versions of these functions that have the `_l` suffix are identical except that they use the locale parameter that's passed in instead of the current locale.

Each *`argument`* (if any) is converted and is output according to the corresponding format specification in *`format`*. The format specification supports positional parameters so that you can specify the order in which the arguments are used in the format string. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

These functions don't translate line-feed characters on output into carriage return-line feed (CR-LF) combinations.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

These functions validate the input pointer and the format string. If *`format`* or *`argument`* is `NULL`, or if the format string contains invalid formatting characters, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vtcprintf_p` | **`_vcprintf_p`** | **`_vcprintf_p`** | **`_vcwprintf_p`** |
| `_vtcprintf_p_l` | **`_vcprintf_p_l`** | **`_vcprintf_p_l`** | **`_vcwprintf_p_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_vcprintf_p`**, **`_vcprintf_p_l`** | \<conio.h> and \<stdarg.h> |
| **`_vcwprintf_p`**, **`_vcwprintf_p_l`** | \<conio.h> and \<stdarg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with [`legacy_stdio_float_rounding.obj`](../link-options.md).

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

[Console and port I/O](../console-and-port-i-o.md)\
[`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](cprintf-cprintf-l-cwprintf-cwprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)\
[printf_p Positional Parameters](../printf-p-positional-parameters.md)
