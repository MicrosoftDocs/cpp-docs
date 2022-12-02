---
description: "Learn more about: _pclose"
title: "_pclose"
ms.date: "4/2/2020"
api_name: ["_pclose", "_o__pclose"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_pclose", "pclose"]
helpviewer_keywords: ["_pclose function", "pclose function", "pipes, closing"]
ms.assetid: e2e31a9e-ba3a-4124-bcbb-c4040110b3d3
---
# `_pclose`

Waits for a new command processor and closes the stream on the associated pipe.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _pclose(
FILE *stream
);
```

### Parameters

*`stream`*\
Return value from the previous call to `_popen`.

## Return value

Returns the exit status of the terminating command processor, or -1 if an error occurs. The format of the return value is the same as for `_cwait`, except the low-order and high-order bytes are swapped. If stream is `NULL`, **`_pclose`** sets `errno` to `EINVAL` and returns -1.

For information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_pclose`** function looks up the process ID of the command processor (Cmd.exe) started by the associated `_popen` call, executes a [`_cwait`](cwait.md) call on the new command processor, and closes the stream on the associated pipe.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_pclose`** | \<stdio.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## See also

[Process and environment control](../process-and-environment-control.md)\
[`_pipe`](pipe.md)\
[`_popen`, `_wpopen`](popen-wpopen.md)
