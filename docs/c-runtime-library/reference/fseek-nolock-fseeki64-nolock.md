---
description: "Learn more about: _fseek_nolock, _fseeki64_nolock"
title: "_fseek_nolock, _fseeki64_nolock"
ms.date: "4/2/2020"
api_name: ["_fseek_nolock", "_fseeki64_nolock", "_o__fseek_nolock", "_o__fseeki64_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fseek_nolock", "_fseeki64_nolock", "fseek_nolock", "fseeki64_nolock"]
helpviewer_keywords: ["_fseek_nolock function", "fseeki64_nolock function", "file pointers [C++], moving", "fseek_nolock function", "_fseeki64_nolock function", "seek file pointers"]
ms.assetid: 2dd4022e-b715-462b-b935-837561605a02
---
# _fseek_nolock, _fseeki64_nolock

Moves the file pointer to a specified location.

## Syntax

```C
int _fseek_nolock(
   FILE *stream,
   long offset,
   int origin
);
int _fseeki64_nolock(
   FILE *stream,
   __int64 offset,
   int origin
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

*offset*<br/>
Number of bytes from *origin*.

*origin*<br/>
Initial position.

## Return Value

Same as [fseek](fseek-fseeki64.md) and [_fseeki64](fseek-fseeki64.md), respectively.

## Remarks

These functions are the non-locking versions of [fseek](fseek-fseeki64.md) and [_fseeki64](fseek-fseeki64.md), respectively. These are identical to [fseek](fseek-fseeki64.md) and [_fseeki64](fseek-fseeki64.md) except that they are not protected from interference by other threads. These functions might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fseek_nolock**, **_fseeki64_nolock**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
[rewind](rewind.md)<br/>
