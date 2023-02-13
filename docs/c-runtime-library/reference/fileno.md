---
title: "_fileno"
description: "API reference for _fileno; which gets the file descriptor associated with a stream."
ms.date: "4/2/2020"
api_name: ["_fileno", "_o__fileno"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fileno"]
helpviewer_keywords: ["file handles [C++], getting from streams", "fileno function", "_fileno function", "streams, getting file handles"]
---
# `_fileno`

Gets the file descriptor associated with a stream.

## Syntax

```C
int _fileno(
   FILE *stream
);
```

### Parameters

*`stream`*\
Pointer to the `FILE` structure.

## Return value

**`_fileno`** returns the file descriptor. There's no error return. The result is undefined if *`stream`* doesn't specify an open file. If stream is `NULL`, **`_fileno`** invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function returns -1 and sets `errno` to `EINVAL`.

For more information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

> [!NOTE]
> If **`stdout`** or **`stderr`** is not associated with an output stream (for example, in a Windows application without a console window), the file descriptor returned is -2. In previous versions, the file descriptor returned was -1. This change allows applications to distinguish this condition from an error.

## Remarks

The **`_fileno`** routine returns the file descriptor currently associated with *`stream`*. This routine is implemented both as a function and as a macro. For information about choosing either implementation, see [Recommendations for choosing between functions and macros](../recommendations-for-choosing-between-functions-and-macros.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`_fileno`** | `<stdio.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fileno.c
// This program uses _fileno to obtain
// the file descriptor for some standard C streams.
//

#include <stdio.h>

int main( void )
{
   printf( "The file descriptor for stdin is %d\n", _fileno( stdin ) );
   printf( "The file descriptor for stdout is %d\n", _fileno( stdout ) );
   printf( "The file descriptor for stderr is %d\n", _fileno( stderr ) );
}
```

```Output
The file descriptor for stdin is 0
The file descriptor for stdout is 1
The file descriptor for stderr is 2
```

## See also

[Stream I/O](../stream-i-o.md)\
[`_fdopen`, `_wfdopen`](fdopen-wfdopen.md)\
[`_filelength`, `_filelengthi64`](filelength-filelengthi64.md)\
[`fopen`, `_wfopen`](fopen-wfopen.md)\
[`freopen`, `_wfreopen`](freopen-wfreopen.md)
