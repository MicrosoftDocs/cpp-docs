---
description: "Learn more about: fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l"
title: "fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l"
ms.date: "11/04/2016"
api_name: ["fwscanf_s", "_fscanf_s_l", "_fwscanf_s_l", "fscanf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fwscanf_s_l", "_fscanf_s_l", "fscanf_s", "_ftscanf_s_l", "_ftscanf_s", "fwscanf_s"]
helpviewer_keywords: ["formatted data [C++], reading from streams", "_ftscanf_s_l function", "_fscanf_s_l function", "ftscanf_s function", "fwscanf_s function", "_ftscanf_s function", "data [CRT], reading from streams", "_fwscanf_s_l function", "fscanf_s function", "fwscanf_s_l function", "ftscanf_s_l function", "streams [C++], reading formatted data from", "fscanf_s_l function"]
ms.assetid: b6e88194-714b-4322-be82-1cc0b343fe01
---
# fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l

Reads formatted data from a stream. These versions of [fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int fscanf_s(
   FILE *stream,
   const char *format [,
   argument ]...
);
int _fscanf_s_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument ]...
);
int fwscanf_s(
   FILE *stream,
   const wchar_t *format [,
   argument ]...
);
int _fwscanf_s_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument ]...
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*format*<br/>
Format-control string.

*argument*<br/>
Optional arguments.

*locale*<br/>
The locale to use.

## Return Value

Each of these functions returns the number of fields that are successfully converted and assigned; the return value does not include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned. If an error occurs, or if the end of the file stream is reached before the first conversion, the return value is **EOF** for **fscanf_s** and **fwscanf_s**.

These functions validate their parameters. If *stream* is an invalid file pointer, or *format* is a null pointer, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EOF** and set **errno** to **EINVAL**.

## Remarks

The **fscanf_s** function reads data from the current position of *stream* into the locations that are given by *argument* (if any). Each *argument* must be a pointer to a variable of a type that corresponds to a type specifier in *format*. *format* controls the interpretation of the input fields and has the same form and function as the *format* argument for **scanf_s**; see [Format Specification Fields: scanf and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md) for a description of *format*.  **fwscanf_s** is a wide-character version of **fscanf_s**; the format argument to **fwscanf_s** is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. **fscanf_s** doesn't currently support input from a UNICODE stream.

The main difference between the more secure functions (that have the **_s** suffix) and the other versions is that the more secure functions require the size in characters of each **c**, **C**, **s**, **S**, and **[** type field to be passed as an argument immediately following the variable. For more information, see [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) and [scanf Width Specification](../../c-runtime-library/scanf-width-specification.md).

> [!NOTE]
> The size parameter is of type **`unsigned`**, not **size_t**.

The versions of these functions that have the **_l** suffix are identical except that they use the locale parameter that's passed in instead of the current thread locale.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ftscanf_s**|**fscanf_s**|**fscanf_s**|**fwscanf_s**|
|**_ftscanf_s_l**|**_fscanf_s_l**|**_fscanf_s_l**|**_fwscanf_s_l**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fscanf_s**, **_fscanf_s_l**|\<stdio.h>|
|**fwscanf_s**, **_fwscanf_s_l**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fscanf_s.c
// This program writes formatted
// data to a file. It then uses fscanf to
// read the various data back from the file.

#include <stdio.h>
#include <stdlib.h>

FILE *stream;

int main( void )
{
   long l;
   float fp;
   char s[81];
   char c;

   errno_t err = fopen_s( &stream, "fscanf.out", "w+" );
   if( err )
      printf_s( "The file fscanf.out was not opened\n" );
   else
   {
      fprintf_s( stream, "%s %ld %f%c", "a-string",
               65000, 3.14159, 'x' );
      // Set pointer to beginning of file:
      fseek( stream, 0L, SEEK_SET );

      // Read data back from file:
      fscanf_s( stream, "%s", s, _countof(s) );
      fscanf_s( stream, "%ld", &l );

      fscanf_s( stream, "%f", &fp );
      fscanf_s( stream, "%c", &c, 1 );

      // Output data read:
      printf( "%s\n", s );
      printf( "%ld\n", l );
      printf( "%f\n", fp );
      printf( "%c\n", c );

      fclose( stream );
   }
}
```

```Output
a-string
65000
3.141590
x
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)<br/>
[fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
