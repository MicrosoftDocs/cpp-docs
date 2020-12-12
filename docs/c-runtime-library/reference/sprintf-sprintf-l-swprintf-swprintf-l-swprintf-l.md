---
description: "Learn more about: sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l"
title: "sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l"
ms.date: "06/23/2020"
api_name: ["__swprintf_l", "sprintf", "_sprintf_l", "_swprintf_l", "swprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_stprintf_l", "__swprintf_l", "sprintf_l", "swprintf", "_sprintf_l", "sprintf", "_stprintf", "stprintf_l"]
helpviewer_keywords: ["_swprintf_l function", "_stprintf function", "__swprintf_l function", "stprintf function", "sprintf function", "_sprintf_l function", "_stprintf_l function", "swprintf function", "strings [C++], writing to", "_CRT_NON_CONFORMING_SWPRINTFS", "swprintf_l function", "stprintf_l function", "sprintf_l function", "formatted text [C++]"]
ms.assetid: f6efe66f-3563-4c74-9455-5411ed939b81
---
# sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l

Write formatted data to a string. More secure versions of some of these functions are available; see [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md). The secure versions of **swprintf** and **_swprintf_l** take the size of the buffer as a parameter.

## Syntax

```C
int sprintf(
   char *buffer,
   const char *format [,
   argument] ...
);
int _sprintf_l(
   char *buffer,
   const char *format,
   locale_t locale [,
   argument] ...
);
int swprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format [,
   argument]...
);
int _swprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
int __swprintf_l(
   wchar_t *buffer,
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
template <size_t size>
int sprintf(
   char (&buffer)[size],
   const char *format [,
   argument] ...
); // C++ only
template <size_t size>
int _sprintf_l(
   char (&buffer)[size],
   const char *format,
   locale_t locale [,
   argument] ...
); // C++ only
```

### Parameters

*buffer*<br/>
Storage location for output

*count*<br/>
Maximum number of characters to store in the Unicode version of this function.

*format*<br/>
Format-control string

*argument*<br/>
Optional arguments

*locale*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

The number of characters written, or -1 if an error occurred. If *buffer* or *format* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**.

**sprintf** returns the number of bytes stored in *buffer*, not counting the terminating null character. **swprintf** returns the number of wide characters stored in *buffer*, not counting the terminating null wide character.

## Remarks

The **sprintf** function formats and stores a series of characters and values in *buffer*. Each *argument* (if any) is converted and output according to the corresponding format specification in *format*. The format consists of ordinary characters and has the same form and function as the *format* argument for [printf](printf-printf-l-wprintf-wprintf-l.md). A null character is appended after the last character written. If copying occurs between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> Using **sprintf**, there is no way to limit the number of characters written, which means that code using **sprintf** is susceptible to buffer overruns. Consider using the related function [_snprintf](snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md), which specifies a maximum number of characters to write to *buffer*, or use [_scprintf](scprintf-scprintf-l-scwprintf-scwprintf-l.md) to determine how large a buffer is required. Also, ensure that *format* is not a user-defined string.

**swprintf** is a wide-character version of **sprintf**; the pointer arguments to **swprintf** are wide-character strings. Detection of encoding errors in **swprintf** may differ from **sprintf**. **swprintf** and **fwprintf** behave identically except **swprintf** writes output to a string rather than to a destination of type **FILE**, and **swprintf** requires the *count* parameter to specify the maximum number of characters to write. The versions of these functions with the **_l** suffix are identical except they use the locale parameter passed in instead of the current thread locale.

**swprintf** conforms to the ISO C Standard, which requires the second parameter, *count*, of type **size_t**. To force the old nonstandard behavior, define **_CRT_NON_CONFORMING_SWPRINTFS**. In a future version, the old behavior may be removed, so code should be changed to use the new conformant behavior.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_stprintf**|**sprintf**|**sprintf**|**_swprintf**|
|**_stprintf_l**|**_sprintf_l**|**_sprintf_l**|**__swprintf_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**sprintf**, **_sprintf_l**|\<stdio.h>|
|**swprintf**, **_swprintf_l**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example: Use sprintf to format data

```C
// crt_sprintf.c
// compile with: /W3
// This program uses sprintf to format various
// data and place them in the string named buffer.

#include <stdio.h>

int main( void )
{
   char  buffer[200], s[] = "computer", c = 'l';
   int   i = 35, j;
   float fp = 1.7320534f;

   // Format and print various data:
   j  = sprintf( buffer,     "   String:    %s\n", s ); // C4996
   j += sprintf( buffer + j, "   Character: %c\n", c ); // C4996
   j += sprintf( buffer + j, "   Integer:   %d\n", i ); // C4996
   j += sprintf( buffer + j, "   Real:      %f\n", fp );// C4996
   // Note: sprintf is deprecated; consider using sprintf_s instead

   printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );
}
```

```Output
Output:
   String:    computer
   Character: l
   Integer:   35
   Real:      1.732053

character count = 79
```

## Example: Error code handling

```C
// crt_swprintf.c
// wide character example
// also demonstrates swprintf returning error code
#include <stdio.h>

int main( void )
{
   wchar_t buf[100];
   int len = swprintf( buf, 100, L"%s", L"Hello world" );
   printf( "wrote %d characters\n", len );
   len = swprintf( buf, 100, L"%s", L"Hello\xffff world" );
   // swprintf fails because string contains WEOF (\xffff)
   printf( "wrote %d characters\n", len );
}
```

```Output
wrote 11 characters
wrote -1 characters
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
