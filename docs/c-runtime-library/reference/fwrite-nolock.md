---
description: "Learn more about: _fwrite_nolock"
title: "_fwrite_nolock"
ms.date: "4/2/2020"
api_name: ["_fwrite_nolock", "_o__fwrite_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fwrite_nolock", "fwrite_nolock"]
helpviewer_keywords: ["fwrite_nolock function", "streams, writing data to", "_fwrite_nolock function"]
ms.assetid: 2b4ec6ce-742e-4615-8407-44a0a18ec1d7
---
# _fwrite_nolock

Writes data to a stream, without locking the thread.

## Syntax

```C
size_t _fwrite_nolock(
   const void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### Parameters

*buffer*<br/>
Pointer to the data to be written.

*size*<br/>
Item size in bytes.

*count*<br/>
Maximum number of items to be written.

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

Same as [fwrite](fwrite.md).

## Remarks

This function is a non-locking version of **fwrite**. It is identical to **fwrite** except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fwrite_nolock**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [fread](fread.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fread](fread.md)<br/>
[_write](write.md)<br/>
