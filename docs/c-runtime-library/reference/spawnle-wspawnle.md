---
description: "Learn more about: _spawnle, _wspawnle"
title: "_spawnle, _wspawnle"
ms.date: "11/04/2016"
api_name: ["_spawnle", "_wspawnle"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_spawnle", "wspawnle", "_wspawnle"]
helpviewer_keywords: ["spawnle function", "processes, creating", "_wspawnle function", "processes, executing new", "process creation", "wspawnle function", "_spawnle function"]
ms.assetid: 80308892-2815-49b1-8cca-53894c366f5a
---
# _spawnle, _wspawnle

Creates and executes a new process.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _spawnle(
   int mode,
   const char *cmdname,
   const char *arg0,
   const char *arg1,
   ... const char *argn,
   NULL,
   const char *const *envp
);
intptr_t _wspawnle(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *arg0,
   const wchar_t *arg1,
   ... const wchar_t *argn,
   NULL,
   const wchar_t *const *envp
);
```

### Parameters

*mode*<br/>
Execution mode for the calling process.

*cmdname*<br/>
Path of the file to be executed.

*arg0*, *arg1*, ... *argn*<br/>
List of pointers to arguments. The *arg0* argument is usually a pointer to *cmdname*. The arguments *arg1* through *argn* are pointers to the character strings forming the new argument list. Following *argn*, there must be a **NULL** pointer to mark the end of the argument list.

*envp*<br/>
Array of pointers to environment settings.

## Return Value

The return value from a synchronous **_spawnle** or **_wspawnle** (**_P_WAIT** specified for *mode*) is the exit status of the new process. The return value from an asynchronous **_spawnle** or **_wspawnle** (**_P_NOWAIT** or **_P_NOWAITO** specified for *mode*) is the process handle. The exit status is 0 if the process terminated normally. You can set the exit status to a nonzero value if the spawned process specifically calls the **exit** routine with a nonzero argument. If the new process did not explicitly set a positive exit status, a positive exit status indicates an abnormal exit with an abort or an interrupt. A return value of -1 indicates an error (the new process is not started). In this case, **errno** is set to one of the following values.

| Value | Description |
|--|--|
| **E2BIG** | Argument list exceeds 1024 bytes. |
| **EINVAL** | *mode* argument is invalid. |
| **ENOENT** | File or path is not found. |
| **ENOEXEC** | Specified file is not executable or has invalid executable-file format. |
| **ENOMEM** | Not enough memory is available to execute the new process. |

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions creates and executes a new process, passing each command-line argument as a separate parameter and also passing an array of pointers to environment settings.

These functions validate their parameters. If either *cmdname* or *arg0* is an empty string or a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL**, and return -1. No new process is spawned.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_spawnle**|\<process.h>|
|**_wspawnle**|\<stdio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_flushall](flushall.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
