---
description: "Learn more about: _fsopen, _wfsopen"
title: "_fsopen, _wfsopen"
ms.date: "4/2/2020"
api_name: ["_wfsopen", "_fsopen", "_o__fsopen", "_o__wfsopen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wfsopen", "fsopen", "tfsopen", "_tfsopen", "_wfsopen", "_fsopen"]
helpviewer_keywords: ["opening files, streams", "fsopen function", "tfsopen function", "wfsopen function", "_fsopen function", "files [C++], opening", "_tfsopen function", "_wfsopen function", "file sharing [C++]"]
ms.assetid: 5e4502ab-48a9-4bee-a263-ebac8d638dec
---
# _fsopen, _wfsopen

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

*filename*<br/>
Name of the file to open.

*mode*<br/>
Type of access permitted.

*shflag*<br/>
Type of sharing allowed.

## Return Value

Each of these functions returns a pointer to the stream. A null pointer value indicates an error. If *filename* or *mode* is **NULL** or an empty string, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **NULL** and set **errno** to **EINVAL**.

For more information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_fsopen** function opens the file specified by *filename* as a stream and prepares the file for subsequent shared reading or writing, as defined by the mode and *shflag* arguments. **_wfsopen** is a wide-character version of **_fsopen**; the *filename* and *mode* arguments to **_wfsopen** are wide-character strings. **_wfsopen** and **_fsopen** behave identically otherwise.

The character string *mode* specifies the type of access requested for the file, as shown in the following table.

|Term|Definition|
|----------|----------------|
|**"r"**|Opens for reading. If the file does not exist or cannot be found, the **_fsopen** call fails.|
|**"w"**|Opens an empty file for writing. If the given file exists, its contents are destroyed.|
|**"a"**|Opens for writing at the end of the file (appending); creates the file first if it does not exist.|
|**"r+"**|Opens for both reading and writing. (The file must exist.)|
|**"w+"**|Opens an empty file for both reading and writing. If the given file exists, its contents are destroyed.|
|**"a+"**|Opens for reading and appending; creates the file first if it does not exist.|

Use the **"w"** and **"w+"** types with care, as they can destroy existing files.

When a file is opened with the **"a"** or **"a+"** access type, all write operations occur at the end of the file. The file pointer can be repositioned using [fseek](fseek-fseeki64.md) or [rewind](rewind.md), but it is always moved back to the end of the file before any write operation is carried out. Thus, existing data cannot be overwritten. When the **"r+"**, **"w+"**, or **"a+"** access type is specified, both reading and writing are allowed (the file is said to be open for update). However, when switching between reading and writing, there must be an intervening [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md), or [rewind](rewind.md) operation. The current position can be specified for the [fsetpos](fsetpos.md) or [fseek](fseek-fseeki64.md) operation, if desired. In addition to the above values, one of the following characters can be included in *mode* to specify the translation mode for new lines, and for file management.

|Term|Definition|
|----------|----------------|
|**t**|Opens a file in text (translated) mode. In this mode, carriage return-line feed (CR-LF) combinations are translated into single line feeds (LF) on input and LF characters are translated to CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading or reading/writing, **_fsopen** checks for a CTRL+Z at the end of the file and removes it, if possible. This is done because using [fseek](fseek-fseeki64.md) and [ftell](ftell-ftelli64.md) to move within a file that ends with a CTRL+Z might cause [fseek](fseek-fseeki64.md) to behave improperly near the end of the file.|
|**b**|Opens a file in binary (untranslated) mode; the above translations are suppressed.|
|**S**|Specifies that caching is optimized for, but not restricted to, sequential access from disk.|
|**R**|Specifies that caching is optimized for, but not restricted to, random access from disk.|
|**T**|Specifies a file as temporary. If possible, it is not flushed to disk.|
|**D**|Specifies a file as temporary. It is deleted when the last file pointer is closed.|

If **t** or **b** is not given in *mode*, the translation mode is defined by the default-mode variable **_fmode**. If **t** or **b** is prefixed to the argument, the function fails and returns **NULL**. For a discussion of text and binary modes, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

The argument *shflag* is a constant expression consisting of one of the following manifest constants, defined in Share.h.

|Term|Definition|
|----------|----------------|
|**_SH_COMPAT**|Sets Compatibility mode for 16-bit applications.|
|**_SH_DENYNO**|Permits read and write access.|
|**_SH_DENYRD**|Denies read access to the file.|
|**_SH_DENYRW**|Denies read and write access to the file.|
|**_SH_DENYWR**|Denies write access to the file.|

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfsopen**|**_fsopen**|**_fsopen**|**_wfsopen**|

## Requirements

|Function|Required header|Optional headers|
|--------------|---------------------|----------------------|
|**_fsopen**|\<stdio.h>|\<share.h><br /><br /> For manifest constant for *shflag* parameter.|
|**_wfsopen**|\<stdio.h> or \<wchar.h>|\<share.h><br /><br /> For manifest constant for *shflag* parameter.|

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

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[ferror](ferror.md)<br/>
[_fileno](fileno.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
