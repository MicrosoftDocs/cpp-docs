---
description: "Learn more about: rewind"
title: "rewind"
ms.date: "4/2/2020"
api_name: ["rewind", "_o_rewind"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["rewind"]
helpviewer_keywords: ["rewind function", "repositioning file pointers", "file pointers [C++], repositioning", "file pointers [C++]"]
ms.assetid: 1a460ce1-28d8-4b5e-83a6-633dca29c28a
---
# `rewind`

Repositions the file pointer to the beginning of a file.

## Syntax

```C
void rewind(
   FILE *stream
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure.

## Remarks

The **`rewind`** function repositions the file pointer associated with *`stream`* to the beginning of the file. A call to **`rewind`** is similar to

`(void) fseek(stream, 0L, SEEK_SET );`

However, unlike [`fseek`](fseek-fseeki64.md), **`rewind`** clears both the error indicators for the stream and the end-of-file indicator. Also, unlike [`fseek`](fseek-fseeki64.md), **`rewind`** doesn't return a value to indicate whether the pointer was successfully moved.

To clear the keyboard buffer, use **`rewind`** with the stream `stdin`, which is associated with the keyboard by default.

If stream is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function returns, and `errno` is set to `EINVAL`.

For information on these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`rewind`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_rewind.c
/* This program first opens a file named
* crt_rewind.out for input and output and writes two
* integers to the file. Next, it uses rewind to
* reposition the file pointer to the beginning of
* the file and reads the data back in.
*/
#include <stdio.h>

int main( void )
{
   FILE *stream;
   int data1, data2;

   data1 = 1;
   data2 = -37;

   fopen_s( &stream, "crt_rewind.out", "w+" );
   if( stream != NULL )
   {
      fprintf( stream, "%d %d", data1, data2 );
      printf( "The values written are: %d and %d\n", data1, data2 );
      rewind( stream );
      fscanf_s( stream, "%d %d", &data1, &data2 );
      printf( "The values read are: %d and %d\n", data1, data2 );
      fclose( stream );
   }
}
```

### Output

```Output
The values written are: 1 and -37
The values read are: 1 and -37
```

## See also

[Stream I/O](../stream-i-o.md)
