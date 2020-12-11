---
description: "Learn more about: _findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64"
title: "_findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64"
ms.date: "4/2/2020"
api_name: [_findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64, "_o__findnext32", "_o__findnext32i64", "_o__findnext64", "_o__findnext64i32", "_o__wfindnext32", "_o__wfindnext32i64", "_o__wfindnext64", "_o__wfindnext64i32"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["findnext", "_wfindnext32i64", "_tfindnext64i32", "findnext32", "findnext32i64", "wfindnext64i32", "_wfindnext", "tfindnext64", "findnexti64", "_findnexti64", "_tfindnexti64", "_findnext64i32", "tfindnexti64", "tfindnext32", "_wfindnext64i32", "findnext64i32", "_findnext", "_tfindnext32i64", "_wfindnext64", "wfindnext", "wfindnext32", "tfindnext32i64", "_findnext64", "_tfindnext64", "_wfindnext32", "findnext64", "_findnext32i64", "tfindnext", "wfindnexti64", "tfindnext64i32", "_tfindnext32", "wfindnext32i64", "wfindnext64", "_wfindnexti64", "_tfindnext", "_findnext32"]
helpviewer_keywords: ["_wfindnexti64 function", "_tfindnext32 function", "wfindnexti64 function", "_wfindnext32i64 function", "findnext32i64 function", "tfindnext64i32 function", "_tfindnext64i32 function", "_findnext function", "findnext64i32 function", "_tfindnext function", "findnext32 function", "tfindnext32 function", "_findnext32 function", "_tfindnext32i64 function", "_wfindnext function", "tfindnext function", "_findnext64 function", "findnext64 function", "_findnext64i32 function", "wfindnext32i64 function", "findnext function", "wfindnext32 function", "_wfindnext64i32 function", "findnexti64 function", "_wfindnext64 function", "_findnext32i64 function", "_findnexti64 function", "_tfindnext64 function", "wfindnext64i32 function", "tfindnexti64 function", "wfindnext64 function", "wfindnext function", "tfindnext64 function", "_wfindnext32 function", "tfindnext32i64 function", "_tfindnexti64 function"]
ms.assetid: 75d97188-5add-4698-a46c-4c492378f0f8
---
# _findnext, _findnext32, _findnext32i64, _findnext64, _findnext64i32, _findnexti64, _wfindnext, _wfindnext32, _wfindnext32i64, _wfindnext64, _wfindnext64i32, _wfindnexti64

Find the next name, if any, that matches the *filespec* argument in a previous call to [_findfirst](findfirst-functions.md), and then alter the *fileinfo* structure contents accordingly.

## Syntax

```C
int _findnext(
   intptr_t handle,
   struct _finddata_t *fileinfo
);
int _findnext32(
   intptr_t handle,
   struct _finddata32_t *fileinfo
);
int _findnext64(
   intptr_t handle,
   struct __finddata64_t *fileinfo
);
int _findnexti64(
   intptr_t handle,
   struct __finddatai64_t *fileinfo
);
int _findnext32i64(
   intptr_t handle,
   struct _finddata32i64_t *fileinfo
);
int _findnext64i32(
   intptr_t handle,
   struct _finddata64i32_t *fileinfo
);
int _wfindnext(
   intptr_t handle,
   struct _wfinddata_t *fileinfo
);
int _wfindnext32(
   intptr_t handle,
   struct _wfinddata32_t *fileinfo
);
int _wfindnext64(
   intptr_t handle,
   struct _wfinddata64_t *fileinfo
);
int _wfindnexti64(
   intptr_t handle,
   struct _wfinddatai64_t *fileinfo
);
int _wfindnext32i64(
   intptr_t handle,
   struct _wfinddatai64_t *fileinfo
);
int _wfindnext64i32(
   intptr_t handle,
   struct _wfinddata64i32_t *fileinfo
);
```

### Parameters

*handle*<br/>
Search handle returned by a previous call to **_findfirst**.

*fileinfo*<br/>
File information buffer.

## Return Value

If successful, returns 0. Otherwise, returns -1 and sets **errno** to a value indicating the nature of the failure. Possible error codes are shown in the following table.

|errno value|Condition|
|-|-|
| **EINVAL** | Invalid parameter: *fileinfo* was **NULL**. Or, the operating system returned an unexpected error. |
| **ENOENT** | No more matching files could be found. |
| **ENOMEM** | Not enough memory or the file name's length exceeded **MAX_PATH**. |

If an invalid parameter is passed in, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

## Remarks

You must call [_findclose](findclose.md) after you are finished using either the **_findfirst** or **_findnext** function (or any variants). This frees up resources used by these functions in your application.

The variations of these functions with the **w** prefix are wide-character versions; otherwise, they are identical to the corresponding single-byte functions.

Variations of these functions support 32-bit or 64-bit time types and 32-bit or 64-bit file sizes. The first numerical suffix (**32** or **64**) indicates the size of the time type used; the second suffix is either **i32** or **i64**, indicating whether the file size is represented as a 32-bit or 64-bit integer. For information about which versions support 32-bit and 64-bit time types and file sizes, see the following table. The variations that use a 64-bit time type allow file-creation dates to be expressed up through 23:59:59, December 31, 3000, UTC; whereas those using 32-bit time types only represent dates through 23:59:59 January 18, 2038, UTC. Midnight, January 1, 1970, is the lower bound of the date range for all these functions.

Unless you have a specific reason to use the versions that specify the time size explicitly, use **_findnext** or **_wfindnext** or, if you need to support file sizes greater than 3 GB, use **_findnexti64** or **_wfindnexti64**. All these functions use the 64-bit time type. In previous versions, these functions used a 32-bit time type. If this is a breaking change for an application, you might define **_USE_32BIT_TIME_T** to get the old behavior. If **_USE_32BIT_TIME_T** is defined, **_findnext**, **_finnexti64** and their corresponding Unicode versions use a 32-bit time.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Time Type and File Length Type Variations of _findnext

|Functions|**_USE_32BIT_TIME_T** defined?|Time type|File length type|
|---------------|----------------------------------|---------------|----------------------|
|**_findnext**, **_wfindnext**|Not defined|64-bit|32-bit|
|**_findnext**, **_wfindnext**|Defined|32-bit|32-bit|
|**_findnext32**, **_wfindnext32**|Not affected by the macro definition|32-bit|32-bit|
|**_findnext64**, **_wfindnext64**|Not affected by the macro definition|64-bit|64-bit|
|**_findnexti64**, **_wfindnexti64**|Not defined|64-bit|64-bit|
|**_findnexti64**, **_wfindnexti64**|Defined|32-bit|64-bit|
|**_findnext32i64**, **_wfindnext32i64**|Not affected by the macro definition|32-bit|64-bit|
|**_findnext64i32**, **_wfindnext64i32**|Not affected by the macro definition|64-bit|32-bit|

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfindnext**|**_findnext**|**_findnext**|**_wfindnext**|
|**_tfindnext32**|**_findnext32**|**_findnext32**|**_wfindnext32**|
|**_tfindnext64**|**_findnext64**|**_findnext64**|**_wfindnext64**|
|**_tfindnexti64**|**_findnexti64**|**_findnexti64**|**_wfindnexti64**|
|**_tfindnext32i64**|**_findnext32i64**|**_findnext32i64**|**_wfindnext32i64**|
|**_tfindnext64i32**|**_findnext64i32**|**_findnext64i32**|**_wfindnext64i32**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_findnext**|\<io.h>|
|**_findnext32**|\<io.h>|
|**_findnext64**|\<io.h>|
|**_findnexti64**|\<io.h>|
|**_findnext32i64**|\<io.h>|
|**_findnext64i32**|\<io.h>|
|**_wfindnext**|\<io.h> or \<wchar.h>|
|**_wfindnext32**|\<io.h> or \<wchar.h>|
|**_wfindnext64**|\<io.h> or \<wchar.h>|
|**_wfindnexti64**|\<io.h> or \<wchar.h>|
|**_wfindnext32i64**|\<io.h> or \<wchar.h>|
|**_wfindnext64i32**|\<io.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[System Calls](../../c-runtime-library/system-calls.md)<br/>
[Filename Search Functions](../../c-runtime-library/filename-search-functions.md)<br/>
