---
description: "Learn more about: _query_new_handler"
title: "_query_new_handler"
ms.date: "11/04/2016"
api_name: ["_query_new_handler"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_query_new_handler", "query_new_handler"]
helpviewer_keywords: ["query_new_handler function", "handler routines", "error handling", "_query_new_handler function"]
ms.assetid: 9a84b5c3-fe33-4c01-83a0-be87dc3ec518
---
# _query_new_handler

Returns the address of the current new handler routine.

## Syntax

```C
_PNH _query_new_handler(
   void
);
```

## Return Value

Returns the address of the current new handler routine as set by **_set_new_handler**.

## Remarks

The C++ **_query_new_handler** function returns the address of the current exception-handling function set by the C++ [_set_new_handler](set-new-handler.md) function. **_set_new_handler** is used to specify an exception-handling function that is to gain control if the **`new`** operator fails to allocate memory. For more information, see the discussion of the [new and delete operators](../../cpp/new-and-delete-operators.md) in the C++ Language Reference.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_query_new_handler**|\<new.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[free](free.md)<br/>
