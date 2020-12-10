---
description: "Learn more about: fgetpos"
title: "fgetpos"
ms.date: "4/2/2020"
api_name: ["fgetpos", "_o_fgetpos"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fgetpos"]
helpviewer_keywords: ["fgetpos function", "streams, file position indicator"]
ms.assetid: bfa05c38-1135-418c-bda1-d41be51acb62
---
# fgetpos

Gets a stream's file-position indicator.

## Syntax

```C
int fgetpos(
   FILE *stream,
   fpos_t *pos
);
```

### Parameters

*stream*<br/>
Target stream.

*pos*<br/>
Position-indicator storage.

## Return Value

If successful, **fgetpos** returns 0. On failure, it returns a nonzero value and sets **errno** to one of the following manifest constants (defined in STDIO.H): **EBADF**, which means the specified stream is not a valid file pointer or is not accessible, or **EINVAL**, which means the *stream* value or the value of *pos* is invalid, such as if either is a null pointer. If *stream* or *pos* is a **NULL** pointer, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

## Remarks

The **fgetpos** function gets the current value of the *stream* argument's file-position indicator and stores it in the object pointed to by *pos*. The **fsetpos** function can later use information stored in *pos* to reset the *stream* argument's pointer to its position at the time **fgetpos** was called. The *pos* value is stored in an internal format and is intended for use only by **fgetpos** and **fsetpos**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fgetpos**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fgetpos.c
// This program uses fgetpos and fsetpos to
// return to a location in a file.

#include <stdio.h>

int main( void )
{
   FILE   *stream;
   fpos_t pos;
   char   buffer[20];

   if( fopen_s( &stream, "crt_fgetpos.txt", "rb" ) ) {
      perror( "Trouble opening file" );
      return -1;
   }

   // Read some data and then save the position.
   fread( buffer, sizeof( char ), 8, stream );
   if( fgetpos( stream, &pos ) != 0 ) {
      perror( "fgetpos error" );
      return -1;
   }

   fread( buffer, sizeof( char ), 13, stream );
   printf( "after fgetpos: %.13s\n", buffer );

   // Restore to old position and read data
   if( fsetpos( stream, &pos ) != 0 ) {
      perror( "fsetpos error" );
      return -1;
   }

   fread( buffer, sizeof( char ), 13, stream );
   printf( "after fsetpos: %.13s\n", buffer );
   fclose( stream );
}
```

## Input: crt_fgetpos.txt

```Input
fgetpos gets a stream's file-position indicator.
```

### Output crt_fgetpos.txt

```Output
after fgetpos: gets a stream
after fsetpos: gets a stream
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fsetpos](fsetpos.md)<br/>
