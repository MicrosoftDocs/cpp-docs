---
description: "Learn more about: _fsopen, _wfsopen"
title: "_fsopen, _wfsopen"
ms.date: 4/27/2023
api_name: ["_wfsopen", "_fsopen", "_o__fsopen", "_o__wfsopen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wfsopen", "fsopen", "tfsopen", "_tfsopen", "_wfsopen", "_fsopen"]
helpviewer_keywords: ["opening files, streams", "fsopen function", "tfsopen function", "wfsopen function", "_fsopen function", "files [C++], opening", "_tfsopen function", "_wfsopen function", "file sharing [C++]"]
---
# `_fsopen`, `_wfsopen`

Opens a stream with file sharing.

## Syntax

```C
FILE *_fsopen(
   const char *filename,
   const char *mode,
   int shflag
);
FILE *_wfsopen(
   const wchar_t *filename,
   const wchar_t *mode,
   int shflag
);
```

### Parameters

*`filename`*\
Name of the file to open.

*`mode`*\
Type of access permitted.

*`shflag`*\
Type of sharing allowed.

## Return value

Each of these functions returns a pointer to the stream. A null pointer value indicates an error. If *`filename`* or *`mode`* is `NULL` or an empty string, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return `NULL` and set `errno` to `EINVAL`.

For more information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_fsopen`** function opens the file specified by *`filename`* as a stream and prepares the file for subsequent shared reading or writing, as defined by the mode and *`shflag`* arguments. **`_wfsopen`** is a wide-character version of **`_fsopen`**; the *`filename`* and *`mode`* arguments to **`_wfsopen`** are wide-character strings. **`_wfsopen`** and **`_fsopen`** behave identically otherwise.

The character string *`mode`* specifies the type of access requested for the file, as shown in the following table.

| Term | Definition |
|---|---|
| **"`r`"** | Opens for reading. If the file doesn't exist or can't be found, the **`_fsopen`** call fails. |
| **"`w`"** | Opens an empty file for writing. If the given file exists, its contents are destroyed. |
| **"`a`"** | Opens for writing at the end of the file (appending); creates the file first if it doesn't exist. |
| **"`r+`"** | Opens for both reading and writing. (The file must exist.) |
| **"`w+`"** | Opens an empty file for both reading and writing. If the given file exists, its contents are destroyed. |
| **"`a+`"** | Opens for reading and appending; creates the file first if it doesn't exist. |

Use the **"`w`"** and **"`w+`"** types with care, as they can destroy existing files.

When a file is opened with the **"`a`"** or **"`a+`"** access type, all write operations occur at the end of the file. The file pointer can be repositioned using [`fseek`](fseek-fseeki64.md) or [`rewind`](rewind.md), but it's always moved back to the end of the file before any write operation is carried out. Thus, existing data can't be overwritten. When the **"`r+`"**, **"`w+`"**, or **"`a+`"** access type is specified, both reading and writing are allowed (the file is said to be open for update). However, when switching between reading and writing, there must be an intervening [`fsetpos`](fsetpos.md), [`fseek`](fseek-fseeki64.md), or [`rewind`](rewind.md) operation. The current position can be specified for the [`fsetpos`](fsetpos.md) or [`fseek`](fseek-fseeki64.md) operation, if desired. In addition to the above values, one of the following characters can be included in *`mode`* to specify the translation mode for new lines, and for file management.

| Term | Definition |
|---|---|
| **`t`** | Opens a file in text (translated) mode. In this mode, carriage return-line feed (CR-LF) combinations are translated into single line feeds (LF) on input and LF characters are translated to CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading or reading/writing, **`_fsopen`** checks for a CTRL+Z at the end of the file and removes it, if possible. It's removed because using [`fseek`](fseek-fseeki64.md) and [`ftell`](ftell-ftelli64.md) to move within a file that ends with a CTRL+Z might cause [`fseek`](fseek-fseeki64.md) to behave improperly near the end of the file. |
| **`b`** | Opens a file in binary (untranslated) mode; the above translations are suppressed. |
| **`D`** | Specifies a temporary file that's deleted when the last file pointer to it is closed. |
| **`R`** | Specifies that caching is optimized for, but not restricted to, random access from disk. |
| **`S`** | Specifies that caching is optimized for, but not restricted to, sequential access from disk. |
| **`T`** | Specifies a file that isn't written to disk unless memory pressure requires it. |

If **`t`** or **`b`** isn't given in *`mode`*, the translation mode is defined by the default-mode variable **`_fmode`**. If **`t`** or **`b`** is prefixed to the argument, the function fails and returns `NULL`. For a discussion of text and binary modes, see [Text and binary mode file I/O](../text-and-binary-mode-file-i-o.md).

Regarding `T` and `D`:
- `T` avoids writing the file to disk as long as memory pressure doesn't require it. For more information, see `FILE_ATTRIBUTE_TEMPORARY` in [File attribute constants](/windows/win32/fileio/file-attribute-constants), and also this blog post [It's only temporary](https://learn.microsoft.com/archive/blogs/larryosterman/its-only-temporary).
- `D` specifies a regular file that is written to disk. The difference is that it's automatically deleted when it's closed.
You can combine `TD` to get both semantics.

`_fsopen` and `_wfsopen` are Microsoft-specific variants of [`fopen`](fopen-wfopen.md). They aren't part of the ANSI standard. For a more portable and secure function, if you don't require file sharing, consider [`_wfopen_s` or `fopen_s`](fopen-s-wfopen-s.md).

The argument *`shflag`* is a constant expression consisting of one of the following manifest constants, defined in `Share.h`.

| Term | Definition |
|---|---|
| `_SH_DENYNO` | Permits read and write access. |
| `_SH_DENYRD` | Denies read access to the file. |
| `_SH_DENYRW` | Denies read and write access to the file. |
| `_SH_DENYWR` | Denies write access to the file. |


By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tfsopen`** | **`_fsopen`** | **`_fsopen`** | **`_wfsopen`** |

## Requirements

| Function | Required header | Optional headers |
|---|---|---|
| **`_fsopen`** | `<stdio.h>` | `<share.h>`<br /><br /> For manifest constant for *`shflag`* parameter. |
| **`_wfsopen`** | `<stdio.h>` or `<wchar.h>` | `<share.h>`<br /><br /> For manifest constant for *`shflag`* parameter. |

## Example

```C
// crt_fsopen.c

#include <stdio.h>
#include <stdlib.h>
#include <share.h>

int main( void )
{
   FILE *stream;

   // Open output file for writing. Using _fsopen allows us to
   // ensure that no one else writes to the file while we are
   // writing to it.
    //
   if( (stream = _fsopen( "outfile", "wt", _SH_DENYWR )) != NULL )
   {
      fprintf( stream, "No one else in the network can write "
                       "to this file until we are done.\n" );
      fclose( stream );
   }
   // Now others can write to the file while we read it.
   system( "type outfile" );
}
```

```Output
No one else in the network can write to this file until we are done.
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fclose`, `_fcloseall`](fclose-fcloseall.md)\
[`_fdopen`, `_wfdopen`](fdopen-wfdopen.md)\
[`ferror`](ferror.md)\
[`_fileno`](fileno.md)\
[`fopen`, `_wfopen`](fopen-wfopen.md)\
[`freopen`, `_wfreopen`](freopen-wfreopen.md)\
[`_open`, `_wopen`](open-wopen.md)\
[`_setmode`](setmode.md)\
[`_sopen`, `_wsopen`](sopen-wsopen.md)
