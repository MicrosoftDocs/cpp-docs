---
description: "Learn more about: _tell, _telli64"
title: "_tell, _telli64"
ms.date: "4/2/2020"
api_name: ["_telli64", "_tell", "_o__tell", "_o__telli64"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["telli64", "_telli64", "_tell"]
helpviewer_keywords: ["tell function", "file pointers [C++], getting", "_tell function", "file pointers [C++]", "telli64 function", "_telli64 function"]
ms.assetid: 1500e8f9-8fec-4253-9eec-ec66125dfc9b
---
# _tell, _telli64

Get the position of the file pointer.

## Syntax

```C
long _tell(
   int handle
);
__int64 _telli64(
   int handle
);
```

### Parameters

*handle*<br/>
File descriptor referring to open file.

## Return Value

The current position of the file pointer. On devices incapable of seeking, the return value is undefined.

A return value of -1L indicates an error. If *handle* is an invalid file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EBADF** and return -1L.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on this, and other, return codes.

## Remarks

The **_tell** function gets the current position of the file pointer (if any) associated with the *handle* argument. The position is expressed as the number of bytes from the beginning of the file. For the **_telli64** function, this value is expressed as a 64-bit integer.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_tell**, **_telli64**|\<io.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_tell.c
// This program uses _tell to tell the
// file pointer position after a file read.
//

#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <share.h>
#include <string.h>

int main( void )
{
   int  fh;
   char buffer[500];

   if ( _sopen_s( &fh, "crt_tell.txt", _O_RDONLY, _SH_DENYNO, 0) )
   {
      char buff[50];
      _strerror_s( buff, sizeof(buff), NULL );
      printf( buff );
      exit( -1 );
   }

   if( _read( fh, buffer, 500 ) > 0 )
      printf( "Current file position is: %d\n", _tell( fh ) );
   _close( fh );
}
```

### Input: crt_tell.txt

```Input
Line one.
Line two.
```

### Output

```Output
Current file position is: 20
```

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
