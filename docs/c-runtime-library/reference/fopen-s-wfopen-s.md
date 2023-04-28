---
title: "fopen_s, _wfopen_s"
description: "Describes the API for `fopen_s` and `_wfopen_s`"
ms.date: 04/27/2023
api_name: ["_wfopen_s", "fopen_s", "_o__wfopen_s", "_o_fopen_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/fopen_s", "CORECRT_WSTDIO/_wfopen_s", "TCHAR/_tfopen_s", "fopen_s", "_wfopen_s", "_tfopen_s"]
helpviewer_keywords: ["_wfopen_s function", "opening files, for file I/O", "_tfopen_s function", "tfopen_s function", "wfopen_s function", "fopen_s function", "Unicode [C++], creating files", "Unicode [C++], writing files", "files [C++], opening", "Unicode [C++], files"]
---
# `fopen_s`, `_wfopen_s`

Opens a file. These versions of [`fopen`, `_wfopen`](fopen-wfopen.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t fopen_s(
   FILE** pFile,
   const char *filename,
   const char *mode
);
errno_t _wfopen_s(
   FILE** pFile,
   const wchar_t *filename,
   const wchar_t *mode
);
```

### Parameters

*`pFile`*\
A pointer to the file pointer that receives the pointer to the opened file.

*`filename`*\
The name of the file to open.

*`mode`*\
Type of access permitted.

## Return value

Zero if successful; an error code on failure. For more information about these error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

### Error conditions

| *`pFile`* | *`filename`* | *`mode`* | Return Value | Contents of *`pFile`* |
|--|--|--|--|--|
| `NULL` | any | any | `EINVAL` | unchanged |
| any | `NULL` | any | `EINVAL` | unchanged |
| any | any | `NULL` | `EINVAL` | unchanged |

## Remarks

The **`fopen_s`** and **`_wfopen_s`** functions can't open a file for sharing. If you need to share the file, use [`_fsopen` or `_wfsopen`](fsopen-wfsopen.md) with the appropriate sharing mode constant—for example, use `_SH_DENYNO` for read/write sharing.

The **`fopen_s`** function opens the file specified by *`filename`*. **`_wfopen_s`** is a wide-character version of **`fopen_s`** and the arguments to **`_wfopen_s`** are wide-character strings. **`_wfopen_s`** and **`fopen_s`** behave identically, otherwise.

**`fopen_s`** accepts paths that are valid on the file system at the point of execution; UNC paths and paths that involve mapped network drives are accepted by **`fopen_s`** as long as the system that's executing the code has access to the share or mapped network drive at the time of execution. When you construct paths for **`fopen_s`**, don't make assumptions about the availability of drives, paths, or network shares in the execution environment. You can use either forward slashes (/) or backslashes (\\) as the directory separators in a path.

These functions validate their parameters. If *`pFile`*, *`filename`*, or *`mode`* is a null pointer, these functions generate an invalid parameter exception, as described in [Parameter validation](../parameter-validation.md).

Always check the return value to see if the function succeeded before you do any further operations on the file. If an error occurs, the error code is returned, and the global variable `errno` is set. For more information, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

## Unicode support

**`fopen_s`** supports Unicode file streams. To open a new or existing Unicode file, pass a **`ccs`** flag that specifies the desired encoding to **`fopen_s`**, for example:

**`fopen_s(&fp, "newfile.txt", "w+, ccs=UNICODE");`**

Allowed values of the **`ccs`** flag are `UNICODE`, **`UTF-8`**, and **`UTF-16LE`**. If no value is specified for **`ccs`**, **`fopen_s`** uses ANSI encoding.

If the file already exists and is opened for reading or appending, the byte order mark (BOM), if present in the file, determines the encoding. The BOM encoding takes precedence over the encoding that's specified by the **`ccs`** flag. The **`ccs`** encoding is only used when no BOM is present or if the file is a new file.

> [!NOTE]
> BOM-detection only applies to files that are opened in Unicode mode; that is, by passing the **`ccs`** flag.

The following table summarizes the modes for various **`ccs`** flag values that are given to **`fopen_s`** and for BOMs in the file.

### Encodings used based on `ccs` flag and BOM

| `ccs` flag | No BOM (or new file) | BOM: UTF-8 | BOM: UTF-16 |
|--|--|--|--|
| `UNICODE` | **`UTF-8`** | **`UTF-8`** | **`UTF-16LE`** |
| **`UTF-8`** | **`UTF-8`** | **`UTF-8`** | **`UTF-16LE`** |
| **`UTF-16LE`** | **`UTF-16LE`** | **`UTF-8`** | **`UTF-16LE`** |

Files that are opened for writing in Unicode mode have a BOM written to them automatically.

If *`mode`* is **`"a, ccs=UNICODE"`**, **`"a, ccs=UTF-8"`**, or **`"a, ccs=UTF-16LE"`**, **`fopen_s`** first tries to open the file with both read access and write access. If successful, the function reads the BOM to determine the encoding for the file; if unsuccessful, the function uses the default encoding for the file. In either case, **`fopen_s`** then reopens the file with write-only access. (This behavior applies to **`a`** mode only, not **`a+`**.)

The character string *`mode`* specifies the kind of access that's requested for the file, as follows.

| *`mode`* | Access |
|--|--|
| **`"r"`** | Opens for reading. If the file doesn't exist or can't be found, the **`fopen_s`** call fails. |
| **`"w"`** | Opens an empty file for writing. If the given file exists, its contents are destroyed. |
| **`"a"`** | Opens for writing at the end of the file (appending) without removing the end-of-file (EOF) marker before new data is written to the file. Creates the file if it doesn't exist. |
| **`"r+"`** | Opens for both reading and writing. The file must exist. |
| **`"w+"`** | Opens an empty file for both reading and writing. If the file exists, its contents are destroyed. |
| **`"a+"`** | Opens for reading and appending. The appending operation includes the removal of the EOF marker before new data is written to the file. The EOF marker isn't restored after writing is completed. Creates the file if it doesn't exist. |

When a file is opened by using the **`"a"`** or **`"a+"`** access type, all write operations occur at the end of the file. The file pointer can be repositioned by using [`fseek`](fseek-fseeki64.md) or [`rewind`](rewind.md), but it's always moved back to the end of the file before any write operation is carried out so that existing data can't be overwritten.

The **`"a"`** mode doesn't remove the EOF marker before appending to the file. After appending has occurred, the MS-DOS `TYPE` command only shows data up to the original EOF marker and not any data that's appended to the file. The **`"a+"`** mode does remove the EOF marker before appending to the file. After appending, the MS-DOS `TYPE` command shows all data in the file. The **`"a+"`** mode is required for appending to a stream file that is terminated with the `CTRL`+**Z** EOF marker.

When the **`"r+"`**, **`"w+"`**, or **`"a+"`** access type is specified, both reading and writing are allowed. (The file is said to be open for "update".) However, when you switch from reading to writing, the input operation must come across an EOF marker. If there's no EOF marker, you must use an intervening call to a file-positioning function. The file-positioning functions are **`fsetpos`**, [`fseek`](fseek-fseeki64.md), and [`rewind`](rewind.md). When you switch from writing to reading, you must use an intervening call to either **`fflush`** or to a file-positioning function.

Starting in C11, you can append **`"x"`** to **`"w"`** or **`"w+"`** to cause the function fail if the file exists, instead of overwriting it.

In addition to the previous values, the following characters can be included in *`mode`* to specify the translation mode for newline characters:

| *`mode`* modifier | Translation mode |
|--|--|
| **`t`** | Open in text (translated) mode. Carriage return-line feed (CR-LF) combinations are translated into single line feeds (LF) on input and LF characters are translated to CR-LF combinations on output. CTRL+Z is interpreted as an end-of-file character on input. |
| **`b`** | Open in binary (untranslated) mode; translations involving carriage-return and line feed characters are suppressed. |

In text (translated) mode, `CTRL`+**Z** is interpreted as an end-of-file character on input. For files opened for reading/writing with **`"a+"`**, **`fopen_s`** checks for a `CTRL`+**Z** at the end of the file and removes it, if possible. It's removed because using [`fseek`](fseek-fseeki64.md) and [`ftell`](ftell-ftelli64.md) to move within a file that ends with a `CTRL`+**Z**, may cause **`fseek`** to behave improperly near the end of the file.

Also, in text mode, carriage return/line feed (CRLF) combinations are translated into single line feed (LF) characters on input, and LF characters are translated to CRLF combinations on output. When a Unicode stream-I/O function operates in text mode (the default), the source or destination stream is assumed to be a sequence of multibyte characters. The Unicode stream-input functions convert multibyte characters to wide characters (as if by a call to the **`mbtowc`** function). For the same reason, the Unicode stream-output functions convert wide characters to multibyte characters (as if by a call to the **`wctomb`** function).

If **`t`** or **`b`** isn't given in *`mode`*, the default translation mode is defined by the global variable [`_fmode`](../fmode.md). If **`t`** or **`b`** is prefixed to the argument, the function fails and returns `NULL`.

For more information about using text and binary modes in Unicode and multibyte stream-I/O, see [Text and binary mode file I/O](../text-and-binary-mode-file-i-o.md) and [Unicode stream I/O in text and binary modes](../unicode-stream-i-o-in-text-and-binary-modes.md).

| *`mode`* modifier | Behavior |
|--|--|
| **`c`** | Enable the commit flag for the associated *`filename`* so that the contents of the file buffer are written directly to disk if either **`fflush`** or **`_flushall`** is called. |
| **`n`** | Reset the commit flag for the associated *`filename`* to "no-commit." This flag is the default. It also overrides the global commit flag if you link your program with *`COMMODE.OBJ`*. The global commit flag default is "no-commit" unless you explicitly link your program with *`COMMODE.OBJ`* (see [Link options](../link-options.md)). |
| **`N`** | Specifies that the file isn't inherited by child processes. |
| **`S`** | Specifies that caching is optimized for, but not restricted to, sequential access from disk. |
| **`R`** | Specifies that caching is optimized for, but not restricted to, random access from disk. |
| **`T`** | Specifies a file that isn't written to disk unless memory pressure requires it. |
| **`D`** | Specifies a temporary file that is deleted when the last file pointer to it is closed. |
| **`ccs=UNICODE`** | Specifies UNICODE as the encoded character set to use for this file. Leave unspecified if you want ANSI encoding. |
| **`ccs=UTF-8`** | Specifies UTF-8 as the encoded character set to use for this file. Leave unspecified if you want ANSI encoding. |
| **`ccs=UTF-16LE`** | Specifies UTF-16LE as the encoded character set to use for this file. Leave unspecified if you want ANSI encoding. |

Valid characters for the *`mode`* string used in **`fopen_s`** and [`_fdopen`](fdopen-wfdopen.md) correspond to *`oflag`* arguments used in [`_open`](open-wopen.md) and [`_sopen`](sopen-wsopen.md), as follows.

| Characters in *`mode`* string | Equivalent *`oflag`* value for `_open`/`_sopen` |
|--|--|
| **`a`** | `_O_WRONLY | _O_APPEND` (usually `_O_WRONLY | _O_CREAT | _O_APPEND`) |
| **`a+`** | `_O_RDWR | _O_APPEND` (usually `_O_RDWR | _O_APPEND | _O_CREAT`) |
| **`R`** | `_O_RDONLY` |
| **`r+`** | `_O_RDWR` |
| **`w`** | `_O_WRONLY` (usually `_O_WRONLY | _O_CREAT | _O_TRUNC`) |
| **`w+`** | `_O_RDWR` (usually **`_O_RDWR | _O_CREAT | _O_TRUNC`) |
| **`b`** | `_O_BINARY` |
| **`t`** | `_O_TEXT` (translated) |
| **`c`** | None |
| **`n`** | None |
| **`D`** | `_O_TEMPORARY` |
| **`R`** | `_O_RANDOM` |
| **`S`** | `_O_SEQUENTIAL` |
| **`T`** | `_O_SHORTLIVED` |
| **`ccs=UNICODE`** | `_O_WTEXT` |
| **`ccs=UTF-8`** | `_O_UTF8` |
| **`ccs=UTF-16LE`** | `_O_UTF16` |

The **`c`**, **`n`**, **`R`**, **`S`**, **`t`**, **`T`**, and **`D`** *`mode`* options are Microsoft extensions for `fopen_s` and `_wfopen_s` and shouldn't be used when you want ANSI portability.

If you're using **`rb`** mode, memory mapped Win32 files might also be an option if you don't need to port your code, you expect to read much of the file, or you don't care about network performance.

Regarding `T` and `D`:
- `T` avoids writing the file to disk as long as memory pressure doesn't require it. For more information, see `FILE_ATTRIBUTE_TEMPORARY` in [File attribute constants](/windows/win32/fileio/file-attribute-constants), and also this blog post [It's only temporary](https://learn.microsoft.com/archive/blogs/larryosterman/its-only-temporary).
- `D` specifies a regular file that is written to disk. The difference is that it's automatically deleted when it's closed.
You can combine `TD` to get both semantics.

## Requirements

| Function | Required header | C++ header |
|--|--|--|
| **`fopen_s`** | `<stdio.h>` | `<cstdio>` |
| **`_wfopen_s`** | `<stdio.h>` or `<wchar.h>` | `<cstdio>` |

For more information on standards conformance and naming conventions in the C runtime library, see [Compatibility](../compatibility.md).

### Generic-text routine mappings

| `<tchar.h>` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|--|--|--|--|
| **`_tfopen_s`** | **`fopen_s`** | **`fopen_s`** | **`_wfopen_s`** |

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_fopen_s.c
// This program opens two files. It uses
// fclose to close the first file and
// _fcloseall to close all remaining files.

#include <stdio.h>

FILE *stream, *stream2;

int main( void )
{
   errno_t err;

   // Open for read (will fail if file "crt_fopen_s.c" doesn't exist)
   err  = fopen_s( &stream, "crt_fopen_s.c", "r" );
   if( err == 0 )
   {
      printf( "The file 'crt_fopen_s.c' was opened\n" );
   }
   else
   {
      printf( "The file 'crt_fopen_s.c' was not opened\n" );
   }

   // Open for write
   err = fopen_s( &stream2, "data2", "w+, ccs=UTF-8" );
   if( err == 0 )
   {
      printf( "The file 'data2' was opened\n" );
   }
   else
   {
      printf( "The file 'data2' was not opened\n" );
   }

   // Close stream if it isn't NULL
   if( stream )
   {
      err = fclose( stream );
      if ( err == 0 )
      {
         printf( "The file 'crt_fopen_s.c' was closed\n" );
      }
      else
      {
         printf( "The file 'crt_fopen_s.c' was not closed\n" );
      }
   }

   // All other files are closed:
   int numclosed = _fcloseall( );
   printf( "Number of files closed by _fcloseall: %u\n", numclosed );
}
```

```Output
The file 'crt_fopen_s.c' was opened
The file 'data2' was opened
Number of files closed by _fcloseall: 1
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fclose`, `_fcloseall`](fclose-fcloseall.md)\
[`_fdopen`, `_wfdopen`](fdopen-wfdopen.md)\
[`ferror`](ferror.md)\
[`_fileno`](fileno.md)\
[`freopen`, `_wfreopen`](freopen-wfreopen.md)\
[`_open`, `_wopen`](open-wopen.md)\
[`_setmode`](setmode.md)
