---
description: "Learn more about: ferror"
title: "ferror"
ms.date: "4/2/2020"
api_name: ["ferror", "_o_ferror"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["ferror"]
helpviewer_keywords: ["ferror function", "streams, testing for errors", "errors [C++], testing for stream"]
ms.assetid: 528a34bc-f2aa-4c3f-b89a-5b148e6864f7
---
# `ferror`

Tests for an error on a stream.

## Syntax

```C
int ferror(
   FILE *stream
);
```

### Parameters

*`stream`*\
Pointer to `FILE` structure.

## Return value

If no error has occurred on *`stream`*, **`ferror`** returns 0. Otherwise, it returns a nonzero value. If stream is `NULL`, **`ferror`** invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns 0.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`ferror`** routine (implemented both as a function and as a macro) tests for a reading or writing error on the file associated with *`stream`*. If an error has occurred, the error indicator for the stream remains set until the stream is closed or rewound, or until `clearerr` is called against it.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|---|---|
| **`ferror`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`feof`](feof.md).

## See also

[Error handling](../error-handling-crt.md)\
[Stream I/O](../stream-i-o.md)\
[`clearerr`](clearerr.md)\
[`_eof`](eof.md)\
[`feof`](feof.md)\
[`fopen`, `_wfopen`](fopen-wfopen.md)\
[`perror`, `_wperror`](perror-wperror.md)
