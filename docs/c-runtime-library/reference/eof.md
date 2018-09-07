---
title: "_eof | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_eof"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_eof"]
dev_langs: ["C++"]
helpviewer_keywords: ["eof function", "end of file, testing for", "_eof function", "files [C++], end of", "testing, for end-of-file", "end of file"]
ms.assetid: 265703f4-d07e-4005-abf3-b1d0cdd9e0b0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _eof

Tests for end of file (EOF).

## Syntax

```C
int _eof(
   int fd
);
```

### Parameters

*fd*<br/>
File descriptor referring to the open file.

## Return Value

**_eof** returns 1 if the current position is end of file, or 0 if it is not. A return value of -1 indicates an error; in this case, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EBADF**, which indicates an invalid file descriptor.

## Remarks

The **_eof** function determines whether the end of the file associated with *fd* has been reached.

## Requirements

|Function|Required header|Optional header|
|--------------|---------------------|---------------------|
|**_eof**|\<io.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_eof.c
// This program reads data from a file
// ten bytes at a time until the end of the
// file is reached or an error is encountered.
//
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <share.h>

int main( void )
{
   int  fh, count, total = 0;
   char buf[10];
   if( _sopen_s( &fh, "crt_eof.txt", _O_RDONLY, _SH_DENYNO, 0 ) )
   {
        perror( "Open failed");
        exit( 1 );
   }
   // Cycle until end of file reached:
   while( !_eof( fh ) )
   {
      // Attempt to read in 10 bytes:
      if( (count = _read( fh, buf, 10 )) == -1 )
      {
         perror( "Read error" );
         break;
      }
      // Total actual bytes read
      total += count;
   }
   printf( "Number of bytes read = %d\n", total );
   _close( fh );
}
```

### Input: crt_eof.txt

```Input
This file contains some text.
```

### Output

```Output
Number of bytes read = 29
```

## See also

[Error Handling](../../c-runtime-library/error-handling-crt.md)<br/>
[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[clearerr](clearerr.md)<br/>
[feof](feof.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
