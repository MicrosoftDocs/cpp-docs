---
description: "Learn more about: fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l"
title: "fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l"
ms.date: "11/04/2016"
api_name: ["_fprintf_s_l", "fwprintf_s", "fprintf_s", "_fwprintf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ftprintf_s", "fprintf_s", "fwprintf_s"]
helpviewer_keywords: ["ftprintf_s_l function", "ftprintf_s function", "_fprintf_s_l function", "_ftprintf_s function", "_ftprintf_s_l function", "fwprintf_s_l function", "fwprintf_s function", "fprintf_s_l function", "fprintf_s function", "_fwprintf_s_l function", "print formatted data to streams"]
ms.assetid: 16067c3c-69ce-472a-8272-9aadf1f5beed
---
# fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l

Print formatted data to a stream. These are versions of [fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int fprintf_s(
   FILE *stream,
   const char *format [,
   argument_list ]
);
int _fprintf_s_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument_list ]
);
int fwprintf_s(
   FILE *stream,
   const wchar_t *format [,
   argument_list ]
);
int _fwprintf_s_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument_list ]
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*format*<br/>
Format-control string.

*argument_list*<br/>
Optional arguments to the format string.

*locale*<br/>
The locale to use.

## Return Value

**fprintf_s** returns the number of bytes written. **fwprintf_s** returns the number of wide characters written. Each of these functions returns a negative value instead when an output error occurs.

## Remarks

**fprintf_s** formats and prints a series of characters and values to the output *stream*. Each argument in *argument_list* (if any) is converted and output according to the corresponding format specification in *format*. The *format* argument uses the [format specification syntax for printf and wprintf functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

**fwprintf_s** is a wide-character version of **fprintf_s**; in **fwprintf_s**, *format* is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. **fprintf_s** doesn't currently support output into a UNICODE stream.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string.

Like the non-secure versions (see [fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)), these functions validate their parameters and invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md), if either *stream* or *format* is a null pointer. The format string itself is also validated. If there are any unknown or badly formed formatting specifiers, these functions generate the invalid parameter exception. In all cases, If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**. See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ftprintf_s**|**fprintf_s**|**fprintf_s**|**fwprintf_s**|
|**_ftprintf_s_l**|**_fprintf_s_l**|**_fprintf_s_l**|**_fwprintf_s_l**|

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fprintf_s**, **_fprintf_s_l**|\<stdio.h>|
|**fwprintf_s**, **_fwprintf_s_l**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fprintf_s.c
// This program uses fprintf_s to format various
// data and print it to the file named FPRINTF_S.OUT. It
// then displays FPRINTF_S.OUT on the screen using the system
// function to invoke the operating-system TYPE command.

#include <stdio.h>
#include <process.h>

FILE *stream;

int main( void )
{
   int    i = 10;
   double fp = 1.5;
   char   s[] = "this is a string";
   char   c = '\n';

   fopen_s( &stream, "fprintf_s.out", "w" );
   fprintf_s( stream, "%s%c", s, c );
   fprintf_s( stream, "%d\n", i );
   fprintf_s( stream, "%f\n", fp );
   fclose( stream );
   system( "type fprintf_s.out" );
}
```

```Output
this is a string
10
1.500000
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
