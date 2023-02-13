---
description: "Learn more about: _CrtSetDumpClient"
title: "_CrtSetDumpClient"
ms.date: "11/04/2016"
api_name: ["_CrtSetDumpClient"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_CrtSetDumpClient", "CrtSetDumpClient"]
helpviewer_keywords: ["_CrtSetDumpClient function", "CrtSetDumpClient function"]
ms.assetid: f3dd06d0-c331-4a12-b68d-25378d112033
---
# `_CrtSetDumpClient`

Installs an application-defined function to dump `_CLIENT_BLOCK` type memory blocks (debug version only).

## Syntax

```C
_CRT_DUMP_CLIENT _CrtSetDumpClient( _CRT_DUMP_CLIENT dumpClient );
```

### Parameters

*`dumpClient`*\
New client-defined memory dump function to hook.

## Return value

Returns the previously defined client block dump function.

## Remarks

The **`_CrtSetDumpClient`** function allows the application to hook its own function to dump objects stored in `_CLIENT_BLOCK` memory blocks. As a result, every time a debug dump function such as [`_CrtMemDumpAllObjectsSince`](crtmemdumpallobjectssince.md) or [`_CrtDumpMemoryLeaks`](crtdumpmemoryleaks.md) dumps a `_CLIENT_BLOCK` memory block, the application's dump function is called as well. **`_CrtSetDumpClient`** provides an application with an easy method for detecting memory leaks and validating or reporting the contents of data stored in `_CLIENT_BLOCK` blocks. When [`_DEBUG`](../debug.md) isn't defined, calls to **`_CrtSetDumpClient`** are removed during preprocessing.

The **`_CrtSetDumpClient`** function installs the new application-defined dump function specified in *`dumpClient`* and returns the previously defined dump function. An example of a client block dump function is as follows:

```C
void DumpClientFunction( void *userPortion, size_t blockSize );
```

The *`userPortion`* argument is a pointer to the beginning of the user data portion of the memory block and *`blockSize`* specifies the size of the allocated memory block in bytes. The client block dump function must return **`void`**. The pointer to the client dump function that is passed to **`_CrtSetDumpClient`** is of type `_CRT_DUMP_CLIENT`, as defined in Crtdbg.h:

```C
typedef void (__cdecl *_CRT_DUMP_CLIENT)( void *, size_t );
```

For more information about functions that operate on `_CLIENT_BLOCK` type memory blocks, see [Client block hook functions](../crt-debugging-techniques.md#client-block-hook-functions). The [`_CrtReportBlockType`](crtreportblocktype.md) function can be used to return information about block types and subtypes.

## Requirements

| Routine | Required header |
|---|---|
| **`_CrtSetDumpClient`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## See also

[Debug routines](../debug-routines.md)\
[`_CrtReportBlockType`](crtreportblocktype.md)\
[`_CrtGetDumpClient`](crtgetdumpclient.md)
