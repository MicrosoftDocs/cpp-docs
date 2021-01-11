---
description: "Learn more about: _CrtDoForAllClientObjects"
title: "_CrtDoForAllClientObjects"
ms.date: "11/04/2016"
api_name: ["_CrtDoForAllClientObjects"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CrtDoForAllClientObjects", "CrtDoForAllClientObjects", "crtdbg/_CrdDoForAllClientObjects"]
helpviewer_keywords: ["_CrtDoForAllClientObjects function", "CrtDoForAllClientObjects function"]
ms.assetid: d0fdb835-3cdc-45f1-9a21-54208e8df248
---
# _CrtDoForAllClientObjects

Calls an application-supplied function for all **_CLIENT_BLOCK** types in the heap (debug version only).

## Syntax

```C
void _CrtDoForAllClientObjects(
   void ( * pfn )( void *, void * ),
   void *context
);
```

### Parameters

*pfn*<br/>
Pointer to the application-supplied function callback function. The first parameter to this function points to the data. The second parameter is the context pointer that is passed to the call to **_CrtDoForAllClientObjects**.

*context*<br/>
Pointer to the application-supplied context to pass to the application-supplied function.

## Remarks

The **_CrtDoForAllClientObjects** function searches the heap's linked list for memory blocks with the **_CLIENT_BLOCK** type and calls the application-supplied function when a block of this type is found. The found block and the *context* parameter are passed as arguments to the application-supplied function. During debugging, an application can track a specific group of allocations by explicitly calling the debug heap functions to allocate the memory and specifying that the blocks be assigned the **_CLIENT_BLOCK** block type. These blocks can then be tracked separately and reported on differently during leak detection and memory state reporting.

If the **_CRTDBG_ALLOC_MEM_DF** bit field of the [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md) flag is not turned on, **_CrtDoForAllClientObjects** immediately returns. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtDoForAllClientObjects** are removed during preprocessing.

For more information about the **_CLIENT_BLOCK** type and how it can be used by other debug functions, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

If *pfn* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) is set to **EINVAL** and the function returns.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtDoForAllClientObjects**|\<crtdbg.h>, \<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

**Libraries:** Debug versions of  universal C run-time libraries only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetDbgFlag](crtsetdbgflag.md)<br/>
[Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details)<br/>
[_CrtReportBlockType](crtreportblocktype.md)<br/>
