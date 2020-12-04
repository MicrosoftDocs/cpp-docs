---
description: "Learn more about: _query_new_mode"
title: "_query_new_mode"
ms.date: "11/04/2016"
api_name: ["_query_new_mode"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["query_new_mode", "_query_new_mode"]
helpviewer_keywords: ["query_new_mode function", "handler modes", "_query_new_mode function"]
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
---
# _query_new_mode

Returns an integer indicating the new handler mode set by **_set_new_mode** for **malloc**.

## Syntax

```C
int _query_new_mode(
   void
);
```

## Return Value

Returns the current new handler mode, namely 0 or 1, for **malloc**. A return value of 1 indicates that, on failure to allocate memory, **malloc** calls the new handler routine; a return value of 0 indicates that it does not.

## Remarks

The C++ **_query_new_mode** function returns an integer that indicates the new handler mode that is set by the C++ [_set_new_mode](set-new-mode.md) function for [malloc](malloc.md). The new handler mode indicates whether, on failure to allocate memory, **malloc** is to call the new handler routine as set by [_set_new_handler](set-new-handler.md). By default, **malloc** does not call the new handler routine on failure. You can use **_set_new_mode** to override this behavior so that on failure **malloc** calls the new handler routine in the same way that the **`new`** operator does when it fails to allocate memory. For more information, see the discussion of the [new and delete operators](../../cpp/new-and-delete-operators.md) in the C++ Language Reference.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_query_new_mode**|\<new.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
[_query_new_handler](query-new-handler.md)<br/>
