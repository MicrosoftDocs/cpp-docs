---
title: "_umask"
description: "API reference for _umask; which sets the default file-permission mask."
ms.date: "4/2/2020"
api_name: ["_umask", "_o__umask"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_IO/_umask", "_umask"]
helpviewer_keywords: ["masks, file-permission-setting", "_umask function", "masks", "umask function", "file permissions [C++]", "files [C++], permission settings for"]
ms.assetid: 5e9a13ba-5321-4536-8721-6afb6f4c8483
---
# `_umask`

Sets the default file-permission mask. For a more secure version of this function, see [`_umask_s`](umask-s.md) .

## Syntax

```C
int _umask( int pmode );
```

### Parameters

*`pmode`*\
Default permission setting.

## Return value

**`_umask`** returns the previous value of *`pmode`*. There's no error return.

## Remarks

The **`_umask`** function sets the file-permission mask of the current process to the mode specified by *`pmode`*. The file-permission mask modifies the permission setting of new files created by **`_creat`**, **`_open`**, or **`_sopen`**. If a bit in the mask is 1, the corresponding bit in the file's requested permission value is set to 0 (disallowed). If a bit in the mask is 0, the corresponding bit is left unchanged. The permission setting for a new file isn't set until the file is closed for the first time.

The integer expression *`pmode`* contains one or both of the following manifest constants, defined in `SYS\STAT.H`:

| *`pmode`* | Description |
|--|--|
| `_S_IWRITE` | Writing permitted. |
| `_S_IREAD` | Reading permitted. |
| **`_S_IREAD | _S_IWRITE`** | Reading and writing permitted. |

When both constants are given, they're joined with the bitwise-OR operator ( **`|`** ). If the *`pmode`* argument is `_S_IREAD`, reading isn't allowed (the file is write-only). If the *`pmode`* argument is `_S_IWRITE`, writing isn't allowed (the file is read-only). For example, if the write bit is set in the mask, any new files will be read-only. In MS-DOS and the Windows operating systems, all files are readable; it isn't possible to give write-only permission. Therefore, setting the read bit with **`_umask`** has no effect on the file's modes.

If *`pmode`* isn't a combination of one of the manifest constants or incorporates an alternate set of constants, the function ignores them.

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header |
|--|--|
| **`_umask`** | `<io.h>`, `<sys/stat.h>`, `<sys/types.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_umask.c
// compile with: /W3
// This program uses _umask to set
// the file-permission mask so that all future
// files will be created as read-only files.
// It also displays the old mask.
#include <sys/stat.h>
#include <sys/types.h>
#include <io.h>
#include <stdio.h>

int main( void )
{
   int oldmask;

   /* Create read-only files: */
   oldmask = _umask( _S_IWRITE ); // C4996
   // Note: _umask is deprecated; consider using _umask_s instead
   printf( "Oldmask = 0x%.4x\n", oldmask );
}
```

```Output
Oldmask = 0x0000
```

## See also

[File handling](../file-handling.md)\
[Low-level I/O](../low-level-i-o.md)\
[`_chmod`, `_wchmod`](chmod-wchmod.md)\
[`_creat`, `_wcreat`](creat-wcreat.md)\
[`_mkdir`, `_wmkdir`](mkdir-wmkdir.md)\
[`_open`, `_wopen`](open-wopen.md)
