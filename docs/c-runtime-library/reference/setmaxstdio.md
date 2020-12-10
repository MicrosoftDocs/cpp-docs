---
description: "Learn more about: _setmaxstdio"
title: "_setmaxstdio"
ms.date: "05/21/2019"
api_name: ["_setmaxstdio"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["setmaxstdio", "_setmaxstdio"]
helpviewer_keywords: ["maximum open files", "_setmaxstdio function", "setmaxstdio function", "open files, maximum"]
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
---
# _setmaxstdio

Sets a maximum for the number of simultaneously open files at the stream I/O level.

## Syntax

```C
int _setmaxstdio(
   int new_max
);
```

### Parameters

*new_max*<br/>
New maximum for the number of simultaneously open files at the stream I/O level.

## Return Value

Returns *new_max* if successful; -1 otherwise.

If *new_max* is less than **_IOB_ENTRIES**, or greater than the maximum number of handles available in the operating system, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns -1 and sets **errno** to **EINVAL**.

For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_setmaxstdio** function changes the maximum value for the number of files that may be open simultaneously at the stream I/O level.

C run-time I/O now supports up to 8,192 files open simultaneously at the [low I/O level](../../c-runtime-library/low-level-i-o.md). This level includes files opened and accessed using the **_open**, **_read**, and **_write** family of I/O functions. By default, up to 512 files can be open simultaneously at the [stream I/O level](../../c-runtime-library/stream-i-o.md). This level includes files opened and accessed using the **fopen**, **fgetc**, and **fputc** family of functions. The limit of 512 open files at the stream I/O level can be increased to a maximum of 8,192 by use of the **_setmaxstdio** function.

Because stream I/O-level functions, such as **fopen**, are built on top of the low I/O-level functions, the maximum of 8,192 is a hard upper limit for the number of simultaneously open files accessed through the C run-time library.

> [!NOTE]
> This upper limit might be beyond what's supported by a particular Win32 platform and configuration.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_setmaxstdio**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See [_getmaxstdio](getmaxstdio.md) for an example of using **_setmaxstdio**.

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
