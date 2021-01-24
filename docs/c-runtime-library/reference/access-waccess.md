---
description: "Learn more about: _access, _waccess"
title: "_access, _waccess"
ms.date: "4/2/2020"
api_name: ["_access", "_waccess", "_o__access", "_o__waccess"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_waccess", "_access", "taccess", "waccess", "_taccess"]
helpviewer_keywords: ["access function", "_taccess function", "waccess function", "_access function", "_waccess function", "taccess function"]
ms.assetid: ba34f745-85c3-49e5-a7d4-3590bd249dd3
---
# _access, _waccess

Determines if a file is read-only or not. More secure versions are available; see [_access_s, _waccess_s](access-s-waccess-s.md).

## Syntax

```C
int _access(
   const char *path,
   int mode
);
int _waccess(
   const wchar_t *path,
   int mode
);
```

### Parameters

*path*<br/>
File or directory path.

*mode*<br/>
Read/write attribute.

## Return Value

Each function returns 0 if the file has the given mode. The function returns -1 if the named file does not exist or does not have the given mode; in this case, `errno` is set as shown in the following table.

| Value | Description |
|--|--|
| `EACCES` | Access denied: the file's permission setting does not allow specified access. |
| `ENOENT` | File name or path not found. |
| `EINVAL` | Invalid parameter. |

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

When used with files, the **_access** function determines whether the specified file or directory exists and has the attributes specified by the value of *mode*. When used with directories, **_access** determines only whether the specified directory exists; in Windows 2000 and later operating systems, all directories have read and write access.

|*mode* value|Checks file for|
|------------------|---------------------|
|00|Existence only|
|02|Write-only|
|04|Read-only|
|06|Read and write|

This function only checks whether the file and directory are read-only or not, it does not check the filesystem security settings. For that you need an access token. For more information on filesystem security, see [Access Tokens](/windows/win32/SecAuthZ/access-tokens). An ATL class exists to provide this functionality; see [CAccessToken Class](../../atl/reference/caccesstoken-class.md).

**_waccess** is a wide-character version of **_access**; the *path* argument to **_waccess** is a wide-character string. **_waccess** and **_access** behave identically otherwise.

This function validates its parameters. If *path* is NULL or *mode* does not specify a valid mode, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function sets `errno` to `EINVAL` and returns -1.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_taccess`|**_access**|**_access**|**_waccess**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**_access**|\<io.h>|\<errno.h>|
|**_waccess**|\<wchar.h> or \<io.h>|\<errno.h>|

## Example

The following example uses **_access** to check the file named crt_ACCESS.C to see whether it exists and whether writing is allowed.

```C
// crt_access.c
// compile with: /W1
// This example uses _access to check the file named
// crt_ACCESS.C to see if it exists and if writing is allowed.

#include  <io.h>
#include  <stdio.h>
#include  <stdlib.h>

int main( void )
{
    // Check for existence.
    if( (_access( "crt_ACCESS.C", 0 )) != -1 )
    {
        printf_s( "File crt_ACCESS.C exists.\n" );

        // Check for write permission.
        // Assume file is read-only.
        if( (_access( "crt_ACCESS.C", 2 )) == -1 )
            printf_s( "File crt_ACCESS.C does not have write permission.\n" );
    }
}
```

```Output
File crt_ACCESS.C exists.
File crt_ACCESS.C does not have write permission.
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_stat, _wstat Functions](stat-functions.md)
