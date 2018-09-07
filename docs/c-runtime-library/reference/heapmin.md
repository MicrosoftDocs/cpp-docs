---
title: "_heapmin | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_heapmin"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_heapmin", "heapmin"]
dev_langs: ["C++"]
helpviewer_keywords: ["heap memory", "minimizing heaps", "memory, releasing", "heaps, releasing unused memory", "_heapmin function", "heapmin function"]
ms.assetid: c0bccdf6-2d14-4d7b-a7ff-d6a17bdb410f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
