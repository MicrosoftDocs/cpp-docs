---
description: "Learn more about: _get_heap_handle"
title: "_get_heap_handle"
ms.date: "4/2/2020"
api_name: ["_get_heap_handle", "_o__get_heap_handle"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_heap_handle", "get_heap_handle"]
helpviewer_keywords: ["heap functions", "memory allocation, heap memory", "_get_heap_handle function", "get_heap_handle function"]
ms.assetid: a4d05049-8528-494a-8281-a470d1e1115c
---
# _get_heap_handle

Returns the handle of the heap that's used by the C run-time system.

## Syntax

```C
intptr_t _get_heap_handle( void );
```

## Return Value

Returns the handle to the Win32 heap used by the C run-time system.

## Remarks

Use this function if you want to call [HeapSetInformation](/windows/win32/api/heapapi/nf-heapapi-heapsetinformation) and enable the Low Fragmentation Heap on the CRT heap.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_heap_handle**|\<malloc.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Sample

```cpp
// crt_get_heap_handle.cpp
// compile with: /MT
#include <windows.h>
#include <malloc.h>
#include <stdio.h>

int main(void)
{
    intptr_t hCrtHeap = _get_heap_handle();
    ULONG ulEnableLFH = 2;
    if (HeapSetInformation((PVOID)hCrtHeap,
                           HeapCompatibilityInformation,
                           &ulEnableLFH, sizeof(ulEnableLFH)))
        puts("Enabling Low Fragmentation Heap succeeded");
    else
        puts("Enabling Low Fragmentation Heap failed");
    return 0;
}
```

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
