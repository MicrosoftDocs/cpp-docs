---
title: "_umask | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_umask"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_umask"]
dev_langs: ["C++"]
helpviewer_keywords: ["masks, file-permission-setting", "_umask function", "masks", "umask function", "file permissions [C++]", "files [C++], permission settings for"]
ms.assetid: 5e9a13ba-5321-4536-8721-6afb6f4c8483
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _umask

Sets the default file-permission mask. A more secure version of this function is available; see [_umask_s](umask-s.md).

## Syntax

```C
int _umask( int pmode );
```

### Parameters

*pmode*<br/>
Default permission setting.

## Return Value

**_umask** returns the previous value of *pmode*. There is no error return.

## Remarks

The **_umask** function sets the file-permission mask of the current process to the mode specified by *pmode*. The file-permission mask modifies the permission setting of new files created by **_creat**, **_open**, or **_sopen**. If a bit in the mask is 1, the corresponding bit in the file's requested permission value is set to 0 (disallowed). If a bit in the mask is 0, the corresponding bit is left unchanged. The permission setting for a new file is not set until the file is closed for the first time.

The integer expression *pmode* contains one or both of the following manifest constants, defined in SYS\STAT.H:

|*pmode*||
|-|-|
**_S_IWRITE**|Writing permitted.
**_S_IREAD**|Reading permitted.
**_S_IREAD** \| **_S_IWRITE**|Reading and writing permitted.

When both constants are given, they are joined with the bitwise-OR operator ( **|** ). If the *pmode* argument is **_S_IREAD**, reading is not allowed (the file is write-only). If the *pmode* argument is **_S_IWRITE**, writing is not allowed (the file is read-only). For example, if the write bit is set in the mask, any new files will be read-only. Note that with MS-DOS and the Windows operating systems, all files are readable; it is not possible to give write-only permission. Therefore, setting the read bit with **_umask** has no effect on the file's modes.

If *pmode* is not a combination of one of the manifest constants or incorporates an alternate set of constants, the function will simply ignore those.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_umask**|\<io.h>, \<sys/stat.h>, \<sys/types.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

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

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
