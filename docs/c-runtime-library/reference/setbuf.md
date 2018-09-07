---
title: "setbuf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["setbuf"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["setbuf"]
dev_langs: ["C++"]
helpviewer_keywords: ["setbuf function", "stream buffering"]
ms.assetid: 13beda22-7b56-455d-8a6c-f2eb636885b9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# setbuf

Controls stream buffering. This function is deprecated; use [setvbuf](setvbuf.md) instead.

## Syntax

```C
void setbuf(
   FILE *stream,
   char *buffer
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*buffer*<br/>
User-allocated buffer.

## Remarks

The **setbuf** function controls buffering for *stream*. The *stream* argument must refer to an open file that has not been read or written. If the *buffer* argument is **NULL**, the stream is un-buffered. If not, the buffer must point to a character array of length **BUFSIZ**, where **BUFSIZ** is the buffer size as defined in STDIO.H. The user-specified buffer, instead of the default system-allocated buffer for the given stream, is used for I/O buffering. The **stderr** stream is un-buffered by default, but you can use **setbuf** to assign buffers to **stderr**.

**setbuf** has been replaced by [setvbuf](setvbuf.md), which is the preferred routine for new code. **setbuf** is retained for compatibility with existing code.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**setbuf**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_setbuf.c
// compile with: /W3
// This program first opens files named DATA1 and
// DATA2. Then it uses setbuf to give DATA1 a user-assigned
// buffer and to change DATA2 so that it has no buffer.

#include <stdio.h>

int main( void )
{
   char buf[BUFSIZ];
   FILE *stream1, *stream2;

   fopen_s( &stream1, "data1", "a" );
   fopen_s( &stream2, "data2", "w" );

   if( (stream1 != NULL) && (stream2 != NULL) )
   {
      // "stream1" uses user-assigned buffer:
      setbuf( stream1, buf ); // C4996
      // Note: setbuf is deprecated; consider using setvbuf instead
      printf( "stream1 set to user-defined buffer at: %Fp\n", buf );

      // "stream2" is unbuffered
      setbuf( stream2, NULL ); // C4996
      printf( "stream2 buffering disabled\n" );
      _fcloseall();
   }
}
```

```Output
stream1 set to user-defined buffer at: 0012FCDC
stream2 buffering disabled
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[setvbuf](setvbuf.md)<br/>
