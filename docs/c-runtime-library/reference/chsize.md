---
description: "Learn more about: _chsize"
title: "_chsize"
ms.date: "4/2/2020"
api_name: ["_chsize", "_o__chsize"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_chsize"]
helpviewer_keywords: ["size", "_chsize function", "size, changing file", "files [C++], changing size", "chsize function"]
ms.assetid: b3e881c5-7b27-4837-a3d4-c51591ab10ff
---
# _chsize

Changes the size of a file. A more secure version is available; see [_chsize_s](chsize-s.md).

## Syntax

```C
int _chsize(
   int fd,
   long size
);
```

### Parameters

*fd*<br/>
File descriptor referring to an open file.

*size*<br/>
New length of the file in bytes.

## Return Value

**_chsize** returns the value 0 if the file size is successfully changed. A return value of -1 indicates an error: **errno** is set to **EACCES** if the specified file is read-only or the specified file is locked against access, to **EBADF** if the descriptor is invalid, **ENOSPC** if no space is left on the device, or **EINVAL** if *size* is less than zero.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, return codes.

## Remarks

The **_chsize** function extends or truncates the file associated with *fd* to the length specified by *size*. The file must be open in a mode that permits writing. Null characters ('\0') are appended if the file is extended. If the file is truncated, all data from the end of the shortened file to the original length of the file is lost.

This function validates its parameters. If *size* is less than zero or *fd* is a bad file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_chsize**|\<io.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_chsize.c
// This program uses _filelength to report the size
// of a file before and after modifying it with _chsize.

#include <io.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <share.h>

int main( void )
{
   int fh, result;
   unsigned int nbytes = BUFSIZ;

   // Open a file
   if( _sopen_s( &fh, "data", _O_RDWR | _O_CREAT, _SH_DENYNO,
                 _S_IREAD | _S_IWRITE ) == 0 )
   {
      printf( "File length before: %ld\n", _filelength( fh ) );
      if( ( result = _chsize( fh, 329678 ) ) == 0 )
         printf( "Size successfully changed\n" );
      else
         printf( "Problem in changing the size\n" );
      printf( "File length after:  %ld\n", _filelength( fh ) );
      _close( fh );
   }
}
```

```Output
File length before: 0
Size successfully changed
File length after:  329678
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
