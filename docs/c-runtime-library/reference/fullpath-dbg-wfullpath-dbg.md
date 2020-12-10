---
description: "Learn more about: _fullpath_dbg, _wfullpath_dbg"
title: "_fullpath_dbg, _wfullpath_dbg"
ms.date: "11/04/2016"
api_name: ["_wfullpath_dbg", "_fullpath_dbg"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wfullpath_dbg", "_wfullpath_dbg", "_fullpath_dbg", "fullpath_dbg"]
helpviewer_keywords: ["_fullpath_dbg function", "relative file paths", "absolute paths", "fullpath_dbg function", "_wfullpath_dbg function", "wfullpath_dbg function"]
ms.assetid: 81f72f85-07da-4f5c-866a-598e0fb03f6b
---
# _fullpath_dbg, _wfullpath_dbg

Versions of [_fullpath, _wfullpath](fullpath-wfullpath.md) that use the debug version of **malloc** to allocate memory.

## Syntax

```C
char *_fullpath_dbg(
   char *absPath,
   const char *relPath,
   size_t maxLength,
   int blockType,
   const char *filename,
   int linenumber
);
wchar_t *_wfullpath_dbg(
   wchar_t *absPath,
   const wchar_t *relPath,
   size_t maxLength,
   int blockType,
   const char *filename,
   int linenumber
);
```

### Parameters

*absPath*<br/>
Pointer to a buffer containing the absolute or full path name, or **NULL**.

*relPath*<br/>
Relative path name.

*maxLength*<br/>
Maximum length of the absolute path name buffer (*absPath*). This length is in bytes for **_fullpath** but in wide characters (**`wchar_t`**) for **_wfullpath**.

*blockType*<br/>
Requested type of memory block: **_CLIENT_BLOCK** or **_NORMAL_BLOCK**.

*filename*<br/>
Pointer to the name of the source file that requested allocation operation or **NULL**.

*linenumber*<br/>
Line number in the source file where the allocation operation was requested or **NULL**.

## Return Value

Each function returns a pointer to a buffer containing the absolute path name (*absPath*). If there is an error (for example, if the value passed in *relPath* includes a drive letter that is not valid or cannot be found, or if the length of the created absolute path name (*absPath*) is greater than *maxLength*) the function returns **NULL**.

## Remarks

The **_fullpath_dbg** and **_wfullpath_dbg** functions are identical to **_fullpath** and **_wfullpath** except that, when **_DEBUG** is defined, these functions use the debug version of **malloc**, **_malloc_dbg**, to allocate memory if **NULL** is passed as the first parameter. For information on the debugging features of **_malloc_dbg**, see [_malloc_dbg](malloc-dbg.md).

You do not need to call these functions explicitly in most cases. Instead, you can define the **_CRTDBG_MAP_ALLOC** flag. When **_CRTDBG_MAP_ALLOC** is defined, calls to **_fullpath** and **_wfullpath** are remapped to **_fullpath_dbg** and **_wfullpath_dbg**, respectively, with the *blockType* set to **_NORMAL_BLOCK**. Thus, you do not need to call these functions explicitly unless you want to mark the heap blocks as **_CLIENT_BLOCK**. For more information, see [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfullpath_dbg**|**_fullpath_dbg**|**_fullpath_dbg**|**_wfullpath_dbg**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fullpath_dbg**|\<crtdbg.h>|
|**_wfullpath_dbg**|\<crtdbg.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[Debug Versions of Heap Allocation Functions](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)<br/>
