---
description: "Learn more about: _vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l"
title: "_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_vsprintf_p", "_vswprintf_p", "_vsprintf_p_l", "_vswprintf_p_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/_vsprintf_p", "CORECRT_WSTDIO/_vswprintf_p", "TCHAR/_vstprintf_p", "STDIO/_vsprintf_p_l", "CORECRT_WSTDIO/_vswprintf_p_l", "TCHAR/_vstprintf_p_l", "_vsprintf_p", "_vswprintf_p", "_vstprintf_p", "_vsprintf_p_l", "_vswprintf_p_l", "_vstprintf_p_l"]
helpviewer_keywords: ["vstprintf_p_l function", "_vsprintf_p_l function", "_vstprintf_p function", "vsprintf_p_l function", "_vswprintf_p function", "vswprintf_p function", "vsprintf_p function", "vswprintf_p_l function", "_vswprintf_p_l function", "vstprintf_p function", "formatted text [C++]", "_vsprintf_p function", "_vstprintf_p_l function"]
---
# `_vsprintf_p`, `_vsprintf_p_l`, `_vswprintf_p`, `_vswprintf_p_l`

Write formatted output using a pointer to a list of arguments, with the ability to specify the order in which the arguments are used.

## Syntax

```C
int _vsprintf_p(
   char *buffer,
   size_t sizeInBytes,
   const char *format,
   va_list argptr
);
int _vsprintf_p_l(
   char *buffer,
   size_t sizeInBytes,
   const char *format,
   _locale_t locale,
   va_list argptr
);
int _vswprintf_p(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);
int _vswprintf_p_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
```

### Parameters

*`buffer`*\
Storage location for output.

*`sizeInBytes`*\
Size of *`buffer`* in characters.

*`count`*\
Maximum number of characters to store, in the UNICODE version of this function.

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

## Return value

**`_vsprintf_p`** and **`_vswprintf_p`** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs.

## Remarks

Each of these functions takes a pointer to an argument list, and then formats and writes the given data to the memory pointed to by *`buffer`*.

These functions differ from the `vsprintf_s` and `vswprintf_s` only in that they support positional parameters. For more information, see [printf_p Positional Parameters](../printf-p-positional-parameters.md).

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

If the *`buffer`* or *`format`* parameters are `NULL` pointers, if count is zero, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vstprintf_p` | **`_vsprintf_p`** | **`_vsprintf_p`** | **`_vswprintf_p`** |
| `_vstprintf_p_l` | **`_vsprintf_p_l`** | **`_vsprintf_p_l`** | **`_vswprintf_p_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`_vsprintf_p`**, **`_vsprintf_p_l`** | \<stdio.h> and \<stdarg.h> | \<varargs.h>* |
| **`_vswprintf_p`**, **`_vswprintf_p_l`** | \<stdio.h> or \<wchar.h>, and \<stdarg.h> | \<varargs.h>* |

\* Required for UNIX V compatibility.

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt__vsprintf_p.c
// This program uses vsprintf_p to write to a buffer.
// The size of the buffer is determined by _vscprintf_p.

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void example( char * format, ... )
{
    va_list  args;
    int      len;
    char     *buffer = NULL;

    va_start( args, format );

    // _vscprintf doesn't count the
    // null terminating string so we add 1.
    len = _vscprintf_p( format, args ) + 1;

    // Allocate memory for our buffer
    buffer = (char*)malloc( len * sizeof(char) );
    if (buffer)
    {
        _vsprintf_p( buffer, len, format, args );
        puts( buffer );
        free( buffer );
    }
    va_end( args );
}

int main( void )
{
    // First example
    example( "%2$d %1$c %3$d", '<', 123, 456 );

    // Second example
    example( "%s", "This is a string" );
}
```

```Output
123 < 456
This is a string
```

## See also

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)
