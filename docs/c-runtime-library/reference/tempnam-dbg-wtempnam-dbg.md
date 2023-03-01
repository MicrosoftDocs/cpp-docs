---
description: "Learn more about: _tempnam_dbg, _wtempnam_dbg"
title: "_tempnam_dbg, _wtempnam_dbg"
ms.date: "11/04/2016"
api_name: ["_wtempnam_dbg", "_tempnam_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CRTDBG/_tempnam_dbg", "CRTDBG/_wtempnam_dbg", "_tempnam_dbg", "_wtempnam_dbg"]
helpviewer_keywords: ["file names [C++], creating temporary", "tempnam_dbg function", "temporary files, creating", "file names [C++], temporary", "wtempnam_dbg function", "_tempnam_dbg function", "_wtempnam_dbg function"]
ms.assetid: e3760bb4-bb01-4808-b689-2c45af56a170
---
# `_tempnam_dbg`, `_wtempnam_dbg`

Function versions of [`_tempnam`, `_wtempnam`, `tmpnam`, `_wtmpnam`](tempnam-wtempnam-tmpnam-wtmpnam.md) that use the debug version of `malloc`, `_malloc_dbg`.

## Syntax

```C
char *_tempnam_dbg(
   const char *dir,
   const char *prefix,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wtempnam_dbg(
   const wchar_t *dir,
   const wchar_t *prefix,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*`dir`*\
The path used in the file name if there's no TMP environment variable, or if TMP isn't a valid directory.

*`prefix`*\
The string that will be pre-pended to names returned by `_tempnam`.

*`blockType`*\
Requested type of memory block: `_CLIENT_BLOCK` or `_NORMAL_BLOCK`.

*`filename`*\
Pointer to name of source file that requested allocation operation or `NULL`.

*`linenumber`*\
Line number in source file where allocation operation was requested or `NULL`.

## Return value

Each function returns a pointer to the name generated or `NULL` if there's a failure. Failure can occur if there's an invalid directory name specified in the TMP environment variable and in the *`dir`* parameter.

> [!NOTE]
> `free` (or `free_dbg`) does need to be called for pointers allocated by **`_tempnam_dbg`** and **`_wtempnam_dbg`**.

## Remarks

The **`_tempnam_dbg`** and **`_wtempnam_dbg`** functions are identical to `_tempnam` and `_wtempnam` except that, when `_DEBUG` is defined, these functions use the debug version of `malloc` and `_malloc_dbg`, to allocate memory if `NULL` is passed as the first parameter. For more information, see [`_malloc_dbg`](malloc-dbg.md).

You don't need to call these functions explicitly in most cases. Instead, you can define the flag `_CRTDBG_MAP_ALLOC`. When `_CRTDBG_MAP_ALLOC` is defined, calls to `_tempnam` and `_wtempnam` are remapped to **`_tempnam_dbg`** and **`_wtempnam_dbg`**, respectively, with the *`blockType`* set to `_NORMAL_BLOCK`. Thus, you don't need to call these functions explicitly unless you want to mark the heap blocks as `_CLIENT_BLOCK`. For more information, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_ttempnam_dbg` | **`_tempnam_dbg`** | **`_tempnam_dbg`** | **`_wtempnam_dbg`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_tempnam_dbg`**, **`_wtempnam_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[`_tempnam`, `_wtempnam`, `tmpnam`, `_wtmpnam`](tempnam-wtempnam-tmpnam-wtmpnam.md)\
[Stream I/O](../stream-i-o.md)\
[Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md)
