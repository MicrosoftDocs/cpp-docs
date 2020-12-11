---
description: "Learn more about: _vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l"
title: "_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l"
ms.date: "11/04/2016"
api_name: ["_vsprintf_p", "_vswprintf_p", "_vsprintf_p_l", "_vswprintf_p_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vsprintf_p", "_vswprintf_p", "_vstprintf_p", "vswprintf_p", "_vsprintf_p", "vstprintf_p"]
helpviewer_keywords: ["vstprintf_p_l function", "_vsprintf_p_l function", "_vstprintf_p function", "vsprintf_p_l function", "_vswprintf_p function", "vswprintf_p function", "vsprintf_p function", "vswprintf_p_l function", "_vswprintf_p_l function", "vstprintf_p function", "formatted text [C++]", "_vsprintf_p function", "_vstprintf_p_l function"]
ms.assetid: 00821c0d-9fee-4d8a-836c-0669cfb11317
---
# _vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l

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
   locale_t locale,
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
   locale_t locale,
   va_list argptr
);
```

### Parameters

*buffer*<br/>
Storage location for output.

*sizeInBytes*<br/>
Size of *buffer* in characters.

*count*<br/>
Maximum number of characters to store, in the UNICODE version of this function.

*format*<br/>
Format specification.

*argptr*<br/>
Pointer to list of arguments.

*locale*<br/>
The locale to use.

## Return Value

**_vsprintf_p** and **_vswprintf_p** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs.

## Remarks

Each of these functions takes a pointer to an argument list, and then formats and writes the given data to the memory pointed to by *buffer*.

These functions differ from the **vsprintf_s** and **vswprintf_s** only in that they support positional parameters. For more information, see [printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md).

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

If the *buffer* or *format* parameters are **NULL** pointers, if count is zero, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vstprintf_p**|**_vsprintf_p**|**_vsprintf_p**|**_vswprintf_p**|
|**_vstprintf_p_l**|**_vsprintf_p_l**|**_vsprintf_p_l**|**_vswprintf_p_l**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**_vsprintf_p**, **_vsprintf_p_l**|\<stdio.h> and \<stdarg.h>|\<varargs.h>*|
|**_vswprintf_p**, **_vswprintf_p_l**|\<stdio.h> or \<wchar.h>, and \<stdarg.h>|\<varargs.h>*|

\* Required for UNIX V compatibility.

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
[Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
