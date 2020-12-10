---
description: "Learn more about: _umask_s"
title: "_umask_s"
ms.date: "4/2/2020"
api_name: ["_umask_s", "_o__umask_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["unmask_s", "_umask_s"]
helpviewer_keywords: ["masks, file-permission-setting", "_umask_s function", "masks", "file permissions [C++]", "umask_s function", "files [C++], permission settings for"]
ms.assetid: 70898f61-bf2b-4d8d-8291-0ccaa6d33145
---
# _umask_s

Sets the default file-permission mask. A version of [_umask](umask.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t _umask_s(
   int mode,
   int * pOldMode
);
```

### Parameters

*mode*<br/>
Default permission setting.

*pOldMode*<br/>
The previous value of the permission setting.

## Return Value

Returns an error code if *mode* does not specify a valid mode or the *pOldMode* pointer is **NULL**.

### Error Conditions

|*mode*|*pOldMode*|Return value|Contents of *pOldMode*|
|------------|----------------|----------------------|--------------------------------|
|any|**NULL**|**EINVAL**|not modified|
|invalid mode|any|**EINVAL**|not modified|

If one of the above conditions occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **_umask_s** returns **EINVAL** and sets **errno** to **EINVAL**.

## Remarks

The **_umask_s** function sets the file-permission mask of the current process to the mode specified by *mode*. The file-permission mask modifies the permission setting of new files created by **_creat**, **_open**, or **_sopen**. If a bit in the mask is 1, the corresponding bit in the file's requested permission value is set to 0 (disallowed). If a bit in the mask is 0, the corresponding bit is left unchanged. The permission setting for a new file is not set until the file is closed for the first time.

The integer expression *pmode* contains one or both of the following manifest constants, defined in SYS\STAT.H:

|*pmode*||
|-|-|
|**_S_IWRITE**|Writing permitted.|
|**_S_IREAD**|Reading permitted.|
|**_S_IREAD** \| **_S_IWRITE**|Reading and writing permitted.|

When both constants are given, they are joined with the bitwise-OR operator ( **|** ). If the *mode* argument is **_S_IREAD**, reading is not allowed (the file is write-only). If the *mode* argument is **_S_IWRITE**, writing is not allowed (the file is read-only). For example, if the write bit is set in the mask, any new files will be read-only. Note that with MS-DOS and the Windows operating systems, all files are readable; it is not possible to give write-only permission. Therefore, setting the read bit with **_umask_s** has no effect on the file's modes.

If *pmode* is not a combination of one of the manifest constants or incorporates an alternate set of constants, the function will simply ignore those.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_umask_s**|\<io.h> and \<sys/stat.h> and \<sys/types.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_umask_s.c
/* This program uses _umask_s to set
* the file-permission mask so that all future
* files will be created as read-only files.
* It also displays the old mask.
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <io.h>
#include <stdio.h>

int main( void )
{
   int oldmask, err;

   /* Create read-only files: */
   err = _umask_s( _S_IWRITE, &oldmask );
   if (err)
   {
      printf("Error setting the umask.\n");
      exit(1);
   }
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
[_umask](umask.md)<br/>
