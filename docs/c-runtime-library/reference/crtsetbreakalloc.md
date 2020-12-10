---
description: "Learn more about: _CrtSetBreakAlloc"
title: "_CrtSetBreakAlloc"
ms.date: "11/04/2016"
api_name: ["_CrtSetBreakAlloc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtSetBreakAlloc", "_CrtSetBreakAlloc"]
helpviewer_keywords: ["CrtSetBreakAlloc function", "_CrtSetBreakAlloc function"]
ms.assetid: 33bfc6af-a9ea-405b-a29f-1c2d4d9880a1
---
# _CrtSetBreakAlloc

Sets a breakpoint on a specified object allocation order number (debug version only).

## Syntax

```C
long _CrtSetBreakAlloc(
   long lBreakAlloc
);
```

### Parameters

*lBreakAlloc*<br/>
Allocation order number, for which to set the breakpoint.

## Return Value

Returns the previous object allocation order number that had a breakpoint set.

## Remarks

**_CrtSetBreakAlloc** allows an application to perform memory leak detection by breaking at a specific point of memory allocation and tracing back to the origin of the request. The function uses the sequential object allocation order number assigned to the memory block when it was allocated in the heap. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtSetBreakAlloc** are removed during preprocessing.

The object allocation order number is stored in the *lRequest* field of the **_CrtMemBlockHeader** structure, defined in Crtdbg.h. When information about a memory block is reported by one of the debug dump functions, this number is enclosed in braces, such as {36}.

For more information about how **_CrtSetBreakAlloc** can be used with other memory management functions, see [Tracking Heap Allocation Requests](/visualstudio/debugger/crt-debug-heap-details). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtSetBreakAlloc**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

```C
// crt_setbrkal.c
// compile with: -D_DEBUG /MTd -Od -Zi -W3 /c /link -verbose:lib -debug

/*
* In this program, a call is made to the _CrtSetBreakAlloc routine
* to verify that the debugger halts program execution when it reaches
* a specified allocation number.
*/

#include <malloc.h>
#include <crtdbg.h>

int main( )
{
        long allocReqNum;
        char *my_pointer;

        /*
         * Allocate "my_pointer" for the first
         * time and ensure that it gets allocated correctly
         */
        my_pointer = malloc(10);
        _CrtIsMemoryBlock(my_pointer, 10, &allocReqNum, NULL, NULL);

        /*
         * Set a breakpoint on the allocation request
         * number for "my_pointer"
         */
        _CrtSetBreakAlloc(allocReqNum+2);

        /*
         * Alternate freeing and reallocating "my_pointer"
         * to verify that the debugger halts program execution
         * when it reaches the allocation request
         */
        free(my_pointer);
        my_pointer = malloc(10);
        free(my_pointer);
        my_pointer = malloc(10);
        free(my_pointer);
}
```

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
