---
description: "Learn more about: sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l"
title: "sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l"
ms.date: "11/04/2016"
api_name: ["_sscanf_s_l", "sscanf_s", "_swscanf_s_l", "swscanf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_stscanf_s", "sscanf_s", "swscanf_s", "_swscanf_s_l", "_stscanf_s_l", "_sscanf_s_l"]
helpviewer_keywords: ["stscanf_s_l function", "stscanf_s function", "swscanf_s function", "swscanf_s_l function", "sscanf_s_l function", "_stscanf_s_l function", "strings [C++], reading data from", "sscanf_s function", "_swscanf_s_l function", "_stscanf_s function", "reading data, strings", "strings [C++], reading", "_sscanf_s_l function"]
ms.assetid: 956e65c8-00a5-43e8-a2f2-0f547ac9e56c
---
# sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l

Reads formatted data from a string. These versions of [sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int sscanf_s(
   const char *buffer,
   const char *format [,
   argument ] ...
);
int _sscanf_s_l(
   const char *buffer,
   const char *format,
   locale_t locale [,
   argument ] ...
);
int swscanf_s(
   const wchar_t *buffer,
   const wchar_t *format [,
   argument ] ...
);
int _swscanf_s_l(
   const wchar_t *buffer,
   const wchar_t *format,
   locale_t locale [,
   argument ] ...
);
```

### Parameters

*buffer*<br/>
Stored data

*format*<br/>
Format-control string. For more information, see [Format Specification Fields: scanf and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

*argument*<br/>
Optional arguments

*locale*<br/>
The locale to use

## Return Value

Each of these functions returns the number of fields that are successfully converted and assigned; the return value does not include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned. The return value is **EOF** for an error or if the end of the string is reached before the first conversion.

If *buffer* or *format* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**

For information about these and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **sscanf_s** function reads data from *buffer* into the location that's given by each *argument*. The arguments after the format string specify pointers to variables that have a type that corresponds to a type specifier in *format*. Unlike the less secure version [sscanf](sscanf-sscanf-l-swscanf-swscanf-l.md), a buffer size parameter is required when you use the type field characters **c**, **C**, **s**, **S**, or string control sets that are enclosed in **[]**. The buffer size in characters must be supplied as an additional parameter immediately after each buffer parameter that requires it. For example, if you are reading into a string, the buffer size for that string is passed as follows:

```C
wchar_t ws[10];
swscanf_s(in_str, L"%9s", ws, (unsigned)_countof(ws)); // buffer size is 10, width specification is 9
```

The buffer size includes the terminating null. A width specification field may be used to ensure that the token that's read in will fit into the buffer. If no width specification field is used, and the token read in is too big to fit in the buffer, nothing is written to that buffer.

In the case of characters, a single character may be read as follows:

```C
wchar_t wc;
swscanf_s(in_str, L"%c", &wc, 1);
```

This example reads a single character from the input string and then stores it in a wide-character buffer. When you read multiple characters for non-null terminated strings, unsigned integers are used as the width specification and the buffer size.

```C
char c[4];
sscanf_s(input, "%4c", &c, (unsigned)_countof(c)); // not null terminated
```

For more information, see [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) and [scanf Type Field Characters](../../c-runtime-library/scanf-type-field-characters.md).

> [!NOTE]
> The size parameter is of type **`unsigned`**, not **size_t**. When compiling for 64-bit targets, use a static cast to convert **_countof** or **`sizeof`** results to the correct size.

The *format* argument controls the interpretation of the input fields and has the same form and function as the *format* argument for the **scanf_s** function. If copying occurs between strings that overlap, the behavior is undefined.

**swscanf_s** is a wide-character version of **sscanf_s**; the arguments to **swscanf_s** are wide-character strings. **sscanf_s** does not handle multibyte hexadecimal characters. **swscanf_s** does not handle Unicode full-width hexadecimal or "compatibility zone" characters. Otherwise, **swscanf_s** and **sscanf_s** behave identically.

The versions of these functions that have the **_l** suffix are identical except that they use the locale parameter that's passed in instead of the current thread locale.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_stscanf_s**|**sscanf_s**|**sscanf_s**|**swscanf_s**|
|**_stscanf_s_l**|**_sscanf_s_l**|**_sscanf_s_l**|**_swscanf_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**sscanf_s**, **_sscanf_s_l**|\<stdio.h>|
|**swscanf_s**, **_swscanf_s_l**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_sscanf_s.c
// This program uses sscanf_s to read data items
// from a string named tokenstring, then displays them.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   char  tokenstring[] = "15 12 14...";
   char  s[81];
   char  c;
   int   i;
   float fp;

   // Input various data from tokenstring:
   // max 80 character string plus null terminator
   sscanf_s( tokenstring, "%s", s, (unsigned)_countof(s) );
   sscanf_s( tokenstring, "%c", &c, (unsigned)sizeof(char) );
   sscanf_s( tokenstring, "%d", &i );
   sscanf_s( tokenstring, "%f", &fp );

   // Output the data read
   printf_s( "String    = %s\n", s );
   printf_s( "Character = %c\n", c );
   printf_s( "Integer:  = %d\n", i );
   printf_s( "Real:     = %f\n", fp );
}
```

```Output
String    = 15
Character = 1
Integer:  = 15
Real:     = 15.000000
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l](snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)<br/>
