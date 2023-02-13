---
description: "Learn more about: _vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l"
title: "_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_vfprintf_p", "_vfwprintf_p", "_vfprintf_p_l", "_vfwprintf_p_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/_vfprintf_p", "STDIO/_vfprintf_p_l", "CORECRT_WSTDIO/_vfwprintf_p", "CORECRT_WSTDIO/_vfwprintf_p_l", "TCHAR/_vftprintf_p", "TCHAR/_vftprintf_p_l", "_vfprintf_p", "_vfprintf_p_l", "_vfwprintf_p", "_vfwprintf_p_l", "_vftprintf_p", "_vftprintf_p_l"]
helpviewer_keywords: ["vfprintf_p_l function", "_vftprintf_p_l function", "_vfprintf_p function", "vfprintf_p function", "vftprintf_p_l function", "_vfprintf_p_l function", "_vftprintf_p function", "_vfwprintf_p_l function", "vfwprintf_p_l function", "_vfwprintf_p function", "vftprintf_p function", "formatted text [C++]", "vfwprintf_p function"]
---
# `_vfprintf_p`, `_vfprintf_p_l`, `_vfwprintf_p`, `_vfwprintf_p_l`

Write formatted output using a pointer to a list of arguments, with the ability to specify the order that arguments are used in the format string.

## Syntax

```C
int _vfprintf_p(
   FILE *stream,
   const char *format,
   va_list argptr
);
int _vfprintf_p_l(
   FILE *stream,
   const char *format,
   _locale_t locale,
   va_list argptr
);
int _vfwprintf_p(
   FILE *stream,
   const wchar_t *format,
   va_list argptr
);
int _vfwprintf_p_l(
   FILE *stream,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure.

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

**`_vfprintf_p`** and **`_vfwprintf_p`** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs.

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to *`stream`*. These functions differ from the `_vfprint_s` and `_vfwprint_s` versions only in that they support positional parameters. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

**`_vfwprintf_p`** is the wide-character version of **`_vprintf_p`**; the two functions behave identically if the stream is opened in ANSI mode. **`_vprintf_p`** doesn't currently support output into a UNICODE stream.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

If either *`stream`* or *`format`* is a null pointer, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vftprintf_p` | **`_vfprintf_p`** | **`_vfprintf_p`** | **`_vfwprintf_p`** |
| `_vftprintf_p_l` | **`_vfprintf_p_l`** | **`_vfprintf_p_l`** | **`_vfwprintf_p_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`_vfprintf_p`**, **`_vfprintf_p_l`** | \<stdio.h> and \<stdarg.h> | \<varargs.h>* |
| **`_vfwprintf_p`**, **`_vfwprintf_p_l`** | \<stdio.h> or \<wchar.h>, and \<stdarg.h> | \<varargs.h>* |

\* Required for UNIX V compatibility.

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)\
[printf_p Positional Parameters](../printf-p-positional-parameters.md)\
[`_fprintf_p`, `_fprintf_p_l`, `_fwprintf_p`, `_fwprintf_p_l`](fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)\
[`_vsprintf_p`, `_vsprintf_p_l`, `_vswprintf_p`, `_vswprintf_p_l`](vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)\
[`_sprintf_p`, `_sprintf_p_l`, `_swprintf_p`, `_swprintf_p_l`](sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)
