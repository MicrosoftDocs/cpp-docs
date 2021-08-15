---
description: "Learn more about: _spawnve, _wspawnve"
title: "_spawnve, _wspawnve"
ms.date: "4/2/2020"
api_name: ["_spawnve", "_wspawnve", "_o__spawnve", "_o__wspawnve"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wspawnve", "_spawnve", "_wspawnve"]
helpviewer_keywords: ["_spawnve function", "spawnve function", "wspawnve function", "processes, creating", "_wspawnve function", "processes, executing new", "process creation"]
ms.assetid: 26d1713d-b551-4f21-a07b-e9891a2ae6cf
---
# _spawnve, _wspawnve

Creates and executes a new process.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _spawnve(
   int mode,
   const char *cmdname,
   const char *const *argv,
   const char *const *envp
);
intptr_t _wspawnve(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *const *argv,
   const wchar_t *const *envp
);
```

### Parameters

*mode*<br/>
Execution mode for a calling process.

*cmdname*<br/>
Path of the file to be executed.

*argv*<br/>
Array of pointers to arguments. The argument *argv*[0] is usually a pointer to a path in real mode or to the program name in protected mode, and *argv*[1] through *argv*[**n**] are pointers to the character strings forming the new argument list. The argument *argv*[**n** +1] must be a **NULL** pointer to mark the end of the argument list.

*envp*<br/>
Array of pointers to environment settings.

## Return Value

The return value from a synchronous **_spawnve** or **_wspawnve** (**_P_WAIT** specified for *mode*) is the exit status of the new process. The return value from an asynchronous **_spawnve** or **_wspawnve** (**_P_NOWAIT** or **_P_NOWAITO** specified for *mode*) is the process handle. The exit status is 0 if the process terminated normally. You can set the exit status to a nonzero value if the spawned process specifically calls the **exit** routine with a nonzero argument. If the new process did not explicitly set a positive exit status, a positive exit status indicates an abnormal exit with an abort or an interrupt. A return value of -1 indicates an error (the new process is not started). In this case, **errno** is set to one of the following values.

| Value | Description |
|-|-|
| **E2BIG** | Argument list exceeds 1024 bytes. |
| **EINVAL** | *mode* argument is invalid. |
| **ENOENT** | File or path is not found. |
| **ENOEXEC** | Specified file is not executable or has invalid executable-file format. |
| **ENOMEM** | Not enough memory is available to execute the new process. |

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions creates and executes a new process, passing an array of pointers to command-line arguments and an array of pointers to environment settings.

These functions validate their parameters. If either *cmdname* or *argv* is a null pointer, or if *argv* points to null pointer, or *argv*[0] is an empty string, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL**, and return -1. No new process is spawned.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_spawnve**|\<stdio.h> or \<process.h>|
|**_wspawnve**|\<stdio.h> or \<wchar.h>|

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
