---
description: "Learn more about: _execvpe, _wexecvpe"
title: "_execvpe, _wexecvpe"
ms.date: "4/2/2020"
api_name: ["_execvpe", "_wexecvpe", "_o__execvpe", "_o__wexecvpe"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wexecvpe", "_wexecvpe", "_execvpe"]
helpviewer_keywords: ["wexecvpe function", "execvpe function", "_wexecvpe function", "_execvpe function"]
ms.assetid: c0c3c986-d9c0-4814-a96c-10f0b3092766
---
# _execvpe, _wexecvpe

Loads and runs new child processes.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _execvpe(
   const char *cmdname,
   const char *const *argv,
   const char *const *envp
);
intptr_t _wexecvpe(
   const wchar_t *cmdname,
   const wchar_t *const *argv,
   const wchar_t *const *envp
);
```

### Parameters

*cmdname*<br/>
Path of the file to execute.

*argv*<br/>
Array of pointers to parameters.

*envp*<br/>
Array of pointers to environment settings.

## Return Value

If successful, these functions do not return to the calling process. A return value of -1 indicates an error, in which case the **errno** global variable is set.

|**errno** value|Description|
|-------------------|-----------------|
|**E2BIG**|The space that's required for the arguments and environment settings exceeds 32 KB.|
|**EACCES**|The specified file has a locking or sharing violation.|
|**EMFILE**|Too many files are open. (The specified file must be opened to determine whether it is executable.)|
|**ENOENT**|The file or path is not found.|
|**ENOEXEC**|The specified file is not executable or has an invalid executable-file format.|
|**ENOMEM**|Not enough memory is available to execute the new process; the available memory has been corrupted; or an invalid block exists, which indicates that the calling process was not allocated correctly.|

For more information about these and other return codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions loads and executes a new process, and passes an array of pointers to command-line arguments and an array of pointers to environment settings. These functions use the **PATH** environment variable to find the file to execute.

The **_execvpe** functions validate their parameters. If the *cmdname* is a null pointer, or if *argv* is a null pointer, a pointer to an empty array, or a pointer to an array that contains an empty string as the first argument, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return -1. No process is launched.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|Optional header|
|--------------|---------------------|---------------------|
|**_execvpe**|\<process.h>|\<errno.h>|
|**_wexecvpe**|\<process.h> or \<wchar.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
