---
description: "Learn more about: _CrtMemDumpAllObjectsSince"
title: "_CrtMemDumpAllObjectsSince"
ms.date: "11/04/2016"
api_name: ["_CrtMemDumpAllObjectsSince"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtMemDumpAllObjectsSince", "_CrtMemDumpAllObjectsSince"]
helpviewer_keywords: ["_CrtMemDumpAllObjectsSince function", "CrtMemDumpAllObjectsSince function"]
ms.assetid: c48a447a-e6bb-475c-9271-a3021182a0dc
---
# _CrtMemDumpAllObjectsSince

Dumps information about objects in the heap from the start of program execution or from a specified heap state (debug version only).

## Syntax

```C
void _CrtMemDumpAllObjectsSince(
   const _CrtMemState *state
);
```

### Parameters

*state*<br/>
Pointer to the heap state to begin dumping from or **NULL**.

## Remarks

The **_CrtMemDumpAllObjectsSince** function dumps the debug header information of objects allocated in the heap in a user-readable form. The dump information can be used by the application to track allocations and detect memory problems. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to **_CrtMemDumpAllObjectsSince** are removed during preprocessing.

**_CrtMemDumpAllObjectsSince** uses the value of the *state* parameter to determine where to initiate the dump operation. To begin dumping from a specified heap state, the *state* parameter must be a pointer to a **_CrtMemState** structure that has been filled in by [_CrtMemCheckpoint](crtmemcheckpoint.md) before **_CrtMemDumpAllObjectsSince** was called. When *state* is **NULL**, the function begins the dump from the start of program execution.

If the application has installed a dump hook function by calling [_CrtSetDumpClient](crtsetdumpclient.md), then every time **_CrtMemDumpAllObjectsSince** dumps information about a **_CLIENT_BLOCK** type of block, it calls the application-supplied dump function as well. By default, internal C run-time blocks (**_CRT_BLOCK**) are not included in memory dump operations. The [_CrtSetDbgFlag](crtsetdbgflag.md) function can be used to turn on the **_CRTDBG_CHECK_CRT_DF** bit of **_crtDbgFlag** to include these blocks. In addition, blocks marked as freed or ignored (**_FREE_BLOCK**, **_IGNORE_BLOCK**) are not included in the memory dump.

For more information about heap state functions and the **_CrtMemState** structure, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details). For more information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtMemDumpAll-ObjectsSince**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

For a sample of how to use **_CrtMemDumpAllObjectsSince**, see [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
