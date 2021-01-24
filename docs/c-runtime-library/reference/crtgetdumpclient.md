---
description: "Learn more about: _CrtGetDumpClient"
title: "_CrtGetDumpClient"
ms.date: "11/04/2016"
api_name: ["_CrtGetDumpClient"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtGetDumpClient", "_CrtGetDumpClient"]
helpviewer_keywords: ["_CrtGetDumpClient function", "CrtGetDumpClient function"]
ms.assetid: 9051867f-341b-493b-b53d-45d2b454a3ad
---
# _CrtGetDumpClient

Retrieves the current application-defined function for dumping the **_CLIENT_BLOCK** type memory blocks (debug version only).

## Syntax

```C
_CRT_DUMP_CLIENT _CrtGetDumpClient( void );
```

## Return Value

Returns the current dump routine.

## Remarks

The **_CrtGetDumpClient** function retrieves the current hook function for dumping objects stored in the **_CLIENT_BLOCK** memory blocks for the C run-time debug memory dump process.

For more information about using other hook-capable run-time functions and writing your own client-defined hook functions, see [Debug Hook Function Writing](/visualstudio/debugger/debug-hook-function-writing).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_CrtGetDumpClient**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.

## See also

[Debug Routines](../../c-runtime-library/debug-routines.md)<br/>
[_CrtReportBlockType](crtreportblocktype.md)<br/>
[_CrtSetDumpClient](crtsetdumpclient.md)<br/>
