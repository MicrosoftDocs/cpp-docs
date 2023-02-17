---
description: "Learn more about: system, _wsystem"
title: "system, _wsystem"
ms.date: "4/2/2020"
api_name: ["system", "_wsystem", "_o__wsystem", "_o_system"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["PROCESS/system", "CORECRT_WPROCESS/_wsystem", "TCHAR/_tsystem", "system", "_wsystem", "_tsystem"]
helpviewer_keywords: ["_wsystem function", "wsystem function", "tsystem function", "_tsystem function", "system function", "commands, executing", "command interpreter"]
ms.assetid: 7d3df2b6-f742-49ce-bf52-012b0aee3df5
---
# `system`, `_wsystem`

Executes a command.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int system(
   const char *command
);
int _wsystem(
   const wchar_t *command
);
```

### Parameters

*`command`*\
The command to be executed.

## Return value

If *`command`* is `NULL` and the command interpreter is found, returns a nonzero value. If the command interpreter isn't found, returns 0 and sets `errno` to `ENOENT`. If *`command`* isn't `NULL`, **`system`** returns the value that is returned by the command interpreter. It returns the value 0 only if the command interpreter returns the value 0. A return value of -1 indicates an error, and `errno` is set to one of the following values:

| Value | Description |
|-|-|
| `E2BIG` | The argument list (which is system-dependent) is too large. |
| `ENOENT` | The command interpreter can't be found. |
| `ENOEXEC` | The command-interpreter file can't be executed because the format isn't valid. |
| `ENOMEM` | Not enough memory is available to execute command; or available memory has been corrupted; or a non-valid block exists, which indicates that the calling process has been allocated incorrectly. |

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`system`** function passes *`command`* to the command interpreter, which executes the string as an operating-system command. **`system`** uses the `COMSPEC` and `PATH` environment variables to locate the command-interpreter file CMD.exe. If *`command`* is `NULL`, the function just checks whether the command interpreter exists.

You must explicitly flush, by using [`fflush`](fflush.md) or [`_flushall`](flushall.md), or close any stream before you call **`system`**.

**`_wsystem`** is a wide-character version of **`system`**; the *`command`* argument to **`_wsystem`** is a wide-character string. These functions behave identically otherwise.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tsystem`** | **`system`** | **`system`** | **`_wsystem`** |

## Requirements

| Routine | Required header |
|---|---|
| **`system`** | `<process.h>` or `<stdlib.h>` |
| **`_wsystem`** | `<process.h>` or `<stdlib.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

This example uses **`system`** to TYPE a text file.

```C
// crt_system.c

#include <process.h>

int main( void )
{
   system( "type crt_system.txt" );
}
```

### Input: crt_system.txt

```Input
Line one.
Line two.
```

### Output

```Output
Line one.
Line two.
```

## See also

[Process and environment control](../process-and-environment-control.md)\
[`_exec`, `_wexec` functions](../exec-wexec-functions.md)\
[`exit`, `_Exit`, `_exit`](exit-exit-exit.md)\
[`_flushall`](flushall.md)\
[`_spawn`, `_wspawn` functions](../spawn-wspawn-functions.md)
