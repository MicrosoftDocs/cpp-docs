---
description: "Learn more about: _strdup_dbg, _wcsdup_dbg"
title: "_strdup_dbg, _wcsdup_dbg"
ms.date: "11/04/2016"
api_name: ["_strdup_dbg", "_wcsdup_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wcsdup_dbg", "strdup_dbg", "_strdup_dbg", "wcsdup_dbg"]
helpviewer_keywords: ["_wcsdup_dbg function", "stdup_dbg function", "copying strings", "duplicating strings", "strings [C++], copying", "strings [C++], duplicating", "_strdup_dbg function", "wcsdup_dbg function"]
ms.assetid: 681db70c-d124-43ab-b83e-5eeea9035097
---
# `_strdup_dbg`, `_wcsdup_dbg`

Versions of [`_strdup` and `_wcsdup`](strdup-wcsdup-mbsdup.md) that use the debug version of `malloc`.

## Syntax

```C
char *_strdup_dbg(
   const char *strSource,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wcsdup_dbg(
   const wchar_t *strSource,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*`strSource`*\
Null-terminated source string.

*`blockType`*\
Requested type of memory block: `_CLIENT_BLOCK` or `_NORMAL_BLOCK`.

*`filename`*\
Pointer to name of source file that requested allocation operation or `NULL`.

*`linenumber`*\
Line number in source file where allocation operation was requested or `NULL`.

## Return value

Each of these functions returns a pointer to the storage location for the copied string or `NULL` if storage can't be allocated.

## Remarks

The **`_strdup_dbg`** and **`_wcsdup_dbg`** functions are identical to `_strdup` and `_wcsdup` except that, when `_DEBUG` is defined, these functions use the debug version of `malloc`, `_malloc_dbg`, to allocate memory for the duplicated string. For information on the debugging features of `_malloc_dbg`, see [`_malloc_dbg`](malloc-dbg.md).

You don't need to call these functions explicitly in most cases. Instead, you can define the flag `_CRTDBG_MAP_ALLOC`. When `_CRTDBG_MAP_ALLOC` is defined, calls to `_strdup` and `_wcsdup` are remapped to **`_strdup_dbg`** and **`_wcsdup_dbg`**, respectively, with the *`blockType`* set to `_NORMAL_BLOCK`. Thus, you don't need to call these functions explicitly unless you want to mark the heap blocks as `_CLIENT_BLOCK`. For more information on block types, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcsdup_dbg` | **`_strdup_dbg`** | `_mbsdup` | **`_wcsdup_dbg`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_strdup_dbg`**, **`_wcsdup_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

All debug versions of the [C run-time libraries](../crt-library-features.md).

## See also

[String manipulation](../string-manipulation-crt.md)\
[`_strdup`, `_wcsdup`, `_mbsdup`](strdup-wcsdup-mbsdup.md)\
[Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md)
