---
description: "Learn more about: _CrtDbgBreak"
title: "_CrtDbgBreak"
ms.date: "11/04/2016"
api_name: ["_CrtDbgBreak"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CrtDbgBreak", "CrtDbgBreak"]
helpviewer_keywords: ["CrtDbgBreak function", "_CrtDbgBreak function"]
ms.assetid: 01f8b4a2-a2c7-4e1f-9f39-e573b4a7871f
---
# _CrtDbgBreak

Sets a break point on a particular line of code. (Used in debug mode only.)

## Syntax

```C
void _CrtDbgBreak( void );
```

## Return Value

There is no return value.

## Remarks

The **_CrtDbgBreak** function sets a debug breakpoint on the particular line of code where the function resides. This function is used in debug mode only and is dependent on **_DEBUG** being previously defined.

For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Writing Your Own Debug Hook Functions](/visualstudio/debugger/debug-hook-function-writing).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtDbgBreak**|\<CRTDBG.h>|

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[__debugbreak](../../intrinsics/debugbreak.md)<br/>
