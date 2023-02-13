---
description: "Learn more about: _cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l"
title: "_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_cprintf_p_l", "_cwprintf_p_l", "_cwprintf_p", "_cprintf_p"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cprintf_p", "cwprintf_p", "tcprintf_p", "_cwprintf_p_l", "_cprintf_p", "csprintf_p_l", "_cprintf_p_l", "_cwprintf_p", "_tcprintf_p", "cprintf_p_l"]
helpviewer_keywords: ["_cwprintf_p_l function", "cwprintf_p function", "tcprintf_p_l function", "cprintf_p_l function", "_tcprintf_p function", "_tcprintf_p_l function", "_cprintf_p function", "_cprintf_p_l function", "cwprintf_p_l function", "_cwprintf_p function", "tcprintf_p function", "cprintf_p function"]
---
# `_cprintf_p`, `_cprintf_p_l`, `_cwprintf_p`, `_cwprintf_p_l`

Formats and prints to the console, and supports positional parameters in the format string.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _cprintf_p(
   const char * format [,
   argument] ...
);
int _cprintf_p_l(
   const char * format,
   _locale_t locale [,
   argument] ...
);
int _cwprintf_p(
   const wchar * format [,
   argument] ...
);
int _cwprintf_p_l(
   const wchar * format,
   _locale_t locale [,
   argument] ...
);
```

### Parameters

*`format`*\
Format-control string.

*`argument`*\
Optional parameters.

*`locale`*\
The locale to use.

## Return value

The number of characters printed or a negative value if an error occurs.

## Remarks

These functions format and print a series of characters and values directly to the console, using the `_putch` and `_putwch` functions to output characters. Each *`argument`* (if any) is converted and output according to the corresponding format specification in *`format`*. The format has the same form and function as the *`format`* parameter for the [`printf_p`](../format-specification-syntax-printf-and-wprintf-functions.md) function. The difference between **`_cprintf_p`** and `cprintf_s` is that **`_cprintf_p`** supports positional parameters, which allows specifying the order in which the arguments are used in the format string. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

Unlike the `fprintf_p`, `printf_p`, and `sprintf_p` functions, **`_cprintf_p`** and **`_cwprintf_p`** don't translate line-feed characters into carriage return-line feed (CR-LF) combinations when output. An important distinction is that **`_cwprintf_p`** displays Unicode characters when used in Windows NT. Unlike **`_cprintf_p`**, **`_cwprintf_p`** uses the current console locale settings.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale.

Also, like `_cprintf_s` and `_cwprintf_s`, they validate the input pointer and the format string. If *`format`* or *`argument`* are `NULL`, or of the format string contains invalid formatting characters, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.
>
>
> Starting in Windows 10 version 2004  (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with [`legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcprintf_p` | **`_cprintf_p`** | **`_cprintf_p`** | **`_cwprintf_p`** |
| `_tcprintf_p_l` | **`_cprintf_p_l`** | **`_cprintf_p_l`** | **`_cwprintf_p_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_cprintf_p`**, **`_cprintf_p_l`** | \<conio.h> |
| **`_cwprintf_p`**, **`_cwprintf_p_l`** | \<conio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_cprintf_p.c
// This program displays some variables to the console
// using the _cprintf_p function.

#include <conio.h>

int main( void )
{
    int         i = -16,
                h = 29;
    unsigned    u = 62511;
    char        c = 'A';
    char        s[] = "Test";

    // Note that console output does not translate
    // \n as standard output does. Use \r\n instead.
    _cprintf_p( "%2$d  %1$.4x  %3$u  %4$c %5$s\r\n",
                h, i, u, c, s );
}
```

```Output
-16  001d  62511  A Test
```

## See also

[Console and port I/O](../console-and-port-i-o.md)\
[`_cscanf`, `_cscanf_l`, `_cwscanf`, `_cwscanf_l`](cscanf-cscanf-l-cwscanf-cwscanf-l.md)\
[`_cscanf_s`, `_cscanf_s_l`, `_cwscanf_s`, `_cwscanf_s_l`](cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)\
[`_fprintf_p`, `_fprintf_p_l`, `_fwprintf_p`, `_fwprintf_p_l`](fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)\
[`fprintf_s`, `_fprintf_s_l`, `fwprintf_s`, `_fwprintf_s_l`](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)\
[`_printf_p`, `_printf_p_l`, `_wprintf_p`, `_wprintf_p_l`](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)\
[`printf_s`, `_printf_s_l`, `wprintf_s`, `_wprintf_s_l`](printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)\
[`_sprintf_p`, `_sprintf_p_l`, `_swprintf_p`, `_swprintf_p_l`](sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)\
[`_vfprintf_p`, `_vfprintf_p_l`, `_vfwprintf_p`, `_vfwprintf_p_l`](vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)\
[`_cprintf_s`, `_cprintf_s_l`, `_cwprintf_s`, `_cwprintf_s_l`](cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)\
[printf_p Positional Parameters](../printf-p-positional-parameters.md)\
[Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md)
