---
description: "Learn more about: vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l"
title: "vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l"
ms.date: "3/9/2021"
api_name: ["_vfprintf_l", "vfprintf", "vfwprintf", "_vfwprintf_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/vfprintf", "STDIO/_vfprintf_l", "CORECRT_WSTDIO/vfwprintf", "CORECRT_WSTDIO/_vfwprintf_l", "TCHAR/_vftprintf", "TCHAR/_vftprintf_l", "vfprintf", "_vfprintf_l", "vfwprintf", "_vfwprintf_l", "_vftprintf", "_vftprintf_l"]
helpviewer_keywords: ["_vfwprintf_l function", "_vftprintf function", "vfprintf function", "_vftprintf_l function", "vfprintf_l function", "vftprintf_l function", "vfwprintf_l function", "vftprintf function", "vfwprintf function", "_vfprintf_l function", "formatted text [C++]"]
---
# `vfprintf`, `_vfprintf_l`, `vfwprintf`, `_vfwprintf_l`

Write formatted output using a pointer to a list of arguments. More secure versions of these functions exist; see [`vfprintf_s`, `_vfprintf_s_l`, `vfwprintf_s`, `_vfwprintf_s_l`](vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md).

## Syntax

```C
int vfprintf(
   FILE *stream,
   const char *format,
   va_list argptr
);
int _vfprintf_l(
   FILE *stream,
   const char *format,
   _locale_t locale,
   va_list argptr
);
int vfwprintf(
   FILE *stream,
   const wchar_t *format,
   va_list argptr
);
int _vfwprintf_l(
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

**`vfprintf`** and **`vfwprintf`** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs. If either *`stream`* or *`format`* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

For information on these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to *`stream`*.

**`vfwprintf`** is the wide-character version of **`vfprintf`**; the two functions behave identically if the stream is opened in ANSI mode. **`vfprintf`** doesn't currently support output into a UNICODE stream.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vftprintf` | **`vfprintf`** | **`vfprintf`** | **`vfwprintf`** |
| `_vftprintf_l` | **`_vfprintf_l`** | **`_vfprintf_l`** | **`_vfwprintf_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`vfprintf`**, **`_vfprintf_l`** | \<stdio.h> and \<stdarg.h> | \<varargs.h>* |
| **`vfwprintf`**, **`_vfwprintf_l`** | \<stdio.h> or \<wchar.h>, and \<stdarg.h> | \<varargs.h>* |

\* Required for UNIX V compatibility.

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)
