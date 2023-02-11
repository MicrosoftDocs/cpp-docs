---
description: "Learn more about: _vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l"
title: "_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l"
ms.date: "3/9/2021"
api_name: ["_vscprintf", "_vscprintf_l", "_vscwprintf_l", "_vscwprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/_vscprintf", "STDIO/_vscprintf_l", "CORECRT_WSTDIO/_vscwprintf", "CORECRT_WSTDIO/_vscwprintf_l", "TCHAR/_vsctprintf", "TCHAR/_vsctprintf_l", "_vscprintf", "_vscprintf_l", "_vscwprintf", "_vscwprintf_l", "_vsctprintf", "_vsctprintf_l"]
helpviewer_keywords: ["vsctprintf function", "_vscprintf_l function", "_vsctprintf_l function", "_vsctprintf function", "_vscwprintf_l function", "vscwprintf_l function", "_vscprintf function", "_vscwprintf function", "vscwprintf function", "vsctprintf_l function", "formatted text [C++]", "vscprintf function", "vscprintf_l function"]
---
# `_vscprintf`, `_vscprintf_l`, `_vscwprintf`, `_vscwprintf_l`

Returns the number of characters in the formatted string using a pointer to a list of arguments.

## Syntax

```C
int _vscprintf(
   const char *format,
   va_list argptr
);
int _vscprintf_l(
   const char *format,
   _locale_t locale,
   va_list argptr
);
int _vscwprintf(
   const wchar_t *format,
   va_list argptr
);
int _vscwprintf_l(
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

**`_vscprintf`** returns the number of characters that would be generated if the string pointed to by the list of arguments was printed or sent to a file or buffer using the specified formatting codes. The value returned doesn't include the terminating null character. **`_vscwprintf`** performs the same function for wide characters.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

If *`format`* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

## Remarks

Each *`argument`* (if any) is converted according to the corresponding format specification in *`format`*. The format consists of ordinary characters and has the same form and function as the *`format`* argument for [`printf`](printf-printf-l-wprintf-wprintf-l.md).

> [!IMPORTANT]
> Ensure that if *`format`* is a user-defined string, it is null terminated and has the correct number and type of parameters. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with [`legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vsctprintf` | **`_vscprintf`** | **`_vscprintf`** | **`_vscwprintf`** |
| `_vsctprintf_l` | **`_vscprintf_l`** | **`_vscprintf_l`** | **`_vscwprintf_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_vscprintf`**, **`_vscprintf_l`** | \<stdio.h> |
| **`_vscwprintf`**, **`_vscwprintf_l`** | \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`vsprintf`](vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vprintf` functions](../vprintf-functions.md)
