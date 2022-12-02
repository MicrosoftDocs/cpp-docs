---
description: "Learn more about: fsetpos"
title: "fsetpos"
ms.date: "4/2/2020"
api_name: ["fsetpos", "_o_fsetpos"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fsetpos"]
helpviewer_keywords: ["streams, setting position indicators", "fsetpos function"]
ms.assetid: 6d19ff48-1a2b-47b3-9f23-ed0a47b5a46e
---
# `fsetpos`

Sets the stream-position indicator.

## Syntax

```C
int fsetpos(
   FILE *stream,
   const fpos_t *pos
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure.

*`pos`*\
Position-indicator storage.

## Return value

If successful, **`fsetpos`** returns 0. On failure, the function returns a nonzero value and sets `errno` to one of the following manifest constants (defined in ERRNO.H): `EBADF`, which means the file isn't accessible or the object that *`stream`* points to isn't a valid file structure; or `EINVAL`, which means an invalid value for *`stream`* or *`pos`* was passed. If an invalid parameter is passed in, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md).

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`fsetpos`** function sets the file-position indicator for *`stream`* to the value of *`pos`*, which is obtained in a prior call to `fgetpos` against *`stream`*. The function clears the end-of-file indicator and undoes any effects of [`ungetc`](ungetc-ungetwc.md) on *`stream`*. After a call to **`fsetpos`**, the next operation on *`stream`* may be either input or output.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`fsetpos`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`fgetpos`](fgetpos.md).

## See also

[Stream I/O](../stream-i-o.md)\
[`fgetpos`](fgetpos.md)
