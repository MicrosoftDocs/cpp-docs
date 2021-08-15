---
description: "Learn more about: _get_osfhandle"
title: "_get_osfhandle"
ms.date: "4/2/2020"
api_name: ["_get_osfhandle", "_o__get_osfhandle"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_osfhandle", "_get_osfhandle"]
helpviewer_keywords: ["operating systems, getting file handles", "get_osfhandle function", "_get_osfhandle function", "file handles [C++], operating system"]
ms.assetid: 0bdd728a-4fd8-410b-8c9f-01a121135196
---
# _get_osfhandle

Retrieves the operating-system file handle that is associated with the specified file descriptor.

## Syntax

```C
intptr_t _get_osfhandle(
   int fd
);
```

### Parameters

*fd*<br/>
An existing file descriptor.

## Return Value

Returns an operating-system file handle if *fd* is valid. Otherwise, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, it returns **INVALID_HANDLE_VALUE** (-1). It also sets **errno** to **EBADF**, indicating an invalid file handle. To avoid a warning when the result is used as a Win32 file handle, cast it to a **HANDLE** type.

> [!NOTE]
> When **stdin**, **stdout**, and **stderr** aren't associated with a stream (for example, in a Windows application without a console window), the file descriptor values for these streams are returned from [_fileno](fileno.md) as the special value -2. Similarly, if you use a 0, 1, or 2 as the file descriptor parameter instead of the result of a call to **_fileno**, **_get_osfhandle** also returns the special value -2 when the file descriptor is not associated with a stream, and does not set **errno**. However, this is not a valid file handle value, and subsequent calls that attempt to use it are likely to fail.

For more information about **EBADF** and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

To close a file whose operating system (OS) file handle is obtained by **_get_osfhandle**, call [_close](close.md) on the file descriptor *fd*. Never call **CloseHandle** on the return value of this function. The underlying OS file handle is owned by the *fd* file descriptor, and is closed when [_close](close.md) is called on *fd*. If the file descriptor is owned by a `FILE *` stream, then calling [fclose](fclose-fcloseall.md) on that `FILE *` stream closes both the file descriptor and the underlying OS file handle. In this case, don't call [_close](close.md) on the file descriptor.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_osfhandle**|\<io.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[\_open_osfhandle](open-osfhandle.md)
