---
description: "Learn more about: fseek, _fseeki64"
title: "fseek, _fseeki64"
ms.date: "4/2/2020"
api_name: ["_fseeki64", "fseek", "_o__fseeki64", "_o_fseek"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fseek", "_fseeki64"]
helpviewer_keywords: ["_fseeki64 function", "fseeki64 function", "fseek function", "file pointers [C++], moving", "file pointers [C++]", "seek file pointers"]
ms.assetid: f6bb1f8b-891c-426e-9e14-0e7e5c62df70
---
# fseek, _fseeki64

Moves the file pointer to a specified location.

## Syntax

```C
int fseek(
   FILE *stream,
   long offset,
   int origin
);
int _fseeki64(
   FILE *stream,
   __int64 offset,
   int origin
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*offset*<br/>
Number of bytes from *origin*.

*origin*<br/>
Initial position.

## Return Value

If successful, **fseek** and **_fseeki64** returns 0. Otherwise, it returns a nonzero value. On devices incapable of seeking, the return value is undefined. If *stream* is a null pointer, or if *origin* is not one of allowed values described below, **fseek** and **_fseeki64** invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return -1.

## Remarks

The **fseek** and **_fseeki64** functions moves the file pointer (if any) associated with *stream* to a new location that is *offset* bytes from *origin*. The next operation on the stream takes place at the new location. On a stream open for update, the next operation can be either a read or a write. The argument *origin* must be one of the following constants, defined in STDIO.H:

|origin value|Meaning|
|-|-|
| **SEEK_CUR** | Current position of file pointer. |
| **SEEK_END** | End of file. |
| **SEEK_SET** | Beginning of file. |

You can use **fseek** and **_fseeki64** to reposition the pointer anywhere in a file. The pointer can also be positioned beyond the end of the file. **fseek** and **_fseeki64** clears the end-of-file indicator and negates the effect of any prior [ungetc](ungetc-ungetwc.md) calls against *stream*.

When a file is opened for appending data, the current file position is determined by the last I/O operation, not by where the next write would occur. If no I/O operation has yet occurred on a file opened for appending, the file position is the start of the file.

For streams opened in text mode, **fseek** and **_fseeki64** have limited use, because carriage return-line feed translations can cause **fseek** and **_fseeki64** to produce unexpected results. The only **fseek** and **_fseeki64** operations guaranteed to work on streams opened in text mode are:

- Seeking with an offset of 0 relative to any of the origin values.

- Seeking from the beginning of the file with an offset value returned from a call to [ftell](ftell-ftelli64.md) when using **fseek** or [_ftelli64](ftell-ftelli64.md) when using **_fseeki64**.

Also in text mode, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading/writing, [fopen](fopen-wfopen.md) and all related routines check for a CTRL+Z at the end of the file and remove it if possible. This is done because using the combination of **fseek** and [ftell](ftell-ftelli64.md) or **_fseeki64** and [_ftelli64](ftell-ftelli64.md), to move within a file that ends with a CTRL+Z may cause **fseek** or **_fseeki64** to behave improperly near the end of the file.

When the CRT opens a file that begins with a Byte Order Mark (BOM), the file pointer is positioned after the BOM (that is, at the start of the file's actual content). If you have to **fseek** to the beginning of the file, use [ftell](ftell-ftelli64.md) to get the initial position and **fseek** to it rather than to position 0.

This function locks out other threads during execution and is therefore thread-safe. For a non-locking version, see [_fseek_nolock, _fseeki64_nolock](fseek-nolock-fseeki64-nolock.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fseek**|\<stdio.h>|
|**_fseeki64**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fseek.c
// This program opens the file FSEEK.OUT and
// moves the pointer to the file's beginning.

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char line[81];
   int  result;

   if ( fopen_s( &stream, "fseek.out", "w+" ) != 0 )
   {
      printf( "The file fseek.out was not opened\n" );
      return -1;
   }
   fprintf( stream, "The fseek begins here: "
                    "This is the file 'fseek.out'.\n" );
   result = fseek( stream, 23L, SEEK_SET);
   if( result )
      perror( "Fseek failed" );
   else
   {
      printf( "File pointer is set to middle of first line.\n" );
      fgets( line, 80, stream );
      printf( "%s", line );
    }
   fclose( stream );
}
```

```Output
File pointer is set to middle of first line.
This is the file 'fseek.out'.
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
[rewind](rewind.md)<br/>
