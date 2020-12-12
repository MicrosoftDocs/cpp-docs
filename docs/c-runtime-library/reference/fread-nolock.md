---
description: "Learn more about: _fread_nolock"
title: "_fread_nolock"
ms.date: "4/2/2020"
api_name: ["_fread_nolock", "_o__fread_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fread_nolock", "fread_nolock"]
helpviewer_keywords: ["reading data [C++], from input streams", "data [C++], reading from input stream", "fread_nolock function", "_fread_nolock function", "streams [C++], reading data from"]
ms.assetid: 60e4958b-1097-46f5-a77b-94af5e7dba40
---
# _fread_nolock

Reads data from a stream, without locking other threads.

## Syntax

```C
size_t _fread_nolock(
   void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### Parameters

*buffer*<br/>
Storage location for data.

*size*<br/>
Item size in bytes.

*count*<br/>
Maximum number of items to be read.

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

See [fread](fread.md).

## Remarks

This function is a non-locking version of **fread**. It is identical to **fread** except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fread_nolock**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fwrite](fwrite.md)<br/>
[_read](read.md)<br/>
