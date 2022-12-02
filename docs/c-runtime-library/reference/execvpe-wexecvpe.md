---
description: "Learn more about: _execvpe, _wexecvpe"
title: "_execvpe, _wexecvpe"
ms.date: "4/2/2020"
api_name: ["_execvpe", "_wexecvpe", "_o__execvpe", "_o__wexecvpe"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wexecvpe", "_wexecvpe", "_execvpe"]
helpviewer_keywords: ["wexecvpe function", "execvpe function", "_wexecvpe function", "_execvpe function"]
ms.assetid: c0c3c986-d9c0-4814-a96c-10f0b3092766
---
# `_execvpe`, `_wexecvpe`

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

*`cmdname`*\
Path of the file to execute.

*`argv`*\
Array of pointers to parameters.

*`envp`*\
Array of pointers to environment settings.

## Return value

If successful, these functions don't return to the calling process. A return value of -1 indicates an error, in which case the `errno` global variable is set.

| `errno` value | Description |
|---|---|
| `E2BIG` | The space that's required for the arguments and environment settings exceeds 32 KB. |
| `EACCES` | The specified file has a locking or sharing violation. |
| `EMFILE` | Too many files are open. (The specified file must be opened to determine whether it's executable.) |
| `ENOENT` | The file or path isn't found. |
| `ENOEXEC` | The specified file isn't executable or has an invalid executable-file format. |
| `ENOMEM` | Not enough memory is available to execute the new process; the available memory has been corrupted; or an invalid block exists, which indicates that the calling process wasn't allocated correctly. |

For more information about these and other return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions loads and executes a new process, and passes an array of pointers to command-line arguments and an array of pointers to environment settings. These functions use the `PATH` environment variable to find the file to execute.

The **`_execvpe`** functions validate their parameters. These functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md), when:

- *`cmdname`* is a null pointer,
- *`argv`* is either a null pointer or pointer to an empty array,
- the array contains an empty string as the first argument.

If execution is allowed to continue by the handler, these functions set `errno` to `EINVAL`, and return -1. No process is launched.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Function | Required header | Optional header |
|---|---|---|
| **`_execvpe`** | \<process.h> | \<errno.h> |
| **`_wexecvpe`** | \<process.h> or \<wchar.h> | \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example in [`_exec`, `_wexec` functions](../exec-wexec-functions.md).

## See also

[Process and environment control](../process-and-environment-control.md)\
[`_exec`, `_wexec` functions](../exec-wexec-functions.md)\
[`abort`](abort.md)\
[`atexit`](atexit.md)\
[`exit`, `_Exit`, `_exit`](exit-exit-exit.md)\
[`_onexit`, `_onexit_m`](onexit-onexit-m.md)\
[`_spawn`, `_wspawn` functions](../spawn-wspawn-functions.md)\
[`system`, `_wsystem`](system-wsystem.md)
