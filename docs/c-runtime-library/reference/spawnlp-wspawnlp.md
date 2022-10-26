---
description: "Learn more about: _spawnlp, _wspawnlp"
title: "_spawnlp, _wspawnlp"
ms.date: "11/04/2016"
api_name: ["_wspawnlp", "_spawnlp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wspawnlp", "wspawnlp", "_spawnlp"]
helpviewer_keywords: ["wspawnlp function", "_spawnlp function", "processes, creating", "processes, executing new", "_wspawnlp function", "process creation", "spawnlp function"]
ms.assetid: 74fc6e7a-4f24-4103-9387-7177875875e6
---
# `_spawnlp`, `_wspawnlp`

Creates and executes a new process.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _spawnlp(
   int mode,
   const char *cmdname,
   const char *arg0,
   const char *arg1,
   ... const char *argn,
   NULL
);
intptr_t _wspawnlp(
   int mode,
   const wchar_t *cmdname,
   const wchar_t *arg0,
   const wchar_t *arg1,
   ... const wchar_t *argn,
   NULL
);
```

### Parameters

*`mode`*\
Execution mode for the calling process.

*`cmdname`*\
Path of the file to be executed.

*`arg0`*, *`arg1`*, ... *`argN`*\
List of pointers to arguments. The *`arg0`* argument is usually a pointer to *`cmdname`*. The arguments *`arg1`* through *`argN`* are pointers to the character strings forming the new argument list. Following *`argN`*, there must be a `NULL` pointer to mark the end of the argument list.

## Return value

The return value from a synchronous **`_spawnlp`** or **`_wspawnlp`** (`_P_WAIT` specified for *`mode`*) is the exit status of the new process. The return value from an asynchronous **`_spawnlp`** or **`_wspawnlp`** (`_P_NOWAIT` or `_P_NOWAITO` specified for *`mode`*) is the process handle. The exit status is 0 if the process terminated normally. You can set the exit status to a nonzero value if the spawned process specifically calls the `exit` routine with a nonzero argument. If the new process didn't explicitly set a positive exit status, a positive exit status indicates an abnormal exit with an abort or an interrupt. A return value of -1 indicates an error (the new process isn't started). In this case, `errno` is set to one of the following values.

| Value | Description |
|-|-|
| `E2BIG` | Argument list exceeds 1024 bytes. |
| `EINVAL` | *`mode`* argument is invalid. |
| `ENOENT` | File or path isn't found. |
| `ENOEXEC` | Specified file isn't executable or has invalid executable-file format. |
| `ENOMEM` | Not enough memory is available to execute the new process. |

For more information about these and other return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions creates and executes a new process, passing each command-line argument as a separate parameter and using the `PATH` environment variable to find the file to execute.

These functions validate their parameters. If either *`cmdname`* or *`arg0`* is an empty string or a null pointer, these functions generate an invalid parameter exception, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL`, and return -1. No new process is spawned.

## Requirements

| Routine | Required header |
|---|---|
| **`_spawnlp`** | \<process.h> |
| **`_wspawnlp`** | \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example in [`_spawn`, `_wspawn` functions](../spawn-wspawn-functions.md).

## See also

[Process and environment control](../process-and-environment-control.md)\
[`_spawn`, `_wspawn` functions](../spawn-wspawn-functions.md)\
[`abort`](abort.md)\
[`atexit`](atexit.md)\
[`_exec`, `_wexec` functions](../exec-wexec-functions.md)\
[`exit`, `_Exit`, `_exit`](exit-exit-exit.md)\
[`_flushall`](flushall.md)\
[`_getmbcp`](getmbcp.md)\
[`_onexit`, `_onexit_m`](onexit-onexit-m.md)\
[`_setmbcp`](setmbcp.md)\
[`system`, `_wsystem`](system-wsystem.md)
