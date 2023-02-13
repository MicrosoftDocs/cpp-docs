---
description: "Learn more about: clearerr_s"
title: "clearerr_s"
ms.date: "4/2/2020"
api_name: ["clearerr_s", "_o_clearerr_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["clearerr_s"]
helpviewer_keywords: ["error indicator for streams", "resetting stream error indicator", "clearerr_s function"]
ms.assetid: b74d014d-b7a8-494a-a330-e5ffd5614772
---
# `clearerr_s`

Resets the error indicator for a stream. This function is a version of [`clearerr`](clearerr.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t clearerr_s(
   FILE *stream
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure

## Return value

Zero if successful; `EINVAL` if *`stream`* is `NULL`.

## Remarks

The **`clearerr_s`** function resets the error indicator and end-of-file indicator for *`stream`*. Error indicators aren't automatically cleared; once the error indicator for a specified stream is set, operations on that stream continue to return an error value until **`clearerr_s`**, `clearerr`, [`fseek`](fseek-fseeki64.md), `fsetpos`, or [`rewind`](rewind.md) is called.

If *`stream`* is `NULL`, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`clearerr_s`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_clearerr_s.c
// This program creates an error
// on the standard input stream, then clears
// it so that future reads won't fail.

#include <stdio.h>

int main( void )
{
   int c;
   errno_t err;

   // Create an error by writing to standard input.
   putc( 'c', stdin );
   if( ferror( stdin ) )
   {
      perror( "Write error" );
      err = clearerr_s( stdin );
      if (err != 0)
      {
         abort();
      }
   }

   // See if read causes an error.
   printf( "Will input cause an error? " );
   c = getc( stdin );
   if( ferror( stdin ) )
   {
      perror( "Read error" );
      err = clearerr_s( stdin );
      if (err != 0)
      {
         abort();
      }
   }
}
```

### Input

```Input
n
```

### Output

```Output
Write error: Bad file descriptor
Will input cause an error? n
```

## See also

[Error handling](../error-handling-crt.md)\
[Stream I/O](../stream-i-o.md)\
[`clearerr`](clearerr.md)\
[`_eof`](eof.md)\
[`feof`](feof.md)\
[`ferror`](ferror.md)\
[`perror`, `_wperror`](perror-wperror.md)
