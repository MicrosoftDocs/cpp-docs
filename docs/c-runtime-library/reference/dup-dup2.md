---
description: "Learn more about: _dup, _dup2"
title: "_dup, _dup2"
ms.date: "4/2/2020"
api_name: ["_dup", "_dup2", "_o__dup", "_o__dup2"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_dup2", "_dup"]
helpviewer_keywords: ["_dup2 function", "dup function", "file handles [C++], duplicating", "file handles [C++], reassigning", "dup2 function", "_dup function"]
ms.assetid: 4d07e92c-0d76-4832-a770-dfec0e7a0cfa
---
# _dup, _dup2

Creates a second file descriptor for an open file (**_dup**), or reassigns a file descriptor (**_dup2**).

## Syntax

```C
int _dup( int fd );
int _dup2( int fd1, int fd2 );
```

### Parameters

*fd*, *fd1*<br/>
File descriptors referring to open file.

*fd2*<br/>
Any file descriptor.

## Return Value

**_dup** returns a new file descriptor. **_dup2** returns 0 to indicate success. If an error occurs, each function returns -1 and sets **errno** to **EBADF** if the file descriptor is invalid or to **EMFILE** if no more file descriptors are available. In the case of an invalid file descriptor, the function also invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_dup** and **_dup2** functions associate a second file descriptor with a currently open file. These functions can be used to associate a predefined file descriptor, such as that for **stdout**, with a different file. Operations on the file can be carried out using either file descriptor. The type of access allowed for the file is unaffected by the creation of a new descriptor. **_dup** returns the next available file descriptor for the given file. **_dup2** forces *fd2* to refer to the same file as *fd1*. If *fd2* is associated with an open file at the time of the call, that file is closed.

Both **_dup** and **_dup2** accept file descriptors as parameters. To pass a stream (`FILE *`) to either of these functions, use [_fileno](fileno.md). The **fileno** routine returns the file descriptor currently associated with the given stream. The following example shows how to associate **stderr** (defined as `FILE *` in Stdio.h) with a file descriptor:

```C
int cstderr = _dup( _fileno( stderr ));
```

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_dup**|\<io.h>|
|**_dup2**|\<io.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_dup.c
// This program uses the variable old to save
// the original stdout. It then opens a new file named
// DataFile and forces stdout to refer to it. Finally, it
// restores stdout to its original state.

#include <io.h>
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int old;
   FILE *DataFile;

   old = _dup( 1 );   // "old" now refers to "stdout"
                      // Note:  file descriptor 1 == "stdout"
   if( old == -1 )
   {
      perror( "_dup( 1 ) failure" );
      exit( 1 );
   }
   _write( old, "This goes to stdout first\n", 26 );
   if( fopen_s( &DataFile, "data", "w" ) != 0 )
   {
      puts( "Can't open file 'data'\n" );
      exit( 1 );
   }

   // stdout now refers to file "data"
   if( -1 == _dup2( _fileno( DataFile ), 1 ) )
   {
      perror( "Can't _dup2 stdout" );
      exit( 1 );
   }
   puts( "This goes to file 'data'\n" );

   // Flush stdout stream buffer so it goes to correct file
   fflush( stdout );
   fclose( DataFile );

   // Restore original stdout
   _dup2( old, 1 );
   puts( "This goes to stdout\n" );
   puts( "The file 'data' contains:" );
   _flushall();
   system( "type data" );
}
```

```Output
This goes to stdout first
This goes to stdout

The file 'data' contains:
This goes to file 'data'
```

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
