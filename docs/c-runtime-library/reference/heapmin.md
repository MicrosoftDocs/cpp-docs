---
description: "Learn more about: _heapmin"
title: "_heapmin"
ms.date: "4/2/2020"
api_name: ["_heapmin", "_o__heapmin"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_heapmin", "heapmin"]
helpviewer_keywords: ["heap memory", "minimizing heaps", "memory, releasing", "heaps, releasing unused memory", "_heapmin function", "heapmin function"]
ms.assetid: c0bccdf6-2d14-4d7b-a7ff-d6a17bdb410f
---
# `_heapmin`

Releases unused heap memory to the operating system.

## Syntax

```C
int _heapmin( void );
```

## Return value

If successful, **`_heapmin`** returns 0; otherwise, the function returns -1 and sets `errno` to `ENOSYS`.

For more information about this and other return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_heapmin`** function minimizes the heap by releasing unused heap memory to the operating system. If the operating system doesn't support **`_heapmin`**(for example, Windows 98), the function returns -1 and sets `errno` to `ENOSYS`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header | Optional header |
|---|---|---|
| **`_heapmin`** | \<malloc.h> | \<errno.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Memory allocation](../memory-allocation.md)\
[`free`](free.md)\
[`_heapadd`](../heapadd.md)\
[`_heapchk`](heapchk.md)\
[`_heapset`](../heapset.md)\
[`_heapwalk`](heapwalk.md)\
[`malloc`](malloc.md)
