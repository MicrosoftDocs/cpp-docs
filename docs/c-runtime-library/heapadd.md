---
description: "Learn more about: _heapadd"
title: "_heapadd"
ms.date: "11/04/2016"
api_name: ["_heapadd"]
api_location: ["msvcr100.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr80.dll", "msvcrt.dll", "msvcr110.dll", "msvcr90.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["heapadd", "_heapadd"]
helpviewer_keywords: ["_heapadd function", "memory, adding to heaps", "heaps, adding memory", "heapadd function"]
ms.assetid: 4d691fe2-2763-49f4-afb1-62738b7cd3ff
---
# _heapadd

Adds memory to the heap.

> [!IMPORTANT]
> This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.

## Syntax

```
int _heapadd(
   void *memblock,
   size_t size
);
```

#### Parameters

*memblock*<br/>
Pointer to the heap memory.

*size*<br/>
Size of memory to add, in bytes.

## Return Value

If successful, `_heapadd` returns 0; otherwise, the function returns -1 and sets `errno` to `ENOSYS`.

For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Beginning with Visual C++ version 4.0, the underlying heap structure was moved to the C run-time libraries to support the new debugging features. As a result, `_heapadd` is no longer supported on any platform that is based on the Win32 API.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|`_heapadd`|\<malloc.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Memory Allocation](../c-runtime-library/memory-allocation.md)<br/>
[free](../c-runtime-library/reference/free.md)<br/>
[_heapchk](../c-runtime-library/reference/heapchk.md)<br/>
[_heapmin](../c-runtime-library/reference/heapmin.md)<br/>
[_heapset](../c-runtime-library/heapset.md)<br/>
[_heapwalk](../c-runtime-library/reference/heapwalk.md)<br/>
[malloc](../c-runtime-library/reference/malloc.md)<br/>
[realloc](../c-runtime-library/reference/realloc.md)
