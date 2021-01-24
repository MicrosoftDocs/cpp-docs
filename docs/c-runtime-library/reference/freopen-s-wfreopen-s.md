---
description: "Learn more about: freopen_s, _wfreopen_s"
title: "freopen_s, _wfreopen_s"
ms.date: "4/2/2020"
api_name: ["_wfreopen_s", "freopen_s", "_o__wfreopen_s", "_o_freopen_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["freopen_s", "_tfreopen_s", "_wfreopen_s"]
helpviewer_keywords: ["_tfreopen_s function", "_wfreopen_s function", "file pointers [C++], reassigning", "tfreopen_s function", "wfreopen_s function", "freopen_s function"]
ms.assetid: ad25a4da-6ad4-476b-a86d-660b221ca84d
---
# freopen_s, _wfreopen_s

Reassigns a file pointer. These versions of [freopen, _wfreopen](freopen-wfreopen.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t freopen(
   FILE** pFile,
   const char *path,
   const char *mode,
   FILE *stream
);
errno_t _wfreopen(
   FILE** pFile,
   const wchar_t *path,
   const wchar_t *mode,
   FILE *stream
);
```

### Parameters

*pFile*<br/>
A pointer to the file pointer to be provided by the call.

*path*<br/>
Path of new file.

*mode*<br/>
Type of access permitted.

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

Each of these functions returns an error code. If an error occurs, the original file is closed.

## Remarks

The **freopen_s** function closes the file currently associated with *stream* and reassigns *stream* to the file specified by *path*. **_wfreopen_s** is a wide-character version of **_freopen_s**; the *path* and *mode* arguments to **_wfreopen_s** are wide-character strings. **_wfreopen_s** and **_freopen_s** behave identically otherwise.

If any of *pFile*, *path*, *mode*, or *stream* are **NULL**, or if *path* is an empty string, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tfreopen_s**|**freopen_s**|**freopen_s**|**_wfreopen_s**|

**freopen_s** is typically used to redirect the pre-opened files **stdin**, **stdout**, and **stderr** to files specified by the user. The new file associated with *stream* is opened with *mode*, which is a character string specifying the type of access requested for the file, as follows:

|*mode*|Access|
|-|-|
| **"r"** | Opens for reading. If the file does not exist or cannot be found, the **freopen_s** call fails. |
| **"w"** | Opens an empty file for writing. If the given file exists, its contents are destroyed. |
| **"a"** | Opens for writing at the end of the file (appending) without removing the end-of-file (EOF) marker before new data is written to the file. Creates the file if it does not exist. |
| **"r+"** | Opens for both reading and writing. The file must exist. |
| **"w+"** | Opens an empty file for both reading and writing. If the file exists, its contents are destroyed. |
| **"a+"** | Opens for reading and appending. The appending operation includes the removal of the EOF marker before new data is written to the file. The EOF marker is not restored after writing is completed. Creates the file if it does not exist. |

Use the **"w"** and **"w+"** types with care, as they can destroy existing files.

When a file is opened with the **"a"** or **"a+"** access type, all write operations take place at the end of the file. Although the file pointer can be repositioned using [fseek](fseek-fseeki64.md) or [rewind](rewind.md), the file pointer is always moved back to the end of the file before any write operation is carried out. Thus, existing data cannot be overwritten.

The **"a"** mode does not remove the EOF marker before appending to the file. After appending has occurred, the MS-DOS TYPE command only shows data up to the original EOF marker and not any data appended to the file. The **"a+"** mode does remove the EOF marker before appending to the file. After appending, the MS-DOS TYPE command shows all data in the file. The **"a+"** mode is required for appending to a stream file that is terminated with the CTRL+Z EOF marker.

When the **"r+"**, **"w+"**, or **"a+"** access type is specified, both reading and writing are allowed (the file is said to be open for "update"). However, when you switch between reading and writing, there must be an intervening [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md), or [rewind](rewind.md) operation. The current position can be specified for the [fsetpos](fsetpos.md) or [fseek](fseek-fseeki64.md) operation, if desired. In addition to the above values, one of the following characters may be included in the *mode* string to specify the translation mode for new lines.

|*mode* modifier|Translation mode|
|-|-|
| **t** | Open in text (translated) mode. |
| **b** | Open in binary (untranslated) mode; translations involving carriage-return and line feed characters are suppressed. |

In text (translated) mode, carriage return-line feed (CR-LF) combinations are translated into single line feed (LF) characters on input; LF characters are translated to CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading or for writing and reading with **"a+"**, the run-time library checks for a CTRL+Z at the end of the file and removes it, if possible. This is done because using [fseek](fseek-fseeki64.md) and [ftell](ftell-ftelli64.md) to move within a file may cause [fseek](fseek-fseeki64.md) to behave improperly near the end of the file. The **t** option is a Microsoft extension that should not be used where ANSI portability is desired.

If **t** or **b** is not given in *mode*, the default translation mode is defined by the global variable [_fmode](../../c-runtime-library/fmode.md). If **t** or **b** is prefixed to the argument, the function fails and returns **NULL**.

For a discussion of text and binary modes, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**freopen_s**|\<stdio.h>|
|**_wfreopen_s**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_freopen_s.c
// This program reassigns stderr to the file
// named FREOPEN.OUT and writes a line to that file.

#include <stdio.h>
#include <stdlib.h>

FILE *stream;

int main( void )
{
   errno_t err;
   // Reassign "stderr" to "freopen.out":
   err = freopen_s( &stream, "freopen.out", "w", stderr );

   if( err != 0 )
      fprintf( stdout, "error on freopen\n" );
   else
   {
      fprintf( stdout, "successfully reassigned\n" ); fflush( stdout );
      fprintf( stream, "This will go to the file 'freopen.out'\n" );
      fclose( stream );
   }
   system( "type freopen.out" );
}
```

```Output
successfully reassigned
This will go to the file 'freopen.out'
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[_fileno](fileno.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
