---
description: "Learn more about: fgetc, fgetwc"
title: "fgetc, fgetwc"
ms.date: "4/2/2020"
api_name: ["fgetwc", "fgetc", "_o_fgetc", "_o_fgetwc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fgettc", "fgetwc", "fgetc"]
helpviewer_keywords: ["fgettc function", "characters, reading", "_fgettc function", "fgetc function", "streams, reading characters from", "reading characters from streams", "fgetwc function"]
ms.assetid: 13348b7b-dc86-421c-9d6c-611ca79c8338
---
# fgetc, fgetwc

Read a character from a stream.

## Syntax

```C
int fgetc(
   FILE *stream
);
wint_t fgetwc(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

**fgetc** returns the character read as an **`int`** or returns **EOF** to indicate an error or end of file. **fgetwc** returns, as a [wint_t](../../c-runtime-library/standard-types.md), the wide character that corresponds to the character read or returns **WEOF** to indicate an error or end of file. For both functions, use **feof** or **ferror** to distinguish between an error and an end-of-file condition. If a read error occurs, the error indicator for the stream is set. If *stream* is **NULL**, **fgetc** and **fgetwc** invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return **EOF**.

## Remarks

Each of these functions reads a single character from the current position of the file associated with *stream*. The function then increments the associated file pointer (if defined) to point to the next character. If the stream is at end of file, the end-of-file indicator for the stream is set.

**fgetc** is equivalent to **getc**, but is implemented only as a function, rather than as a function and a macro.

**fgetwc** is the wide-character version of **fgetc**; it reads **c** as a multibyte character or a wide character according to whether *stream* is opened in text mode or binary mode.

The versions with the **_nolock** suffix are identical except that they are not protected from interference by other threads.

For more information about processing wide characters and multibyte characters in text and binary modes, see [Unicode Stream I/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_fgettc**|**fgetc**|**fgetc**|**fgetwc**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fgetc**|\<stdio.h>|
|**fgetwc**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fgetc.c
// This program uses getc to read the first
// 80 input characters (or until the end of input)
// and place them into a string named buffer.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   FILE *stream;
   char buffer[81];
   int  i, ch;

   // Open file to read line from:
   fopen_s( &stream, "crt_fgetc.txt", "r" );
   if( stream == NULL )
      exit( 0 );

   // Read in first 80 characters and place them in "buffer":
   ch = fgetc( stream );
   for( i=0; (i < 80 ) && ( feof( stream ) == 0 ); i++ )
   {
      buffer[i] = (char)ch;
      ch = fgetc( stream );
   }

   // Add null to end string
   buffer[i] = '\0';
   printf( "%s\n", buffer );
   fclose( stream );
}
```

## Input: crt_fgetc.txt

```Input
Line one.
Line two.
```

### Output

```Output
Line one.
Line two.
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fputc, fputwc](fputc-fputwc.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
