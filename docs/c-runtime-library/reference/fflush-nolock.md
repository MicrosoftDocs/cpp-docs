---
description: "Learn more about: _fflush_nolock"
title: "_fflush_nolock"
ms.date: "4/2/2020"
api_name: ["_fflush_nolock", "_o__fflush_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fflush_nolock", "_fflush_nolock"]
helpviewer_keywords: ["fflush_nolock function", "_fflush_nolock function", "streams, flushing", "flushing"]
ms.assetid: 5e33c4a1-b10c-4001-ad01-210757919291
---
# _fflush_nolock

Flushes a stream without locking the thread.

## Syntax

```C
int _fflush_nolock(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

See [fflush](fflush.md).

## Remarks

This function is a non-locking version of **fflush**. It is identical to **fflush** except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fflush_nolock**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_flushall](flushall.md)<br/>
[setvbuf](setvbuf.md)<br/>
