---
description: "Learn more about: _rmdir, _wrmdir"
title: "_rmdir, _wrmdir"
ms.date: "4/2/2020"
api_name: ["_wrmdir", "_rmdir", "_o__rmdir", "_o__wrmdir"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["trmdir", "_trmdir", "wrmdir", "_rmdir", "_wrmdir"]
helpviewer_keywords: ["_rmdir function", "directories [C++], deleting", "rmdir function", "directories [C++], removing", "trmdir function", "_trmdir function", "_wrmdir function", "wrmdir function"]
ms.assetid: 652c2a5a-b0ac-4493-864e-1edf484333c5
---
# _rmdir, _wrmdir

Deletes a directory.

## Syntax

```C
int _rmdir(
   const char *dirname
);
int _wrmdir(
   const wchar_t *dirname
);
```

### Parameters

*dirname*<br/>
Path of the directory to be removed.

## Return Value

Each of these functions returns 0 if the directory is successfully deleted. A return value of -1 indicates an error and **errno** is set to one of the following values:

|errno value|Condition|
|-|-|
| **ENOTEMPTY** | Given path is not a directory, the directory is not empty, or the directory is either the current working directory or the root directory. |
| **ENOENT** | Path is invalid. |
| **EACCES** | A program has an open handle to the directory. |

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_rmdir** function deletes the directory specified by *dirname*. The directory must be empty, and it must not be the current working directory or the root directory.

**_wrmdir** is a wide-character version of **_rmdir**; the *dirname* argument to **_wrmdir** is a wide-character string. **_wrmdir** and **_rmdir** behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_trmdir**|**_rmdir**|**_rmdir**|**_wrmdir**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_rmdir**|\<direct.h>|
|**_wrmdir**|\<direct.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

See the example for [_mkdir](mkdir-wmkdir.md).

## See also

[Directory Control](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
