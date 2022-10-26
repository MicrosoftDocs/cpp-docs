---
description: "Learn more about: _printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l"
title: "_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_printf_p", "_wprintf_p", "_printf_p_l", "_wprintf_p_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wprintf_p", "_wprintf_p", "printf_p_l", "_printf_p", "printf_p", "_wprintf_p_l", "_printf_p_l", "wprintf_p_l"]
helpviewer_keywords: ["printf_p function", "printf_p_l function", "wprintf_p function", "wprintf_p_l function", "_tprintf_p_l function", "_wprintf_p function", "_wprintf_p_l function", "_printf_p function", "tprintf_p_l function", "_printf_p_l function"]
---
# `_printf_p`, `_printf_p_l`, `_wprintf_p`, `_wprintf_p_l`

Prints formatted output to the standard output stream, and enables specification of the order in which parameters are used in the format string.

## Syntax

```C
int _printf_p(
   const char *format [,
   argument]...
);
int _printf_p_l(
   const char *format,
   _locale_t locale [,
   argument]...
);
int _wprintf_p(
   const wchar_t *format [,
   argument]...
);
int _wprintf_p_l(
   const wchar_t *format,
   _locale_t locale [,
   argument]...
);
```

### Parameters

*`format`*\
Format control.

*`argument`*\
Optional arguments.

*`locale`*\
The locale to use.

## Return value

Returns the number of characters printed or a negative value if an error occurs.

## Remarks

The **`_printf_p`** function formats and prints a series of characters and values to the standard output stream, `stdout`. If arguments follow the *`format`* string, the *`format`* string must contain specifications that determine the output format for the arguments (see [printf_p Positional Parameters](../printf-p-positional-parameters.md)).

The difference between **`_printf_p`** and `printf_s` is that **`_printf_p`** supports positional parameters, which allows specifying the order in which the arguments are used in the format string. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

**`_wprintf_p`** is the wide-character version of **`_printf_p`**; they behave identically if the stream is opened in ANSI mode. **`_printf_p`** doesn't currently support output into a UNICODE stream.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.

If *`format`* or *`argument`* are `NULL`, or of the format string contains invalid formatting characters, **`_printf_p`** and **`_wprintf_p`** functions invoke an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets `errno` to `EINVAL`.

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tprintf_p` | **`_printf_p`** | **`_printf_p`** | **`_wprintf_p`** |
| `_tprintf_p_l` | **`_printf_p_l`** | **`_printf_p_l`** | **`_wprintf_p_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_printf_p`**, **`_printf_p_l`** | \<stdio.h> |
| **`_wprintf_p`**, **`_wprintf_p_l`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, `stdin`, `stdout`, and `stderr`, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with [`legacy_stdio_float_rounding.obj`](../link-options.md).

## Example

```C
// crt_printf_p.c
// This program uses the _printf_p and _wprintf_p
// functions to choose the order in which parameters
// are used.

#include <stdio.h>

int main( void )
{
   // Positional arguments
   _printf_p( "Specifying the order: %2$s %3$s %1$s %4$s %5$s.\n",
              "little", "I'm", "a", "tea", "pot");

   // Resume arguments
   _wprintf_p( L"Reusing arguments: %1$d %1$d %1$d %1$d\n", 10);

   // Width argument
   _printf_p("Width specifiers: %1$*2$s", "Hello\n", 10);
}
```

```Output
Specifying the order: I'm a little tea pot.
Reusing arguments: 10 10 10 10
Width specifiers:     Hello
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[Stream I/O](../stream-i-o.md)\
[Locale](../locale.md)\
[`fopen`, `_wfopen`](fopen-wfopen.md)\
[`_fprintf_p`, `_fprintf_p_l`, `_fwprintf_p`, `_fwprintf_p_l`](fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`fprintf_s`, `_fprintf_s_l`, `fwprintf_s`, `_fwprintf_s_l`](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)\
[`_sprintf_p`, `_sprintf_p_l`, `_swprintf_p`, `_swprintf_p_l`](sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`sprintf_s`, `_sprintf_s_l`, `swprintf_s`, `_swprintf_s_l`](sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)\
[`vprintf` functions](../vprintf-functions.md)
