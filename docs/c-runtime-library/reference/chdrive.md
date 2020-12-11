---
description: "Learn more about: _chdrive"
title: "_chdrive"
ms.date: "4/2/2020"
api_name: ["_chdrive", "_o__chdrive"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["chdrive", "_chdrive"]
helpviewer_keywords: ["drives, changing", "_chdrive function", "chdrive function"]
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
---
# _chdrive

Changes the current working drive.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _chdrive(
   int drive
);
```

### Parameters

*drive*<br/>
An integer from 1 through 26 that specifies the current working drive (1=A, 2=B, and so forth).

## Return Value

Zero (0) if the current working drive was changed successfully; otherwise, -1.

## Remarks

If *drive* is not in the range from 1 through 26, the invalid-parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the **_chdrive** function returns -1, **errno** is set to **EACCES**, and **_doserrno** is set to **ERROR_INVALID_DRIVE**.

The **_chdrive** function is not thread-safe because it depends on the **SetCurrentDirectory** function, which is itself not thread-safe. To use **_chdrive** safely in a multi-threaded application, you must provide your own thread synchronization. For more information, see [SetCurrentDirectory](/windows/win32/api/winbase/nf-winbase-setcurrentdirectory).

The **_chdrive** function changes only the current working drive;  **_chdir** changes the current working directory.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_chdrive**|\<direct.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_getdrive](getdrive.md).

## See also

[Directory Control](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdrive](getdrive.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
