---
description: "Learn more about: _cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l"
title: "_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l"
ms.date: "3/9/2021"
api_name: ["_cwprintf_s_l", "_cprintf_s_l", "_cprintf_s", "_cwprintf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_cwprintf_s_l", "_cprintf_s", "cwprintf_s", "_cprintf_s_l", "cwprintf_s_l", "cprintf_s_l", "_tcprintf_s", "cprintf_s", "_cwprintf_s", "tcprintf_s"]
helpviewer_keywords: ["tcprintf_s_l function", "_cprintf_s_l function", "_cwprintf_s_l function", "tcprintf_s function", "_tcprintf_s_l function", "_cwprintf_s function", "cwprintf_s function", "_cprintf_s function", "cprintf_s function", "_tcprintf_s function", "cprintf_s_l function", "cwprintf_s_l function"]
---
# `_cprintf_s`, `_cprintf_s_l`, `_cwprintf_s`, `_cwprintf_s_l`

Formats and prints to the console. These versions of [`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](cprintf-cprintf-l-cwprintf-cwprintf-l.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _cprintf_s(
   const char * format [,
   argument] ...
);
int _cprintf_s_l(
   const char * format,
   _locale_t locale [,
   argument] ...
);
int _cwprintf_s(
   const wchar * format [,
   argument] ...
);
int _cwprintf_s_l(
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

The number of characters printed.

## Remarks

These functions format and print a series of characters and values directly to the console, using the `_putch` function (`_putwch` for **`_cwprintf_s`**) to output characters. Each *`argument`* (if any) is converted and output according to the corresponding format specification in *`format`*. The format has the same form and function as the *`format`* parameter for the [`printf_s`](../format-specification-syntax-printf-and-wprintf-functions.md) function. Unlike the `fprintf_s`, `printf_s`, and `sprintf_s` functions, **`_cprintf_s`** and **`_cwprintf_s`** don't translate line-feed characters into carriage return-line feed (CR-LF) combinations when output.

An important distinction is that **`_cwprintf_s`** displays Unicode characters when used in Windows NT. Unlike **`_cprintf_s`**, **`_cwprintf_s`** uses the current console locale

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.
>
> Starting in Windows 10 version 2004  (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

Like the non-secure versions (see [`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](cprintf-cprintf-l-cwprintf-cwprintf-l.md)), these functions validate their parameters and invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md), if *`format`* is a null pointer. These functions differ from the non-secure versions in that the format string itself is also validated. If there are any unknown or badly formed formatting specifiers, these functions invoke the invalid parameter handler. In all cases, If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcprintf_s` | **`_cprintf_s`** | **`_cprintf_s`** | **`_cwprintf_s`** |
| `_tcprintf_s_l` | **`_cprintf_s_l`** | **`_cprintf_s_l`** | **`_cwprintf_s_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_cprintf_s`**, **`_cprintf_s_l`** | \<conio.h> |
| **`_cwprintf_s`**, **`_cwprintf_s_l`** | \<conio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_cprintf_s.c
// compile with: /c
// This program displays some variables to the console.

#include <conio.h>

int main( void )
{
   int      i = -16, h = 29;
   unsigned u = 62511;
   char     c = 'A';
   char     s[] = "Test";

   /* Note that console output does not translate \n as
    * standard output does. Use \r\n instead.
    */
   _cprintf_s( "%d  %.4x  %u  %c %s\r\n", i, h, u, c, s );
}
```

```Output
-16  001d  62511  A Test
```

## See also

[Console and port I/O](../console-and-port-i-o.md)\
[`_cscanf`, `_cscanf_l`, `_cwscanf`, `_cwscanf_l`](cscanf-cscanf-l-cwscanf-cwscanf-l.md)\
[`fprintf_s`, `_fprintf_s_l`, `fwprintf_s`, `_fwprintf_s_l`](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)\
[`printf_s`, `_printf_s_l`, `wprintf_s`, `_wprintf_s_l`](printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)\
[`sprintf_s`, `_sprintf_s_l`, `swprintf_s`, `_swprintf_s_l`](sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)\
[`vfprintf_s`, `_vfprintf_s_l`, `vfwprintf_s`, `_vfwprintf_s_l`](vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)\
[Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md)
