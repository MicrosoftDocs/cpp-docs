---
title: "_getpid"
description: "API reference for _getpid, which gets the process identification."
ms.date: "11/04/2016"
api_name: ["_getpid"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getpid"]
helpviewer_keywords: ["getpid function", "_getpid function", "process identification numbers"]
---
# `_getpid`

Gets the process identification.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _getpid( void );
```

## Return value

Returns the process ID obtained from the system. There's no error return.

## Remarks

The **`_getpid`** function obtains the process ID from the system. The process ID uniquely identifies the calling process.

## Requirements

| Routine | Required header |
|---|---|
| **`_getpid`** | `<process.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_getpid.c
// This program uses _getpid to obtain
// the process ID and then prints the ID.

#include <stdio.h>
#include <process.h>

int main( void )
{
   // If run from command line, shows different ID for
   // command line than for operating system shell.

   printf( "Process id: %d\n", _getpid() );
}
```

```Output
Process id: 3584
```

## See also

[Process and environment control](../process-and-environment-control.md)\
[`_mktemp`, `_wmktemp`](mktemp-wmktemp.md)
