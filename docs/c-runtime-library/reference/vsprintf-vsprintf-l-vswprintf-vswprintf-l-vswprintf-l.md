---
title: "vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, __vswprintf_l"
description: "Learn more about: vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, __vswprintf_l"
ms.date: 3/9/2021
api_name: ["_vswprintf_l", "_vsprintf_l", "vsprintf", "vswprintf", "__vswprintf_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_WSTDIO/vswprintf", "TCHAR/_vstprintf", "STDIO/vsprintf", "CORECRT_WSTDIO/__vswprintf_l", "STDIO/_vsprintf_l", "CORECRT_WSTDIO/_vswprintf_l", "vswprintf", "_vstprintf", "vsprintf", "__vswprintf_l", "_vsprintf_l", "_vswprintf_l"]
helpviewer_keywords: ["__vswprintf_l function", "_vstprintf_l function", "formatted text", "vstprintf_l function", "_vswprintf_l function", "vsprintf_l function", "buffers, avoiding overruns", "buffer overruns", "vswprintf_l function", "buffers, buffer overruns", "vstprintf function", "_vsprintf_l function", "vswprintf function", "vsprintf function", "_vstprintf function"]
---
# `vsprintf`, `_vsprintf_l`, `vswprintf`, `_vswprintf_l`, `__vswprintf_l`

Write formatted output using a pointer to a list of arguments. More secure versions of these functions are available; see [`vsprintf_s`, `_vsprintf_s_l`, `vswprintf_s`, `_vswprintf_s_l`](vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md).

## Syntax

```C
int vsprintf(
   char *buffer,
   const char *format,
   va_list argptr
);
int _vsprintf_l(
   char *buffer,
   const char *format,
   _locale_t locale,
   va_list argptr
);
int vswprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);
int _vswprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
int __vswprintf_l(
   wchar_t *buffer,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
template <size_t size>
int vsprintf(
   char (&buffer)[size],
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsprintf_l(
   char (&buffer)[size],
   const char *format,
   _locale_t locale,
   va_list argptr
); // C++ only
template <size_t size>
int vswprintf(
   wchar_t (&buffer)[size],
   const wchar_t *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vswprintf_l(
   wchar_t (&buffer)[size],
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for output.

*`count`*\
Maximum number of characters to store, in the wide string versions of this function.

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

## Return value

**`vsprintf`** and **`vswprintf`** return the number of characters written, not including the terminating `NULL` character, or a negative value if an output error occurs. If *`buffer`* or *`format`* is a `NULL` pointer, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

If *`buffer`* is a `NULL` pointer and *`count`* is zero, **`vswprintf`** and **`_vswprintf_l`** return the number of characters that would have been written not including the terminating NULL.

If *`buffer`* is valid and *`count`* is zero, **`vswprintf`** and **`_vswprintf_l`** return -1. The contents of *`buffer`* are unchanged.

For information on these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions takes a pointer to an argument list, and then formats and writes the given data to the memory pointed to by *`buffer`*.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Using **`vsprintf`**, there is no way to limit the number of characters written, which means that code using this function is susceptible to buffer overruns. Use [`_vsnprintf`](vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) instead, or call [`_vscprintf`](vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md) to determine how large a buffer is needed. Also, ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with [`legacy_stdio_float_rounding.obj`](../link-options.md).

**`vswprintf`** conforms to the ISO C Standard, which requires the second parameter, *`count`*, of type **`size_t`**. To force the old nonstandard behavior, define `_CRT_NON_CONFORMING_SWPRINTFS`. The old behavior may not be in a future version, so code should be changed to use the new conformant behavior.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vstprintf` | **`vsprintf`** | **`vsprintf`** | **`vswprintf`** |
| `_vstprintf_l` | **`_vsprintf_l`** | **`_vsprintf_l`** | **`_vswprintf_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`vsprintf`**, **`_vsprintf_l`** | `<stdio.h>` and `<stdarg.h>` | `<varargs.h>`* |
| **`vswprintf`**, **`_vswprintf_l`** | `<stdio.h>` or `<wchar.h>`, and `<stdarg.h>` | `<varargs.h>`* |

\* Required for UNIX V compatibility.

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_vsprintf.c
// compile with: cl /W4 crt_vsprintf.c
// This program uses vsprintf to write to a buffer.
// The size of the buffer is determined by _vscprintf.

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void test( char const * const format, ... )
{
    va_list args;
    int     len;
    char    *buffer;

    // retrieve the variable arguments
    va_start( args, format );

    len = _vscprintf( format, args ) // _vscprintf doesn't count
                                + 1; // terminating '\0'

    buffer = (char*)malloc( len * sizeof(char) );
    if ( 0 != buffer )
    {
        vsprintf( buffer, format, args ); // C4996
        // Note: vsprintf is deprecated; consider using vsprintf_s instead
        puts( buffer );

        free( buffer );
    }
    va_end( args );
}

int main( void )
{
   test( "%d %c %d", 123, '<', 456 );
   test( "%s", "This is a string" );
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
