---
description: "Learn more about: _CrtIsValidHeapPointer"
title: "_CrtIsValidHeapPointer"
ms.date: "11/04/2016"
api_name: ["_CrtIsValidHeapPointer"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtlsValidHeapPointer", "_CrtIsValidHeapPointer"]
helpviewer_keywords: ["_CrtIsValidHeapPointer function", "CrtIsValidHeapPointer function"]
ms.assetid: caf597ce-1b05-4764-9f37-0197a982bec5
---
# _CrtIsValidHeapPointer

Verifies that a specified pointer is in a heap allocated by some C run-time library, but not necessarily by the caller's CRT library. In versions of the CRT before Visual Studio 2010, this verifies that the specified pointer is in the local heap (debug version only).

## Syntax

```C
int _CrtIsValidHeapPointer(
   const void *userData
);
```

### Parameters

*userData*<br/>
Pointer to the beginning of an allocated memory block.

## Return Value

**_CrtIsValidHeapPointer** returns TRUE if the specified pointer is in the heap shared by all CRT library instances. In versions of the CRT before Visual Studio 2010, this returns TRUE if the specified pointer is in the local heap. Otherwise, the function returns FALSE.

## Remarks

We do not recommend that you use this function. Starting with the Visual Studio 2010 CRT library, all CRT libraries share one OS heap, the *process heap*. The **_CrtIsValidHeapPointer** function reports whether the pointer was allocated in a CRT heap, but not that it was allocated by the caller's CRT library. For example, consider a block allocated by using the Visual Studio 2010 version of the CRT library. If the **_CrtIsValidHeapPointer** function exported by the Visual Studio 2012 version of the CRT library tests the pointer, it returns TRUE. This is no longer a useful test. In versions of the CRT library before Visual Studio 2010, the function is used to ensure that a specific memory address is within the local heap. The local heap refers to the heap created and managed by a particular instance of the C run-time library. If a dynamic-link library (DLL) contains a static link to the run-time library, it has its own instance of the run-time heap, and therefore its own heap, independent of the application's local heap. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtIsValidHeapPointer** are removed during preprocessing.

Because this function returns TRUE or FALSE, it can be passed to one of the [_ASSERT](assert-asserte-assert-expr-macros.md) macros to create a simple debugging error handling mechanism. The following example causes an assertion failure if the specified address is not located within the local heap:

```C
_ASSERTE( _CrtIsValidHeapPointer( userData ) );
```

For more information about how **_CrtIsValidHeapPointer** can be used with other debug functions and macros, see [Macros for Reporting](/visualstudio/debugger/macros-for-reporting). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtIsValidHeapPointer**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

The following example demonstrates how to test whether memory is valid when it is used with C run-time libraries before Visual Studio 2010. This example is provided for users of legacy CRT library code.

```C
// crt_isvalid.c
// This program allocates a block of memory using _malloc_dbg
// and then tests the validity of this memory by calling
// _CrtIsMemoryBlock,_CrtIsValidPointer, and _CrtIsValidHeapPointer.

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <crtdbg.h>

#define  TRUE   1
#define  FALSE  0

int main( void )
{
    char *my_pointer;

    // Call _malloc_dbg to include the filename and line number
    // of our allocation request in the header information
    my_pointer = (char *)_malloc_dbg( sizeof(char) * 10,
        _NORMAL_BLOCK, __FILE__, __LINE__ );

    // Ensure that the memory got allocated correctly
    _CrtIsMemoryBlock((const void *)my_pointer, sizeof(char) * 10,
        NULL, NULL, NULL );

    // Test for read/write accessibility
    if (_CrtIsValidPointer((const void *)my_pointer,
        sizeof(char) * 10, TRUE))
        printf("my_pointer has read and write accessibility.\n");
    else
        printf("my_pointer only has read access.\n");

    // Make sure my_pointer is within the local heap
    if (_CrtIsValidHeapPointer((const void *)my_pointer))
        printf("my_pointer is within the local heap.\n");
    else
        printf("my_pointer is not located within the local"
               " heap.\n");

    free(my_pointer);
}
```

```Output
my_pointer has read and write accessibility.
my_pointer is within the local heap.
```

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
