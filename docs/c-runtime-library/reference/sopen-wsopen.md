---
description: "Learn more about: _sopen, _wsopen"
title: "_sopen, _wsopen"
ms.date: "4/2/2020"
api_name: ["_sopen", "_wsopen", "_o__sopen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wsopen", "wsopen", "_sopen", "_tsopen"]
helpviewer_keywords: ["sopen function", "sharing files", "opening files, for sharing", "_sopen function", "wsopen function", "files [C++], opening", "files [C++], sharing", "_wsopen function"]
ms.assetid: a9d4cccf-06e9-414d-96fa-453fca88cc1f
---
# _sopen, _wsopen

Opens a file for sharing. More secure versions of these functions are available: see [_sopen_s, _wsopen_s](sopen-s-wsopen-s.md).

## Syntax

```C
int _sopen(
   const char *filename,
   int oflag,
   int shflag [,
   int pmode ]
);
int _wsopen(
   const wchar_t *filename,
   int oflag,
   int shflag [,
   int pmode ]
);
```

### Parameters

*filename*<br/>
File name.

*oflag*<br/>
The kind of operations allowed.

*shflag*<br/>
The kind of sharing allowed.

*pmode*<br/>
Permission setting.

## Return Value

Each of these functions returns a file descriptor for the opened file.

If *filename* or *oflag* is a **NULL** pointer, or if *oflag* or *shflag* is not within a valid range of values, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to one of the following values.

|errno value|Condition|
|-|-|
| **EACCES** | The given path is a directory, or the file is read-only, but an open-for-writing operation was attempted. |
| **EEXIST** | **_O_CREAT** and **_O_EXCL** flags were specified, but *filename* already exists. |
| **EINVAL** | Invalid *oflag* or *shflag* argument. |
| **EMFILE** | No more file descriptors are available. |
| **ENOENT** | File or path is not found. |

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_sopen** function opens the file specified by *filename* and prepares the file for shared reading or writing, as defined by *oflag* and *shflag*. **_wsopen** is a wide-character version of **_sopen**; the *filename* argument to **_wsopen** is a wide-character string. **_wsopen** and **_sopen** behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsopen**|**_sopen**|**_sopen**|**_wsopen**|

The integer expression *oflag* is formed by combining one or more of the following manifest constants, which are defined in \<fcntl.h>. When two or more constants form the argument *oflag*, they are combined with the bitwise-OR operator ( **&#124;** ).

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

When a file is opened in Unicode mode by using **_O_WTEXT**, **_O_U8TEXT**, or **_O_U16TEXT**, input functions translate the data that's read from the file into UTF-16 data stored as type **`wchar_t`**. Functions that write to a file opened in Unicode mode expect buffers that contain UTF-16 data stored as type **`wchar_t`**. If the file is encoded as UTF-8, then UTF-16 data is translated into UTF-8 when it is written, and the file's UTF-8-encoded content is translated into UTF-16 when it is read. An attempt to read or write an odd number of bytes in Unicode mode causes a parameter validation error. To read or write data that's stored in your program as UTF-8, use a text or binary file mode instead of a Unicode mode. You are responsible for any required encoding translation.

If **_sopen** is called with **_O_WRONLY** | **_O_APPEND** (append mode) and **_O_WTEXT**, **_O_U16TEXT**, or **_O_U8TEXT**, it first tries to open the file for reading and writing, read the BOM, then reopen it for writing only. If opening the file for reading and writing fails, it opens the file for writing only and uses the default value for the Unicode mode setting.

The argument *shflag* is a constant expression consisting of one of the following manifest constants, which are defined in \<share.h>.

|*shflag* constant|Behavior|
|-|-|
| **_SH_DENYRW** | Denies read and write access to a file. |
| **_SH_DENYWR** | Denies write access to a file. |
| **_SH_DENYRD** | Denies read access to a file. |
| **_SH_DENYNO** | Permits read and write access. |

The *pmode* argument is required only when **_O_CREAT** is specified. If the file does not exist, *pmode* specifies the file's permission settings, which are set when the new file is closed the first time. Otherwise, *pmode* is ignored. *pmode* is an integer expression that contains one or both of the manifest constants **_S_IWRITE** and **_S_IREAD**, which are defined in \<sys\stat.h>. When both constants are given, they are combined with the bitwise-OR operator. The meaning of *pmode* is as follows.

|*pmode*|Meaning|
|-|-|
| **_S_IREAD** | Only reading permitted. |
| **_S_IWRITE** | Writing permitted. (In effect, permits reading and writing.) |
| **_S_IREAD** &#124; **_S_IWRITE** | Reading and writing permitted. |

If write permission is not given, the file is read-only. In the Windows operating system, all files are readable; it is not possible to give write-only permission. Therefore, the modes **_S_IWRITE** and **_S_IREAD** | **_S_IWRITE** are equivalent.

**_sopen** applies the current file-permission mask to *pmode* before the permissions are set. (See [_umask](umask.md).)

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_sopen**|\<io.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|
|**_wsopen**|\<io.h> or \<wchar.h>|\<fcntl.h>, \<sys\types.h>, \<sys\stat.h>, \<share.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_locking](locking.md).

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_fsopen, _wfsopen](fsopen-wfsopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
