---
description: "Learn more about: _CrtGetReportHook"
title: "_CrtGetReportHook"
ms.date: "11/04/2016"
api_name: ["_CrtGetReportHook"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtGetReportHook", "_CrtGetReportHook"]
helpviewer_keywords: ["CrtGetReportHook function", "_CrtGetReportHook function"]
ms.assetid: 922758ed-7edd-4359-9c92-0535192dc11a
---
# _CrtGetReportHook

Retrieves the client-defined reporting function for hooking it into the C run time for the debug reporting process (debug version only).

## Syntax

```C
_CRT_REPORT_HOOK _CrtGetReportHook( void );
```

## Return Value

Returns the current client-defined reporting function.

## Remarks

**_CrtGetReportHook** allows an application to retrieve the current reporting function for the C run-time debug library reporting process.

For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](/visualstudio/debugger/debug-hook-function-writing).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtGetReportHook**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## Example

For a sample of how to use **_CrtSetReportHook**, see [report](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/report).

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetReportHook](crtsetreporthook.md)<br/>
