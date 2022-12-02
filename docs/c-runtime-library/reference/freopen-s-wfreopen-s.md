---
description: "Learn more about: freopen_s, _wfreopen_s"
title: "freopen_s, _wfreopen_s"
ms.date: "2/23/2021"
api_name: ["_wfreopen_s", "freopen_s", "_o__wfreopen_s", "_o_freopen_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["freopen_s", "_tfreopen_s", "_wfreopen_s"]
helpviewer_keywords: ["_tfreopen_s function", "_wfreopen_s function", "file pointers [C++], reassigning", "tfreopen_s function", "wfreopen_s function", "freopen_s function"]
---
# `freopen_s`, `_wfreopen_s`

Closes the file currently associated with `oldStream` and reassigns `stream` to the file specified by `fileName`.

These versions of [`freopen`, `_wfreopen`](freopen-wfreopen.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t freopen_s(
   FILE ** stream,
   const char * fileName,
   const char * mode,
   FILE* oldStream
);

errno_t _wfreopen_s(
   FILE ** stream,
   const wchar_t * fileName,
   const wchar_t * mode,
   FILE * oldStream
);
```

### Parameters

*`stream`*\
An out parameter that will point to the reopened stream when the function returns.

*`fileName`*\
Path of the file to reopen.

*`mode`*\
The mode for the reopened stream.

*`oldStream`*\
The stream to reopen. It's flushed and any files associated with it are closed.

## Return value

Zero on success; otherwise an error code. If an error occurs, the original file is closed, and `NULL` is written to *`stream`* unless *`stream`* is also `NULL`

For more information about error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`freopen_s`** function is typically used to attach the pre-opened streams associated with `stdin`, `stdout` and `stderr` to another file.

The **`freopen_s`** function closes the file currently associated with *`stream`* and reassigns *`stream`* to the file specified by *`path`*. **`_wfreopen_s`** is a wide-character version of **`freopen_s`**; the *`path`* and *`mode`* arguments to **`_wfreopen_s`** are wide-character strings. **`_wfreopen_s`** and **`freopen_s`** behave identically otherwise.

If any of *`pFile`*, *`path`*, *`mode`*, or *`stream`* are `NULL`, or if *`path`* is an empty string, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and return `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tfreopen_s`** | **`freopen_s`** | **`freopen_s`** | **`_wfreopen_s`** |

**`freopen_s`** is typically used to redirect the pre-opened files **`stdin`**, **`stdout`**, and **`stderr`** to files specified by the user. The new file associated with *`stream`* is opened with *`mode`*, which is a character string specifying the type of access requested for the file, as follows:

| *`mode`* | Access |
|---|---|
| **`"r"`** | Opens for reading. If the file doesn't exist or can't be found, the **`freopen_s`** call fails. |
| **`"w"`** | Opens an empty file for writing. If the given file exists, its contents are destroyed. |
| **`"a"`** | Opens for writing at the end of the file (appending) without removing the end-of-file (EOF) marker before new data is written to the file. Creates the file if it doesn't exist. |
| **`"r+"`** | Opens for both reading and writing. The file must exist. |
| **`"w+"`** | Opens an empty file for both reading and writing. If the file exists, its contents are destroyed. |
| **`"a+"`** | Opens for reading and appending. The appending operation includes the removal of the EOF marker before new data is written to the file. The EOF marker isn't restored after writing is completed. Creates the file if it doesn't exist. |

Use the **`"w"`** and **`"w+"`** types with care, as they can destroy existing files. Starting in C11, you can append **`"x"`** to **`"w"`** or **`"w+"`** to cause the function to fail if the file exists, instead of overwriting it.

When a file is opened with the **`"a"`** or **`"a+"`** access type, all write operations take place at the end of the file. Although the file pointer can be repositioned using [`fseek`](fseek-fseeki64.md) or [`rewind`](rewind.md), the file pointer is always moved back to the end of the file before any write operation is carried out. Thus, existing data can't be overwritten.

The **`"a"`** mode doesn't remove the EOF marker before appending to the file. After appending has occurred, the MS-DOS TYPE command only shows data up to the original EOF marker and not any data appended to the file. The **`"a+"`** mode does remove the EOF marker before appending to the file. After appending, the MS-DOS TYPE command shows all data in the file. The **`"a+"`** mode is required for appending to a stream file that is terminated with the CTRL+Z EOF marker.

When the **`"r+"`**, **`"w+"`**, or **`"a+"`** access type is specified, both reading and writing are allowed (the file is said to be open for "update"). However, when you switch between reading and writing, there must be an intervening [`fsetpos`](fsetpos.md), [`fseek`](fseek-fseeki64.md), or [`rewind`](rewind.md) operation. The current position can be specified for the [`fsetpos`](fsetpos.md) or [`fseek`](fseek-fseeki64.md) operation, if you want. In addition to the above values, one of the following characters may be included in the *`mode`* string to specify the translation mode for new lines.

| *`mode`* modifier | Translation mode |
|---|---|
| **`t`** | Open in text (translated) mode. |
| **`b`** | Open in binary (untranslated) mode; translations involving carriage-return and line feed characters are suppressed. |

In text (translated) mode, carriage return-line feed (CR-LF) combinations are translated into single line feed (LF) characters on input; LF characters are translated to CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading or for writing and reading with **`"a+"`**, the run-time library checks for a CTRL+Z at the end of the file and removes it, if possible. It's removed because using [`fseek`](fseek-fseeki64.md) and [`ftell`](ftell-ftelli64.md) to move within a file may cause [`fseek`](fseek-fseeki64.md) to behave improperly near the end of the file. Don't use the **`t`** option when you want ANSI portability because it's a Microsoft extension.

If **`t`** or **`b`** isn't given in *`mode`*, the default translation mode is defined by the global variable [`_fmode`](../fmode.md). If **`t`** or **`b`** is prefixed to the argument, the function fails and returns `NULL`.

For a discussion of text and binary modes, see [Text and binary mode file I/O](../text-and-binary-mode-file-i-o.md).

## Requirements

| Function | Required header |
|---|---|
| **`freopen_s`** | `<stdio.h>` |
| **`_wfreopen_s`** | `<stdio.h>` or `<wchar.h>` |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **`stdin`**, **`stdout`**, and **`stderr`**, must be redirected before C run-time functions can use them in UWP apps.

For more compatibility information, see [Compatibility](../compatibility.md).

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
      fprintf( stdout, "successfully reassigned\n" ); 
      fflush( stdout );
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

[`Stream I/O`](../stream-i-o.md)\
[`freopen`, `_wfreopen`](freopen-wfreopen.md)\
[`fclose`, `_fcloseall`](fclose-fcloseall.md)\
[`_fdopen`, `_wfdopen`](fdopen-wfdopen.md)\
[`_fileno`](fileno.md)\
[`fopen`, `_wfopen`](fopen-wfopen.md)\
[`_open`, `_wopen`](open-wopen.md)\
[`_setmode`](setmode.md)
