---
description: "Learn more about: _vcprintf, _vcprintf_l, _vcwprintf, _vcwprintf_l"
title: "_vcprintf, _vcprintf_l, _vcwprintf, _vcwprintf_l"
ms.date: "3/9/2021"
api_name: ["_vcwprintf", "_vcprintf_l", "_vcwprintf_l", "_vcprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CONIO/_vcprintf", "CONIO/_vcprintf_l", "CORECRT_WCONIO/_vcwprintf", "CORECRT_WCONIO/_vcwprintf_l", "TCHAR/_vtcprintf", "TCHAR/_vtcprintf_l", "_vcprintf", "_vcprintf_l", "_vcwprintf", "_vcwprintf_l", "_vtcprintf", "_vtcprintf_l"]
helpviewer_keywords: ["vcwprintf function", "_vcwprintf_l function", "_vcprintf function", "_vcprintf_l function", "vtcprintf_l function", "vcprintf function", "vcprintf_l function", "_vtcprintf function", "_vcwprintf function", "_vtcprintf_l function", "vcwprintf_l function", "vtcprintf function", "formatted text [C++]"]
---
# `_vcprintf`, `_vcprintf_l`, `_vcwprintf`, `_vcwprintf_l`

Writes formatted output to the console by using a pointer to a list of arguments. More secure versions of these functions are available, see [`_vcprintf_s`, `_vcprintf_s_l`, `_vcwprintf_s`, `_vcwprintf_s_l`](vcprintf-s-vcprintf-s-l-vcwprintf-s-vcwprintf-s-l.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _vcprintf(
   const char* format,
   va_list argptr
);
int _vcprintf_l(
   const char* format,
   _locale_t locale,
   va_list argptr
);
int _vcwprintf(
   const wchar_t* format,
   va_list argptr
);
int _vcwprintf_l(
   const wchar_t* format,
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

The number of characters written, or a negative value if an output error occurs. If *`format`* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL`, and -1 is returned.

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to the console. **`_vcwprintf`** is the wide-character version of **`_vcprintf`**. It takes a wide-character string as an argument.

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vtcprintf` | **`_vcprintf`** | **`_vcprintf`** | **`_vcwprintf`** |
| `_vtcprintf_l` | **`_vcprintf_l`** | **`_vcprintf_l`** | **`_vcwprintf_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`_vcprintf`**, **`_vcprintf_l`** | \<conio.h> and \<stdarg.h> | \<varargs.h>* |
| **`_vcwprintf`**, **`_vcwprintf_l`** | \<conio.h> or \<wchar.h>, and \<stdarg.h> | \<varargs.h>* |

\* Required for UNIX V compatibility.

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```cpp
// crt_vcprintf.cpp
// compile with: /c
#include <conio.h>
#include <stdarg.h>

// An error formatting function used to print to the console.
int eprintf(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    int result = _vcprintf(format, args);
    va_end(args);
    return result;
}

int main()
{
    eprintf("(%d:%d): Error %s%d : %s\n", 10, 23, "C", 2111,
           "<some error text>");
    eprintf("    (Related to symbol '%s' defined on line %d).\n",
            "<symbol>", 5 );
}
```

```Output
(10,23): Error C2111 : <some error text>
    (Related to symbol '<symbol>' defined on line 5).
```

## See also

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](cprintf-cprintf-l-cwprintf-cwprintf-l.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)
