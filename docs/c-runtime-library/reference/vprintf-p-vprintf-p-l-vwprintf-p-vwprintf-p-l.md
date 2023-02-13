---
description: "Learn more about: _vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l"
title: "_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_vwprintf_p", "_vprintf_p", "_vprintf_p_l", "_vwprintf_p_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/_vprintf_p", "STDIO/_vprintf_p_l", "CORECRT_WSTDIO/_vwprintf_p","CORECRT_WSTDIO/_vwprintf_p_l", "TCHAR/_vtprintf_p", "TCHAR/_vtprintf_p_l", "_vprintf_p", "_vprintf_p_l", "_vwprintf_p", "_vwprintf_p_l", "_vtprintf_p", "_vtprintf_p_l"]
helpviewer_keywords: ["_vtprintf_p_l function", "_vtprintf_p function", "vtprintf_p function", "_vwprintf_p function", "_vwprintf_p_l function", "_vprintf_p function", "_vprintf_p_l function", "vprintf_p_l function", "vwprintf_p function", "vprintf_p function", "vtprintf_p_l function", "vwprintf_p_l function", "formatted text [C++]"]
---
# `_vprintf_p`, `_vprintf_p_l`, `_vwprintf_p`, `_vwprintf_p_l`

Writes formatted output by using a pointer to a list of arguments, and enables specification of the order in which the arguments are used.

## Syntax

```C
int _vprintf_p(
   const char *format,
   va_list argptr
);
int _vprintf_p_l(
   const char *format,
   _locale_t locale,
   va_list argptr
);
int _vwprintf_p(
   const wchar_t *format,
   va_list argptr
);
int _vwprintf_p_l(
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
```

### Parameters

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

**`_vprintf_p`** and **`_vwprintf_p`** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs.

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to `stdout`. These functions differ from `vprintf_s` and `vwprintf_s` only in that they support the ability to specify the order in which the arguments are used. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

**`_vwprintf_p`** is the wide-character version of **`_vprintf_p`**; the two functions behave identically if the stream is opened in ANSI mode. **`_vprintf_p`** doesn't currently support output into a UNICODE stream.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

If *`format`* is a null pointer, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vtprintf_p` | **`_vprintf_p`** | **`_vprintf_p`** | **`_vwprintf_p`** |
| `_vtprintf_p_l` | **`_vprintf_p_l`** | **`_vprintf_p_l`** | **`_vwprintf_p_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`_vprintf_p`**, **`_vprintf_p_l`** | \<stdio.h> and \<stdarg.h> | \<varargs.h>* |
| **`_vwprintf_p`**, **`_vwprintf_p_l`** | \<stdio.h> or \<wchar.h>, and \<stdarg.h> | \<varargs.h>* |

\* Required for UNIX V compatibility.

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, `stdin`, `stdout`, and `stderr`, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[`_fprintf_p`, `_fprintf_p_l`, `_fwprintf_p`, `_fwprintf_p_l`](fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)\
[`_printf_p`, `_printf_p_l`, `_wprintf_p`, `_wprintf_p_l`](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)\
[`_sprintf_p`, `_sprintf_p_l`, `_swprintf_p`, `_swprintf_p_l`](sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)\
[`vsprintf_s`, `_vsprintf_s_l`, `vswprintf_s`, `_vswprintf_s_l`](vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)\
[`_vfprintf_p`, `_vfprintf_p_l`, `_vfwprintf_p`, `_vfwprintf_p_l`](vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)\
[`_printf_p`, `_printf_p_l`, `_wprintf_p`, `_wprintf_p_l`](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)\
[printf_p Positional Parameters](../printf-p-positional-parameters.md)
