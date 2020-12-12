---
description: "Learn more about: fread"
title: "fread"
ms.date: "4/2/2020"
api_name: ["fread", "_o_fread"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fread"]
helpviewer_keywords: ["reading data [C++], from input streams", "fread function", "data [C++], reading from input stream", "streams [C++], reading data from"]
ms.assetid: 9a3c1538-93dd-455e-ae48-77c1e23c53f0
---
# fread

Reads data from a stream.

## Syntax

```C
size_t fread(
   void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### Parameters

*buffer*<br/>
Storage location for data.

*size*<br/>
Item size in bytes.

*count*<br/>
Maximum number of items to be read.

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

**fread** returns the number of full items actually read, which may be less than *count* if an error occurs or if the end of the file is encountered before reaching *count*. Use the **feof** or **ferror** function to distinguish a read error from an end-of-file condition. If *size* or *count* is 0, **fread** returns 0 and the buffer contents are unchanged. If *stream* or *buffer* is a null pointer, **fread** invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns 0.

See [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these error codes.

## Remarks

The **fread** function reads up to *count* items of *size* bytes from the input *stream* and stores them in *buffer*. The file pointer associated with *stream* (if there is one) is increased by the number of bytes actually read. If the given stream is opened in [text mode](../../c-runtime-library/text-and-binary-mode-file-i-o.md), Windows-style newlines are converted into Unix-style newlines. That is, carriage return-line feed (CRLF) pairs are replaced by single line feed (LF) characters. The replacement has no effect on the file pointer or the return value. The file-pointer position is indeterminate if an error occurs. The value of a partially read item cannot be determined.

When used on a text mode stream, if the amount of data requested (that is, *size* \* *count*) is greater than or equal to the internal **FILE** \* buffer size (by default this is 4096 bytes, configurable by using [setvbuf](../../c-runtime-library/reference/setvbuf.md)), stream data is copied directly into the user-provided buffer, and newline conversion is done in that buffer. Since the converted data may be shorter than the stream data copied into the buffer, data past *buffer*\[*return_value* \* *size*] (where *return_value* is the return value from **fread**) may contain unconverted data from the file. For this reason, we recommend you null-terminate character data at *buffer*\[*return_value* \* *size*] if the intent of the buffer is to act as a C-style string. See [fopen](fopen-wfopen.md) for details on the effects of text mode and binary mode.

This function locks out other threads. If you need a non-locking version, use **_fread_nolock**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fread**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fread.c
// This program opens a file named FREAD.OUT and
// writes 25 characters to the file. It then tries to open
// FREAD.OUT and read in 25 characters. If the attempt succeeds,
// the program displays the number of actual items read.

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char list[30];
   int  i, numread, numwritten;

   // Open file in text mode:
   if( fopen_s( &stream, "fread.out", "w+t" ) == 0 )
   {
      for ( i = 0; i < 25; i++ )
         list[i] = (char)('z' - i);
      // Write 25 characters to stream
      numwritten = fwrite( list, sizeof( char ), 25, stream );
      printf( "Wrote %d items\n", numwritten );
      fclose( stream );

   }
   else
      printf( "Problem opening the file\n" );

   if( fopen_s( &stream, "fread.out", "r+t" ) == 0 )
   {
      // Attempt to read in 25 characters
      numread = fread( list, sizeof( char ), 25, stream );
      printf( "Number of items read = %d\n", numread );
      printf( "Contents of buffer = %.25s\n", list );
      fclose( stream );
   }
   else
      printf( "File could not be opened\n" );
}
```

```Output
Wrote 25 items
Number of items read = 25
Contents of buffer = zyxwvutsrqponmlkjihgfedcb
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[Text and Binary File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md)<br/>
[fopen](fopen-wfopen.md)<br/>
[fwrite](fwrite.md)<br/>
[_read](read.md)<br/>
