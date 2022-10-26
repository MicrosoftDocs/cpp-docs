---
description: "Learn more about: _scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l"
title: "_scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_scwprintf_p", "_scprintf_p_l", "_scwprintf_p_l", "_scprintf_p"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_scwprintf_p_l", "_sctprintf_p", "scprintf_p_l", "scprintf_p", "_sctprintf_p_l", "scwprintf_p", "_scprintf_p_l", "scwprintf_p_l", "_scprintf_p", "_scwprintf_p"]
helpviewer_keywords: ["sctprintf_p_l function", "_scwprintf_p_l function", "scprintf_p_l function", "_scprintf_p function", "_scprintf_p_l function", "scprintf_p function", "sctprintf_p function", "_scwprintf_p function", "_sctprintf_p function", "scwprintf_p function", "scwprintf_p_l function", "_sctprintf_p_l function"]
---
# `_scprintf_p`, `_scprintf_p_l`, `_scwprintf_p`, `_scwprintf_p_l`

Returns the number of characters in the formatted string, with the ability to specify the order in which parameters are used in the format string.

## Syntax

```C
int _scprintf_p(
   const char *format [,
   argument] ...
);
int _scprintf_p_l(
   const char *format,
   _locale_t locale [,
   argument] ...
);
int _scwprintf_p (
   const wchar_t *format [,
   argument] ...
);
int _scwprintf_p _l(
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
);
```

### Parameters

*`format`*\
Format-control string.

*`argument`*\
Optional arguments.

*`locale`*\
The locale to use.

## Return value

Returns the number of characters that would be generated if the string were to be printed or sent to a file or buffer using the specified formatting codes. The value returned doesn't include the terminating null character. **`_scwprintf_p`** performs the same function for wide characters.

The difference between **`_scprintf_p`** and `_scprintf` is that **`_scprintf_p`** supports positional parameters, which allows specifying the order in which the arguments are used in the format string. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

If *`format`* is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

For information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each *`argument`* (if any) is converted according to the corresponding format specification in *`format`*. The format consists of ordinary characters and has the same form and function as the *`format`* argument for [`printf`](printf-printf-l-wprintf-wprintf-l.md).

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_sctprintf_p` | **`_scprintf_p`** | **`_scprintf_p`** | **`_scwprintf_p`** |
| `_sctprintf_p_l` | **`_scprintf_p_l`** | **`_scprintf_p_l`** | **`_scwprintf_p_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_scprintf_p`**, **`_scprintf_p_l`** | \<stdio.h> |
| **`_scwprintf_p`**, **`_scwprintf_p_l`** | \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`_scprintf`, `_scprintf_l`, `_scwprintf`, `_scwprintf_l`](scprintf-scprintf-l-scwprintf-scwprintf-l.md)\
[`_printf_p`, `_printf_p_l`, `_wprintf_p`, `_wprintf_p_l`](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)
