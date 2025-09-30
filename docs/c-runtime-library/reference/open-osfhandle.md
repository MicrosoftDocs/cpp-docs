---
description: "Learn more about: _open_osfhandle"
title: "_open_osfhandle"
ms.date: "4/2/2020"
api_name: ["_open_osfhandle", "_o__open_osfhandle"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_open_osfhandle", "open_osfhandle"]
helpviewer_keywords: ["open_osfhandle function", "file handles [C++], associating", "_open_osfhandle function"]
---
# `_open_osfhandle`

Associates a C run-time file descriptor with an existing operating system file handle.

## Syntax

```cpp
int _open_osfhandle (
   intptr_t osfhandle,
   int flags
);
```

### Parameters

*`osfhandle`*\
Operating system file handle.

*`flags`*\
Types of operations allowed.

## Return value

If successful, **`_open_osfhandle`** returns a C run-time file descriptor. Otherwise, it returns -1.

## Remarks

The **`_open_osfhandle`** function allocates a C run-time file descriptor. It associates this file descriptor with the operating system file handle specified by *`osfhandle`*. To avoid a compiler warning, cast the *`osfhandle`* argument from `HANDLE` to **`intptr_t`**. The *`flags`* argument is an integer expression formed from one or more of the manifest constants defined in `<fcntl.h>`. You can use the bitwise "or" (`|`) operator to combine two or more manifest constants to form the *`flags`* argument.

These manifest constants are defined in `<fcntl.h>`:

| Constant | Description |
|--|--|
| `_O_APPEND` | Positions a file pointer to the end of the file before every write operation. |
| `_O_RDONLY` | Opens the file for reading only. |
| `_O_TEXT` | Opens the file in ANSI text (translated) mode. |
| `_O_WTEXT` | Opens the file in Unicode (translated UTF-16) mode. |

The **`_open_osfhandle`** call transfers ownership of the Win32 file handle to the file descriptor. To close a file opened by using **`_open_osfhandle`**, call [`_close`](close.md). The underlying OS file handle is also closed by a call to **`_close`**. Don't call the Win32 function `CloseHandle` on the original handle. If the file descriptor is owned by a `FILE *` stream, then a call to [`fclose`](fclose-fcloseall.md) closes both the file descriptor and the underlying handle. In this case, don't call **`_close`** on the file descriptor or `CloseHandle` on the original handle.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_open_osfhandle`** | `<io.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[File handling](../file-handling.md)\
[`_get_osfhandle`](get-osfhandle.md)
