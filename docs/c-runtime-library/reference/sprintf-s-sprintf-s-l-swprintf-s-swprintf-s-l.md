---
description: "Learn more about: sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l"
title: "sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l"
ms.date: "11/04/2016"
api_name: ["_swprintf_s_l", "_sprintf_s_l", "swprintf_s", "sprintf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["swprintf_s", "sprintf_s", "stdio/sprintf_s", "stdio/swprintf_s", "stdio/_sprintf_s_l", "stdio/_swprintf_s_l", "_sprintf_s_l", "_swprintf_s_l"]
helpviewer_keywords: ["stprintf_s function", "stprintf_s_l function", "swprintf_s_l function", "sprintf_s function", "swprintf_s function", "_swprintf_s_l function", "sprintf_s_l function", "_stprintf_s_l function", "_stprintf_s function", "_sprintf_s_l function", "formatted text [C++]"]
ms.assetid: 424f0a29-22ef-40e8-b565-969f5f57782f
---
# sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l

Write formatted data to a string. These are versions of [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int sprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   ...
);
int _sprintf_s_l(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   locale_t locale,
   ...
);
int swprintf_s(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   ...
);
int _swprintf_s_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   locale_t locale,
   ...
);
template <size_t size>
int sprintf_s(
   char (&buffer)[size],
   const char *format,
   ...
); // C++ only
template <size_t size>
int swprintf_s(
   wchar_t (&buffer)[size],
   const wchar_t *format,
   ...
); // C++ only
```

### Parameters

*buffer*<br/>
Storage location for output

*sizeOfBuffer*<br/>
Maximum number of characters to store.

*format*<br/>
Format-control string

*...*<br/>
Optional arguments to be formatted

*locale*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

The number of characters written, or -1 if an error occurred. If *buffer* or *format* is a null pointer, **sprintf_s** and **swprintf_s** return -1 and set **errno** to **EINVAL**.

**sprintf_s** returns the number of bytes stored in *buffer*, not counting the terminating null character. **swprintf_s** returns the number of wide characters stored in *buffer*, not counting the terminating null wide character.

## Remarks

The **sprintf_s** function formats and stores a series of characters and values in *buffer*. Each *argument* (if any) is converted and output according to the corresponding format specification in *format*. The format consists of ordinary characters and has the same form and function as the *format* argument for [printf](printf-printf-l-wprintf-wprintf-l.md). A null character is appended after the last character written. If copying occurs between strings that overlap, the behavior is undefined.

One main difference between **sprintf_s** and [sprintf](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) is that **sprintf_s** checks the format string for valid formatting characters, whereas [sprintf](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) only checks if the format string or buffer are **NULL** pointers. If either check fails, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets **errno** to **EINVAL**.

The other main difference between **sprintf_s** and [sprintf](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) is that **sprintf_s** takes a length parameter specifying the size of the output buffer in characters. If the buffer is too small for the formatted text, including the terminating null, then the buffer is set to an empty string by placing a null character at *buffer*[0], and the invalid parameter handler is invoked. Unlike **_snprintf**, **sprintf_s** guarantees that the buffer will be null-terminated unless the buffer size is zero.

**swprintf_s** is a wide-character version of **sprintf_s**; the pointer arguments to **swprintf_s** are wide-character strings. Detection of encoding errors in **swprintf_s** may differ from that in **sprintf_s**. The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, use of these functions is simplified by template overloads; the overloads can infer buffer length automatically, which eliminates the need to specify a size argument, and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

There are versions of **sprintf_s** that offer additional control over what happens if the buffer is too small. For more information, see [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_stprintf_s**|**sprintf_s**|**sprintf_s**|**swprintf_s**|
|**_stprintf_s_l**|**_sprintf_s_l**|**_sprintf_s_l**|**_swprintf_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**sprintf_s**, **_sprintf_s_l**|C: \<stdio.h><br /><br /> C++: \<cstdio> or \<stdio.h>|
|**swprintf_s**, **_swprintf_s_l**|C: \<stdio.h> or \<wchar.h><br /><br /> C++: \<cstdio>, \<cwchar>, \<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example: Use sprintf_s to format data

```C
// crt_sprintf_s.c
// This program uses sprintf_s to format various
// data and place them in the string named buffer.
//

#include <stdio.h>

int main( void )
{
   char  buffer[200], s[] = "computer", c = 'l';
   int   i = 35, j;
   float fp = 1.7320534f;

   // Format and print various data:
   j  = sprintf_s( buffer, 200,     "   String:    %s\n", s );
   j += sprintf_s( buffer + j, 200 - j, "   Character: %c\n", c );
   j += sprintf_s( buffer + j, 200 - j, "   Integer:   %d\n", i );
   j += sprintf_s( buffer + j, 200 - j, "   Real:      %f\n", fp );

   printf_s( "Output:\n%s\ncharacter count = %d\n", buffer, j );
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
// crt_swprintf_s.c
// wide character example
// also demonstrates swprintf_s returning error code
#include <stdio.h>

int main( void )
{
   wchar_t buf[100];
   int len = swprintf_s( buf, 100, L"%s", L"Hello world" );
   printf( "wrote %d characters\n", len );
   len = swprintf_s( buf, 100, L"%s", L"Hello\xffff world" );
   // swprintf_s fails because string contains WEOF (\xffff)
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
[sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
