---
description: "Learn more about: _set_new_mode"
title: "_set_new_mode"
ms.date: "4/2/2020"
api_name: ["_set_new_mode", "_o__set_new_mode"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["set_new_mode", "_set_new_mode"]
helpviewer_keywords: ["handler modes", "_set_new_mode function", "set_new_mode function"]
ms.assetid: 4d14039a-e54e-4689-8c70-74a4b9834768
---
# _set_new_mode

Sets a new handler mode for **malloc**.

## Syntax

```cpp
int _set_new_mode( int newhandlermode );
```

### Parameters

*newhandlermode*<br/>
New handler mode for **malloc**; valid value is 0 or 1.

## Return Value

Returns the previous handler mode set for **malloc**. A return value of 1 indicates that, on failure to allocate memory, **malloc** previously called the new handler routine; a return value of 0 indicates that it did not. If the *newhandlermode* argument does not equal 0 or 1, returns -1.

## Remarks

The C++ **_set_new_mode** function sets the new handler mode for [malloc](malloc.md). The new handler mode indicates whether, on failure, **malloc** is to call the new handler routine as set by [_set_new_handler](set-new-handler.md). By default, **malloc** does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when **malloc** fails to allocate memory, **malloc** calls the new handler routine in the same way that the **`new`** operator does when it fails for the same reason. For more information, see the [new](../../cpp/new-operator-cpp.md) and [delete](../../cpp/delete-operator-cpp.md) operators in the *C++ Language Reference*. To override the default, call:

```cpp
_set_new_mode(1);
```

early in your program or link with Newmode.obj (see [Link Options](../../c-runtime-library/link-options.md)).

This function validates its parameter. If *newhandlermode* is anything other than 0 or 1, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, <strong>_set_new_mode</strong> returns -1 and sets **errno** to `EINVAL`.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_set_new_mode**|\<new.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
[_query_new_handler](query-new-handler.md)<br/>
[_query_new_mode](query-new-mode.md)<br/>
