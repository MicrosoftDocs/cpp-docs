---
description: "Learn more about: _ftell_nolock, _ftelli64_nolock"
title: "_ftell_nolock, _ftelli64_nolock"
ms.date: "4/2/2020"
api_name: ["_ftelli64_nolock", "_ftell_nolock", "_o__ftell_nolock", "_o__ftelli64_nolock"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ftelli64_nolock", "ftelli64_nolock", "ftell_nolock", "_ftell_nolock"]
helpviewer_keywords: ["ftelli64_nolock function", "_ftelli64_nolock function", "_ftell_nolock function", "ftell_nolock function", "file pointers [C++], getting current position"]
ms.assetid: 84e68b0a-32f8-4c4a-90ad-3f2387685ede
---
# `_ftell_nolock`, `_ftelli64_nolock`

Gets the current position of a file pointer, without locking the thread.

## Syntax

```C
long _ftell_nolock(
   FILE *stream
);
__int64 _ftelli64_nolock(
   FILE *stream
);
```

### Parameters

*`stream`*\
Target the `FILE` structure.

## Return value

Same as `ftell` and `_ftelli64`. For more information, see [`ftell`, `_ftelli64`](ftell-ftelli64.md).

## Remarks

These functions are non-locking versions of `ftell` and `_ftelli64`, respectively. They're identical to `ftell` and `_ftelli64` except that they aren't protected from interference by other threads. These functions might be faster because they don't incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header | Optional header |
|---|---|---|
| **`ftell_nolock`** | \<stdio.h> | \<errno.h> |
| **`_ftelli64_nolock`** | \<stdio.h> | \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`fgetpos`](fgetpos.md)\
[`fseek`, `_fseeki64`](fseek-fseeki64.md)\
[`_lseek`, `_lseeki64`](lseek-lseeki64.md)\
[`ftell`, `_ftelli64`](ftell-ftelli64.md)
