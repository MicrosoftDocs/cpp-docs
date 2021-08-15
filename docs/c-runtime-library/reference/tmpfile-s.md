---
description: "Learn more about: tmpfile_s"
title: "tmpfile_s"
ms.date: "4/2/2020"
api_name: ["tmpfile_s", "_o_tmpfile_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["tmpfile_s"]
helpviewer_keywords: ["temporary files", "tmpfile_s function", "temporary files, creating"]
ms.assetid: 50879c69-215e-425a-a2a3-8b5467121eae
---
# tmpfile_s

Creates a temporary file. It is a version of [tmpfile](tmpfile.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t tmpfile_s(
   FILE** pFilePtr
);
```

### Parameters

*pFilePtr*<br/>
The address of a pointer to store the address of the generated pointer to a stream.

## Return Value

Returns 0 if successful, an error code on failure.

### Error Conditions

|*pFilePtr*|**Return Value**|**Contents of**  *pFilePtr*|
|----------------|----------------------|---------------------------------|
|**NULL**|**EINVAL**|not changed|

If the above parameter validation error occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the return value is **EINVAL**.

## Remarks

The **tmpfile_s** function creates a temporary file and puts a pointer to that stream in the *pFilePtr* argument. The temporary file is created in the root directory. To create a temporary file in a directory other than the root, use [tmpnam_s](tmpnam-s-wtmpnam-s.md) or [tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md) in conjunction with [fopen](fopen-wfopen.md).

If the file cannot be opened, **tmpfile_s** writes **NULL** to the *pFilePtr* parameter. This temporary file is automatically deleted when the file is closed, when the program terminates normally, or when **_rmtmp** is called, assuming that the current working directory does not change. The temporary file is opened in **w+b** (binary read/write) mode.

Failure can occur if you attempt more than **TMP_MAX_S** (see STDIO.H) calls with **tmpfile_s**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**tmpfile_s**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

> [!NOTE]
> This example may require administrative privileges to run on Windows.

```C
// crt_tmpfile_s.c
// This program uses tmpfile_s to create a
// temporary file, then deletes this file with _rmtmp.
//

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char tempstring[] = "String to be written";
   int  i;
   errno_t err;

   // Create temporary files.
   for( i = 1; i <= 3; i++ )
   {
      err = tmpfile_s(&stream);
      if( err )
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
