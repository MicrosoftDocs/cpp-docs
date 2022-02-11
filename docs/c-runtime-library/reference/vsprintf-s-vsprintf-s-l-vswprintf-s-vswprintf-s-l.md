---
description: "Learn more about: vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l"
title: "vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l"
ms.date: "3/9/2021"
api_name: ["_vswprintf_s_l", "vsprintf_s", "vswprintf_s", "_vsprintf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vswprintf_s", "vsprintf_s", "_vstprintf_s"]
helpviewer_keywords: ["_vstprintf_s_l function", "vsprintf_s_l function", "_vstprintf_s function", "vswprintf_s function", "vstprintf_s function", "vstprintf_s_l function", "vswprintf_s_l function", "vsprintf_s function", "_vsprintf_s_l function", "formatted text [C++]", "_vswprintf_s_l function"]
---
# `vsprintf_s`, `_vsprintf_s_l`, `vswprintf_s`, `_vswprintf_s_l`

Write formatted output using a pointer to a list of arguments. These functions are versions of [`vsprintf`, `_vsprintf_l`, `vswprintf`, `_vswprintf_l`, \`__vswprintf_l`](vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int vsprintf_s(
   char *buffer,
   size_t numberOfElements,
   const char *format,
   va_list argptr
);
int _vsprintf_s_l(
   char *buffer,
   size_t numberOfElements,
   const char *format,
   _locale_t locale,
   va_list argptr
);
int vswprintf_s(
   wchar_t *buffer,
   size_t numberOfElements,
   const wchar_t *format,
   va_list argptr
);
int _vswprintf_s_l(
   wchar_t *buffer,
   size_t numberOfElements,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
template <size_t size>
int vsprintf_s(
   char (&buffer)[size],
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int vswprintf_s(
   wchar_t (&buffer)[size],
   const wchar_t *format,
   va_list argptr
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for output.

*`numberOfElements`*\
Size of *`buffer`* in characters.

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

## Return Value

**`vsprintf_s`** and **`vswprintf_s`** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs. If *`buffer`* or *`format`* is a null pointer, if *`numberOfElements`* is zero, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **`errno`** to **`EINVAL`**.

For information on these and other error codes, see [`_doserrno`, `errno`, `_sys_errlist`, and `_sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions takes a pointer to an argument list, and then formats and writes the given data to the memory pointed to by *`buffer`*.

**`vswprintf_s`** conforms to the ISO C Standard for **`vswprintf`**, which requires the second parameter, *`count`*, of type **`size_t`**.

These functions differ from the non-secure versions only in that the secure versions support positional parameters. For more information, see [`printf_p` Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md).

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, using these functions is simplified by template overloads. The overloads can infer buffer length automatically, eliminating the need to specify a size argument. And, they can automatically replace non-secure functions with their secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-Text Routine Mappings

|`TCHAR.H` routine|`_UNICODE & _MBCS` not defined|`_MBCS` defined|`_UNICODE` defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_vstprintf_s`**|**`vsprintf_s`**|**`vsprintf_s`**|**`vswprintf_s`**|
|**`_vstprintf_s_l`**|**`_vsprintf_s_l`**|**`_vsprintf_s_l`**|**`_vswprintf_s_l`**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**`vsprintf_s`**, **`_vsprintf_s_l`**|`<stdio.h>` and `<stdarg.h>`|`<varargs.h>*`|
|**`vswprintf_s`**, **`_vswprintf_s_l`**|`<stdio.h>` or `<wchar.h>`, and `<stdarg.h>`|`<varargs.h>*`|

\* Required for UNIX V compatibility.

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_vsprintf_s.c
// Compile with: cl /W4 crt_vsprintf_s.c
// This program uses vsprintf_s to write to a buffer.
// The size of the buffer is determined by _vscprintf.

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void test( char const * const format, ... )
{
   va_list args;
   int len;
   char * buffer;

   va_start( args, format );
   len = _vscprintf( format, args ) // _vscprintf doesn't count
                               + 1; // terminating '\0'
   buffer = (char *) malloc( len * sizeof(char) );
   if ( NULL != buffer )
   {
      vsprintf_s( buffer, len, format, args );
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

[Stream I/O](../../c-runtime-library/stream-i-o.md)\
[`vprintf` Functions](../../c-runtime-library/vprintf-functions.md)\
[Format Specification Syntax: `printf` and `wprintf` Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `\__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)
