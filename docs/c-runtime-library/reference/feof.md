---
description: "Learn more about: feof"
title: "feof"
ms.date: "4/2/2020"
api_name: ["feof", "_o_feof"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["feof"]
helpviewer_keywords: ["end of file, testing for", "feof function"]
ms.assetid: 09081eee-7c4b-4189-861f-2fad95d3ec6d
---
# `feof`

Tests for end-of-file on a stream.

## Syntax

```C
int feof(
   FILE *stream
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure.

## Return value

The **`feof`** function returns a nonzero value if a read operation has attempted to read past the end of the file; it returns 0 otherwise. If the stream pointer is `NULL`, the function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the **`feof`** returns 0.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`feof`** routine (implemented both as a function and as a macro) determines whether the end of *`stream`* has been passed. When the end of file is passed, read operations return an end-of-file indicator until the stream is closed or until [`rewind`](rewind.md), `fsetpos`, [`fseek`](fseek-fseeki64.md), or `clearerr` is called against it.

For example, if a file contains 10 bytes and you read 10 bytes from the file, **`feof`** will return 0 because, even though the file pointer is at the end of the file, you haven't attempted to read beyond the end. Only after you try to read an 11th byte will **`feof`** return a nonzero value.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`feof`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_feof.c
// This program uses feof to indicate when
// it reaches the end of the file CRT_FEOF.TXT. It also
// checks for errors with ferror.
//

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int  count, total = 0;
   char buffer[100];
   FILE *stream;

   fopen_s( &stream, "crt_feof.txt", "r" );
   if( stream == NULL )
      exit( 1 );

   // Cycle until end of file reached:
   while( !feof( stream ) )
   {
      // Attempt to read in 100 bytes:
      count = fread( buffer, sizeof( char ), 100, stream );
      if( ferror( stream ) )      {
         perror( "Read error" );
         break;
      }

      // Total up actual bytes read
      total += count;
   }
   printf( "Number of bytes read = %d\n", total );
   fclose( stream );
}
```

## Input: crt_feof.txt

```Input
Line one.
Line two.
```

### Output

```Output
Number of bytes read = 19
```

## See also

[Error handling](../error-handling-crt.md)\
[Stream I/O](../stream-i-o.md)\
[`clearerr`](clearerr.md)\
[`_eof`](eof.md)\
[`ferror`](ferror.md)\
[`perror`, `_wperror`](perror-wperror.md)
