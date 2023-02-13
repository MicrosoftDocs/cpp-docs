---
description: "Learn more about: _sopen_s, _wsopen_s"
title: "_sopen_s, _wsopen_s"
ms.date: 05/18/2022
api_name: ["_sopen_s", "_wsopen_s", "_o__sopen_s", "_o__wsopen_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_IO/_sopen_s", "CORECRT_WIO/_wsopen_s", "TCHAR/_tsopen_s", "_sopen_s", "_wsopen_s", "_tsopen_s", "sopen_s", "wsopen_s"]
helpviewer_keywords: ["sopen_s function", "_wsopen_s function", "wsopen_s function", "opening files, for sharing", "files [C++], opening", "_sopen_s function", "files [C++], sharing"]
ms.assetid: 059a0084-d08c-4973-9174-55e391b72aa2
---
# `_sopen_s`, `_wsopen_s`

Opens a file for sharing. These versions of [`_sopen` and `_wsopen`](sopen-wsopen.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t _sopen_s(
   int* pfh,
   const char *filename,
   int oflag,
   int shflag,
   int pmode
);
errno_t _wsopen_s(
   int* pfh,
   const wchar_t *filename,
   int oflag,
   int shflag,
   int pmode,
);
```

### Parameters

*`pfh`*\
The file handle, or -1 if there's an error.

*`filename`*\
File name.

*`oflag`*\
The kind of operations allowed.

*`shflag`*\
The kind of sharing allowed.

*`pmode`*\
Permission setting.

## Return value

A nonzero return value indicates an error; in that case `errno` is set to one of the following values.

| `errno` value | Condition |
|--|--|
| `EACCES` | The given path is a directory, or the file is read-only, but an open-for-writing operation was attempted. |
| `EEXIST` | `_O_CREAT` and `_O_EXCL` flags were specified, but *`filename`* already exists. |
| `EINVAL` | Invalid *`oflag`*, *`shflag`*, or *`pmode`* argument, or *`pfh`* or *`filename`* was a null pointer. |
| `EMFILE` | No more file descriptors available. |
| `ENOENT` | File or path not found. |

If an invalid argument is passed to the function, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL`, and `EINVAL` is returned.

For more information about these and other return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

If there's an error, -1 is returned through *`pfh`* (unless *`pfh`* is a null pointer).

## Remarks

The **`_sopen_s`** function opens the file specified by *`filename`* and prepares the file for shared reading or writing, as defined by *`oflag`* and *`shflag`*. **`_wsopen_s`** is a wide-character version of **`_sopen_s`**; the *`filename`* argument to **`_wsopen_s`** is a wide-character string. **`_wsopen_s`** and **`_sopen_s`** behave identically otherwise.

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|--|--|--|--|
| **`_tsopen_s`** | **`_sopen_s`** | **`_sopen_s`** | **`_wsopen_s`** |

The integer expression *`oflag`* is formed by combining one or more manifest constants, which are defined in `<fcntl.h>`. When two or more constants form the argument *`oflag`*, they're combined with the bitwise-OR operator ( **`|`** ).

| *`oflag`* constant | Behavior |
|--|--|
| `_O_APPEND` | Moves the file pointer to the end of the file before every write operation. |
| `_O_BINARY` | Opens the file in binary (untranslated) mode. (See [`fopen`](fopen-wfopen.md) for a description of binary mode.) |
| `_O_CREAT` | Creates a file and opens it for writing. Has no effect if the file specified by *`filename`* exists. The *`pmode`* argument is required when `_O_CREAT` is specified. |
| **`_O_CREAT | _O_SHORT_LIVED`** | Creates a file as temporary and if possible doesn't flush to disk. The *`pmode`* argument is required when `_O_CREAT` is specified. |
| **`_O_CREAT | _O_TEMPORARY`** | Creates a file as temporary; the file is deleted when the last file descriptor is closed. The *`pmode`* argument is required when `_O_CREAT` is specified. To preserve legacy behavior for app-compatibility, other processes aren't prevented from deleting this file. |
| **`_O_CREAT | _O_EXCL`** | Returns an error value if a file specified by *`filename`* exists. Applies only when used with `_O_CREAT`. |
| `_O_NOINHERIT` | Prevents creation of a shared file descriptor. |
| `_O_RANDOM` | Specifies that caching is optimized for, but not restricted to, random access from disk. |
| `_O_RDONLY` | Opens a file for reading only. Can't be specified with `_O_RDWR` or `_O_WRONLY`. |
| `_O_RDWR` | Opens a file for both reading and writing. Can't be specified with `_O_RDONLY` or `_O_WRONLY`. |
| `_O_SEQUENTIAL` | Specifies that caching is optimized for, but not restricted to, sequential access from disk. |
| `_O_TEXT` | Opens a file in text (translated) mode. (For more information, see [Text and binary mode file I/O](../text-and-binary-mode-file-i-o.md) and [`fopen`](fopen-wfopen.md).) |
| `_O_TRUNC` | Opens a file and truncates it to zero length; the file must have write permission. Can't be specified with `_O_RDONLY`. `_O_TRUNC` used with `_O_CREAT` opens an existing file or creates a file. **Note:** The `_O_TRUNC` flag destroys the contents of the specified file. |
| `_O_WRONLY` | Opens a file for writing only. Can't be specified with `_O_RDONLY` or `_O_RDWR`. |
| `_O_U16TEXT` | Opens a file in Unicode UTF-16 mode. |
| `_O_U8TEXT` | Opens a file in Unicode UTF-8 mode. |
| `_O_WTEXT` | Opens a file in Unicode mode. |

To specify the file access mode, you must specify either `_O_RDONLY`, `_O_RDWR`, or `_O_WRONLY`. There's no default value for the access mode.

When a file is opened in Unicode mode by using `_O_WTEXT`, `_O_U8TEXT`, or `_O_U16TEXT`, input functions translate the data that's read from the file into UTF-16 data stored as type **`wchar_t`**. Functions that write to a file opened in Unicode mode expect buffers that contain UTF-16 data stored as type **`wchar_t`**. If the file is encoded as UTF-8, then UTF-16 data is translated into UTF-8 when it's written. The file's UTF-8-encoded content is translated into UTF-16 when it's read. An attempt to read or write an odd number of bytes in Unicode mode causes a parameter validation error. To read or write data that's stored in your program as UTF-8, use a text or binary file mode instead of a Unicode mode. You're responsible for any required encoding translation.

If **`_sopen_s`** is called with **`_O_WRONLY | _O_APPEND`** (append mode) and `_O_WTEXT`, `_O_U16TEXT`, or `_O_U8TEXT`, it first tries to open the file for reading and writing, read the BOM, then reopen it for writing only. If opening the file for reading and writing fails, it opens the file for writing only and uses the default value for the Unicode mode setting.

The argument *`shflag`* is a constant expression that consists of one of the following manifest constants, which are defined in `<share.h>`.

| *`shflag`* constant | Behavior |
|--|--|
| `_SH_DENYRW` | Denies read and write access to a file. |
| `_SH_DENYWR` | Denies write access to a file. |
| `_SH_DENYRD` | Denies read access to a file. |
| `_SH_DENYNO` | Permits read and write access. |

The *`pmode`* argument is always required, unlike in **`_sopen`**. When you specify `_O_CREAT`, if the file doesn't exist, *`pmode`* specifies the file's permission settings, which are set when the new file is closed the first time. Otherwise, *`pmode`* is ignored. *`pmode`* is an integer expression that contains one or both of the manifest constants `_S_IWRITE` and `_S_IREAD`, which are defined in `<sys\stat.h>`. When both constants are given, they're combined with the bitwise-OR operator. The meaning of *`pmode`* is as follows.

| *`pmode`* | Meaning |
|--|--|
| `_S_IREAD` | Only reading permitted. |
| `_S_IWRITE` | Writing permitted. (In effect, permits reading and writing.) |
| **`_S_IREAD | _S_IWRITE`** | Reading and writing permitted. |

If write permission isn't given, the file is read-only. In the Windows operating system, all files are readable; it isn't possible to give write-only permission. Therefore, the modes `_S_IWRITE` and **`_S_IREAD | _S_IWRITE`** are equivalent.

**`_sopen_s`** applies the current file-permission mask to *`pmode`* before the permissions are set. (See [`_umask`](umask.md).)

## Requirements

| Function | Required header | Optional header |
|--|--|--|
| **`_sopen_s`** | `<io.h>` | `<fcntl.h>`, `<sys\types.h>`, `<sys\stat.h>`, `<share.h>` |
| **`_wsopen_s`** | `<io.h>` or `<wchar.h>` | `<fcntl.h>`, `<sys/types.h>`, `<sys/stat.h>`, `<share.h>` |

**`_sopen_s`** and **`_wsopen_s`** are Microsoft extensions. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`_locking`](locking.md).

## See also

[Low-level I/O](../low-level-i-o.md)\
[`_close`](close.md)\
[`_creat`, `_wcreat`](creat-wcreat.md)\
[`fopen`, `_wfopen`](fopen-wfopen.md)\
[`_fsopen`, `_wfsopen`](fsopen-wfsopen.md)\
[`_open`, `_wopen`](open-wopen.md)
