---
description: "Learn more about: _spawnvpe, _wspawnvpe"
title: "_spawnvpe, _wspawnvpe"
ms.date: "4/2/2020"
api_name: ["_spawnvpe", "_wspawnvpe", "_o__spawnvpe", "_o__wspawnvpe"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_spawnvpe", "wspawnvpe", "_wspawnvpe"]
helpviewer_keywords: ["_wspawnvpe function", "processes, creating", "_spawnvpe function", "processes, executing new", "wspawnvpe function", "process creation", "spawnvpe function"]
ms.assetid: 3db6394e-a955-4837-97a1-fab1db1e6092
---
# `_spawnvpe`, `_wspawnvpe`

Creates and executes a new process.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _spawnvpe(
   int mode,
   const char *cmdname,
   const char *const *argv,
   const char *const *envp
);
intptr_t _wspawnvpe(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *const *argv,
   const wchar_t *const *envp
);
```

### Parameters

*`mode`*\
Execution mode for calling process

*`cmdname`*\
Path of file to be executed

*`argv`*\
Array of pointers to arguments. The argument *`argv[0]`* is usually a pointer to a path in real mode or to the program name in protected mode, and *`argv[1]`* through *`argv[n]`* are pointers to the character strings forming the new argument list. The argument *`argv[n+1]`* must be a `NULL` pointer to mark the end of the argument list.

*`envp`*\
Array of pointers to environment settings

## Return value

The return value from a synchronous **`_spawnvpe`** or **`_wspawnvpe`** (`_P_WAIT` specified for *`mode`*) is the exit status of the new process. The return value from an asynchronous **`_spawnvpe`** or **`_wspawnvpe`** (`_P_NOWAIT` or `_P_NOWAITO` specified for *`mode`*) is the process handle. The exit status is 0 if the process terminated normally. You can set the exit status to a nonzero value if the spawned process specifically calls the `exit` routine with a nonzero argument. If the new process didn't explicitly set a positive exit status, a positive exit status indicates an abnormal exit with an abort or an interrupt. A return value of -1 indicates an error (the new process isn't started). In this case, `errno` is set to one of the following values:

| Value | Description |
|-|-|
| `E2BIG` | Argument list exceeds 1024 bytes. |
| `EINVAL` | *`mode`* argument is invalid. |
| `ENOENT` | File or path isn't found. |
| `ENOEXEC` | Specified file isn't executable or has invalid executable-file format. |
| `ENOMEM` | Not enough memory is available to execute the new process. |

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions creates and executes a new process, passing an array of pointers to command-line arguments and an array of pointers to environment settings. These functions use the `PATH` environment variable to find the file to execute.

These functions validate their parameters. If either *`cmdname`* or *`argv`* is a null pointer, or if *`argv`* points to null pointer, or *`argv[0]`* is an empty string, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md) . If execution is allowed to continue, these functions set `errno` to `EINVAL`, and return -1. No new process is spawned.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_spawnvpe`** | \<stdio.h> or \<process.h> |
| **`_wspawnvpe`** | \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example in [`_spawn`, `_wspawn` functions](../spawn-wspawn-functions.md).

## See also

[`abort`](abort.md)\
[`atexit`](atexit.md)\
[`_exec`, `_wexec` functions](../exec-wexec-functions.md)\
[`exit`, `_Exit`, `_exit`](exit-exit-exit.md)\
[`_flushall`](flushall.md)\
[`_getmbcp`](getmbcp.md)\
[`_onexit`, `_onexit_m`](onexit-onexit-m.md)\
[`_setmbcp`](setmbcp.md)\
[`system`, `_wsystem`](system-wsystem.md)
