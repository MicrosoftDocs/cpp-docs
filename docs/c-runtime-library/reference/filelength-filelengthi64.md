---
title: "_filelength, _filelengthi64"
ms.date: "11/04/2016"
apiname: ["_filelengthi64", "_filelength"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_filelength", "_filelengthi64", "filelengthi64"]
helpviewer_keywords: ["filelengthi64 function", "lengths, file", "filelength function", "_filelength function", "files [C++], length", "_filelengthi64 function"]
ms.assetid: 3ab83d5a-543c-4079-b9d9-0abfc7da0275
---
# _filelength, _filelengthi64

Gets the length of a file.

## Syntax

```C
long _filelength(
   int fd
);
__int64 _filelengthi64(
   int fd
);
```

### Parameters

*fd*<br/>
Target the file descriptor.

## Return Value

Both **_filelength** and **_filelengthi64** return the file length, in bytes, of the target file associated with *fd*. If *fd* is an invalid file descriptor, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, both functions return -1L to indicate an error and set **errno** to **EBADF**.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_filelength**|\<io.h>|
|**_filelengthi64**|\<io.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_chsize](chsize.md).

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_chsize](chsize.md)<br/>
[_fileno](fileno.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_stat, _wstat Functions](stat-functions.md)<br/>
[_stat, _wstat Functions](stat-functions.md)<br/>
