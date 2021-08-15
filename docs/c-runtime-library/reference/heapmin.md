---
description: "Learn more about: _heapmin"
title: "_heapmin"
ms.date: "4/2/2020"
api_name: ["_heapmin", "_o__heapmin"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_heapmin", "heapmin"]
helpviewer_keywords: ["heap memory", "minimizing heaps", "memory, releasing", "heaps, releasing unused memory", "_heapmin function", "heapmin function"]
ms.assetid: c0bccdf6-2d14-4d7b-a7ff-d6a17bdb410f
---
# _heapmin

Releases unused heap memory to the operating system.

## Syntax

```C
int _heapmin( void );
```

## Return Value

If successful, **_heapmin** returns 0; otherwise, the function returns -1 and sets **errno** to **ENOSYS**.

For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_heapmin** function minimizes the heap by releasing unused heap memory to the operating system. If the operating system does not support **_heapmin**(for example, Windows 98), the function returns -1 and sets **errno** to **ENOSYS**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_heapmin**|\<malloc.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[free](free.md)<br/>
[_heapadd](../../c-runtime-library/heapadd.md)<br/>
[_heapchk](heapchk.md)<br/>
[_heapset](../../c-runtime-library/heapset.md)<br/>
[_heapwalk](heapwalk.md)<br/>
[malloc](malloc.md)<br/>
