---
description: "Learn more about: _vscprintf_p, _vscprintf_p_l, _vscwprintf_p, _vscwprintf_p_l"
title: "_vscprintf_p, _vscprintf_p_l, _vscwprintf_p, _vscwprintf_p_l"
ms.date: "10/21/2021"
api_name: ["_vscprintf_p_l", "_vscprintf_p", "_vscwprintf_p_l", "_vscwprintf_p"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/_vscprintf_p", "STDIO/_vscprintf_p_l", "CORECRT_WSTDIO/_vscwprintf_p", "CORECRT_WSTDIO/_vscwprintf_p_l", "TCHAR/_vsctprintf_p", "TCHAR/_vsctprintf_p_l", "_vscprintf_p", "_vscprintf_p_l", "_vscwprintf_p", "_vscwprintf_p_l", "_vsctprintf_p", "_vsctprintf_p_l"]
helpviewer_keywords: ["vscprintf_p function", "_vsctprintf_p_l function", "vscwprintf_p_l function", "_vscwprintf_p_l function", "_vscprintf_p function", "vsctprintf_p function", "_vscprintf_p_l function", "_vscwprintf_p function", "vscwprintf_p function", "vsctprintf_p_l function", "_vsctprintf_p function", "vscprintf_p_l function"]
---
# `_vscprintf_p`, `_vscprintf_p_l`, `_vscwprintf_p`, `_vscwprintf_p_l`

Returns the number of characters in the formatted string using a pointer to a list of arguments, with the ability to specify the order in which the arguments are used.

## Syntax

```C
int _vscprintf_p(
   const char *format,
   va_list argptr
);
int _vscprintf_p_l(
   const char *format,
   _locale_t locale,
   va_list argptr
);
int _vscwprintf_p (
   const wchar_t *format,
   va_list argptr
);
int _vscwprintf_p_l(
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
```

### Parameters

*`format`*\
Format-control string.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

**`_vscprintf_p`** returns the number of characters that would be generated if the string pointed to by the list of arguments was printed or sent to a file or buffer using the specified formatting codes. The value returned doesn't include the terminating null character. **`_vscwprintf_p`** performs the same function for wide characters.

## Remarks

These functions differ from **`_vscprintf`** and **`_vscwprintf`** only in that they support the ability to specify the order in which the arguments are used. For more information, see [`printf_p` Positional Parameters](../printf-p-positional-parameters.md).

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

If *`format`* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

> [!IMPORTANT]
> Ensure that if *`format`* is a user-defined string, it is null terminated and has the correct number and type of parameters. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_vsctprintf_p`** | **`_vscprintf_p`** | **`_vscprintf_p`** | **`_vscwprintf_p`** |
| **`_vsctprintf_p_l`** | **`_vscprintf_p_l`** | **`_vscprintf_p_l`** | **`_vscwprintf_p_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_vscprintf_p`**, **`_vscprintf_p_l`** | `<stdio.h>` |
| **`_vscwprintf_p`**, **`_vscwprintf_p_l`** | `<stdio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`vsprintf`](vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md).

## See also

[`vprintf` functions](../vprintf-functions.md)\
[`_scprintf_p`, `_scprintf_p_l`, `_scwprintf_p`, `_scwprintf_p_l`](scprintf-p-scprintf-p-l-scwprintf-p-scwprintf-p-l.md)\
[`_vscprintf`, `_vscprintf_l`, `_vscwprintf`, `_vscwprintf_l`](vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)\
