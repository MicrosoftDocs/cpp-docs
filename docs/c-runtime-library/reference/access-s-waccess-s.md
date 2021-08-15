---
description: "Learn more about: _access_s, _waccess_s"
title: "_access_s, _waccess_s"
ms.date: "4/2/2020"
api_name: ["_access_s", "_waccess_s", "_o__access_s", "_o__waccess_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["waccess_s", "access_s", "_waccess_s", "_access_s"]
helpviewer_keywords: ["access_s function", "taccess_s function", "_taccess_s function", "waccess_s function", "_access_s function", "_waccess_s function"]
ms.assetid: fb3004fc-dcd3-4569-8b27-d817546e947e
---
# _access_s, _waccess_s

Determines file read/write permissions. This is a version of [_access, _waccess](access-waccess.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t _access_s(
   const char *path,
   int mode
);
errno_t _waccess_s(
   const wchar_t *path,
   int mode
);
```

### Parameters

*path*<br/>
File or directory path.

*mode*<br/>
Permission setting.

## Return Value

Each function returns 0 if the file has the given mode. The function returns an error code if the named file does not exist or is not accessible in the given mode. In this case, the function returns an error code from the set as follows and also sets `errno` to the same value.

|errno value|Condition|
|-|-|
`EACCES`|Access denied. The file's permission setting does not allow specified access.
`ENOENT`|File name or path not found.
`EINVAL`|Invalid parameter.

For more information, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

When used with files, the **_access_s** function determines whether the specified file exists and can be accessed as specified by the value of *mode*. When used with directories, **_access_s** determines only whether the specified directory exists. In Windows 2000 and later operating systems, all directories have read and write access.

|mode value|Checks file for|
|----------------|---------------------|
|00|Existence only.|
|02|Write permission.|
|04|Read permission.|
|06|Read and write permission.|

Permission to read or write the file is not enough to ensure the ability to open a file. For example, if a file is locked by another process, it might not be accessible even though **_access_s** returns 0.

**_waccess_s** is a wide-character version of **_access_s**, where the *path* argument to **_waccess_s** is a wide-character string. Otherwise, **_waccess_s** and **_access_s** behave identically.

These functions validate their parameters. If *path* is NULL or *mode* does not specify a valid mode, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and return `EINVAL`.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_taccess_s`|**_access_s**|**_access_s**|**_waccess_s**|

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_access_s**|\<io.h>|\<errno.h>|
|**_waccess_s**|\<wchar.h> or \<io.h>|\<errno.h>|

## Example

This example uses **_access_s** to check the file named crt_access_s.c to see whether it exists and whether writing is allowed.

```C
// crt_access_s.c

#include <io.h>
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    errno_t err = 0;

    // Check for existence.
    if ((err = _access_s( "crt_access_s.c", 0 )) == 0 )
    {
        printf_s( "File crt_access_s.c exists.\n" );

        // Check for write permission.
        if ((err = _access_s( "crt_access_s.c", 2 )) == 0 )
        {
            printf_s( "File crt_access_s.c does have "
                      "write permission.\n" );
        }
        else
        {
            printf_s( "File crt_access_s.c does not have "
                      "write permission.\n" );
        }
    }
    else
    {
        printf_s( "File crt_access_s.c does not exist.\n" );
    }
}
```

```Output
File crt_access_s.c exists.
File crt_access_s.c does not have write permission.
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_stat, _wstat Functions](stat-functions.md)
