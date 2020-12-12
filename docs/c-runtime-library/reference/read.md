---
description: "Learn more about: _read"
title: "_read"
ms.date: "4/2/2020"
api_name: ["_read", "_o__read"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_read"]
helpviewer_keywords: ["data [CRT]", "_read function", "read function", "data [C++], reading", "reading data [C++]", "files [C++], reading"]
ms.assetid: 2ce9c433-57ad-47fe-9ac1-4a7d4c883d30
---
# _read

Reads data from a file.

## Syntax

```C
int _read(
   int const fd,
   void * const buffer,
   unsigned const buffer_size
);
```

### Parameters

*fd*<br/>
File descriptor referring to the open file.

*buffer*<br/>
Storage location for data.

*buffer_size*<br/>
Maximum number of bytes to read.

## Return Value

**_read** returns the number of bytes read, which might be less than *buffer_size* if there are fewer than *buffer_size* bytes left in the file, or if the file was opened in text mode. In text mode, each carriage return-line feed pair `\r\n` is replaced with a single line feed character `\n`. Only the single line feed character is counted in the return value. The replacement does not affect the file pointer.

If the function tries to read at end of file, it returns 0. If *fd* is not valid, the file isn't open for reading, or the file is locked, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets **errno** to **EBADF**.

If *buffer* is **NULL**, or if *buffer_size* > **INT_MAX**, the invalid parameter handler is invoked. If execution is allowed to continue, the function returns -1 and **errno** is set to **EINVAL**.

For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_read** function reads a maximum of *buffer_size* bytes into *buffer* from the file associated with *fd*. The read operation begins at the current position of the file pointer associated with the given file. After the read operation, the file pointer points to the next unread character.

If the file was opened in text mode, the read terminates when **_read** encounters a CTRL+Z character, which is treated as an end-of-file indicator. Use [_lseek](lseek-lseeki64.md) to clear the end-of-file indicator.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_read**|\<io.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_read.c
/* This program opens a file named crt_read.txt
* and tries to read 60,000 bytes from
* that file using _read. It then displays the
* actual number of bytes read.
*/

#include <fcntl.h>      /* Needed only for _O_RDWR definition */
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <share.h>

char buffer[60000];

int main( void )
{
   int fh, bytesread;
   unsigned int nbytes = 60000;

   /* Open file for input: */
   if ( _sopen_s( &fh, "crt_read.txt", _O_RDONLY, _SH_DENYNO, 0 ))
   {
      perror( "open failed on input file" );
      exit( 1 );
   }

   /* Read in input: */
   if (( bytesread = _read( fh, buffer, nbytes )) <= 0 )
      perror( "Problem reading file" );
   else
      printf( "Read %u bytes from file\n", bytesread );

   _close( fh );
}
```

### Input: crt_read.txt

```Input
Line one.
Line two.
```

### Output

```Output
Read 19 bytes from file
```

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fread](fread.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_write](write.md)<br/>
