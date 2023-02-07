---
description: "Learn more about: _getdcwd_dbg, _wgetdcwd_dbg"
title: "_getdcwd_dbg, _wgetdcwd_dbg"
ms.date: "11/04/2016"
api_name: ["_getdcwd_dbg", "_wgetdcwd_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getdcwd_dbg", "getdcwd_dbg", "_wgetdcwd_dbg", "wgetdcwd_dbg"]
helpviewer_keywords: ["working directory", "_getdcwd_dbg function", "wgetdcwd_dbg function", "current working directory", "getdcwd_dbg function", "_wgetdcwd_dbg function", "directories [C++], current working"]
ms.assetid: 266bf6f0-0417-497f-963d-2e0f306d9385
---
# `_getdcwd_dbg`, `_wgetdcwd_dbg`

Debug versions of the [`_getdcwd`, `_wgetdcwd`](getdcwd-wgetdcwd.md) functions (only available during debug).

## Syntax

```C
char *_getdcwd_dbg(
   int drive,
   char *buffer,
   int maxlen,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wgetdcwd_dbg(
   int drive,
   wchar_t *buffer,
   int maxlen,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*`drive`*\
Name of the disk drive.

*`buffer`*\
Storage location for the path.

*`maxlen`*\
Maximum length of the path in characters: **`char`** for **`_getdcwd_dbg`** and **`wchar_t`** for **`_wgetdcwd_dbg`**.

*`blockType`*\
Requested type of the memory block: `_CLIENT_BLOCK` or `_NORMAL_BLOCK`.

*`filename`*\
Pointer to the name of the source file that requested the allocation operation or `NULL`.

*`linenumber`*\
Line number in the source file where the allocation operation was requested or `NULL`.

## Return value

Returns a pointer to *`buffer`*. A `NULL` return value indicates an error, and `errno` is set either to `ENOMEM`, indicating that there's insufficient memory to allocate *`maxlen`* bytes (when a `NULL` argument is given as *`buffer`*), or to `ERANGE`, indicating that the path is longer than *`maxlen`* characters. For more information, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_getdcwd_dbg`** and **`_wgetdcwd_dbg`** functions are identical to `_getdcwd` and `_wgetdcwd` except that, when `_DEBUG` is defined, these functions use the debug version of `malloc` and `_malloc_dbg` to allocate memory if `NULL` is passed as the *`buffer`* parameter. For more information, see [`_malloc_dbg`](malloc-dbg.md).

You don't need to call these functions explicitly in most cases. Instead, you can define the `_CRTDBG_MAP_ALLOC` flag. When `_CRTDBG_MAP_ALLOC` is defined, calls to `_getdcwd` and `_wgetdcwd` are remapped to **`_getdcwd_dbg`** and **`_wgetdcwd_dbg`**, respectively, with the *`blockType`* set to `_NORMAL_BLOCK`. Thus, you don't need to call these functions explicitly unless you want to mark the heap blocks as `_CLIENT_BLOCK`. For more information, see [Types of blocks on the debug heap](../crt-debug-heap-details.md#types-of-blocks-on-the-debug-heap).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tgetdcwd_dbg`** | **`_getdcwd_dbg`** | **`_getdcwd_dbg`** | **`_wgetdcwd_dbg`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_getdcwd_dbg`** | \<crtdbg.h> |
| **`_wgetdcwd_dbg`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[`_getdcwd`, `_wgetdcwd`](getdcwd-wgetdcwd.md)\
[Directory control](../directory-control.md)\
[Debug versions of heap allocation functions](../debug-versions-of-heap-allocation-functions.md)
