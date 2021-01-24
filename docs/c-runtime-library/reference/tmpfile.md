---
description: "Learn more about: tmpfile"
title: "tmpfile"
ms.date: "11/04/2016"
api_name: ["tmpfile"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["tmpfile"]
helpviewer_keywords: ["temporary files", "tmpfile function", "temporary files, creating"]
ms.assetid: c4a4dc24-70da-438d-ae4e-98352d88e375
---
# tmpfile

Creates a temporary file. This function is deprecated because a more secure version is available; see [tmpfile_s](tmpfile-s.md).

## Syntax

```C
FILE *tmpfile( void );
```

## Return Value

If successful, **tmpfile** returns a stream pointer. Otherwise, it returns a **NULL** pointer.

## Remarks

The **tmpfile** function creates a temporary file and returns a pointer to that stream. The temporary file is created in the root directory. To create a temporary file in a directory other than the root, use [tmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md) or [tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md) in conjunction with [fopen](fopen-wfopen.md).

If the file cannot be opened, **tmpfile** returns a **NULL** pointer. This temporary file is automatically deleted when the file is closed, when the program terminates normally, or when **_rmtmp** is called, assuming that the current working directory does not change. The temporary file is opened in **w+b** (binary read/write) mode.

Failure can occur if you attempt more than TMP_MAX (see STDIO.H) calls with **tmpfile**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**tmpfile**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

> [!NOTE]
> This example requires administrative privileges to run on Windows Vista.

```C
// crt_tmpfile.c
// compile with: /W3
// This program uses tmpfile to create a
// temporary file, then deletes this file with _rmtmp.
#include <stdio.h>

int main( void )
{
   FILE *stream;
   int  i;

   // Create temporary files.
   for( i = 1; i <= 3; i++ )
   {
      if( (stream = tmpfile()) == NULL ) // C4996
      // Note: tmpfile is deprecated; consider using tmpfile_s instead
         perror( "Could not open new temporary file\n" );
      else
         printf( "Temporary file %d was created\n", i );
   }

   // Remove temporary files.
   printf( "%d temporary files deleted\n", _rmtmp() );
}
```

```Output
Temporary file 1 was created
Temporary file 2 was created
Temporary file 3 was created
3 temporary files deleted
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_rmtmp](rmtmp.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
