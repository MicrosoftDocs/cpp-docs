---
description: "Learn more about: _fgetc_nolock, _fgetwc_nolock"
title: "_fgetc_nolock, _fgetwc_nolock"
ms.date: "4/2/2020"
api_name: ["_fgetc_nolock", "_fgetwc_nolock", "_o__fgetc_nolock", "_o__fgetwc_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fgetwc_nolock", "fgettc_nolock", "fgetwc_nolock", "_fgetc_nolock", "_fgettc_nolock", "fgetc_nolock"]
helpviewer_keywords: ["fgetc_nolock function", "fgetwc_nolock function", "_fgetwc_nolock function", "characters, reading", "_fgetc_nolock function", "streams, reading characters from", "fgettc_nolock function", "reading characters from streams", "_fgettc_nolock function"]
ms.assetid: fb8e7c5b-4503-493a-879e-6a1db75aa114
---
# _fgetc_nolock, _fgetwc_nolock

Reads a character from a stream without locking the thread.

## Syntax

```C
int _fgetc_nolock(
   FILE *stream
);
wint_t _fgetwc_nolock(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

See[fgetc, fgetwc](fgetc-fgetwc.md).

## Remarks

**_fgetc_nolock** and **_fgetwc_nolock** are identical to **fgetc** and **fgetwc**, respectively, except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_fgettc_nolock**|**_fgetc_nolock**|**_fgetc_nolock**|**_fgetwc_nolock**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fgetc_nolock**|\<stdio.h>|
|**_fgetwc_nolock**|\<stdio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fgetc_nolock.c
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
   if( fopen_s( &stream, "crt_fgetc_nolock.txt", "r" ) != 0 )
      exit( 0 );

   // Read in first 80 characters and place them in "buffer":
   ch = fgetc( stream );
   for( i=0; (i < 80 ) && ( feof( stream ) == 0 ); i++ )
   {
      buffer[i] = (char)ch;
      ch = _fgetc_nolock( stream );
   }

   // Add null to end string
   buffer[i] = '\0';
   printf( "%s\n", buffer );
   fclose( stream );
}
```

## Input: crt_fgetc_nolock.txt

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
