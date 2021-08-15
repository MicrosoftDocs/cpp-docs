---
description: "Learn more about: _getw"
title: "_getw"
ms.date: "4/2/2020"
api_name: ["_getw", "_o__getw"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getw"]
helpviewer_keywords: ["_getw function", "integers, getting from streams", "getw function"]
ms.assetid: ef75facc-b84e-470f-9f5f-8746c90822a0
---
# _getw

Gets an integer from a stream.

## Syntax

```C
int _getw(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

**_getw** returns the integer value read. A return value of **EOF** indicates either an error or end of file. However, because the **EOF** value is also a legitimate integer value, use **feof** or **ferror** to verify an end-of-file or error condition. If *stream* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **EOF**.

## Remarks

The **_getw** function reads the next binary value of type **`int`** from the file associated with *stream* and increments the associated file pointer (if there is one) to point to the next unread character. **_getw** does not assume any special alignment of items in the stream. Problems with porting can occur with **_getw** because the size of the **`int`** type and the ordering of bytes within the **`int`** type differ across systems.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_getw**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_getw.c
// This program uses _getw to read a word
// from a stream, then performs an error check.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   FILE *stream;
   int i;

   if( fopen_s( &stream, "crt_getw.txt", "rb" ) )
      printf( "Couldn't open file\n" );
   else
   {
      // Read a word from the stream:
      i = _getw( stream );

      // If there is an error...
      if( ferror( stream ) )
      {
         printf( "_getw failed\n" );
         clearerr_s( stream );
      }
      else
         printf( "First data word in file: 0x%.4x\n", i );
      fclose( stream );
   }
}
```

### Input: crt_getw.txt

```Input
Line one.
Line two.
```

### Output

```Output
First data word in file: 0x656e694c
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_putw](putw.md)<br/>
