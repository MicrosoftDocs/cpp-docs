---
description: "Learn more about: clearerr"
title: "clearerr"
ms.date: "4/2/2020"
api_name: ["clearerr", "_o_clearerr"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["clearerr"]
helpviewer_keywords: ["error indicator for streams", "resetting stream error indicator", "clearerr function"]
ms.assetid: a9711cd4-3335-43d4-a018-87bbac5b3bac
---
# clearerr

Resets the error indicator for a stream. A more secure version of this function is available; see [clearerr_s](clearerr-s.md).

## Syntax

```C
void clearerr(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

## Remarks

The **clearerr** function resets the error indicator and end-of-file indicator for *stream*. Error indicators are not automatically cleared; once the error indicator for a specified stream is set, operations on that stream continue to return an error value until **clearerr**, [fseek](fseek-fseeki64.md), **fsetpos**, or [rewind](rewind.md) is called.

If *stream* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns. For more information on **errno** and error codes, see [errno Constants](../../c-runtime-library/errno-constants.md).

A more secure version of this function is available; see [clearerr_s](clearerr-s.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**clearerr**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_clearerr.c
// This program creates an error
// on the standard input stream, then clears
// it so that future reads won't fail.

#include <stdio.h>

int main( void )
{
   int c;
   // Create an error by writing to standard input.
   putc( 'c', stdin );
   if( ferror( stdin ) )
   {
      perror( "Write error" );
      clearerr( stdin );
   }

   // See if read causes an error.
   printf( "Will input cause an error? " );
   c = getc( stdin );
   if( ferror( stdin ) )
   {
      perror( "Read error" );
      clearerr( stdin );
   }
   else
      printf( "No read error\n" );
}
```

### Input

```Input
n
```

### Output

```Output
Write error: No error
Will input cause an error? n
No read error
```

## See also

[Error Handling](../../c-runtime-library/error-handling-crt.md)<br/>
[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_eof](eof.md)<br/>
[feof](feof.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
