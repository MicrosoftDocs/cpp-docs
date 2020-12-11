---
description: "Learn more about: _fread_nolock_s"
title: "_fread_nolock_s2"
ms.date: "4/2/2020"
api_name: ["_fread_nolock_s", "_o__fread_nolock_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fread_nolock_s", "stdio/_fread_nolock_s"]
ms.assetid: 5badb9ab-11df-4e17-8162-30bda2a4572e
---
# _fread_nolock_s

Reads data from a stream, without locking other threads. This version of [fread_nolock](fread-nolock.md) has security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
size_t _fread_nolock_s(
   void *buffer,
   size_t bufferSize,
   size_t elementSize,
   size_t elementCount,
   FILE *stream
);
```

### Parameters

*buffer*<br/>
Storage location for data.

*bufferSize*<br/>
Size of the destination buffer in bytes.

*elementSize*<br/>
Size of the item to read in bytes.

*elementCount*<br/>
Maximum number of items to be read.

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

See [fread_s](fread-s.md).

## Remarks

This function is a non-locking version of **fread_s**. It is identical to **fread_s** except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fread_nolock_s**|C: \<stdio.h>; C++: \<cstdio> or \<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fwrite](fwrite.md)<br/>
[_read](read.md)<br/>
