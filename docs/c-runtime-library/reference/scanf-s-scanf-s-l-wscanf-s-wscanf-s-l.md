---
description: "Learn more about: scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l"
title: "scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l"
ms.date: "03/26/2019"
api_name: ["wscanf_s", "_wscanf_s_l", "scanf_s", "_scanf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wscanf_s", "_tscanf_s_l", "_wscanf_s_l", "scanf_s", "_tscanf_s", "_scanf_s_l"]
helpviewer_keywords: ["reading data [C++], from input streams", "buffers [C++], buffer overruns", "_scanf_s_l function", "_wscanf_s_l function", "tscanf_s_l function", "tscanf_s function", "scanf_s function", "data [C++], reading from input stream", "wscanf_s function", "_tscanf_s_l function", "_tscanf_s function", "scanf_s_l function", "formatted data [C++], from input streams", "wscanf_s_l function", "buffers [C++], avoiding overruns"]
ms.assetid: 42cafcf7-52d6-404a-80e4-b056a7faf2e5
---
# scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l

Reads formatted data from the standard input stream. These versions of [scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int scanf_s(
   const char *format [,
   argument]...
);
int _scanf_s_l(
   const char *format,
   locale_t locale [,
   argument]...
);
int wscanf_s(
   const wchar_t *format [,
   argument]...
);
int _wscanf_s_l(
   const wchar_t *format,
   locale_t locale [,
   argument]...
);
```

### Parameters

*format*<br/>
Format control string.

*argument*<br/>
Optional arguments.

*locale*<br/>
The locale to use.

## Return Value

Returns the number of fields successfully converted and assigned. The return value doesn't include fields that were read but not assigned. A return value of 0 indicates no fields were assigned. The return value is **EOF** for an error, or if the end-of-file character or the end-of-string character is found in the first attempt to read a character. If *format* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **scanf_s** and **wscanf_s** return **EOF** and set **errno** to **EINVAL**.

For information about these and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **scanf_s** function reads data from the standard input stream, **stdin**, and writes it into *argument*. Each *argument* must be a pointer to a variable type that corresponds to the type specifier in *format*. If copying occurs between strings that overlap, the behavior is undefined.

**wscanf_s** is a wide-character version of **scanf_s**; the *format* argument to **wscanf_s** is a wide-character string. **wscanf_s** and **scanf_s** behave identically if the stream is opened in ANSI mode. **scanf_s** doesn't currently support input from a UNICODE stream.

The versions of these functions that have the **_l** suffix are identical, except they use the *locale* parameter instead of the current thread locale.

Unlike **scanf** and **wscanf**, **scanf_s** and **wscanf_s** require you to specify buffer sizes for some parameters. Specify the sizes for all **c**, **C**, **s**, **S**, or string control set **[]** parameters. The buffer size in characters is passed as an additional parameter. It immediately follows the pointer to the buffer or variable. For example, if you're reading a string, the buffer size for that string is passed as follows:

```C
char s[10];
scanf_s("%9s", s, (unsigned)_countof(s)); // buffer size is 10, width specification is 9
```

The buffer size includes the terminal null. You can use a width specification field to ensure the token that's read in fits into the buffer. When a token is too large to fit, nothing is written to the buffer unless there's a width specification.

> [!NOTE]
> The size parameter is of type **`unsigned`**, not **size_t**. Use a static cast to convert a **size_t** value to **`unsigned`** for 64-bit build configurations.

The buffer size parameter describes the maximum number of characters, not bytes. In this example, the width of the buffer type doesn't match the width of the format specifier.

```C
wchar_t ws[10];
wscanf_s(L"%9S", ws, (unsigned)_countof(ws));
```

The **S** format specifier means use the character width that's "opposite" the default width supported by the function. The character width is single byte, but the function supports double-byte characters. This example reads in a string of up to nine single-byte-wide characters and puts them in a double-byte-wide character buffer. The characters are treated as single-byte values; the first two characters are stored in `ws[0]`, the second two are stored in `ws[1]`, and so on.

This example reads a single character:

```C
char c;
scanf_s("%c", &c, 1);
```

When multiple characters for non-null-terminated strings are read, integers are used for both the width specification and the buffer size.

```C
char c[4];
scanf_s("%4c", c, (unsigned)_countof(c)); // not null terminated
```

For more information, see [scanf Width Specification](../../c-runtime-library/scanf-width-specification.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tscanf_s**|**scanf_s**|**scanf_s**|**wscanf_s**|
|**_tscanf_s_l**|**_scanf_s_l**|**_scanf_s_l**|**_wscanf_s_l**|

For more information, see [Format Specification Fields: scanf and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**scanf_s**, **_scanf_s_l**|\<stdio.h>|
|**wscanf_s**, **_wscanf_s_l**|\<stdio.h> or \<wchar.h>|

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles **stdin**, **stdout**, and **stderr** must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_scanf_s.c
// This program uses the scanf_s and wscanf_s functions
// to read formatted input.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int      i,
            result;
   float    fp;
   char     c,
            s[80];
   wchar_t  wc,
            ws[80];

   result = scanf_s( "%d %f %c %C %s %S", &i, &fp, &c, 1,
                     &wc, 1, s, (unsigned)_countof(s), ws, (unsigned)_countof(ws) );
   printf( "The number of fields input is %d\n", result );
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c,
           wc, s, ws);
   result = wscanf_s( L"%d %f %hc %lc %S %ls", &i, &fp, &c, 2,
                      &wc, 1, s, (unsigned)_countof(s), ws, (unsigned)_countof(ws) );
   wprintf( L"The number of fields input is %d\n", result );
   wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp,
            c, wc, s, ws);
}
```

This program produces the following output when given this input:

```Input
71 98.6 h z Byte characters
36 92.3 y n Wide characters
```

```Output
The number of fields input is 6
The contents are: 71 98.599998 h z Byte characters
The number of fields input is 6
The contents are: 36 92.300003 y n Wide characters
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
