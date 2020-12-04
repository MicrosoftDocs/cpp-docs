---
description: "Learn more about: _commit"
title: "_commit"
ms.date: "4/2/2020"
api_name: ["_commit", "_o__commit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_commit", "commit"]
helpviewer_keywords: ["files [C++], flushing", "flushing files to disk", "commit function", "_commit function", "committing files to disk"]
ms.assetid: d0c74d3a-4f2d-4fb0-b140-2d687db3d233
---
# _commit

Flushes a file directly to disk.

## Syntax

```C
int _commit(
   int fd
);
```

### Parameters

*fd*<br/>
File descriptor referring to the open file.

## Return Value

**_commit** returns 0 if the file was successfully flushed to disk. A return value of -1 indicates an error.

## Remarks

The **_commit** function forces the operating system to write the file associated with *fd* to disk. This call ensures that the specified file is flushed immediately, not at the operating system's discretion.

If *fd* is an invalid file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and **errno** is set to **EBADF**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**_commit**|\<io.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_read](read.md)<br/>
[_write](write.md)<br/>
