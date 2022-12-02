---
title: "_flushall"
description: "API reference for _flushall; which flushes all streams and clears all buffers."
ms.date: "4/2/2020"
api_name: ["_flushall", "_o__flushall"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_flushall"]
helpviewer_keywords: ["flushall function", "flushing streams", "streams, flushing", "_flushall function"]
ms.assetid: 2cd73562-6d00-4ca2-b13c-80d0ae7870b5
---
# `_flushall`

Flushes all streams; clears all buffers.

## Syntax

```C
int _flushall( void );
```

## Return value

**`_flushall`** returns the number of open streams (input and output). There's no error return.

## Remarks

By default, the **`_flushall`** function writes to appropriate files the contents of all buffers associated with open output streams. All buffers associated with open input streams are cleared of their current contents. (These buffers are normally maintained by the operating system, which determines the optimal time to write the data automatically to disk: when a buffer is full, when a stream is closed, or when a program terminates normally without closing streams.)

If a read follows a call to **`_flushall`**, new data is read from the input files into the buffers. All streams remain open after the call to **`_flushall`**.

The commit-to-disk feature of the run-time library lets you ensure that critical data is written directly to disk rather than to the operating system buffers. Without rewriting an existing program, you can enable this feature by linking the program's object files with Commode.obj. In the resulting executable file, calls to **`_flushall`** write the contents of all buffers to disk. Only **`_flushall`** and [`fflush`](fflush.md) are affected by Commode.obj.

For information about controlling the commit-to-disk feature, see [Stream I/O](../stream-i-o.md), [`fopen`](fopen-wfopen.md), and [`_fdopen`](fdopen-wfdopen.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`_flushall`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_flushall.c
// This program uses _flushall
// to flush all open buffers.

#include <stdio.h>

int main( void )
{
   int numflushed;

   numflushed = _flushall();
   printf( "There were %d streams flushed\n", numflushed );
}
```

```Output
There were 3 streams flushed
```

## See also

[Stream I/O](../stream-i-o.md)\
[`_commit`](commit.md)\
[`fclose`, `_fcloseall`](fclose-fcloseall.md)\
[`fflush`](fflush.md)\
[`setvbuf`](setvbuf.md)
