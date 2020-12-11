---
description: "Learn more about: _open, _wopen"
title: "_open, _wopen"
ms.date: "11/04/2016"
api_name: ["_open", "_wopen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wopen", "_topen", "_open"]
helpviewer_keywords: ["opening files, for file I/O", "topen function", "_open function", "_topen function", "_wopen function", "files [C++], opening", "wopen function", "open function"]
ms.assetid: 13f6a0c3-d1aa-450d-a7aa-74abc91b163e
---
# _open, _wopen

Opens a file. These functions are deprecated because more-secure versions are available; see [_sopen_s, _wsopen_s](sopen-s-wsopen-s.md).

## Syntax

```C
int _open(
   const char *filename,
   int oflag [,
   int pmode]
);
int _wopen(
   const wchar_t *filename,
   int oflag [,
   int pmode]
);
```

### Parameters

*filename*<br/>
File name.

*oflag*<br/>
The kind of operations allowed.

*pmode*<br/>
Permission mode.

## Return Value

Each of these functions returns a file descriptor for the opened file. A return value of -1 indicates an error; in that case **errno** is set to one of the following values.

|errno value|Condition|
|-|-|
| **EACCES** | Tried to open a read-only file for writing, file's sharing mode does not allow the specified operations, or the given path is a directory. |
| **EEXIST** | **_O_CREAT** and **_O_EXCL** flags specified, but *filename* already exists. |
| **EINVAL** | Invalid *oflag* or *pmode* argument. |
| **EMFILE** | No more file descriptors are available (too many files are open). |
| **ENOENT** | File or path not found. |

For more information about these and other return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_open** function opens the file specified by *filename* and prepares it for reading or writing, as specified by *oflag*. **_wopen** is a wide-character version of **_open**; the *filename* argument to **_wopen** is a wide-character string. **_wopen** and **_open** behave identically otherwise.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_topen**|**_open**|**_open**|**_wopen**|

*oflag* is an integer expression formed from one or more of the following manifest constants or constant combinations, which are defined in \<fcntl.h>.

|*oflag* constant|Behavior|
|-|-|
| **_O_APPEND** | Moves the file pointer to the end of the file before every write operation. |
| **_O_BINARY** | Opens the file in binary (untranslated) mode. (See [fopen](fopen-wfopen.md) for a description of binary mode.) |
| **_O_CREAT** | Creates a file and opens it for writing. Has no effect if the file specified by *filename* exists. The *pmode* argument is required when **_O_CREAT** is specified. |
| **_O_CREAT** &#124; **_O_SHORT_LIVED** | Creates a file as temporary and if possible does not flush to disk. The *pmode* argument is required when **_O_CREAT** is specified. |
| **_O_CREAT** &#124; **_O_TEMPORARY** | Creates a file as temporary; the file is deleted when the last file descriptor is closed. The *pmode* argument is required when **_O_CREAT** is specified. |
| **_O_CREAT** &#124; `_O_EXCL` | Returns an error value if a file specified by *filename* exists. Applies only when used with **_O_CREAT**. |
| **_O_NOINHERIT** | Prevents creation of a shared file descriptor. |
| **_O_RANDOM** | Specifies that caching is optimized for, but not restricted to, random access from disk. |
| **_O_RDONLY** | Opens a file for reading only. Cannot be specified with **_O_RDWR** or **_O_WRONLY**. |
| **_O_RDWR** | Opens a file for both reading and writing. Cannot be specified with **_O_RDONLY** or **_O_WRONLY**. |
| **_O_SEQUENTIAL** | Specifies that caching is optimized for, but not restricted to, sequential access from disk. |
| **_O_TEXT** | Opens a file in text (translated) mode. (For more information, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) and [fopen](fopen-wfopen.md).) |
| **_O_TRUNC** | Opens a file and truncates it to zero length; the file must have write permission. Cannot be specified with **_O_RDONLY**. **_O_TRUNC** used with **_O_CREAT** opens an existing file or creates a file. **Note:** The **_O_TRUNC** flag destroys the contents of the specified file. |
| **_O_WRONLY** | Opens a file for writing only. Cannot be specified with **_O_RDONLY** or **_O_RDWR**. |
| **_O_U16TEXT** | Opens a file in Unicode UTF-16 mode. |
| **_O_U8TEXT** | Opens a file in Unicode UTF-8 mode. |
| **_O_WTEXT** | Opens a file in Unicode mode. |

To specify the file access mode, you must specify either **_O_RDONLY**, **_O_RDWR**, or **_O_WRONLY**. There is no default value for the access mode.

If **_O_WTEXT** is used to open a file for reading, **_open** reads the beginning of the file and checks for a byte order mark (BOM). If there is a BOM, the file is treated as UTF-8 or UTF-16LE, depending on the BOM. If no BOM is present, the file is treated as ANSI. When a file is opened for writing by using **_O_WTEXT**, UTF-16 is used. Regardless of any previous setting or byte order mark, if **_O_U8TEXT** is used, the file is always opened as UTF-8; if **_O_U16TEXT** is used, the file is always opened as UTF-16.

When a file is opened in Unicode mode by using **_O_WTEXT**, **_O_U8TEXT**, or **_O_U16TEXT**, input functions translate the data that's read from the file into UTF-16 data stored as type **`wchar_t`**. Functions that write to a file opened in Unicode mode expect buffers that contain UTF-16 data stored as type **`wchar_t`**. If the file is encoded as UTF-8, then UTF-16 data is translated into UTF-8 when it is written, and the file's UTF-8-encoded content is translated into UTF-16 when it is read. An attempt to read or write an odd number of bytes in Unicode mode causes a parameter validation error. To read or write data that's stored in your program as UTF-8, use a text or binary file mode instead of a Unicode mode. You are responsible for any required encoding translation.

If **_open** is called with **_O_WRONLY** | **_O_APPEND** (append mode) and **_O_WTEXT**, **_O_U16TEXT**, or **_O_U8TEXT**, it first tries to open the file for reading and writing, read the BOM, then reopen it for writing only. If opening the file for reading and writing fails, it opens the file for writing only and uses the default value for the Unicode mode setting.

When two or more manifest constants are used to form the *oflag* argument, the constants are combined with the bitwise-OR operator ( **&#124;** ). For a discussion of binary and text modes, see [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

The *pmode* argument is required only when **_O_CREAT** is specified. If the file already exists, *pmode* is ignored. Otherwise, *pmode* specifies the file permission settings, which are set when the new file is closed the first time. **_open** applies the current file-permission mask to *pmode* before the permissions are set. (For more information, see [_umask](umask.md).) *pmode* is an integer expression that contains one or both of the following manifest constants, which are defined in \<sys\stat.h>.

|*pmode*|Meaning|
|-|-|
| **_S_IREAD** | Only reading permitted. |
| **_S_IWRITE** | Writing permitted. (In effect, permits reading and writing.) |
| **_S_IREAD** &#124; **_S_IWRITE** | Reading and writing permitted. |

When both constants are given, they are joined with the bitwise-OR operator ( **&#124;** ). In Windows, all files are readable; write-only permission is not available. Therefore, the modes **_S_IWRITE** and **_S_IREAD** | **_S_IWRITE** are equivalent.

If a value other than some combination of **_S_IREAD** and **_S_IWRITE** is specified for *pmode*—even if it would specify a valid *pmode* in another operating system—or if any value other than the allowed *oflag* values is specified, the function generates an assertion in Debug mode and invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets **errno** to **EINVAL**.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_open**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>|
|**_wopen**|\<io.h> or \<wchar.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>|

**_open** and **_wopen** are Microsoft extensions. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_open.c
// compile with: /W3
/* This program uses _open to open a file
* named CRT_OPEN.C for input and a file named CRT_OPEN.OUT
* for output. The files are then closed.
*/
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>

int main( void )
{
   int fh1, fh2;

   fh1 = _open( "CRT_OPEN.C", _O_RDONLY ); // C4996
   // Note: _open is deprecated; consider using _sopen_s instead
   if( fh1 == -1 )
      perror( "Open failed on input file" );
   else
   {
      printf( "Open succeeded on input file\n" );
      _close( fh1 );
   }

   fh2 = _open( "CRT_OPEN.OUT", _O_WRONLY | _O_CREAT, _S_IREAD |
                            _S_IWRITE ); // C4996
   if( fh2 == -1 )
      perror( "Open failed on output file" );
   else
   {
      printf( "Open succeeded on output file\n" );
      _close( fh2 );
   }
}
```

### Output

```Output
Open succeeded on input file
Open succeeded on output file
```

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
