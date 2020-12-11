---
description: "Learn more about: fclose, _fcloseall"
title: "fclose, _fcloseall"
ms.date: "4/2/2020"
api_name: ["fclose", "_fcloseall", "_o__fcloseall", "_o_fclose"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fclose", "_fcloseall"]
helpviewer_keywords: ["fclose function", "streams, closing", "_fcloseall function"]
ms.assetid: c3c6ea72-92c6-450a-a33e-3e568d2784a4
---
# fclose, _fcloseall

Closes a stream (**fclose**) or closes all open streams (**_fcloseall**).

## Syntax

```C
int fclose(
   FILE *stream
);
int _fcloseall( void );
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

**fclose** returns 0 if the stream is successfully closed. **_fcloseall** returns the total number of streams closed. Both functions return **EOF** to indicate an error.

## Remarks

The **fclose** function closes *stream*. If *stream* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **fclose** sets **errno** to **EINVAL** and returns **EOF**. It is recommended that the *stream* pointer always be checked prior to calling this function.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.

The **_fcloseall** function closes all open streams except **stdin**, **stdout**, **stderr** (and, in MS-DOS, **_stdaux** and **_stdprn**). It also closes and deletes any temporary files created by **tmpfile**. In both functions, all buffers associated with the stream are flushed prior to closing. System-allocated buffers are released when the stream is closed. Buffers assigned by the user with **setbuf** and **setvbuf** are not automatically released.

**Note:** When these functions are used to close a stream, the underlying file descriptor and OS file handle (or socket) are closed, as well as the stream. Thus, if the file was originally opened as a file handle or file descriptor and is closed with **fclose**, do not also call **_close** to close the file descriptor; do not call the Win32 function **CloseHandle** to close the file handle.

**fclose** and **_fcloseall** include code to protect against interference from other threads. For non-locking version of a **fclose**, see **_fclose_nolock**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fclose**|\<stdio.h>|
|**_fcloseall**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [fopen](fopen-wfopen.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_close](close.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
