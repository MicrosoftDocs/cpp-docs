---
description: "Learn more about: setvbuf"
title: "setvbuf"
ms.date: "4/2/2020"
api_name: ["setvbuf", "_o_setvbuf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["setvbuf"]
helpviewer_keywords: ["controlling stream buffering", "stream buffering", "setvbuf function"]
ms.assetid: 6aa5aa37-3408-4fa0-992f-87f9f9c4baea
---
# setvbuf

Controls stream buffering and buffer size.

## Syntax

```C
int setvbuf(
   FILE *stream,
   char *buffer,
   int mode,
   size_t size
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*buffer*<br/>
User-allocated buffer.

*mode*<br/>
Mode of buffering.

*size*<br/>
Buffer size in bytes. Allowable range: 2 <= *size* <= INT_MAX (2147483647). Internally, the value supplied for *size* is rounded down to the nearest multiple of 2.

## Return Value

Returns 0 if successful.

If *stream* is **NULL**, or if *mode* or *size* is not within a valid change, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns -1 and sets **errno** to **EINVAL**.

For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **setvbuf** function allows the program to control both buffering and buffer size for *stream*. *stream* must refer to an open file that has not undergone an I/O operation since it was opened. The array pointed to by *buffer* is used as the buffer, unless it is **NULL**, in which case **setvbuf** uses an automatically allocated buffer of length *size*/2 \* 2 bytes.

The mode must be **_IOFBF**, **_IOLBF**, or **_IONBF**. If *mode* is **_IOFBF** or **_IOLBF**, then *size* is used as the size of the buffer. If *mode* is **_IONBF**, the stream is unbuffered and *size* and *buffer* are ignored. Values for *mode* and their meanings are:

|*mode* value|Meaning|
|-|-|
| **_IOFBF** | Full buffering; that is, *buffer* is used as the buffer and *size* is used as the size of the buffer. If *buffer* is **NULL**, an automatically allocated buffer *size* bytes long is used. |
| **_IOLBF** | For some systems, this provides line buffering. However, for Win32, the behavior is the same as **_IOFBF** - Full Buffering. |
| **_IONBF** | No buffer is used, regardless of *buffer* or *size*. |

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**setvbuf**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_setvbuf.c
// This program opens two streams: stream1
// and stream2. It then uses setvbuf to give stream1 a
// user-defined buffer of 1024 bytes and stream2 no buffer.
//

#include <stdio.h>

int main( void )
{
   char buf[1024];
   FILE *stream1, *stream2;

   if( fopen_s( &stream1, "data1", "a" ) == 0 &&
       fopen_s( &stream2, "data2", "w" ) == 0 )
   {
      if( setvbuf( stream1, buf, _IOFBF, sizeof( buf ) ) != 0 )
         printf( "Incorrect type or size of buffer for stream1\n" );
      else
         printf( "'stream1' now has a buffer of 1024 bytes\n" );
      if( setvbuf( stream2, NULL, _IONBF, 0 ) != 0 )
         printf( "Incorrect type or size of buffer for stream2\n" );
      else
         printf( "'stream2' now has no buffer\n" );
      _fcloseall();
   }
}
```

```Output
'stream1' now has a buffer of 1024 bytes
'stream2' now has no buffer
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[setbuf](setbuf.md)<br/>
