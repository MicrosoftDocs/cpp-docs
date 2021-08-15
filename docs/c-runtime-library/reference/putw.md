---
description: "Learn more about: _putw"
title: "_putw"
ms.date: "4/2/2020"
api_name: ["_putw", "_o__putw"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_putw"]
helpviewer_keywords: ["integers, writing to streams", "putw function", "streams, writing integers to", "_putw function"]
ms.assetid: 83d63644-249d-4a39-87e5-3b7aa313968d
---
# _putw

Writes an integer to a stream.

## Syntax

```C
int _putw(
   int binint,
   FILE *stream
);
```

### Parameters

*binint*<br/>
Binary integer to be output.

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

Returns the value written. A return value of **EOF** might indicate an error. Because **EOF** is also a legitimate integer value, use **ferror** to verify an error. If *stream* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EOF**.

For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_putw** function writes a binary value of type **`int`** to the current position of *stream.* **_putw** does not affect the alignment of items in the stream nor does it assume any special alignment. **_putw** is primarily for compatibility with previous libraries. Portability problems might occur with **_putw** because the size of an **`int`** and the ordering of bytes within an **`int`** differ across systems.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putw**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_putw.c
/* This program uses _putw to write a
* word to a stream, then performs an error check.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   FILE *stream;
   unsigned u;
   if( fopen_s( &stream, "data.out", "wb" ) )
      exit( 1 );
   for( u = 0; u < 10; u++ )
   {
      _putw( u + 0x2132, stream );   /* Write word to stream. */
      if( ferror( stream ) )         /* Make error check. */
      {
         printf( "_putw failed" );
         clearerr_s( stream );
         exit( 1 );
      }
   }
   printf( "Wrote ten words\n" );
   fclose( stream );
}
```

### Output

```Output
Wrote ten words
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_getw](getw.md)<br/>
