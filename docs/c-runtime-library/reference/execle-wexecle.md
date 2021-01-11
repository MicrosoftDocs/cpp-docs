---
description: "Learn more about: _execle, _wexecle"
title: "_execle, _wexecle"
ms.date: "11/04/2016"
api_name: ["_execle", "_wexecle"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wexecle", "_execle", "_wexecle"]
helpviewer_keywords: ["wexecle function", "execle function", "_wexecle function", "_execle function"]
ms.assetid: 75efa9c5-96b7-4e23-acab-06258901f63a
---
# _execle, _wexecle

Loads and executes new child processes.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _execle(
   const char *cmdname,
   const char *arg0,
   ... const char *argn,
   NULL,
   const char *const *envp
);
intptr_t _wexecle(
   const wchar_t *cmdname,
   const wchar_t *arg0,
   ... const wchar_t *argn,
   NULL,
   const char *const *envp
);
```

### Parameters

*cmdname*<br/>
Path of the file to execute.

*arg0*, ... *argn*<br/>
List of pointers to parameters.

*envp*<br/>
Array of pointers to environment settings.

## Return Value

If successful, these functions do not return to the calling process. A return value of -1 indicates an error, in which case the **errno** global variable is set.

|**errno** value|Description|
|-------------------|-----------------|
|**E2BIG**|The space that's required for the arguments and the environment settings exceeds 32 KB.|
|**EACCES**|The specified file has a locking or sharing violation.|
|**EINVAL**|Invalid parameter.|
|**EMFILE**|Too many files are open. (The specified file must be opened to determine whether it is executable.)|
|**ENOENT**|The file or path is not found.|
|**ENOEXEC**|The specified file is not executable or has an invalid executable-file format.|
|**ENOMEM**|Not enough memory is available to execute the new process; the available memory has been corrupted; or an invalid block exists, which indicates that the calling process was not allocated correctly.|

For more information about these return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions loads and executes a new process, and passes each command-line argument as a separate parameter and passes an array of pointers to environment settings.

The **_execle** functions validate their parameters. If *cmdname* or *arg0* is a null pointer or an empty string, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return -1. No new process is launched.

## Requirements

|Function|Required header|Optional header|
|--------------|---------------------|---------------------|
|**_execle**|\<process.h>|\<errno.h>|
|**_wexecle**|\<process.h> or \<wchar.h>|\<errno.h>|

For more information, see [Compatibility](../../c-runtime-library/compatibility.md).

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
